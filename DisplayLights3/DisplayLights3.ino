
#include "Gamer.h"
Gamer gamer;

byte fnt[128][8] = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0000 (nul)
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0001
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0002
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0003
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0004
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0005
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0006
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0007
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0008
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0009
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000A
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000B
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000C
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000D
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000E
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+000F
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0010
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0011
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0012
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0013
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0014
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0015
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0016
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0017
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0018
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0019
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001A
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001B
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001C
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001D
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001E
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+001F
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0020 (space)
    { 0x18, 0x3c, 0x3c, 0x18, 0x18, 0x00, 0x18, 0x00},   // U+0021 (!)
    { 0x6c, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0022 (")
    { 0x6c, 0x6c, 0xfe, 0x6c, 0xfe, 0x6c, 0x6c, 0x00},   // U+0023 (#)
    { 0x30, 0x7c, 0xc0, 0x78, 0x0c, 0xf8, 0x30, 0x00},   // U+0024 ($)
    { 0x00, 0xc6, 0xcc, 0x18, 0x30, 0x66, 0xc6, 0x00},   // U+0025 (%)
    { 0x38, 0x6c, 0x38, 0x76, 0xdc, 0xcc, 0x76, 0x00},   // U+0026 (&)
    { 0x60, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0027 (')
    { 0x18, 0x30, 0x60, 0x60, 0x60, 0x30, 0x18, 0x00},   // U+0028 (()
    { 0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00},   // U+0029 ())
    { 0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00},   // U+002A (*)
    { 0x00, 0x30, 0x30, 0xfc, 0x30, 0x30, 0x00, 0x00},   // U+002B (+)
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x60},   // U+002C (,)
    { 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00},   // U+002D (-)
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00},   // U+002E (.)
    { 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x80, 0x00},   // U+002F (/)
    { 0x7c, 0xc6, 0xce, 0xde, 0xf6, 0xe6, 0x7c, 0x00},   // U+0030 (0)
    { 0x30, 0x70, 0x30, 0x30, 0x30, 0x30, 0xfc, 0x00},   // U+0031 (1)
    { 0x78, 0xcc, 0x0c, 0x38, 0x60, 0xcc, 0xfc, 0x00},   // U+0032 (2)
    { 0x78, 0xcc, 0x0c, 0x38, 0x0c, 0xcc, 0x78, 0x00},   // U+0033 (3)
    { 0x1c, 0x3c, 0x6c, 0xcc, 0xfe, 0x0c, 0x1e, 0x00},   // U+0034 (4)
    { 0xfc, 0xc0, 0xf8, 0x0c, 0x0c, 0xcc, 0x78, 0x00},   // U+0035 (5)
    { 0x38, 0x60, 0xc0, 0xf8, 0xcc, 0xcc, 0x78, 0x00},   // U+0036 (6)
    { 0xfc, 0xcc, 0x0c, 0x18, 0x30, 0x30, 0x30, 0x00},   // U+0037 (7)
    { 0x78, 0xcc, 0xcc, 0x78, 0xcc, 0xcc, 0x78, 0x00},   // U+0038 (8)
    { 0x78, 0xcc, 0xcc, 0x7c, 0x0c, 0x18, 0x70, 0x00},   // U+0039 (9)
    { 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x00},   // U+003A (:)
    { 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x30, 0x60},   // U+003B (//)
    { 0x18, 0x30, 0x60, 0xc0, 0x60, 0x30, 0x18, 0x00},   // U+003C (<)
    { 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 0x00},   // U+003D (=)
    { 0x60, 0x30, 0x18, 0x0c, 0x18, 0x30, 0x60, 0x00},   // U+003E (>)
    { 0x78, 0xcc, 0x0c, 0x18, 0x30, 0x00, 0x30, 0x00},   // U+003F (?)
    { 0x7c, 0xc6, 0xde, 0xde, 0xde, 0xc0, 0x78, 0x00},   // U+0040 (@)
    { 0x30, 0x78, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0x00},   // U+0041 (A)
    { 0xfc, 0x66, 0x66, 0x7c, 0x66, 0x66, 0xfc, 0x00},   // U+0042 (B)
    { 0x3c, 0x66, 0xc0, 0xc0, 0xc0, 0x66, 0x3c, 0x00},   // U+0043 (C)
    { 0xf8, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0xf8, 0x00},   // U+0044 (D)
    { 0xfe, 0x62, 0x68, 0x78, 0x68, 0x62, 0xfe, 0x00},   // U+0045 (E)
    { 0xfe, 0x62, 0x68, 0x78, 0x68, 0x60, 0xf0, 0x00},   // U+0046 (F)
    { 0x3c, 0x66, 0xc0, 0xc0, 0xce, 0x66, 0x3e, 0x00},   // U+0047 (G)
    { 0xcc, 0xcc, 0xcc, 0xfc, 0xcc, 0xcc, 0xcc, 0x00},   // U+0048 (H)
    { 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00},   // U+0049 (I)
    { 0x1e, 0x0c, 0x0c, 0x0c, 0xcc, 0xcc, 0x78, 0x00},   // U+004A (J)
    { 0xe6, 0x66, 0x6c, 0x78, 0x6c, 0x66, 0xe6, 0x00},   // U+004B (K)
    { 0xf0, 0x60, 0x60, 0x60, 0x62, 0x66, 0xfe, 0x00},   // U+004C (L)
    { 0xc6, 0xee, 0xfe, 0xfe, 0xd6, 0xc6, 0xc6, 0x00},   // U+004D (M)
    { 0xc6, 0xe6, 0xf6, 0xde, 0xce, 0xc6, 0xc6, 0x00},   // U+004E (N)
    { 0x38, 0x6c, 0xc6, 0xc6, 0xc6, 0x6c, 0x38, 0x00},   // U+004F (O)
    { 0xfc, 0x66, 0x66, 0x7c, 0x60, 0x60, 0xf0, 0x00},   // U+0050 (P)
    { 0x78, 0xcc, 0xcc, 0xcc, 0xdc, 0x78, 0x1c, 0x00},   // U+0051 (Q)
    { 0xfc, 0x66, 0x66, 0x7c, 0x6c, 0x66, 0xe6, 0x00},   // U+0052 (R)
    { 0x78, 0xcc, 0xe0, 0x70, 0x1c, 0xcc, 0x78, 0x00},   // U+0053 (S)
    { 0xfc, 0xb4, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00},   // U+0054 (T)
    { 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xfc, 0x00},   // U+0055 (U)
    { 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00},   // U+0056 (V)
    { 0xc6, 0xc6, 0xc6, 0xd6, 0xfe, 0xee, 0xc6, 0x00},   // U+0057 (W)
    { 0xc6, 0xc6, 0x6c, 0x38, 0x38, 0x6c, 0xc6, 0x00},   // U+0058 (X)
    { 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x30, 0x78, 0x00},   // U+0059 (Y)
    { 0xfe, 0xc6, 0x8c, 0x18, 0x32, 0x66, 0xfe, 0x00},   // U+005A (Z)
    { 0x78, 0x60, 0x60, 0x60, 0x60, 0x60, 0x78, 0x00},   // U+005B ([)
    { 0xc0, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x02, 0x00},   // U+005C (\)
    { 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00},   // U+005D (])
    { 0x10, 0x38, 0x6c, 0xc6, 0x00, 0x00, 0x00, 0x00},   // U+005E (^)
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff},   // U+005F (_)
    { 0x30, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+0060 (`)
    { 0x00, 0x00, 0x78, 0x0c, 0x7c, 0xcc, 0x76, 0x00},   // U+0061 (a)
    { 0xe0, 0x60, 0x60, 0x7c, 0x66, 0x66, 0xdc, 0x00},   // U+0062 (b)
    { 0x00, 0x00, 0x78, 0xcc, 0xc0, 0xcc, 0x78, 0x00},   // U+0063 (c)
    { 0x1c, 0x0c, 0x0c, 0x7c, 0xcc, 0xcc, 0x76, 0x00},   // U+0064 (d)
    { 0x00, 0x00, 0x78, 0xcc, 0xfc, 0xc0, 0x78, 0x00},   // U+0065 (e)
    { 0x38, 0x6c, 0x60, 0xf0, 0x60, 0x60, 0xf0, 0x00},   // U+0066 (f)
    { 0x00, 0x00, 0x76, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8},   // U+0067 (g)
    { 0xe0, 0x60, 0x6c, 0x76, 0x66, 0x66, 0xe6, 0x00},   // U+0068 (h)
    { 0x30, 0x00, 0x70, 0x30, 0x30, 0x30, 0x78, 0x00},   // U+0069 (i)
    { 0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0xcc, 0xcc, 0x78},   // U+006A (j)
    { 0xe0, 0x60, 0x66, 0x6c, 0x78, 0x6c, 0xe6, 0x00},   // U+006B (k)
    { 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00},   // U+006C (l)
    { 0x00, 0x00, 0xcc, 0xfe, 0xfe, 0xd6, 0xc6, 0x00},   // U+006D (m)
    { 0x00, 0x00, 0xf8, 0xcc, 0xcc, 0xcc, 0xcc, 0x00},   // U+006E (n)
    { 0x00, 0x00, 0x78, 0xcc, 0xcc, 0xcc, 0x78, 0x00},   // U+006F (o)
    { 0x00, 0x00, 0xdc, 0x66, 0x66, 0x7c, 0x60, 0xf0},   // U+0070 (p)
    { 0x00, 0x00, 0x76, 0xcc, 0xcc, 0x7c, 0x0c, 0x1e},   // U+0071 (q)
    { 0x00, 0x00, 0xdc, 0x76, 0x66, 0x60, 0xf0, 0x00},   // U+0072 (r)
    { 0x00, 0x00, 0x7c, 0xc0, 0x78, 0x0c, 0xf8, 0x00},   // U+0073 (s)
    { 0x10, 0x30, 0x7c, 0x30, 0x30, 0x34, 0x18, 0x00},   // U+0074 (t)
    { 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xcc, 0x76, 0x00},   // U+0075 (u)
    { 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x78, 0x30, 0x00},   // U+0076 (v)
    { 0x00, 0x00, 0xc6, 0xd6, 0xfe, 0xfe, 0x6c, 0x00},   // U+0077 (w)
    { 0x00, 0x00, 0xc6, 0x6c, 0x38, 0x6c, 0xc6, 0x00},   // U+0078 (x)
    { 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x7c, 0x0c, 0xf8},   // U+0079 (y)
    { 0x00, 0x00, 0xfc, 0x98, 0x30, 0x64, 0xfc, 0x00},   // U+007A (z)
    { 0x1c, 0x30, 0x30, 0xe0, 0x30, 0x30, 0x1c, 0x00},   // U+007B ({)
    { 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00},   // U+007C (|)
    { 0xe0, 0x30, 0x30, 0x1c, 0x30, 0x30, 0xe0, 0x00},   // U+007D (})
    { 0x76, 0xdc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},   // U+007E (~)
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}    // U+007F
};

char msg[] = "MARWAN";
int g = sizeof(msg);
int i = 0;
byte m[8];

void setup(){
  gamer.begin();
  gamer.printImage(fnt[msg[0]]);
}

void loop(){
  i = ++i % g;
  for (int j=0; j<8; j++) {
    for (int k=0; k<8; k++) {
      m[k] = (byte) ((int) fnt[msg[i-1]][k]) << j ^ ( (int) fnt[msg[i]][k]) >> 8-j;
    }
    gamer.printImage(m);
    delay (100);
  }
}
