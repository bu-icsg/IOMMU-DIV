# CS_ARCH_RISCV, CS_MODE_RISCV64, None
0x13,0x04,0xa8,0x7a = addi s0, a6, 0x7aa
0x1b,0x8e,0xaa,0x2a = addiw t3, s5, 0x2aa
0x2f,0xbe,0xaa,0x0a = amoswap.d.rl t3, a0, (s5)
0x3b,0x00,0x31,0x02 = mulw zero, sp, gp
0x53,0xa0,0x31,0xd0 = fcvt.s.lu ft0, gp, rdn
0x53,0x81,0x01,0xf2 = fmv.d.x ft2, gp 

