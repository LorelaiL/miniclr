/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Wed, Mar 11, 2009                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :SH7020                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  




//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                

//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP

//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
extern void Manual_Reset_PC(void);                                                                                                                 

//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP

// 4 Illegal code
#pragma interrupt INT_Illegal_code
extern void INT_Illegal_code(void);

// 5 Reserved

// 6 Illegal slot
#pragma interrupt INT_Illegal_slot
extern void INT_Illegal_slot(void);

// 7 Reserved

// 8 Reserved

// 9 CPU Address error
#pragma interrupt INT_CPU_Address
extern void INT_CPU_Address(void);

// 10 DMA Address error
#pragma interrupt INT_DMA_Address
extern void INT_DMA_Address(void);

// 11 NMI
#pragma interrupt INT_NMI
extern void INT_NMI(void);

// 12 User breakpoint trap
#pragma interrupt INT_User_Break
extern void INT_User_Break(void);

// 13 Reserved

// 14 Reserved

// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA32
extern void INT_TRAPA32(void);

// 33 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA33
extern void INT_TRAPA33(void);

// 34 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA34
extern void INT_TRAPA34(void);

// 35 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA35
extern void INT_TRAPA35(void);

// 36 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA36
extern void INT_TRAPA36(void);

// 37 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA37
extern void INT_TRAPA37(void);

// 38 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA38
extern void INT_TRAPA38(void);

// 39 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA39
extern void INT_TRAPA39(void);

// 40 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA40
extern void INT_TRAPA40(void);

// 41 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA41
extern void INT_TRAPA41(void);

// 42 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA42
extern void INT_TRAPA42(void);

// 43 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA43
extern void INT_TRAPA43(void);

// 44 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA44
extern void INT_TRAPA44(void);

// 45 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA45
extern void INT_TRAPA45(void);

// 46 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA46
extern void INT_TRAPA46(void);

// 47 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA47
extern void INT_TRAPA47(void);

// 48 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA48
extern void INT_TRAPA48(void);

// 49 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA49
extern void INT_TRAPA49(void);

// 50 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA50
extern void INT_TRAPA50(void);

// 51 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA51
extern void INT_TRAPA51(void);

// 52 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA52
extern void INT_TRAPA52(void);

// 53 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA53
extern void INT_TRAPA53(void);

// 54 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA54
extern void INT_TRAPA54(void);

// 55 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA55
extern void INT_TRAPA55(void);

// 56 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA56
extern void INT_TRAPA56(void);

// 57 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA57
extern void INT_TRAPA57(void);

// 58 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA58
extern void INT_TRAPA58(void);

// 59 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA59
extern void INT_TRAPA59(void);

// 60 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA60
extern void INT_TRAPA60(void);

// 61 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA61
extern void INT_TRAPA61(void);

// 62 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA62
extern void INT_TRAPA62(void);

// 63 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA63
extern void INT_TRAPA63(void);

// 64 Interrupt IRQ0
#pragma interrupt INT_IRQ0
extern void INT_IRQ0(void);

// 65 Interrupt IRQ1
#pragma interrupt INT_IRQ1
extern void INT_IRQ1(void);

// 66 Interrupt IRQ2
#pragma interrupt INT_IRQ2
extern void INT_IRQ2(void);

// 67 Interrupt IRQ3
#pragma interrupt INT_IRQ3
extern void INT_IRQ3(void);

// 68 Interrupt IRQ4
#pragma interrupt INT_IRQ4
extern void INT_IRQ4(void);

// 69 Interrupt IRQ5
#pragma interrupt INT_IRQ5
extern void INT_IRQ5(void);

// 70 Interrupt IRQ6
#pragma interrupt INT_IRQ6
extern void INT_IRQ6(void);

// 71 Interrupt IRQ7
#pragma interrupt INT_IRQ7
extern void INT_IRQ7(void);

// 72 DMAC0 DEI0
#pragma interrupt INT_DMAC0_DEI0
extern void INT_DMAC0_DEI0(void);

// 73 DMAC0 Reserved
#pragma interrupt INT_DMAC0_Reserved
extern void INT_DMAC0_Reserved(void);

// 74 DMAC1 DEI1
#pragma interrupt INT_DMAC1_DEI1
extern void INT_DMAC1_DEI1(void);

// 75 DMAC1 Reserved
#pragma interrupt INT_DMAC1_Reserved
extern void INT_DMAC1_Reserved(void);

// 76 DMAC2 DEI2
#pragma interrupt INT_DMAC2_DEI2
extern void INT_DMAC2_DEI2(void);

// 77 DMAC2 Reserved
#pragma interrupt INT_DMAC2_Reserved
extern void INT_DMAC2_Reserved(void);

// 78 DMAC3 DEI3
#pragma interrupt INT_DMAC3_DEI3
extern void INT_DMAC3_DEI3(void);

// 79 DMAC3 Reserved
#pragma interrupt INT_DMAC3_Reserved
extern void INT_DMAC3_Reserved(void);

// 80 ITU0 IMIA0
#pragma interrupt INT_ITU0_IMIA0
extern void INT_ITU0_IMIA0(void);

// 81 ITU0 IMIB0
#pragma interrupt INT_ITU0_IMIB0
extern void INT_ITU0_IMIB0(void);

// 82 ITU0 OVI0
#pragma interrupt INT_ITU0_OVI0
extern void INT_ITU0_OVI0(void);

// 83 ITU0 Reserved
#pragma interrupt INT_ITU0_Reserved
extern void INT_ITU0_Reserved(void);

// 84 ITU1 IMIA1
#pragma interrupt INT_ITU1_IMIA1
extern void INT_ITU1_IMIA1(void);

// 85 ITU1 IMIB1
#pragma interrupt INT_ITU1_IMIB1
extern void INT_ITU1_IMIB1(void);

// 86 ITU1 OVI1
#pragma interrupt INT_ITU1_OVI1
extern void INT_ITU1_OVI1(void);

// 87 ITU1 Reserved
#pragma interrupt INT_ITU1_Reserved
extern void INT_ITU1_Reserved(void);

// 88 ITU2 IMIA2
#pragma interrupt INT_ITU2_IMIA2
extern void INT_ITU2_IMIA2(void);

// 89 ITU2 IMIB2
#pragma interrupt INT_ITU2_IMIB2
extern void INT_ITU2_IMIB2(void);

// 90 ITU2 OVI2
#pragma interrupt INT_ITU2_OVI2
extern void INT_ITU2_OVI2(void);

// 91 ITU2 Reserved
#pragma interrupt INT_ITU2_Reserved
extern void INT_ITU2_Reserved(void);

// 92 ITU3 IMIA3
#pragma interrupt INT_ITU3_IMIA3
extern void INT_ITU3_IMIA3(void);

// 93 ITU3 IMIB3
#pragma interrupt INT_ITU3_IMIB3
extern void INT_ITU3_IMIB3(void);

// 94 ITU3 OVI3
#pragma interrupt INT_ITU3_OVI3
extern void INT_ITU3_OVI3(void);

// 95 ITU3 Reserved
#pragma interrupt INT_ITU3_Reserved
extern void INT_ITU3_Reserved(void);

// 96 ITU4 IMIA4
#pragma interrupt INT_ITU4_IMIA4
extern void INT_ITU4_IMIA4(void);

// 97 ITU4 IMIB4
#pragma interrupt INT_ITU4_IMIB4
extern void INT_ITU4_IMIB4(void);

// 98 ITU4 OVI4
#pragma interrupt INT_ITU4_OVI4
extern void INT_ITU4_OVI4(void);

// 99 ITU4 Reserved
#pragma interrupt INT_ITU4_Reserved
extern void INT_ITU4_Reserved(void);

// 100 SCI0 ERI0
#pragma interrupt INT_SCI0_ERI0
extern void INT_SCI0_ERI0(void);

// 101 SCI0 RXI0
#pragma interrupt INT_SCI0_RXI0
extern void INT_SCI0_RXI0(void);

// 102 SCI0 TXI0
#pragma interrupt INT_SCI0_TXI0
extern void INT_SCI0_TXI0(void);

// 103 SCI0 TEI0
#pragma interrupt INT_SCI0_TEI0
extern void INT_SCI0_TEI0(void);

// 104 SCI1 ERI1
#pragma interrupt INT_SCI1_ERI1
extern void INT_SCI1_ERI1(void);

// 105 SCI1 RXI1
#pragma interrupt INT_SCI1_RXI1
extern void INT_SCI1_RXI1(void);

// 106 SCI1 TXI1
#pragma interrupt INT_SCI1_TXI1
extern void INT_SCI1_TXI1(void);

// 107 SCI1 TEI1
#pragma interrupt INT_SCI1_TEI1
extern void INT_SCI1_TEI1(void);

// 108 PRT PEI
#pragma interrupt INT_PRT_PEI
extern void INT_PRT_PEI(void);

// 109 PRT Reserved

// 110 PRT Reserved

// 111 PRT Reserved

// 112 WDT ITI
#pragma interrupt INT_WDT_ITI
extern void INT_WDT_ITI(void);

// 113 REF CMI
#pragma interrupt INT_REF_CMI
extern void INT_REF_CMI(void);

// 114 REF Reserved

// 115 REF Reserved

// 116 Reserved

// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 Reserved

// 121 Reserved

// 122 Reserved

// 123 Reserved

// 124 Reserved

// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 Reserved

// 129 Reserved

// 130 Reserved

// 131 Reserved

// 132 Reserved

// 133 Reserved

// 134 Reserved

// 135 Reserved

// 136 Reserved

// 137 Reserved

// 138 Reserved

// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 Reserved

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 Reserved

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 Reserved

// 153 Reserved

// 154 Reserved

// 155 Reserved

// 156 Reserved

// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 Reserved

// 161 Reserved

// 162 Reserved

// 163 Reserved

// 164 Reserved

// 165 Reserved

// 166 Reserved

// 127 Reserved

// 168 Reserved

// 169 Reserved

// 170 Reserved

// 171 Reserved

// 172 Reserved

// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 Reserved

// 177 Reserved

// 178 Reserved

// 179 Reserved

// 180 Reserved

// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 Reserved

// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 Reserved

// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 Reserved

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 Reserved

// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 Reserved

// 201 Reserved

// 202 Reserved

// 203 Reserved

// 204 Reserved

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 Reserved

// 209 Reserved

// 210 Reserved

// 211 Reserved

// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 Reserved

// 217 Reserved

// 218 Reserved

// 219 Reserved

// 220 Reserved

// 221 Reserved

// 222 Reserved

// 223 Reserved

// 224 Reserved

// 225 Reserved

// 226 Reserved

// 227 Reserved

// 228 Reserved

// 229 Reserved

// 230 Reserved

// 231 Reserved

// 232 Reserved

// 233 Reserved

// 234 Reserved

// 235 Reserved

// 236 Reserved

// 237 Reserved

// 238 Reserved

// 239 Reserved

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved


// Dummy
#pragma interrupt Dummy
extern void Dummy(void);