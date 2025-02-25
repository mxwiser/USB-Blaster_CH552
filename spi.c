
/********************************** (C) COPYRIGHT *******************************
* File Name          : SPI.C
* Author             : WCH
* Version            : V1.0
* Date               : 2017/07/05
* Description        : CH554 SPI主、从模式接口函数
注：片选有效时，从机会自动加载SPI0_S_PRE的预置值到发送移位缓冲区，所以最好可以在片选
有效前向SPI0_S_PRE寄存器写入预发值，或者在主机端丢弃首个接收字节，发送时注意主机会先 
取走SPI0_S_PRE里面的值产生一个S0_IF_BYTE中断。
如果片选从无效到有效，从机首先进行发送的话，最好把输出的首字节放到SPI0_S_PRE寄存器中；
如果已经处于片选有效的话，数据数据使用SPI0_DATA就可以
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
********************************************************************************/
                                                        //调试信息打印

#include "spi.h" 



/*******************************************************************************
* Function Name  : SPIMasterModeSet( UINT8 mode ) 
* Description    : SPI主机模式初始化
* Input          : UINT8 mode						 
* Output         : None
* Return         : None
*******************************************************************************/
void SPIMasterModeSet(uint8_t mode)
{

    if (mode == 1)
    {
        SPI0_CTRL = 0x00; // SCK常态低电平模式,关闭输出
    }
    if (mode == 2)
    {
        SPI0_CTRL = 0x60; // SCK常态低电平模式，开启输出
    }
    if (mode == 0)
    {
        SPI0_SETUP = 0x08; //Master，LSB模式
        SPI0_CTRL = 0x00;
    }

                                                            

    //P1_MOD_OC |= 0xFF;
    // P1_DIR_PU |= 0xFF;                                                        //SCS,MOSI,SCK设推挽输出
}

/*******************************************************************************
* Function Name  : CH554SPIInterruptInit()
* Description    : CH554SPI中断初始化
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPIInterruptInit()
{
    //IP_EX |= bIP_SPI0;                                                       //SPI0中断优先级设置
    SPI0_SETUP |= bS0_IE_FIFO_OV | bS0_IE_BYTE;                                //使能接收1字节中断，使能FIFO溢出中断
    SPI0_CTRL |= bS0_AUTO_IF;                                                  //自动清S0_IF_BYTE中断标志
    SPI0_STAT |= 0xff;                                                         //清空SPI0中断标志
#ifdef SPI_Interrupt
    IE_SPI0 = 1;                                                               //使能SPI0中断
#endif
}

/*******************************************************************************
* Function Name  : CH554SPIMasterWrite(UINT8 dat)
* Description    : CH554硬件SPI写数据,主机模式
* Input          : UINT8 dat   数据
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPIMasterWrite(uint8_t dat)
{
    SPI0_DATA = dat;                                                           
    while(S0_FREE == 0);													   //等待传输完成		
//如果bS0_DATA_DIR为1，此处可以直接读取一个字节的数据用于快速读写	
}

/*******************************************************************************
* Function Name  : CH554SPIMasterRead( )
* Description    : CH554硬件SPI0读数据，主机模式
* Input          : None
* Output         : None
* Return         : UINT8 ret   
*******************************************************************************/
uint8_t CH554SPIMasterRead()
{
    SPI0_DATA = 0xff;
    while(S0_FREE == 0);
    return SPI0_DATA;
}

/*******************************************************************************
* Function Name  : SPISlvModeSet( ) 
* Description    : SPI从机模式初始化
* Input          : None						 
* Output         : None
* Return         : None
*******************************************************************************/
void SPISlvModeSet( )
{
    SPI0_SETUP = 0x80;                                                        //Slv模式,高位在前
    SPI0_CTRL = 0x89;                                                         //读写FIFO,自动清S0_IF_BYTE标志
    P1_MOD_OC &= 0x0F;
    P1_DIR_PU &= 0x0F;                                                        //SCS,MOSI,SCK,MISO全设置浮空输入
}

/*******************************************************************************
* Function Name  : CH554SPISlvWrite(UINT8 dat)
* Description    : CH554硬件SPI写数据，从机模式
* Input          : UINT8 dat   数据
* Output         : None
* Return         : None
*******************************************************************************/
void CH554SPISlvWrite(uint8_t dat)
{
    SPI0_DATA = dat;
    while(S0_FREE==0);		                                                     
}

/*******************************************************************************
* Function Name  : CH554SPISlvRead( )
* Description    : CH554硬件SPI0读数据，从机模式
* Input          : None
* Output         : None
* Return         : UINT8 ret   
*******************************************************************************/
uint8_t CH554SPISlvRead()
{
    while(S0_FREE == 0);
    return SPI0_DATA;
}

#if SPI_Interrupt
/*******************************************************************************
* Function Name  : SPIInterrupt(void)
* Description    : SPI 中断服务程序
*******************************************************************************/
void	SPIInterrupt( void ) interrupt INT_NO_SPI0 using 1                       //SPI中断服务程序,使用寄存器组1
{ 
}
#endif

