PATCH_BEGIN("D2Game.dll", 0xec2509e8)

/* TODO: 0x37FC2, 0x37FDF, 0xD4171 */

PATCH(0x175F, 0xEB, 0x2B /* jmp short 0x178C */)
PATCH_REL(0x179C, div64_clamp32)

PATCH(0x37D29, 0xEB, 0x0D /* jmp short 0x37D38 */)
PATCH_REL(0x37D43, div64_clamp32)
PATCH(0x37DBB, 0xEB, 0x0D /* jmp short 0x37DCA */)
PATCH_REL(0x37DD5, div64_clamp32)
PATCH(0x37E7C, 0xEB, 0x13 /* jmp short 0x37E91 */)
PATCH_REL(0x37E9C, div64_clamp32)
PATCH(0x37F0A, 0xEB, 0x13 /* jmp short 0x37F1F */)
PATCH_REL(0x37F2A, div64_clamp32)

PATCH(0x3E219, 0xEB, 0x3D /* jmp short 0x3E258 */)
PATCH_REL(0x3E263, div64_clamp32)

PATCH(0x42AE4, 0xEB, 0x12 /* jmp short 0x42AF8 */)
PATCH_REL(0x42B0D, div64_clamp32)

PATCH(0x4926D, 0xEB, 0x13 /* jmp short 0x49282 */)
PATCH_REL(0x4928B, div64_clamp32)

PATCH(0x53688, 0xEB, 0x10 /* jmp short 0x5369A */)
PATCH_REL(0x536AF, div64_clamp32)

PATCH(0x559CA, 0xEB, 0x3A /* jmp short 0x55A06 */)
PATCH_REL(0x55A11, div64_clamp32)
PATCH(0x55ABF, 0xEB, 0x09 /* jmp short 0x55ACA */)
PATCH_REL(0x55AE2, div64_clamp32)

PATCH(0x5FAC8, 0xEB, 0x3C /* jmp short 0x5FB06 */)
PATCH_REL(0x5FB11, div64_clamp32)

PATCH(0x60C34, 0xEB, 0x13 /* jmp short 0x60C49 */)
PATCH_REL(0x60C54, div64_clamp32)

PATCH(0x78787, 0xEB, 0x12 /* jmp short 0x7879B */)
PATCH_REL(0x787A6, div64_clamp32)

PATCH(0x793A8, 0xEB, 0x12 /* jmp short 0x793BC */)
PATCH_REL(0x793C7, div64_clamp32)
PATCH(0x79437, 0xEB, 0x13 /* jmp short 0x7944C */)
PATCH_REL(0x79457, div64_clamp32)

PATCH(0x796AA, 0xEB, 0x13 /* jmp short 0x796BF */)
PATCH_REL(0x796CA, div64_clamp32)
PATCH(0x79755, 0xEB, 0x13 /* jmp short 0x7976A */)
PATCH_REL(0x79775, div64_clamp32)
PATCH(0x79800, 0xEB, 0x13 /* jmp short 0x79815 */)
PATCH_REL(0x79820, div64_clamp32)
PATCH(0x798AB, 0xEB, 0x13 /* jmp short 0x798C0 */)
PATCH_REL(0x798CB, div64_clamp32)

PATCH(0x79BE7, 0xEB, 0x0D /* jmp short 0x79BF6 */)
PATCH_REL(0x79C04, div64_clamp32)

PATCH(0x87EC3, 0xEB, 0x12 /* jmp short 0x87ED7 */)
PATCH_REL(0x87EEC, div64_clamp32)

PATCH(0x9C1E8, 0xEB, 0x4F /* jmp short 0x9C239 */)
PATCH_REL(0x9C244, div64_clamp32)

PATCH(0xD3B49, 0xEB, 0x10 /* jmp short 0xD3B5B */)
PATCH_REL(0xD3B66, div64_clamp32)
PATCH(0xD3BF8, 0xEB, 0x0C /* jmp short 0xD3C06 */)
PATCH_REL(0xD3C11, div64_clamp32)

/**/
PATCH_ORIG(0x175F, 0x81, 0xFF)
PATCH_ORIG(0x179C, 0xD0, 0x26, 0x0F, 0x00)
PATCH_ORIG(0x37D29, 0x7E, 0x34)
PATCH_ORIG(0x37D43, 0x29, 0xC1, 0x0B, 0x00)
PATCH_ORIG(0x37DBB, 0x7E, 0x34)
PATCH_ORIG(0x37DD5, 0x97, 0xC0, 0x0B, 0x00)
PATCH_ORIG(0x37E7C, 0x81, 0xFD)
PATCH_ORIG(0x37E9C, 0xD0, 0xBF, 0x0B, 0x00)
PATCH_ORIG(0x37F0A, 0x81, 0xFB)
PATCH_ORIG(0x37F2A, 0x42, 0xBF, 0x0B, 0x00)
PATCH_ORIG(0x3E219, 0x81, 0xFE)
PATCH_ORIG(0x3E263, 0x09, 0x5C, 0x0B, 0x00)
PATCH_ORIG(0x42AE4, 0x81, 0xFE)
PATCH_ORIG(0x42B0D, 0x5F, 0x13, 0x0B, 0x00)
PATCH_ORIG(0x4926D, 0x81, 0xFE)
PATCH_ORIG(0x4928B, 0xE1, 0xAB, 0x0A, 0x00)
PATCH_ORIG(0x53688, 0x81, 0xFE)
PATCH_ORIG(0x536AF, 0xBD, 0x07, 0x0A, 0x00)
PATCH_ORIG(0x559CA, 0x7E, 0x25)
PATCH_ORIG(0x55A11, 0x5B, 0xE4, 0x09, 0x00)
PATCH_ORIG(0x55ABF, 0x7E, 0x2F)
PATCH_ORIG(0x55AE2, 0x8A, 0xE3, 0x09, 0x00)
PATCH_ORIG(0x5FAC8, 0x7E, 0x27)
PATCH_ORIG(0x5FB11, 0x5B, 0x43, 0x09, 0x00)
PATCH_ORIG(0x60C34, 0x81, 0xF9)
PATCH_ORIG(0x60C54, 0x18, 0x32, 0x09, 0x00)
PATCH_ORIG(0x78787, 0x81, 0xFE)
PATCH_ORIG(0x787A6, 0xC6, 0xB6, 0x07, 0x00)
PATCH_ORIG(0x793A8, 0x81, 0xFF)
PATCH_ORIG(0x793C7, 0xA5, 0xAA, 0x07, 0x00)
PATCH_ORIG(0x79437, 0x81, 0xFE)
PATCH_ORIG(0x79457, 0x15, 0xAA, 0x07, 0x00)
PATCH_ORIG(0x796AA, 0x81, 0xF9)
PATCH_ORIG(0x796CA, 0xA2, 0xA7, 0x07, 0x00)
PATCH_ORIG(0x79755, 0x81, 0xF9)
PATCH_ORIG(0x79775, 0xF7, 0xA6, 0x07, 0x00)
PATCH_ORIG(0x79800, 0x81, 0xF9)
PATCH_ORIG(0x79820, 0x4C, 0xA6, 0x07, 0x00)
PATCH_ORIG(0x798AB, 0x81, 0xF9)
PATCH_ORIG(0x798CB, 0xA1, 0xA5, 0x07, 0x00)
PATCH_ORIG(0x79BE7, 0x7E, 0x3D)
PATCH_ORIG(0x79C04, 0x68, 0xA2, 0x07, 0x00)
PATCH_ORIG(0x87EC3, 0x81, 0xF9)
PATCH_ORIG(0x87EEC, 0x80, 0xBF, 0x06, 0x00)
PATCH_ORIG(0x9C1E8, 0x81, 0xFE)
PATCH_ORIG(0x9C244, 0x28, 0x7C, 0x05, 0x00)
PATCH_ORIG(0xD3B49, 0x81, 0xF9)
PATCH_ORIG(0xD3B66, 0x06, 0x03, 0x02, 0x00)
PATCH_ORIG(0xD3BF8, 0x7E, 0x35)
PATCH_ORIG(0xD3C11, 0x5B, 0x02, 0x02, 0x00)

PATCH_END()
