// Class: open_vcdiff::VCDiffCodeTableWriter


/* open_vcdiff::VCDiffCodeTableWriter::target_length() const */

undefined8 __thiscall open_vcdiff::VCDiffCodeTableWriter::target_length(VCDiffCodeTableWriter *this)

{
  return *(undefined8 *)(this + 0x80);
}


/* open_vcdiff::VCDiffCodeTableWriter::AddChecksum(unsigned long) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::AddChecksum(VCDiffCodeTableWriter *this,ulong param_1)

{
  *(ulong *)(this + 0xa0) = param_1;
  this[0x9c] = (VCDiffCodeTableWriter)0x1;
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::WriteHeader(open_vcdiff::OutputStringInterface*, int) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::WriteHeader
          (VCDiffCodeTableWriter *this,OutputStringInterface *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&DAT_05768e58,5);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&DAT_05768e60,5);
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::Init(unsigned long) */

char __thiscall open_vcdiff::VCDiffCodeTableWriter::Init(VCDiffCodeTableWriter *this,ulong param_1)

{
  char cVar1;
  long lVar2;
  VCDiffInstructionMap *this_00;
  
  *(ulong *)(this + 0x78) = param_1;
  if (*(long *)(this + 0x90) == 0) {
    if (*(undefined1 **)(this + 0x88) == VCDiffCodeTableData::kDefaultCodeTableData) {
      lVar2 = VCDiffInstructionMap::GetDefaultInstructionMap();
      *(long *)(this + 0x90) = lVar2;
      if (lVar2 == 0) {
        return '\0';
      }
    }
    else {
      this_00 = ::operator_new(0x818);
      VCDiffInstructionMap::VCDiffInstructionMap
                (this_00,*(VCDiffCodeTableData **)(this + 0x88),(uchar)this[8]);
      *(VCDiffInstructionMap **)(this + 0x90) = this_00;
    }
  }
  cVar1 = VCDiffAddressCache::Init((VCDiffAddressCache *)(this + 0x38));
  if (cVar1 == '\0') {
    return '\0';
  }
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return cVar1;
}


/* open_vcdiff::VCDiffCodeTableWriter::InitSectionPointers(bool) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::InitSectionPointers(VCDiffCodeTableWriter *this,bool param_1)

{
  if (!param_1) {
    *(VCDiffCodeTableWriter **)(this + 0x18) = this + 0x20;
    *(VCDiffCodeTableWriter **)(this + 0x28) = this + 0x30;
    return;
  }
  *(VCDiffCodeTableWriter **)(this + 0x18) = this + 0x10;
  *(VCDiffCodeTableWriter **)(this + 0x28) = this + 0x10;
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::VCDiffCodeTableWriter(bool) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::VCDiffCodeTableWriter(VCDiffCodeTableWriter *this,bool param_1)

{
  VCDiffCodeTableWriter VVar1;
  
  CodeTableWriterInterface::CodeTableWriterInterface((CodeTableWriterInterface *)this);
  *(undefined ***)this = &PTR__VCDiffCodeTableWriter_06a37a90;
  VVar1 = (VCDiffCodeTableWriter)VCDiffAddressCache::DefaultLastMode();
  this[8] = VVar1;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x30);
  VCDiffAddressCache::VCDiffAddressCache((VCDiffAddressCache *)(this + 0x38));
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined1 **)(this + 0x88) = VCDiffCodeTableData::kDefaultCodeTableData;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  this[0x9c] = (VCDiffCodeTableWriter)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  InitSectionPointers(this,param_1);
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::VCDiffCodeTableWriter(bool, int, int,
   open_vcdiff::VCDiffCodeTableData const&, unsigned char) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::VCDiffCodeTableWriter
          (VCDiffCodeTableWriter *this,bool param_1,int param_2,int param_3,
          VCDiffCodeTableData *param_4,uchar param_5)

{
  CodeTableWriterInterface::CodeTableWriterInterface((CodeTableWriterInterface *)this);
  this[8] = (VCDiffCodeTableWriter)param_5;
  *(undefined ***)this = &PTR__VCDiffCodeTableWriter_06a37a90;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x30);
  VCDiffAddressCache::VCDiffAddressCache((VCDiffAddressCache *)(this + 0x38),param_2,param_3);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(VCDiffCodeTableData **)(this + 0x88) = param_4;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  this[0x9c] = (VCDiffCodeTableWriter)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  InitSectionPointers(this,param_1);
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::CalculateLengthOfSizeAsVarint(unsigned long) */

long open_vcdiff::VCDiffCodeTableWriter::CalculateLengthOfSizeAsVarint(ulong param_1)

{
  int iVar1;
  
  iVar1 = VarintBE<int>::Length((int)param_1);
  return (long)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffCodeTableWriter::AppendSizeToString(unsigned long, std::string*) */

void open_vcdiff::VCDiffCodeTableWriter::AppendSizeToString(ulong param_1,string *param_2)

{
  int iVar1;
  char acStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = VarintBE<int>::EncodeInternal((int)param_1,acStack_10);
  FUN_05475980(param_2,acStack_10 + (5 - iVar1));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VCDiffCodeTableWriter::EncodeInstruction(open_vcdiff::VCDiffInstructionType,
   unsigned long, unsigned char) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::EncodeInstruction
          (VCDiffCodeTableWriter *this,int param_2,ulong param_3,uchar param_4)

{
  string *psVar1;
  byte bVar2;
  uchar uVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  VCDiffInstructionMap *this_00;
  
  this_00 = *(VCDiffInstructionMap **)(this + 0x90);
  if (this_00 == (VCDiffInstructionMap *)0x0) {
    uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar10 = "EncodeInstruction() called without calling Init()";
    goto LAB_053f32bc;
  }
  uVar3 = (uchar)param_2;
  if (*(int *)(this + 0x98) < 0) {
    if (param_3 < 0x100) goto LAB_053f3130;
LAB_053f3150:
    sVar5 = VCDiffInstructionMap::LookupFirstOpcode(this_00,uVar3,'\0',param_4);
  }
  else {
    psVar1 = (string *)(this + 0x10);
    pbVar7 = (byte *)FUN_05474ee8(psVar1,(long)*(int *)(this + 0x98));
    bVar2 = *pbVar7;
    if ((param_2 == 1) && (*(char *)(*(long *)(this + 0x88) + (long)(int)(uint)bVar2) == '\x01')) {
      uVar8 = FUN_054603b8(&DAT_06c49ed0,"WARNING: ");
      uVar8 = FUN_054603b8(uVar8,"EncodeInstruction() called for two ADD instructions in a row");
      FUN_0545f9e8(uVar8,FUN_0545fdc8);
      CheckFatalError();
    }
    if (param_3 < 0x100) {
      sVar5 = VCDiffInstructionMap::LookupSecondOpcode
                        (*(VCDiffInstructionMap **)(this + 0x90),bVar2,uVar3,(uchar)param_3,param_4)
      ;
      if (sVar5 != 0x100) {
        puVar9 = (undefined1 *)FUN_05474ee8(psVar1,(long)*(int *)(this + 0x98));
        *puVar9 = (char)sVar5;
        *(undefined4 *)(this + 0x98) = 0xffffffff;
        return;
      }
      sVar5 = VCDiffInstructionMap::LookupSecondOpcode
                        (*(VCDiffInstructionMap **)(this + 0x90),bVar2,uVar3,'\0',param_4);
      uVar4 = (undefined1)sVar5;
      if (sVar5 != 0x100) goto LAB_053f32e8;
      this_00 = *(VCDiffInstructionMap **)(this + 0x90);
LAB_053f3130:
      sVar5 = VCDiffInstructionMap::LookupFirstOpcode(this_00,uVar3,(uchar)param_3,param_4);
      if (sVar5 != 0x100) {
        FUN_05475c50(this + 0x10);
        iVar6 = FUN_05474178(this + 0x10);
        *(int *)(this + 0x98) = iVar6 + -1;
        return;
      }
      goto LAB_053f3150;
    }
    sVar5 = VCDiffInstructionMap::LookupSecondOpcode
                      (*(VCDiffInstructionMap **)(this + 0x90),bVar2,uVar3,'\0',param_4);
    uVar4 = (undefined1)sVar5;
    if (sVar5 != 0x100) {
LAB_053f32e8:
      puVar9 = (undefined1 *)FUN_05474ee8(psVar1,(long)*(int *)(this + 0x98));
      *puVar9 = uVar4;
      *(undefined4 *)(this + 0x98) = 0xffffffff;
      AppendSizeToString(param_3,psVar1);
      return;
    }
    sVar5 = VCDiffInstructionMap::LookupFirstOpcode
                      (*(VCDiffInstructionMap **)(this + 0x90),uVar3,'\0',param_4);
  }
  if (sVar5 != 0x100) {
    psVar1 = (string *)(this + 0x10);
    FUN_05475c50(psVar1);
    iVar6 = FUN_05474178(psVar1);
    *(int *)(this + 0x98) = iVar6 + -1;
    AppendSizeToString(param_3,psVar1);
    return;
  }
  uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar8 = FUN_054603b8(uVar8,"No matching opcode found for inst ");
  uVar8 = FUN_0546065c(uVar8,param_2);
  uVar8 = FUN_054603b8(uVar8,", mode ");
  uVar8 = FUN_05460394(uVar8,param_4);
  pcVar10 = ", size 0";
LAB_053f32bc:
  uVar8 = FUN_054603b8(uVar8,pcVar10);
  FUN_0545f9e8(uVar8,FUN_0545fdc8);
  CheckFatalError();
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::EncodeInstruction(open_vcdiff::VCDiffInstructionType,
   unsigned long) */

void open_vcdiff::VCDiffCodeTableWriter::EncodeInstruction(void)

{
  EncodeInstruction();
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::Add(char const*, unsigned long) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::Add(VCDiffCodeTableWriter *this,char *param_1,ulong param_2)

{
  EncodeInstruction(this,1);
  FUN_05475980(*(undefined8 *)(this + 0x18),param_1,param_2);
  *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + param_2;
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::Run(unsigned long, unsigned char) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::Run(VCDiffCodeTableWriter *this,ulong param_1,uchar param_2)

{
  EncodeInstruction(this,2,param_1);
  FUN_05475c50(*(undefined8 *)(this + 0x18),param_2);
  *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffCodeTableWriter::Copy(int, unsigned long) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::Copy(VCDiffCodeTableWriter *this,int param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x90) == 0) {
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"VCDiffCodeTableWriter::Copy() called without calling Init()");
    FUN_0545f9e8(uVar3,FUN_0545fdc8);
    CheckFatalError();
  }
  else {
    local_c = 0;
    uVar2 = VCDiffAddressCache::EncodeAddress
                      ((VCDiffAddressCache *)(this + 0x38),param_1,
                       (int)*(undefined8 *)(this + 0x80) + (int)*(undefined8 *)(this + 0x78),
                       &local_c);
    EncodeInstruction(this,3,param_2,uVar2);
    cVar1 = VCDiffAddressCache::WriteAddressAsVarintForMode
                      ((VCDiffAddressCache *)(this + 0x38),(uchar)uVar2);
    if (cVar1 == '\0') {
      FUN_05475c50(*(undefined8 *)(this + 0x28),(undefined1)local_c);
    }
    else {
      VarintBE<int>::AppendToString(local_c,*(string **)(this + 0x28));
    }
    *(ulong *)(this + 0x80) = *(long *)(this + 0x80) + param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffCodeTableWriter::AppendSizeToOutputString(unsigned long,
   open_vcdiff::OutputStringInterface*) */

void open_vcdiff::VCDiffCodeTableWriter::AppendSizeToOutputString
               (ulong param_1,OutputStringInterface *param_2)

{
  int iVar1;
  char acStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = VarintBE<int>::EncodeInternal((int)param_1,acStack_10);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,acStack_10 + (5 - iVar1));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VCDiffCodeTableWriter::CalculateLengthOfTheDeltaEncoding() const */

long __thiscall
open_vcdiff::VCDiffCodeTableWriter::CalculateLengthOfTheDeltaEncoding(VCDiffCodeTableWriter *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = CalculateLengthOfSizeAsVarint(*(ulong *)(this + 0x80));
  uVar3 = FUN_05474178(this + 0x20);
  lVar4 = CalculateLengthOfSizeAsVarint(uVar3);
  uVar3 = FUN_05474178(this + 0x10);
  lVar5 = CalculateLengthOfSizeAsVarint(uVar3);
  uVar3 = FUN_05474178(this + 0x30);
  lVar6 = CalculateLengthOfSizeAsVarint(uVar3);
  lVar7 = FUN_05474178(this + 0x20);
  lVar8 = FUN_05474178(this + 0x10);
  lVar9 = FUN_05474178(this + 0x30);
  lVar9 = lVar2 + lVar4 + 1 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9;
  if (this[0x9c] != (VCDiffCodeTableWriter)0x0) {
    iVar1 = VarintBE<long>::Length(*(long *)(this + 0xa0));
    lVar9 = lVar9 + iVar1;
  }
  return lVar9;
}


/* open_vcdiff::VCDiffCodeTableWriter::Output(open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::Output
          (VCDiffCodeTableWriter *this,OutputStringInterface *param_1)

{
  VCDiffCodeTableWriter *pVVar1;
  VCDiffCodeTableWriter *pVVar2;
  VCDiffCodeTableWriter *pVVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  
  pVVar1 = this + 0x10;
  cVar4 = FUN_0547419c(pVVar1);
  if (cVar4 == '\0') {
    uVar6 = CalculateLengthOfTheDeltaEncoding(this);
    lVar7 = CalculateLengthOfSizeAsVarint(*(ulong *)(this + 0x78));
    lVar8 = CalculateLengthOfSizeAsVarint(0);
    lVar9 = CalculateLengthOfSizeAsVarint(uVar6);
    (**(code **)(*(long *)param_1 + 0x28))(param_1,uVar6 + lVar7 + 1 + lVar8 + lVar9);
    if (this[0x9c] == (VCDiffCodeTableWriter)0x0) {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,1);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x20))(param_1,5);
    }
    pVVar2 = this + 0x20;
    pVVar3 = this + 0x30;
    AppendSizeToOutputString(*(ulong *)(this + 0x78),param_1);
    AppendSizeToOutputString(0,param_1);
    AppendSizeToOutputString(uVar6,param_1);
    lVar7 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
    AppendSizeToOutputString(*(ulong *)(this + 0x80),param_1);
    (**(code **)(*(long *)param_1 + 0x20))(param_1,0);
    uVar10 = FUN_05474178(pVVar2);
    AppendSizeToOutputString(uVar10,param_1);
    uVar10 = FUN_05474178(pVVar1);
    AppendSizeToOutputString(uVar10,param_1);
    uVar10 = FUN_05474178(pVVar3);
    AppendSizeToOutputString(uVar10,param_1);
    if (this[0x9c] != (VCDiffCodeTableWriter)0x0) {
      VarintBE<long>::AppendToOutputString(*(long *)(this + 0xa0),param_1);
    }
    uVar5 = FUN_054742a4(pVVar2);
    uVar11 = FUN_05474178(pVVar2);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5,uVar11);
    uVar5 = FUN_054742a4(pVVar1);
    uVar11 = FUN_05474178(pVVar1);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5,uVar11);
    uVar5 = FUN_054742a4(pVVar3);
    uVar11 = FUN_05474178(pVVar3);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar5,uVar11);
    lVar8 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
    if (lVar8 - lVar7 != uVar6) {
      uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar5 = FUN_054603b8(uVar5,"Internal error: calculated length of the delta encoding (");
      uVar5 = thunk_FUN_0546069c(uVar5,uVar6);
      uVar5 = FUN_054603b8(uVar5,") does not match actual length (");
      uVar5 = thunk_FUN_0546069c(uVar5,lVar8 - lVar7);
      FUN_0545f9e8(uVar5,FUN_0545fdc8);
      CheckFatalError();
    }
    FUN_05474ff8(pVVar2);
    FUN_05474ff8(pVVar1);
    FUN_05474ff8(pVVar3);
    if (*(long *)(this + 0x80) != 0) goto LAB_053f365c;
    uVar5 = FUN_054603b8(&DAT_06c49ed0,"WARNING: ");
    pcVar12 = "Empty target window";
  }
  else {
    uVar5 = FUN_054603b8(&DAT_06c49ed0,"WARNING: ");
    pcVar12 = "Empty input; no delta window produced";
  }
  uVar5 = FUN_054603b8(uVar5,pcVar12);
  FUN_0545f9e8(uVar5,FUN_0545fdc8);
  CheckFatalError();
LAB_053f365c:
  cVar4 = (**(code **)(*(long *)this + 0x10))(this,*(undefined8 *)(this + 0x78));
  if (cVar4 != '\0') {
    return;
  }
  uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar5 = FUN_054603b8(uVar5,
                       "Internal error: calling Init() to reset VCDiffCodeTableWriter state failed")
  ;
  FUN_0545f9e8(uVar5,FUN_0545fdc8);
  CheckFatalError();
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::~VCDiffCodeTableWriter() */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::~VCDiffCodeTableWriter(VCDiffCodeTableWriter *this)

{
  VCDiffInstructionMap *this_00;
  
  *(undefined ***)this = &PTR__VCDiffCodeTableWriter_06a37a90;
  if ((*(undefined1 **)(this + 0x88) != VCDiffCodeTableData::kDefaultCodeTableData) &&
     (this_00 = *(VCDiffInstructionMap **)(this + 0x90), this_00 != (VCDiffInstructionMap *)0x0)) {
    VCDiffInstructionMap::~VCDiffInstructionMap(this_00);
    AK::FreeHook(this_00);
  }
  VCDiffAddressCache::~VCDiffAddressCache((VCDiffAddressCache *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffCodeTableWriter::~VCDiffCodeTableWriter() */

void __thiscall
open_vcdiff::VCDiffCodeTableWriter::~VCDiffCodeTableWriter(VCDiffCodeTableWriter *this)

{
  ~VCDiffCodeTableWriter(this);
  AK::FreeHook(this);
  return;
}

