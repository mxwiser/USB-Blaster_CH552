                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Manuf_Des
                                     12 	.globl _Prod_Des
                                     13 	.globl _SerDes
                                     14 	.globl _LangDes
                                     15 	.globl _CfgDesc
                                     16 	.globl _DevDesc
                                     17 	.globl _ftdi_rom
                                     18 	.globl _main
                                     19 	.globl _DeviceInterrupt
                                     20 	.globl _USBDeviceEndPointCfg
                                     21 	.globl _USBDeviceIntCfg
                                     22 	.globl _USBDeviceCfg
                                     23 	.globl _CH554SPIMasterWrite
                                     24 	.globl _SPIMasterModeSet
                                     25 	.globl _mDelaymS
                                     26 	.globl _CfgFsys
                                     27 	.globl ___memcpy
                                     28 	.globl _P2B0
                                     29 	.globl _P2B1
                                     30 	.globl _P2B2
                                     31 	.globl _P2B3
                                     32 	.globl _P2B4
                                     33 	.globl _P2B5
                                     34 	.globl _P2B6
                                     35 	.globl _P2B7
                                     36 	.globl _TMS
                                     37 	.globl _ASDO
                                     38 	.globl _NCE
                                     39 	.globl _NCS
                                     40 	.globl _LED
                                     41 	.globl _UIF_BUS_RST
                                     42 	.globl _UIF_DETECT
                                     43 	.globl _UIF_TRANSFER
                                     44 	.globl _UIF_SUSPEND
                                     45 	.globl _UIF_HST_SOF
                                     46 	.globl _UIF_FIFO_OV
                                     47 	.globl _U_SIE_FREE
                                     48 	.globl _U_TOG_OK
                                     49 	.globl _U_IS_NAK
                                     50 	.globl _ADC_CHAN0
                                     51 	.globl _ADC_CHAN1
                                     52 	.globl _CMP_CHAN
                                     53 	.globl _ADC_START
                                     54 	.globl _ADC_IF
                                     55 	.globl _CMP_IF
                                     56 	.globl _CMPO
                                     57 	.globl _U1RI
                                     58 	.globl _U1TI
                                     59 	.globl _U1RB8
                                     60 	.globl _U1TB8
                                     61 	.globl _U1REN
                                     62 	.globl _U1SMOD
                                     63 	.globl _U1SM0
                                     64 	.globl _S0_R_FIFO
                                     65 	.globl _S0_T_FIFO
                                     66 	.globl _S0_FREE
                                     67 	.globl _S0_IF_BYTE
                                     68 	.globl _S0_IF_FIRST
                                     69 	.globl _S0_IF_OV
                                     70 	.globl _S0_FST_ACT
                                     71 	.globl _CP_RL2
                                     72 	.globl _C_T2
                                     73 	.globl _TR2
                                     74 	.globl _EXEN2
                                     75 	.globl _TCLK
                                     76 	.globl _RCLK
                                     77 	.globl _EXF2
                                     78 	.globl _CAP1F
                                     79 	.globl _TF2
                                     80 	.globl _RI
                                     81 	.globl _TI
                                     82 	.globl _RB8
                                     83 	.globl _TB8
                                     84 	.globl _REN
                                     85 	.globl _SM2
                                     86 	.globl _SM1
                                     87 	.globl _SM0
                                     88 	.globl _IT0
                                     89 	.globl _IE0
                                     90 	.globl _IT1
                                     91 	.globl _IE1
                                     92 	.globl _TR0
                                     93 	.globl _TF0
                                     94 	.globl _TR1
                                     95 	.globl _TF1
                                     96 	.globl _RXD
                                     97 	.globl _PWM1_
                                     98 	.globl _TXD
                                     99 	.globl _PWM2_
                                    100 	.globl _AIN3
                                    101 	.globl _VBUS1
                                    102 	.globl _INT0
                                    103 	.globl _TXD1_
                                    104 	.globl _INT1
                                    105 	.globl _T0
                                    106 	.globl _RXD1_
                                    107 	.globl _PWM2
                                    108 	.globl _T1
                                    109 	.globl _UDP
                                    110 	.globl _UDM
                                    111 	.globl _TIN0
                                    112 	.globl _CAP1
                                    113 	.globl _T2
                                    114 	.globl _AIN0
                                    115 	.globl _VBUS2
                                    116 	.globl _TIN1
                                    117 	.globl _CAP2
                                    118 	.globl _T2EX
                                    119 	.globl _RXD_
                                    120 	.globl _TXD_
                                    121 	.globl _AIN1
                                    122 	.globl _UCC1
                                    123 	.globl _TIN2
                                    124 	.globl _SCS
                                    125 	.globl _CAP1_
                                    126 	.globl _T2_
                                    127 	.globl _AIN2
                                    128 	.globl _UCC2
                                    129 	.globl _TIN3
                                    130 	.globl _PWM1
                                    131 	.globl _MOSI
                                    132 	.globl _TIN4
                                    133 	.globl _RXD1
                                    134 	.globl _MISO
                                    135 	.globl _TIN5
                                    136 	.globl _TXD1
                                    137 	.globl _SCK
                                    138 	.globl _IE_SPI0
                                    139 	.globl _IE_TKEY
                                    140 	.globl _IE_USB
                                    141 	.globl _IE_ADC
                                    142 	.globl _IE_UART1
                                    143 	.globl _IE_PWMX
                                    144 	.globl _IE_GPIO
                                    145 	.globl _IE_WDOG
                                    146 	.globl _PX0
                                    147 	.globl _PT0
                                    148 	.globl _PX1
                                    149 	.globl _PT1
                                    150 	.globl _PS
                                    151 	.globl _PT2
                                    152 	.globl _PL_FLAG
                                    153 	.globl _PH_FLAG
                                    154 	.globl _EX0
                                    155 	.globl _ET0
                                    156 	.globl _EX1
                                    157 	.globl _ET1
                                    158 	.globl _ES
                                    159 	.globl _ET2
                                    160 	.globl _E_DIS
                                    161 	.globl _EA
                                    162 	.globl _P
                                    163 	.globl _F1
                                    164 	.globl _OV
                                    165 	.globl _RS0
                                    166 	.globl _RS1
                                    167 	.globl _F0
                                    168 	.globl _AC
                                    169 	.globl _CY
                                    170 	.globl _UEP1_DMA_H
                                    171 	.globl _UEP1_DMA_L
                                    172 	.globl _UEP1_DMA
                                    173 	.globl _UEP0_DMA_H
                                    174 	.globl _UEP0_DMA_L
                                    175 	.globl _UEP0_DMA
                                    176 	.globl _UEP2_3_MOD
                                    177 	.globl _UEP4_1_MOD
                                    178 	.globl _UEP3_DMA_H
                                    179 	.globl _UEP3_DMA_L
                                    180 	.globl _UEP3_DMA
                                    181 	.globl _UEP2_DMA_H
                                    182 	.globl _UEP2_DMA_L
                                    183 	.globl _UEP2_DMA
                                    184 	.globl _USB_DEV_AD
                                    185 	.globl _USB_CTRL
                                    186 	.globl _USB_INT_EN
                                    187 	.globl _UEP4_T_LEN
                                    188 	.globl _UEP4_CTRL
                                    189 	.globl _UEP0_T_LEN
                                    190 	.globl _UEP0_CTRL
                                    191 	.globl _USB_RX_LEN
                                    192 	.globl _USB_MIS_ST
                                    193 	.globl _USB_INT_ST
                                    194 	.globl _USB_INT_FG
                                    195 	.globl _UEP3_T_LEN
                                    196 	.globl _UEP3_CTRL
                                    197 	.globl _UEP2_T_LEN
                                    198 	.globl _UEP2_CTRL
                                    199 	.globl _UEP1_T_LEN
                                    200 	.globl _UEP1_CTRL
                                    201 	.globl _UDEV_CTRL
                                    202 	.globl _USB_C_CTRL
                                    203 	.globl _TKEY_DATH
                                    204 	.globl _TKEY_DATL
                                    205 	.globl _TKEY_DAT
                                    206 	.globl _TKEY_CTRL
                                    207 	.globl _ADC_DATA
                                    208 	.globl _ADC_CFG
                                    209 	.globl _ADC_CTRL
                                    210 	.globl _SBAUD1
                                    211 	.globl _SBUF1
                                    212 	.globl _SCON1
                                    213 	.globl _SPI0_SETUP
                                    214 	.globl _SPI0_CK_SE
                                    215 	.globl _SPI0_CTRL
                                    216 	.globl _SPI0_DATA
                                    217 	.globl _SPI0_STAT
                                    218 	.globl _PWM_CK_SE
                                    219 	.globl _PWM_CTRL
                                    220 	.globl _PWM_DATA1
                                    221 	.globl _PWM_DATA2
                                    222 	.globl _T2CAP1H
                                    223 	.globl _T2CAP1L
                                    224 	.globl _T2CAP1
                                    225 	.globl _TH2
                                    226 	.globl _TL2
                                    227 	.globl _T2COUNT
                                    228 	.globl _RCAP2H
                                    229 	.globl _RCAP2L
                                    230 	.globl _RCAP2
                                    231 	.globl _T2MOD
                                    232 	.globl _T2CON
                                    233 	.globl _SBUF
                                    234 	.globl _SCON
                                    235 	.globl _TH1
                                    236 	.globl _TH0
                                    237 	.globl _TL1
                                    238 	.globl _TL0
                                    239 	.globl _TMOD
                                    240 	.globl _TCON
                                    241 	.globl _XBUS_AUX
                                    242 	.globl _PIN_FUNC
                                    243 	.globl _P3_DIR_PU
                                    244 	.globl _P3_MOD_OC
                                    245 	.globl _P3
                                    246 	.globl _P2
                                    247 	.globl _P1_DIR_PU
                                    248 	.globl _P1_MOD_OC
                                    249 	.globl _P1
                                    250 	.globl _ROM_CTRL
                                    251 	.globl _ROM_DATA_H
                                    252 	.globl _ROM_DATA_L
                                    253 	.globl _ROM_DATA
                                    254 	.globl _ROM_ADDR_H
                                    255 	.globl _ROM_ADDR_L
                                    256 	.globl _ROM_ADDR
                                    257 	.globl _GPIO_IE
                                    258 	.globl _IP_EX
                                    259 	.globl _IE_EX
                                    260 	.globl _IP
                                    261 	.globl _IE
                                    262 	.globl _WDOG_COUNT
                                    263 	.globl _RESET_KEEP
                                    264 	.globl _WAKE_CTRL
                                    265 	.globl _CLOCK_CFG
                                    266 	.globl _PCON
                                    267 	.globl _GLOBAL_CFG
                                    268 	.globl _SAFE_MOD
                                    269 	.globl _DPH
                                    270 	.globl _DPL
                                    271 	.globl _SP
                                    272 	.globl _B
                                    273 	.globl _ACC
                                    274 	.globl _PSW
                                    275 	.globl _Ep2Buffer
                                    276 	.globl _Ep1Buffer
                                    277 	.globl _Ep0Buffer
                                    278 	.globl _receive_buffer
                                    279 	.globl _transmit_buffer
                                    280 	.globl _send_len
                                    281 	.globl _transmit_buffer_out_offset
                                    282 	.globl _transmit_buffer_in_offset
                                    283 	.globl _latency_timer
                                    284 	.globl _ep1_in_busy
                                    285 	.globl _sof_count
                                    286 	.globl _USBBufOutPoint
                                    287 	.globl _USBByteCount
                                    288 	.globl _SetupReqBuf
                                    289 	.globl _pDescr
                                    290 	.globl _send_dummy
                                    291 	.globl _vendor_control
                                    292 	.globl _UsbConfig
                                    293 	.globl _Count
                                    294 	.globl _SetupReq
                                    295 	.globl _SetupLen
                                    296 ;--------------------------------------------------------
                                    297 ; special function registers
                                    298 ;--------------------------------------------------------
                                    299 	.area RSEG    (ABS,DATA)
      000000                        300 	.org 0x0000
                           0000D0   301 _PSW	=	0x00d0
                           0000E0   302 _ACC	=	0x00e0
                           0000F0   303 _B	=	0x00f0
                           000081   304 _SP	=	0x0081
                           000082   305 _DPL	=	0x0082
                           000083   306 _DPH	=	0x0083
                           0000A1   307 _SAFE_MOD	=	0x00a1
                           0000B1   308 _GLOBAL_CFG	=	0x00b1
                           000087   309 _PCON	=	0x0087
                           0000B9   310 _CLOCK_CFG	=	0x00b9
                           0000A9   311 _WAKE_CTRL	=	0x00a9
                           0000FE   312 _RESET_KEEP	=	0x00fe
                           0000FF   313 _WDOG_COUNT	=	0x00ff
                           0000A8   314 _IE	=	0x00a8
                           0000B8   315 _IP	=	0x00b8
                           0000E8   316 _IE_EX	=	0x00e8
                           0000E9   317 _IP_EX	=	0x00e9
                           0000C7   318 _GPIO_IE	=	0x00c7
                           008584   319 _ROM_ADDR	=	0x8584
                           000084   320 _ROM_ADDR_L	=	0x0084
                           000085   321 _ROM_ADDR_H	=	0x0085
                           008F8E   322 _ROM_DATA	=	0x8f8e
                           00008E   323 _ROM_DATA_L	=	0x008e
                           00008F   324 _ROM_DATA_H	=	0x008f
                           000086   325 _ROM_CTRL	=	0x0086
                           000090   326 _P1	=	0x0090
                           000092   327 _P1_MOD_OC	=	0x0092
                           000093   328 _P1_DIR_PU	=	0x0093
                           0000A0   329 _P2	=	0x00a0
                           0000B0   330 _P3	=	0x00b0
                           000096   331 _P3_MOD_OC	=	0x0096
                           000097   332 _P3_DIR_PU	=	0x0097
                           0000C6   333 _PIN_FUNC	=	0x00c6
                           0000A2   334 _XBUS_AUX	=	0x00a2
                           000088   335 _TCON	=	0x0088
                           000089   336 _TMOD	=	0x0089
                           00008A   337 _TL0	=	0x008a
                           00008B   338 _TL1	=	0x008b
                           00008C   339 _TH0	=	0x008c
                           00008D   340 _TH1	=	0x008d
                           000098   341 _SCON	=	0x0098
                           000099   342 _SBUF	=	0x0099
                           0000C8   343 _T2CON	=	0x00c8
                           0000C9   344 _T2MOD	=	0x00c9
                           00CBCA   345 _RCAP2	=	0xcbca
                           0000CA   346 _RCAP2L	=	0x00ca
                           0000CB   347 _RCAP2H	=	0x00cb
                           00CDCC   348 _T2COUNT	=	0xcdcc
                           0000CC   349 _TL2	=	0x00cc
                           0000CD   350 _TH2	=	0x00cd
                           00CFCE   351 _T2CAP1	=	0xcfce
                           0000CE   352 _T2CAP1L	=	0x00ce
                           0000CF   353 _T2CAP1H	=	0x00cf
                           00009B   354 _PWM_DATA2	=	0x009b
                           00009C   355 _PWM_DATA1	=	0x009c
                           00009D   356 _PWM_CTRL	=	0x009d
                           00009E   357 _PWM_CK_SE	=	0x009e
                           0000F8   358 _SPI0_STAT	=	0x00f8
                           0000F9   359 _SPI0_DATA	=	0x00f9
                           0000FA   360 _SPI0_CTRL	=	0x00fa
                           0000FB   361 _SPI0_CK_SE	=	0x00fb
                           0000FC   362 _SPI0_SETUP	=	0x00fc
                           0000C0   363 _SCON1	=	0x00c0
                           0000C1   364 _SBUF1	=	0x00c1
                           0000C2   365 _SBAUD1	=	0x00c2
                           000080   366 _ADC_CTRL	=	0x0080
                           00009A   367 _ADC_CFG	=	0x009a
                           00009F   368 _ADC_DATA	=	0x009f
                           0000C3   369 _TKEY_CTRL	=	0x00c3
                           00C5C4   370 _TKEY_DAT	=	0xc5c4
                           0000C4   371 _TKEY_DATL	=	0x00c4
                           0000C5   372 _TKEY_DATH	=	0x00c5
                           000091   373 _USB_C_CTRL	=	0x0091
                           0000D1   374 _UDEV_CTRL	=	0x00d1
                           0000D2   375 _UEP1_CTRL	=	0x00d2
                           0000D3   376 _UEP1_T_LEN	=	0x00d3
                           0000D4   377 _UEP2_CTRL	=	0x00d4
                           0000D5   378 _UEP2_T_LEN	=	0x00d5
                           0000D6   379 _UEP3_CTRL	=	0x00d6
                           0000D7   380 _UEP3_T_LEN	=	0x00d7
                           0000D8   381 _USB_INT_FG	=	0x00d8
                           0000D9   382 _USB_INT_ST	=	0x00d9
                           0000DA   383 _USB_MIS_ST	=	0x00da
                           0000DB   384 _USB_RX_LEN	=	0x00db
                           0000DC   385 _UEP0_CTRL	=	0x00dc
                           0000DD   386 _UEP0_T_LEN	=	0x00dd
                           0000DE   387 _UEP4_CTRL	=	0x00de
                           0000DF   388 _UEP4_T_LEN	=	0x00df
                           0000E1   389 _USB_INT_EN	=	0x00e1
                           0000E2   390 _USB_CTRL	=	0x00e2
                           0000E3   391 _USB_DEV_AD	=	0x00e3
                           00E5E4   392 _UEP2_DMA	=	0xe5e4
                           0000E4   393 _UEP2_DMA_L	=	0x00e4
                           0000E5   394 _UEP2_DMA_H	=	0x00e5
                           00E7E6   395 _UEP3_DMA	=	0xe7e6
                           0000E6   396 _UEP3_DMA_L	=	0x00e6
                           0000E7   397 _UEP3_DMA_H	=	0x00e7
                           0000EA   398 _UEP4_1_MOD	=	0x00ea
                           0000EB   399 _UEP2_3_MOD	=	0x00eb
                           00EDEC   400 _UEP0_DMA	=	0xedec
                           0000EC   401 _UEP0_DMA_L	=	0x00ec
                           0000ED   402 _UEP0_DMA_H	=	0x00ed
                           00EFEE   403 _UEP1_DMA	=	0xefee
                           0000EE   404 _UEP1_DMA_L	=	0x00ee
                           0000EF   405 _UEP1_DMA_H	=	0x00ef
                                    406 ;--------------------------------------------------------
                                    407 ; special function bits
                                    408 ;--------------------------------------------------------
                                    409 	.area RSEG    (ABS,DATA)
      000000                        410 	.org 0x0000
                           0000D7   411 _CY	=	0x00d7
                           0000D6   412 _AC	=	0x00d6
                           0000D5   413 _F0	=	0x00d5
                           0000D4   414 _RS1	=	0x00d4
                           0000D3   415 _RS0	=	0x00d3
                           0000D2   416 _OV	=	0x00d2
                           0000D1   417 _F1	=	0x00d1
                           0000D0   418 _P	=	0x00d0
                           0000AF   419 _EA	=	0x00af
                           0000AE   420 _E_DIS	=	0x00ae
                           0000AD   421 _ET2	=	0x00ad
                           0000AC   422 _ES	=	0x00ac
                           0000AB   423 _ET1	=	0x00ab
                           0000AA   424 _EX1	=	0x00aa
                           0000A9   425 _ET0	=	0x00a9
                           0000A8   426 _EX0	=	0x00a8
                           0000BF   427 _PH_FLAG	=	0x00bf
                           0000BE   428 _PL_FLAG	=	0x00be
                           0000BD   429 _PT2	=	0x00bd
                           0000BC   430 _PS	=	0x00bc
                           0000BB   431 _PT1	=	0x00bb
                           0000BA   432 _PX1	=	0x00ba
                           0000B9   433 _PT0	=	0x00b9
                           0000B8   434 _PX0	=	0x00b8
                           0000EF   435 _IE_WDOG	=	0x00ef
                           0000EE   436 _IE_GPIO	=	0x00ee
                           0000ED   437 _IE_PWMX	=	0x00ed
                           0000EC   438 _IE_UART1	=	0x00ec
                           0000EB   439 _IE_ADC	=	0x00eb
                           0000EA   440 _IE_USB	=	0x00ea
                           0000E9   441 _IE_TKEY	=	0x00e9
                           0000E8   442 _IE_SPI0	=	0x00e8
                           000097   443 _SCK	=	0x0097
                           000097   444 _TXD1	=	0x0097
                           000097   445 _TIN5	=	0x0097
                           000096   446 _MISO	=	0x0096
                           000096   447 _RXD1	=	0x0096
                           000096   448 _TIN4	=	0x0096
                           000095   449 _MOSI	=	0x0095
                           000095   450 _PWM1	=	0x0095
                           000095   451 _TIN3	=	0x0095
                           000095   452 _UCC2	=	0x0095
                           000095   453 _AIN2	=	0x0095
                           000094   454 _T2_	=	0x0094
                           000094   455 _CAP1_	=	0x0094
                           000094   456 _SCS	=	0x0094
                           000094   457 _TIN2	=	0x0094
                           000094   458 _UCC1	=	0x0094
                           000094   459 _AIN1	=	0x0094
                           000093   460 _TXD_	=	0x0093
                           000092   461 _RXD_	=	0x0092
                           000091   462 _T2EX	=	0x0091
                           000091   463 _CAP2	=	0x0091
                           000091   464 _TIN1	=	0x0091
                           000091   465 _VBUS2	=	0x0091
                           000091   466 _AIN0	=	0x0091
                           000090   467 _T2	=	0x0090
                           000090   468 _CAP1	=	0x0090
                           000090   469 _TIN0	=	0x0090
                           0000B7   470 _UDM	=	0x00b7
                           0000B6   471 _UDP	=	0x00b6
                           0000B5   472 _T1	=	0x00b5
                           0000B4   473 _PWM2	=	0x00b4
                           0000B4   474 _RXD1_	=	0x00b4
                           0000B4   475 _T0	=	0x00b4
                           0000B3   476 _INT1	=	0x00b3
                           0000B2   477 _TXD1_	=	0x00b2
                           0000B2   478 _INT0	=	0x00b2
                           0000B2   479 _VBUS1	=	0x00b2
                           0000B2   480 _AIN3	=	0x00b2
                           0000B1   481 _PWM2_	=	0x00b1
                           0000B1   482 _TXD	=	0x00b1
                           0000B0   483 _PWM1_	=	0x00b0
                           0000B0   484 _RXD	=	0x00b0
                           00008F   485 _TF1	=	0x008f
                           00008E   486 _TR1	=	0x008e
                           00008D   487 _TF0	=	0x008d
                           00008C   488 _TR0	=	0x008c
                           00008B   489 _IE1	=	0x008b
                           00008A   490 _IT1	=	0x008a
                           000089   491 _IE0	=	0x0089
                           000088   492 _IT0	=	0x0088
                           00009F   493 _SM0	=	0x009f
                           00009E   494 _SM1	=	0x009e
                           00009D   495 _SM2	=	0x009d
                           00009C   496 _REN	=	0x009c
                           00009B   497 _TB8	=	0x009b
                           00009A   498 _RB8	=	0x009a
                           000099   499 _TI	=	0x0099
                           000098   500 _RI	=	0x0098
                           0000CF   501 _TF2	=	0x00cf
                           0000CF   502 _CAP1F	=	0x00cf
                           0000CE   503 _EXF2	=	0x00ce
                           0000CD   504 _RCLK	=	0x00cd
                           0000CC   505 _TCLK	=	0x00cc
                           0000CB   506 _EXEN2	=	0x00cb
                           0000CA   507 _TR2	=	0x00ca
                           0000C9   508 _C_T2	=	0x00c9
                           0000C8   509 _CP_RL2	=	0x00c8
                           0000FF   510 _S0_FST_ACT	=	0x00ff
                           0000FE   511 _S0_IF_OV	=	0x00fe
                           0000FD   512 _S0_IF_FIRST	=	0x00fd
                           0000FC   513 _S0_IF_BYTE	=	0x00fc
                           0000FB   514 _S0_FREE	=	0x00fb
                           0000FA   515 _S0_T_FIFO	=	0x00fa
                           0000F8   516 _S0_R_FIFO	=	0x00f8
                           0000C7   517 _U1SM0	=	0x00c7
                           0000C5   518 _U1SMOD	=	0x00c5
                           0000C4   519 _U1REN	=	0x00c4
                           0000C3   520 _U1TB8	=	0x00c3
                           0000C2   521 _U1RB8	=	0x00c2
                           0000C1   522 _U1TI	=	0x00c1
                           0000C0   523 _U1RI	=	0x00c0
                           000087   524 _CMPO	=	0x0087
                           000086   525 _CMP_IF	=	0x0086
                           000085   526 _ADC_IF	=	0x0085
                           000084   527 _ADC_START	=	0x0084
                           000083   528 _CMP_CHAN	=	0x0083
                           000081   529 _ADC_CHAN1	=	0x0081
                           000080   530 _ADC_CHAN0	=	0x0080
                           0000DF   531 _U_IS_NAK	=	0x00df
                           0000DE   532 _U_TOG_OK	=	0x00de
                           0000DD   533 _U_SIE_FREE	=	0x00dd
                           0000DC   534 _UIF_FIFO_OV	=	0x00dc
                           0000DB   535 _UIF_HST_SOF	=	0x00db
                           0000DA   536 _UIF_SUSPEND	=	0x00da
                           0000D9   537 _UIF_TRANSFER	=	0x00d9
                           0000D8   538 _UIF_DETECT	=	0x00d8
                           0000D8   539 _UIF_BUS_RST	=	0x00d8
                           000091   540 _LED	=	0x0091
                           000094   541 _NCS	=	0x0094
                           0000B4   542 _NCE	=	0x00b4
                           0000B3   543 _ASDO	=	0x00b3
                           0000B2   544 _TMS	=	0x00b2
                           0000A7   545 _P2B7	=	0x00a7
                           0000A6   546 _P2B6	=	0x00a6
                           0000A5   547 _P2B5	=	0x00a5
                           0000A4   548 _P2B4	=	0x00a4
                           0000A3   549 _P2B3	=	0x00a3
                           0000A2   550 _P2B2	=	0x00a2
                           0000A1   551 _P2B1	=	0x00a1
                           0000A0   552 _P2B0	=	0x00a0
                                    553 ;--------------------------------------------------------
                                    554 ; overlayable register banks
                                    555 ;--------------------------------------------------------
                                    556 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        557 	.ds 8
                                    558 ;--------------------------------------------------------
                                    559 ; overlayable bit register bank
                                    560 ;--------------------------------------------------------
                                    561 	.area BIT_BANK	(REL,OVR,DATA)
      000021                        562 bits:
      000021                        563 	.ds 1
                           008000   564 	b0 = bits[0]
                           008100   565 	b1 = bits[1]
                           008200   566 	b2 = bits[2]
                           008300   567 	b3 = bits[3]
                           008400   568 	b4 = bits[4]
                           008500   569 	b5 = bits[5]
                           008600   570 	b6 = bits[6]
                           008700   571 	b7 = bits[7]
                                    572 ;--------------------------------------------------------
                                    573 ; internal ram data
                                    574 ;--------------------------------------------------------
                                    575 	.area DSEG    (DATA)
      000008                        576 _SetupLen::
      000008                        577 	.ds 2
      00000A                        578 _SetupReq::
      00000A                        579 	.ds 1
      00000B                        580 _Count::
      00000B                        581 	.ds 1
      00000C                        582 _UsbConfig::
      00000C                        583 	.ds 1
      00000D                        584 _vendor_control::
      00000D                        585 	.ds 1
      00000E                        586 _send_dummy::
      00000E                        587 	.ds 1
      00000F                        588 _pDescr::
      00000F                        589 	.ds 3
      000012                        590 _SetupReqBuf::
      000012                        591 	.ds 8
      00001A                        592 _main_length_65536_121:
      00001A                        593 	.ds 1
      00001B                        594 _main_read_en_65536_121:
      00001B                        595 	.ds 1
      00001C                        596 _main_timeout_count_65536_121:
      00001C                        597 	.ds 2
                                    598 ;--------------------------------------------------------
                                    599 ; overlayable items in internal ram
                                    600 ;--------------------------------------------------------
                                    601 	.area	OSEG    (OVR,DATA)
                                    602 ;--------------------------------------------------------
                                    603 ; Stack segment in internal ram
                                    604 ;--------------------------------------------------------
                                    605 	.area	SSEG
      000036                        606 __start__stack:
      000036                        607 	.ds	1
                                    608 
                                    609 ;--------------------------------------------------------
                                    610 ; indirectly addressable internal ram data
                                    611 ;--------------------------------------------------------
                                    612 	.area ISEG    (DATA)
      00002D                        613 _USBByteCount::
      00002D                        614 	.ds 1
      00002E                        615 _USBBufOutPoint::
      00002E                        616 	.ds 1
      00002F                        617 _sof_count::
      00002F                        618 	.ds 2
      000031                        619 _ep1_in_busy::
      000031                        620 	.ds 1
      000032                        621 _latency_timer::
      000032                        622 	.ds 1
      000033                        623 _transmit_buffer_in_offset::
      000033                        624 	.ds 1
      000034                        625 _transmit_buffer_out_offset::
      000034                        626 	.ds 1
      000035                        627 _send_len::
      000035                        628 	.ds 1
                                    629 ;--------------------------------------------------------
                                    630 ; absolute internal ram data
                                    631 ;--------------------------------------------------------
                                    632 	.area IABS    (ABS,DATA)
                                    633 	.area IABS    (ABS,DATA)
                                    634 ;--------------------------------------------------------
                                    635 ; bit data
                                    636 ;--------------------------------------------------------
                                    637 	.area BSEG    (BIT)
      000000                        638 _DeviceInterrupt_sloc0_1_0:
      000000                        639 	.ds 1
      000001                        640 _main_sloc0_1_0:
      000001                        641 	.ds 1
                                    642 ;--------------------------------------------------------
                                    643 ; paged external ram data
                                    644 ;--------------------------------------------------------
                                    645 	.area PSEG    (PAG,XDATA)
                                    646 ;--------------------------------------------------------
                                    647 ; external ram data
                                    648 ;--------------------------------------------------------
                                    649 	.area XSEG    (XDATA)
                           000000   650 _transmit_buffer	=	0x0000
                           000080   651 _receive_buffer	=	0x0080
                           000100   652 _Ep0Buffer	=	0x0100
                           000140   653 _Ep1Buffer	=	0x0140
                           000180   654 _Ep2Buffer	=	0x0180
                                    655 ;--------------------------------------------------------
                                    656 ; absolute external ram data
                                    657 ;--------------------------------------------------------
                                    658 	.area XABS    (ABS,XDATA)
                                    659 ;--------------------------------------------------------
                                    660 ; external initialized ram data
                                    661 ;--------------------------------------------------------
                                    662 	.area XISEG   (XDATA)
                                    663 	.area HOME    (CODE)
                                    664 	.area GSINIT0 (CODE)
                                    665 	.area GSINIT1 (CODE)
                                    666 	.area GSINIT2 (CODE)
                                    667 	.area GSINIT3 (CODE)
                                    668 	.area GSINIT4 (CODE)
                                    669 	.area GSINIT5 (CODE)
                                    670 	.area GSINIT  (CODE)
                                    671 	.area GSFINAL (CODE)
                                    672 	.area CSEG    (CODE)
                                    673 ;--------------------------------------------------------
                                    674 ; interrupt vector
                                    675 ;--------------------------------------------------------
                                    676 	.area HOME    (CODE)
      000000                        677 __interrupt_vect:
      000000 02 00 49         [24]  678 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  679 	reti
      000004                        680 	.ds	7
      00000B 32               [24]  681 	reti
      00000C                        682 	.ds	7
      000013 32               [24]  683 	reti
      000014                        684 	.ds	7
      00001B 32               [24]  685 	reti
      00001C                        686 	.ds	7
      000023 32               [24]  687 	reti
      000024                        688 	.ds	7
      00002B 32               [24]  689 	reti
      00002C                        690 	.ds	7
      000033 32               [24]  691 	reti
      000034                        692 	.ds	7
      00003B 32               [24]  693 	reti
      00003C                        694 	.ds	7
      000043 02 01 11         [24]  695 	ljmp	_DeviceInterrupt
                                    696 ;--------------------------------------------------------
                                    697 ; global & static initialisations
                                    698 ;--------------------------------------------------------
                                    699 	.area HOME    (CODE)
                                    700 	.area GSINIT  (CODE)
                                    701 	.area GSFINAL (CODE)
                                    702 	.area GSINIT  (CODE)
                                    703 	.globl __sdcc_gsinit_startup
                                    704 	.globl __sdcc_program_startup
                                    705 	.globl __start__stack
                                    706 	.globl __mcs51_genXINIT
                                    707 	.globl __mcs51_genXRAMCLEAR
                                    708 	.globl __mcs51_genRAMCLEAR
                                    709 ;	main.c:122: volatile __idata uint8_t USBByteCount = 0;   //代表USB端点接收到的数据
      0000A2 78 2D            [12]  710 	mov	r0,#_USBByteCount
      0000A4 76 00            [12]  711 	mov	@r0,#0x00
                                    712 ;	main.c:123: volatile __idata uint8_t USBBufOutPoint = 0; //取数据指针
      0000A6 78 2E            [12]  713 	mov	r0,#_USBBufOutPoint
      0000A8 76 00            [12]  714 	mov	@r0,#0x00
                                    715 ;	main.c:124: volatile __idata uint16_t sof_count = 0;
      0000AA 78 2F            [12]  716 	mov	r0,#_sof_count
      0000AC 76 00            [12]  717 	mov	@r0,#0x00
      0000AE 08               [12]  718 	inc	r0
      0000AF 76 00            [12]  719 	mov	@r0,#0x00
                                    720 ;	main.c:125: volatile __idata uint8_t ep1_in_busy = 0; //上传端点是否忙标志
      0000B1 78 31            [12]  721 	mov	r0,#_ep1_in_busy
      0000B3 76 00            [12]  722 	mov	@r0,#0x00
                                    723 ;	main.c:126: volatile __idata uint8_t latency_timer = 4;
      0000B5 78 32            [12]  724 	mov	r0,#_latency_timer
      0000B7 76 04            [12]  725 	mov	@r0,#0x04
                                    726 	.area GSFINAL (CODE)
      0000B9 02 00 46         [24]  727 	ljmp	__sdcc_program_startup
                                    728 ;--------------------------------------------------------
                                    729 ; Home
                                    730 ;--------------------------------------------------------
                                    731 	.area HOME    (CODE)
                                    732 	.area HOME    (CODE)
      000046                        733 __sdcc_program_startup:
      000046 02 06 8F         [24]  734 	ljmp	_main
                                    735 ;	return from main will return to caller
                                    736 ;--------------------------------------------------------
                                    737 ; code
                                    738 ;--------------------------------------------------------
                                    739 	.area CSEG    (CODE)
                                    740 ;------------------------------------------------------------
                                    741 ;Allocation info for local variables in function 'USBDeviceCfg'
                                    742 ;------------------------------------------------------------
                                    743 ;	main.c:135: void USBDeviceCfg()
                                    744 ;	-----------------------------------------
                                    745 ;	 function USBDeviceCfg
                                    746 ;	-----------------------------------------
      0000BC                        747 _USBDeviceCfg:
                           000007   748 	ar7 = 0x07
                           000006   749 	ar6 = 0x06
                           000005   750 	ar5 = 0x05
                           000004   751 	ar4 = 0x04
                           000003   752 	ar3 = 0x03
                           000002   753 	ar2 = 0x02
                           000001   754 	ar1 = 0x01
                           000000   755 	ar0 = 0x00
                                    756 ;	main.c:137: USB_CTRL = 0x00;									   //清空USB控制寄存器
      0000BC 75 E2 00         [24]  757 	mov	_USB_CTRL,#0x00
                                    758 ;	main.c:138: USB_CTRL &= ~bUC_HOST_MODE;							   //该位为选择设备模式
      0000BF 53 E2 7F         [24]  759 	anl	_USB_CTRL,#0x7f
                                    760 ;	main.c:139: USB_CTRL |= bUC_DEV_PU_EN | bUC_INT_BUSY | bUC_DMA_EN; //USB设备和内部上拉使能,在中断期间中断标志未清除前自动返回NAK
      0000C2 43 E2 29         [24]  761 	orl	_USB_CTRL,#0x29
                                    762 ;	main.c:140: USB_DEV_AD = 0x00;									   //设备地址初始化
      0000C5 75 E3 00         [24]  763 	mov	_USB_DEV_AD,#0x00
                                    764 ;	main.c:143: USB_CTRL &= ~bUC_LOW_SPEED;
      0000C8 53 E2 BF         [24]  765 	anl	_USB_CTRL,#0xbf
                                    766 ;	main.c:144: UDEV_CTRL &= ~bUD_LOW_SPEED; //选择全速12M模式，默认方式
      0000CB 53 D1 FB         [24]  767 	anl	_UDEV_CTRL,#0xfb
                                    768 ;	main.c:145: UDEV_CTRL = bUD_PD_DIS;		 // 禁止DP/DM下拉电阻
      0000CE 75 D1 80         [24]  769 	mov	_UDEV_CTRL,#0x80
                                    770 ;	main.c:146: UDEV_CTRL |= bUD_PORT_EN;	//使能物理端口
      0000D1 43 D1 01         [24]  771 	orl	_UDEV_CTRL,#0x01
                                    772 ;	main.c:147: }
      0000D4 22               [24]  773 	ret
                                    774 ;------------------------------------------------------------
                                    775 ;Allocation info for local variables in function 'USBDeviceIntCfg'
                                    776 ;------------------------------------------------------------
                                    777 ;	main.c:155: void USBDeviceIntCfg()
                                    778 ;	-----------------------------------------
                                    779 ;	 function USBDeviceIntCfg
                                    780 ;	-----------------------------------------
      0000D5                        781 _USBDeviceIntCfg:
                                    782 ;	main.c:157: USB_INT_EN |= bUIE_SUSPEND;  //使能设备挂起中断
      0000D5 43 E1 04         [24]  783 	orl	_USB_INT_EN,#0x04
                                    784 ;	main.c:158: USB_INT_EN |= bUIE_TRANSFER; //使能USB传输完成中断
      0000D8 43 E1 02         [24]  785 	orl	_USB_INT_EN,#0x02
                                    786 ;	main.c:159: USB_INT_EN |= bUIE_BUS_RST;  //使能设备模式USB总线复位中断
      0000DB 43 E1 01         [24]  787 	orl	_USB_INT_EN,#0x01
                                    788 ;	main.c:160: USB_INT_EN |= bUIE_DEV_SOF;	 //For timeout count.
      0000DE 43 E1 80         [24]  789 	orl	_USB_INT_EN,#0x80
                                    790 ;	main.c:161: USB_INT_FG |= 0x1F;			 //清中断标志
      0000E1 43 D8 1F         [24]  791 	orl	_USB_INT_FG,#0x1f
                                    792 ;	main.c:162: IE_USB = 1;					 //使能USB中断
                                    793 ;	assignBit
      0000E4 D2 EA            [12]  794 	setb	_IE_USB
                                    795 ;	main.c:163: EA = 1;						 //允许单片机中断
                                    796 ;	assignBit
      0000E6 D2 AF            [12]  797 	setb	_EA
                                    798 ;	main.c:164: }
      0000E8 22               [24]  799 	ret
                                    800 ;------------------------------------------------------------
                                    801 ;Allocation info for local variables in function 'USBDeviceEndPointCfg'
                                    802 ;------------------------------------------------------------
                                    803 ;	main.c:172: void USBDeviceEndPointCfg()
                                    804 ;	-----------------------------------------
                                    805 ;	 function USBDeviceEndPointCfg
                                    806 ;	-----------------------------------------
      0000E9                        807 _USBDeviceEndPointCfg:
                                    808 ;	main.c:174: UEP1_DMA = (uint16_t)Ep1Buffer; //端点1 IN数据传输地址
      0000E9 7E 40            [12]  809 	mov	r6,#_Ep1Buffer
      0000EB 7F 01            [12]  810 	mov	r7,#(_Ep1Buffer >> 8)
      0000ED 8E EE            [24]  811 	mov	((_UEP1_DMA >> 0) & 0xFF),r6
      0000EF 8F EF            [24]  812 	mov	((_UEP1_DMA >> 8) & 0xFF),r7
                                    813 ;	main.c:175: UEP2_DMA = (uint16_t)Ep2Buffer; //端点2 OUT数据传输地址
      0000F1 7E 80            [12]  814 	mov	r6,#_Ep2Buffer
      0000F3 7F 01            [12]  815 	mov	r7,#(_Ep2Buffer >> 8)
      0000F5 8E E4            [24]  816 	mov	((_UEP2_DMA >> 0) & 0xFF),r6
      0000F7 8F E5            [24]  817 	mov	((_UEP2_DMA >> 8) & 0xFF),r7
                                    818 ;	main.c:176: UEP2_3_MOD = 0x08;
      0000F9 75 EB 08         [24]  819 	mov	_UEP2_3_MOD,#0x08
                                    820 ;	main.c:177: UEP2_CTRL = bUEP_AUTO_TOG | UEP_R_RES_ACK; //端点2自动翻转同步标志位，OUT返回ACK
      0000FC 75 D4 10         [24]  821 	mov	_UEP2_CTRL,#0x10
                                    822 ;	main.c:178: UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK; //端点1自动翻转同步标志位，IN事务返回NAK
      0000FF 75 D2 12         [24]  823 	mov	_UEP1_CTRL,#0x12
                                    824 ;	main.c:179: UEP0_DMA = (uint16_t)Ep0Buffer;			   //端点0数据传输地址
      000102 7E 00            [12]  825 	mov	r6,#_Ep0Buffer
      000104 7F 01            [12]  826 	mov	r7,#(_Ep0Buffer >> 8)
      000106 8E EC            [24]  827 	mov	((_UEP0_DMA >> 0) & 0xFF),r6
      000108 8F ED            [24]  828 	mov	((_UEP0_DMA >> 8) & 0xFF),r7
                                    829 ;	main.c:180: UEP4_1_MOD = 0x40;						   //端点1上传缓冲区；端点0单64字节收发缓冲区
      00010A 75 EA 40         [24]  830 	mov	_UEP4_1_MOD,#0x40
                                    831 ;	main.c:181: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK; //手动翻转，OUT事务返回ACK，IN事务返回NAK
      00010D 75 DC 02         [24]  832 	mov	_UEP0_CTRL,#0x02
                                    833 ;	main.c:182: }
      000110 22               [24]  834 	ret
                                    835 ;------------------------------------------------------------
                                    836 ;Allocation info for local variables in function 'DeviceInterrupt'
                                    837 ;------------------------------------------------------------
                                    838 ;len                       Allocated to registers r4 r5 
                                    839 ;addr                      Allocated to registers r5 
                                    840 ;------------------------------------------------------------
                                    841 ;	main.c:188: void DeviceInterrupt(void) __interrupt(INT_NO_USB) //USB中断服务程序,使用寄存器组1
                                    842 ;	-----------------------------------------
                                    843 ;	 function DeviceInterrupt
                                    844 ;	-----------------------------------------
      000111                        845 _DeviceInterrupt:
      000111 C0 21            [24]  846 	push	bits
      000113 C0 E0            [24]  847 	push	acc
      000115 C0 F0            [24]  848 	push	b
      000117 C0 82            [24]  849 	push	dpl
      000119 C0 83            [24]  850 	push	dph
      00011B C0 07            [24]  851 	push	(0+7)
      00011D C0 06            [24]  852 	push	(0+6)
      00011F C0 05            [24]  853 	push	(0+5)
      000121 C0 04            [24]  854 	push	(0+4)
      000123 C0 03            [24]  855 	push	(0+3)
      000125 C0 02            [24]  856 	push	(0+2)
      000127 C0 01            [24]  857 	push	(0+1)
      000129 C0 00            [24]  858 	push	(0+0)
      00012B C0 D0            [24]  859 	push	psw
      00012D 75 D0 00         [24]  860 	mov	psw,#0x00
                                    861 ;	main.c:191: if (UIF_TRANSFER) //USB传输完成标志
      000130 20 D9 03         [24]  862 	jb	_UIF_TRANSFER,00516$
      000133 02 06 29         [24]  863 	ljmp	00223$
      000136                        864 00516$:
                                    865 ;	main.c:193: switch (USB_INT_ST & (MASK_UIS_TOKEN | MASK_UIS_ENDP))
      000136 74 3F            [12]  866 	mov	a,#0x3f
      000138 55 D9            [12]  867 	anl	a,_USB_INT_ST
      00013A FF               [12]  868 	mov	r7,a
      00013B FE               [12]  869 	mov	r6,a
      00013C BE 00 03         [24]  870 	cjne	r6,#0x00,00517$
      00013F 02 06 21         [24]  871 	ljmp	00219$
      000142                        872 00517$:
      000142 BF 02 02         [24]  873 	cjne	r7,#0x02,00518$
      000145 80 48            [24]  874 	sjmp	00105$
      000147                        875 00518$:
      000147 BF 10 02         [24]  876 	cjne	r7,#0x10,00519$
      00014A 80 1D            [24]  877 	sjmp	00103$
      00014C                        878 00519$:
      00014C BF 11 02         [24]  879 	cjne	r7,#0x11,00520$
      00014F 80 18            [24]  880 	sjmp	00103$
      000151                        881 00520$:
      000151 BF 12 02         [24]  882 	cjne	r7,#0x12,00521$
      000154 80 13            [24]  883 	sjmp	00103$
      000156                        884 00521$:
      000156 BF 20 03         [24]  885 	cjne	r7,#0x20,00522$
      000159 02 05 A6         [24]  886 	ljmp	00212$
      00015C                        887 00522$:
      00015C BF 21 02         [24]  888 	cjne	r7,#0x21,00523$
      00015F 80 1C            [24]  889 	sjmp	00104$
      000161                        890 00523$:
      000161 BF 30 02         [24]  891 	cjne	r7,#0x30,00524$
      000164 80 42            [24]  892 	sjmp	00108$
      000166                        893 00524$:
      000166 02 06 27         [24]  894 	ljmp	00221$
                                    895 ;	main.c:197: case UIS_TOKEN_SOF | 2:
      000169                        896 00103$:
                                    897 ;	main.c:198: sof_count++;
      000169 78 2F            [12]  898 	mov	r0,#_sof_count
      00016B 86 06            [24]  899 	mov	ar6,@r0
      00016D 08               [12]  900 	inc	r0
      00016E 86 07            [24]  901 	mov	ar7,@r0
      000170 78 2F            [12]  902 	mov	r0,#_sof_count
      000172 74 01            [12]  903 	mov	a,#0x01
      000174 2E               [12]  904 	add	a,r6
      000175 F6               [12]  905 	mov	@r0,a
      000176 E4               [12]  906 	clr	a
      000177 3F               [12]  907 	addc	a,r7
      000178 08               [12]  908 	inc	r0
      000179 F6               [12]  909 	mov	@r0,a
                                    910 ;	main.c:199: break;
      00017A 02 06 27         [24]  911 	ljmp	00221$
                                    912 ;	main.c:201: case UIS_TOKEN_IN | 1: //endpoint 1
      00017D                        913 00104$:
                                    914 ;	main.c:202: UEP1_T_LEN = 0;
      00017D 75 D3 00         [24]  915 	mov	_UEP1_T_LEN,#0x00
                                    916 ;	main.c:203: UEP1_CTRL = UEP1_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_NAK; //默认应答NAK
      000180 74 FC            [12]  917 	mov	a,#0xfc
      000182 55 D2            [12]  918 	anl	a,_UEP1_CTRL
      000184 44 02            [12]  919 	orl	a,#0x02
      000186 F5 D2            [12]  920 	mov	_UEP1_CTRL,a
                                    921 ;	main.c:204: ep1_in_busy = 0;
      000188 78 31            [12]  922 	mov	r0,#_ep1_in_busy
      00018A 76 00            [12]  923 	mov	@r0,#0x00
                                    924 ;	main.c:205: break;
      00018C 02 06 27         [24]  925 	ljmp	00221$
                                    926 ;	main.c:206: case UIS_TOKEN_OUT | 2: //endpoint 2
      00018F                        927 00105$:
                                    928 ;	main.c:208: if (U_TOG_OK) // 不同步的数据包将丢弃
      00018F 20 DE 03         [24]  929 	jb	_U_TOG_OK,00525$
      000192 02 06 27         [24]  930 	ljmp	00221$
      000195                        931 00525$:
                                    932 ;	main.c:210: USBByteCount = USB_RX_LEN;
      000195 78 2D            [12]  933 	mov	r0,#_USBByteCount
      000197 A6 DB            [24]  934 	mov	@r0,_USB_RX_LEN
                                    935 ;	main.c:211: USBBufOutPoint = 0;										 //取数据指针复位
      000199 78 2E            [12]  936 	mov	r0,#_USBBufOutPoint
      00019B 76 00            [12]  937 	mov	@r0,#0x00
                                    938 ;	main.c:212: UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_R_RES | UEP_R_RES_NAK; //收到一包数据就NAK，主函数处理完，由主函数修改响应方式
      00019D 74 F3            [12]  939 	mov	a,#0xf3
      00019F 55 D4            [12]  940 	anl	a,_UEP2_CTRL
      0001A1 44 08            [12]  941 	orl	a,#0x08
      0001A3 F5 D4            [12]  942 	mov	_UEP2_CTRL,a
                                    943 ;	main.c:214: break;
      0001A5 02 06 27         [24]  944 	ljmp	00221$
                                    945 ;	main.c:217: case UIS_TOKEN_SETUP | 0: //SETUP事务
      0001A8                        946 00108$:
                                    947 ;	main.c:218: len = USB_RX_LEN;
      0001A8 AE DB            [24]  948 	mov	r6,_USB_RX_LEN
      0001AA 7F 00            [12]  949 	mov	r7,#0x00
                                    950 ;	main.c:219: if (len == (sizeof(USB_SETUP_REQ)))
      0001AC BE 08 05         [24]  951 	cjne	r6,#0x08,00526$
      0001AF BF 00 02         [24]  952 	cjne	r7,#0x00,00526$
      0001B2 80 03            [24]  953 	sjmp	00527$
      0001B4                        954 00526$:
      0001B4 02 05 76         [24]  955 	ljmp	00204$
      0001B7                        956 00527$:
                                    957 ;	main.c:222: SetupLen = ((uint16_t)UsbSetupBuf->wLengthH << 8) | (UsbSetupBuf->wLengthL);
      0001B7 90 01 07         [24]  958 	mov	dptr,#(_Ep0Buffer + 0x0007)
      0001BA E0               [24]  959 	movx	a,@dptr
      0001BB FE               [12]  960 	mov	r6,a
      0001BC 7F 00            [12]  961 	mov	r7,#0x00
      0001BE 90 01 06         [24]  962 	mov	dptr,#(_Ep0Buffer + 0x0006)
      0001C1 E0               [24]  963 	movx	a,@dptr
      0001C2 7C 00            [12]  964 	mov	r4,#0x00
      0001C4 4F               [12]  965 	orl	a,r7
      0001C5 F5 08            [12]  966 	mov	_SetupLen,a
      0001C7 EC               [12]  967 	mov	a,r4
      0001C8 4E               [12]  968 	orl	a,r6
      0001C9 F5 09            [12]  969 	mov	(_SetupLen + 1),a
                                    970 ;	main.c:223: len = 0;			// 默认为成功并且上传0长度
      0001CB 7E 00            [12]  971 	mov	r6,#0x00
      0001CD 7F 00            [12]  972 	mov	r7,#0x00
                                    973 ;	main.c:224: vendor_control = 0; //默认非vendor
                                    974 ;	1-genFromRTrack replaced	mov	_vendor_control,#0x00
      0001CF 8F 0D            [24]  975 	mov	_vendor_control,r7
                                    976 ;	main.c:225: SetupReq = UsbSetupBuf->bRequest;
      0001D1 90 01 01         [24]  977 	mov	dptr,#(_Ep0Buffer + 0x0001)
      0001D4 E0               [24]  978 	movx	a,@dptr
      0001D5 F5 0A            [12]  979 	mov	_SetupReq,a
                                    980 ;	main.c:226: if ((UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK) == USB_REQ_TYP_VENDOR)
      0001D7 90 01 00         [24]  981 	mov	dptr,#_Ep0Buffer
      0001DA E0               [24]  982 	movx	a,@dptr
      0001DB FD               [12]  983 	mov	r5,a
      0001DC 53 05 60         [24]  984 	anl	ar5,#0x60
      0001DF 7C 00            [12]  985 	mov	r4,#0x00
      0001E1 BD 40 05         [24]  986 	cjne	r5,#0x40,00528$
      0001E4 BC 00 02         [24]  987 	cjne	r4,#0x00,00528$
      0001E7 80 03            [24]  988 	sjmp	00529$
      0001E9                        989 00528$:
      0001E9 02 02 89         [24]  990 	ljmp	00201$
      0001EC                        991 00529$:
                                    992 ;	main.c:228: vendor_control = 1;
      0001EC 75 0D 01         [24]  993 	mov	_vendor_control,#0x01
                                    994 ;	main.c:229: if (SetupLen == 0)
      0001EF E5 08            [12]  995 	mov	a,_SetupLen
      0001F1 45 09            [12]  996 	orl	a,(_SetupLen + 1)
      0001F3 70 22            [24]  997 	jnz	00122$
                                    998 ;	main.c:232: switch (SetupReq)
      0001F5 E5 0A            [12]  999 	mov	a,_SetupReq
      0001F7 24 FB            [12] 1000 	add	a,#0xff - 0x04
      0001F9 50 03            [24] 1001 	jnc	00531$
      0001FB 02 05 7A         [24] 1002 	ljmp	00205$
      0001FE                       1003 00531$:
      0001FE E5 0A            [12] 1004 	mov	a,_SetupReq
      000200 75 F0 03         [24] 1005 	mov	b,#0x03
      000203 A4               [48] 1006 	mul	ab
      000204 90 02 08         [24] 1007 	mov	dptr,#00532$
      000207 73               [24] 1008 	jmp	@a+dptr
      000208                       1009 00532$:
      000208 02 05 7A         [24] 1010 	ljmp	00205$
      00020B 02 05 7A         [24] 1011 	ljmp	00205$
      00020E 02 05 7A         [24] 1012 	ljmp	00205$
      000211 02 05 7A         [24] 1013 	ljmp	00205$
      000214 02 05 7A         [24] 1014 	ljmp	00205$
                                   1015 ;	main.c:246: }
      000217                       1016 00122$:
                                   1017 ;	main.c:251: switch (SetupReq)
      000217 74 05            [12] 1018 	mov	a,#0x05
      000219 B5 0A 02         [24] 1019 	cjne	a,_SetupReq,00533$
      00021C 80 3A            [24] 1020 	sjmp	00117$
      00021E                       1021 00533$:
      00021E 74 09            [12] 1022 	mov	a,#0x09
      000220 B5 0A 02         [24] 1023 	cjne	a,_SetupReq,00534$
      000223 80 46            [24] 1024 	sjmp	00118$
      000225                       1025 00534$:
      000225 74 90            [12] 1026 	mov	a,#0x90
      000227 B5 0A 4F         [24] 1027 	cjne	a,_SetupReq,00119$
                                   1028 ;	main.c:254: addr = UsbSetupBuf->wIndexL << 1; //((req->wIndex >> 8) & 0x3F) << 1;
      00022A 90 01 04         [24] 1029 	mov	dptr,#(_Ep0Buffer + 0x0004)
      00022D E0               [24] 1030 	movx	a,@dptr
                                   1031 ;	main.c:255: Ep0Buffer[0] = ftdi_rom[addr];
      00022E 25 E0            [12] 1032 	add	a,acc
      000230 FD               [12] 1033 	mov	r5,a
      000231 90 0A 9C         [24] 1034 	mov	dptr,#_ftdi_rom
      000234 93               [24] 1035 	movc	a,@a+dptr
      000235 90 01 00         [24] 1036 	mov	dptr,#_Ep0Buffer
      000238 F0               [24] 1037 	movx	@dptr,a
                                   1038 ;	main.c:256: Ep0Buffer[1] = ftdi_rom[addr + 1];
      000239 7C 00            [12] 1039 	mov	r4,#0x00
      00023B 0D               [12] 1040 	inc	r5
      00023C BD 00 01         [24] 1041 	cjne	r5,#0x00,00537$
      00023F 0C               [12] 1042 	inc	r4
      000240                       1043 00537$:
      000240 ED               [12] 1044 	mov	a,r5
      000241 24 9C            [12] 1045 	add	a,#_ftdi_rom
      000243 F5 82            [12] 1046 	mov	dpl,a
      000245 EC               [12] 1047 	mov	a,r4
      000246 34 0A            [12] 1048 	addc	a,#(_ftdi_rom >> 8)
      000248 F5 83            [12] 1049 	mov	dph,a
      00024A E4               [12] 1050 	clr	a
      00024B 93               [24] 1051 	movc	a,@a+dptr
      00024C FD               [12] 1052 	mov	r5,a
      00024D 90 01 01         [24] 1053 	mov	dptr,#(_Ep0Buffer + 0x0001)
      000250 F0               [24] 1054 	movx	@dptr,a
                                   1055 ;	main.c:257: len = 2;
      000251 7E 02            [12] 1056 	mov	r6,#0x02
      000253 7F 00            [12] 1057 	mov	r7,#0x00
                                   1058 ;	main.c:258: break;
      000255 02 05 7A         [24] 1059 	ljmp	00205$
                                   1060 ;	main.c:259: case FTDI_VEN_REQ_GET_MODEM_STA:
      000258                       1061 00117$:
                                   1062 ;	main.c:261: Ep0Buffer[0] = FTDI_MODEM_STA_DUMMY0;
      000258 90 01 00         [24] 1063 	mov	dptr,#_Ep0Buffer
      00025B 74 31            [12] 1064 	mov	a,#0x31
      00025D F0               [24] 1065 	movx	@dptr,a
                                   1066 ;	main.c:262: Ep0Buffer[1] = FTDI_MODEM_STA_DUMMY1;
      00025E 90 01 01         [24] 1067 	mov	dptr,#(_Ep0Buffer + 0x0001)
      000261 74 60            [12] 1068 	mov	a,#0x60
      000263 F0               [24] 1069 	movx	@dptr,a
                                   1070 ;	main.c:263: len = 2;
      000264 7E 02            [12] 1071 	mov	r6,#0x02
      000266 7F 00            [12] 1072 	mov	r7,#0x00
                                   1073 ;	main.c:264: break;
      000268 02 05 7A         [24] 1074 	ljmp	00205$
                                   1075 ;	main.c:265: case FTDI_VEN_REQ_SET_LAT_TIMER:
      00026B                       1076 00118$:
                                   1077 ;	main.c:266: latency_timer = UsbSetupBuf->wValueL;
      00026B 90 01 02         [24] 1078 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00026E 78 32            [12] 1079 	mov	r0,#_latency_timer
      000270 E0               [24] 1080 	movx	a,@dptr
      000271 F6               [12] 1081 	mov	@r0,a
                                   1082 ;	main.c:267: len = 0;
      000272 7E 00            [12] 1083 	mov	r6,#0x00
      000274 7F 00            [12] 1084 	mov	r7,#0x00
                                   1085 ;	main.c:268: break;
      000276 02 05 7A         [24] 1086 	ljmp	00205$
                                   1087 ;	main.c:269: default:
      000279                       1088 00119$:
                                   1089 ;	main.c:271: Ep0Buffer[0] = 0x0;
      000279 90 01 00         [24] 1090 	mov	dptr,#_Ep0Buffer
      00027C E4               [12] 1091 	clr	a
      00027D F0               [24] 1092 	movx	@dptr,a
                                   1093 ;	main.c:272: Ep0Buffer[1] = 0x0;
      00027E 90 01 01         [24] 1094 	mov	dptr,#(_Ep0Buffer + 0x0001)
      000281 F0               [24] 1095 	movx	@dptr,a
                                   1096 ;	main.c:273: len = 2;
      000282 7E 02            [12] 1097 	mov	r6,#0x02
      000284 7F 00            [12] 1098 	mov	r7,#0x00
                                   1099 ;	main.c:275: }
      000286 02 05 7A         [24] 1100 	ljmp	00205$
      000289                       1101 00201$:
                                   1102 ;	main.c:278: else if ((UsbSetupBuf->bRequestType & USB_REQ_TYP_MASK) == USB_REQ_TYP_STANDARD)
      000289 90 01 00         [24] 1103 	mov	dptr,#_Ep0Buffer
      00028C E0               [24] 1104 	movx	a,@dptr
      00028D FD               [12] 1105 	mov	r5,a
      00028E 54 60            [12] 1106 	anl	a,#0x60
      000290 60 03            [24] 1107 	jz	00539$
      000292 02 05 70         [24] 1108 	ljmp	00195$
      000295                       1109 00539$:
                                   1110 ;	main.c:280: switch (SetupReq) //请求码
      000295 E5 0A            [12] 1111 	mov	a,_SetupReq
      000297 24 F5            [12] 1112 	add	a,#0xff - 0x0a
      000299 50 03            [24] 1113 	jnc	00540$
      00029B 02 05 6A         [24] 1114 	ljmp	00193$
      00029E                       1115 00540$:
      00029E E5 0A            [12] 1116 	mov	a,_SetupReq
      0002A0 75 F0 03         [24] 1117 	mov	b,#0x03
      0002A3 A4               [48] 1118 	mul	ab
      0002A4 90 02 A8         [24] 1119 	mov	dptr,#00541$
      0002A7 73               [24] 1120 	jmp	@a+dptr
      0002A8                       1121 00541$:
      0002A8 02 05 48         [24] 1122 	ljmp	00189$
      0002AB 02 03 E4         [24] 1123 	ljmp	00147$
      0002AE 02 05 6A         [24] 1124 	ljmp	00193$
      0002B1 02 04 5F         [24] 1125 	ljmp	00164$
      0002B4 02 05 6A         [24] 1126 	ljmp	00193$
      0002B7 02 03 B1         [24] 1127 	ljmp	00141$
      0002BA 02 02 C9         [24] 1128 	ljmp	00124$
      0002BD 02 05 6A         [24] 1129 	ljmp	00193$
      0002C0 02 03 BE         [24] 1130 	ljmp	00142$
      0002C3 02 03 DB         [24] 1131 	ljmp	00145$
      0002C6 02 05 7A         [24] 1132 	ljmp	00205$
                                   1133 ;	main.c:282: case USB_GET_DESCRIPTOR:
      0002C9                       1134 00124$:
                                   1135 ;	main.c:283: switch (UsbSetupBuf->wValueH)
      0002C9 90 01 03         [24] 1136 	mov	dptr,#(_Ep0Buffer + 0x0003)
      0002CC E0               [24] 1137 	movx	a,@dptr
      0002CD FD               [12] 1138 	mov	r5,a
      0002CE BD 01 02         [24] 1139 	cjne	r5,#0x01,00542$
      0002D1 80 0A            [24] 1140 	sjmp	00125$
      0002D3                       1141 00542$:
      0002D3 BD 02 02         [24] 1142 	cjne	r5,#0x02,00543$
      0002D6 80 14            [24] 1143 	sjmp	00126$
      0002D8                       1144 00543$:
                                   1145 ;	main.c:285: case 1:				  //设备描述符
      0002D8 BD 03 72         [24] 1146 	cjne	r5,#0x03,00137$
      0002DB 80 1E            [24] 1147 	sjmp	00127$
      0002DD                       1148 00125$:
                                   1149 ;	main.c:286: pDescr = DevDesc; //把设备描述符送到要发送的缓冲区
      0002DD 75 0F 1C         [24] 1150 	mov	_pDescr,#_DevDesc
      0002E0 75 10 0B         [24] 1151 	mov	(_pDescr + 1),#(_DevDesc >> 8)
      0002E3 75 11 80         [24] 1152 	mov	(_pDescr + 2),#0x80
                                   1153 ;	main.c:287: len = sizeof(DevDesc);
      0002E6 7C 12            [12] 1154 	mov	r4,#0x12
      0002E8 7D 00            [12] 1155 	mov	r5,#0x00
                                   1156 ;	main.c:288: break;
                                   1157 ;	main.c:289: case 2:				  //配置描述符
      0002EA 80 65            [24] 1158 	sjmp	00138$
      0002EC                       1159 00126$:
                                   1160 ;	main.c:290: pDescr = CfgDesc; //把设备描述符送到要发送的缓冲区
      0002EC 75 0F 2E         [24] 1161 	mov	_pDescr,#_CfgDesc
      0002EF 75 10 0B         [24] 1162 	mov	(_pDescr + 1),#(_CfgDesc >> 8)
      0002F2 75 11 80         [24] 1163 	mov	(_pDescr + 2),#0x80
                                   1164 ;	main.c:291: len = sizeof(CfgDesc);
      0002F5 7C 20            [12] 1165 	mov	r4,#0x20
      0002F7 7D 00            [12] 1166 	mov	r5,#0x00
                                   1167 ;	main.c:292: break;
                                   1168 ;	main.c:293: case 3:
      0002F9 80 56            [24] 1169 	sjmp	00138$
      0002FB                       1170 00127$:
                                   1171 ;	main.c:294: if (UsbSetupBuf->wValueL == 0)
      0002FB 90 01 02         [24] 1172 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0002FE E0               [24] 1173 	movx	a,@dptr
      0002FF 70 0F            [24] 1174 	jnz	00135$
                                   1175 ;	main.c:296: pDescr = LangDes;
      000301 75 0F 4E         [24] 1176 	mov	_pDescr,#_LangDes
      000304 75 10 0B         [24] 1177 	mov	(_pDescr + 1),#(_LangDes >> 8)
      000307 75 11 80         [24] 1178 	mov	(_pDescr + 2),#0x80
                                   1179 ;	main.c:297: len = sizeof(LangDes);
      00030A 7C 04            [12] 1180 	mov	r4,#0x04
      00030C 7D 00            [12] 1181 	mov	r5,#0x00
      00030E 80 41            [24] 1182 	sjmp	00138$
      000310                       1183 00135$:
                                   1184 ;	main.c:299: else if (UsbSetupBuf->wValueL == 1)
      000310 90 01 02         [24] 1185 	mov	dptr,#(_Ep0Buffer + 0x0002)
      000313 E0               [24] 1186 	movx	a,@dptr
      000314 FB               [12] 1187 	mov	r3,a
      000315 BB 01 0F         [24] 1188 	cjne	r3,#0x01,00132$
                                   1189 ;	main.c:301: pDescr = Manuf_Des;
      000318 75 0F 7C         [24] 1190 	mov	_pDescr,#_Manuf_Des
      00031B 75 10 0B         [24] 1191 	mov	(_pDescr + 1),#(_Manuf_Des >> 8)
      00031E 75 11 80         [24] 1192 	mov	(_pDescr + 2),#0x80
                                   1193 ;	main.c:302: len = sizeof(Manuf_Des);
      000321 7C 0E            [12] 1194 	mov	r4,#0x0e
      000323 7D 00            [12] 1195 	mov	r5,#0x00
      000325 80 2A            [24] 1196 	sjmp	00138$
      000327                       1197 00132$:
                                   1198 ;	main.c:304: else if (UsbSetupBuf->wValueL == 2)
      000327 90 01 02         [24] 1199 	mov	dptr,#(_Ep0Buffer + 0x0002)
      00032A E0               [24] 1200 	movx	a,@dptr
      00032B FB               [12] 1201 	mov	r3,a
      00032C BB 02 0F         [24] 1202 	cjne	r3,#0x02,00129$
                                   1203 ;	main.c:306: pDescr = Prod_Des;
      00032F 75 0F 64         [24] 1204 	mov	_pDescr,#_Prod_Des
      000332 75 10 0B         [24] 1205 	mov	(_pDescr + 1),#(_Prod_Des >> 8)
      000335 75 11 80         [24] 1206 	mov	(_pDescr + 2),#0x80
                                   1207 ;	main.c:307: len = sizeof(Prod_Des);
      000338 7C 18            [12] 1208 	mov	r4,#0x18
      00033A 7D 00            [12] 1209 	mov	r5,#0x00
      00033C 80 13            [24] 1210 	sjmp	00138$
      00033E                       1211 00129$:
                                   1212 ;	main.c:311: pDescr = SerDes;
      00033E 75 0F 52         [24] 1213 	mov	_pDescr,#_SerDes
      000341 75 10 0B         [24] 1214 	mov	(_pDescr + 1),#(_SerDes >> 8)
      000344 75 11 80         [24] 1215 	mov	(_pDescr + 2),#0x80
                                   1216 ;	main.c:312: len = sizeof(SerDes);
      000347 7C 12            [12] 1217 	mov	r4,#0x12
      000349 7D 00            [12] 1218 	mov	r5,#0x00
                                   1219 ;	main.c:314: break;
                                   1220 ;	main.c:315: default:
      00034B 80 04            [24] 1221 	sjmp	00138$
      00034D                       1222 00137$:
                                   1223 ;	main.c:316: len = 0xff; //不支持的命令或者出错
      00034D 7C FF            [12] 1224 	mov	r4,#0xff
      00034F 7D 00            [12] 1225 	mov	r5,#0x00
                                   1226 ;	main.c:318: }
      000351                       1227 00138$:
                                   1228 ;	main.c:319: if (SetupLen > len)
      000351 C3               [12] 1229 	clr	c
      000352 EC               [12] 1230 	mov	a,r4
      000353 95 08            [12] 1231 	subb	a,_SetupLen
      000355 ED               [12] 1232 	mov	a,r5
      000356 95 09            [12] 1233 	subb	a,(_SetupLen + 1)
      000358 50 04            [24] 1234 	jnc	00140$
                                   1235 ;	main.c:321: SetupLen = len; //限制总长度
      00035A 8C 08            [24] 1236 	mov	_SetupLen,r4
      00035C 8D 09            [24] 1237 	mov	(_SetupLen + 1),r5
      00035E                       1238 00140$:
                                   1239 ;	main.c:323: len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen; //本次传输长度
      00035E AC 08            [24] 1240 	mov	r4,_SetupLen
      000360 AD 09            [24] 1241 	mov	r5,(_SetupLen + 1)
      000362 C3               [12] 1242 	clr	c
      000363 EC               [12] 1243 	mov	a,r4
      000364 94 08            [12] 1244 	subb	a,#0x08
      000366 ED               [12] 1245 	mov	a,r5
      000367 94 00            [12] 1246 	subb	a,#0x00
      000369 92 00            [24] 1247 	mov	_DeviceInterrupt_sloc0_1_0,c
      00036B 40 06            [24] 1248 	jc	00236$
      00036D 7C 08            [12] 1249 	mov	r4,#0x08
      00036F 7D 00            [12] 1250 	mov	r5,#0x00
      000371 80 04            [24] 1251 	sjmp	00237$
      000373                       1252 00236$:
      000373 AC 08            [24] 1253 	mov	r4,_SetupLen
      000375 AD 09            [24] 1254 	mov	r5,(_SetupLen + 1)
      000377                       1255 00237$:
      000377 8C 06            [24] 1256 	mov	ar6,r4
      000379 8D 07            [24] 1257 	mov	ar7,r5
                                   1258 ;	main.c:324: memcpy(Ep0Buffer, pDescr, len);										  //加载上传数据
      00037B 85 0F 22         [24] 1259 	mov	___memcpy_PARM_2,_pDescr
      00037E 85 10 23         [24] 1260 	mov	(___memcpy_PARM_2 + 1),(_pDescr + 1)
      000381 85 11 24         [24] 1261 	mov	(___memcpy_PARM_2 + 2),(_pDescr + 2)
      000384 8E 25            [24] 1262 	mov	___memcpy_PARM_3,r6
      000386 8F 26            [24] 1263 	mov	(___memcpy_PARM_3 + 1),r7
      000388 90 01 00         [24] 1264 	mov	dptr,#_Ep0Buffer
      00038B 75 F0 00         [24] 1265 	mov	b,#0x00
      00038E C0 07            [24] 1266 	push	ar7
      000390 C0 06            [24] 1267 	push	ar6
      000392 12 0A 0C         [24] 1268 	lcall	___memcpy
      000395 D0 06            [24] 1269 	pop	ar6
      000397 D0 07            [24] 1270 	pop	ar7
                                   1271 ;	main.c:325: SetupLen -= len;
      000399 E5 08            [12] 1272 	mov	a,_SetupLen
      00039B C3               [12] 1273 	clr	c
      00039C 9E               [12] 1274 	subb	a,r6
      00039D F5 08            [12] 1275 	mov	_SetupLen,a
      00039F E5 09            [12] 1276 	mov	a,(_SetupLen + 1)
      0003A1 9F               [12] 1277 	subb	a,r7
      0003A2 F5 09            [12] 1278 	mov	(_SetupLen + 1),a
                                   1279 ;	main.c:326: pDescr += len;
      0003A4 EE               [12] 1280 	mov	a,r6
      0003A5 25 0F            [12] 1281 	add	a,_pDescr
      0003A7 F5 0F            [12] 1282 	mov	_pDescr,a
      0003A9 EF               [12] 1283 	mov	a,r7
      0003AA 35 10            [12] 1284 	addc	a,(_pDescr + 1)
      0003AC F5 10            [12] 1285 	mov	(_pDescr + 1),a
                                   1286 ;	main.c:327: break;
      0003AE 02 05 7A         [24] 1287 	ljmp	00205$
                                   1288 ;	main.c:328: case USB_SET_ADDRESS:
      0003B1                       1289 00141$:
                                   1290 ;	main.c:329: SetupLen = UsbSetupBuf->wValueL; //暂存USB设备地址
      0003B1 90 01 02         [24] 1291 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0003B4 E0               [24] 1292 	movx	a,@dptr
      0003B5 FD               [12] 1293 	mov	r5,a
      0003B6 8D 08            [24] 1294 	mov	_SetupLen,r5
      0003B8 75 09 00         [24] 1295 	mov	(_SetupLen + 1),#0x00
                                   1296 ;	main.c:330: break;
      0003BB 02 05 7A         [24] 1297 	ljmp	00205$
                                   1298 ;	main.c:331: case USB_GET_CONFIGURATION:
      0003BE                       1299 00142$:
                                   1300 ;	main.c:332: Ep0Buffer[0] = UsbConfig;
      0003BE 90 01 00         [24] 1301 	mov	dptr,#_Ep0Buffer
      0003C1 E5 0C            [12] 1302 	mov	a,_UsbConfig
      0003C3 F0               [24] 1303 	movx	@dptr,a
                                   1304 ;	main.c:333: if (SetupLen >= 1)
      0003C4 AC 08            [24] 1305 	mov	r4,_SetupLen
      0003C6 AD 09            [24] 1306 	mov	r5,(_SetupLen + 1)
      0003C8 C3               [12] 1307 	clr	c
      0003C9 EC               [12] 1308 	mov	a,r4
      0003CA 94 01            [12] 1309 	subb	a,#0x01
      0003CC ED               [12] 1310 	mov	a,r5
      0003CD 94 00            [12] 1311 	subb	a,#0x00
      0003CF 50 03            [24] 1312 	jnc	00552$
      0003D1 02 05 7A         [24] 1313 	ljmp	00205$
      0003D4                       1314 00552$:
                                   1315 ;	main.c:335: len = 1;
      0003D4 7E 01            [12] 1316 	mov	r6,#0x01
      0003D6 7F 00            [12] 1317 	mov	r7,#0x00
                                   1318 ;	main.c:337: break;
      0003D8 02 05 7A         [24] 1319 	ljmp	00205$
                                   1320 ;	main.c:338: case USB_SET_CONFIGURATION:
      0003DB                       1321 00145$:
                                   1322 ;	main.c:339: UsbConfig = UsbSetupBuf->wValueL;
      0003DB 90 01 02         [24] 1323 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0003DE E0               [24] 1324 	movx	a,@dptr
      0003DF F5 0C            [12] 1325 	mov	_UsbConfig,a
                                   1326 ;	main.c:340: break;
      0003E1 02 05 7A         [24] 1327 	ljmp	00205$
                                   1328 ;	main.c:343: case USB_CLEAR_FEATURE:												//Clear Feature
      0003E4                       1329 00147$:
                                   1330 ;	main.c:344: if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_DEVICE) /* 清除设备 */
      0003E4 90 01 00         [24] 1331 	mov	dptr,#_Ep0Buffer
      0003E7 E0               [24] 1332 	movx	a,@dptr
      0003E8 54 1F            [12] 1333 	anl	a,#0x1f
      0003EA 70 33            [24] 1334 	jnz	00162$
                                   1335 ;	main.c:346: if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x01)
      0003EC 90 01 03         [24] 1336 	mov	dptr,#(_Ep0Buffer + 0x0003)
      0003EF E0               [24] 1337 	movx	a,@dptr
      0003F0 FC               [12] 1338 	mov	r4,a
      0003F1 7D 00            [12] 1339 	mov	r5,#0x00
      0003F3 90 01 02         [24] 1340 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0003F6 E0               [24] 1341 	movx	a,@dptr
      0003F7 FB               [12] 1342 	mov	r3,a
      0003F8 7A 00            [12] 1343 	mov	r2,#0x00
      0003FA 42 05            [12] 1344 	orl	ar5,a
      0003FC EA               [12] 1345 	mov	a,r2
      0003FD 42 04            [12] 1346 	orl	ar4,a
      0003FF BD 01 16         [24] 1347 	cjne	r5,#0x01,00152$
      000402 BC 00 13         [24] 1348 	cjne	r4,#0x00,00152$
                                   1349 ;	main.c:348: if (CfgDesc[7] & 0x20)
      000405 90 0B 35         [24] 1350 	mov	dptr,#(_CfgDesc + 0x0007)
      000408 E4               [12] 1351 	clr	a
      000409 93               [24] 1352 	movc	a,@a+dptr
      00040A FD               [12] 1353 	mov	r5,a
      00040B 30 E5 03         [24] 1354 	jnb	acc.5,00557$
      00040E 02 05 7A         [24] 1355 	ljmp	00205$
      000411                       1356 00557$:
                                   1357 ;	main.c:354: len = 0xFF; /* 操作失败 */
      000411 7E FF            [12] 1358 	mov	r6,#0xff
      000413 7F 00            [12] 1359 	mov	r7,#0x00
      000415 02 05 7A         [24] 1360 	ljmp	00205$
      000418                       1361 00152$:
                                   1362 ;	main.c:359: len = 0xFF; /* 操作失败 */
      000418 7E FF            [12] 1363 	mov	r6,#0xff
      00041A 7F 00            [12] 1364 	mov	r7,#0x00
      00041C 02 05 7A         [24] 1365 	ljmp	00205$
      00041F                       1366 00162$:
                                   1367 ;	main.c:362: else if ((UsbSetupBuf->bRequestType & USB_REQ_RECIP_MASK) == USB_REQ_RECIP_ENDP) // 端点
      00041F 90 01 00         [24] 1368 	mov	dptr,#_Ep0Buffer
      000422 E0               [24] 1369 	movx	a,@dptr
      000423 FD               [12] 1370 	mov	r5,a
      000424 53 05 1F         [24] 1371 	anl	ar5,#0x1f
      000427 7C 00            [12] 1372 	mov	r4,#0x00
      000429 BD 02 2C         [24] 1373 	cjne	r5,#0x02,00159$
      00042C BC 00 29         [24] 1374 	cjne	r4,#0x00,00159$
                                   1375 ;	main.c:364: switch (UsbSetupBuf->wIndexL)
      00042F 90 01 04         [24] 1376 	mov	dptr,#(_Ep0Buffer + 0x0004)
      000432 E0               [24] 1377 	movx	a,@dptr
      000433 FD               [12] 1378 	mov	r5,a
      000434 BD 02 02         [24] 1379 	cjne	r5,#0x02,00560$
      000437 80 05            [24] 1380 	sjmp	00154$
      000439                       1381 00560$:
                                   1382 ;	main.c:366: case 0x02:
      000439 BD 81 11         [24] 1383 	cjne	r5,#0x81,00156$
      00043C 80 05            [24] 1384 	sjmp	00155$
      00043E                       1385 00154$:
                                   1386 ;	main.c:367: UEP2_CTRL = UEP2_CTRL & ~(bUEP_R_TOG | MASK_UEP_R_RES) | UEP_R_RES_ACK;
      00043E 53 D4 73         [24] 1387 	anl	_UEP2_CTRL,#0x73
                                   1388 ;	main.c:368: break;
                                   1389 ;	main.c:369: case 0x81:
      000441 80 0E            [24] 1390 	sjmp	00157$
      000443                       1391 00155$:
                                   1392 ;	main.c:370: UEP1_CTRL = UEP1_CTRL & ~(bUEP_T_TOG | MASK_UEP_T_RES) | UEP_T_RES_NAK;
      000443 74 BC            [12] 1393 	mov	a,#0xbc
      000445 55 D2            [12] 1394 	anl	a,_UEP1_CTRL
      000447 44 02            [12] 1395 	orl	a,#0x02
      000449 F5 D2            [12] 1396 	mov	_UEP1_CTRL,a
                                   1397 ;	main.c:371: break;
                                   1398 ;	main.c:372: default:
      00044B 80 04            [24] 1399 	sjmp	00157$
      00044D                       1400 00156$:
                                   1401 ;	main.c:373: len = 0xFF; // 不支持的端点
      00044D 7E FF            [12] 1402 	mov	r6,#0xff
      00044F 7F 00            [12] 1403 	mov	r7,#0x00
                                   1404 ;	main.c:375: }
      000451                       1405 00157$:
                                   1406 ;	main.c:376: ep1_in_busy = 0;
      000451 78 31            [12] 1407 	mov	r0,#_ep1_in_busy
      000453 76 00            [12] 1408 	mov	@r0,#0x00
      000455 02 05 7A         [24] 1409 	ljmp	00205$
      000458                       1410 00159$:
                                   1411 ;	main.c:380: len = 0xFF; // 不是端点不支持
      000458 7E FF            [12] 1412 	mov	r6,#0xff
      00045A 7F 00            [12] 1413 	mov	r7,#0x00
                                   1414 ;	main.c:382: break;
      00045C 02 05 7A         [24] 1415 	ljmp	00205$
                                   1416 ;	main.c:383: case USB_SET_FEATURE:												/* Set Feature */
      00045F                       1417 00164$:
                                   1418 ;	main.c:384: if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_DEVICE) /* 设置设备 */
      00045F 90 01 00         [24] 1419 	mov	dptr,#_Ep0Buffer
      000462 E0               [24] 1420 	movx	a,@dptr
      000463 54 1F            [12] 1421 	anl	a,#0x1f
      000465 70 4D            [24] 1422 	jnz	00187$
                                   1423 ;	main.c:386: if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x01)
      000467 90 01 03         [24] 1424 	mov	dptr,#(_Ep0Buffer + 0x0003)
      00046A E0               [24] 1425 	movx	a,@dptr
      00046B FC               [12] 1426 	mov	r4,a
      00046C 7D 00            [12] 1427 	mov	r5,#0x00
      00046E 90 01 02         [24] 1428 	mov	dptr,#(_Ep0Buffer + 0x0002)
      000471 E0               [24] 1429 	movx	a,@dptr
      000472 FB               [12] 1430 	mov	r3,a
      000473 7A 00            [12] 1431 	mov	r2,#0x00
      000475 42 05            [12] 1432 	orl	ar5,a
      000477 EA               [12] 1433 	mov	a,r2
      000478 42 04            [12] 1434 	orl	ar4,a
      00047A BD 01 30         [24] 1435 	cjne	r5,#0x01,00172$
      00047D BC 00 2D         [24] 1436 	cjne	r4,#0x00,00172$
                                   1437 ;	main.c:388: if (CfgDesc[7] & 0x20)
      000480 90 0B 35         [24] 1438 	mov	dptr,#(_CfgDesc + 0x0007)
      000483 E4               [12] 1439 	clr	a
      000484 93               [24] 1440 	movc	a,@a+dptr
      000485 FD               [12] 1441 	mov	r5,a
      000486 30 E5 1D         [24] 1442 	jnb	acc.5,00169$
                                   1443 ;	main.c:394: while (XBUS_AUX & bUART0_TX)
      000489                       1444 00165$:
      000489 E5 A2            [12] 1445 	mov	a,_XBUS_AUX
      00048B 20 E7 FB         [24] 1446 	jb	acc.7,00165$
                                   1447 ;	main.c:398: SAFE_MOD = 0x55;
      00048E 75 A1 55         [24] 1448 	mov	_SAFE_MOD,#0x55
                                   1449 ;	main.c:399: SAFE_MOD = 0xAA;
      000491 75 A1 AA         [24] 1450 	mov	_SAFE_MOD,#0xaa
                                   1451 ;	main.c:400: WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO; //USB或者RXD0/1有信号时可被唤醒
      000494 75 A9 C1         [24] 1452 	mov	_WAKE_CTRL,#0xc1
                                   1453 ;	main.c:401: PCON |= PD;											   //睡眠
      000497 43 87 02         [24] 1454 	orl	_PCON,#0x02
                                   1455 ;	main.c:402: SAFE_MOD = 0x55;
      00049A 75 A1 55         [24] 1456 	mov	_SAFE_MOD,#0x55
                                   1457 ;	main.c:403: SAFE_MOD = 0xAA;
      00049D 75 A1 AA         [24] 1458 	mov	_SAFE_MOD,#0xaa
                                   1459 ;	main.c:404: WAKE_CTRL = 0x00;
      0004A0 75 A9 00         [24] 1460 	mov	_WAKE_CTRL,#0x00
      0004A3 02 05 7A         [24] 1461 	ljmp	00205$
      0004A6                       1462 00169$:
                                   1463 ;	main.c:408: len = 0xFF; /* 操作失败 */
      0004A6 7E FF            [12] 1464 	mov	r6,#0xff
      0004A8 7F 00            [12] 1465 	mov	r7,#0x00
      0004AA 02 05 7A         [24] 1466 	ljmp	00205$
      0004AD                       1467 00172$:
                                   1468 ;	main.c:413: len = 0xFF; /* 操作失败 */
      0004AD 7E FF            [12] 1469 	mov	r6,#0xff
      0004AF 7F 00            [12] 1470 	mov	r7,#0x00
      0004B1 02 05 7A         [24] 1471 	ljmp	00205$
      0004B4                       1472 00187$:
                                   1473 ;	main.c:416: else if ((UsbSetupBuf->bRequestType & 0x1F) == USB_REQ_RECIP_ENDP) /* 设置端点 */
      0004B4 90 01 00         [24] 1474 	mov	dptr,#_Ep0Buffer
      0004B7 E0               [24] 1475 	movx	a,@dptr
      0004B8 FD               [12] 1476 	mov	r5,a
      0004B9 53 05 1F         [24] 1477 	anl	ar5,#0x1f
      0004BC 7C 00            [12] 1478 	mov	r4,#0x00
      0004BE BD 02 05         [24] 1479 	cjne	r5,#0x02,00568$
      0004C1 BC 00 02         [24] 1480 	cjne	r4,#0x00,00568$
      0004C4 80 02            [24] 1481 	sjmp	00569$
      0004C6                       1482 00568$:
      0004C6 80 7A            [24] 1483 	sjmp	00184$
      0004C8                       1484 00569$:
                                   1485 ;	main.c:418: if ((((uint16_t)UsbSetupBuf->wValueH << 8) | UsbSetupBuf->wValueL) == 0x00)
      0004C8 90 01 03         [24] 1486 	mov	dptr,#(_Ep0Buffer + 0x0003)
      0004CB E0               [24] 1487 	movx	a,@dptr
      0004CC FC               [12] 1488 	mov	r4,a
      0004CD 7D 00            [12] 1489 	mov	r5,#0x00
      0004CF 90 01 02         [24] 1490 	mov	dptr,#(_Ep0Buffer + 0x0002)
      0004D2 E0               [24] 1491 	movx	a,@dptr
      0004D3 FB               [12] 1492 	mov	r3,a
      0004D4 7A 00            [12] 1493 	mov	r2,#0x00
      0004D6 42 05            [12] 1494 	orl	ar5,a
      0004D8 EA               [12] 1495 	mov	a,r2
      0004D9 42 04            [12] 1496 	orl	ar4,a
      0004DB ED               [12] 1497 	mov	a,r5
      0004DC 4C               [12] 1498 	orl	a,r4
      0004DD 70 5D            [24] 1499 	jnz	00181$
                                   1500 ;	main.c:420: switch (((uint16_t)UsbSetupBuf->wIndexH << 8) | UsbSetupBuf->wIndexL)
      0004DF 90 01 05         [24] 1501 	mov	dptr,#(_Ep0Buffer + 0x0005)
      0004E2 E0               [24] 1502 	movx	a,@dptr
      0004E3 FC               [12] 1503 	mov	r4,a
      0004E4 7D 00            [12] 1504 	mov	r5,#0x00
      0004E6 90 01 04         [24] 1505 	mov	dptr,#(_Ep0Buffer + 0x0004)
      0004E9 E0               [24] 1506 	movx	a,@dptr
      0004EA FB               [12] 1507 	mov	r3,a
      0004EB 7A 00            [12] 1508 	mov	r2,#0x00
      0004ED 42 05            [12] 1509 	orl	ar5,a
      0004EF EA               [12] 1510 	mov	a,r2
      0004F0 42 04            [12] 1511 	orl	ar4,a
      0004F2 BD 01 05         [24] 1512 	cjne	r5,#0x01,00571$
      0004F5 BC 00 02         [24] 1513 	cjne	r4,#0x00,00571$
      0004F8 80 34            [24] 1514 	sjmp	00177$
      0004FA                       1515 00571$:
      0004FA BD 02 05         [24] 1516 	cjne	r5,#0x02,00572$
      0004FD BC 00 02         [24] 1517 	cjne	r4,#0x00,00572$
      000500 80 18            [24] 1518 	sjmp	00175$
      000502                       1519 00572$:
      000502 BD 81 05         [24] 1520 	cjne	r5,#0x81,00573$
      000505 BC 00 02         [24] 1521 	cjne	r4,#0x00,00573$
      000508 80 1A            [24] 1522 	sjmp	00176$
      00050A                       1523 00573$:
      00050A BD 82 29         [24] 1524 	cjne	r5,#0x82,00178$
      00050D BC 00 26         [24] 1525 	cjne	r4,#0x00,00178$
                                   1526 ;	main.c:423: UEP2_CTRL = UEP2_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL; /* 设置端点2 IN STALL */
      000510 74 BF            [12] 1527 	mov	a,#0xbf
      000512 55 D4            [12] 1528 	anl	a,_UEP2_CTRL
      000514 44 03            [12] 1529 	orl	a,#0x03
      000516 F5 D4            [12] 1530 	mov	_UEP2_CTRL,a
                                   1531 ;	main.c:424: break;
                                   1532 ;	main.c:425: case 0x02:
      000518 80 60            [24] 1533 	sjmp	00205$
      00051A                       1534 00175$:
                                   1535 ;	main.c:426: UEP2_CTRL = UEP2_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL; /* 设置端点2 OUT Stall */
      00051A 74 7F            [12] 1536 	mov	a,#0x7f
      00051C 55 D4            [12] 1537 	anl	a,_UEP2_CTRL
      00051E 44 0C            [12] 1538 	orl	a,#0x0c
      000520 F5 D4            [12] 1539 	mov	_UEP2_CTRL,a
                                   1540 ;	main.c:427: break;
                                   1541 ;	main.c:428: case 0x81:
      000522 80 56            [24] 1542 	sjmp	00205$
      000524                       1543 00176$:
                                   1544 ;	main.c:429: UEP1_CTRL = UEP1_CTRL & (~bUEP_T_TOG) | UEP_T_RES_STALL; /* 设置端点1 IN STALL */
      000524 74 BF            [12] 1545 	mov	a,#0xbf
      000526 55 D2            [12] 1546 	anl	a,_UEP1_CTRL
      000528 44 03            [12] 1547 	orl	a,#0x03
      00052A F5 D2            [12] 1548 	mov	_UEP1_CTRL,a
                                   1549 ;	main.c:430: break;
                                   1550 ;	main.c:431: case 0x01:
      00052C 80 4C            [24] 1551 	sjmp	00205$
      00052E                       1552 00177$:
                                   1553 ;	main.c:432: UEP1_CTRL = UEP1_CTRL & (~bUEP_R_TOG) | UEP_R_RES_STALL; /* 设置端点1 OUT Stall */
      00052E 74 7F            [12] 1554 	mov	a,#0x7f
      000530 55 D2            [12] 1555 	anl	a,_UEP1_CTRL
      000532 44 0C            [12] 1556 	orl	a,#0x0c
      000534 F5 D2            [12] 1557 	mov	_UEP1_CTRL,a
                                   1558 ;	main.c:433: default:
      000536                       1559 00178$:
                                   1560 ;	main.c:434: len = 0xFF; /* 操作失败 */
      000536 7E FF            [12] 1561 	mov	r6,#0xff
      000538 7F 00            [12] 1562 	mov	r7,#0x00
                                   1563 ;	main.c:436: }
      00053A 80 3E            [24] 1564 	sjmp	00205$
      00053C                       1565 00181$:
                                   1566 ;	main.c:440: len = 0xFF; /* 操作失败 */
      00053C 7E FF            [12] 1567 	mov	r6,#0xff
      00053E 7F 00            [12] 1568 	mov	r7,#0x00
      000540 80 38            [24] 1569 	sjmp	00205$
      000542                       1570 00184$:
                                   1571 ;	main.c:445: len = 0xFF; /* 操作失败 */
      000542 7E FF            [12] 1572 	mov	r6,#0xff
      000544 7F 00            [12] 1573 	mov	r7,#0x00
                                   1574 ;	main.c:447: break;
                                   1575 ;	main.c:448: case USB_GET_STATUS:
      000546 80 32            [24] 1576 	sjmp	00205$
      000548                       1577 00189$:
                                   1578 ;	main.c:449: Ep0Buffer[0] = 0x00;
      000548 90 01 00         [24] 1579 	mov	dptr,#_Ep0Buffer
      00054B E4               [12] 1580 	clr	a
      00054C F0               [24] 1581 	movx	@dptr,a
                                   1582 ;	main.c:450: Ep0Buffer[1] = 0x00;
      00054D 90 01 01         [24] 1583 	mov	dptr,#(_Ep0Buffer + 0x0001)
      000550 F0               [24] 1584 	movx	@dptr,a
                                   1585 ;	main.c:451: if (SetupLen >= 2)
      000551 AC 08            [24] 1586 	mov	r4,_SetupLen
      000553 AD 09            [24] 1587 	mov	r5,(_SetupLen + 1)
      000555 C3               [12] 1588 	clr	c
      000556 EC               [12] 1589 	mov	a,r4
      000557 94 02            [12] 1590 	subb	a,#0x02
      000559 ED               [12] 1591 	mov	a,r5
      00055A 94 00            [12] 1592 	subb	a,#0x00
      00055C 40 06            [24] 1593 	jc	00191$
                                   1594 ;	main.c:453: len = 2;
      00055E 7E 02            [12] 1595 	mov	r6,#0x02
      000560 7F 00            [12] 1596 	mov	r7,#0x00
      000562 80 16            [24] 1597 	sjmp	00205$
      000564                       1598 00191$:
                                   1599 ;	main.c:457: len = SetupLen;
      000564 AE 08            [24] 1600 	mov	r6,_SetupLen
      000566 AF 09            [24] 1601 	mov	r7,(_SetupLen + 1)
                                   1602 ;	main.c:459: break;
                                   1603 ;	main.c:460: default:
      000568 80 10            [24] 1604 	sjmp	00205$
      00056A                       1605 00193$:
                                   1606 ;	main.c:461: len = 0xff; //操作失败
      00056A 7E FF            [12] 1607 	mov	r6,#0xff
      00056C 7F 00            [12] 1608 	mov	r7,#0x00
                                   1609 ;	main.c:463: }
                                   1610 ;	main.c:470: default:
      00056E 80 0A            [24] 1611 	sjmp	00205$
      000570                       1612 00195$:
                                   1613 ;	main.c:471: len = 0xFF; /*命令不支持*/
      000570 7E FF            [12] 1614 	mov	r6,#0xff
      000572 7F 00            [12] 1615 	mov	r7,#0x00
                                   1616 ;	main.c:473: }
      000574 80 04            [24] 1617 	sjmp	00205$
      000576                       1618 00204$:
                                   1619 ;	main.c:478: len = 0xff; //包长度错误
      000576 7E FF            [12] 1620 	mov	r6,#0xff
      000578 7F 00            [12] 1621 	mov	r7,#0x00
      00057A                       1622 00205$:
                                   1623 ;	main.c:480: if (len == 0xff)
      00057A 8E 04            [24] 1624 	mov	ar4,r6
      00057C 8F 05            [24] 1625 	mov	ar5,r7
      00057E BC FF 0C         [24] 1626 	cjne	r4,#0xff,00210$
      000581 BD 00 09         [24] 1627 	cjne	r5,#0x00,00210$
                                   1628 ;	main.c:482: SetupReq = 0xFF;
      000584 75 0A FF         [24] 1629 	mov	_SetupReq,#0xff
                                   1630 ;	main.c:483: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_STALL | UEP_T_RES_STALL; //STALL
      000587 75 DC CF         [24] 1631 	mov	_UEP0_CTRL,#0xcf
      00058A 02 06 27         [24] 1632 	ljmp	00221$
      00058D                       1633 00210$:
                                   1634 ;	main.c:485: else if (len <= DEFAULT_ENDP0_SIZE) //上传数据或者状态阶段返回0长度包
      00058D C3               [12] 1635 	clr	c
      00058E 74 08            [12] 1636 	mov	a,#0x08
      000590 9C               [12] 1637 	subb	a,r4
      000591 E4               [12] 1638 	clr	a
      000592 9D               [12] 1639 	subb	a,r5
      000593 40 08            [24] 1640 	jc	00207$
                                   1641 ;	main.c:487: UEP0_T_LEN = len;
      000595 8E DD            [24] 1642 	mov	_UEP0_T_LEN,r6
                                   1643 ;	main.c:488: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK; //默认数据包是DATA1，返回应答ACK
      000597 75 DC C0         [24] 1644 	mov	_UEP0_CTRL,#0xc0
      00059A 02 06 27         [24] 1645 	ljmp	00221$
      00059D                       1646 00207$:
                                   1647 ;	main.c:492: UEP0_T_LEN = 0;														 //虽然尚未到状态阶段，但是提前预置上传0长度数据包以防主机提前进入状态阶段
      00059D 75 DD 00         [24] 1648 	mov	_UEP0_T_LEN,#0x00
                                   1649 ;	main.c:493: UEP0_CTRL = bUEP_R_TOG | bUEP_T_TOG | UEP_R_RES_ACK | UEP_T_RES_ACK; //默认数据包是DATA1,返回应答ACK
      0005A0 75 DC C0         [24] 1650 	mov	_UEP0_CTRL,#0xc0
                                   1651 ;	main.c:495: break;
      0005A3 02 06 27         [24] 1652 	ljmp	00221$
                                   1653 ;	main.c:496: case UIS_TOKEN_IN | 0: //endpoint0 IN
      0005A6                       1654 00212$:
                                   1655 ;	main.c:497: switch (SetupReq)
      0005A6 74 05            [12] 1656 	mov	a,#0x05
      0005A8 B5 0A 02         [24] 1657 	cjne	a,_SetupReq,00580$
      0005AB 80 58            [24] 1658 	sjmp	00214$
      0005AD                       1659 00580$:
      0005AD 74 06            [12] 1660 	mov	a,#0x06
      0005AF B5 0A 67         [24] 1661 	cjne	a,_SetupReq,00217$
                                   1662 ;	main.c:500: len = SetupLen >= DEFAULT_ENDP0_SIZE ? DEFAULT_ENDP0_SIZE : SetupLen; //本次传输长度
      0005B2 AE 08            [24] 1663 	mov	r6,_SetupLen
      0005B4 AF 09            [24] 1664 	mov	r7,(_SetupLen + 1)
      0005B6 C3               [12] 1665 	clr	c
      0005B7 EE               [12] 1666 	mov	a,r6
      0005B8 94 08            [12] 1667 	subb	a,#0x08
      0005BA EF               [12] 1668 	mov	a,r7
      0005BB 94 00            [12] 1669 	subb	a,#0x00
      0005BD 92 00            [24] 1670 	mov	_DeviceInterrupt_sloc0_1_0,c
      0005BF 40 06            [24] 1671 	jc	00238$
      0005C1 7E 08            [12] 1672 	mov	r6,#0x08
      0005C3 7F 00            [12] 1673 	mov	r7,#0x00
      0005C5 80 04            [24] 1674 	sjmp	00239$
      0005C7                       1675 00238$:
      0005C7 AE 08            [24] 1676 	mov	r6,_SetupLen
      0005C9 AF 09            [24] 1677 	mov	r7,(_SetupLen + 1)
      0005CB                       1678 00239$:
                                   1679 ;	main.c:501: memcpy(Ep0Buffer, pDescr, len);										  //加载上传数据
      0005CB 85 0F 22         [24] 1680 	mov	___memcpy_PARM_2,_pDescr
      0005CE 85 10 23         [24] 1681 	mov	(___memcpy_PARM_2 + 1),(_pDescr + 1)
      0005D1 85 11 24         [24] 1682 	mov	(___memcpy_PARM_2 + 2),(_pDescr + 2)
      0005D4 8E 25            [24] 1683 	mov	___memcpy_PARM_3,r6
      0005D6 8F 26            [24] 1684 	mov	(___memcpy_PARM_3 + 1),r7
      0005D8 90 01 00         [24] 1685 	mov	dptr,#_Ep0Buffer
      0005DB 75 F0 00         [24] 1686 	mov	b,#0x00
      0005DE C0 07            [24] 1687 	push	ar7
      0005E0 C0 06            [24] 1688 	push	ar6
      0005E2 12 0A 0C         [24] 1689 	lcall	___memcpy
      0005E5 D0 06            [24] 1690 	pop	ar6
      0005E7 D0 07            [24] 1691 	pop	ar7
                                   1692 ;	main.c:502: SetupLen -= len;
      0005E9 E5 08            [12] 1693 	mov	a,_SetupLen
      0005EB C3               [12] 1694 	clr	c
      0005EC 9E               [12] 1695 	subb	a,r6
      0005ED F5 08            [12] 1696 	mov	_SetupLen,a
      0005EF E5 09            [12] 1697 	mov	a,(_SetupLen + 1)
      0005F1 9F               [12] 1698 	subb	a,r7
      0005F2 F5 09            [12] 1699 	mov	(_SetupLen + 1),a
                                   1700 ;	main.c:503: pDescr += len;
      0005F4 EE               [12] 1701 	mov	a,r6
      0005F5 25 0F            [12] 1702 	add	a,_pDescr
      0005F7 F5 0F            [12] 1703 	mov	_pDescr,a
      0005F9 EF               [12] 1704 	mov	a,r7
      0005FA 35 10            [12] 1705 	addc	a,(_pDescr + 1)
      0005FC F5 10            [12] 1706 	mov	(_pDescr + 1),a
                                   1707 ;	main.c:504: UEP0_T_LEN = len;
      0005FE 8E DD            [24] 1708 	mov	_UEP0_T_LEN,r6
                                   1709 ;	main.c:505: UEP0_CTRL ^= bUEP_T_TOG; //同步标志位翻转
      000600 63 DC 40         [24] 1710 	xrl	_UEP0_CTRL,#0x40
                                   1711 ;	main.c:506: break;
                                   1712 ;	main.c:507: case USB_SET_ADDRESS:
      000603 80 22            [24] 1713 	sjmp	00221$
      000605                       1714 00214$:
                                   1715 ;	main.c:508: if (!vendor_control)
      000605 E5 0D            [12] 1716 	mov	a,_vendor_control
      000607 70 1E            [24] 1717 	jnz	00221$
                                   1718 ;	main.c:510: USB_DEV_AD = USB_DEV_AD & bUDA_GP_BIT | SetupLen;
      000609 E5 E3            [12] 1719 	mov	a,_USB_DEV_AD
      00060B 54 80            [12] 1720 	anl	a,#0x80
      00060D FF               [12] 1721 	mov	r7,a
      00060E E5 08            [12] 1722 	mov	a,_SetupLen
      000610 FE               [12] 1723 	mov	r6,a
      000611 4F               [12] 1724 	orl	a,r7
      000612 F5 E3            [12] 1725 	mov	_USB_DEV_AD,a
                                   1726 ;	main.c:511: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      000614 75 DC 02         [24] 1727 	mov	_UEP0_CTRL,#0x02
                                   1728 ;	main.c:513: break;
                                   1729 ;	main.c:514: default:
      000617 80 0E            [24] 1730 	sjmp	00221$
      000619                       1731 00217$:
                                   1732 ;	main.c:515: UEP0_T_LEN = 0; //状态阶段完成中断或者是强制上传0长度数据包结束控制传输
      000619 75 DD 00         [24] 1733 	mov	_UEP0_T_LEN,#0x00
                                   1734 ;	main.c:516: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      00061C 75 DC 02         [24] 1735 	mov	_UEP0_CTRL,#0x02
                                   1736 ;	main.c:519: break;
                                   1737 ;	main.c:520: case UIS_TOKEN_OUT | 0: // endpoint0 OUT
      00061F 80 06            [24] 1738 	sjmp	00221$
      000621                       1739 00219$:
                                   1740 ;	main.c:533: UEP0_T_LEN = 0;
      000621 75 DD 00         [24] 1741 	mov	_UEP0_T_LEN,#0x00
                                   1742 ;	main.c:534: UEP0_CTRL |= UEP_R_RES_ACK | UEP_T_RES_ACK; //状态阶段，对IN响应NAK
      000624 85 DC DC         [24] 1743 	mov	_UEP0_CTRL,_UEP0_CTRL
                                   1744 ;	main.c:540: }
      000627                       1745 00221$:
                                   1746 ;	main.c:541: UIF_TRANSFER = 0; //写0清空中断
                                   1747 ;	assignBit
      000627 C2 D9            [12] 1748 	clr	_UIF_TRANSFER
      000629                       1749 00223$:
                                   1750 ;	main.c:543: if (UIF_BUS_RST) //设备模式USB总线复位中断
      000629 30 D8 1D         [24] 1751 	jnb	_UIF_BUS_RST,00225$
                                   1752 ;	main.c:548: UEP0_CTRL = UEP_R_RES_ACK | UEP_T_RES_NAK;
      00062C 75 DC 02         [24] 1753 	mov	_UEP0_CTRL,#0x02
                                   1754 ;	main.c:549: UEP1_CTRL = bUEP_AUTO_TOG | UEP_T_RES_NAK;
      00062F 75 D2 12         [24] 1755 	mov	_UEP1_CTRL,#0x12
                                   1756 ;	main.c:550: UEP2_CTRL = bUEP_AUTO_TOG | UEP_R_RES_ACK;
      000632 75 D4 10         [24] 1757 	mov	_UEP2_CTRL,#0x10
                                   1758 ;	main.c:551: USB_DEV_AD = 0x00;
      000635 75 E3 00         [24] 1759 	mov	_USB_DEV_AD,#0x00
                                   1760 ;	main.c:552: UIF_SUSPEND = 0;
                                   1761 ;	assignBit
      000638 C2 DA            [12] 1762 	clr	_UIF_SUSPEND
                                   1763 ;	main.c:553: UIF_TRANSFER = 0;
                                   1764 ;	assignBit
      00063A C2 D9            [12] 1765 	clr	_UIF_TRANSFER
                                   1766 ;	main.c:554: UIF_BUS_RST = 0; //清中断标志
                                   1767 ;	assignBit
      00063C C2 D8            [12] 1768 	clr	_UIF_BUS_RST
                                   1769 ;	main.c:556: USBByteCount = 0; //USB端点收到的长度
      00063E 78 2D            [12] 1770 	mov	r0,#_USBByteCount
      000640 76 00            [12] 1771 	mov	@r0,#0x00
                                   1772 ;	main.c:557: UsbConfig = 0;	//清除配置值
      000642 75 0C 00         [24] 1773 	mov	_UsbConfig,#0x00
                                   1774 ;	main.c:558: ep1_in_busy = 0;
      000645 78 31            [12] 1775 	mov	r0,#_ep1_in_busy
      000647 76 00            [12] 1776 	mov	@r0,#0x00
      000649                       1777 00225$:
                                   1778 ;	main.c:560: if (UIF_SUSPEND) //USB总线挂起/唤醒完成
                                   1779 ;	main.c:562: UIF_SUSPEND = 0;
                                   1780 ;	assignBit
      000649 10 DA 02         [24] 1781 	jbc	_UIF_SUSPEND,00586$
      00064C 80 21            [24] 1782 	sjmp	00232$
      00064E                       1783 00586$:
                                   1784 ;	main.c:563: if (USB_MIS_ST & bUMS_SUSPEND) //挂起
      00064E E5 DA            [12] 1785 	mov	a,_USB_MIS_ST
      000650 30 E2 1F         [24] 1786 	jnb	acc.2,00234$
                                   1787 ;	main.c:568: while (XBUS_AUX & bUART0_TX)
      000653                       1788 00226$:
      000653 E5 A2            [12] 1789 	mov	a,_XBUS_AUX
      000655 20 E7 FB         [24] 1790 	jb	acc.7,00226$
                                   1791 ;	main.c:572: SAFE_MOD = 0x55;
      000658 75 A1 55         [24] 1792 	mov	_SAFE_MOD,#0x55
                                   1793 ;	main.c:573: SAFE_MOD = 0xAA;
      00065B 75 A1 AA         [24] 1794 	mov	_SAFE_MOD,#0xaa
                                   1795 ;	main.c:574: WAKE_CTRL = bWAK_BY_USB | bWAK_RXD0_LO | bWAK_RXD1_LO; //USB或者RXD0/1有信号时可被唤醒
      00065E 75 A9 C1         [24] 1796 	mov	_WAKE_CTRL,#0xc1
                                   1797 ;	main.c:575: PCON |= PD;											   //睡眠
      000661 43 87 02         [24] 1798 	orl	_PCON,#0x02
                                   1799 ;	main.c:576: SAFE_MOD = 0x55;
      000664 75 A1 55         [24] 1800 	mov	_SAFE_MOD,#0x55
                                   1801 ;	main.c:577: SAFE_MOD = 0xAA;
      000667 75 A1 AA         [24] 1802 	mov	_SAFE_MOD,#0xaa
                                   1803 ;	main.c:578: WAKE_CTRL = 0x00;
      00066A 75 A9 00         [24] 1804 	mov	_WAKE_CTRL,#0x00
      00066D 80 03            [24] 1805 	sjmp	00234$
      00066F                       1806 00232$:
                                   1807 ;	main.c:583: USB_INT_FG = 0xFF; //清中断标志
      00066F 75 D8 FF         [24] 1808 	mov	_USB_INT_FG,#0xff
      000672                       1809 00234$:
                                   1810 ;	main.c:585: }
      000672 D0 D0            [24] 1811 	pop	psw
      000674 D0 00            [24] 1812 	pop	(0+0)
      000676 D0 01            [24] 1813 	pop	(0+1)
      000678 D0 02            [24] 1814 	pop	(0+2)
      00067A D0 03            [24] 1815 	pop	(0+3)
      00067C D0 04            [24] 1816 	pop	(0+4)
      00067E D0 05            [24] 1817 	pop	(0+5)
      000680 D0 06            [24] 1818 	pop	(0+6)
      000682 D0 07            [24] 1819 	pop	(0+7)
      000684 D0 83            [24] 1820 	pop	dph
      000686 D0 82            [24] 1821 	pop	dpl
      000688 D0 F0            [24] 1822 	pop	b
      00068A D0 E0            [24] 1823 	pop	acc
      00068C D0 21            [24] 1824 	pop	bits
      00068E 32               [24] 1825 	reti
                                   1826 ;------------------------------------------------------------
                                   1827 ;Allocation info for local variables in function 'main'
                                   1828 ;------------------------------------------------------------
                                   1829 ;length                    Allocated with name '_main_length_65536_121'
                                   1830 ;read_buffer_index         Allocated to registers r2 
                                   1831 ;shift_count               Allocated to registers r7 
                                   1832 ;operand                   Allocated to registers 
                                   1833 ;shift_en                  Allocated to registers r5 
                                   1834 ;read_en                   Allocated with name '_main_read_en_65536_121'
                                   1835 ;timeout_count             Allocated with name '_main_timeout_count_65536_121'
                                   1836 ;__5242880001              Allocated to registers r6 
                                   1837 ;__5242880003              Allocated to registers r4 
                                   1838 ;__4587520005              Allocated to registers 
                                   1839 ;data_len                  Allocated to registers r6 
                                   1840 ;i                         Allocated to registers r6 
                                   1841 ;------------------------------------------------------------
                                   1842 ;	main.c:691: void main()
                                   1843 ;	-----------------------------------------
                                   1844 ;	 function main
                                   1845 ;	-----------------------------------------
      00068F                       1846 _main:
                                   1847 ;	main.c:695: uint8_t shift_count = 0;
      00068F 7F 00            [12] 1848 	mov	r7,#0x00
                                   1849 ;	main.c:698: uint8_t read_en = 0;
                                   1850 ;	1-genFromRTrack replaced	mov	_main_read_en_65536_121,#0x00
      000691 8F 1B            [24] 1851 	mov	_main_read_en_65536_121,r7
                                   1852 ;	main.c:699: uint16_t timeout_count = 0;
      000693 E4               [12] 1853 	clr	a
      000694 F5 1C            [12] 1854 	mov	_main_timeout_count_65536_121,a
      000696 F5 1D            [12] 1855 	mov	(_main_timeout_count_65536_121 + 1),a
                                   1856 ;	main.c:701: CfgFsys();   //CH559时钟选择配置
      000698 C0 07            [24] 1857 	push	ar7
      00069A 12 09 59         [24] 1858 	lcall	_CfgFsys
                                   1859 ;	main.c:702: mDelaymS(5); //修改主频等待内部晶振稳定,必加
      00069D 90 00 05         [24] 1860 	mov	dptr,#0x0005
      0006A0 12 09 81         [24] 1861 	lcall	_mDelaymS
                                   1862 ;	main.c:704: SPIMasterModeSet(0);
      0006A3 75 82 00         [24] 1863 	mov	dpl,#0x00
      0006A6 12 09 BD         [24] 1864 	lcall	_SPIMasterModeSet
                                   1865 ;	main.c:705: SPI_CK_SET(4);
      0006A9 75 FB 04         [24] 1866 	mov	_SPI0_CK_SE,#0x04
                                   1867 ;	main.c:707: USBDeviceCfg();
      0006AC 12 00 BC         [24] 1868 	lcall	_USBDeviceCfg
                                   1869 ;	main.c:708: USBDeviceEndPointCfg(); //端点配置
      0006AF 12 00 E9         [24] 1870 	lcall	_USBDeviceEndPointCfg
                                   1871 ;	main.c:709: USBDeviceIntCfg();		//中断初始化
      0006B2 12 00 D5         [24] 1872 	lcall	_USBDeviceIntCfg
      0006B5 D0 07            [24] 1873 	pop	ar7
                                   1874 ;	main.c:717: P1_MOD_OC &= ~((1 << 1) | (1 << 5) | (1 << 7)|(1 << 4));
      0006B7 53 92 4D         [24] 1875 	anl	_P1_MOD_OC,#0x4d
                                   1876 ;	main.c:718: P1_MOD_OC |= ((1 << 6));
      0006BA 43 92 40         [24] 1877 	orl	_P1_MOD_OC,#0x40
                                   1878 ;	main.c:719: P1_DIR_PU |= ((1 << 1) | (1 << 5) | (1 << 7) | (1 << 6)|(1 << 4));
      0006BD 43 93 F2         [24] 1879 	orl	_P1_DIR_PU,#0xf2
                                   1880 ;	main.c:721: P3_MOD_OC &= ~((1 << 2)|(1 << 4));
      0006C0 53 96 EB         [24] 1881 	anl	_P3_MOD_OC,#0xeb
                                   1882 ;	main.c:722: P3_MOD_OC |= (1 << 3);
      0006C3 43 96 08         [24] 1883 	orl	_P3_MOD_OC,#0x08
                                   1884 ;	main.c:723: P3_DIR_PU |= ((1 << 2)|(1 << 4)|(1 << 3));
      0006C6 43 97 1C         [24] 1885 	orl	_P3_DIR_PU,#0x1c
                                   1886 ;	main.c:737: TDO = 1;
                                   1887 ;	assignBit
      0006C9 D2 96            [12] 1888 	setb	_MISO
                                   1889 ;	main.c:740: ASDO = 1;
                                   1890 ;	assignBit
      0006CB D2 B3            [12] 1891 	setb	_ASDO
                                   1892 ;	main.c:744: UEP0_T_LEN = 0;
      0006CD 75 DD 00         [24] 1893 	mov	_UEP0_T_LEN,#0x00
                                   1894 ;	main.c:745: UEP1_T_LEN = 0; //预使用发送长度一定要清空
      0006D0 75 D3 00         [24] 1895 	mov	_UEP1_T_LEN,#0x00
                                   1896 ;	main.c:747: Ep1Buffer[0] = FTDI_MODEM_STA_DUMMY0;
      0006D3 90 01 40         [24] 1897 	mov	dptr,#_Ep1Buffer
      0006D6 74 31            [12] 1898 	mov	a,#0x31
      0006D8 F0               [24] 1899 	movx	@dptr,a
                                   1900 ;	main.c:748: Ep1Buffer[1] = FTDI_MODEM_STA_DUMMY1;
      0006D9 90 01 41         [24] 1901 	mov	dptr,#(_Ep1Buffer + 0x0001)
      0006DC 74 60            [12] 1902 	mov	a,#0x60
      0006DE F0               [24] 1903 	movx	@dptr,a
                                   1904 ;	main.c:750: transmit_buffer_in_offset = 0;
      0006DF 78 33            [12] 1905 	mov	r0,#_transmit_buffer_in_offset
      0006E1 76 00            [12] 1906 	mov	@r0,#0x00
                                   1907 ;	main.c:751: transmit_buffer_out_offset = 0;
      0006E3 78 34            [12] 1908 	mov	r0,#_transmit_buffer_out_offset
      0006E5 76 00            [12] 1909 	mov	@r0,#0x00
                                   1910 ;	main.c:754: send_dummy = 1;
      0006E7 75 0E 01         [24] 1911 	mov	_send_dummy,#0x01
                                   1912 ;	main.c:755: LED = 1;
                                   1913 ;	assignBit
      0006EA D2 91            [12] 1914 	setb	_LED
                                   1915 ;	main.c:757: while (1)
      0006EC                       1916 00137$:
                                   1917 ;	main.c:759: if (UsbConfig)
      0006EC E5 0C            [12] 1918 	mov	a,_UsbConfig
      0006EE 60 FC            [24] 1919 	jz	00137$
                                   1920 ;	main.c:761: length = 0;
      0006F0 75 1A 00         [24] 1921 	mov	_main_length_65536_121,#0x00
                                   1922 ;	main.c:762: if (USBByteCount) //USB接收端点有数据
      0006F3 78 2D            [12] 1923 	mov	r0,#_USBByteCount
      0006F5 E6               [12] 1924 	mov	a,@r0
      0006F6 70 03            [24] 1925 	jnz	00249$
      0006F8 02 07 21         [24] 1926 	ljmp	00157$
      0006FB                       1927 00249$:
                                   1928 ;	main.c:781: __endasm;
      0006FB C0 07            [24] 1929 	push	ar7
      0006FD C0 E0            [24] 1930 	push	a
      0006FF 05 A2            [12] 1931 	inc	_XBUS_AUX
      000701 90 00 80         [24] 1932 	mov	dptr, #_receive_buffer
      000704 15 A2            [12] 1933 	dec	_XBUS_AUX
      000706 90 01 80         [24] 1934 	mov	dptr, #_Ep2Buffer
      000709 85 2D 07         [24] 1935 	mov	ar7, _USBByteCount
      00070C                       1936 	    1$:
      00070C E0               [24] 1937 	movx	a, @dptr
      00070D A3               [24] 1938 	inc	dptr
      00070E A5                    1939 	.db	#0xA5
      00070F D5 07 FA         [24] 1940 	djnz	ar7, 1$
      000712 D0 E0            [24] 1941 	pop	a
      000714 D0 07            [24] 1942 	pop	ar7
                                   1943 ;	main.c:783: UEP2_CTRL = UEP2_CTRL & ~MASK_UEP_R_RES | UEP_R_RES_ACK;
      000716 53 D4 F3         [24] 1944 	anl	_UEP2_CTRL,#0xf3
                                   1945 ;	main.c:784: length = USBByteCount;
      000719 78 2D            [12] 1946 	mov	r0,#_USBByteCount
      00071B 86 1A            [24] 1947 	mov	_main_length_65536_121,@r0
                                   1948 ;	main.c:785: USBByteCount = 0;
      00071D 78 2D            [12] 1949 	mov	r0,#_USBByteCount
      00071F 76 00            [12] 1950 	mov	@r0,#0x00
                                   1951 ;	main.c:789: while (read_buffer_index < length)
      000721                       1952 00157$:
      000721 7A 00            [12] 1953 	mov	r2,#0x00
      000723                       1954 00120$:
      000723 C3               [12] 1955 	clr	c
      000724 EA               [12] 1956 	mov	a,r2
      000725 95 1A            [12] 1957 	subb	a,_main_length_65536_121
      000727 40 03            [24] 1958 	jc	00250$
      000729 02 08 92         [24] 1959 	ljmp	00122$
      00072C                       1960 00250$:
                                   1961 ;	main.c:791: P2 = receive_buffer[read_buffer_index];
      00072C EA               [12] 1962 	mov	a,r2
      00072D 24 80            [12] 1963 	add	a,#_receive_buffer
      00072F F5 82            [12] 1964 	mov	dpl,a
      000731 E4               [12] 1965 	clr	a
      000732 34 00            [12] 1966 	addc	a,#(_receive_buffer >> 8)
      000734 F5 83            [12] 1967 	mov	dph,a
      000736 E0               [24] 1968 	movx	a,@dptr
      000737 F5 A0            [12] 1969 	mov	_P2,a
                                   1970 ;	main.c:792: read_buffer_index++;
      000739 0A               [12] 1971 	inc	r2
                                   1972 ;	main.c:795: if (shift_count == 0)
      00073A EF               [12] 1973 	mov	a,r7
      00073B 60 03            [24] 1974 	jz	00251$
      00073D 02 07 CD         [24] 1975 	ljmp	00118$
      000740                       1976 00251$:
                                   1977 ;	main.c:796: {   SPI0_CTRL = 0x00;
      000740 75 FA 00         [24] 1978 	mov	_SPI0_CTRL,#0x00
                                   1979 ;	main.c:797: shift_en = P2B7;
      000743 A2 A7            [12] 1980 	mov	c,_P2B7
      000745 E4               [12] 1981 	clr	a
      000746 33               [12] 1982 	rlc	a
      000747 FD               [12] 1983 	mov	r5,a
                                   1984 ;	main.c:798: read_en = P2B6;
      000748 A2 A6            [12] 1985 	mov	c,_P2B6
      00074A E4               [12] 1986 	clr	a
      00074B 33               [12] 1987 	rlc	a
      00074C F5 1B            [12] 1988 	mov	_main_read_en_65536_121,a
                                   1989 ;	main.c:799: if (shift_en)
      00074E ED               [12] 1990 	mov	a,r5
      00074F 60 0D            [24] 1991 	jz	00109$
                                   1992 ;	main.c:801: shift_count = P2 & 0x3f;
      000751 E5 A0            [12] 1993 	mov	a,_P2
      000753 54 3F            [12] 1994 	anl	a,#0x3f
      000755 FF               [12] 1995 	mov	r7,a
                                   1996 ;	main.c:803: if(NCS)
      000756 30 94 CA         [24] 1997 	jnb	_NCS,00120$
                                   1998 ;	main.c:804: SPI0_CTRL = 0x60;
      000759 75 FA 60         [24] 1999 	mov	_SPI0_CTRL,#0x60
      00075C 80 C5            [24] 2000 	sjmp	00120$
      00075E                       2001 00109$:
                                   2002 ;	main.c:809: else if (read_en)
      00075E E5 1B            [12] 2003 	mov	a,_main_read_en_65536_121
      000760 60 4F            [24] 2004 	jz	00106$
                                   2005 ;	main.c:811: LED = !P2B5;
      000762 A2 A5            [12] 2006 	mov	c,_P2B5
      000764 B3               [12] 2007 	cpl	c
      000765 92 91            [24] 2008 	mov	_LED,c
                                   2009 ;	main.c:812: TDI = P2B4;
                                   2010 ;	assignBit
      000767 A2 A4            [12] 2011 	mov	c,_P2B4
      000769 92 95            [24] 2012 	mov	_MOSI,c
                                   2013 ;	main.c:813: TMS = P2B1;
                                   2014 ;	assignBit
      00076B A2 A1            [12] 2015 	mov	c,_P2B1
      00076D 92 B2            [24] 2016 	mov	_TMS,c
                                   2017 ;	main.c:814: TCK = P2B0;
                                   2018 ;	assignBit
      00076F A2 A0            [12] 2019 	mov	c,_P2B0
      000771 92 97            [24] 2020 	mov	_SCK,c
                                   2021 ;	main.c:817: NCE = P2B2;
                                   2022 ;	assignBit
      000773 A2 A2            [12] 2023 	mov	c,_P2B2
      000775 92 B4            [24] 2024 	mov	_NCE,c
                                   2025 ;	main.c:818: NCS = P2B3;
                                   2026 ;	assignBit
      000777 A2 A3            [12] 2027 	mov	c,_P2B3
      000779 92 94            [24] 2028 	mov	_NCS,c
                                   2029 ;	main.c:822: transmit_buffer[transmit_buffer_in_offset] = TDO;
      00077B 78 33            [12] 2030 	mov	r0,#_transmit_buffer_in_offset
      00077D 86 82            [24] 2031 	mov	dpl,@r0
      00077F 75 83 00         [24] 2032 	mov	dph,#(_transmit_buffer >> 8)
      000782 A2 96            [12] 2033 	mov	c,_MISO
      000784 E4               [12] 2034 	clr	a
      000785 33               [12] 2035 	rlc	a
      000786 F0               [24] 2036 	movx	@dptr,a
                                   2037 ;	main.c:823: transmit_buffer[transmit_buffer_in_offset] |= (ASDO<<1);
      000787 78 33            [12] 2038 	mov	r0,#_transmit_buffer_in_offset
      000789 86 04            [24] 2039 	mov	ar4,@r0
      00078B 7D 00            [12] 2040 	mov	r5,#(_transmit_buffer >> 8)
      00078D 78 33            [12] 2041 	mov	r0,#_transmit_buffer_in_offset
      00078F 86 82            [24] 2042 	mov	dpl,@r0
      000791 75 83 00         [24] 2043 	mov	dph,#(_transmit_buffer >> 8)
      000794 E0               [24] 2044 	movx	a,@dptr
      000795 FB               [12] 2045 	mov	r3,a
      000796 A2 B3            [12] 2046 	mov	c,_ASDO
      000798 E4               [12] 2047 	clr	a
      000799 33               [12] 2048 	rlc	a
      00079A 25 E0            [12] 2049 	add	a,acc
      00079C FE               [12] 2050 	mov	r6,a
      00079D 42 03            [12] 2051 	orl	ar3,a
      00079F 8C 82            [24] 2052 	mov	dpl,r4
      0007A1 8D 83            [24] 2053 	mov	dph,r5
      0007A3 EB               [12] 2054 	mov	a,r3
      0007A4 F0               [24] 2055 	movx	@dptr,a
                                   2056 ;	main.c:824: transmit_buffer_in_offset++;
      0007A5 78 33            [12] 2057 	mov	r0,#_transmit_buffer_in_offset
      0007A7 06               [12] 2058 	inc	@r0
                                   2059 ;	main.c:825: transmit_buffer_in_offset &= 0x7f;// %= sizeof(transmit_buffer);
      0007A8 78 33            [12] 2060 	mov	r0,#_transmit_buffer_in_offset
      0007AA E6               [12] 2061 	mov	a,@r0
      0007AB 54 7F            [12] 2062 	anl	a,#0x7f
      0007AD F6               [12] 2063 	mov	@r0,a
      0007AE 02 07 23         [24] 2064 	ljmp	00120$
      0007B1                       2065 00106$:
                                   2066 ;	main.c:839: LED = !P2B5;
      0007B1 A2 A5            [12] 2067 	mov	c,_P2B5
      0007B3 B3               [12] 2068 	cpl	c
      0007B4 92 91            [24] 2069 	mov	_LED,c
                                   2070 ;	main.c:840: TDI = P2B4;
                                   2071 ;	assignBit
      0007B6 A2 A4            [12] 2072 	mov	c,_P2B4
      0007B8 92 95            [24] 2073 	mov	_MOSI,c
                                   2074 ;	main.c:841: TMS = P2B1;
                                   2075 ;	assignBit
      0007BA A2 A1            [12] 2076 	mov	c,_P2B1
      0007BC 92 B2            [24] 2077 	mov	_TMS,c
                                   2078 ;	main.c:842: TCK = P2B0;
                                   2079 ;	assignBit
      0007BE A2 A0            [12] 2080 	mov	c,_P2B0
      0007C0 92 97            [24] 2081 	mov	_SCK,c
                                   2082 ;	main.c:845: NCE = P2B2;
                                   2083 ;	assignBit
      0007C2 A2 A2            [12] 2084 	mov	c,_P2B2
      0007C4 92 B4            [24] 2085 	mov	_NCE,c
                                   2086 ;	main.c:846: NCS = P2B3;
                                   2087 ;	assignBit
      0007C6 A2 A3            [12] 2088 	mov	c,_P2B3
      0007C8 92 94            [24] 2089 	mov	_NCS,c
      0007CA 02 07 23         [24] 2090 	ljmp	00120$
      0007CD                       2091 00118$:
                                   2092 ;	main.c:854: shift_count--;
      0007CD 1F               [12] 2093 	dec	r7
                                   2094 ;	main.c:855: if (read_en)
      0007CE E5 1B            [12] 2095 	mov	a,_main_read_en_65536_121
      0007D0 70 03            [24] 2096 	jnz	00255$
      0007D2 02 08 7F         [24] 2097 	ljmp	00115$
      0007D5                       2098 00255$:
                                   2099 ;	main.c:861: if(!NCS){
      0007D5 20 94 77         [24] 2100 	jb	_NCS,00112$
                                   2101 ;	main.c:862: transmit_buffer[transmit_buffer_in_offset] = shift_AS_read_on();
      0007D8 78 33            [12] 2102 	mov	r0,#_transmit_buffer_in_offset
      0007DA 86 82            [24] 2103 	mov	dpl,@r0
      0007DC 75 83 00         [24] 2104 	mov	dph,#(_transmit_buffer >> 8)
                                   2105 ;	main.c:646: TDI = P2B0;
                                   2106 ;	assignBit
      0007DF A2 A0            [12] 2107 	mov	c,_P2B0
      0007E1 92 95            [24] 2108 	mov	_MOSI,c
                                   2109 ;	main.c:647: P2B0 = ASDO;
                                   2110 ;	assignBit
      0007E3 A2 B3            [12] 2111 	mov	c,_ASDO
      0007E5 92 A0            [24] 2112 	mov	_P2B0,c
                                   2113 ;	main.c:648: TCK = 1;
                                   2114 ;	assignBit
      0007E7 D2 97            [12] 2115 	setb	_SCK
                                   2116 ;	main.c:649: TCK = 0;
                                   2117 ;	assignBit
      0007E9 C2 97            [12] 2118 	clr	_SCK
                                   2119 ;	main.c:651: TDI = P2B1;
                                   2120 ;	assignBit
      0007EB A2 A1            [12] 2121 	mov	c,_P2B1
      0007ED 92 95            [24] 2122 	mov	_MOSI,c
                                   2123 ;	main.c:652: P2B1 = ASDO;
                                   2124 ;	assignBit
      0007EF A2 B3            [12] 2125 	mov	c,_ASDO
      0007F1 92 A1            [24] 2126 	mov	_P2B1,c
                                   2127 ;	main.c:653: TCK = 1;
                                   2128 ;	assignBit
      0007F3 D2 97            [12] 2129 	setb	_SCK
                                   2130 ;	main.c:654: TCK = 0;
                                   2131 ;	assignBit
      0007F5 C2 97            [12] 2132 	clr	_SCK
                                   2133 ;	main.c:656: TDI = P2B2;
                                   2134 ;	assignBit
      0007F7 A2 A2            [12] 2135 	mov	c,_P2B2
      0007F9 92 95            [24] 2136 	mov	_MOSI,c
                                   2137 ;	main.c:657: P2B2 = ASDO;
                                   2138 ;	assignBit
      0007FB A2 B3            [12] 2139 	mov	c,_ASDO
      0007FD 92 A2            [24] 2140 	mov	_P2B2,c
                                   2141 ;	main.c:658: TCK = 1;
                                   2142 ;	assignBit
      0007FF D2 97            [12] 2143 	setb	_SCK
                                   2144 ;	main.c:659: TCK = 0;
                                   2145 ;	assignBit
      000801 C2 97            [12] 2146 	clr	_SCK
                                   2147 ;	main.c:661: TDI = P2B3;
                                   2148 ;	assignBit
      000803 A2 A3            [12] 2149 	mov	c,_P2B3
      000805 92 95            [24] 2150 	mov	_MOSI,c
                                   2151 ;	main.c:662: P2B3 = ASDO;
                                   2152 ;	assignBit
      000807 A2 B3            [12] 2153 	mov	c,_ASDO
      000809 92 A3            [24] 2154 	mov	_P2B3,c
                                   2155 ;	main.c:663: TCK = 1;
                                   2156 ;	assignBit
      00080B D2 97            [12] 2157 	setb	_SCK
                                   2158 ;	main.c:664: TCK = 0;
                                   2159 ;	assignBit
      00080D C2 97            [12] 2160 	clr	_SCK
                                   2161 ;	main.c:666: TDI = P2B4;
                                   2162 ;	assignBit
      00080F A2 A4            [12] 2163 	mov	c,_P2B4
      000811 92 95            [24] 2164 	mov	_MOSI,c
                                   2165 ;	main.c:667: P2B4 = ASDO;
                                   2166 ;	assignBit
      000813 A2 B3            [12] 2167 	mov	c,_ASDO
      000815 92 A4            [24] 2168 	mov	_P2B4,c
                                   2169 ;	main.c:668: TCK = 1;
                                   2170 ;	assignBit
      000817 D2 97            [12] 2171 	setb	_SCK
                                   2172 ;	main.c:669: TCK = 0;
                                   2173 ;	assignBit
      000819 C2 97            [12] 2174 	clr	_SCK
                                   2175 ;	main.c:671: TDI = P2B5;
                                   2176 ;	assignBit
      00081B A2 A5            [12] 2177 	mov	c,_P2B5
      00081D 92 95            [24] 2178 	mov	_MOSI,c
                                   2179 ;	main.c:672: P2B5 = ASDO;
                                   2180 ;	assignBit
      00081F A2 B3            [12] 2181 	mov	c,_ASDO
      000821 92 A5            [24] 2182 	mov	_P2B5,c
                                   2183 ;	main.c:673: TCK = 1;
                                   2184 ;	assignBit
      000823 D2 97            [12] 2185 	setb	_SCK
                                   2186 ;	main.c:674: TCK = 0;
                                   2187 ;	assignBit
      000825 C2 97            [12] 2188 	clr	_SCK
                                   2189 ;	main.c:676: TDI = P2B6;
                                   2190 ;	assignBit
      000827 A2 A6            [12] 2191 	mov	c,_P2B6
      000829 92 95            [24] 2192 	mov	_MOSI,c
                                   2193 ;	main.c:677: P2B6 = ASDO;
                                   2194 ;	assignBit
      00082B A2 B3            [12] 2195 	mov	c,_ASDO
      00082D 92 A6            [24] 2196 	mov	_P2B6,c
                                   2197 ;	main.c:678: TCK = 1;
                                   2198 ;	assignBit
      00082F D2 97            [12] 2199 	setb	_SCK
                                   2200 ;	main.c:679: TCK = 0;
                                   2201 ;	assignBit
      000831 C2 97            [12] 2202 	clr	_SCK
                                   2203 ;	main.c:681: TDI = P2B7;
                                   2204 ;	assignBit
      000833 A2 A7            [12] 2205 	mov	c,_P2B7
      000835 92 95            [24] 2206 	mov	_MOSI,c
                                   2207 ;	main.c:682: P2B7 = ASDO;
                                   2208 ;	assignBit
      000837 A2 B3            [12] 2209 	mov	c,_ASDO
      000839 92 A7            [24] 2210 	mov	_P2B7,c
                                   2211 ;	main.c:683: TCK = 1;
                                   2212 ;	assignBit
      00083B D2 97            [12] 2213 	setb	_SCK
                                   2214 ;	main.c:684: TCK = 0;
                                   2215 ;	assignBit
      00083D C2 97            [12] 2216 	clr	_SCK
                                   2217 ;	main.c:685: return P2;
                                   2218 ;	main.c:862: transmit_buffer[transmit_buffer_in_offset] = shift_AS_read_on();
      00083F E5 A0            [12] 2219 	mov	a,_P2
      000841 FE               [12] 2220 	mov	r6,a
      000842 F0               [24] 2221 	movx	@dptr,a
                                   2222 ;	main.c:863: transmit_buffer_in_offset++;
      000843 78 33            [12] 2223 	mov	r0,#_transmit_buffer_in_offset
      000845 06               [12] 2224 	inc	@r0
                                   2225 ;	main.c:864: transmit_buffer_in_offset &= 0x7f;
      000846 78 33            [12] 2226 	mov	r0,#_transmit_buffer_in_offset
      000848 E6               [12] 2227 	mov	a,@r0
      000849 54 7F            [12] 2228 	anl	a,#0x7f
      00084B F6               [12] 2229 	mov	@r0,a
      00084C 02 07 23         [24] 2230 	ljmp	00120$
      00084F                       2231 00112$:
                                   2232 ;	main.c:866: transmit_buffer[transmit_buffer_in_offset] =shift_read_on() ;
      00084F 78 33            [12] 2233 	mov	r0,#_transmit_buffer_in_offset
      000851 86 05            [24] 2234 	mov	ar5,@r0
      000853 7E 00            [12] 2235 	mov	r6,#(_transmit_buffer >> 8)
                                   2236 ;	main.c:637: CH554SPIMasterWrite(P2);
      000855 85 A0 82         [24] 2237 	mov	dpl,_P2
      000858 C0 07            [24] 2238 	push	ar7
      00085A C0 06            [24] 2239 	push	ar6
      00085C C0 05            [24] 2240 	push	ar5
      00085E C0 02            [24] 2241 	push	ar2
      000860 12 09 E0         [24] 2242 	lcall	_CH554SPIMasterWrite
      000863 D0 02            [24] 2243 	pop	ar2
      000865 D0 05            [24] 2244 	pop	ar5
      000867 D0 06            [24] 2245 	pop	ar6
      000869 D0 07            [24] 2246 	pop	ar7
                                   2247 ;	main.c:638: return SPI0_DATA;
      00086B AC F9            [24] 2248 	mov	r4,_SPI0_DATA
                                   2249 ;	main.c:866: transmit_buffer[transmit_buffer_in_offset] =shift_read_on() ;
      00086D 8D 82            [24] 2250 	mov	dpl,r5
      00086F 8E 83            [24] 2251 	mov	dph,r6
      000871 EC               [12] 2252 	mov	a,r4
      000872 F0               [24] 2253 	movx	@dptr,a
                                   2254 ;	main.c:867: transmit_buffer_in_offset++;
      000873 78 33            [12] 2255 	mov	r0,#_transmit_buffer_in_offset
      000875 06               [12] 2256 	inc	@r0
                                   2257 ;	main.c:868: transmit_buffer_in_offset &= 0x7f;
      000876 78 33            [12] 2258 	mov	r0,#_transmit_buffer_in_offset
      000878 E6               [12] 2259 	mov	a,@r0
      000879 54 7F            [12] 2260 	anl	a,#0x7f
      00087B F6               [12] 2261 	mov	@r0,a
      00087C 02 07 23         [24] 2262 	ljmp	00120$
      00087F                       2263 00115$:
                                   2264 ;	main.c:637: CH554SPIMasterWrite(P2);
      00087F 85 A0 82         [24] 2265 	mov	dpl,_P2
      000882 C0 07            [24] 2266 	push	ar7
      000884 C0 02            [24] 2267 	push	ar2
      000886 12 09 E0         [24] 2268 	lcall	_CH554SPIMasterWrite
      000889 D0 02            [24] 2269 	pop	ar2
      00088B D0 07            [24] 2270 	pop	ar7
                                   2271 ;	main.c:638: return SPI0_DATA;
      00088D E5 F9            [12] 2272 	mov	a,_SPI0_DATA
                                   2273 ;	main.c:880: shift_read_on();
      00088F 02 07 23         [24] 2274 	ljmp	00120$
      000892                       2275 00122$:
                                   2276 ;	main.c:886: if (ep1_in_busy == 0) //端点不繁忙（空闲后的第一包数据，只用作触发上传）
      000892 78 31            [12] 2277 	mov	r0,#_ep1_in_busy
      000894 E6               [12] 2278 	mov	a,@r0
      000895 60 03            [24] 2279 	jz	00257$
      000897 02 06 EC         [24] 2280 	ljmp	00137$
      00089A                       2281 00257$:
                                   2282 ;	main.c:888: int8_t data_len = transmit_buffer_in_offset - transmit_buffer_out_offset;
      00089A 78 33            [12] 2283 	mov	r0,#_transmit_buffer_in_offset
      00089C 79 34            [12] 2284 	mov	r1,#_transmit_buffer_out_offset
      00089E E6               [12] 2285 	mov	a,@r0
      00089F C3               [12] 2286 	clr	c
      0008A0 97               [12] 2287 	subb	a,@r1
                                   2288 ;	main.c:889: data_len = data_len < 0 ? 128 + data_len : data_len;
      0008A1 FE               [12] 2289 	mov	r6,a
      0008A2 30 E7 06         [24] 2290 	jnb	acc.7,00147$
      0008A5 74 80            [12] 2291 	mov	a,#0x80
      0008A7 2E               [12] 2292 	add	a,r6
      0008A8 FD               [12] 2293 	mov	r5,a
      0008A9 80 02            [24] 2294 	sjmp	00148$
      0008AB                       2295 00147$:
      0008AB 8E 05            [24] 2296 	mov	ar5,r6
      0008AD                       2297 00148$:
      0008AD 8D 06            [24] 2298 	mov	ar6,r5
                                   2299 ;	main.c:890: if (data_len > 0) // 2 for modem bytes.
      0008AF C3               [12] 2300 	clr	c
      0008B0 74 80            [12] 2301 	mov	a,#(0x00 ^ 0x80)
      0008B2 8E F0            [24] 2302 	mov	b,r6
      0008B4 63 F0 80         [24] 2303 	xrl	b,#0x80
      0008B7 95 F0            [12] 2304 	subb	a,b
      0008B9 50 5B            [24] 2305 	jnc	00130$
                                   2306 ;	main.c:893: send_len = (data_len >= 62) ? 62 : data_len;
      0008BB C3               [12] 2307 	clr	c
      0008BC EE               [12] 2308 	mov	a,r6
      0008BD 64 80            [12] 2309 	xrl	a,#0x80
      0008BF 94 BE            [12] 2310 	subb	a,#0xbe
      0008C1 92 01            [24] 2311 	mov	_main_sloc0_1_0,c
      0008C3 40 06            [24] 2312 	jc	00149$
      0008C5 7C 3E            [12] 2313 	mov	r4,#0x3e
      0008C7 7D 00            [12] 2314 	mov	r5,#0x00
      0008C9 80 06            [24] 2315 	sjmp	00150$
      0008CB                       2316 00149$:
      0008CB EE               [12] 2317 	mov	a,r6
      0008CC FC               [12] 2318 	mov	r4,a
      0008CD 33               [12] 2319 	rlc	a
      0008CE 95 E0            [12] 2320 	subb	a,acc
      0008D0 FD               [12] 2321 	mov	r5,a
      0008D1                       2322 00150$:
      0008D1 78 35            [12] 2323 	mov	r0,#_send_len
      0008D3 A6 04            [24] 2324 	mov	@r0,ar4
                                   2325 ;	main.c:895: for (i = 0; i < send_len; i++)
      0008D5 7E 00            [12] 2326 	mov	r6,#0x00
      0008D7                       2327 00143$:
      0008D7 C3               [12] 2328 	clr	c
      0008D8 EE               [12] 2329 	mov	a,r6
      0008D9 9C               [12] 2330 	subb	a,r4
      0008DA 50 2B            [24] 2331 	jnc	00123$
                                   2332 ;	main.c:897: Ep1Buffer[i + 2] = transmit_buffer[transmit_buffer_out_offset];
      0008DC 8E 05            [24] 2333 	mov	ar5,r6
      0008DE 0D               [12] 2334 	inc	r5
      0008DF 0D               [12] 2335 	inc	r5
      0008E0 ED               [12] 2336 	mov	a,r5
      0008E1 33               [12] 2337 	rlc	a
      0008E2 95 E0            [12] 2338 	subb	a,acc
      0008E4 FB               [12] 2339 	mov	r3,a
      0008E5 ED               [12] 2340 	mov	a,r5
      0008E6 24 40            [12] 2341 	add	a,#_Ep1Buffer
      0008E8 FD               [12] 2342 	mov	r5,a
      0008E9 EB               [12] 2343 	mov	a,r3
      0008EA 34 01            [12] 2344 	addc	a,#(_Ep1Buffer >> 8)
      0008EC FB               [12] 2345 	mov	r3,a
      0008ED 78 34            [12] 2346 	mov	r0,#_transmit_buffer_out_offset
      0008EF 86 82            [24] 2347 	mov	dpl,@r0
      0008F1 75 83 00         [24] 2348 	mov	dph,#(_transmit_buffer >> 8)
      0008F4 E0               [24] 2349 	movx	a,@dptr
      0008F5 FA               [12] 2350 	mov	r2,a
      0008F6 8D 82            [24] 2351 	mov	dpl,r5
      0008F8 8B 83            [24] 2352 	mov	dph,r3
      0008FA F0               [24] 2353 	movx	@dptr,a
                                   2354 ;	main.c:898: transmit_buffer_out_offset++;
      0008FB 78 34            [12] 2355 	mov	r0,#_transmit_buffer_out_offset
      0008FD 06               [12] 2356 	inc	@r0
                                   2357 ;	main.c:899: transmit_buffer_out_offset &= 0x7f;// %= sizeof(transmit_buffer);
      0008FE 78 34            [12] 2358 	mov	r0,#_transmit_buffer_out_offset
      000900 E6               [12] 2359 	mov	a,@r0
      000901 54 7F            [12] 2360 	anl	a,#0x7f
      000903 F6               [12] 2361 	mov	@r0,a
                                   2362 ;	main.c:895: for (i = 0; i < send_len; i++)
      000904 0E               [12] 2363 	inc	r6
      000905 80 D0            [24] 2364 	sjmp	00143$
      000907                       2365 00123$:
                                   2366 ;	main.c:924: ep1_in_busy = 1;
      000907 78 31            [12] 2367 	mov	r0,#_ep1_in_busy
      000909 76 01            [12] 2368 	mov	@r0,#0x01
                                   2369 ;	main.c:925: UEP1_T_LEN = send_len + 2;
      00090B 74 02            [12] 2370 	mov	a,#0x02
      00090D 2C               [12] 2371 	add	a,r4
      00090E F5 D3            [12] 2372 	mov	_UEP1_T_LEN,a
                                   2373 ;	main.c:926: UEP1_CTRL = UEP1_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_ACK; //应答ACK
      000910 53 D2 FC         [24] 2374 	anl	_UEP1_CTRL,#0xfc
      000913 02 06 EC         [24] 2375 	ljmp	00137$
      000916                       2376 00130$:
                                   2377 ;	main.c:928: else if ((sof_count - timeout_count) > latency_timer)
      000916 78 2F            [12] 2378 	mov	r0,#_sof_count
      000918 E6               [12] 2379 	mov	a,@r0
      000919 C3               [12] 2380 	clr	c
      00091A 95 1C            [12] 2381 	subb	a,_main_timeout_count_65536_121
      00091C FD               [12] 2382 	mov	r5,a
      00091D 08               [12] 2383 	inc	r0
      00091E E6               [12] 2384 	mov	a,@r0
      00091F 95 1D            [12] 2385 	subb	a,(_main_timeout_count_65536_121 + 1)
      000921 FE               [12] 2386 	mov	r6,a
      000922 78 32            [12] 2387 	mov	r0,#_latency_timer
      000924 86 03            [24] 2388 	mov	ar3,@r0
      000926 7C 00            [12] 2389 	mov	r4,#0x00
      000928 C3               [12] 2390 	clr	c
      000929 EB               [12] 2391 	mov	a,r3
      00092A 9D               [12] 2392 	subb	a,r5
      00092B EC               [12] 2393 	mov	a,r4
      00092C 9E               [12] 2394 	subb	a,r6
      00092D 50 14            [24] 2395 	jnc	00127$
                                   2396 ;	main.c:930: timeout_count = sof_count;
      00092F 78 2F            [12] 2397 	mov	r0,#_sof_count
      000931 86 1C            [24] 2398 	mov	_main_timeout_count_65536_121,@r0
      000933 08               [12] 2399 	inc	r0
      000934 86 1D            [24] 2400 	mov	(_main_timeout_count_65536_121 + 1),@r0
                                   2401 ;	main.c:931: ep1_in_busy = 1;
      000936 78 31            [12] 2402 	mov	r0,#_ep1_in_busy
      000938 76 01            [12] 2403 	mov	@r0,#0x01
                                   2404 ;	main.c:932: UEP1_T_LEN = 2;											 //预使用发送长度一定要清空
      00093A 75 D3 02         [24] 2405 	mov	_UEP1_T_LEN,#0x02
                                   2406 ;	main.c:933: UEP1_CTRL = UEP1_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_ACK; //应答ACK
      00093D 53 D2 FC         [24] 2407 	anl	_UEP1_CTRL,#0xfc
      000940 02 06 EC         [24] 2408 	ljmp	00137$
      000943                       2409 00127$:
                                   2410 ;	main.c:935: else if(send_dummy)
      000943 E5 0E            [12] 2411 	mov	a,_send_dummy
      000945 70 03            [24] 2412 	jnz	00263$
      000947 02 06 EC         [24] 2413 	ljmp	00137$
      00094A                       2414 00263$:
                                   2415 ;	main.c:937: send_dummy--;
      00094A 15 0E            [12] 2416 	dec	_send_dummy
                                   2417 ;	main.c:938: ep1_in_busy = 1;
      00094C 78 31            [12] 2418 	mov	r0,#_ep1_in_busy
      00094E 76 01            [12] 2419 	mov	@r0,#0x01
                                   2420 ;	main.c:939: UEP1_T_LEN = 2;											 //预使用发送长度一定要清空
      000950 75 D3 02         [24] 2421 	mov	_UEP1_T_LEN,#0x02
                                   2422 ;	main.c:940: UEP1_CTRL = UEP1_CTRL & ~MASK_UEP_T_RES | UEP_T_RES_ACK; //应答ACK
      000953 53 D2 FC         [24] 2423 	anl	_UEP1_CTRL,#0xfc
                                   2424 ;	main.c:945: }
      000956 02 06 EC         [24] 2425 	ljmp	00137$
                                   2426 	.area CSEG    (CODE)
                                   2427 	.area CONST   (CODE)
      000A9C                       2428 _ftdi_rom:
      000A9C 00                    2429 	.db #0x00	; 0
      000A9D 00                    2430 	.db #0x00	; 0
      000A9E FB                    2431 	.db #0xfb	; 251
      000A9F 09                    2432 	.db #0x09	; 9
      000AA0 01                    2433 	.db #0x01	; 1
      000AA1 60                    2434 	.db #0x60	; 96
      000AA2 00                    2435 	.db #0x00	; 0
      000AA3 04                    2436 	.db #0x04	; 4
      000AA4 80                    2437 	.db #0x80	; 128
      000AA5 E1                    2438 	.db #0xe1	; 225
      000AA6 1C                    2439 	.db #0x1c	; 28
      000AA7 00                    2440 	.db #0x00	; 0
      000AA8 00                    2441 	.db #0x00	; 0
      000AA9 02                    2442 	.db #0x02	; 2
      000AAA 94                    2443 	.db #0x94	; 148
      000AAB 0E                    2444 	.db #0x0e	; 14
      000AAC A2                    2445 	.db #0xa2	; 162
      000AAD 18                    2446 	.db #0x18	; 24
      000AAE BA                    2447 	.db #0xba	; 186
      000AAF 12                    2448 	.db #0x12	; 18
      000AB0 0E                    2449 	.db #0x0e	; 14
      000AB1 03                    2450 	.db #0x03	; 3
      000AB2 41                    2451 	.db #0x41	; 65	'A'
      000AB3 00                    2452 	.db #0x00	; 0
      000AB4 6C                    2453 	.db #0x6c	; 108	'l'
      000AB5 00                    2454 	.db #0x00	; 0
      000AB6 74                    2455 	.db #0x74	; 116	't'
      000AB7 00                    2456 	.db #0x00	; 0
      000AB8 65                    2457 	.db #0x65	; 101	'e'
      000AB9 00                    2458 	.db #0x00	; 0
      000ABA 72                    2459 	.db #0x72	; 114	'r'
      000ABB 00                    2460 	.db #0x00	; 0
      000ABC 61                    2461 	.db #0x61	; 97	'a'
      000ABD 00                    2462 	.db #0x00	; 0
      000ABE 18                    2463 	.db #0x18	; 24
      000ABF 03                    2464 	.db #0x03	; 3
      000AC0 55                    2465 	.db #0x55	; 85	'U'
      000AC1 00                    2466 	.db #0x00	; 0
      000AC2 53                    2467 	.db #0x53	; 83	'S'
      000AC3 00                    2468 	.db #0x00	; 0
      000AC4 42                    2469 	.db #0x42	; 66	'B'
      000AC5 00                    2470 	.db #0x00	; 0
      000AC6 2D                    2471 	.db #0x2d	; 45
      000AC7 00                    2472 	.db #0x00	; 0
      000AC8 42                    2473 	.db #0x42	; 66	'B'
      000AC9 00                    2474 	.db #0x00	; 0
      000ACA 6C                    2475 	.db #0x6c	; 108	'l'
      000ACB 00                    2476 	.db #0x00	; 0
      000ACC 61                    2477 	.db #0x61	; 97	'a'
      000ACD 00                    2478 	.db #0x00	; 0
      000ACE 73                    2479 	.db #0x73	; 115	's'
      000ACF 00                    2480 	.db #0x00	; 0
      000AD0 74                    2481 	.db #0x74	; 116	't'
      000AD1 00                    2482 	.db #0x00	; 0
      000AD2 65                    2483 	.db #0x65	; 101	'e'
      000AD3 00                    2484 	.db #0x00	; 0
      000AD4 72                    2485 	.db #0x72	; 114	'r'
      000AD5 00                    2486 	.db #0x00	; 0
      000AD6 12                    2487 	.db #0x12	; 18
      000AD7 03                    2488 	.db #0x03	; 3
      000AD8 43                    2489 	.db #0x43	; 67	'C'
      000AD9 00                    2490 	.db #0x00	; 0
      000ADA 30                    2491 	.db #0x30	; 48	'0'
      000ADB 00                    2492 	.db #0x00	; 0
      000ADC 42                    2493 	.db #0x42	; 66	'B'
      000ADD 00                    2494 	.db #0x00	; 0
      000ADE 46                    2495 	.db #0x46	; 70	'F'
      000ADF 00                    2496 	.db #0x00	; 0
      000AE0 41                    2497 	.db #0x41	; 65	'A'
      000AE1 00                    2498 	.db #0x00	; 0
      000AE2 36                    2499 	.db #0x36	; 54	'6'
      000AE3 00                    2500 	.db #0x00	; 0
      000AE4 44                    2501 	.db #0x44	; 68	'D'
      000AE5 00                    2502 	.db #0x00	; 0
      000AE6 37                    2503 	.db #0x37	; 55	'7'
      000AE7 00                    2504 	.db #0x00	; 0
      000AE8 02                    2505 	.db #0x02	; 2
      000AE9 03                    2506 	.db #0x03	; 3
      000AEA 01                    2507 	.db #0x01	; 1
      000AEB 00                    2508 	.db #0x00	; 0
      000AEC 52                    2509 	.db #0x52	; 82	'R'
      000AED 45                    2510 	.db #0x45	; 69	'E'
      000AEE 56                    2511 	.db #0x56	; 86	'V'
      000AEF 42                    2512 	.db #0x42	; 66	'B'
      000AF0 00                    2513 	.db #0x00	; 0
      000AF1 00                    2514 	.db #0x00	; 0
      000AF2 00                    2515 	.db #0x00	; 0
      000AF3 00                    2516 	.db #0x00	; 0
      000AF4 00                    2517 	.db #0x00	; 0
      000AF5 00                    2518 	.db #0x00	; 0
      000AF6 00                    2519 	.db #0x00	; 0
      000AF7 00                    2520 	.db #0x00	; 0
      000AF8 00                    2521 	.db #0x00	; 0
      000AF9 00                    2522 	.db #0x00	; 0
      000AFA 00                    2523 	.db #0x00	; 0
      000AFB 00                    2524 	.db #0x00	; 0
      000AFC 00                    2525 	.db #0x00	; 0
      000AFD 00                    2526 	.db #0x00	; 0
      000AFE 00                    2527 	.db #0x00	; 0
      000AFF 00                    2528 	.db #0x00	; 0
      000B00 00                    2529 	.db #0x00	; 0
      000B01 00                    2530 	.db #0x00	; 0
      000B02 00                    2531 	.db #0x00	; 0
      000B03 00                    2532 	.db #0x00	; 0
      000B04 00                    2533 	.db #0x00	; 0
      000B05 00                    2534 	.db #0x00	; 0
      000B06 00                    2535 	.db #0x00	; 0
      000B07 00                    2536 	.db #0x00	; 0
      000B08 00                    2537 	.db #0x00	; 0
      000B09 00                    2538 	.db #0x00	; 0
      000B0A 00                    2539 	.db #0x00	; 0
      000B0B 00                    2540 	.db #0x00	; 0
      000B0C 00                    2541 	.db #0x00	; 0
      000B0D 00                    2542 	.db #0x00	; 0
      000B0E 00                    2543 	.db #0x00	; 0
      000B0F 00                    2544 	.db #0x00	; 0
      000B10 00                    2545 	.db #0x00	; 0
      000B11 00                    2546 	.db #0x00	; 0
      000B12 00                    2547 	.db #0x00	; 0
      000B13 00                    2548 	.db #0x00	; 0
      000B14 00                    2549 	.db #0x00	; 0
      000B15 00                    2550 	.db #0x00	; 0
      000B16 00                    2551 	.db #0x00	; 0
      000B17 00                    2552 	.db #0x00	; 0
      000B18 00                    2553 	.db #0x00	; 0
      000B19 00                    2554 	.db #0x00	; 0
      000B1A B5                    2555 	.db #0xb5	; 181
      000B1B B2                    2556 	.db #0xb2	; 178
      000B1C                       2557 _DevDesc:
      000B1C 12                    2558 	.db #0x12	; 18
      000B1D 01                    2559 	.db #0x01	; 1
      000B1E 00                    2560 	.db #0x00	; 0
      000B1F 02                    2561 	.db #0x02	; 2
      000B20 00                    2562 	.db #0x00	; 0
      000B21 00                    2563 	.db #0x00	; 0
      000B22 00                    2564 	.db #0x00	; 0
      000B23 08                    2565 	.db #0x08	; 8
      000B24 FB                    2566 	.db #0xfb	; 251
      000B25 09                    2567 	.db #0x09	; 9
      000B26 01                    2568 	.db #0x01	; 1
      000B27 60                    2569 	.db #0x60	; 96
      000B28 00                    2570 	.db #0x00	; 0
      000B29 04                    2571 	.db #0x04	; 4
      000B2A 01                    2572 	.db #0x01	; 1
      000B2B 02                    2573 	.db #0x02	; 2
      000B2C 03                    2574 	.db #0x03	; 3
      000B2D 01                    2575 	.db #0x01	; 1
      000B2E                       2576 _CfgDesc:
      000B2E 09                    2577 	.db #0x09	; 9
      000B2F 02                    2578 	.db #0x02	; 2
      000B30 20                    2579 	.db #0x20	; 32
      000B31 00                    2580 	.db #0x00	; 0
      000B32 01                    2581 	.db #0x01	; 1
      000B33 01                    2582 	.db #0x01	; 1
      000B34 00                    2583 	.db #0x00	; 0
      000B35 80                    2584 	.db #0x80	; 128
      000B36 E1                    2585 	.db #0xe1	; 225
      000B37 09                    2586 	.db #0x09	; 9
      000B38 04                    2587 	.db #0x04	; 4
      000B39 00                    2588 	.db #0x00	; 0
      000B3A 00                    2589 	.db #0x00	; 0
      000B3B 02                    2590 	.db #0x02	; 2
      000B3C FF                    2591 	.db #0xff	; 255
      000B3D FF                    2592 	.db #0xff	; 255
      000B3E FF                    2593 	.db #0xff	; 255
      000B3F 00                    2594 	.db #0x00	; 0
      000B40 07                    2595 	.db #0x07	; 7
      000B41 05                    2596 	.db #0x05	; 5
      000B42 81                    2597 	.db #0x81	; 129
      000B43 02                    2598 	.db #0x02	; 2
      000B44 40                    2599 	.db #0x40	; 64
      000B45 00                    2600 	.db #0x00	; 0
      000B46 01                    2601 	.db #0x01	; 1
      000B47 07                    2602 	.db #0x07	; 7
      000B48 05                    2603 	.db #0x05	; 5
      000B49 02                    2604 	.db #0x02	; 2
      000B4A 02                    2605 	.db #0x02	; 2
      000B4B 40                    2606 	.db #0x40	; 64
      000B4C 00                    2607 	.db #0x00	; 0
      000B4D 01                    2608 	.db #0x01	; 1
      000B4E                       2609 _LangDes:
      000B4E 04                    2610 	.db #0x04	; 4
      000B4F 03                    2611 	.db #0x03	; 3
      000B50 09                    2612 	.db #0x09	; 9
      000B51 04                    2613 	.db #0x04	; 4
      000B52                       2614 _SerDes:
      000B52 12                    2615 	.db #0x12	; 18
      000B53 03                    2616 	.db #0x03	; 3
      000B54 43                    2617 	.db #0x43	; 67	'C'
      000B55 00                    2618 	.db #0x00	; 0
      000B56 30                    2619 	.db #0x30	; 48	'0'
      000B57 00                    2620 	.db #0x00	; 0
      000B58 42                    2621 	.db #0x42	; 66	'B'
      000B59 00                    2622 	.db #0x00	; 0
      000B5A 46                    2623 	.db #0x46	; 70	'F'
      000B5B 00                    2624 	.db #0x00	; 0
      000B5C 41                    2625 	.db #0x41	; 65	'A'
      000B5D 00                    2626 	.db #0x00	; 0
      000B5E 36                    2627 	.db #0x36	; 54	'6'
      000B5F 00                    2628 	.db #0x00	; 0
      000B60 44                    2629 	.db #0x44	; 68	'D'
      000B61 00                    2630 	.db #0x00	; 0
      000B62 37                    2631 	.db #0x37	; 55	'7'
      000B63 00                    2632 	.db #0x00	; 0
      000B64                       2633 _Prod_Des:
      000B64 18                    2634 	.db #0x18	; 24
      000B65 03                    2635 	.db #0x03	; 3
      000B66 55                    2636 	.db #0x55	; 85	'U'
      000B67 00                    2637 	.db #0x00	; 0
      000B68 53                    2638 	.db #0x53	; 83	'S'
      000B69 00                    2639 	.db #0x00	; 0
      000B6A 42                    2640 	.db #0x42	; 66	'B'
      000B6B 00                    2641 	.db #0x00	; 0
      000B6C 2D                    2642 	.db #0x2d	; 45
      000B6D 00                    2643 	.db #0x00	; 0
      000B6E 42                    2644 	.db #0x42	; 66	'B'
      000B6F 00                    2645 	.db #0x00	; 0
      000B70 6C                    2646 	.db #0x6c	; 108	'l'
      000B71 00                    2647 	.db #0x00	; 0
      000B72 61                    2648 	.db #0x61	; 97	'a'
      000B73 00                    2649 	.db #0x00	; 0
      000B74 73                    2650 	.db #0x73	; 115	's'
      000B75 00                    2651 	.db #0x00	; 0
      000B76 74                    2652 	.db #0x74	; 116	't'
      000B77 00                    2653 	.db #0x00	; 0
      000B78 65                    2654 	.db #0x65	; 101	'e'
      000B79 00                    2655 	.db #0x00	; 0
      000B7A 72                    2656 	.db #0x72	; 114	'r'
      000B7B 00                    2657 	.db #0x00	; 0
      000B7C                       2658 _Manuf_Des:
      000B7C 0E                    2659 	.db #0x0e	; 14
      000B7D 03                    2660 	.db #0x03	; 3
      000B7E 41                    2661 	.db #0x41	; 65	'A'
      000B7F 00                    2662 	.db #0x00	; 0
      000B80 6C                    2663 	.db #0x6c	; 108	'l'
      000B81 00                    2664 	.db #0x00	; 0
      000B82 74                    2665 	.db #0x74	; 116	't'
      000B83 00                    2666 	.db #0x00	; 0
      000B84 65                    2667 	.db #0x65	; 101	'e'
      000B85 00                    2668 	.db #0x00	; 0
      000B86 72                    2669 	.db #0x72	; 114	'r'
      000B87 00                    2670 	.db #0x00	; 0
      000B88 61                    2671 	.db #0x61	; 97	'a'
      000B89 00                    2672 	.db #0x00	; 0
                                   2673 	.area XINIT   (CODE)
                                   2674 	.area CABS    (ABS,CODE)
