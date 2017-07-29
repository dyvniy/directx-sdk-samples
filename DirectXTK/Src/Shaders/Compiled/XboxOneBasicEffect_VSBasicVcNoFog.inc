#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0     NONE   float   xyzw
// COLOR                    0   xyzw        1     NONE   float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// SV_Position              0   xyzw        1      POS   float   xyzw
//
vs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[26], immediateIndexed
dcl_input v0.xyzw
dcl_input v1.xyzw
dcl_output o0.xyzw
dcl_output_siv o1.xyzw, position
mul o0.xyzw, v1.xyzw, cb0[0].xyzw
dp4 o1.x, v0.xyzw, cb0[22].xyzw
dp4 o1.y, v0.xyzw, cb0[23].xyzw
dp4 o1.z, v0.xyzw, cb0[24].xyzw
dp4 o1.w, v0.xyzw, cb0[25].xyzw
ret 
// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_VSBasicVcNoFog[] =
{
     68,  88,  66,  67,  27,  87, 
    100, 193, 184,  36, 172,  26, 
    126, 188, 176, 153, 185, 194, 
    126, 243,   1,   0,   0,   0, 
     45,   2,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    132,   0,   0,   0, 216,   0, 
      0,   0, 212,   1,   0,   0, 
     73,  83,  71,  78,  76,   0, 
      0,   0,   2,   0,   0,   0, 
      8,   0,   0,   0,  56,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0,  68,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,  15,   0,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0,  67,  79, 
     76,  79,  82,   0, 171, 171, 
     79,  83,  71,  78,  76,   0, 
      0,   0,   2,   0,   0,   0, 
      8,   0,   0,   0,  56,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  62,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,   0,   0,   0,  67,  79, 
     76,  79,  82,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0, 171, 171, 
     83,  72,  69,  88, 244,   0, 
      0,   0,  80,   0,   1,   0, 
     61,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  26,   0,   0,   0, 
     95,   0,   0,   3, 242,  16, 
     16,   0,   0,   0,   0,   0, 
     95,   0,   0,   3, 242,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    103,   0,   0,   4, 242,  32, 
     16,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,  56,   0, 
      0,   8, 242,  32,  16,   0, 
      0,   0,   0,   0,  70,  30, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     17,   0,   0,   8,  18,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  22,   0, 
      0,   0,  17,   0,   0,   8, 
     34,  32,  16,   0,   1,   0, 
      0,   0,  70,  30,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     23,   0,   0,   0,  17,   0, 
      0,   8,  66,  32,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  24,   0,   0,   0, 
     17,   0,   0,   8, 130,  32, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  25,   0, 
      0,   0,  62,   0,   0,   1, 
     88,  80,  68,  80,  81,   0, 
      0,   0,  68,  58,  92,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  92,  68, 105, 114, 
    101,  99, 116,  88,  84,  75, 
     92, 115, 114,  99,  92,  83, 
    104,  97, 100, 101, 114, 115, 
     92,  67, 111, 109, 112, 105, 
    108, 101, 100,  92,  88,  98, 
    111, 120,  79, 110, 101,  66, 
     97, 115, 105,  99,  69, 102, 
    102, 101,  99, 116,  95,  86, 
     83,  66,  97, 115, 105,  99, 
     86,  99,  78, 111,  70, 111, 
    103,  46, 112, 100,  98
};