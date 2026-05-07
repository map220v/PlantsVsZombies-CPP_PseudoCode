// Class: open_vcdiff::VCDiffDeltaFileWindow


/* open_vcdiff::VCDiffDeltaFileWindow::UseCodeTable(open_vcdiff::VCDiffCodeTableData const&,
   unsigned char) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::UseCodeTable
          (VCDiffDeltaFileWindow *this,VCDiffCodeTableData *param_1,uchar param_2)

{
  VCDiffCodeTableReader::UseCodeTable((VCDiffCodeTableReader *)(this + 0x78),param_1,param_2);
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::UpdateInterleavedSectionPointers(char const*, char const*) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::UpdateInterleavedSectionPointers
          (VCDiffDeltaFileWindow *this,char *param_1,char *param_2)

{
  DeltaWindowSection *this_00;
  
  this_00 = (DeltaWindowSection *)(this + 0x20);
  if ((long)param_2 - (long)param_1 <= (long)*(int *)(this + 0x50)) {
    DeltaWindowSection::Init(this_00,param_1,(long)param_2 - (long)param_1);
    FUN_05334d10(this + 0x30,this_00);
    FUN_05334d10(this + 0x40,this_00);
    return;
  }
  DeltaWindowSection::Init(this_00,param_1,(long)*(int *)(this + 0x50));
  FUN_05334d10(this + 0x30,this_00);
  FUN_05334d10(this + 0x40,this_00);
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::IsInterleaved() const */

byte __thiscall open_vcdiff::VCDiffDeltaFileWindow::IsInterleaved(VCDiffDeltaFileWindow *this)

{
  byte bVar1;
  
  bVar1 = FUN_05334ca8(this[0x48]);
  return bVar1 ^ 1;
}


/* open_vcdiff::VCDiffDeltaFileWindow::MoreDataExpected() const */

bool __thiscall open_vcdiff::VCDiffDeltaFileWindow::MoreDataExpected(VCDiffDeltaFileWindow *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = IsInterleaved(this);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = 0 < *(int *)(this + 0x50);
  }
  return bVar1;
}


/* open_vcdiff::VCDiffDeltaFileWindow::Reset() */

void __thiscall open_vcdiff::VCDiffDeltaFileWindow::Reset(VCDiffDeltaFileWindow *this)

{
  undefined8 uVar1;
  
  this[8] = (VCDiffDeltaFileWindow)0x0;
  if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        **)this ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    uVar1 = 0;
  }
  else {
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)this);
    uVar1 = FUN_05474178();
  }
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x20));
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x30));
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x40));
  *(undefined4 *)(this + 0x50) = 0;
  this[0x68] = (VCDiffDeltaFileWindow)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::VCDiffDeltaFileWindow() */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::VCDiffDeltaFileWindow(VCDiffDeltaFileWindow *this)

{
  *(undefined8 *)this = 0;
  DeltaWindowSection::DeltaWindowSection((DeltaWindowSection *)(this + 0x20));
  DeltaWindowSection::DeltaWindowSection((DeltaWindowSection *)(this + 0x30));
  DeltaWindowSection::DeltaWindowSection((DeltaWindowSection *)(this + 0x40));
  VCDiffCodeTableReader::VCDiffCodeTableReader((VCDiffCodeTableReader *)(this + 0x78));
  Reset(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffDeltaFileWindow::SetUpWindowSections(open_vcdiff::VCDiffHeaderParser*) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::SetUpWindowSections
          (VCDiffDeltaFileWindow *this,VCDiffHeaderParser *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char **ppcVar7;
  char *pcVar8;
  undefined8 uVar9;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar2 = VCDiffHeaderParser::ParseSectionLengths
                    (param_1,(bool)this[0x68],&local_20,&local_18,&local_10,(ulong *)(this + 0x70));
  if (cVar2 == '\0') {
    lVar5 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      FUN_05334d44(*(undefined4 *)(param_1 + 0x18));
      return;
    }
    goto LAB_053357d8;
  }
  cVar2 = FUN_05334d54(*(undefined1 *)(*(long *)this + 0x20));
  uVar1 = local_20;
  if (((cVar2 == '\0') || (local_20 != 0)) || (local_10 != 0)) {
    lVar5 = local_10 + local_20;
    uVar3 = VCDiffHeaderParser::UnparsedSize(param_1);
    if (uVar3 < lVar5 + local_18) {
      lVar5 = 0xfffffffe;
    }
    else {
      pcVar4 = (char *)VCDiffHeaderParser::UnparsedData(param_1);
      DeltaWindowSection::Init((DeltaWindowSection *)(this + 0x30),pcVar4,uVar1);
      pcVar4 = (char *)FUN_05334cac(*(undefined8 *)(this + 0x30));
      DeltaWindowSection::Init((DeltaWindowSection *)(this + 0x20),pcVar4,local_18);
      pcVar4 = (char *)FUN_05334cac(*(undefined8 *)(this + 0x20));
      DeltaWindowSection::Init((DeltaWindowSection *)(this + 0x40),pcVar4,local_10);
      lVar5 = FUN_05334cac(*(undefined8 *)(this + 0x40));
      lVar6 = VCDiffHeaderParser::EndOfDeltaWindow(param_1);
      if (lVar5 == lVar6) goto LAB_053356e0;
      uVar9 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar9 = FUN_054603b8(uVar9,
                           "The end of the instructions section does not match the end of the delta window"
                          );
      FUN_0545f9e8(uVar9,FUN_0545fdc8);
      CheckFatalError();
      lVar5 = 0xffffffff;
    }
  }
  else {
    *(int *)(this + 0x50) = (int)local_18;
    pcVar4 = (char *)VCDiffHeaderParser::UnparsedData(param_1);
    pcVar8 = (char *)VCDiffHeaderParser::End(param_1);
    UpdateInterleavedSectionPointers(this,pcVar4,pcVar8);
LAB_053356e0:
    this_00 = *(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                **)(this + 0x20);
    ppcVar7 = (char **)std::
                       _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       ::_M_root(this_00);
    pcVar4 = (char *)FUN_05334cac(this_00);
    VCDiffCodeTableReader::Init((VCDiffCodeTableReader *)(this + 0x78),ppcVar7,pcVar4);
    lVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053357d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffDeltaFileWindow::ReadHeader(open_vcdiff::ParseableChunk*) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::ReadHeader(VCDiffDeltaFileWindow *this,ParseableChunk *param_1)

{
  bool bVar1;
  char cVar2;
  VCDiffDeltaFileWindow VVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte local_41;
  ulong local_40;
  VCDiffHeaderParser aVStack_38 [24];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)this);
  pcVar5 = (char *)FUN_05334c9c(*(undefined8 *)(param_1 + 0x10));
  pcVar6 = (char *)FUN_05334c88(*(undefined8 *)(param_1 + 8));
  VCDiffHeaderParser::VCDiffHeaderParser(aVStack_38,pcVar5,pcVar6);
  lVar10 = *(long *)this;
  local_41 = 0;
  local_40 = 0;
  uVar7 = FUN_05334da0(*(undefined8 *)(lVar10 + 8));
  uVar8 = FUN_05474178(uVar4);
  bVar1 = (bool)FUN_05334da4(*(undefined1 *)(lVar10 + 0x119));
  cVar2 = VCDiffHeaderParser::ParseWinIndicatorAndSourceSegment
                    (aVStack_38,uVar7,uVar8,bVar1,&local_41,(ulong *)(this + 0x18),&local_40);
  if (cVar2 == '\0') {
    lVar10 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
LAB_053358e8:
      FUN_05334d44(local_20);
      return;
    }
  }
  else {
    cVar2 = FUN_05334d64(*(undefined1 *)(*(long *)this + 0x20));
    VVar3 = (VCDiffDeltaFileWindow)0x0;
    if (cVar2 != '\0') {
      VVar3 = (VCDiffDeltaFileWindow)(local_41 >> 2 & 1);
    }
    this[0x68] = VVar3;
    cVar2 = VCDiffHeaderParser::ParseWindowLengths(aVStack_38,(ulong *)(this + 0x58));
    if (cVar2 == '\0') {
      lVar10 = ___stack_chk_guard;
      if (local_8 == ___stack_chk_guard) goto LAB_053358e8;
    }
    else {
      cVar2 = VCDiffStreamingDecoderImpl::TargetWindowWouldExceedSizeLimits
                        (*(VCDiffStreamingDecoderImpl **)this,*(ulong *)(this + 0x58));
      if (cVar2 == '\0') {
        VCDiffHeaderParser::ParseDeltaIndicator(aVStack_38);
        lVar10 = SetUpWindowSections(this,aVStack_38);
        if ((int)lVar10 == 0) {
          lVar10 = *(long *)(this + 0x60);
          lVar9 = *(long *)(this + 0x58);
          uVar7 = FUN_05474190(uVar4);
          if (uVar7 < (ulong)(lVar9 + lVar10)) {
            FUN_0547570c(uVar4,lVar9 + lVar10);
          }
          if ((local_41 & 1) == 0) {
            if ((local_41 >> 1 & 1) != 0) {
              lVar10 = FUN_054742a4(uVar4);
              *(ulong *)(this + 0x10) = lVar10 + local_40;
            }
          }
          else {
            lVar10 = FUN_05334d9c(**(undefined8 **)this);
            *(ulong *)(this + 0x10) = lVar10 + local_40;
          }
          this[8] = (VCDiffDeltaFileWindow)0x1;
          uVar7 = VCDiffHeaderParser::ParsedSize(aVStack_38);
          ParseableChunk::Advance(param_1,uVar7);
          FUN_05334d8c(*(long *)this + 0x108,*(undefined8 *)(this + 0x58));
          lVar10 = 0;
        }
      }
      else {
        lVar10 = 0xffffffff;
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar10);
}


/* open_vcdiff::VCDiffDeltaFileWindow::UpdateInstructionPointer(open_vcdiff::ParseableChunk*) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::UpdateInstructionPointer
          (VCDiffDeltaFileWindow *this,ParseableChunk *param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = IsInterleaved(this);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_05334cc4(*(undefined8 *)(this + 0x20));
  *(int *)(this + 0x50) = *(int *)(this + 0x50) - (int)uVar2;
  ParseableChunk::Advance(param_1,uVar2);
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::TargetBytesRemaining() */

long __thiscall
open_vcdiff::VCDiffDeltaFileWindow::TargetBytesRemaining(VCDiffDeltaFileWindow *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x58);
  if (lVar2 != 0) {
    lVar1 = FUN_053352c4(*(undefined8 *)this,*(undefined8 *)(this + 0x60));
    lVar2 = lVar2 - lVar1;
  }
  return lVar2;
}


/* open_vcdiff::VCDiffDeltaFileWindow::DecodeAdd(unsigned long) */

undefined8 __thiscall
open_vcdiff::VCDiffDeltaFileWindow::DecodeAdd(VCDiffDeltaFileWindow *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x30);
  uVar1 = FUN_05334cb4(uVar2);
  if (uVar1 < param_1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_05334cd4(uVar2);
    FUN_053352e8(*(undefined8 *)this,uVar2,param_1);
    ParseableChunk::Advance(*(ParseableChunk **)(this + 0x30),param_1);
    uVar2 = 0;
  }
  return uVar2;
}


/* open_vcdiff::VCDiffDeltaFileWindow::DecodeRun(unsigned long) */

undefined8 __thiscall
open_vcdiff::VCDiffDeltaFileWindow::DecodeRun(VCDiffDeltaFileWindow *this,ulong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ParseableChunk *this_00;
  
  this_00 = *(ParseableChunk **)(this + 0x30);
  cVar1 = ParseableChunk::Empty(this_00);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)FUN_05334cd4(this_00);
    FUN_0533530c(*(undefined8 *)this,*puVar2,param_1);
    ParseableChunk::Advance(*(ParseableChunk **)(this + 0x30),1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}


/* open_vcdiff::VCDiffDeltaFileWindow::~VCDiffDeltaFileWindow() */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::~VCDiffDeltaFileWindow(VCDiffDeltaFileWindow *this)

{
  VCDiffCodeTableReader::~VCDiffCodeTableReader((VCDiffCodeTableReader *)(this + 0x78));
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x40));
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x30));
  DeltaWindowSection::Invalidate((DeltaWindowSection *)(this + 0x20));
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::DecodeCopy(unsigned long, unsigned char) */

ulong __thiscall
open_vcdiff::VCDiffDeltaFileWindow::DecodeCopy
          (VCDiffDeltaFileWindow *this,ulong param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  VCDiffAddressCache *this_00;
  char **ppcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  VCDiffStreamingDecoderImpl *this_01;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_02;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  long lVar13;
  
  this_01 = *(VCDiffStreamingDecoderImpl **)this;
  lVar3 = FUN_053352c4(this_01,*(undefined8 *)(this + 0x60));
  uVar11 = *(undefined8 *)(this + 0x18);
  this_00 = (VCDiffAddressCache *)VCDiffStreamingDecoderImpl::addr_cache(this_01);
  this_02 = *(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              **)(this + 0x40);
  iVar1 = (int)lVar3 + (int)uVar11;
  ppcVar4 = (char **)std::
                     _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                     ::_M_root(this_02);
  pcVar5 = (char *)FUN_05334cac(this_02);
  uVar6 = VCDiffAddressCache::DecodeAddress(this_00,iVar1,param_2,ppcVar4,pcVar5);
  iVar2 = (int)uVar6;
  if (iVar2 != -2) {
    if (iVar2 == -1) {
      uVar11 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar11 = FUN_054603b8(uVar11,"Unable to decode address for COPY");
      FUN_0545f9e8(uVar11,FUN_0545fdc8);
      CheckFatalError();
      return uVar6 & 0xffffffff;
    }
    if ((iVar1 < iVar2) || (iVar2 < 0)) {
      uVar11 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar11 = FUN_054603b8(uVar11,"Internal error: unexpected address ");
      uVar11 = FUN_0546065c(uVar11,uVar6 & 0xffffffff);
      uVar11 = FUN_054603b8(uVar11," returned from DecodeAddress, with here_address = ");
      uVar11 = FUN_0546065c(uVar11,iVar1);
      FUN_0545f9e8(uVar11,FUN_0545fdc8);
      CheckFatalError();
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (ulong)iVar2;
      uVar12 = *(ulong *)(this + 0x18);
      if (uVar12 < uVar6 + param_1) {
        uVar10 = uVar12;
        if (uVar6 < uVar12) {
          lVar3 = lVar3 + (uVar12 - uVar6);
          param_1 = param_1 - (uVar12 - uVar6);
          FUN_053352e8(*(undefined8 *)this,*(long *)(this + 0x10) + uVar6);
          uVar10 = *(ulong *)(this + 0x18);
          uVar6 = uVar12;
        }
        this_03 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)this;
        lVar8 = uVar6 - uVar10;
        uVar6 = lVar3 - lVar8;
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost(this_03);
        lVar7 = FUN_054742a4();
        lVar13 = *(long *)(this + 0x60);
        if (uVar6 < param_1) {
          lVar9 = lVar8 - lVar3;
          do {
            lVar8 = lVar3;
            param_1 = param_1 - uVar6;
            FUN_053352e8(this_03,lVar7 + lVar13 + lVar9 + lVar8,uVar6);
            this_03 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        **)this;
            lVar3 = lVar8 + uVar6;
          } while (uVar6 < param_1);
        }
        FUN_053352e8(this_03,lVar7 + lVar13 + lVar8,param_1);
        uVar6 = 0;
      }
      else {
        FUN_053352e8(*(undefined8 *)this,*(long *)(this + 0x10) + uVar6,param_1);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffDeltaFileWindow::DecodeBody(open_vcdiff::ParseableChunk*) */

void __thiscall
open_vcdiff::VCDiffDeltaFileWindow::DecodeBody(VCDiffDeltaFileWindow *this,ParseableChunk *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ParseableChunk *this_00;
  ulong uVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  uchar local_d;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsInterleaved(this);
  if (cVar1 != '\0') {
    lVar3 = FUN_05334cd4(*(undefined8 *)(this + 0x20));
    lVar4 = FUN_05334c9c(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != lVar4) {
      uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar8 = 
      "Internal error: interleaved format is used, but the input pointer does not point to the instructions section"
      ;
LAB_05335fdc:
      uVar5 = FUN_054603b8(uVar5,pcVar8);
      FUN_0545f9e8(uVar5,FUN_0545fdc8);
      CheckFatalError();
      goto LAB_05335ff0;
    }
  }
  do {
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)this;
    lVar3 = *(long *)(this + 0x60);
    uVar6 = FUN_053352c4(this_01,lVar3);
    uVar9 = *(ulong *)(this + 0x58);
    if (uVar9 <= uVar6) {
      if (uVar9 != uVar6) {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar5 = FUN_054603b8(uVar5,"Decoded target window size (");
        uVar7 = FUN_053352c4(*(undefined8 *)this,*(undefined8 *)(this + 0x60));
        uVar5 = thunk_FUN_0546069c(uVar5,uVar7);
        pcVar8 = " bytes) does not match expected size (";
LAB_053361e4:
        uVar5 = FUN_054603b8(uVar5,pcVar8);
        uVar5 = thunk_FUN_0546069c(uVar5,*(undefined8 *)(this + 0x58));
        pcVar8 = " bytes)";
        goto LAB_05335fdc;
      }
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost(this_01);
      lVar4 = FUN_054742a4();
      if ((this[0x68] != (VCDiffDeltaFileWindow)0x0) &&
         (lVar3 = ComputeAdler32((char *)(lVar4 + lVar3),uVar9), lVar3 != *(long *)(this + 0x70))) {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        pcVar8 = 
        "Target data does not match checksum; this could mean that the wrong dictionary was used";
        goto LAB_05335fdc;
      }
      cVar1 = ParseableChunk::Empty(*(ParseableChunk **)(this + 0x20));
      if (cVar1 == '\0') {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        pcVar8 = "Excess instructions and sizes left over after decoding target window";
        goto LAB_05335fdc;
      }
      cVar1 = IsInterleaved(this);
      if (cVar1 != '\0') {
        UpdateInstructionPointer(this,param_1);
        uVar5 = 0;
        goto LAB_05335ff4;
      }
      cVar1 = ParseableChunk::Empty(*(ParseableChunk **)(this + 0x30));
      if (cVar1 == '\0') {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        pcVar8 = "Excess ADD/RUN data left over after decoding target window";
        goto LAB_05335fdc;
      }
      this_00 = *(ParseableChunk **)(this + 0x40);
      cVar1 = ParseableChunk::Empty(this_00);
      if (cVar1 == '\0') {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        pcVar8 = "Excess COPY addresses left over after decoding target window";
        goto LAB_05335fdc;
      }
      pcVar8 = (char *)FUN_05334cac(this_00);
      ParseableChunk::SetPosition(param_1,pcVar8);
      uVar5 = 0;
      goto LAB_05335ff4;
    }
    local_c = 4;
    local_d = '\0';
    iVar2 = VCDiffCodeTableReader::GetNextInstruction
                      ((VCDiffCodeTableReader *)(this + 0x78),&local_c,&local_d);
    if (iVar2 == 4) break;
    if (iVar2 == 5) {
      UpdateInstructionPointer(this,param_1);
      uVar5 = 0xfffffffe;
      goto LAB_05335ff4;
    }
    uVar6 = (ulong)local_c;
    uVar9 = *(ulong *)(this + 0x58);
    if ((uVar9 < uVar6) ||
       (lVar3 = FUN_053352c4(*(undefined8 *)this,*(undefined8 *)(this + 0x60)),
       uVar9 < lVar3 + uVar6)) {
      uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      uVar7 = VCDiffInstructionName(iVar2);
      uVar5 = FUN_054603b8(uVar5,uVar7);
      uVar5 = FUN_054603b8(uVar5," with size ");
      uVar5 = thunk_FUN_0546069c(uVar5,uVar6);
      uVar5 = FUN_054603b8(uVar5," plus existing ");
      uVar7 = FUN_053352c4(*(undefined8 *)this,*(undefined8 *)(this + 0x60));
      uVar5 = thunk_FUN_0546069c(uVar5,uVar7);
      pcVar8 = " bytes of target data exceeds length of target window (";
      goto LAB_053361e4;
    }
    if (iVar2 == 2) {
      iVar2 = DecodeRun(this,uVar6);
    }
    else if (iVar2 == 3) {
      iVar2 = DecodeCopy(this,uVar6,local_d);
    }
    else {
      if (iVar2 != 1) {
        uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar5 = FUN_054603b8(uVar5,"Unexpected instruction type ");
        uVar5 = FUN_0546065c(uVar5,iVar2);
        pcVar8 = "in opcode stream";
        goto LAB_05335fdc;
      }
      iVar2 = DecodeAdd(this,uVar6);
    }
    if (iVar2 == -2) {
      VCDiffCodeTableReader::UnGetInstruction((VCDiffCodeTableReader *)(this + 0x78));
      UpdateInstructionPointer(this,param_1);
      uVar5 = 0xfffffffe;
      goto LAB_05335ff4;
    }
  } while (iVar2 != -1);
LAB_05335ff0:
  uVar5 = 0xffffffff;
LAB_05335ff4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* open_vcdiff::VCDiffDeltaFileWindow::DecodeWindow(open_vcdiff::ParseableChunk*) */

undefined4 __thiscall
open_vcdiff::VCDiffDeltaFileWindow::DecodeWindow
          (VCDiffDeltaFileWindow *this,ParseableChunk *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  VCDiffAddressCache *this_00;
  undefined8 uVar6;
  undefined4 uVar7;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  
  if (*(long *)this == 0) {
    uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar3 = 
    "Internal error: VCDiffDeltaFileWindow::DecodeWindow() called before VCDiffDeltaFileWindow::Init()"
    ;
LAB_053364c4:
    uVar6 = FUN_054603b8(uVar6,pcVar3);
    FUN_0545f9e8(uVar6,FUN_0545fdc8);
    CheckFatalError();
    return 0xffffffff;
  }
  if (this[8] == (VCDiffDeltaFileWindow)0x0) {
    iVar2 = ReadHeader(this,param_1);
    if (iVar2 == -2) {
      return 0xfffffffe;
    }
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    this_00 = (VCDiffAddressCache *)
              VCDiffStreamingDecoderImpl::addr_cache(*(VCDiffStreamingDecoderImpl **)this);
    cVar1 = VCDiffAddressCache::Init(this_00);
    if (cVar1 == '\0') {
      uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar3 = "Error initializing address cache";
      goto LAB_053364c4;
    }
  }
  else {
    cVar1 = IsInterleaved(this);
    if (cVar1 == '\0') {
      uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar3 = 
      "Internal error: Resumed decoding of a delta file window when interleaved format is not being used"
      ;
      goto LAB_053364c4;
    }
    pcVar3 = (char *)FUN_05334c9c(*(undefined8 *)(param_1 + 0x10));
    pcVar4 = (char *)FUN_05334c88(*(undefined8 *)(param_1 + 8));
    UpdateInterleavedSectionPointers(this,pcVar3,pcVar4);
    this_01 = *(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                **)(this + 0x20);
    ppcVar5 = (char **)std::
                       _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       ::_M_root(this_01);
    pcVar3 = (char *)FUN_05334cac(this_01);
    VCDiffCodeTableReader::UpdatePointers((VCDiffCodeTableReader *)(this + 0x78),ppcVar5,pcVar3);
  }
  iVar2 = DecodeBody(this,param_1);
  if (iVar2 == -2) {
    cVar1 = MoreDataExpected(this);
    uVar7 = 0xfffffffe;
    if (cVar1 == '\0') {
      uVar6 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar3 = "End of data reached while decoding VCDIFF delta file";
      goto LAB_053364c4;
    }
  }
  else {
    uVar7 = 0xffffffff;
    if (iVar2 != -1) {
      Reset(this);
      return 0;
    }
  }
  return uVar7;
}

