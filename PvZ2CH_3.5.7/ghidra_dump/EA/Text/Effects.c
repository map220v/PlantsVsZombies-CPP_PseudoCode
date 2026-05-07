// Class: EA::Text::Effects


/* EA::Text::Effects::Multiply(unsigned int, unsigned int) */

uint EA::Text::Effects::Multiply(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 * param_2 + 1;
  return uVar1 + (uVar1 >> 8) >> 8;
}


/* EA::Text::Effects::CombineColors(unsigned int, unsigned int) */

uint EA::Text::Effects::CombineColors(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = param_1 >> 0x18;
  uVar2 = 0xff - uVar1;
  iVar3 = Multiply(param_2 >> 0x18,uVar2);
  iVar4 = Multiply(param_2 >> 0x10 & 0xff,uVar2);
  iVar5 = Multiply(param_1 >> 0x10 & 0xff,uVar1);
  iVar6 = Multiply(param_2 >> 8 & 0xff,uVar2);
  iVar7 = Multiply(param_1 >> 8 & 0xff,uVar1);
  iVar8 = Multiply(param_2 & 0xff,uVar2);
  iVar9 = Multiply(param_1 & 0xff,uVar1);
  return (iVar5 + iVar4) * 0x10000 | (iVar3 + uVar1) * 0x1000000 | iVar9 + iVar8 |
         (iVar7 + iVar6) * 0x100;
}


/* EA::Text::Effects::RoundToInt32(float) */

int EA::Text::Effects::RoundToInt32(float param_1)

{
  return (int)param_1;
}

