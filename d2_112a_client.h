PATCH_BEGIN("D2Client.dll", 0x8a620d68)

PATCH(0x18DF, 0xEB, 0x2B /* jmp short 0x190C */)
PATCH_REL(0x191C, div64_clamp32)

PATCH(0x24CC5, 0xEB, 0x0B /* jmp short 0x24CD2 */)
PATCH_REL(0x24CE7, div64_clamp32)

PATCH(0x42F94, 0xEB, 0x13 /* jmp short 0x42FA9 */)
PATCH_REL(0x42FB4, div64_clamp32)
PATCH(0x4302A, 0xEB, 0x13 /* jmp short 0x4303F */)
PATCH_REL(0x4304A, div64_clamp32)

PATCH(0x444F3, 0xEB, 0x13 /* jmp short 0x44508 */)
PATCH_REL(0x44513, div64_clamp32)
PATCH(0x44581, 0xEB, 0x3E /* jmp short 0x445C1 */)
PATCH_REL(0x445CC, div64_clamp32)

PATCH(0x44971, 0xEB, 0x12 /* jmp short 0x44985 */)
PATCH_REL(0x44990, div64_clamp32)
PATCH(0x44A0B, 0xEB, 0x3E /* jmp short 0x44A4B */)
PATCH_REL(0x44A56, div64_clamp32)

PATCH(0x46DC1, 0xEB, 0x13 /* jmp short 0x46DD6 */)
PATCH_REL(0x46DDF, div64_clamp32)
PATCH(0x46E4D, 0xEB, 0x13 /* jmp short 0x46E62 */)
PATCH_REL(0x46E6D, div64_clamp32)
PATCH(0x46F5A, 0xEB, 0x13 /* jmp short 0x46F6F */)
PATCH_REL(0x46F78, div64_clamp32)
PATCH(0x46FE6, 0xEB, 0xD3 /* jmp short 0x46FBB */)
PATCH_REL(0x47006, div64_clamp32)

/**/
PATCH_ORIG(0x18DF, 0x81, 0xFF)
PATCH_ORIG(0x191C, 0x10, 0x8E, 0x0C, 0x00)
PATCH_ORIG(0x24CC5, 0x7E, 0x40)
PATCH_ORIG(0x24CE7, 0x45, 0x5A, 0x0A, 0x00)
PATCH_ORIG(0x42F94, 0x81, 0xFE)
PATCH_ORIG(0x42FB4, 0x78, 0x77, 0x08, 0x00)
PATCH_ORIG(0x4302A, 0x81, 0xFF)
PATCH_ORIG(0x4304A, 0xE2, 0x76, 0x08, 0x00)
PATCH_ORIG(0x444F3, 0x81, 0xFB)
PATCH_ORIG(0x44513, 0x19, 0x62, 0x08, 0x00)
PATCH_ORIG(0x44581, 0x81, 0xFD)
PATCH_ORIG(0x445CC, 0x60, 0x61, 0x08, 0x00)
PATCH_ORIG(0x44971, 0x81, 0xFA)
PATCH_ORIG(0x44990, 0x9C, 0x5D, 0x08, 0x00)
PATCH_ORIG(0x44A0B, 0x81, 0xF9)
PATCH_ORIG(0x44A56, 0xD6, 0x5C, 0x08, 0x00)
PATCH_ORIG(0x46DC1, 0x81, 0xFF)
PATCH_ORIG(0x46DDF, 0x4D, 0x39, 0x08, 0x00)
PATCH_ORIG(0x46E4D, 0x81, 0xFB)
PATCH_ORIG(0x46E6D, 0xBF, 0x38, 0x08, 0x00)
PATCH_ORIG(0x46F5A, 0x81, 0xFB)
PATCH_ORIG(0x46F78, 0xB4, 0x37, 0x08, 0x00)
PATCH_ORIG(0x46FE6, 0x81, 0xFF)
PATCH_ORIG(0x47006, 0x26, 0x37, 0x08, 0x00)

PATCH_END()
