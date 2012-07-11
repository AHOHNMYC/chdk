
static FuncSig func_sig_SleepTask_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0038
	{   3, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0xc00f1000, 0xf00ff000 }, // ldr:8:0xC59F1048
	{   7, 0xc00f0000, 0xf00ff000 }, // add:10:0xC28F002C
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCBFFCA68
	{   9, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFDE5
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFA207
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFF8
	{  20, 0x5172654b, 0xfdffffff }, // cmn:7:0x5372654B
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0x3B9ACA00
	{  27, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F002C
	{  28, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  29, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  30, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	/* 25/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_CreateTask_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43FE
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0218
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe59d8000, 0xfdfff000 }, // ldr:4:0xE59D8028
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   7, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07003
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0xc1a01000, 0xfdfff000 }, // mov:6:0xC3A010A3
	{  10, 0xc00f0000, 0xf00ff000 }, // add:10:0xC28F0F7F
	{  11, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05002
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCB000128
	{  13, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11FC
	{  14, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  15, 0x05914000, 0xfdfff000 }, // ldr:4:0x05914000
	{  16, 0xe0460000, 0xfdfff000 }, // sub:6:0xE2460001
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500020
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A000001
	{  19, 0xe1570000, 0xfdfff000 }, // cmp:7:0xE3570000
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83FE
	{  23, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  24, 0x05915000, 0xfdfff000 }, // ldr:4:0x05915004
	{  25, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  26, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D0014
	{  27, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01008
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  29, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03005
	{  30, 0xe58d6000, 0xfdfff000 }, // str:4:0xE58D6000
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD7C9
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExitTask_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0070
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   4, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   5, 0xc00f1000, 0xf00ff000 }, // ldr:8:0xC59F1028
	{   6, 0xc00f0000, 0xf00ff000 }, // sub:10:0xC24F0084
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCB000089
	{   8, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F007C
	{   9, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0xc1a01000, 0xfdfff000 }, // mov:6:0xC3A01F87
	{  12, 0xc00f0000, 0xf00ff000 }, // sub:10:0xC24F009C
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCB000083
	{  14, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  15, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFD76C
	{  18, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0C003
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{  20, 0xe59d3000, 0xfdfff000 }, // ldr:4:0xE59D3010
	{  21, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  22, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A0300C
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF43
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500005
	{  25, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  26, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F72
	{  27, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01013
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B000074
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8038
	{  31, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_AllocateMemory_1[] = {
	{   0, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF90666
	{   2, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   3, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF90631
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   6, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800004
	{   8, 0xe5101000, 0xfdfff000 }, // ldr:4:0xE5101004
	{   9, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  10, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  18, 0x78380000, 0xffff0000 }, // ldm:5:0x78383025
	{  26, 0x78320000, 0xffff0000 }, // ldm:5:0x78323025
	{  28, 0x78340000, 0xffff0000 }, // ldm:5:0x78343025
	{  30, 0x78380000, 0xffff0000 }, // ldm:5:0x78383025
	/* 16/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExecuteEventProcedure_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D000F
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00F8
	{   3, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1010
	{   4, 0xe0404000, 0xfdfff000 }, // sub:6:0xE2404014
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{   6, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   7, 0xe0805000, 0xfdf0f000 }, // add:6:0xE28D5014
	{   8, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB003810
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500019
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  12, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00A0
	{  13, 0xe59d3000, 0xfdfff000 }, // ldr:4:0xE59D3010
	{  14, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F20CC
	{  15, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10BC
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00092C
	{  17, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  18, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0088
	{  20, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE5942000
	{  21, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1010
	{  22, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  24, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  25, 0xe8900000, 0xffff0000 }, // ldm:5:0xE8900006
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD0038
	{  29, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF014
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_FreeMemory_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9066B
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{   5, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF90666
	{   7, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF90631
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  12, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800004
	{  13, 0xe5101000, 0xfdfff000 }, // ldr:4:0xE5101004
	{  14, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  15, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0x78380000, 0xffff0000 }, // ldm:5:0x78383025
	{  31, 0x78320000, 0xffff0000 }, // ldm:5:0x78323025
	/* 19/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetSystemTime_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF906F7
	{   3, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{   5, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401F
	{   6, 0xe1a0e000, 0xfdfff000 }, // mov:6:0xE1A0E001
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F139C
	{   8, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A0400D
	{   9, 0xe8910000, 0xffff0000 }, // ldm:5:0xE891100E
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500004
	{  11, 0x315e0000, 0xfdfff000 }, // cmp:7:0x335E0050
	{  12, 0x21a00000, 0xfdfff000 }, // mov:6:0x23A00001
	{  13, 0xe8840000, 0xffff0000 }, // stm:5:0xE884100E
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A00000D
	{  15, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1118
	{  16, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F337C
	{  18, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  19, 0x1583e000, 0xfdfff000 }, // str:4:0x1583E108
	{  20, 0x11a02000, 0xfdfff000 }, // mov:6:0x13A02E1A
	{  21, 0x0583e000, 0xfdfff000 }, // str:4:0x0583E104
	{  22, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE7940100
	{  23, 0x01a02000, 0xfdfff000 }, // mov:6:0x03A02E19
	{  24, 0xe5802000, 0xfdfff000 }, // str:4:0xE5802000
	{  25, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  27, 0xe5c10000, 0xfdfff000 }, // strb:4:0xE5C10000
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  29, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD010
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  31, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2801004
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_memcmp_1[] = {
	{   0, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520018
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000029
	{   2, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000A
	{   5, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{   6, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{   7, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{   8, 0x00422000, 0xfdfff000 }, // sub:6:0x02422001
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  12, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  14, 0xe1100003, 0xfdffffff }, // tst:7:0xE3100003
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF2
	{  16, 0xe2113000, 0xfffff000 }, // and:7:0xE2113003
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000D
	{  18, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00001A
	{  20, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530002
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000013
	{  22, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530003
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000016
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000012
	{  25, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE5903000
	{  26, 0xe591c000, 0xfdfff000 }, // ldr:4:0xE591C000
	{  27, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000011
	{  29, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800004
	{  30, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2811004
	{  31, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422004
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_memcpy_1[] = {
	{   0, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520010
	{   1, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{   2, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000032
	{   3, 0xe1130003, 0xfdffffff }, // tst:7:0xE3130003
	{   5, 0x10422000, 0xfdfff000 }, // sub:6:0x12422001
	{   6, 0x14c3c000, 0xfdfff000 }, // strb:4:0x14C3C001
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFA
	{   8, 0xe211c000, 0xfffff000 }, // and:7:0xE211C003
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000D
	{  10, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000029
	{  12, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0002
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000027
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001A
	{  15, 0xe491c000, 0xfdfff000 }, // ldr:4:0xE491C004
	{  16, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422010
	{  17, 0xe483c000, 0xfdfff000 }, // str:4:0xE483C004
	{  18, 0xe491c000, 0xfdfff000 }, // ldr:4:0xE491C004
	{  19, 0xe483c000, 0xfdfff000 }, // str:4:0xE483C004
	{  20, 0xe491c000, 0xfdfff000 }, // ldr:4:0xE491C004
	{  21, 0xe483c000, 0xfdfff000 }, // str:4:0xE483C004
	{  22, 0xe491c000, 0xfdfff000 }, // ldr:4:0xE491C004
	{  23, 0xe483c000, 0xfdfff000 }, // str:4:0xE483C004
	{  24, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520010
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2AFFFFF4
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000002
	{  27, 0xe491c000, 0xfdfff000 }, // ldr:4:0xE491C004
	{  28, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422004
	{  29, 0xe483c000, 0xfdfff000 }, // str:4:0xE483C004
	{  30, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520004
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2AFFFFFA
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_memset_1[] = {
	{   0, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   1, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520010
	{   2, 0xe203c000, 0xfffff000 }, // and:7:0xE203C0FF
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000016
	{   5, 0xe1110003, 0xfdffffff }, // tst:7:0xE3110003
	{   6, 0x10422000, 0xfdfff000 }, // sub:6:0x12422001
	{   7, 0x14c1c000, 0xfdfff000 }, // strb:4:0x14C1C001
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   9, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03C0C
	{  13, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000007
	{  15, 0xe4813000, 0xfdfff000 }, // str:4:0xE4813004
	{  16, 0xe4813000, 0xfdfff000 }, // str:4:0xE4813004
	{  17, 0xe4813000, 0xfdfff000 }, // str:4:0xE4813004
	{  18, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422010
	{  19, 0xe4813000, 0xfdfff000 }, // str:4:0xE4813004
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFF7
	{  21, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422004
	{  22, 0xe4813000, 0xfdfff000 }, // str:4:0xE4813004
	{  23, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520004
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2AFFFFFB
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000001
	{  26, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422001
	{  27, 0xe4c1c000, 0xfdfff000 }, // strb:4:0xE4C1C001
	{  28, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	/* 27/31 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Close_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD489
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00AAC1
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{   8, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  10, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD41F
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{  15, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B3FE
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{  19, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFF2
	{  21, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00AADC
	{  25, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000176
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000185
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  31, 0x01e04000, 0xfdfff000 }, // mvn:6:0x03E04000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Open_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD466
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00AA8D
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  10, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  11, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD489
	{  13, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00AAC1
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  20, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD41F
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  23, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{  25, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B3FE
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  28, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{  29, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFF2
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Read_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{   2, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   6, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE27
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE4CD
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01009
	{  12, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  13, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  14, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01A4
	{  16, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  18, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE590300C
	{  21, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  25, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  27, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  30, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0F
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Write_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05002
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4EF
	{   4, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500005
	{   5, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   6, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00006
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00AA87
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  10, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  11, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD426
	{  15, 0xe0504000, 0xfdfff000 }, // sub:6:0xE2504000
	{  16, 0xb1e00000, 0xfdfff000 }, // mvn:6:0xB3E00000
	{  17, 0xb8bd0000, 0xffff0000 }, // ldm:5:0xB8BD8070
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100B
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD529
	{  22, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD448
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  28, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{  29, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFEA
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Lseek_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{   1, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD034
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000B
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01010
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD510
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000023
	{  12, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100F
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD50A
	{  16, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD034
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8030
	{  18, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000F
	{  20, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100F
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD502
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000015
	{  26, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0844000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000011
	{  28, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01010
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4FA
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcmp_1[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{   2, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{   3, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{   4, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{   8, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  11, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  13, 0x01530000, 0xfdfff000 }, // cmp:7:0x03530000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF1
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  21, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  22, 0x10801000, 0xfdf0f000 }, // add:6:0x12811001
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{  24, 0xe0410000, 0xfdfff000 }, // sub:6:0xE0410000
	{  26, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520018
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000029
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000A
	{  31, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	/* 20/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcpy_1[] = {
	{   0, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{   2, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{   3, 0xe4c23000, 0xfdfff000 }, // strb:4:0xE4C23001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   6, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000009
	{   9, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0000
	{  10, 0xe4c3c000, 0xfdfff000 }, // strb:4:0xE4C3C001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422001
	{  14, 0xe1720001, 0xfdffffff }, // cmn:7:0xE3720001
	{  15, 0x14c31000, 0xfdfff000 }, // strb:4:0x14C31001
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{  18, 0xe0522000, 0xfdfff000 }, // sub:6:0xE2522001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2AFFFFF3
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{  23, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{  24, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  25, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  29, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	/* 22/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strlen_1[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   4, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   5, 0x10801000, 0xfdf0f000 }, // add:6:0x12811001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   7, 0xe0410000, 0xfdfff000 }, // sub:6:0xE0410000
	{   9, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520018
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000029
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000A
	{  14, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{  15, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  16, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  17, 0x00422000, 0xfdfff000 }, // sub:6:0x02422001
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  21, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  23, 0xe1100003, 0xfdffffff }, // tst:7:0xE3100003
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF2
	{  25, 0xe2113000, 0xfffff000 }, // and:7:0xE2113003
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000D
	{  27, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530001
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00001A
	{  29, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530002
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000013
	{  31, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530003
	/* 24/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_TakeSemaphore_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F009C
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0xc00f1000, 0xf00ff000 }, // ldr:8:0xC59F109C
	{   8, 0xc00f0000, 0xf00ff000 }, // add:10:0xC28F0088
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCB000184
	{  10, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0094
	{  11, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0xc00f1000, 0xf00ff000 }, // ldr:8:0xC59F108C
	{  14, 0xc00f0000, 0xf00ff000 }, // add:10:0xC28F0070
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xCB00017E
	{  16, 0xe2040000, 0xfffff000 }, // and:7:0xE2040001
	{  17, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{  18, 0xe1100004, 0xfdffffff }, // tst:7:0xE1100004
	{  19, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00007
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000014
	{  21, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  22, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0034F7
	{  27, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A000A4
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDA36
	{  30, 0xe1700002, 0xfdffffff }, // cmn:7:0xE3700002
	{  31, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00009
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_vsprintf_1[] = {
	{   0, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	{   2, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0008
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03002
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{   6, 0xe1cd0000, 0xfdfff000 }, // bic:6:0xE1CD01B4
	{   7, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F004C
	{   8, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE9A3
	{  10, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D2008
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  12, 0xe5c21000, 0xfdfff000 }, // strb:4:0xE5C21000
	{  13, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD01C
	{  14, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF004
	/* 15/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetZoomLensCurrentPoint_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F41BC
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1BF0
	{   5, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0F6F
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC2427
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03340F
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFEB
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03340C
	{  12, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA033197
	{  15, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{  16, 0xe1a09000, 0xfdfff000 }, // mov:6:0xE1A09002
	{  17, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{  18, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFEB
	{  20, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE51F6208
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe5960000, 0xfdfff000 }, // ldr:4:0xE5960000
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  24, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010C6
	{  25, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0F83
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC2413
	{  27, 0xe5960000, 0xfdfff000 }, // ldr:4:0xE5960008
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  29, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{  30, 0xe5960000, 0xfdfff000 }, // ldr:4:0xE5960010
	{  31, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE51F8208
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetZoomLensCurrentPosition_1[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA033137
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFE0C
	{   2, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   3, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F0100
	{   4, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2D48
	{   5, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820028
	{   6, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   7, 0x15821000, 0xfdfff000 }, // str:4:0x1582102C
	{   8, 0x05820000, 0xfdfff000 }, // str:4:0x0582002C
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F00E4
	{  12, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2D68
	{  13, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820018
	{  14, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  15, 0x15821000, 0xfdfff000 }, // str:4:0x1582101C
	{  16, 0x05820000, 0xfdfff000 }, // str:4:0x0582001C
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  19, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00C8
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB033528
	{  21, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00C4
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA032DF1
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F00A8
	{  26, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2DA0
	{  27, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820020
	{  28, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  29, 0x15821000, 0xfdfff000 }, // str:4:0x15821024
	{  30, 0x05820000, 0xfdfff000 }, // str:4:0x05820024
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_RefreshPhysicalScreen_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401F
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000A4
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000017
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F44D0
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940030
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000011
	{   8, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F7B
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFBD744
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF1A8
	{  12, 0xe9940000, 0xffff0000 }, // ldm:5:0xE994000C
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  14, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  15, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D000E
	{  16, 0xe594c000, 0xfdfff000 }, // ldr:4:0xE594C028
	{  17, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  18, 0xe5943000, 0xfdfff000 }, // ldr:4:0xE5943000
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF19D
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF084
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF242
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  25, 0xe5840000, 0xfdfff000 }, // str:4:0xE584002C
	{  26, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940018
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFAA64D
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801F
	{  29, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1534
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  31, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810030
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetPropertyCase_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4130
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1820
	{   7, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0F51
	{   8, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFEC910
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  11, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3810
	{  12, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1800
	{  13, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  14, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2E16
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC8C4
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  17, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFC5
	{  21, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  22, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  23, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC7A6
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	/* 27/27 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetPropertyCase_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4028
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01F43
	{   7, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F003C
	{   8, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFEC952
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  11, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3908
	{  12, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1908
	{  13, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  14, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2058
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC906
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  17, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF81
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  22, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F18E4
	{  23, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F007C
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEC943
	{  25, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  26, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD41F0
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEC7E4
	/* 29/29 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_VbattGet_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008AF0
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F183C
	{   4, 0xe1d11000, 0xfdfff000 }, // bic:6:0xE1D110B0
	{   5, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   6, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFD64
	{  10, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40F8
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A94
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A92
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A90
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFED
	{  18, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE7BB
	{  20, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F657C
	{  21, 0xe5964000, 0xfdfff000 }, // ldr:4:0xE59640E4
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A75
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A73
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008A71
	{  28, 0xe00fc000, 0xf00ff000 }, // ldr:8:0xE51FC8F4
	{  29, 0xe59c3000, 0xfdfff000 }, // ldr:4:0xE59C3028
	{  30, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530001
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000047
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_read_keys_1[] = {
	{   0, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F214C
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   4, 0xe5821000, 0xfdfff000 }, // str:4:0xE7821100
	{   5, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFFC
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008FDE
	{   8, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F016C
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008FCF
	{  10, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0174
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008E85
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA008FEE
	/* 14/14 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p1_f_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D403E
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFBB
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1260
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   5, 0xe0412000, 0xfdfff000 }, // sub:6:0xE241200C
	{   6, 0xe0803000, 0xfdf0f000 }, // add:6:0xE2823018
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A0500D
	{   8, 0xe593c000, 0xfdfff000 }, // ldr:4:0xE793C100
	{   9, 0xe592e000, 0xfdfff000 }, // ldr:4:0xE792E100
	{  11, 0xe591e000, 0xfdfff000 }, // ldr:4:0xE791E100
	{  13, 0xe585c000, 0xfdfff000 }, // str:4:0xE785C100
	{  14, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFF7
	{  16, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2280
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  18, 0xe0421000, 0xfdfff000 }, // sub:6:0xE242100C
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE53
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F029C
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008E30
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F12A4
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  24, 0x01a04000, 0xfdfff000 }, // mov:6:0x03A04001
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  26, 0xe0802000, 0xfdf0f000 }, // add:6:0xE281200C
	{  27, 0xe5923000, 0xfdfff000 }, // ldr:4:0xE7923100
	{  28, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000006
	{  30, 0xe591c000, 0xfdfff000 }, // ldr:4:0xE791C100
	{  31, 0xe595e000, 0xfdfff000 }, // ldr:4:0xE795E100
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p1_f_cont_1[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1260
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   2, 0xe0412000, 0xfdfff000 }, // sub:6:0xE241200C
	{   3, 0xe0803000, 0xfdf0f000 }, // add:6:0xE2823018
	{   4, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A0500D
	{   5, 0xe593c000, 0xfdfff000 }, // ldr:4:0xE793C100
	{   6, 0xe592e000, 0xfdfff000 }, // ldr:4:0xE792E100
	{   8, 0xe591e000, 0xfdfff000 }, // ldr:4:0xE791E100
	{  10, 0xe585c000, 0xfdfff000 }, // str:4:0xE785C100
	{  11, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFF7
	{  13, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2280
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  15, 0xe0421000, 0xfdfff000 }, // sub:6:0xE242100C
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE53
	{  17, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F029C
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008E30
	{  19, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F12A4
	{  20, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  21, 0x01a04000, 0xfdfff000 }, // mov:6:0x03A04001
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  23, 0xe0802000, 0xfdf0f000 }, // add:6:0xE281200C
	{  24, 0xe5923000, 0xfdfff000 }, // ldr:4:0xE7923100
	{  25, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000006
	{  27, 0xe591c000, 0xfdfff000 }, // ldr:4:0xE791C100
	{  28, 0xe595e000, 0xfdfff000 }, // ldr:4:0xE795E100
	{  29, 0xe1ccc000, 0xfdfff000 }, // bic:6:0xE1CCC003
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p2_f_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD018
	{   2, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F656C
	{   3, 0xe0807000, 0xfdf0f000 }, // add:6:0xE28D7008
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001D
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1554
	{   7, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3008
	{   8, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2014
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0090FA
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000C
	{  12, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0014
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500102
	{  14, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500000
	{  15, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500106
	{  16, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500001
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  18, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1514
	{  19, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911004
	{  20, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0001B5
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000000
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0001A0
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  26, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE7971100
	{  27, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  28, 0x15962000, 0xfdfff000 }, // ldr:4:0x17962100
	{  29, 0x11c21000, 0xfdfff000 }, // bic:6:0x11C21001
	{  30, 0x15861000, 0xfdfff000 }, // str:4:0x17861100
	{  31, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_pwr_on_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00F8
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE59010E0
	{   4, 0xe5801000, 0xfdfff000 }, // str:4:0xE58010E0
	{   5, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2028
	{   6, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2821000
	{   7, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00032
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0081BD
	{  10, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  11, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500015
	{  12, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010EC
	{  13, 0x100f0000, 0xf00ff000 }, // add:10:0x128F00C8
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFF53FC
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00B8
	{  16, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10C8
	{  17, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  19, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030ED
	{  20, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F20AC
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF53AF
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00A0
	{  23, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE59010E0
	{  24, 0xe1c11000, 0xfdfff000 }, // bic:6:0xE3C11002
	{  25, 0xe5801000, 0xfdfff000 }, // str:4:0xE58010E0
	{  27, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  28, 0xe2000000, 0xfffff000 }, // and:7:0xE2000001
	{  30, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_pwr_off_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00A0
	{   1, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE59010E0
	{   2, 0xe1c11000, 0xfdfff000 }, // bic:6:0xE3C11002
	{   3, 0xe5801000, 0xfdfff000 }, // str:4:0xE58010E0
	{   5, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   6, 0xe2000000, 0xfffff000 }, // and:7:0xE2000001
	{   8, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  10, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0078
	{  11, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE59010E0
	{  13, 0xe5801000, 0xfdfff000 }, // str:4:0xE58010E0
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0064
	{  16, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE59010E0
	{  17, 0xe1c11000, 0xfdfff000 }, // bic:6:0xE3C11002
	{  18, 0xe5801000, 0xfdfff000 }, // str:4:0xE58010E0
	{  20, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  21, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0044
	{  23, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{  24, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010C7
	{  27, 0x100f0000, 0xf00ff000 }, // add:10:0x128F0038
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFF53D8
	{  29, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0040
	{  30, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  31, 0x05904000, 0xfdfff000 }, // ldr:4:0x0590401C
	/* 26/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_read_keys_r2_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F04BC
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00016B
	{   4, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE51F608C
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A002A0
	{   9, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE7942100
	{  10, 0xe2033000, 0xfffff000 }, // and:7:0xE203301F
	{  12, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  13, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0494
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000160
	{  15, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A002A0
	{  19, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE7942100
	{  20, 0xe2033000, 0xfffff000 }, // and:7:0xE203301F
	{  22, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  24, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A052A0
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0000B
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF67D
	{  28, 0xe050c000, 0xfdfff000 }, // sub:6:0xE250CC01
	{  29, 0x205cc000, 0xfdfff000 }, // sub:6:0x225CC05B
	{  30, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE7941105
	{  31, 0x31a00000, 0xfdfff000 }, // mov:6:0x33A00000
	/* 24/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_mkdir_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000A2
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000AD
	{   9, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD369
	{  14, 0xe0504000, 0xfdfff000 }, // sub:6:0xE2504000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000007
	{  16, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02008
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01004
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD46D
	{  20, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD38C
	{  23, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000A0
	{  26, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000008
	{  28, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  29, 0x01560000, 0xfdfff000 }, // cmp:7:0x03560000
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetParameterData_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE51F5CFC
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   4, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F6260
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   7, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F01E4
	{   8, 0x01a01000, 0xfdfff000 }, // mov:6:0x01A01006
	{   9, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBEAC
	{  11, 0xe1140901, 0xfdffffff }, // tst:7:0xE3140901
	{  12, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F01D0
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x01A01006
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBEA8
	{  15, 0xe1c44000, 0xfdfff000 }, // bic:6:0xE3C44901
	{  16, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540072
	{  17, 0x200f0000, 0xf00ff000 }, // ldr:8:0x259F01BC
	{  18, 0x21a01000, 0xfdfff000 }, // mov:6:0x21A01006
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFBBEA3
	{  20, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3224
	{  21, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F21AC
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1D24
	{  23, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFBBE8F
	{  25, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0D3C
	{  26, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03008
	{  27, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02007
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB030271
	{  31, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetParameterData_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41FC
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE51F5C6C
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F0278
	{   7, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01FF7
	{   8, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBED1
	{  10, 0xe1140901, 0xfdffffff }, // tst:7:0xE3140901
	{  11, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F0264
	{  12, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01FF7
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBECD
	{  14, 0xe1c44000, 0xfdfff000 }, // bic:6:0xE3C44901
	{  15, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540072
	{  16, 0x200f0000, 0xf00ff000 }, // ldr:8:0x259F0250
	{  17, 0x21a01000, 0xfdfff000 }, // mov:6:0x23A01FF7
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFBBEC8
	{  19, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F32B0
	{  20, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2240
	{  21, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1C90
	{  22, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFBBEB4
	{  24, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  25, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  26, 0xe1cd2000, 0xfdfff000 }, // bic:6:0xE1CD20F0
	{  27, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0CB4
	{  28, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  29, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_IsStrobeChargeCompleted_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41FC
	{   1, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F33F0
	{   2, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE51F60CC
	{   3, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE51F50E4
	{   4, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{   5, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950004
	{   6, 0xe00f3000, 0xf00ff000 }, // sub:10:0xE24F30EC
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01004
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDD2B1
	{  11, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE59F73CC
	{  12, 0xe00f3000, 0xf00ff000 }, // sub:10:0xE24F3F41
	{  13, 0xe58d7000, 0xfdfff000 }, // str:4:0xE58D7000
	{  14, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  16, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01003
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDD2B5
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x11a01000, 0xfdfff000 }, // mov:6:0x11A01007
	{  20, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F0F49
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFDD2D6
	{  22, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  23, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE0643
	{  25, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  26, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01003
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE0632
	{  28, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0004
	{  29, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  30, 0x11a04000, 0xfdfff000 }, // mov:6:0x13A04001
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_open_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40FE
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE9C
	{   5, 0xe0505000, 0xfdfff000 }, // sub:6:0xE2505000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000002
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE576
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01017
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000009
	{  10, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2008
	{  11, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFBC
	{  14, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEB1
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE56B
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{  20, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000D
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0420
	{  23, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1008
	{  24, 0xe58d5000, 0xfdfff000 }, // str:4:0xE58D5000
	{  25, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  26, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  27, 0xe590c000, 0xfdfff000 }, // ldr:4:0xE590C000
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  29, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  30, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_write_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{   2, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   6, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0F
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE4B5
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01009
	{  12, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  13, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  14, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0144
	{  16, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  18, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE5903010
	{  21, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  25, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04003
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  27, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{  28, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{  30, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  31, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_close_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   1, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   2, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEA4
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE54A
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01009
	{   9, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  10, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE89
	{  14, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0390
	{  15, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{  18, 0xe5902000, 0xfdfff000 }, // ldr:4:0xE5902004
	{  19, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	/* 21/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_lseek_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{   1, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD034
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000B
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01010
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD510
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000023
	{  12, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100F
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD50A
	{  16, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD034
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8030
	{  18, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000F
	{  20, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100F
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD502
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000015
	{  26, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0844000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000011
	{  28, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01010
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4FA
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_read_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{   2, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   6, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE27
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE4CD
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01009
	{  12, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  13, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  14, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01A4
	{  16, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  18, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE590300C
	{  21, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  25, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  27, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  30, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0F
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fopen_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000B3
	{   5, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000D1
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B190
	{  11, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000B4
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  16, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40F0
	{  17, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  18, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  19, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD03C
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000023
	{  21, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE7A7
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500020
	{  24, 0xd0805000, 0xfdf0f000 }, // add:6:0xD28D5018
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000002
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001355
	{  28, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  29, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2841020
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE778
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fwrite_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04003
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   5, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   6, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00005E
	{  10, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02008
	{  14, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B1DB
	{  16, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00005F
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  21, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{  22, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{  23, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  24, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  25, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{  26, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{  27, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  28, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00004A
	{  30, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fclose_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   3, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD03C
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000023
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE7A7
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500020
	{   8, 0xd0805000, 0xfdf0f000 }, // add:6:0xD28D5018
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000002
	{  10, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001355
	{  12, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  13, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2841020
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE778
	{  16, 0xe5946000, 0xfdfff000 }, // ldr:4:0xE5946008
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000094
	{  20, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000B2
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B1B4
	{  25, 0xe1560000, 0xfdfff000 }, // cmp:7:0xE3560000
	{  26, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFD9F
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000002
	{  31, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fread_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04003
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   5, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   6, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000073
	{  10, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02008
	{  14, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B1A9
	{  16, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000074
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  21, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{  22, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04003
	{  23, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  24, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  25, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{  26, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{  27, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  29, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00005E
	{  31, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fseek_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   3, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000037
	{   9, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02007
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B233
	{  14, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000039
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  20, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  21, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  22, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  24, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000026
	{  26, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B234
	{  29, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00002A
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Remove_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFF2
	{   3, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00AADC
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000176
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000185
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0x01e04000, 0xfdfff000 }, // mvn:6:0x03E04000
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8038
	/* 16/16 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rename_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000117
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1604
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   8, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810104
	{   9, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000137
	{  12, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000117
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_ClusterSize_1[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xa00f0000, 0xf00ff000 }, // ldr:8:0xA59F0058
	{   4, 0xa00f1000, 0xf00ff000 }, // ldr:8:0xA59F1084
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xABFF32EE
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00017
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1778
	{   8, 0xe0000094, 0xffffffff }, // mul:11:0xE0000094
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA0008E5
	/* 13/13 */
	{ -1, 12, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900064, 0xfdffffff }, // ldr:4:0x15900064
	{   2, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 3/4 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_TotalClusters_1[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xa00f0000, 0xf00ff000 }, // ldr:8:0xA59F0024
	{   4, 0xa1a01000, 0xfdfff000 }, // mov:6:0xA3A01E57
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xABFF32E1
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00017
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F17AC
	{   8, 0xe0000094, 0xffffffff }, // mul:11:0xE0000094
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA0008DC
	/* 13/13 */
	{ -1, 12, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900054, 0xfdffffff }, // ldr:4:0x15900054
	{   2, 0x10400001, 0xfdffffff }, // sub:6:0x12400001
	{   3, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 4/5 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_FreeClusters_1[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xa00f0000, 0xf00ff000 }, // ldr:8:0xA51F0048
	{   4, 0xa00f1000, 0xf00ff000 }, // ldr:8:0xA59F12E0
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xABFF32C6
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00017
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1818
	{   8, 0xe0000094, 0xffffffff }, // mul:11:0xE0000094
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA0008C6
	/* 13/13 */
	{ -1, 12, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900060, 0xfdffffff }, // ldr:4:0x15900060
	{   2, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 3/4 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_LockMainPower_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F410C
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   4, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010C1
	{   5, 0x100f0000, 0xf00ff000 }, // add:10:0x128F0F41
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEC043
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1108
	{   8, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940024
	{   9, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030C3
	{  10, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F20F0
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC02F
	{  12, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940018
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  15, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840018
	{  16, 0x05940000, 0xfdfff000 }, // ldr:4:0x05940028
	{  17, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01000
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFFFB41
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  20, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840008
	{  21, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  23, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  24, 0x05840000, 0xfdfff000 }, // str:4:0x05840004
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B00005B
	{  26, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940024
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEF529
	{  29, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  30, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4098
	{  31, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UnlockMainPower_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F41B8
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   4, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010D4
	{   5, 0x100f0000, 0xf00ff000 }, // add:10:0x128F0E1B
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEC06E
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940018
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8010
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940024
	{  11, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11A4
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030D9
	{  13, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2E19
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC057
	{  15, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940018
	{  16, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{  17, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840018
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000014
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  20, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840008
	{  21, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594002C
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFB67
	{  24, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000C
	{  27, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000009
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  31, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840004
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetCurrentAvValue_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F093C
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F154C
	{   5, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F0514
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC30F4
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032C91
	{   8, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  10, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032E24
	{  12, 0xe1dd0000, 0xfdfff000 }, // bic:6:0xE1DD00F4
	{  13, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE1540000
	{  14, 0xb1a04000, 0xfdfff000 }, // mov:6:0xB1A04000
	{  15, 0xe1dd0000, 0xfdfff000 }, // bic:6:0xE1DD00F0
	{  16, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE1540000
	{  17, 0xc1a04000, 0xfdfff000 }, // mov:6:0xC1A04000
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032E75
	{  20, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000CB6
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032DB4
	{  23, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0840000
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41FC
	{  28, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{  29, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  30, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000CAC
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MoveFocusLensToDistance_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5218
	{   2, 0xe5904000, 0xfdfff000 }, // ldr:4:0xE5904000
	{   3, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9CA23
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   7, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F1FB6
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFF0
	{  10, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  12, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF9C9B2
	{  15, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  16, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F41DC
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0FCA
	{  19, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFD5A77
	{  21, 0xe5840000, 0xfdfff000 }, // str:4:0xE584000C
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  23, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  24, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F1FCF
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFD5ACB
	{  26, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  27, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F41B0
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  29, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9CA0A
	{  31, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MoveZoomLensWithPoint_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{   2, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   3, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F10CC
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFD5E
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0C78
	{   6, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2148
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11B0
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900044
	{   9, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03E36
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC2132
	{  11, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  12, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFD0EEF
	{  14, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00A20
	{  15, 0x11e00000, 0xfdfff000 }, // mvn:6:0x13E00000
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  17, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  18, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  20, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F1E11
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF1A
	{  22, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3180
	{  23, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2ECB
	{  24, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F116C
	{  25, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0CC8
	{  26, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900044
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC2121
	{  28, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  29, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFD0EDE
	{  31, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00A20
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig__log_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4D80
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D0073
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD028
	{   3, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1028
	{   4, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3378
	{   5, 0xe8910000, 0xffff0000 }, // ldm:5:0xE8910003
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   7, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510003
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000006
	{   9, 0xe1c12000, 0xfdfff000 }, // bic:6:0xE3C12102
	{  10, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x8A000003
	{  12, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000006
	{  16, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1028
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  18, 0xe8910000, 0xffff0000 }, // ldm:5:0xE8910003
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0007C5
	{  20, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD030
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD01F0
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8C00
	{  23, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510601
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000013
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000003
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFDD
	{  29, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1FC6
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000004
	{  31, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig__log10_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41E0
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D0013
	{   2, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3134
	{   3, 0xe89d0000, 0xffff0000 }, // ldm:5:0xE89D0003
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   5, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510003
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000006
	{   7, 0xe1c12000, 0xfdfff000 }, // bic:6:0xE3C12102
	{   8, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x8A000003
	{  10, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000006
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  14, 0xe89d0000, 0xffff0000 }, // ldm:5:0xE89D0003
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000BF7
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD007C
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8180
	{  19, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510601
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000011
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000003
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000410
	{  25, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10DC
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000004
	{  27, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00040A
	{  31, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10CC
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig__pow_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4D80
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D007C
	{   2, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4358
	{   3, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D0003
	{   4, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD0A8
	{   5, 0xe59d3000, 0xfdfff000 }, // ldr:4:0xE59D30AC
	{   6, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D10B4
	{   7, 0xe59de000, 0xfdfff000 }, // ldr:4:0xE59DE0B0
	{   8, 0xe1c30000, 0xfdfff000 }, // bic:6:0xE3C30102
	{   9, 0xe59da000, 0xfdfff000 }, // ldr:4:0xE59DA0A8
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500004
	{  11, 0xe1c12000, 0xfdfff000 }, // bic:6:0xE3C12102
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA00000A
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500004
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  15, 0xe15a0000, 0xfdfff000 }, // cmp:7:0xE35A0000
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000006
	{  17, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520004
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA000004
	{  19, 0xe080c000, 0xfdf0f000 }, // add:6:0xE282C209
	{  20, 0xe05cc000, 0xfdfff000 }, // sub:6:0xE25CC6FF
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  22, 0xe15e0000, 0xfdfff000 }, // cmp:7:0xE35E0000
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000005
	{  24, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D30A8
	{  25, 0xe8930000, 0xffff0000 }, // ldm:5:0xE893000F
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000546
	{  27, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD0B8
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD01F0
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8C00
	{  30, 0xe59d4000, 0xfdfff000 }, // ldr:4:0xE59D40AC
	{  31, 0xe59d5000, 0xfdfff000 }, // ldr:4:0xE59D50A8
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig__sqrt_1[] = {
	{   0, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE3A0C207
	{   2, 0xe111000c, 0xfdffffff }, // tst:7:0xE111000C
	{   3, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000044
	{   5, 0xe1dce000, 0xfdfff000 }, // bic:6:0xE1DCE001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000047
	{   7, 0xe1110102, 0xfdffffff }, // tst:7:0xE3110102
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00004D
	{   9, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0CA21
	{  10, 0xe1c11000, 0xfdfff000 }, // bic:6:0xE1C11A0C
	{  12, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28CC0FD
	{  13, 0xe1b0c000, 0xfdfff000 }, // mov:6:0xE1B0C0AC
	{  14, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28CCD06
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000001
	{  16, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00080
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01501
	{  20, 0xe0411000, 0xfdfff000 }, // sub:6:0xE2411101
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00500
	{  22, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02101
	{  23, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  24, 0xe1a0e000, 0xfdfff000 }, // mov:6:0xE3A0E201
	{  25, 0xe0514000, 0xfdfff000 }, // sub:6:0xE0514002
	{  26, 0x20544000, 0xfdfff000 }, // sub:6:0x2054400E
	{  27, 0x21a01000, 0xfdfff000 }, // mov:6:0x21A01004
	{  28, 0x20802000, 0xfdf0f000 }, // add:6:0x2082208E
	{  29, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00080
	{  31, 0xe1b0e000, 0xfdfff000 }, // mov:6:0xE1B0E0AE
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_malloc_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800007
	{   2, 0xe1d05000, 0xfdfff000 }, // bic:6:0xE3D05007
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   5, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{   6, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F6184
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   8, 0xe5960000, 0xfdfff000 }, // ldr:4:0xE5960014
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA6A
	{  10, 0xe5964000, 0xfdfff000 }, // ldr:4:0xE5964010
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2860008
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000022
	{  13, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  14, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510005
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A00001D
	{  16, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  17, 0xe0411000, 0xfdfff000 }, // sub:6:0xE0411005
	{  18, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351000C
	{  19, 0x35941000, 0xfdfff000 }, // ldr:4:0x35941008
	{  20, 0x35801000, 0xfdfff000 }, // str:4:0x35801008
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000009
	{  22, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0841005
	{  23, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2811008
	{  24, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801008
	{  25, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  26, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810008
	{  27, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  28, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400005
	{  29, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400008
	{  30, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810004
	{  31, 0xe5845000, 0xfdfff000 }, // str:4:0xE5845004
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_free_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   3, 0xe0404000, 0xfdfff000 }, // sub:6:0xE2404008
	{   4, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F50B8
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   6, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950014
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA37
	{   8, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950020
	{   9, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  10, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  11, 0xe5850000, 0xfdfff000 }, // str:4:0xE5850020
	{  12, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950028
	{  13, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{  14, 0xe5850000, 0xfdfff000 }, // str:4:0xE5850028
	{  15, 0xe5951000, 0xfdfff000 }, // ldr:4:0xE5951010
	{  16, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2850008
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001D
	{  18, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510004
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x9A000019
	{  20, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841008
	{  21, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE5942004
	{  22, 0xe0803000, 0xfdf0f000 }, // add:6:0xE0823004
	{  23, 0xe0803000, 0xfdf0f000 }, // add:6:0xE2833008
	{  24, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE1530001
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  26, 0xe5913000, 0xfdfff000 }, // ldr:4:0xE5913004
	{  27, 0xe0802000, 0xfdf0f000 }, // add:6:0xE0822003
	{  28, 0xe0802000, 0xfdf0f000 }, // add:6:0xE2822008
	{  29, 0xe5842000, 0xfdfff000 }, // str:4:0xE5842004
	{  30, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911008
	{  31, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841008
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_FreeUncacheableMemory_1[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   1, 0x10400000, 0xfdfff000 }, // sub:6:0x12400020
	{   2, 0x11c00000, 0xfdfff000 }, // bic:6:0x13C00201
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFC3
	/* 4/4 */
	{ -1, 3, -2 },
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   3, 0xe0404000, 0xfdfff000 }, // sub:6:0xE2404008
	{   4, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F50B8
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   6, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950014
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA37
	{   8, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950020
	{   9, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  10, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  11, 0xe5850000, 0xfdfff000 }, // str:4:0xE5850020
	{  12, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950028
	{  13, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{  14, 0xe5850000, 0xfdfff000 }, // str:4:0xE5850028
	{  15, 0xe5951000, 0xfdfff000 }, // ldr:4:0xE5951010
	{  16, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2850008
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001D
	{  18, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510004
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x9A000019
	{  20, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841008
	{  21, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE5942004
	{  22, 0xe0803000, 0xfdf0f000 }, // add:6:0xE0823004
	{  23, 0xe0803000, 0xfdf0f000 }, // add:6:0xE2833008
	{  24, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE1530001
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  26, 0xe5913000, 0xfdfff000 }, // ldr:4:0xE5913004
	{  27, 0xe0802000, 0xfdf0f000 }, // add:6:0xE0822003
	{  28, 0xe0802000, 0xfdf0f000 }, // add:6:0xE2822008
	{  29, 0xe5842000, 0xfdfff000 }, // str:4:0xE5842004
	{  30, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911008
	{  31, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841008
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_AllocateUncacheableMemory_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800040
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFCF
	{   4, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   6, 0xe0802000, 0xfdf0f000 }, // add:6:0xE2852040
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF9BDB
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800020
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 12/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rand_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4064
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCE68
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1054
	{   7, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{   8, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{  10, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{  12, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  13, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCE51
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  17, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  18, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2028
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCDE8
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1010
	{  23, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  24, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810004
	{  25, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  26, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  29, 0x41c64000, 0xfdfff000 }, // bic:6:0x41C64E6D
	{  30, 0x646e6000, 0xfdfff000 }, // strb:4:0x646E6172
	{  31, 0x006d6553, 0xfdffffff }, // rsb:6:0x006D6553
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_srand_1[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1074
	{   1, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{   3, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4064
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   6, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCE68
	{   8, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   9, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1054
	{  10, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{  11, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	{  12, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{  15, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCE51
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  20, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  21, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2028
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFCDE8
	{  25, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1010
	{  26, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  27, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810004
	{  28, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{  29, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_stat_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   3, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD3D8
	{   5, 0xe0504000, 0xfdfff000 }, // sub:6:0xE2504000
	{   6, 0xb1e00000, 0xfdfff000 }, // mvn:6:0xB3E00000
	{   7, 0xb8bd0000, 0xffff0000 }, // ldm:5:0xB8BD8070
	{   8, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{   9, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01012
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4DB
	{  12, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD3FA
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  17, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  18, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD038
	{  19, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{  20, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFE9
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  23, 0x11e00000, 0xfdfff000 }, // mvn:6:0x13E00000
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000C
	{  25, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D000C
	{  26, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  28, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840004
	{  29, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0020
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840008
	{  31, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D001C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_opendir_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00014
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF95F20
	{   4, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   5, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01059
	{   6, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0E26
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF9295C
	{   8, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{   9, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF95F44
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  13, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  14, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  15, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  16, 0xe5841000, 0xfdfff000 }, // str:4:0xE584100C
	{  17, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841010
	{  18, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01060
	{  19, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F8B
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF9294F
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02F49
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF94D26
	{  25, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  26, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB0
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  31, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00004
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_openfastdir_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00014
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF95F20
	{   4, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   5, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01059
	{   6, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0E26
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF9295C
	{   8, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{   9, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF95F44
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  13, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  14, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  15, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  16, 0xe5841000, 0xfdfff000 }, // str:4:0xE584100C
	{  17, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841010
	{  18, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01060
	{  19, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F8B
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF9294F
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02F49
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF94D26
	{  25, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  26, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB0
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  31, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00004
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ReadFastDir_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   2, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000027
	{   5, 0xe5952000, 0xfdfff000 }, // ldr:4:0xE5952010
	{   6, 0xe5954000, 0xfdfff000 }, // ldr:4:0xE595400C
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000014
	{   8, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950004
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800004
	{  11, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351000F
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000A
	{  13, 0xe1110008, 0xfdffffff }, // tst:7:0xE3110008
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  16, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE35100E5
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000009
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000029
	{  20, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  21, 0xe5850000, 0xfdfff000 }, // str:4:0xE585000C
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  28, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2844020
	{  29, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520004
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCAFFFFE8
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_closedir_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BF94CEB
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF95EFD
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF95EC2
	/* 10/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_qsort_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D400E
	{   1, 0xe1cd2000, 0xfdfff000 }, // bic:6:0xE1CD20F0
	{   3, 0xe1120003, 0xfdffffff }, // tst:7:0xE3120003
	{   4, 0x000f2000, 0xf00ff000 }, // ldr:8:0x059F2020
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{   6, 0xe1120001, 0xfdffffff }, // tst:7:0xE3120001
	{   7, 0x100f2000, 0xf00ff000 }, // sub:10:0x124F2E4B
	{   8, 0x000f2000, 0xf00ff000 }, // sub:10:0x024F2E49
	{   9, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2008
	{  10, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFC1
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD900C
	/* 12/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strncpy_1[] = {
	{   0, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000009
	{   3, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0000
	{   4, 0xe4c3c000, 0xfdfff000 }, // strb:4:0xE4C3C001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   7, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422001
	{   8, 0xe1720001, 0xfdffffff }, // cmn:7:0xE3720001
	{   9, 0x14c31000, 0xfdfff000 }, // strb:4:0x14C31001
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{  12, 0xe0522000, 0xfdfff000 }, // sub:6:0xE2522001
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2AFFFFF3
	/* 12/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strrchr_1[] = {
	{   0, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   1, 0xe2013000, 0xfffff000 }, // and:7:0xE20130FF
	{   3, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510003
	{   4, 0x01a02000, 0xfdfff000 }, // mov:6:0x01A02000
	{   5, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF9
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00002
	/* 8/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strncmp_1[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{   2, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{   3, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{   4, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{   8, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  10, 0xe0522000, 0xfdfff000 }, // sub:6:0xE2522001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000004
	{  13, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{  15, 0x015c0000, 0xfdfff000 }, // cmp:7:0x035C0000
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFEF
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	/* 12/19 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strchr_1[] = {
	{   0, 0xe2012000, 0xfffff000 }, // and:7:0xE20120FF
	{   2, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510002
	{   4, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF9
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	/* 6/9 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcat_1[] = {
	{   0, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{   2, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   3, 0x10800000, 0xfdf0f000 }, // add:6:0x12800001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000001
	{   6, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2811001
	{   7, 0xe4c02000, 0xfdfff000 }, // strb:4:0xE4C02001
	{   9, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFA
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  12, 0xe5c01000, 0xfdfff000 }, // strb:4:0xE5C01000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00003
	/* 12/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strtol_1[] = {
	{   0, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03001
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF7E
	{   2, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF7C
	{   5, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000F
	{   7, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351000A
	{   8, 0xe042c000, 0xfdfff000 }, // sub:6:0xE242C030
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  10, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C000A
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A00000F
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000007
	{  13, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C000A
	{  14, 0x2042c000, 0xfdfff000 }, // sub:6:0x2242C061
	{  15, 0x215c0000, 0xfdfff000 }, // cmp:7:0x235C0006
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A00000A
	{  17, 0xe042c000, 0xfdfff000 }, // sub:6:0xE242C061
	{  18, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0005
	{  19, 0x90422000, 0xfdfff000 }, // sub:6:0x92422057
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x9A000000
	{  21, 0xe0422000, 0xfdfff000 }, // sub:6:0xE2422030
	{  24, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFEC
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00003
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002C2F
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_time_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{   3, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB02F26E
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{   8, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{   9, 0x159d0000, 0xfdfff000 }, // ldr:4:0x159D0000
	{  10, 0x15840000, 0xfdfff000 }, // str:4:0x15840000
	{  11, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8038
	{  13, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  14, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  16, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840024
	{  17, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940014
	{  18, 0xe0401000, 0xfdfff000 }, // sub:6:0xE2401046
	{  19, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510044
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A000025
	{  21, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F129C
	{  22, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0811100
	{  23, 0xe5113000, 0xfdfff000 }, // ldr:4:0xE5113118
	{  24, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1294
	{  25, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0811100
	{  26, 0xe5112000, 0xfdfff000 }, // ldr:4:0xE5112118
	{  27, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941010
	{  28, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351000C
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A00001C
	{  30, 0xe00fc000, 0xf00ff000 }, // ldr:8:0xE59FC280
	{  31, 0xe0803000, 0xfdf0f000 }, // add:6:0xE0833083
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_LocalTime_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11B0
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000003
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB006F3C
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000049
	{  11, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F217C
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe5923000, 0xfdfff000 }, // ldr:4:0xE7923101
	{  14, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE1530000
	{  15, 0xd0801000, 0xfdf0f000 }, // add:6:0xD2811001
	{  16, 0xd1510000, 0xfdfff000 }, // cmp:7:0xD3510044
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBAFFFFFA
	{  18, 0xe0511000, 0xfdfff000 }, // sub:6:0xE2511001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x4AFFFFF2
	{  20, 0xe0806000, 0xfdf0f000 }, // add:6:0xE2816046
	{  21, 0xe5846000, 0xfdfff000 }, // str:4:0xE5846014
	{  22, 0xe5921000, 0xfdfff000 }, // ldr:4:0xE7921101
	{  23, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  24, 0xe0401000, 0xfdfff000 }, // sub:6:0xE0401001
	{  25, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0140
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800106
	{  27, 0xe5100000, 0xfdfff000 }, // ldr:4:0xE5100118
	{  28, 0xe0808000, 0xfdf0f000 }, // add:6:0xE0808080
	{  29, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0138
	{  30, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800208
	{  31, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE7903102
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UpdateMBROnFlash_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01C02
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB005DB9
	{   8, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00017
	{  10, 0xe0010490, 0xffffffff }, // mul:11:0xE0010490
	{  11, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0550
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03005
	{  13, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0804101
	{  14, 0xe594c000, 0xfdfff000 }, // ldr:4:0xE594C04C
	{  15, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940038
	{  16, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941044
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF3D7A
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{  22, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0850007
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF3D56
	{  25, 0xe5b40000, 0xfdfff000 }, // ldr:4:0xE5B40038
	{  26, 0xe5b41000, 0xfdfff000 }, // ldr:4:0xE5B4100C
	{  27, 0xe594c000, 0xfdfff000 }, // ldr:4:0xE594C00C
	{  28, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03005
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  31, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD41F0
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_NewTaskShell_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4728
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500064
	{   4, 0xa1a00000, 0xfdfff000 }, // mov:6:0xA3A00005
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000010
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{   7, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{   8, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{   9, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  10, 0xe00f3000, 0xf00ff000 }, // sub:10:0xE24F30E4
	{  11, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F00DC
	{  12, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02902
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01018
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC934
	{  15, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  17, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10D8
	{  18, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  19, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030AF
	{  20, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F20C0
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFECA1D
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8038
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  25, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10BC
	{  26, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F00BC
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFECAAB
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC9F9
	{  31, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F17A0
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UIFS_WriteFirmInfoToFile_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD0A0
	{   3, 0x11a04000, 0xfdfff000 }, // mov:6:0x11A04000
	{   4, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0050
	{   6, 0x000f4000, 0xf00ff000 }, // add:10:0x028F4FF2
	{   7, 0xe5cd5000, 0xfdfff000 }, // strb:4:0xE5CD5050
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB0FDC
	{   9, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2050
	{  12, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01000
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB26B3
	{  14, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1FEE
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB2815
	{  17, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{  18, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F03AC
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02020
	{  20, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1050
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC4855
	{  22, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2050
	{  23, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1FE7
	{  24, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0050
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB0F74
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0050
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB0FC9
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  29, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0050
	{  30, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03008
	{  31, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetAutoShutdownTime_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4098
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   5, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010A9
	{   6, 0x100f0000, 0xf00ff000 }, // add:10:0x128F008C
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEC025
	{   8, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1090
	{   9, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940024
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030AA
	{  11, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2078
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEC011
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00FFA
	{  14, 0xe0000095, 0xffffffff }, // mul:11:0xE0000095
	{  15, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{  16, 0xe5840000, 0xfdfff000 }, // str:4:0xE584001C
	{  17, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940004
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  19, 0x05845000, 0xfdfff000 }, // str:4:0x05845004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B000043
	{  21, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594001C
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  23, 0x05845000, 0xfdfff000 }, // str:4:0x0584500C
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000C
	{  25, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  26, 0xe5841000, 0xfdfff000 }, // str:4:0xE584100C
	{  27, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE5942008
	{  28, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  30, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841004
	{  31, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2E2A
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fgets_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   4, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00004A
	{   9, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B206
	{  14, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00004C
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	/* 19/19 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Feof_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   3, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000026
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B234
	{  10, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00002A
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	/* 14/14 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fflush_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   3, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000017
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B22B
	{  10, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFD26
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000019
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strftime_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4FFE
	{   1, 0xe00f9000, 0xf00ff000 }, // ldr:8:0xE59F940C
	{   2, 0xe1a0b000, 0xfdfff000 }, // mov:6:0xE3A0B025
	{   3, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   4, 0xe0417000, 0xfdfff000 }, // sub:6:0xE2417001
	{   5, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06003
	{   6, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   8, 0xe080a000, 0xfdf0f000 }, // add:6:0xE289A01C
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00012F
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500025
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  12, 0xe0805000, 0xfdf0f000 }, // add:6:0xE2855001
	{  13, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE1550007
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x8A000125
	{  15, 0xe5c40000, 0xfdfff000 }, // strb:4:0xE5C40000
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00011E
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500059
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00010C
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA00003A
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350004D
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A0000BE
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA000023
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500042
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00007A
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA000010
	{  27, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500025
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00010E
	{  29, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500041
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000112
	{  31, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1398
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_mktime_ext_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe5905000, 0xfdfff000 }, // ldr:4:0xE5905024
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   4, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840024
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE4684
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0x01e00000, 0xfdfff000 }, // mvn:6:0x03E00000
	{   9, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE3BDF
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFC5
	{  14, 0xe5845000, 0xfdfff000 }, // str:4:0xE5845024
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 16/16 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_DeleteFile_Fut_1[] = {
	{   0, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000192
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000190
	{   4, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000FF
	{   8, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEC4
	{  12, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000102
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  17, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  18, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000F2
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B394
	{  24, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000F6
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  29, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  30, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  31, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_RenameFile_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000117
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1604
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   8, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810104
	{   9, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000137
	{  12, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000117
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MakeDirectory_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000E5
	{   5, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F253C
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   8, 0xe5821000, 0xfdfff000 }, // str:4:0xE7821100
	{   9, 0xe1750001, 0xfdffffff }, // cmn:7:0xE3750001
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  11, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B010573
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00B300
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000FB
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0002C6
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x000f5000, 0xf00ff000 }, // ldr:8:0x059F5534
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFDE8
	{  23, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000DA
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 28/28 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_DeleteDirectory_Fut_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000CA
	{   4, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000E8
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0002B4
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  10, 0x11a04000, 0xfdfff000 }, // mov:6:0x13A04000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFDD5
	{  14, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F44DC
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000C7
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 19/19 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileTimeStamp_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   1, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1004
	{   2, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2000
	{   3, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{   5, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4AC
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00A9F8
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD4A4
	{  15, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  16, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000000
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	/* 20/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_TurnOnBackLight_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10C4
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1F5
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2ED5
	{   6, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10BC
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1EF
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2EF5
	{  12, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  13, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B8
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1E9
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B4E
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  19, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B8
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1E3
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B3A
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  25, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  27, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B0
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1DC
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B4E
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_TurnOffBackLight_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10BC
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1EF
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2EF5
	{   6, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B8
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1E9
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B4E
	{  12, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  13, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B8
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1E3
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B3A
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  19, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  21, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B0
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC1DC
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  24, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF2B4E
	{  26, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10AC
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFC1D6
	{  29, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10C4
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFC1D3
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetLogicalEventActive_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F40C8
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500026
	{   6, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01E1B
	{   7, 0x000f0000, 0xf00ff000 }, // add:10:0x028F00B8
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFEC0E8
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00001A
	{  11, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  13, 0x00801000, 0xfdf0f000 }, // add:6:0x02801001
	{  14, 0x05c41000, 0xfdfff000 }, // strb:4:0x05C41000
	{  15, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1094
	{  16, 0xe5815000, 0xfdfff000 }, // str:4:0xE7815180
	{  17, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810180
	{  18, 0xe5806000, 0xfdfff000 }, // str:4:0xE5806004
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 18/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PostLogicalEventToUI_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{   6, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F75
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF1FE
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEF905
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFD1
	{  15, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{  16, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFCB2
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  21, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  22, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  24, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{  25, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{  26, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{  27, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  28, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F69
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  30, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF1E9
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PostLogicalEventForNotPowerType_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{   6, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1E1F
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF211
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEF918
	{  13, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  14, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03002
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFCC7
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  20, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  22, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{  23, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{  24, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{  25, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  26, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F75
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  28, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF1FE
	{  30, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEF905
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetCurrentCaptureModeType_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4D08
	{   2, 0xe1c40000, 0xfdfff000 }, // bic:6:0xE1C400B4
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE96B
	{   4, 0xe040c000, 0xfdfff000 }, // sub:6:0xE240C902
	{   5, 0xe05cc000, 0xfdfff000 }, // sub:6:0xE25CC002
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE967
	{   8, 0xe040c000, 0xfdfff000 }, // sub:6:0xE240C902
	{   9, 0xe05cc000, 0xfdfff000 }, // sub:6:0xE25CC020
	{  10, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  12, 0xe5840000, 0xfdfff000 }, // str:4:0xE584005C
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFC9E
	/* 15/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetFocusLensSubjectDistance_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0A94
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F0388
	{   5, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01FDB
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC394F
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0331BC
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFDC
	{  10, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0ABC
	{  11, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{  12, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F13D4
	{  15, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F035C
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC3945
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  19, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001685
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  22, 0xe1dd0000, 0xfdfff000 }, // bic:6:0xE1DD00F4
	{  23, 0xe1dd2000, 0xfdfff000 }, // bic:6:0xE1DD20B0
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032FE0
	{  25, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  26, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0AFC
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  28, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  29, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  30, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1398
	{  31, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F031C
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetFocusLensSubjectDistanceFromLens_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE51F5DA4
	{   2, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1128
	{   5, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0EDD
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFC388C
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF34
	{   8, 0xe040c000, 0xfdfff000 }, // sub:6:0xE240CCFF
	{   9, 0xe05cc000, 0xfdfff000 }, // sub:6:0xE25CC0FF
	{  10, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  12, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  14, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0015C7
	{  16, 0xe1dd1000, 0xfdfff000 }, // bic:6:0xE1DD10F4
	{  17, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950034
	{  18, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800081
	{  19, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800C01
	{  20, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D00CB6
	{  21, 0xe0440000, 0xfdfff000 }, // sub:6:0xE0440000
	/* 22/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strtolx_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4FFF
	{   1, 0xe1b09000, 0xfdfff000 }, // mov:6:0xE1B09001
	{   2, 0xe1a0b000, 0xfdfff000 }, // mov:6:0xE1A0B000
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11F8
	{   4, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD004
	{   5, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A0400B
	{   6, 0xe1a0a000, 0xfdfff000 }, // mov:6:0xE3A0A001
	{   7, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE3A08000
	{   8, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   9, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{  10, 0x1589b000, 0xfdfff000 }, // str:4:0x1589B000
	{  13, 0xe1100040, 0xfdffffff }, // tst:7:0xE3100040
	{  14, 0x10804000, 0xfdf0f000 }, // add:6:0x12844001
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFA
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350002D
	{  18, 0x01e0a000, 0xfdfff000 }, // mvn:6:0x03E0A000
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{  20, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350002B
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000000
	{  22, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2844001
	{  23, 0xe1560000, 0xfdfff000 }, // cmp:7:0xE3560000
	{  24, 0xe58d4000, 0xfdfff000 }, // str:4:0xE58D4000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000E
	{  27, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500030
	{  28, 0x11a06000, 0xfdfff000 }, // mov:6:0x13A0600A
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000025
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500078
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Restart_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0054BC
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00FB1B
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB009A56
	{   5, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540003
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B006ED8
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00E4D8
	{   8, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F00D0
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF9740
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDA64
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB006422
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB007685
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF70A
	{  16, 0xe1c00000, 0xfdfff000 }, // bic:6:0xE3C0003F
	{  19, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10B8
	{  20, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  21, 0xe5810000, 0xfdfff000 }, // str:4:0xE581010C
	{  22, 0xe5810000, 0xfdfff000 }, // str:4:0xE581000C
	{  23, 0xe5810000, 0xfdfff000 }, // str:4:0xE581001C
	{  24, 0xe5810000, 0xfdfff000 }, // str:4:0xE581002C
	{  25, 0xe5810000, 0xfdfff000 }, // str:4:0xE581003C
	{  26, 0xe5810000, 0xfdfff000 }, // str:4:0xE581004C
	{  27, 0xe5810000, 0xfdfff000 }, // str:4:0xE581005C
	{  28, 0xe5810000, 0xfdfff000 }, // str:4:0xE581006C
	{  29, 0xe5810000, 0xfdfff000 }, // str:4:0xE581007C
	{  30, 0xe5810000, 0xfdfff000 }, // str:4:0xE581008C
	{  31, 0xe5810000, 0xfdfff000 }, // str:4:0xE581009C
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_add_ptp_handler_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00C0
	{   3, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00017
	{   8, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{   9, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  10, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00003
	{  11, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{  12, 0xe5909000, 0xfdfff000 }, // ldr:4:0xE5909000
	{  13, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804004
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00009
	{  15, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFD7891
	{  17, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  18, 0x11a06000, 0xfdfff000 }, // mov:6:0x13A06001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000018
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00016F
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  25, 0xe5805000, 0xfdfff000 }, // str:4:0xE580500C
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00009
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFD78BA
	{  28, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06013
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000E
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00010
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDAFD3
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_reboot_fw_update_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   3, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0114
	{   4, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02020
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01D39C
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF93AA8
	{  10, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  11, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  12, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F10F4
	{  13, 0x000f0000, 0xf00ff000 }, // add:10:0x028F00F4
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF916C8
	{  15, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE59F70E0
	{  16, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  19, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970000
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000B0
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF94C81
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  25, 0xe5870000, 0xfdfff000 }, // str:4:0xE5870004
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB012804
	{  28, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE5971004
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01990F
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_set_control_event_1[] = {
	{   0, 0xe2001000, 0xfffff000 }, // and:7:0xE2001CFF
	{   1, 0xe200c000, 0xfffff000 }, // and:7:0xE200C101
	{   2, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   3, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0CF2C
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01421
	{   5, 0xe2002000, 0xfffff000 }, // and:7:0xE20020FF
	{   6, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03FA0
	{   8, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0000
	{   9, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F02D0
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000006
	{  11, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE3A0C001
	{  12, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{  13, 0xe5903000, 0xfdfff000 }, // ldr:4:0xE7903101
	{  14, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0221C
	{  15, 0x01e02000, 0xfdfff000 }, // mvn:6:0x01E02002
	{  18, 0xe5802000, 0xfdfff000 }, // str:4:0xE7802101
	/* 16/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PB2Rec_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F81
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE46E
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0000E
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA27
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005A1
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFA7
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEF449
	{  12, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  13, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1E1E
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE462
	{  16, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1118
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  18, 0xe5810000, 0xfdfff000 }, // str:4:0xE581007C
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEF440
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB02DDBE
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03ACFA
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00058D
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000BF3
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00011
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFA0E
	{  31, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Rec2PB_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1E1E
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE462
	{   4, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1118
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   6, 0xe5810000, 0xfdfff000 }, // str:4:0xE581007C
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEF440
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB02DDBE
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03ACFA
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00058D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000BF3
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00011
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFA0E
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  20, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1E1A
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE44F
	{  23, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1164
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  25, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810080
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000633
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000580
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00056E
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF84
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetMemInfo_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE51F50E4
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950014
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF9CF
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02020
	{   7, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2851018
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB08DE2A
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  11, 0xe5953000, 0xfdfff000 }, // ldr:4:0xE5953010
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000005
	{  15, 0xe593c000, 0xfdfff000 }, // ldr:4:0xE593C004
	{  16, 0xe5933000, 0xfdfff000 }, // ldr:4:0xE5933008
	{  17, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE15C0001
	{  18, 0x81a01000, 0xfdfff000 }, // mov:6:0x81A0100C
	{  19, 0xe0802000, 0xfdf0f000 }, // add:6:0xE2822001
	{  20, 0xe0800000, 0xfdf0f000 }, // add:6:0xE08C0000
	{  21, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF7
	{  23, 0xe0806000, 0xfdf0f000 }, // add:6:0xE2846014
	{  24, 0xe8860000, 0xffff0000 }, // stm:5:0xE8860007
	{  25, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950014
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFF9AC
	{  28, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{  29, 0xe00fe000, 0xf00ff000 }, // ldr:8:0xE59FE150
	{  30, 0xe9900000, 0xffff0000 }, // ldm:5:0xE990000A
	{  31, 0xe5902000, 0xfdfff000 }, // ldr:4:0xE5902000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_exmem_alloc_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE51F72E0
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05002
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   5, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970000
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10DC
	{   7, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3128
	{   8, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2FC2
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED504
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  12, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2861040
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEE8
	{  15, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F20BC
	{  16, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  17, 0xe1c00000, 0xfdfff000 }, // bic:6:0xE3C00201
	{  18, 0xe5821000, 0xfdfff000 }, // str:4:0xE7821104
	{  19, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  20, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804020
	{  21, 0x18850000, 0xffff0000 }, // stm:5:0x18850050
	{  22, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970000
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED3E1
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  25, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	/* 26/26 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_CreateJumptable_1[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F039C
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1E39
	{   2, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1394
	{   4, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801004
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1390
	{   6, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801008
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F138C
	{   8, 0xe5801000, 0xfdfff000 }, // str:4:0xE580100C
	{   9, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1388
	{  10, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801010
	{  11, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1384
	{  12, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801014
	{  13, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1380
	{  14, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801018
	{  15, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F137C
	{  16, 0xe5801000, 0xfdfff000 }, // str:4:0xE580101C
	{  17, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1378
	{  18, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801020
	{  19, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1374
	{  20, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801024
	{  21, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1370
	{  22, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801028
	{  23, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F136C
	{  24, 0xe5801000, 0xfdfff000 }, // str:4:0xE580102C
	{  25, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1368
	{  26, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801030
	{  27, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1364
	{  28, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801034
	{  29, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1360
	{  30, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801038
	{  31, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F135C
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetScriptMode_1[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F107C
	{   1, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810008
	{   4, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0068
	{   6, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2064
	{   7, 0xe5820000, 0xfdfff000 }, // str:4:0xE582000C
	{   8, 0xe5821000, 0xfdfff000 }, // str:4:0xE5821010
	{  10, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1054
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  12, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810004
	{  14, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1044
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  16, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810004
	{  18, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2034
	{  19, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{  20, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1030
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000003
	{  24, 0xe591c000, 0xfdfff000 }, // ldr:4:0xE791C180
	{  25, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE15C0003
	{  27, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500002
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBAFFFFF9
	{  30, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	/* 23/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UnsetZoomForMovie_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F4A
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFCD6A6
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F48CC
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940048
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   8, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   9, 0xe5845000, 0xfdfff000 }, // str:4:0xE5845048
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE28
	{  11, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940044
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  14, 0xe5845000, 0xfdfff000 }, // str:4:0xE5845044
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000178
	{  16, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0928
	{  17, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{  18, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  19, 0x15901000, 0xfdfff000 }, // ldr:4:0x15901004
	{  20, 0x15900000, 0xfdfff000 }, // ldr:4:0x15900008
	{  21, 0x11510000, 0xfdfff000 }, // cmp:7:0x11510000
	{  22, 0x05845000, 0xfdfff000 }, // str:4:0x0584504C
	{  23, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4070
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFD65
	{  25, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00001
	{  26, 0x15840000, 0xfdfff000 }, // str:4:0x1584004C
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 28/28 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExpCtrlTool_StopContiAE_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407F
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F01E8
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900010
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   6, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1140
	{   7, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F01C4
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFFA191
	{   9, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F4E
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000631
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF6BE
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  14, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE51F31BC
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F012C
	{  16, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  17, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D0032
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF0C
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807F
	/* 20/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExpCtrlTool_StartContiAE_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407F
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F00EC
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900010
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   6, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F11E0
	{   7, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F00C8
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFFA1D0
	{   9, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F76
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000670
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF6FD
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  13, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  14, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D0032
	{  15, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F31D0
	{  16, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01D0
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF4A
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807F
	/* 21/21 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetAE_ShutterSpeed_1[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   2, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5170
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04800
	{   4, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   5, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04844
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9C18F
	{   8, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   9, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F1F46
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFE3
	{  12, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  13, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{  14, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  15, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9C147
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  19, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F314C
	{  20, 0xe593c000, 0xfdfff000 }, // ldr:4:0xE593C000
	{  21, 0xe1c0c000, 0xfdfff000 }, // bic:6:0xE1C0C0B0
	{  22, 0xe5930000, 0xfdfff000 }, // ldr:4:0xE5930004
	{  23, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{  24, 0xe5930000, 0xfdfff000 }, // ldr:4:0xE5930008
	{  25, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820000
	{  27, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0C001
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  29, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0124
	{  30, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03002
	{  31, 0xe8800000, 0xffff0000 }, // stm:5:0xE8801002
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileAttributes_1[] = {
	{   0, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01003
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD49A
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00A9E6
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  10, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD492
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  15, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8010
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  20, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01003
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD488
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  24, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  25, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00A9D3
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{  31, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetVRAMHPixelsSize_1[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA09A1
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA09A3
	{   2, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA09D2
	{   3, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   4, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07003
	{   5, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   6, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFA09D7
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  10, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00011
	{  11, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD81F0
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE355001E
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x9A000003
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02007
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFA099E
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1228
	{  23, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0220
	{  24, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841000
	{  25, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840004
	{  26, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F95
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000D24
	{  28, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  29, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F97
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000D21
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetVRAMVPixelsSize_1[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA09A3
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA09D2
	{   2, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   3, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07003
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFA09D7
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   9, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00011
	{  10, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD81F0
	{  11, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE355001E
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x9A000003
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02007
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFA099E
	{  21, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1228
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0220
	{  23, 0xe5841000, 0xfdfff000 }, // str:4:0xE5841000
	{  24, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840004
	{  25, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F95
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000D24
	{  27, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  28, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F97
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000D21
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  31, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_AllocateMemory_2[] = {
	{   0, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF80561
	{   2, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{   4, 0xe1c01000, 0xfdfff000 }, // bic:6:0xE1C010B0
	{   6, 0xe5c01000, 0xfdfff000 }, // strb:4:0xE5C01000
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  10, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{  12, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000D0
	{  14, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  16, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{  17, 0xe0400000, 0xfdfff000 }, // sub:6:0xE240087F
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC5F73
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{  22, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF8061F
	{  25, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{  28, 0xe5905000, 0xfdfff000 }, // ldr:4:0xE5905000
	{  29, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	{  30, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804004
	{  31, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0008
	/* 26/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExecuteEventProcedure_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D000F
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F017C
	{   3, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1010
	{   4, 0xe0404000, 0xfdfff000 }, // sub:6:0xE2404014
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{   6, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   7, 0xe0805000, 0xfdf0f000 }, // add:6:0xE28D5014
	{   8, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEED
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500019
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  12, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0124
	{  13, 0xe59d3000, 0xfdfff000 }, // ldr:4:0xE59D3010
	{  14, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2E15
	{  15, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1D05
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED180
	{  17, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941004
	{  18, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F010C
	{  20, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE5942000
	{  21, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1010
	{  22, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  24, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  25, 0xe8900000, 0xffff0000 }, // ldm:5:0xE8900006
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD0038
	{  29, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF014
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D000F
	{  31, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_EnterToCompensationEVF_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F77
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01107D
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00060B
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000611
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  10, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02002
	{  11, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11D4
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000CF
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011B7F
	{  14, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  15, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F11C8
	{  16, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F0F5C
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFFD789
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00DEFB
	{  20, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  21, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F6D
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011069
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005F7
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005FD
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  29, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00DEFA
	{  31, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ExitFromCompensationEVF_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F6D
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011069
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005F7
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005FD
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00DEFA
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  12, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  13, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F69
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01105D
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005EB
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005F1
	{  20, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  21, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  22, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02002
	{  23, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1154
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000CF
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011B5F
	{  26, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  27, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1190
	{  28, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F0FDC
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFFD769
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00DEDB
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_FreeMemory_2[] = {
	{   0, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF80564
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF80561
	{   4, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{   6, 0xe1c01000, 0xfdfff000 }, // bic:6:0xE1C010B0
	{   8, 0xe5c01000, 0xfdfff000 }, // strb:4:0xE5C01000
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  12, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{  14, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000D0
	{  16, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  18, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{  19, 0xe0400000, 0xfdfff000 }, // sub:6:0xE240087F
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02004
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC5F73
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF8061F
	{  27, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{  29, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{  30, 0xe5905000, 0xfdfff000 }, // ldr:4:0xE5905000
	{  31, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	/* 26/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetBatteryTemperature_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F40D8
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F10F0
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F00D8
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5AE1
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{   8, 0xe1d01000, 0xfdfff000 }, // bic:6:0xE1D011F4
	{   9, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  10, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000F
	{  12, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510001
	{  13, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFFD4
	{  15, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900010
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  17, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F10C0
	{  18, 0x000f0000, 0xf00ff000 }, // add:10:0x028F00A4
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5AD4
	{  20, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  21, 0xe1d40000, 0xfdfff000 }, // bic:6:0xE1D400B4
	{  22, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911010
	{  23, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F20A0
	{  24, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0811181
	{  25, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  26, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0821201
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFAD
	{  28, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  29, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4068
	{  30, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetCCDTemperature_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4148
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010FA
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F52
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5AFD
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{   8, 0xe1d01000, 0xfdfff000 }, // bic:6:0xE1D010FC
	{   9, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  10, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00002B
	{  12, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510001
	{  13, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD4010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000C
	{  15, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  17, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010FF
	{  18, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F45
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5AF0
	{  20, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  21, 0xe1d40000, 0xfdfff000 }, // bic:6:0xE1D400B2
	{  22, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911008
	{  23, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2110
	{  24, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0811181
	{  25, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  26, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0821201
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFC9
	{  28, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  29, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F40D8
	{  30, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetCurrentAvValue_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03B1EB
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F00AC
	{   4, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010BE
	{   7, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F00B8
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBE5C
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0003E1
	{  10, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0804004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000B5C
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03B1B1
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800004
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  17, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  18, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  19, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F00EC
	{  20, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  21, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  22, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  24, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010CC
	{  25, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0C01
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFBBE4A
	{  27, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  28, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  29, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB03B1A8
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000B48
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetOpticalTemperature_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4068
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010DE
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0068
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5AC5
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{   8, 0xe1d01000, 0xfdfff000 }, // bic:6:0xE1D010F4
	{   9, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000C
	{  11, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010E0
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0044
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF5ABC
	{  16, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  17, 0xe1d40000, 0xfdfff000 }, // bic:6:0xE1D400B0
	{  18, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911000
	{  19, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2040
	{  20, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0811181
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  22, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0821201
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF95
	{  24, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510001
	{  25, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD4010
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFC8
	{  27, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFFAA
	{  30, 0x70656854, 0xfdffffff }, // rsb:6:0x72656854
	{  31, 0x656d6000, 0xfdfff000 }, // strb:4:0x656D6F6D
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetSystemTime_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF8061F
	{   3, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	{   5, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{   6, 0xe5905000, 0xfdfff000 }, // ldr:4:0xE5905000
	{   7, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	{   8, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804004
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0008
	{  10, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01014
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01F745
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  13, 0x10803000, 0xfdf0f000 }, // add:6:0x128D3008
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000004
	{  16, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F00AC
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7A94A
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  19, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD01C
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8030
	{  21, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2844004
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  23, 0xe5142000, 0xfdfff000 }, // ldr:4:0xE5142004
	{  24, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500005
	{  26, 0xe5832000, 0xfdfff000 }, // str:4:0xE7832101
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBAFFFFF8
	{  28, 0xe59d3000, 0xfdfff000 }, // ldr:4:0xE59D3018
	{  29, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  30, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3008
	{  31, 0xe8930000, 0xffff0000 }, // ldm:5:0xE893000F
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetZoomLensCurrentPosition_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01E38F
	{   2, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   3, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFAA0
	{   5, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD4010
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A01E38F
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA01E3A9
	{   8, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F02D0
	{   9, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F2
	{  11, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F02DC
	{  12, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE590102C
	{  13, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900028
	{  14, 0xe0410000, 0xfdfff000 }, // sub:6:0xE0410000
	{  16, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F22F0
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  18, 0xe5821000, 0xfdfff000 }, // str:4:0xE5821008
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F02EC
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A0200C
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA021E93
	{  23, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F130C
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  25, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810008
	{  27, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F031C
	{  28, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900014
	{  30, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0328
	{  31, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590001C
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_pwr_off_2[] = {
	{   0, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   1, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFEC5
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe2000000, 0xfffff000 }, // and:7:0xE2000001
	{   5, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{   7, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F107C
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE581001C
	{  10, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810024
	{  13, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  14, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0044
	{  16, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{  17, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010D4
	{  20, 0x100f0000, 0xf00ff000 }, // add:10:0x128F0038
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFF64B5
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0040
	{  23, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  24, 0x05904000, 0xfdfff000 }, // ldr:4:0x0590401C
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000005
	{  26, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550001
	{  27, 0x05904000, 0xfdfff000 }, // ldr:4:0x05904024
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A010E5
	{  30, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0010
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF64AB
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_pwr_on_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFED8
	{   3, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2020
	{   4, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2821000
	{   5, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0000A
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0096D6
	{   8, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   9, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500015
	{  10, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A010F9
	{  11, 0x100f0000, 0xf00ff000 }, // add:10:0x128F00AC
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFF64D2
	{  13, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F009C
	{  14, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10AC
	{  15, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A030FA
	{  18, 0xe00f2000, 0xf00ff000 }, // add:10:0xE28F2090
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF6485
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFEC5
	{  22, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  23, 0xe2000000, 0xfffff000 }, // and:7:0xE2000001
	{  25, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  27, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F107C
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  29, 0xe5810000, 0xfdfff000 }, // str:4:0xE581001C
	{  30, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810024
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcpy_2[] = {
	{   0, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{   2, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{   3, 0xe4c23000, 0xfdfff000 }, // strb:4:0xE4C23001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{   8, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{   9, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  10, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  14, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  17, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  19, 0x01530000, 0xfdfff000 }, // cmp:7:0x03530000
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF1
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  27, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  28, 0x10801000, 0xfdf0f000 }, // add:6:0x12811001
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{  30, 0xe0410000, 0xfdfff000 }, // sub:6:0xE0410000
	/* 20/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_time_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F40C8
	{   3, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{   4, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED224
	{  11, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  12, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  13, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F12CC
	{  14, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F00F0
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFED40B
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED277
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF05A2
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFBE
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000009
	{  27, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  28, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941010
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  30, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800001
	{  31, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_PlaySound_2[] = {
	{   0, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{   1, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F13F4
	{   2, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F213C
	{   3, 0x05821000, 0xfdfff000 }, // str:4:0x05821014
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{   5, 0xe1100901, 0xfdffffff }, // tst:7:0xE3100901
	{   6, 0x15821000, 0xfdfff000 }, // str:4:0x15821014
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000000
	{   8, 0xe5821000, 0xfdfff000 }, // str:4:0xE5821010
	{   9, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF22
	/* 11/11 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PostLogicalEventToUI_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{   6, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F7E
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDC74
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF2C
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB039A24
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000159
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  20, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED649
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFC8
	{  24, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03000
	{  25, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFCA2
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  31, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PostLogicalEventForNotPowerType_2[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   5, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{   6, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{   7, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F85
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDC87
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED665
	{  13, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  14, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03002
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFCC0
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{  20, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  22, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  23, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{  24, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0004
	{  25, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  26, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F7E
	{  27, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00020
	{  28, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDC74
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF2C
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_AllocateUncacheableMemory_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   2, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800040
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFCE
	{   4, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840023
	{   7, 0xe1c05000, 0xfdfff000 }, // bic:6:0xE3C0501F
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE286001F
	{   9, 0xe1c02000, 0xfdfff000 }, // bic:6:0xE3C0201F
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF5F9C
	{  14, 0xe5054000, 0xfdfff000 }, // str:4:0xE5054004
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 15/16 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_free_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   4, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5020
	{   5, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFABC
	{   7, 0xe5140000, 0xfdfff000 }, // ldr:4:0xE5140008
	{   8, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2850000
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001348
	{  11, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFAA8
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D400E
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  20, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	{  21, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  22, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D0003
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000028
	{  25, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1094
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00020C
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD900C
	{  29, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D400E
	{  30, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  31, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1000
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_ClusterSize_3[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F1350
	{   4, 0x200f0000, 0xf00ff000 }, // sub:10:0x224F0E92
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFECB5B
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0944
	{   7, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0841204
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800101
	{   9, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{  11, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 13/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_TotalClusters_3[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f0000, 0xf00ff000 }, // ldr:8:0x251F032C
	{   4, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F131C
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFECB4E
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1978
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0840204
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{   9, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900034
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 11/11 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_FreeClusters_3[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F12F8
	{   4, 0x200f0000, 0xf00ff000 }, // sub:10:0x224F0D26
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFECB43
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0370
	{   7, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900104
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 9/9 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetOpticalTemperature_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F406C
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010E6
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0070
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF0153
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{   8, 0xe1d01000, 0xfdfff000 }, // bic:6:0xE1D010F4
	{   9, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000D
	{  11, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A010E8
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F004C
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF014A
	{  16, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  17, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02027
	{  18, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911000
	{  19, 0xe1d40000, 0xfdfff000 }, // bic:6:0xE1D400B0
	{  20, 0xe0010192, 0xffffffff }, // mul:11:0xE0010192
	{  21, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2044
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  23, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0821101
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF92
	{  25, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510001
	{  26, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD4010
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFC6
	{  28, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4010
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFFA7
	{  31, 0x70656854, 0xfdffffff }, // rsb:6:0x72656854
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_lseek_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{   1, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03002
	{   2, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01FC1
	{   4, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{   5, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03001
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002BEE
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD9000
	/* 8/8 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_read_keys_3[] = {
	{   0, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2194
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   4, 0xe5821000, 0xfdfff000 }, // str:4:0xE7821100
	{   5, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFFC
	{   7, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F01B0
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB009E2C
	{   9, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F01B8
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA009C98
	/* 12/12 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_read_keys_r2_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE51F61D4
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F25E0
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A002A0
	{   6, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE7941100
	{   7, 0xe5922000, 0xfdfff000 }, // ldr:4:0xE5922000
	{   9, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  10, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F05D8
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000190
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A002A0
	{  16, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE7942100
	{  17, 0xe2033000, 0xfffff000 }, // and:7:0xE203301F
	{  19, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F05B4
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000186
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A002A0
	{  26, 0xe5942000, 0xfdfff000 }, // ldr:4:0xE7942100
	{  27, 0xe2033000, 0xfffff000 }, // and:7:0xE203301F
	{  29, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  31, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A052A0
	/* 23/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p2_f_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD018
	{   2, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F6554
	{   3, 0xe0807000, 0xfdf0f000 }, // add:6:0xE28D7008
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000011
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1538
	{   7, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3008
	{   8, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2014
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB009F64
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x059d1000, 0xfdfff000 }, // ldr:4:0x059D1014
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFFFFBC
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  14, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE7971100
	{  15, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  16, 0x15962000, 0xfdfff000 }, // ldr:4:0x17962100
	{  17, 0x11c21000, 0xfdfff000 }, // bic:6:0x11C21001
	{  18, 0x15861000, 0xfdfff000 }, // str:4:0x17861100
	{  19, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00C00
	{  21, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00C40
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFF6
	{  23, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0500
	{  24, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB009E82
	{  26, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFE8
	{  28, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE59F84F0
	{  29, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{  30, 0xe5960000, 0xfdfff000 }, // ldr:4:0xE7960104
	{  31, 0xe5981000, 0xfdfff000 }, // ldr:4:0xE7981104
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_qsort_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D400E
	{   1, 0xe1cd2000, 0xfdfff000 }, // bic:6:0xE1CD20F0
	{   3, 0xe1120003, 0xfdffffff }, // tst:7:0xE3120003
	{   4, 0x000f2000, 0xf00ff000 }, // ldr:8:0x059F2020
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{   6, 0xe1120001, 0xfdffffff }, // tst:7:0xE3120001
	{   7, 0x100f2000, 0xf00ff000 }, // sub:10:0x124F2E4B
	{   8, 0x000f2000, 0xf00ff000 }, // sub:10:0x024F2E49
	{   9, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2008
	{  10, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFC1
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD900C
	/* 12/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ReadFastDir_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD040
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000060
	{   5, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   6, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE3A08001
	{   7, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   8, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000032
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03001
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02020
	{  12, 0xe98d0000, 0xffff0000 }, // stm:5:0xE98D000C
	{  13, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3010
	{  14, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  15, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  16, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2850018
	{  17, 0xe58d4000, 0xfdfff000 }, // str:4:0xE58D4000
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDF916
	{  19, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000021
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350000C
	{  22, 0xd5847000, 0xfdfff000 }, // str:4:0xD5847038
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xDA000003
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350001F
	{  25, 0xe5848000, 0xfdfff000 }, // str:4:0xE5848038
	{  26, 0xc5c47000, 0xfdfff000 }, // strb:4:0xC5C4701F
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA000000
	{  28, 0xe5c47000, 0xfdfff000 }, // strb:4:0xE7C47000
	{  29, 0xe1cd0000, 0xfdfff000 }, // bic:6:0xE1CD02D8
	{  30, 0xe1e02000, 0xfdfff000 }, // mvn:6:0xE3E02000
	{  31, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_stat_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD02C
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D4FD
	{   6, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2028
	{   7, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2851001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF7F35
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000015
	{  11, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0028
	{  12, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1024
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF801C
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000009
	{  16, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0028
	{  17, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1018
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF8054
	{  19, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000004
	{  21, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0028
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF808E
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000002
	{  26, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0028
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF7FF5
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000003
	{  29, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0028
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF7FF2
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strlen_3[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   4, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   5, 0x10801000, 0xfdf0f000 }, // add:6:0x12811001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   7, 0xe0410000, 0xfdfff000 }, // sub:6:0xE0410000
	{   9, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{  10, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD0C4
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D000C
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFD01
	{  13, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000021
	{  15, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0064
	{  16, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03002
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000005
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F010C
	{  21, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1060
	{  22, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D2064
	{  23, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03008
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001319
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000D
	{  26, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00F4
	{  27, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03008
	{  28, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001313
	{  31, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02A01
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcpy_3[] = {
	{   0, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{   2, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE3530000
	{   3, 0xe4c23000, 0xfdfff000 }, // strb:4:0xE4C23001
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{   8, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{   9, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  10, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  14, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  17, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  19, 0x01530000, 0xfdfff000 }, // cmp:7:0x03530000
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF1
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520018
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000029
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000A
	{  28, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{  29, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  30, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  31, 0x00422000, 0xfdfff000 }, // sub:6:0x02422001
	/* 21/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UpdateMBROnFlash_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01C02
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB005EB0
	{   8, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   9, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F07D4
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03005
	{  11, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0804384
	{  12, 0xe594c000, 0xfdfff000 }, // ldr:4:0xE594C050
	{  13, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940038
	{  14, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE5941044
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEA18E
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02000
	{  20, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0850007
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEA155
	{  23, 0xe5b40000, 0xfdfff000 }, // ldr:4:0xE5B40038
	{  24, 0xe5b41000, 0xfdfff000 }, // ldr:4:0xE5B4100C
	{  25, 0xe594c000, 0xfdfff000 }, // ldr:4:0xE594C010
	{  26, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03005
	{  27, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD41F0
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA005EEB
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Open_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06002
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D569
	{   6, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   7, 0xe1c44000, 0xfdfff000 }, // bic:6:0xE3C44902
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D9F5
	{  10, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF953D
	{  14, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  16, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD0E
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00DA09
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  22, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  23, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF955E
	{  25, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000003
	{  27, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F8D
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CDFD
	{  29, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  30, 0x01e04000, 0xfdfff000 }, // mvn:6:0x03E04000
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Close_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF955E
	{   3, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000003
	{   5, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F8D
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CDFD
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0x01e04000, 0xfdfff000 }, // mvn:6:0x03E04000
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD32
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  13, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  14, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002D7E
	{  16, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000006
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CDF0
	{  20, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  21, 0x11e04000, 0xfdfff000 }, // mvn:6:0x13E04000
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD75
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  26, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  28, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002D70
	{  30, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  31, 0x01a00000, 0xfdfff000 }, // mov:6:0x01A00005
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Write_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01002
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05002
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D9BE
	{   7, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF95C4
	{  11, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500005
	{  12, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  13, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00006
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00CCFD
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D9D2
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  20, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{  21, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002C55
	{  23, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CDC5
	{  27, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  28, 0x11e04000, 0xfdfff000 }, // mvn:6:0x13E04000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  30, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  31, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_mkdir_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D438
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00D8C6
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01092
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002B1D
	{   9, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CCDB
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  13, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500001
	{  14, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  15, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8070
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CC2B
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA0140B0
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA01409B
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA01407F
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA01411E
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA01406C
	{  25, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  26, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1108
	{  27, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F42
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB013FC9
	{  29, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F110C
	{  30, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F43
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB013FC6
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_malloc_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   2, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{   3, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804008
	{   4, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F507C
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   6, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFAD2
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2850000
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001311
	{  11, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  12, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFABF
	{  14, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  15, 0x15844000, 0xfdfff000 }, // str:4:0x15844000
	{  16, 0x10804000, 0xfdf0f000 }, // add:6:0x12844008
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0016A4
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100C
	{  20, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  23, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  24, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  25, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  26, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  27, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5020
	{  28, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFABC
	{  30, 0xe5140000, 0xfdfff000 }, // ldr:4:0xE5140008
	{  31, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_strcmp_3[] = {
	{   0, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000008
	{   2, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520003
	{   3, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{   4, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{   5, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{   8, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  11, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{  13, 0x01530000, 0xfdfff000 }, // cmp:7:0x03530000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF1
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  17, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520018
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000029
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000A
	{  22, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE153000C
	{  23, 0x00800000, 0xfdf0f000 }, // add:6:0x02800001
	{  24, 0x00801000, 0xfdf0f000 }, // add:6:0x02811001
	{  25, 0x00422000, 0xfdfff000 }, // sub:6:0x02422001
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000003
	{  29, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{  31, 0xe1100003, 0xfdffffff }, // tst:7:0xE3100003
	/* 20/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_opendir_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7B22B
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7B6AF
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0003C
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF6EA10
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F12A4
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0FA9
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF681E6
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07000
	{  18, 0x05847000, 0xfdfff000 }, // str:4:0x05847004
	{  19, 0x05847000, 0xfdfff000 }, // str:4:0x05847008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF6EA32
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1280
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0E27
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF681D9
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5847000, 0xfdfff000 }, // str:4:0xE584700C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_openfastdir_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7B22B
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7B6AF
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0003C
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF6EA10
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F12A4
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0FA9
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF681E6
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07000
	{  18, 0x05847000, 0xfdfff000 }, // str:4:0x05847004
	{  19, 0x05847000, 0xfdfff000 }, // str:4:0x05847008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF6EA32
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1280
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0E27
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF681D9
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5847000, 0xfdfff000 }, // str:4:0xE584700C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_closedir_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BF6EA65
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   6, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF6DCDD
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000003
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940014
	{  11, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  12, 0x00800000, 0xfdf0f000 }, // add:6:0x02840018
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF8A5A8
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF6EA1D
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_VbattGet_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB008BE4
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F130C
	{   4, 0xe1d11000, 0xfdfff000 }, // bic:6:0xE1D110B0
	{   5, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   6, 0xe0400000, 0xfdfff000 }, // sub:6:0xE0400001
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF85
	/* 10/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetFocusLensSubjectDistanceFromLens_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5618
	{   2, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1624
	{   5, 0x000f0000, 0xf00ff000 }, // ldr:8:0x051F0290
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFB6DE1
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEE5
	{   8, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   9, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001191
	{  15, 0xe1dd1000, 0xfdfff000 }, // bic:6:0xE1DD10F4
	{  16, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE595002C
	{  17, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800101
	{  18, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE59003A8
	{  19, 0xe0444000, 0xfdfff000 }, // sub:6:0xE0444000
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	/* 22/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Restart_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDA17
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB013CC5
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00C7A6
	{   5, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540003
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B0085B9
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFDFD7
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB006AFA
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0093A8
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF8CE
	{  12, 0xe1c00000, 0xfdfff000 }, // bic:6:0xE3C0003F
	{  15, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F10A4
	{  16, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  17, 0xe5810000, 0xfdfff000 }, // str:4:0xE581010C
	{  18, 0xe5810000, 0xfdfff000 }, // str:4:0xE581000C
	{  19, 0xe5810000, 0xfdfff000 }, // str:4:0xE581001C
	{  20, 0xe5810000, 0xfdfff000 }, // str:4:0xE581002C
	{  21, 0xe5810000, 0xfdfff000 }, // str:4:0xE581003C
	{  22, 0xe5810000, 0xfdfff000 }, // str:4:0xE581004C
	{  23, 0xe5810000, 0xfdfff000 }, // str:4:0xE581005C
	{  24, 0xe5810000, 0xfdfff000 }, // str:4:0xE581006C
	{  25, 0xe5810000, 0xfdfff000 }, // str:4:0xE581007C
	{  26, 0xe5810000, 0xfdfff000 }, // str:4:0xE581008C
	{  27, 0xe5810000, 0xfdfff000 }, // str:4:0xE581009C
	{  28, 0xe5810000, 0xfdfff000 }, // str:4:0xE58100AC
	{  29, 0xe5810000, 0xfdfff000 }, // str:4:0xE58100BC
	{  30, 0xe5810000, 0xfdfff000 }, // str:4:0xE58100CC
	{  31, 0xe5810000, 0xfdfff000 }, // str:4:0xE58100DC
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_add_ptp_handler_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4030
	{   2, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00017
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   8, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{   9, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  10, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00003
	{  11, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF87F0F
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB5
	{  17, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  18, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  19, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD87F0
	{  20, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  22, 0xe5909000, 0xfdfff000 }, // ldr:4:0xE5909000
	{  23, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804004
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00009
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7E24F
	{  26, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  27, 0x11a06000, 0xfdfff000 }, // mov:6:0x13A06001
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000018
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000133
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PB2Rec_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0FD4
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF328
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{   6, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F46
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC8EE
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0000D
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF920
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000731
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFBD
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFE9B3D
	{  16, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  17, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10F8
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC8E2
	{  20, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1540
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  22, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810080
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE9B34
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0321DD
	{  26, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD869
	{  29, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00071D
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000F86
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Rec2PB_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10F8
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC8E2
	{   4, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1540
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   6, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810080
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE9B34
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0321DD
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD869
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00071D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000F86
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00010
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFF907
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  20, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10B8
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFC8CF
	{  23, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F158C
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  25, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810058
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0007FA
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000710
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB004183
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B0006F0
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetMemInfo_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D403E
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F50C8
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950024
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE2EF
	{   6, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE595000C
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000021
	{   9, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950004
	{  10, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800008
	{  11, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  12, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950004
	{  13, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  14, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  15, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00001
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFFB
	{  17, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{  18, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810000
	{  19, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840004
	{  20, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950008
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  22, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840008
	{  23, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950018
	{  24, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840010
	{  25, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE595001C
	{  26, 0xe5840000, 0xfdfff000 }, // str:4:0xE584000C
	{  27, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950020
	{  28, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840014
	{  29, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0058
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00175B
	{  31, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0008
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileTimeStamp_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1004
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002D01
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD58
	{   9, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  10, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500001
	{  11, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CCC2
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenLock_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000075
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00005E
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0F5C
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590000C
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF8FAC7
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 10/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenUnlock_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00006B
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFB68
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0F84
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590000C
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF8FABC
	/* 9/9 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileAttributes_3[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002DD8
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD4A
	{   6, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{   7, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500001
	{   8, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{   9, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8070
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CCB4
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  14, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  15, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002DCA
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  19, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CCAA
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00004F
	{  25, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  26, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002BE6
	{  28, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00CD31
	{  31, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_ClusterSize_4[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f0000, 0xf00ff000 }, // ldr:8:0x251F0350
	{   4, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F1378
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFEA085
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0C40
	{   7, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0841204
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800101
	{   9, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  10, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{  11, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 13/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_FreeClusters_4[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f0000, 0xf00ff000 }, // ldr:8:0x251F03B0
	{   4, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F1320
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFEA06D
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F03CC
	{   7, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900104
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 9/9 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_srand_4[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F102C
	{   1, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{   3, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2020
	{   4, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1020
	{   5, 0xe5920000, 0xfdfff000 }, // ldr:4:0xE5920000
	{   6, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{   7, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{   9, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{  10, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820000
	/* 10/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rand_4[] = {
	{   0, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2020
	{   1, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1020
	{   2, 0xe5920000, 0xfdfff000 }, // ldr:4:0xE5920000
	{   3, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{   4, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{   7, 0xe5820000, 0xfdfff000 }, // str:4:0xE5820000
	/* 8/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_qsort_4[] = {
	{   0, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{   2, 0xe1cd2000, 0xfdfff000 }, // bic:6:0xE1CD20F0
	{   4, 0xe1120003, 0xfdffffff }, // tst:7:0xE3120003
	{   5, 0x000f2000, 0xf00ff000 }, // ldr:8:0x059F202C
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{   7, 0xe1120001, 0xfdffffff }, // tst:7:0xE3120001
	{   8, 0x100f2000, 0xf00ff000 }, // sub:10:0x124F2D13
	{   9, 0x000f2000, 0xf00ff000 }, // sub:10:0x024F2E4A
	{  10, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2008
	{  11, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2FFF
	{  12, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D200C
	{  13, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2010
	{  14, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2010
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB9
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD900F
	/* 17/18 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetFocusLensSubjectDistanceFromLens_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5574
	{   2, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950000
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F156C
	{   5, 0x000f0000, 0xf00ff000 }, // ldr:8:0x051F01C0
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFA80F1
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEE4
	{   8, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   9, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000008
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  12, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000E19
	{  15, 0xe1dd1000, 0xfdfff000 }, // bic:6:0xE1DD10F4
	{  16, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE595002C
	{  17, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800101
	{  18, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE59003A8
	{  19, 0xe0444000, 0xfdfff000 }, // sub:6:0xE0444000
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	/* 22/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_closedir_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{   3, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BF5613A
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   6, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF55192
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000006
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940014
	{  11, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BF56132
	{  13, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594001C
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  15, 0x00800000, 0xfdf0f000 }, // add:6:0x02840020
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF752CA
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF560EF
	/* 20/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileTimeStamp_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D407C
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0240
	{   3, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510000
	{   4, 0xb1a01000, 0xfdfff000 }, // mov:6:0xB1A01000
	{   5, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520000
	{   6, 0xb1a02000, 0xfdfff000 }, // mov:6:0xB1A02000
	{   7, 0xe58d1000, 0xfdfff000 }, // str:4:0xE58D1004
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2000
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB003058
	{  12, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F18A
	{  15, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  16, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500001
	{  17, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000002
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F0F4
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD807C
	/* 23/23 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ReadFastDir_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000F
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF18
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEE2
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFFF4
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000005
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF0
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  24, 0xe5c46000, 0xfdfff000 }, // strb:4:0xE5C46000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFFB
	/* 26/26 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_PlaySound_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05804
	{   3, 0xe1100901, 0xfdffffff }, // tst:7:0xE3100901
	{   4, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05825
	{   5, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{   7, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF11
	{  11, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  12, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  13, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01F7D
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000E
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F00C0
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  18, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F11E0
	{  19, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F00C8
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE5278
	{  21, 0xe1140a02, 0xfdffffff }, // tst:7:0xE3140A02
	{  22, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  23, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF3F
	{  27, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  28, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  29, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11B8
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  31, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F00F8
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Remove_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0030DF
	{   3, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000006
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F22C
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   8, 0x11e04000, 0xfdfff000 }, // mvn:6:0x13E04000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F1B1
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 14/14 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_vsprintf_4[] = {
	{   0, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	{   2, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0008
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03002
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{   6, 0xe5cd0000, 0xfdfff000 }, // strb:4:0xE5CD0014
	{   7, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F004C
	{   8, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE3B9
	{  10, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D2008
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  12, 0xe5c21000, 0xfdfff000 }, // strb:4:0xE5C21000
	{  13, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD01C
	{  14, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF004
	/* 15/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_RenameFile_Fut_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD028
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000118
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1650
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810105
	{  10, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0024
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000136
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00012E
	{  17, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0024
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x10800000, 0xfdf0f000 }, // add:6:0x128D0004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00012A
	{  21, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0001E5
	{  24, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  25, 0x100f4000, 0xf00ff000 }, // ldr:8:0x159F4634
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0B
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00010A
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD028
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rename_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   3, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD028
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000118
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1650
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810105
	{  10, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  11, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0024
	{  12, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000136
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00012E
	{  17, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0024
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x10800000, 0xfdf0f000 }, // add:6:0x128D0004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00012A
	{  21, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0001E5
	{  24, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  25, 0x100f4000, 0xf00ff000 }, // ldr:8:0x159F4634
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0B
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00010A
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD028
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_mkdir_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F840
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00FD22
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01092
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB002E73
	{   9, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F10D
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550000
	{  13, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500001
	{  14, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  15, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8070
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00F05D
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 19/20 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_opendir_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF64AEF
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF64FBC
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00044
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF560E2
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01E1B
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F9D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4F01D
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07000
	{  18, 0x05847000, 0xfdfff000 }, // str:4:0x05847004
	{  19, 0x05847000, 0xfdfff000 }, // str:4:0x05847008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF56104
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1250
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0D09
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4F010
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5847000, 0xfdfff000 }, // str:4:0xE584700C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_openfastdir_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF64AEF
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF64FBC
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00044
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF560E2
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01E1B
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F9D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4F01D
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07000
	{  18, 0x05847000, 0xfdfff000 }, // str:4:0x05847004
	{  19, 0x05847000, 0xfdfff000 }, // str:4:0x05847008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF56104
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  25, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1250
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0D09
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4F010
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5847000, 0xfdfff000 }, // str:4:0xE584700C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_reboot_fw_update_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   3, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0124
	{   4, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02028
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032C1E
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF53C05
	{  10, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  11, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{  12, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1104
	{  13, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F41
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4DAC1
	{  15, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE59F80F0
	{  16, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE5980004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  19, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE5980000
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000B0
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF54B7B
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  25, 0xe5880000, 0xfdfff000 }, // str:4:0xE5880004
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01EB09
	{  28, 0xe5981000, 0xfdfff000 }, // ldr:4:0xE5981004
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB02A012
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenLock_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000100
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000003
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00010C
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00F4
	{   7, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590000C
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE1723
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 11/11 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenUnlock_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000E7
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFB9F
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0094
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590000C
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFE170A
	/* 9/9 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_apex2us_4[] = {
	{   0, 0xe1700d09, 0xfdffffff }, // cmn:7:0xE3700D09
	{   1, 0xb00f0000, 0xf00ff000 }, // ldr:8:0xB59F0068
	{   2, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBA000006
	{   4, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500E5A
	{   5, 0xc1a00000, 0xfdfff000 }, // mov:6:0xC3A00E5A
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xCA00000B
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500D09
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000009
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000001
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01003
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB055C53
	{  13, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F103C
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{  16, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{  17, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900300
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00300
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01060
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB055C4A
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1020
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00800
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00840
	{  25, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810080
	{  26, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400C03
	{  27, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000B0
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 29/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_WriteSDCard_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4FFF
	{   1, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0318
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD00C
	{   3, 0xe1a0b000, 0xfdfff000 }, // mov:6:0xE1A0B002
	{   4, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D200C
	{   5, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{   6, 0xe1a0a000, 0xfdfff000 }, // mov:6:0xE3A0A000
	{   7, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE1520000
	{   8, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05002
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00080
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC7009
	{  12, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D000C
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFDB9
	{  14, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00080
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFC700D
	{  17, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000010
	{  19, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0360
	{  20, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D200C
	{  21, 0xe5802000, 0xfdfff000 }, // str:4:0xE5802008
	{  22, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1388
	{  23, 0xe59d2000, 0xfdfff000 }, // ldr:4:0xE59D200C
	{  24, 0xe59d6000, 0xfdfff000 }, // ldr:4:0xE59D6010
	{  25, 0xe0807000, 0xfdf0f000 }, // add:6:0xE0817282
	{  26, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE5971014
	{  27, 0xe0800000, 0xfdf0f000 }, // add:6:0xE086000B
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE1500001
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x8A000005
	{  30, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE5971010
	{  31, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510001
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetKbdState_4[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F109C
	{   1, 0xe5912000, 0xfdfff000 }, // ldr:4:0xE5912200
	{   2, 0xe5802000, 0xfdfff000 }, // str:4:0xE5802000
	{   3, 0xe5912000, 0xfdfff000 }, // ldr:4:0xE5912204
	{   4, 0xe5802000, 0xfdfff000 }, // str:4:0xE5802004
	{   5, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911208
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01801
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01821
	{   8, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801008
	/* 9/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_UnlockAF_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1078
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00E12
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01677C
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0005F7
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB012673
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   9, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1060
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00E12
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA016774
	/* 12/12 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_DoAFLock_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F10A4
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00E12
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01678A
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000605
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011DB4
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB012676
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB011DB6
	{  10, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  11, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1080
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00E12
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA016780
	/* 14/14 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_MoveOpticalZoomAt_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE348
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   5, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{   6, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE386
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  10, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE38B
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  14, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE398
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE3AE
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  22, 0xc0400000, 0xfdfff000 }, // sub:6:0xC2400001
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEE3C0
	{  25, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  26, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE366
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE4C9
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_MoveDigitalZoomToWide_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE38B
	{   2, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   3, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{   4, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE398
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   8, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{   9, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE3AE
	{  11, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  12, 0xc0400000, 0xfdfff000 }, // sub:6:0xC2400001
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEE3C0
	{  15, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE366
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  19, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  20, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE4C9
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE4D3
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  28, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEE5E3
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  31, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetImageFolder_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4160
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   3, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   6, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{   7, 0xe1a09000, 0xfdfff000 }, // mov:6:0xE1A09003
	{   8, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08002
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF9B3
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x000f0000, 0xf00ff000 }, // ldr:8:0x051F0ACC
	{  12, 0x01a01000, 0xfdfff000 }, // mov:6:0x01A01004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFAFE10
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA68
	{  16, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  17, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000024
	{  19, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB6D49
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00205
	{  23, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06B20
	{  24, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  25, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  26, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01007
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB05A2A0
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFAD362
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500008
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000E
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MoveIrisWithAv_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{   2, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   3, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F10A4
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9EA51
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01E4
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11E8
	{   7, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF4D7F7
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF9ED04
	{  11, 0xe0801000, 0xfdf0f000 }, // add:6:0xE2801004
	{  12, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  13, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{  14, 0xe1d11000, 0xfdfff000 }, // bic:6:0xE1D110B0
	{  15, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  16, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F20D8
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9EA9A
	{  18, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01B0
	{  19, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11B4
	{  20, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF4D7EA
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF9ECF7
	{  24, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  25, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000F0
	{  26, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  27, 0xe00f1000, 0xf00ff000 }, // sub:10:0xE24F1F41
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9EC40
	{  29, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0184
	{  30, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1188
	{  31, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GiveSemaphore_4[] = {
	{   0, 0xe2001000, 0xfffff000 }, // and:7:0xE2001001
	{   1, 0xe0411000, 0xfdfff000 }, // sub:6:0xE2411001
	{   2, 0xe1110000, 0xfdffffff }, // tst:7:0xE1110000
	{   3, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00007
	{   4, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8010
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A000A0
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF60DE
	{   8, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   9, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1070
	{  10, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F0050
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF907E
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  14, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4030
	{  15, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{  16, 0xe2001000, 0xfffff000 }, // and:7:0xE2001001
	{  17, 0xe0411000, 0xfdfff000 }, // sub:6:0xE2411001
	{  18, 0xe1110000, 0xfdffffff }, // tst:7:0xE1110000
	{  19, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00007
	{  20, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000E
	{  22, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A000A0
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  25, 0xe58d5000, 0xfdfff000 }, // str:4:0xE58D5008
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000CBD
	{  27, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  28, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1028
	{  29, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F009C
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFF906B
	{  31, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_DebugAssert_4[] = {
	{   0, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2024
	{   1, 0xe5922000, 0xfdfff000 }, // ldr:4:0xE5922000
	{   2, 0xe1520000, 0xfdfff000 }, // cmp:7:0xE3520000
	{   3, 0x01a02000, 0xfdfff000 }, // mov:6:0x01A02001
	{   4, 0x01a01000, 0xfdfff000 }, // mov:6:0x01A01000
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0014
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFC94C
	{   8, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1004
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{  12, 0x7173410a, 0xfdffffff }, // cmn:7:0x7373410A
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A747265
	{  17, 0x64252000, 0xfdfff000 }, // str:4:0x64252065
	{  19, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  20, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4214
	{  21, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  22, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE590101C
	{  23, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  24, 0x15902000, 0xfdfff000 }, // ldr:4:0x15902020
	{  25, 0x11520000, 0xfdfff000 }, // cmp:7:0x13520000
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  27, 0x05840000, 0xfdfff000 }, // str:4:0x0584002C
	{  28, 0x05840000, 0xfdfff000 }, // str:4:0x05840028
	{  29, 0x05840000, 0xfdfff000 }, // str:4:0x05840024
	{  30, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A0004F
	{  31, 0x05840000, 0xfdfff000 }, // str:4:0x05840030
	/* 25/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_err_init_task_4[] = {
	{   0, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F00A8
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFF721
	{   4, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00040
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFEBE0
	{   9, 0x00707574, 0xfdffffff }, // rsb:6:0x00707574
	{  11, 0x74697000, 0xfdfff000 }, // strb:4:0x76697244
	{  18, 0x70436000, 0xfdfff000 }, // sub:6:0x72436563
	{  22, 0x74655000, 0xfdfff000 }, // strb:4:0x7465536F
	{  26, 0x00707574, 0xfdffffff }, // rsb:6:0x00707574
	{  28, 0x715f6000, 0xfdfff000 }, // cmp:7:0x735F6269
	{  29, 0x70757465, 0xfdffffff }, // rsb:6:0x70757465
	/* 15/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_LEDDrive_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE51F7128
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   6, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F10F4
	{   7, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F0F4F
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEE8D9
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A0000D
	{  10, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE5971004
	{  11, 0xe0000095, 0xffffffff }, // mul:11:0xE0000095
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550010
	{  13, 0x31560000, 0xfdfff000 }, // cmp:7:0x33560008
	{  14, 0xe0804000, 0xfdf0f000 }, // add:6:0xE0814100
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x2A000002
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE35000FF
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00003
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	{  21, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F30BC
	{  22, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970010
	{  23, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2F5F
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF5978
	{  27, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A0100A
	{  28, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0D440A
	{  30, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0840101
	{  31, 0xe5c41000, 0xfdfff000 }, // strb:4:0xE5C4100A
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PutInNdFilter_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   2, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F001C
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFBDE4
	{   4, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0044
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F104C
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF4D67A
	{   9, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  10, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  11, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F0040
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFBE05
	{  13, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0020
	{  14, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1028
	{  15, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  16, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF4D671
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  19, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000B0
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFBE66
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  22, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9F553
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  31, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PutOutNdFilter_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   2, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F0040
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFBE05
	{   4, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0020
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1028
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF4D671
	{   9, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  10, 0xe1d00000, 0xfdfff000 }, // bic:6:0xE1D000B0
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFBE66
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  18, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9F553
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  22, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9F550
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  25, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	{  26, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  27, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF4D779
	{  30, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1234
	{  31, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	/* 28/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_CaptSeq_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40F8
	{   1, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE51F7570
	{   2, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F43E4
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   4, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970004
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFEDF88
	{   8, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  10, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1418
	{  11, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F03F4
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE7149
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE7136
	{  14, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD80F8
	{  15, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  16, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{  17, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510024
	{  18, 0x900ff000, 0xf00ff000 }, // add:10:0x908FF101
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000095
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000023
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000028
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000030
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000034
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000031
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000035
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000036
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000037
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000039
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000042
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00003A
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00003C
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_InitFileModules_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD84D
	{   2, 0xe00f5000, 0xf00ff000 }, // ldr:8:0xE59F5198
	{   3, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   4, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A01000
	{   5, 0x11a00000, 0xfdfff000 }, // mov:6:0x11A00005
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFFE7C8
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFD852
	{   8, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{   9, 0x01a00000, 0xfdfff000 }, // mov:6:0x01A00005
	{  10, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4070
	{  11, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01000
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFE7C2
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  14, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE7394
	{  16, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0164
	{  17, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  18, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFE7BB
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0158
	{  21, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4008
	{  22, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{  23, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  25, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  26, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801004
	{  27, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  28, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  29, 0xe00f3000, 0xf00ff000 }, // sub:10:0xE24F307C
	{  30, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01019
	{  31, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0E13
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_RotaryEncoder_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4FF0
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD024
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000E2
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F12A0
	{   4, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F62BC
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   6, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3018
	{   7, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28DC01C
	{   8, 0xe080a000, 0xfdf0f000 }, // add:6:0xE28DA008
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  10, 0xe0809000, 0xfdf0f000 }, // add:6:0xE28D9010
	{  11, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28DC01C
	{  12, 0xe080e000, 0xfdf0f000 }, // add:6:0xE08CE080
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  14, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3018
	{  15, 0xe1ce2000, 0xfdfff000 }, // bic:6:0xE1CE20B0
	{  16, 0xe080e000, 0xfdf0f000 }, // add:6:0xE083E080
	{  17, 0xe1ce2000, 0xfdfff000 }, // bic:6:0xE1CE20B0
	{  18, 0xe5892000, 0xfdfff000 }, // str:4:0xE7892100
	{  19, 0xe58a2000, 0xfdfff000 }, // str:4:0xE78A2100
	{  20, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBAFFFFF3
	{  23, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0250
	{  24, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  25, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{  26, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFF5300
	{  28, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  29, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1260
	{  30, 0x100f0000, 0xf00ff000 }, // add:10:0x128F0F8F
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEE4C2
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_MovieRecord_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47FC
	{   1, 0xe00f9000, 0xf00ff000 }, // ldr:8:0xE59F941C
	{   2, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE51F8CB8
	{   3, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F43E8
	{   4, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE3A07001
	{   5, 0xe00f6000, 0xf00ff000 }, // sub:10:0xE24F6FC5
	{   6, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   7, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940024
	{   8, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   9, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFACCEA
	{  11, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594002C
	{  12, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  13, 0x15940000, 0xfdfff000 }, // ldr:4:0x1594000C
	{  14, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500002
	{  15, 0x15940000, 0xfdfff000 }, // ldr:4:0x15940044
	{  16, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500006
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00003A
	{  18, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0004
	{  19, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{  20, 0xe0411000, 0xfdfff000 }, // sub:6:0xE2411002
	{  21, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351000A
	{  22, 0x900ff000, 0xf00ff000 }, // add:10:0x908FF101
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000034
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000020
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000027
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00002A
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00002B
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001E
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00002B
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00001E
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00002C
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_ExpDrv_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F0
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD024
	{   2, 0xe00f9000, 0xf00ff000 }, // ldr:8:0xE51F9C54
	{   3, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE59F8330
	{   4, 0xe00f6000, 0xf00ff000 }, // ldr:8:0xE59F6370
	{   5, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   6, 0xe0807000, 0xfdf0f000 }, // add:6:0xE28D7014
	{   7, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0010
	{   8, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE5980020
	{   9, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  10, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1020
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDB8D7
	{  12, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0010
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000B
	{  15, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0020
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500014
	{  18, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500015
	{  19, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500016
	{  20, 0x11500000, 0xfdfff000 }, // cmp:7:0x13500017
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00005D
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500029
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00003D
	{  24, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1010
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFD0
	{  27, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0020
	{  28, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{  29, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE351002F
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  31, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0020
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_task_PhySw_4[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4234
	{   2, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000004
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940014
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00196C
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000119
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFFFF2B
	{   8, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF7
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFA943
	{  13, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{  14, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4200
	{  15, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  18, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  19, 0xe58d3000, 0xfdfff000 }, // str:4:0xE58D3000
	{  20, 0xe00f3000, 0xf00ff000 }, // sub:10:0xE24F3058
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02B02
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01017
	{  23, 0xe00f0000, 0xf00ff000 }, // add:10:0xE28F0F7F
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB001988
	{  25, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840010
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00C52F
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB017C9B
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000697
	{  29, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  30, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F11CC
	{  31, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD4038
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_ClusterSize_5[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f0000, 0xf00ff000 }, // ldr:8:0x251F03E4
	{   4, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F1270
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFF154B
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F097C
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800384
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFF30C
	/* 11/11 */
	{ -1, 10, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900064, 0xfdffffff }, // ldr:4:0x15900064
	{   2, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 3/4 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_TotalClusters_5[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F124C
	{   4, 0x200f0000, 0xf00ff000 }, // sub:10:0x224F0D26
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFF1540
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F09A8
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800384
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFF305
	/* 11/11 */
	{ -1, 10, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900054, 0xfdffffff }, // ldr:4:0x15900054
	{   2, 0x10400001, 0xfdffffff }, // sub:6:0x12400001
	{   3, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 4/5 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_FreeClusters_5[] = {
	{   0, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0x200f0000, 0xf00ff000 }, // ldr:8:0x251F043C
	{   4, 0x200f1000, 0xf00ff000 }, // ldr:8:0x259F1220
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0x2BFF1535
	{   6, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F09D4
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800384
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900054
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFF2FF
	/* 11/11 */
	{ -1, 10, -2 },
	{   0, 0xe1500000, 0xfdffffff }, // cmp:7:0xE3500000
	{   1, 0x15900060, 0xfdffffff }, // ldr:4:0x15900060
	{   2, 0x01a00000, 0xfdffffff }, // mov:6:0x03A00000
	/* 3/4 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetPropertyCase_5[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4028
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F191C
	{   7, 0x000f0000, 0xf00ff000 }, // sub:10:0x024F003C
	{   8, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFEA5A5
	{  10, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  11, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F390C
	{  12, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F190C
	{  13, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{  14, 0xe00f2000, 0xf00ff000 }, // sub:10:0xE24F2058
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFED649
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  17, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  18, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF81
	{  21, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  22, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F18E8
	{  23, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F007C
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEA596
	{  25, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  26, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	/* 27/27 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_reboot_fw_update_5[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   3, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0120
	{   4, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02020
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB026888
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7C84E
	{  10, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  11, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  12, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0C01
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01F55
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF7A5C8
	{  15, 0xe00f7000, 0xf00ff000 }, // ldr:8:0xE59F70EC
	{  16, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  19, 0xe5970000, 0xfdfff000 }, // ldr:4:0xE5970000
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000B0
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF7D6B3
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  25, 0xe5870000, 0xfdfff000 }, // str:4:0xE5870004
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB015050
	{  28, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE5971004
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01FFA7
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Fgets_Fut_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04002
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   4, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{   5, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD81F0
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2840020
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00003C
	{   9, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{  10, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02004
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010B0A
	{  14, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00003E
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  18, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81F0
	/* 19/19 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_srand_6[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F102C
	{   1, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{   3, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1020
	{   4, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2020
	{   5, 0xe5910000, 0xfdfff000 }, // ldr:4:0xE5910000
	{   6, 0xe0000092, 0xffffffff }, // mul:11:0xE0000092
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{   8, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{  10, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	/* 10/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rand_6[] = {
	{   0, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1020
	{   1, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2020
	{   2, 0xe5910000, 0xfdfff000 }, // ldr:4:0xE5910000
	{   3, 0xe0000092, 0xffffffff }, // mul:11:0xE0000092
	{   4, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800A03
	{   5, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800039
	{   6, 0xe5810000, 0xfdfff000 }, // str:4:0xE5810000
	{   7, 0xe1e01000, 0xfdfff000 }, // mvn:6:0xE3E01902
	/* 8/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_set_control_event_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe2001000, 0xfffff000 }, // and:7:0xE2001CFF
	{   2, 0xe2003000, 0xfffff000 }, // and:7:0xE2003101
	{   3, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01421
	{   5, 0xe2002000, 0xfffff000 }, // and:7:0xE20020FF
	{   6, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0CFA0
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04F23
	{   8, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8010
	{   9, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE3540000
	{  10, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F344C
	{  11, 0x15832000, 0xfdfff000 }, // str:4:0x17832101
	{  12, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00210
	{  15, 0xe5932000, 0xfdfff000 }, // ldr:4:0xE7932101
	{  16, 0xe15c0000, 0xfdfff000 }, // cmp:7:0xE35C0000
	{  17, 0x01e00000, 0xfdfff000 }, // mvn:6:0x01E00000
	{  20, 0xe5830000, 0xfdfff000 }, // str:4:0xE7830101
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 20/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_ClusterSize_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1358
	{   3, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F0310
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE8FAD
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1CC4
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0840204
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{   8, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901004
	{   9, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900008
	{  10, 0xe0000091, 0xffffffff }, // mul:11:0xE0000091
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 12/12 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_TotalClusters_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F132C
	{   3, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F0340
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE8FA1
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE51F1CF4
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0840204
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0810100
	{   8, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900034
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 10/10 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetDrive_FreeClusters_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1308
	{   3, 0x100f0000, 0xf00ff000 }, // ldr:8:0x151F0368
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE8F97
	{   5, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0378
	{   6, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900104
	{   7, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 8/8 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_mkdir_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07001
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01094E
	{   5, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   7, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01097D
	{   9, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000014
	{  11, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00008
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010E49
	{  14, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01092
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0030ED
	{  17, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  18, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00008
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010E60
	{  20, 0xe1560000, 0xfdfff000 }, // cmp:7:0xE3560000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000009
	{  22, 0xe1570000, 0xfdfff000 }, // cmp:7:0xE3570001
	{  23, 0x11a04000, 0xfdfff000 }, // mov:6:0x13A04001
	{  24, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000004
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010250
	{  27, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  28, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0101A1
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MakeDirectory_Fut_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   2, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000D7
	{   5, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2550
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe5821000, 0xfdfff000 }, // str:4:0xE7821100
	{   9, 0xe1760001, 0xfdffffff }, // cmn:7:0xE3760001
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  11, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00000
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B017800
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01051F
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000ED
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0002D3
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x000f4000, 0xf00ff000 }, // ldr:8:0x059F454C
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFDCE
	{  23, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000CC
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 28/28 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_GetImageFolder_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F42EC
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   4, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{   5, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   6, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08003
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFC39
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x000f0000, 0xf00ff000 }, // ldr:8:0x059F02A8
	{  12, 0x01a01000, 0xfdfff000 }, // mov:6:0x01A01004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFAD4E5
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFD0D
	{  16, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  17, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00001
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00002A
	{  19, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFB4616
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00205
	{  23, 0xe1a09000, 0xfdfff000 }, // mov:6:0xE1A09B20
	{  24, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1288
	{  25, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940010
	{  26, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02009
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB058DEF
	{  28, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0278
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFAA9F4
	{  30, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE350000E
	{  31, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000E
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_LocalTime_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   2, 0xe5901000, 0xfdfff000 }, // ldr:4:0xE5901000
	{   3, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   4, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F01B0
	{   5, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE1510000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000003
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFDFF92
	{  10, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000049
	{  11, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F217C
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  13, 0xe5923000, 0xfdfff000 }, // ldr:4:0xE7923100
	{  14, 0xe1530000, 0xfdfff000 }, // cmp:7:0xE1530001
	{  15, 0xd0800000, 0xfdf0f000 }, // add:6:0xD2800001
	{  16, 0xd1500000, 0xfdfff000 }, // cmp:7:0xD3500044
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0xBAFFFFFA
	{  18, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x4AFFFFF2
	{  20, 0xe0806000, 0xfdf0f000 }, // add:6:0xE2806046
	{  21, 0xe5846000, 0xfdfff000 }, // str:4:0xE5846014
	{  22, 0xe5920000, 0xfdfff000 }, // ldr:4:0xE7920100
	{  23, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE59F3150
	{  24, 0xe0412000, 0xfdfff000 }, // sub:6:0xE0412000
	{  25, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0140
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800106
	{  27, 0xe5101000, 0xfdfff000 }, // ldr:4:0xE5101118
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  29, 0xe0807000, 0xfdf0f000 }, // add:6:0xE0817081
	{  30, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0831207
	{  31, 0xe5913000, 0xfdfff000 }, // ldr:4:0xE7913100
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_PlaySound_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05804
	{   3, 0xe1100901, 0xfdffffff }, // tst:7:0xE3100901
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05825
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{   7, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF0C
	{  11, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  12, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  13, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F13DC
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000E
	{  15, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F00AC
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  18, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A01F7F
	{  19, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F00B4
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE3CFA
	{  21, 0xe1140a02, 0xfdffffff }, // tst:7:0xE3140A02
	{  22, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  23, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF3B
	{  27, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  28, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  29, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F13A0
	{  30, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  31, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F00E4
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ReadFastDir_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   3, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000F
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   5, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01005
	{   6, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF19
	{   8, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000B
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEE4
	{  14, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0AFFFFF4
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  17, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000005
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500002
	{  19, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFF0
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{  23, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  24, 0xe5c56000, 0xfdfff000 }, // strb:4:0xE5C56000
	{  25, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFFB
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFF7B
	{  27, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D5FF0
	{  28, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{  29, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  30, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  31, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02008
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_RenameFile_Fut_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD028
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000118
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1654
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810105
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  12, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0024
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000136
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00012E
	{  17, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0024
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x10800000, 0xfdf0f000 }, // add:6:0x128D0004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00012A
	{  21, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000233
	{  24, 0xe0904000, 0xfdf0f000 }, // add:6:0xE2904000
	{  25, 0x100f4000, 0xf00ff000 }, // ldr:8:0x159F4638
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0B
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00010A
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD028
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_rename_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   2, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD028
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{   4, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000118
	{   6, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1654
	{   7, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00001
	{   9, 0xe5810000, 0xfdfff000 }, // str:4:0xE7810105
	{  10, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  12, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  13, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0024
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000136
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00012E
	{  17, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0024
	{  18, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  19, 0x10800000, 0xfdf0f000 }, // add:6:0x128D0004
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1B00012A
	{  21, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000233
	{  24, 0xe0904000, 0xfdf0f000 }, // add:6:0xE2904000
	{  25, 0x100f4000, 0xf00ff000 }, // ldr:8:0x159F4638
	{  26, 0xe0800000, 0xfdf0f000 }, // add:6:0xE28D0004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE0B
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  29, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00010A
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD028
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_Remove_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe1e04000, 0xfdfff000 }, // mvn:6:0xE3E04000
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010A42
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00330C
	{   9, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  10, 0x01a00000, 0xfdfff000 }, // mov:6:0x01A00005
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B0102B3
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFF8EC8
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFFFFA7
	{  16, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  17, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{  19, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{  20, 0xe1e04000, 0xfdfff000 }, // mvn:6:0xE3E04000
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010A31
	{  22, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  23, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000C
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  26, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0031FC
	{  27, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010316
	{  31, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileTimeStamp_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41FC
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04001
	{   4, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05002
	{   5, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0109BA
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000012
	{   9, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F12E8
	{  10, 0xe1540000, 0xfdfff000 }, // cmp:7:0xE1540001
	{  11, 0xb1a04000, 0xfdfff000 }, // mov:6:0xB1A04001
	{  12, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE1550001
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00001
	{  14, 0xb1a05000, 0xfdfff000 }, // mov:6:0xB1A05000
	{  15, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  17, 0xe58d4000, 0xfdfff000 }, // str:4:0xE58D4004
	{  18, 0xe58d5000, 0xfdfff000 }, // str:4:0xE58D5000
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB003297
	{  20, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010297
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  25, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06000
	{  26, 0x01a00000, 0xfdfff000 }, // mov:6:0x01A00007
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B010203
	{  28, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00006
	{  29, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD81FC
	{  30, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{  31, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig__sqrt_6[] = {
	{   0, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE3A0C207
	{   2, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   3, 0xe111000c, 0xfdffffff }, // tst:7:0xE111000C
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000044
	{   5, 0xe1dce000, 0xfdfff000 }, // bic:6:0xE1DCE001
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000047
	{   7, 0xe1110102, 0xfdffffff }, // tst:7:0xE3110102
	{   8, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00004D
	{   9, 0xe1a0c000, 0xfdfff000 }, // mov:6:0xE1A0CA21
	{  10, 0xe1c11000, 0xfdfff000 }, // bic:6:0xE1C11A0C
	{  12, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28CC0FD
	{  13, 0xe1b0c000, 0xfdfff000 }, // mov:6:0xE1B0C0AC
	{  14, 0xe080c000, 0xfdf0f000 }, // add:6:0xE28CCD06
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x3A000001
	{  16, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00080
	{  18, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE3A03000
	{  19, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02101
	{  20, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01501
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00500
	{  23, 0xe0411000, 0xfdfff000 }, // sub:6:0xE2411101
	{  24, 0xe1a0e000, 0xfdfff000 }, // mov:6:0xE3A0E201
	{  25, 0xe0514000, 0xfdfff000 }, // sub:6:0xE0514002
	{  26, 0x20544000, 0xfdfff000 }, // sub:6:0x2054400E
	{  27, 0x20802000, 0xfdf0f000 }, // add:6:0x2082208E
	{  28, 0x21a01000, 0xfdfff000 }, // mov:6:0x21A01004
	{  29, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00080
	{  31, 0xe1b0e000, 0xfdfff000 }, // mov:6:0xE1B0E0AE
	/* 27/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_add_ptp_handler_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D47F0
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4030
	{   2, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   3, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   4, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   7, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00017
	{   8, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{   9, 0xe1560000, 0xfdfff000 }, // cmp:7:0xE3560000
	{  10, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00003
	{  11, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD87F0
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF66D22
	{  13, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000004
	{  15, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00008
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB9
	{  17, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  18, 0x11a00000, 0xfdfff000 }, // mov:6:0x13A00000
	{  19, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD87F0
	{  20, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{  21, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  22, 0xe5909000, 0xfdfff000 }, // ldr:4:0xE5909000
	{  23, 0xe0804000, 0xfdf0f000 }, // add:6:0xE2804004
	{  24, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00009
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF681B9
	{  26, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  27, 0x11a05000, 0xfdfff000 }, // mov:6:0x13A05001
	{  28, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000018
	{  29, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01008
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  31, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB000130
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_close_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D401C
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{   3, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEA4
	{   5, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000004
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFC7E
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01009
	{   9, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  10, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  11, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE89
	{  14, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F03D4
	{  15, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  16, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01004
	{  18, 0xe5902000, 0xfdfff000 }, // ldr:4:0xE5902004
	{  19, 0xe59d0000, 0xfdfff000 }, // ldr:4:0xE59D0000
	{  21, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD801C
	/* 21/22 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p1_f_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40FE
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{   2, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFDD
	{   3, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2234
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   5, 0xe0803000, 0xfdf0f000 }, // add:6:0xE2823024
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A0400D
	{   7, 0xe0801000, 0xfdf0f000 }, // add:6:0xE0831100
	{   8, 0xe592c000, 0xfdfff000 }, // ldr:4:0xE792C100
	{   9, 0xe5916000, 0xfdfff000 }, // ldr:4:0xE591600C
	{  10, 0xe5911000, 0xfdfff000 }, // ldr:4:0xE5911018
	{  13, 0xe5841000, 0xfdfff000 }, // str:4:0xE7841100
	{  14, 0xe0500000, 0xfdfff000 }, // sub:6:0xE2500001
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFF6
	{  16, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE51F2288
	{  17, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  18, 0xe0421000, 0xfdfff000 }, // sub:6:0xE242100C
	{  19, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE2F
	{  20, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F02A8
	{  21, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00C477
	{  22, 0xe00f3000, 0xf00ff000 }, // ldr:8:0xE51F32A0
	{  23, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  24, 0x01a05000, 0xfdfff000 }, // mov:6:0x03A05001
	{  25, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  26, 0xe043c000, 0xfdfff000 }, // sub:6:0xE243C00C
	{  27, 0xe5931000, 0xfdfff000 }, // ldr:4:0xE7931100
	{  28, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000006
	{  30, 0xe59c2000, 0xfdfff000 }, // ldr:4:0xE79C2100
	{  31, 0xe5945000, 0xfdfff000 }, // ldr:4:0xE7945100
	/* 30/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_kbd_p2_f_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F0
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{   2, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE59F85C8
	{   3, 0xe0807000, 0xfdf0f000 }, // add:6:0xE28D7004
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000011
	{   5, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F15AC
	{   7, 0xe0803000, 0xfdf0f000 }, // add:6:0xE28D3004
	{   8, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2010
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00C7F6
	{  10, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  11, 0x059d1000, 0xfdfff000 }, // ldr:4:0x059D1010
	{  12, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFFFFC1
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{  14, 0xe5971000, 0xfdfff000 }, // ldr:4:0xE7971100
	{  15, 0xe1510000, 0xfdfff000 }, // cmp:7:0xE3510000
	{  16, 0x15982000, 0xfdfff000 }, // ldr:4:0x17982100
	{  17, 0x11c21000, 0xfdfff000 }, // bic:6:0x11C21001
	{  18, 0x15881000, 0xfdfff000 }, // str:4:0x17881100
	{  19, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{  20, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00C00
	{  21, 0xe1b00000, 0xfdfff000 }, // mov:6:0xE1B00C40
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x5AFFFFF6
	{  23, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0574
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A0100D
	{  25, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00C6EF
	{  26, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  27, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1AFFFFE8
	{  28, 0xe00f9000, 0xf00ff000 }, // ldr:8:0xE59F954C
	{  29, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE3A05000
	{  30, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE7980105
	{  31, 0xe5991000, 0xfdfff000 }, // ldr:4:0xE7991105
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_open_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D40FE
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   3, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07002
	{   4, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFE9C
	{   5, 0xe0505000, 0xfdfff000 }, // sub:6:0xE2505000
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0xAA000002
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFCAA
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01017
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000009
	{  10, 0xe0802000, 0xfdf0f000 }, // add:6:0xE28D2008
	{  11, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{  12, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFBD
	{  14, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  15, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  16, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  17, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFEB1
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFC9F
	{  19, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01002
	{  20, 0xe5801000, 0xfdfff000 }, // str:4:0xE5801000
	{  21, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000D
	{  22, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0464
	{  23, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1008
	{  24, 0xe58d5000, 0xfdfff000 }, // str:4:0xE58D5000
	{  25, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE7900101
	{  26, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1004
	{  27, 0xe590c000, 0xfdfff000 }, // ldr:4:0xE590C000
	{  28, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03007
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02006
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_opendir_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF631EB
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF636DA
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00044
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF5392B
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01E1B
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F9D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4C665
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{  18, 0x05846000, 0xfdfff000 }, // str:4:0x05846004
	{  19, 0x05846000, 0xfdfff000 }, // str:4:0x05846008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF5394D
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1250
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0D09
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4C658
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5846000, 0xfdfff000 }, // str:4:0xE584600C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_openfastdir_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D43F8
	{   1, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{   3, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF631EB
	{   4, 0xe1a08000, 0xfdfff000 }, // mov:6:0xE1A08000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF636DA
	{   6, 0xe1b05000, 0xfdfff000 }, // mov:6:0xE1B05000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{   9, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD83F8
	{  10, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00044
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF5392B
	{  12, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	{  13, 0x01a01000, 0xfdfff000 }, // mov:6:0x03A01E1B
	{  14, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F9D
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4C665
	{  16, 0xe1550000, 0xfdfff000 }, // cmp:7:0xE3550004
	{  17, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE3A06000
	{  18, 0x05846000, 0xfdfff000 }, // str:4:0x05846004
	{  19, 0x05846000, 0xfdfff000 }, // str:4:0x05846008
	{  20, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  21, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00902
	{  22, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF5394D
	{  23, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01902
	{  24, 0xe9840000, 0xffff0000 }, // stm:5:0xE9840003
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1250
	{  27, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0D09
	{  28, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4C658
	{  29, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{  30, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  31, 0xe5846000, 0xfdfff000 }, // str:4:0xE584600C
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_qsort_6[] = {
	{   0, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD014
	{   2, 0xe1cd2000, 0xfdfff000 }, // bic:6:0xE1CD20F0
	{   4, 0xe1120003, 0xfdffffff }, // tst:7:0xE3120003
	{   5, 0x000f2000, 0xf00ff000 }, // ldr:8:0x059F2030
	{   6, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000002
	{   7, 0xe1120001, 0xfdffffff }, // tst:7:0xE3120001
	{   8, 0x100f2000, 0xf00ff000 }, // ldr:8:0x159F2028
	{   9, 0x000f2000, 0xf00ff000 }, // ldr:8:0x059F2028
	{  10, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2008
	{  11, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2024
	{  12, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D200C
	{  13, 0xe00f2000, 0xf00ff000 }, // ldr:8:0xE59F2020
	{  14, 0xe58d2000, 0xfdfff000 }, // str:4:0xE58D2010
	{  15, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A0200D
	{  16, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB9
	{  17, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD014
	{  18, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF004
	/* 18/19 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_reboot_fw_update_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D41F0
	{   1, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   2, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{   3, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0124
	{   4, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02028
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB032348
	{   6, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   7, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01002
	{   8, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF51218
	{  10, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{  11, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1108
	{  12, 0xe1a07000, 0xfdfff000 }, // mov:6:0xE1A07000
	{  13, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0F41
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BF4B0EA
	{  15, 0xe00f8000, 0xf00ff000 }, // ldr:8:0xE59F80F0
	{  16, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE5980004
	{  17, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  18, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000008
	{  19, 0xe5980000, 0xfdfff000 }, // ldr:4:0xE5980000
	{  21, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  22, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A000B0
	{  23, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF523A5
	{  24, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01000
	{  25, 0xe5880000, 0xfdfff000 }, // str:4:0xE5880004
	{  26, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  27, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01E44E
	{  28, 0xe5981000, 0xfdfff000 }, // ldr:4:0xE5981004
	{  29, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00007
	{  30, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB029BA1
	{  31, 0xe1b04000, 0xfdfff000 }, // mov:6:0xE1B04000
	/* 31/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_time_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4038
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F41BC
	{   3, 0xe1e00000, 0xfdfff000 }, // mvn:6:0xE3E00000
	{   4, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0000
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000007
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01001
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE9962
	{  11, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  12, 0x100f1000, 0xf00ff000 }, // ldr:8:0x159F1368
	{  13, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840000
	{  14, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F0F79
	{  15, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFE287F
	{  16, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940000
	{  17, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE99B5
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  20, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFE9A67
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A0000D
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFB4
	{  25, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  26, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000009
	{  27, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940008
	{  28, 0xe5941000, 0xfdfff000 }, // ldr:4:0xE594100C
	{  29, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  30, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800001
	{  31, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1000
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_vsprintf_6[] = {
	{   0, 0xe52de000, 0xfdfff000 }, // str:4:0xE52DE004
	{   1, 0xe04dd000, 0xfdfff000 }, // sub:6:0xE24DD01C
	{   2, 0xe58d0000, 0xfdfff000 }, // str:4:0xE58D0008
	{   3, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   4, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03002
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02001
	{   6, 0xe5cd0000, 0xfdfff000 }, // strb:4:0xE5CD0014
	{   7, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0018
	{   8, 0xe0801000, 0xfdf0f000 }, // add:6:0xE28D1004
	{   9, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFE3AE
	{  10, 0xe59d1000, 0xfdfff000 }, // ldr:4:0xE59D1008
	{  11, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{  12, 0xe5c12000, 0xfdfff000 }, // strb:4:0xE5C12000
	{  13, 0xe080d000, 0xfdf0f000 }, // add:6:0xE28DD01C
	{  14, 0xe49df000, 0xfdfff000 }, // ldr:4:0xE49DF004
	/* 15/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_MakeSDCardBootable_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   2, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02000
	{   3, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01C02
	{   4, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00002
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB006888
	{   6, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   7, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F0F60
	{   8, 0xe1a03000, 0xfdfff000 }, // mov:6:0xE1A03004
	{   9, 0xe0805000, 0xfdf0f000 }, // add:6:0xE0805385
	{  10, 0xe595c000, 0xfdfff000 }, // ldr:4:0xE595C050
	{  11, 0xe5950000, 0xfdfff000 }, // ldr:4:0xE5950038
	{  12, 0xe5951000, 0xfdfff000 }, // ldr:4:0xE5951044
	{  13, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE3A02001
	{  16, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500046
	{  18, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500041
	{  20, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500054
	{  21, 0x01a00000, 0xfdfff000 }, // mov:6:0x03A00040
	{  22, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{  24, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500046
	{  26, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500041
	{  28, 0x01500000, 0xfdfff000 }, // cmp:7:0x03500054
	{  29, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A00000A
	{  30, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00E1E
	{  31, 0xe0800000, 0xfdf0f000 }, // add:6:0xE0800004
	/* 25/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_SetFileAttributes_6[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05000
	{   3, 0xe1a06000, 0xfdfff000 }, // mov:6:0xE1A06001
	{   4, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE3A04000
	{   5, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB01099D
	{   6, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   7, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A00000A
	{   8, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE1A01006
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB003370
	{  11, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000005
	{  13, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00005
	{  14, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB010282
	{  15, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  16, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{  17, 0x01a00000, 0xfdfff000 }, // mov:6:0x01A00005
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0B0101EE
	{  19, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  20, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8070
	/* 20/21 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_PT_PlaySound_7[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4070
	{   1, 0xe1100901, 0xfdffffff }, // tst:7:0xE3100901
	{   2, 0xe1a05000, 0xfdfff000 }, // mov:6:0xE1A05001
	{   3, 0xe1a04000, 0xfdfff000 }, // mov:6:0xE1A04000
	{   4, 0x0a000000, 0x0f000000 }, // b, bl:3:0x0A000007
	{   5, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{   6, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{   7, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF2C
	{   9, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  10, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  11, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F11A4
	{  12, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA00000E
	{  13, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE51F008C
	{  14, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900004
	{  15, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500001
	{  16, 0x11a01000, 0xfdfff000 }, // mov:6:0x13A01F7D
	{  17, 0x100f0000, 0xf00ff000 }, // sub:10:0x124F0098
	{  18, 0x0b000000, 0x0f000000 }, // b, bl:3:0x1BFEC0A0
	{  19, 0xe1140a02, 0xfdffffff }, // tst:7:0xE3140A02
	{  20, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  21, 0xe1a02000, 0xfdfff000 }, // mov:6:0xE1A02005
	{  22, 0xe1a01000, 0xfdfff000 }, // mov:6:0xE3A01000
	{  23, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE1A00004
	{  24, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFF5A
	{  25, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{  26, 0x08bd0000, 0xffff0000 }, // ldm:5:0x08BD8070
	{  27, 0xe00f1000, 0xf00ff000 }, // ldr:8:0xE59F1168
	{  28, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4070
	{  29, 0xe00f0000, 0xf00ff000 }, // sub:10:0xE24F00C8
	{  30, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFEC094
	{  31, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	/* 32/32 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenUnlock_7[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE59F4088
	{   2, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940020
	{   3, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F1080
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F0080
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFA4C49
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00007F
	{   8, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   9, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFB91
	{  11, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  13, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFA4AE3
	/* 14/14 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenLock_8[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000CF
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F47E0
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940028
	{   6, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{   7, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840028
	{   8, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000D8
	{   9, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF8CF4C
	{  11, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  12, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 13/13 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenUnlock_8[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000A6
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F4884
	{   5, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940028
	{   6, 0xe0400000, 0xfdfff000 }, // sub:6:0xE2400001
	{   7, 0xe1500000, 0xfdfff000 }, // cmp:7:0xE3500000
	{   8, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840028
	{   9, 0x0a000000, 0x0f000000 }, // b, bl:3:0x1A000001
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFFD8
	{  11, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEA000001
	{  12, 0xb1a00000, 0xfdfff000 }, // mov:6:0xB3A00000
	{  13, 0xb5840000, 0xfdfff000 }, // str:4:0xB5840028
	{  14, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  16, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAF8CF1D
	/* 17/17 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenUnlock_9[] = {
	{   0, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F00B4
	{   1, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   2, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE5900000
	{   3, 0xe1700001, 0xfdffffff }, // cmn:7:0xE3700001
	{   4, 0x000f1000, 0xf00ff000 }, // ldr:8:0x059F10A8
	{   5, 0x000f0000, 0xf00ff000 }, // add:10:0x028F00A8
	{   6, 0x0b000000, 0x0f000000 }, // b, bl:3:0x0BFD9B29
	{   7, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000AB
	{   8, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   9, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB0000B8
	{  11, 0xe00f0000, 0xf00ff000 }, // ldr:8:0xE59F0084
	{  12, 0xe5900000, 0xfdfff000 }, // ldr:4:0xE590000C
	{  13, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD4010
	{  14, 0x0a000000, 0x0f000000 }, // b, bl:3:0xEAFE0A3C
	/* 15/15 */
	{ -1, -1, -1 },
};

static FuncSig func_sig_ScreenLock_10[] = {
	{   0, 0xe92d0000, 0xffff0000 }, // stm:5:0xE92D4010
	{   1, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEB00006F
	{   2, 0xe1100001, 0xfdffffff }, // tst:7:0xE3100001
	{   3, 0x18bd0000, 0xffff0000 }, // ldm:5:0x18BD8010
	{   4, 0xe00f4000, 0xf00ff000 }, // ldr:8:0xE51F47E0
	{   5, 0xe00f1000, 0xf00ff000 }, // add:10:0xE28F1F7B
	{   6, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE5940020
	{   7, 0xe0800000, 0xfdf0f000 }, // add:6:0xE2800001
	{   8, 0xe5840000, 0xfdfff000 }, // str:4:0xE5840020
	{   9, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00060
	{  10, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFABF6E
	{  11, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBFFFA06
	{  12, 0xe5940000, 0xfdfff000 }, // ldr:4:0xE594000C
	{  13, 0x0b000000, 0x0f000000 }, // b, bl:3:0xEBF9990D
	{  14, 0xe1a00000, 0xfdfff000 }, // mov:6:0xE3A00000
	{  15, 0xe8bd0000, 0xffff0000 }, // ldm:5:0xE8BD8010
	/* 16/16 */
	{ -1, -1, -1 },
};

FuncsList func_list[] = {
	{ "AllocateMemory", func_sig_AllocateMemory_1, 1 },
	{ "AllocateMemory", func_sig_AllocateMemory_2, 2 },
	{ "AllocateUncacheableMemory", func_sig_AllocateUncacheableMemory_1, 1 },
	{ "AllocateUncacheableMemory", func_sig_AllocateUncacheableMemory_3, 3 },
	{ "Close", func_sig_Close_1, 1 },
	{ "Close", func_sig_Close_3, 3 },
	{ "CreateJumptable", func_sig_CreateJumptable_1, 1 },
	{ "CreateTask", func_sig_CreateTask_1, 1 },
	{ "DebugAssert", func_sig_DebugAssert_4, 4 },
	{ "DeleteDirectory_Fut", func_sig_DeleteDirectory_Fut_1, 1 },
	{ "DeleteFile_Fut", func_sig_DeleteFile_Fut_1, 1 },
	{ "DoAFLock", func_sig_DoAFLock_4, 4 },
	{ "EnterToCompensationEVF", func_sig_EnterToCompensationEVF_2, 2 },
	{ "ExecuteEventProcedure", func_sig_ExecuteEventProcedure_1, 1 },
	{ "ExecuteEventProcedure", func_sig_ExecuteEventProcedure_2, 2 },
	{ "ExitFromCompensationEVF", func_sig_ExitFromCompensationEVF_2, 2 },
	{ "ExitTask", func_sig_ExitTask_1, 1 },
	{ "ExpCtrlTool_StartContiAE", func_sig_ExpCtrlTool_StartContiAE_1, 1 },
	{ "ExpCtrlTool_StopContiAE", func_sig_ExpCtrlTool_StopContiAE_1, 1 },
	{ "Fclose_Fut", func_sig_Fclose_Fut_1, 1 },
	{ "Feof_Fut", func_sig_Feof_Fut_1, 1 },
	{ "Fflush_Fut", func_sig_Fflush_Fut_1, 1 },
	{ "Fgets_Fut", func_sig_Fgets_Fut_1, 1 },
	{ "Fgets_Fut", func_sig_Fgets_Fut_6, 6 },
	{ "Fopen_Fut", func_sig_Fopen_Fut_1, 1 },
	{ "Fread_Fut", func_sig_Fread_Fut_1, 1 },
	{ "FreeMemory", func_sig_FreeMemory_1, 1 },
	{ "FreeMemory", func_sig_FreeMemory_2, 2 },
	{ "FreeUncacheableMemory", func_sig_FreeUncacheableMemory_1, 1 },
	{ "Fseek_Fut", func_sig_Fseek_Fut_1, 1 },
	{ "Fwrite_Fut", func_sig_Fwrite_Fut_1, 1 },
	{ "GetBatteryTemperature", func_sig_GetBatteryTemperature_2, 2 },
	{ "GetCCDTemperature", func_sig_GetCCDTemperature_2, 2 },
	{ "GetCurrentAvValue", func_sig_GetCurrentAvValue_1, 1 },
	{ "GetCurrentAvValue", func_sig_GetCurrentAvValue_2, 2 },
	{ "GetDrive_ClusterSize", func_sig_GetDrive_ClusterSize_1, 1 },
	{ "GetDrive_ClusterSize", func_sig_GetDrive_ClusterSize_3, 3 },
	{ "GetDrive_ClusterSize", func_sig_GetDrive_ClusterSize_4, 4 },
	{ "GetDrive_ClusterSize", func_sig_GetDrive_ClusterSize_5, 5 },
	{ "GetDrive_ClusterSize", func_sig_GetDrive_ClusterSize_6, 6 },
	{ "GetDrive_FreeClusters", func_sig_GetDrive_FreeClusters_1, 1 },
	{ "GetDrive_FreeClusters", func_sig_GetDrive_FreeClusters_3, 3 },
	{ "GetDrive_FreeClusters", func_sig_GetDrive_FreeClusters_4, 4 },
	{ "GetDrive_FreeClusters", func_sig_GetDrive_FreeClusters_5, 5 },
	{ "GetDrive_FreeClusters", func_sig_GetDrive_FreeClusters_6, 6 },
	{ "GetDrive_TotalClusters", func_sig_GetDrive_TotalClusters_1, 1 },
	{ "GetDrive_TotalClusters", func_sig_GetDrive_TotalClusters_3, 3 },
	{ "GetDrive_TotalClusters", func_sig_GetDrive_TotalClusters_5, 5 },
	{ "GetDrive_TotalClusters", func_sig_GetDrive_TotalClusters_6, 6 },
	{ "GetFocusLensSubjectDistance", func_sig_GetFocusLensSubjectDistance_1, 1 },
	{ "GetFocusLensSubjectDistanceFromLens", func_sig_GetFocusLensSubjectDistanceFromLens_1, 1 },
	{ "GetFocusLensSubjectDistanceFromLens", func_sig_GetFocusLensSubjectDistanceFromLens_3, 3 },
	{ "GetFocusLensSubjectDistanceFromLens", func_sig_GetFocusLensSubjectDistanceFromLens_4, 4 },
	{ "GetImageFolder", func_sig_GetImageFolder_4, 4 },
	{ "GetImageFolder", func_sig_GetImageFolder_6, 6 },
	{ "GetKbdState", func_sig_GetKbdState_4, 4 },
	{ "GetMemInfo", func_sig_GetMemInfo_1, 1 },
	{ "GetMemInfo", func_sig_GetMemInfo_3, 3 },
	{ "GetOpticalTemperature", func_sig_GetOpticalTemperature_2, 2 },
	{ "GetOpticalTemperature", func_sig_GetOpticalTemperature_3, 3 },
	{ "GetParameterData", func_sig_GetParameterData_1, 1 },
	{ "GetPropertyCase", func_sig_GetPropertyCase_1, 1 },
	{ "GetPropertyCase", func_sig_GetPropertyCase_5, 5 },
	{ "GetSystemTime", func_sig_GetSystemTime_1, 1 },
	{ "GetSystemTime", func_sig_GetSystemTime_2, 2 },
	{ "GetVRAMHPixelsSize", func_sig_GetVRAMHPixelsSize_1, 1 },
	{ "GetVRAMVPixelsSize", func_sig_GetVRAMVPixelsSize_1, 1 },
	{ "GetZoomLensCurrentPoint", func_sig_GetZoomLensCurrentPoint_1, 1 },
	{ "GetZoomLensCurrentPosition", func_sig_GetZoomLensCurrentPosition_1, 1 },
	{ "GetZoomLensCurrentPosition", func_sig_GetZoomLensCurrentPosition_2, 2 },
	{ "GiveSemaphore", func_sig_GiveSemaphore_4, 4 },
	{ "IsStrobeChargeCompleted", func_sig_IsStrobeChargeCompleted_1, 1 },
	{ "LEDDrive", func_sig_LEDDrive_4, 4 },
	{ "LocalTime", func_sig_LocalTime_1, 1 },
	{ "LocalTime", func_sig_LocalTime_6, 6 },
	{ "LockMainPower", func_sig_LockMainPower_1, 1 },
	{ "Lseek", func_sig_Lseek_1, 1 },
	{ "MakeDirectory_Fut", func_sig_MakeDirectory_Fut_1, 1 },
	{ "MakeDirectory_Fut", func_sig_MakeDirectory_Fut_6, 6 },
	{ "MakeSDCardBootable", func_sig_MakeSDCardBootable_6, 6 },
	{ "MoveFocusLensToDistance", func_sig_MoveFocusLensToDistance_1, 1 },
	{ "MoveIrisWithAv", func_sig_MoveIrisWithAv_4, 4 },
	{ "MoveZoomLensWithPoint", func_sig_MoveZoomLensWithPoint_1, 1 },
	{ "NewTaskShell", func_sig_NewTaskShell_1, 1 },
	{ "Open", func_sig_Open_1, 1 },
	{ "Open", func_sig_Open_3, 3 },
	{ "PB2Rec", func_sig_PB2Rec_1, 1 },
	{ "PB2Rec", func_sig_PB2Rec_3, 3 },
	{ "PT_MoveDigitalZoomToWide", func_sig_PT_MoveDigitalZoomToWide_4, 4 },
	{ "PT_MoveOpticalZoomAt", func_sig_PT_MoveOpticalZoomAt_4, 4 },
	{ "PT_PlaySound", func_sig_PT_PlaySound_2, 2 },
	{ "PT_PlaySound", func_sig_PT_PlaySound_4, 4 },
	{ "PT_PlaySound", func_sig_PT_PlaySound_6, 6 },
	{ "PT_PlaySound", func_sig_PT_PlaySound_7, 7 },
	{ "PostLogicalEventForNotPowerType", func_sig_PostLogicalEventForNotPowerType_1, 1 },
	{ "PostLogicalEventForNotPowerType", func_sig_PostLogicalEventForNotPowerType_2, 2 },
	{ "PostLogicalEventToUI", func_sig_PostLogicalEventToUI_1, 1 },
	{ "PostLogicalEventToUI", func_sig_PostLogicalEventToUI_2, 2 },
	{ "PutInNdFilter", func_sig_PutInNdFilter_4, 4 },
	{ "PutOutNdFilter", func_sig_PutOutNdFilter_4, 4 },
	{ "Read", func_sig_Read_1, 1 },
	{ "ReadFastDir", func_sig_ReadFastDir_1, 1 },
	{ "ReadFastDir", func_sig_ReadFastDir_3, 3 },
	{ "ReadFastDir", func_sig_ReadFastDir_4, 4 },
	{ "ReadFastDir", func_sig_ReadFastDir_6, 6 },
	{ "Rec2PB", func_sig_Rec2PB_1, 1 },
	{ "Rec2PB", func_sig_Rec2PB_3, 3 },
	{ "RefreshPhysicalScreen", func_sig_RefreshPhysicalScreen_1, 1 },
	{ "Remove", func_sig_Remove_1, 1 },
	{ "Remove", func_sig_Remove_4, 4 },
	{ "Remove", func_sig_Remove_6, 6 },
	{ "RenameFile_Fut", func_sig_RenameFile_Fut_1, 1 },
	{ "RenameFile_Fut", func_sig_RenameFile_Fut_4, 4 },
	{ "RenameFile_Fut", func_sig_RenameFile_Fut_6, 6 },
	{ "Restart", func_sig_Restart_1, 1 },
	{ "Restart", func_sig_Restart_3, 3 },
	{ "ScreenLock", func_sig_ScreenLock_10, 10 },
	{ "ScreenLock", func_sig_ScreenLock_3, 3 },
	{ "ScreenLock", func_sig_ScreenLock_4, 4 },
	{ "ScreenLock", func_sig_ScreenLock_8, 8 },
	{ "ScreenUnlock", func_sig_ScreenUnlock_3, 3 },
	{ "ScreenUnlock", func_sig_ScreenUnlock_4, 4 },
	{ "ScreenUnlock", func_sig_ScreenUnlock_7, 7 },
	{ "ScreenUnlock", func_sig_ScreenUnlock_8, 8 },
	{ "ScreenUnlock", func_sig_ScreenUnlock_9, 9 },
	{ "SetAE_ShutterSpeed", func_sig_SetAE_ShutterSpeed_1, 1 },
	{ "SetAutoShutdownTime", func_sig_SetAutoShutdownTime_1, 1 },
	{ "SetCurrentCaptureModeType", func_sig_SetCurrentCaptureModeType_1, 1 },
	{ "SetFileAttributes", func_sig_SetFileAttributes_1, 1 },
	{ "SetFileAttributes", func_sig_SetFileAttributes_3, 3 },
	{ "SetFileAttributes", func_sig_SetFileAttributes_6, 6 },
	{ "SetFileTimeStamp", func_sig_SetFileTimeStamp_1, 1 },
	{ "SetFileTimeStamp", func_sig_SetFileTimeStamp_3, 3 },
	{ "SetFileTimeStamp", func_sig_SetFileTimeStamp_4, 4 },
	{ "SetFileTimeStamp", func_sig_SetFileTimeStamp_6, 6 },
	{ "SetLogicalEventActive", func_sig_SetLogicalEventActive_1, 1 },
	{ "SetParameterData", func_sig_SetParameterData_1, 1 },
	{ "SetPropertyCase", func_sig_SetPropertyCase_1, 1 },
	{ "SetScriptMode", func_sig_SetScriptMode_1, 1 },
	{ "SleepTask", func_sig_SleepTask_1, 1 },
	{ "TakeSemaphore", func_sig_TakeSemaphore_1, 1 },
	{ "TurnOffBackLight", func_sig_TurnOffBackLight_1, 1 },
	{ "TurnOnBackLight", func_sig_TurnOnBackLight_1, 1 },
	{ "UIFS_WriteFirmInfoToFile", func_sig_UIFS_WriteFirmInfoToFile_1, 1 },
	{ "UnlockAF", func_sig_UnlockAF_4, 4 },
	{ "UnlockMainPower", func_sig_UnlockMainPower_1, 1 },
	{ "UnsetZoomForMovie", func_sig_UnsetZoomForMovie_1, 1 },
	{ "UpdateMBROnFlash", func_sig_UpdateMBROnFlash_1, 1 },
	{ "UpdateMBROnFlash", func_sig_UpdateMBROnFlash_3, 3 },
	{ "VbattGet", func_sig_VbattGet_1, 1 },
	{ "VbattGet", func_sig_VbattGet_3, 3 },
	{ "Write", func_sig_Write_1, 1 },
	{ "Write", func_sig_Write_3, 3 },
	{ "WriteSDCard", func_sig_WriteSDCard_4, 4 },
	{ "_log", func_sig__log_1, 1 },
	{ "_log10", func_sig__log10_1, 1 },
	{ "_pow", func_sig__pow_1, 1 },
	{ "_sqrt", func_sig__sqrt_1, 1 },
	{ "_sqrt", func_sig__sqrt_6, 6 },
	{ "add_ptp_handler", func_sig_add_ptp_handler_1, 1 },
	{ "add_ptp_handler", func_sig_add_ptp_handler_3, 3 },
	{ "add_ptp_handler", func_sig_add_ptp_handler_6, 6 },
	{ "apex2us", func_sig_apex2us_4, 4 },
	{ "close", func_sig_close_1, 1 },
	{ "close", func_sig_close_6, 6 },
	{ "closedir", func_sig_closedir_1, 1 },
	{ "closedir", func_sig_closedir_3, 3 },
	{ "closedir", func_sig_closedir_4, 4 },
	{ "err_init_task", func_sig_err_init_task_4, 4 },
	{ "exmem_alloc", func_sig_exmem_alloc_1, 1 },
	{ "free", func_sig_free_1, 1 },
	{ "free", func_sig_free_3, 3 },
	{ "kbd_p1_f", func_sig_kbd_p1_f_1, 1 },
	{ "kbd_p1_f", func_sig_kbd_p1_f_6, 6 },
	{ "kbd_p1_f_cont", func_sig_kbd_p1_f_cont_1, 1 },
	{ "kbd_p2_f", func_sig_kbd_p2_f_1, 1 },
	{ "kbd_p2_f", func_sig_kbd_p2_f_3, 3 },
	{ "kbd_p2_f", func_sig_kbd_p2_f_6, 6 },
	{ "kbd_pwr_off", func_sig_kbd_pwr_off_1, 1 },
	{ "kbd_pwr_off", func_sig_kbd_pwr_off_2, 2 },
	{ "kbd_pwr_on", func_sig_kbd_pwr_on_1, 1 },
	{ "kbd_pwr_on", func_sig_kbd_pwr_on_2, 2 },
	{ "kbd_read_keys", func_sig_kbd_read_keys_1, 1 },
	{ "kbd_read_keys", func_sig_kbd_read_keys_3, 3 },
	{ "kbd_read_keys_r2", func_sig_kbd_read_keys_r2_1, 1 },
	{ "kbd_read_keys_r2", func_sig_kbd_read_keys_r2_3, 3 },
	{ "lseek", func_sig_lseek_1, 1 },
	{ "lseek", func_sig_lseek_3, 3 },
	{ "malloc", func_sig_malloc_1, 1 },
	{ "malloc", func_sig_malloc_3, 3 },
	{ "memcmp", func_sig_memcmp_1, 1 },
	{ "memcpy", func_sig_memcpy_1, 1 },
	{ "memset", func_sig_memset_1, 1 },
	{ "mkdir", func_sig_mkdir_1, 1 },
	{ "mkdir", func_sig_mkdir_3, 3 },
	{ "mkdir", func_sig_mkdir_4, 4 },
	{ "mkdir", func_sig_mkdir_6, 6 },
	{ "mktime_ext", func_sig_mktime_ext_1, 1 },
	{ "open", func_sig_open_1, 1 },
	{ "open", func_sig_open_6, 6 },
	{ "opendir", func_sig_opendir_1, 1 },
	{ "opendir", func_sig_opendir_3, 3 },
	{ "opendir", func_sig_opendir_4, 4 },
	{ "opendir", func_sig_opendir_6, 6 },
	{ "openfastdir", func_sig_openfastdir_1, 1 },
	{ "openfastdir", func_sig_openfastdir_3, 3 },
	{ "openfastdir", func_sig_openfastdir_4, 4 },
	{ "openfastdir", func_sig_openfastdir_6, 6 },
	{ "qsort", func_sig_qsort_1, 1 },
	{ "qsort", func_sig_qsort_3, 3 },
	{ "qsort", func_sig_qsort_4, 4 },
	{ "qsort", func_sig_qsort_6, 6 },
	{ "rand", func_sig_rand_1, 1 },
	{ "rand", func_sig_rand_4, 4 },
	{ "rand", func_sig_rand_6, 6 },
	{ "read", func_sig_read_1, 1 },
	{ "reboot_fw_update", func_sig_reboot_fw_update_1, 1 },
	{ "reboot_fw_update", func_sig_reboot_fw_update_4, 4 },
	{ "reboot_fw_update", func_sig_reboot_fw_update_5, 5 },
	{ "reboot_fw_update", func_sig_reboot_fw_update_6, 6 },
	{ "rename", func_sig_rename_1, 1 },
	{ "rename", func_sig_rename_4, 4 },
	{ "rename", func_sig_rename_6, 6 },
	{ "set_control_event", func_sig_set_control_event_1, 1 },
	{ "set_control_event", func_sig_set_control_event_6, 6 },
	{ "srand", func_sig_srand_1, 1 },
	{ "srand", func_sig_srand_4, 4 },
	{ "srand", func_sig_srand_6, 6 },
	{ "stat", func_sig_stat_1, 1 },
	{ "stat", func_sig_stat_3, 3 },
	{ "strcat", func_sig_strcat_1, 1 },
	{ "strchr", func_sig_strchr_1, 1 },
	{ "strcmp", func_sig_strcmp_1, 1 },
	{ "strcmp", func_sig_strcmp_3, 3 },
	{ "strcpy", func_sig_strcpy_1, 1 },
	{ "strcpy", func_sig_strcpy_2, 2 },
	{ "strcpy", func_sig_strcpy_3, 3 },
	{ "strftime", func_sig_strftime_1, 1 },
	{ "strlen", func_sig_strlen_1, 1 },
	{ "strlen", func_sig_strlen_3, 3 },
	{ "strncmp", func_sig_strncmp_1, 1 },
	{ "strncpy", func_sig_strncpy_1, 1 },
	{ "strrchr", func_sig_strrchr_1, 1 },
	{ "strtol", func_sig_strtol_1, 1 },
	{ "strtolx", func_sig_strtolx_1, 1 },
	{ "task_CaptSeq", func_sig_task_CaptSeq_4, 4 },
	{ "task_ExpDrv", func_sig_task_ExpDrv_4, 4 },
	{ "task_InitFileModules", func_sig_task_InitFileModules_4, 4 },
	{ "task_MovieRecord", func_sig_task_MovieRecord_4, 4 },
	{ "task_PhySw", func_sig_task_PhySw_4, 4 },
	{ "task_RotaryEncoder", func_sig_task_RotaryEncoder_4, 4 },
	{ "time", func_sig_time_1, 1 },
	{ "time", func_sig_time_2, 2 },
	{ "time", func_sig_time_6, 6 },
	{ "vsprintf", func_sig_vsprintf_1, 1 },
	{ "vsprintf", func_sig_vsprintf_4, 4 },
	{ "vsprintf", func_sig_vsprintf_6, 6 },
	{ "write", func_sig_write_1, 1 },
	{ NULL }
};
