// Class: open_vcdiff::VCDiffInstructionMap


/* open_vcdiff::VCDiffInstructionMap::LookupFirstOpcode(unsigned char, unsigned char, unsigned char)
   const */

void __thiscall
open_vcdiff::VCDiffInstructionMap::LookupFirstOpcode
          (VCDiffInstructionMap *this,uchar param_1,uchar param_2,uchar param_3)

{
  FUN_053f2e28(*(undefined4 *)(this + 4),this + 8,param_1,param_2,param_3);
  return;
}


/* open_vcdiff::VCDiffInstructionMap::LookupSecondOpcode(unsigned char, unsigned char, unsigned
   char, unsigned char) const */

void __thiscall
open_vcdiff::VCDiffInstructionMap::LookupSecondOpcode
          (VCDiffInstructionMap *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  SecondInstructionMap::Lookup
            ((SecondInstructionMap *)(this + 0x10),param_1,param_2,param_3,param_4);
  return;
}


/* open_vcdiff::VCDiffInstructionMap::~VCDiffInstructionMap() */

void __thiscall open_vcdiff::VCDiffInstructionMap::~VCDiffInstructionMap(VCDiffInstructionMap *this)

{
  SecondInstructionMap::~SecondInstructionMap((SecondInstructionMap *)(this + 0x10));
  FirstInstructionMap::~FirstInstructionMap((FirstInstructionMap *)this);
  return;
}


/* open_vcdiff::VCDiffInstructionMap::VCDiffInstructionMap(open_vcdiff::VCDiffCodeTableData const&,
   unsigned char) */

void __thiscall
open_vcdiff::VCDiffInstructionMap::VCDiffInstructionMap
          (VCDiffInstructionMap *this,VCDiffCodeTableData *param_1,uchar param_2)

{
  VCDiffCodeTableData *pVVar1;
  VCDiffCodeTableData *pVVar2;
  int iVar3;
  VCDiffCodeTableData VVar4;
  short sVar5;
  uint uVar6;
  VCDiffCodeTableData *pVVar7;
  int iVar8;
  
  uVar6 = FUN_053f4634(param_1 + 0x200);
  FirstInstructionMap::FirstInstructionMap((FirstInstructionMap *)this,param_2 + 4,uVar6 & 0xff);
  uVar6 = FUN_053f4634(param_1 + 0x300);
  SecondInstructionMap::SecondInstructionMap
            ((SecondInstructionMap *)(this + 0x10),param_2 + 4,uVar6 & 0xff);
  pVVar7 = param_1;
  iVar8 = 0;
  do {
    while (pVVar7[0x100] == (VCDiffCodeTableData)0x0) {
      VVar4 = *pVVar7;
      pVVar1 = pVVar7 + 0x200;
      iVar3 = iVar8 + 1;
      pVVar2 = pVVar7 + 0x400;
      pVVar7 = pVVar7 + 1;
      FUN_053f48f0(*(undefined8 *)(this + 8),VVar4,*pVVar1,*pVVar2,iVar8);
      iVar8 = iVar3;
      if (iVar3 == 0x100) goto LAB_053f4c9c;
    }
    if (*pVVar7 == (VCDiffCodeTableData)0x0) {
      FUN_053f48f0(*(undefined8 *)(this + 8),pVVar7[0x100],pVVar7[0x300],pVVar7[0x500],iVar8);
    }
    iVar8 = iVar8 + 1;
    pVVar7 = pVVar7 + 1;
  } while (iVar8 != 0x100);
LAB_053f4c9c:
  pVVar7 = param_1;
  do {
    if ((*pVVar7 != (VCDiffCodeTableData)0x0) &&
       (VVar4 = pVVar7[0x100], VVar4 != (VCDiffCodeTableData)0x0)) {
      sVar5 = LookupFirstOpcode(this,(uchar)*pVVar7,(uchar)pVVar7[0x200],(uchar)pVVar7[0x400]);
      if (sVar5 != 0x100) {
        SecondInstructionMap::Add
                  ((SecondInstructionMap *)(this + 0x10),(uchar)sVar5,(uchar)VVar4,
                   (uchar)pVVar7[0x300],(uchar)pVVar7[0x500],(char)pVVar7 - (char)param_1);
      }
    }
    pVVar7 = pVVar7 + 1;
  } while (pVVar7 != param_1 + 0x100);
  return;
}


/* open_vcdiff::VCDiffInstructionMap::GetDefaultInstructionMap() */

VCDiffInstructionMap * open_vcdiff::VCDiffInstructionMap::GetDefaultInstructionMap(void)

{
  uchar uVar1;
  VCDiffInstructionMap *this;
  
  if (default_instruction_map != (VCDiffInstructionMap *)0x0) {
    return default_instruction_map;
  }
  uVar1 = VCDiffAddressCache::DefaultLastMode();
  this = ::operator_new(0x818);
  VCDiffInstructionMap(this,(VCDiffCodeTableData *)VCDiffCodeTableData::kDefaultCodeTableData,uVar1)
  ;
  default_instruction_map = this;
  return this;
}

