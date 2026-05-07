// Class: EA::Text::OTFTagStruct


/* EA::Text::OTFTagStruct::OTFTagStruct(unsigned int) */

void __thiscall EA::Text::OTFTagStruct::OTFTagStruct(OTFTagStruct *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}


/* EA::Text::OTFTagStruct::OTFTagStruct(char const*) */

void __thiscall EA::Text::OTFTagStruct::OTFTagStruct(OTFTagStruct *this,char *param_1)

{
  *(uint *)this =
       (uint)(byte)param_1[1] << 0x10 | (uint)(byte)*param_1 << 0x18 | (uint)(byte)param_1[3] |
       (uint)(byte)param_1[2] << 8;
  return;
}

