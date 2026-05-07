// Class: open_vcdiff::VCDiffHeaderParser


/* open_vcdiff::VCDiffHeaderParser::End() const */

void __thiscall open_vcdiff::VCDiffHeaderParser::End(VCDiffHeaderParser *this)

{
  FUN_05334c88(*(undefined8 *)(this + 8));
  return;
}


/* open_vcdiff::VCDiffHeaderParser::UnparsedSize() const */

void __thiscall open_vcdiff::VCDiffHeaderParser::UnparsedSize(VCDiffHeaderParser *this)

{
  FUN_05334c8c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffHeaderParser::ParsedSize() const */

void __thiscall open_vcdiff::VCDiffHeaderParser::ParsedSize(VCDiffHeaderParser *this)

{
  FUN_05334c94(*(undefined8 *)this,*(undefined8 *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffHeaderParser::UnparsedData() const */

void __thiscall open_vcdiff::VCDiffHeaderParser::UnparsedData(VCDiffHeaderParser *this)

{
  FUN_05334c9c(*(undefined8 *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffHeaderParser::VCDiffHeaderParser(char const*, char const*) */

void __thiscall
open_vcdiff::VCDiffHeaderParser::VCDiffHeaderParser
          (VCDiffHeaderParser *this,char *param_1,char *param_2)

{
  ParseableChunk::ParseableChunk((ParseableChunk *)this,param_1,(long)param_2 - (long)param_1);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* open_vcdiff::VCDiffHeaderParser::ParseByte(unsigned char*) */

undefined8 __thiscall
open_vcdiff::VCDiffHeaderParser::ParseByte(VCDiffHeaderParser *this,uchar *param_1)

{
  char cVar1;
  uchar *puVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    cVar1 = ParseableChunk::Empty((ParseableChunk *)this);
    if (cVar1 == '\0') {
      puVar2 = (uchar *)FUN_053f39c4(*(undefined8 *)(this + 0x10));
      *param_1 = *puVar2;
      ParseableChunk::Advance((ParseableChunk *)this,1);
      return 1;
    }
    *(undefined4 *)(this + 0x18) = 0xfffffffe;
  }
  return 0;
}


/* open_vcdiff::VCDiffHeaderParser::ParseInt32(char const*, int*) */

undefined8 __thiscall
open_vcdiff::VCDiffHeaderParser::ParseInt32(VCDiffHeaderParser *this,char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0x18) != 0) {
    return 0;
  }
  pcVar2 = (char *)FUN_053f39b8(*(undefined8 *)(this + 8));
  ppcVar3 = (char **)std::
                     _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                                *)this);
  iVar1 = VarintBE<int>::Parse(pcVar2,ppcVar3);
  if (iVar1 != -2) {
    if (iVar1 == -1) {
      uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar4 = FUN_054603b8(uVar4,"Expected ");
      uVar4 = FUN_054603b8(uVar4,param_1);
      uVar4 = FUN_054603b8(uVar4,"; found invalid variable-length integer");
      FUN_0545f9e8(uVar4,FUN_0545fdc8);
      CheckFatalError();
      *(undefined4 *)(this + 0x18) = 0xffffffff;
      return 0;
    }
    *param_2 = iVar1;
    return 1;
  }
  *(undefined4 *)(this + 0x18) = 0xfffffffe;
  return 0;
}


/* open_vcdiff::VCDiffHeaderParser::ParseUInt32(char const*, unsigned int*) */

undefined8 __thiscall
open_vcdiff::VCDiffHeaderParser::ParseUInt32(VCDiffHeaderParser *this,char *param_1,uint *param_2)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0x18) == 0) {
    pcVar1 = (char *)FUN_053f39b8(*(undefined8 *)(this + 8));
    ppcVar2 = (char **)std::
                       _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                                  *)this);
    lVar3 = VarintBE<long>::Parse(pcVar1,ppcVar2);
    if (lVar3 == -2) {
      *(undefined4 *)(this + 0x18) = 0xfffffffe;
      return 0;
    }
    if (lVar3 == -1) {
      uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar4 = FUN_054603b8(uVar4,"Expected ");
      uVar4 = FUN_054603b8(uVar4,param_1);
      uVar4 = FUN_054603b8(uVar4,"; found invalid variable-length integer");
      FUN_0545f9e8(uVar4,FUN_0545fdc8);
      CheckFatalError();
      *(undefined4 *)(this + 0x18) = 0xffffffff;
      return 0;
    }
    if (lVar3 < 0x100000000) {
      *param_2 = (uint)lVar3;
      return 1;
    }
    uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar4 = FUN_054603b8(uVar4,"Value of ");
    uVar4 = FUN_054603b8(uVar4,param_1);
    uVar4 = FUN_054603b8(uVar4,&DAT_056edae8);
    uVar4 = thunk_FUN_05460424(uVar4,lVar3);
    uVar4 = FUN_054603b8(uVar4,") is too large for unsigned 32-bit integer");
    FUN_0545f9e8(uVar4,FUN_0545fdc8);
    CheckFatalError();
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffHeaderParser::ParseChecksum(char const*, unsigned long*) */

void __thiscall
open_vcdiff::VCDiffHeaderParser::ParseChecksum
          (VCDiffHeaderParser *this,char *param_1,ulong *param_2)

{
  char cVar1;
  uint local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = ParseUInt32(this,param_1,&local_c);
  if (cVar1 != '\0') {
    *param_2 = (ulong)local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffHeaderParser::ParseSize(char const*, unsigned long*) */

void __thiscall
open_vcdiff::VCDiffHeaderParser::ParseSize(VCDiffHeaderParser *this,char *param_1,ulong *param_2)

{
  char cVar1;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = ParseInt32(this,param_1,&local_c);
  if (cVar1 != '\0') {
    *param_2 = (long)local_c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VCDiffHeaderParser::ParseSourceSegmentLengthAndPosition(unsigned long, char const*,
   char const*, unsigned long*, unsigned long*) */

char __thiscall
open_vcdiff::VCDiffHeaderParser::ParseSourceSegmentLengthAndPosition
          (VCDiffHeaderParser *this,ulong param_1,char *param_2,char *param_3,ulong *param_4,
          ulong *param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = ParseSize(this,"source segment length",param_4);
  if (cVar1 == '\0') {
    return '\0';
  }
  if (param_1 < *param_4) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"Source segment length (");
    uVar2 = thunk_FUN_0546069c(uVar2,*param_4);
    uVar2 = FUN_054603b8(uVar2,") is larger than ");
    param_2 = param_3;
  }
  else {
    cVar1 = ParseSize(this,"source segment position",param_5);
    if (cVar1 == '\0') {
      return '\0';
    }
    if ((*param_5 < param_1) || (*param_4 == 0)) {
      uVar3 = *param_4 + *param_5;
      if (uVar3 <= param_1) {
        return cVar1;
      }
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar2 = FUN_054603b8(uVar2,"Source segment end position (");
    }
    else {
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar2 = FUN_054603b8(uVar2,"Source segment position (");
      uVar3 = *param_5;
    }
    uVar2 = thunk_FUN_0546069c(uVar2,uVar3);
    uVar2 = FUN_054603b8(uVar2,") is past ");
  }
  uVar2 = FUN_054603b8(uVar2,param_2);
  uVar2 = FUN_054603b8(uVar2,&DAT_05680ed0);
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2,&DAT_056e31d0);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  return '\0';
}


/* open_vcdiff::VCDiffHeaderParser::ParseWinIndicatorAndSourceSegment(unsigned long, unsigned long,
   bool, unsigned char*, unsigned long*, unsigned long*) */

ulong __thiscall
open_vcdiff::VCDiffHeaderParser::ParseWinIndicatorAndSourceSegment
          (VCDiffHeaderParser *this,ulong param_1,ulong param_2,bool param_3,uchar *param_4,
          ulong *param_5,ulong *param_6)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  bVar1 = ParseByte(this,param_4);
  uVar2 = (ulong)bVar1;
  if (bVar1 != 0) {
    bVar1 = *param_4 & 3;
    if (bVar1 == 2) {
      if (param_3) {
        pcVar4 = "current target position";
        pcVar5 = "target file";
        param_1 = param_2;
        goto LAB_053f42cc;
      }
      uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar3 = FUN_054603b8(uVar3,
                           "Delta file contains VCD_TARGET flag, which is not allowed by current decoder settings"
                          );
      FUN_0545f9e8(uVar3,FUN_0545fdc8);
      CheckFatalError();
      uVar2 = 0;
      *(undefined4 *)(this + 0x18) = 0xffffffff;
    }
    else {
      if (bVar1 == 3) {
        uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar3 = FUN_054603b8(uVar3,"Win_Indicator must not have both VCD_SOURCE and VCD_TARGET set")
        ;
        FUN_0545f9e8(uVar3,FUN_0545fdc8);
        CheckFatalError();
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        return 0;
      }
      if (bVar1 == 1) {
        pcVar4 = "end of dictionary";
        pcVar5 = "dictionary";
LAB_053f42cc:
        uVar2 = ParseSourceSegmentLengthAndPosition(this,param_1,pcVar4,pcVar5,param_5,param_6);
        return uVar2;
      }
    }
  }
  return uVar2;
}


/* open_vcdiff::VCDiffHeaderParser::ParseWindowLengths(unsigned long*) */

undefined8 __thiscall
open_vcdiff::VCDiffHeaderParser::ParseWindowLengths(VCDiffHeaderParser *this,ulong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x28) == 0) {
    cVar1 = ParseSize(this,"length of the delta encoding",(ulong *)(this + 0x20));
    if (cVar1 != '\0') {
      uVar2 = UnparsedData(this);
      *(undefined8 *)(this + 0x28) = uVar2;
      uVar2 = ParseSize(this,"size of the target window",param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,
                         "Internal error: VCDiffHeaderParser::ParseWindowLengths was called twice for the same delta window"
                        );
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  return 0;
}


/* open_vcdiff::VCDiffHeaderParser::EndOfDeltaWindow() const */

long __thiscall open_vcdiff::VCDiffHeaderParser::EndOfDeltaWindow(VCDiffHeaderParser *this)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(this + 0x28) == 0) {
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar1 = FUN_054603b8(uVar1,
                         "Internal error: VCDiffHeaderParser::GetDeltaWindowEnd was called before ParseWindowLengths"
                        );
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    CheckFatalError();
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffHeaderParser::ParseDeltaIndicator() */

void __thiscall open_vcdiff::VCDiffHeaderParser::ParseDeltaIndicator(VCDiffHeaderParser *this)

{
  char cVar1;
  undefined8 uVar2;
  byte local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ParseByte(this,&local_9);
  if ((cVar1 != '\0') && ((local_9 & 7) != 0)) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"Secondary compression of delta file sections is not supported");
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
    cVar1 = '\0';
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* open_vcdiff::VCDiffHeaderParser::ParseSectionLengths(bool, unsigned long*, unsigned long*,
   unsigned long*, unsigned long*) */

undefined8 __thiscall
open_vcdiff::VCDiffHeaderParser::ParseSectionLengths
          (VCDiffHeaderParser *this,bool param_1,ulong *param_2,ulong *param_3,ulong *param_4,
          ulong *param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  ParseSize(this,"length of data for ADDs and RUNs",param_2);
  ParseSize(this,"length of instructions section",param_3);
  ParseSize(this,"length of addresses for COPYs",param_4);
  if (param_1) {
    ParseChecksum(this,"Adler32 checksum value",param_5);
  }
  if (*(int *)(this + 0x18) == 0) {
    lVar4 = *(long *)(this + 0x28);
    if (lVar4 == 0) {
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar3 = 
      "Internal error: VCDiffHeaderParser::ParseSectionLengths was called before ParseWindowLengths"
      ;
    }
    else {
      lVar1 = UnparsedData(this);
      if (*(long *)(this + 0x20) == *param_3 + *param_4 + *param_2 + (lVar1 - lVar4)) {
        return 1;
      }
      uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar3 = 
      "The length of the delta encoding does not match the size of the header plus the sizes of the data sections"
      ;
    }
    uVar2 = FUN_054603b8(uVar2,pcVar3);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  return 0;
}

