// Class: open_vcdiff::VCDiffStreamingDecoderImpl


/* open_vcdiff::VCDiffStreamingDecoderImpl::ReachedPlannedTargetFileSize() const */

bool __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::ReachedPlannedTargetFileSize
          (VCDiffStreamingDecoderImpl *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0xf0);
  cVar2 = FUN_05334d80(uVar4);
  bVar1 = false;
  if ((cVar2 != '\0') &&
     (bVar1 = uVar4 == *(ulong *)(this + 0x108), uVar4 < *(ulong *)(this + 0x108))) {
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"Internal error: Decoded data size ");
    uVar3 = thunk_FUN_0546069c(uVar3,*(undefined8 *)(this + 0x108));
    uVar3 = FUN_054603b8(uVar3," exceeds planned target file size ");
    uVar3 = thunk_FUN_0546069c(uVar3,*(undefined8 *)(this + 0xf0));
    FUN_0545f9e8(uVar3,FUN_0545fdc8);
    CheckFatalError();
    return (bool)cVar2;
  }
  return bVar1;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::GetUnconsumedDataSize() const */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::GetUnconsumedDataSize(VCDiffStreamingDecoderImpl *this)

{
  FUN_05474178(this + 0x10);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::FlushDecodedTarget(open_vcdiff::OutputStringInterface*)
    */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::FlushDecodedTarget
          (VCDiffStreamingDecoderImpl *this,OutputStringInterface *param_1)

{
  VCDiffStreamingDecoderImpl *pVVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  pVVar1 = this + 0x18;
  lVar2 = FUN_054742a4(pVVar1);
  lVar4 = *(long *)(this + 0x110);
  lVar3 = FUN_05474178(pVVar1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2 + lVar4,lVar3 - lVar4);
  FUN_05474ff8(pVVar1);
  FUN_05334db4(this + 0x88);
  *(undefined8 *)(this + 0x110) = 0;
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::TargetWindowWouldExceedSizeLimits(unsigned long) const
    */

char __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::TargetWindowWouldExceedSizeLimits
          (VCDiffStreamingDecoderImpl *this,ulong param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(ulong *)(this + 0x100) < param_1) {
    cVar1 = '\x01';
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"Length of target window (");
    uVar2 = thunk_FUN_0546069c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2,") exceeds limit of ");
    uVar4 = *(undefined8 *)(this + 0x100);
  }
  else {
    lVar5 = *(long *)(this + 0xf0);
    cVar1 = FUN_05334d80(lVar5);
    if (cVar1 == '\0') {
      lVar3 = *(long *)(this + 0x108);
    }
    else {
      lVar3 = *(long *)(this + 0x108);
      if ((ulong)(lVar5 - lVar3) < param_1) {
        uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar2 = FUN_054603b8(uVar2,"Length of target window (");
        uVar2 = thunk_FUN_0546069c(uVar2,param_1);
        uVar2 = FUN_054603b8(uVar2," bytes) plus previous windows (");
        uVar2 = thunk_FUN_0546069c(uVar2,*(undefined8 *)(this + 0x108));
        uVar2 = FUN_054603b8(uVar2," bytes) would exceed planned size of ");
        uVar4 = *(undefined8 *)(this + 0xf0);
        goto LAB_053354c4;
      }
    }
    if (param_1 <= (ulong)(*(long *)(this + 0xf8) - lVar3)) {
      return '\0';
    }
    cVar1 = '\x01';
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"Length of target window (");
    uVar2 = thunk_FUN_0546069c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2," bytes) plus previous windows (");
    uVar2 = thunk_FUN_0546069c(uVar2,*(undefined8 *)(this + 0x108));
    uVar2 = FUN_054603b8(uVar2," bytes) would exceed maximum target file size of ");
    uVar4 = *(undefined8 *)(this + 0xf8);
  }
LAB_053354c4:
  uVar2 = thunk_FUN_0546069c(uVar2,uVar4);
  uVar2 = FUN_054603b8(uVar2," bytes");
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  return cVar1;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::AppendNewOutputText(open_vcdiff::OutputStringInterface*)
    */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::AppendNewOutputText
          (VCDiffStreamingDecoderImpl *this,OutputStringInterface *param_1)

{
  VCDiffStreamingDecoderImpl *pVVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  pVVar1 = this + 0x18;
  lVar2 = FUN_05474178(pVVar1);
  lVar2 = lVar2 - *(long *)(this + 0x110);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = VCDiffDeltaFileWindow::TargetBytesRemaining((VCDiffDeltaFileWindow *)(this + 0x28));
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar3 + lVar2);
  }
  lVar3 = FUN_054742a4(pVVar1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + *(long *)(this + 0x110),lVar2);
  uVar4 = FUN_05474178(pVVar1);
  *(undefined8 *)(this + 0x110) = uVar4;
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::FoundFileHeader() const */

bool __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::FoundFileHeader(VCDiffStreamingDecoderImpl *this)

{
  long lVar1;
  
  lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd0));
  return lVar1 != 0;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::IsDecodingComplete() const */

ulong __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::IsDecodingComplete(VCDiffStreamingDecoderImpl *this)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  
  cVar1 = FoundFileHeader(this);
  if (cVar1 != '\0') {
    uVar4 = 0;
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xe8));
    if ((lVar3 == 0) && (cVar1 = FUN_05334d48(this[0x30]), cVar1 == '\0')) {
      bVar2 = ReachedPlannedTargetFileSize(this);
      uVar4 = (ulong)bVar2;
      if (bVar2 == 0) goto LAB_05335d18;
    }
    return uVar4;
  }
LAB_05335d18:
  uVar4 = FUN_0547419c(this + 0x10);
  return uVar4;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::addr_cache() */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::addr_cache(VCDiffStreamingDecoderImpl *this)

{
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd0));
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::Reset() */

void __thiscall open_vcdiff::VCDiffStreamingDecoderImpl::Reset(VCDiffStreamingDecoderImpl *this)

{
  *(undefined8 *)(this + 0xf0) = 0xfffffffffffffffd;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x118] = (VCDiffStreamingDecoderImpl)0x0;
  this[0x20] = (VCDiffStreamingDecoderImpl)0x0;
  std::auto_ptr<open_vcdiff::VCDiffAddressCache>::reset
            ((auto_ptr<open_vcdiff::VCDiffAddressCache> *)(this + 0xd0),(VCDiffAddressCache *)0x0);
  std::auto_ptr<open_vcdiff::VCDiffCodeTableData>::reset
            ((auto_ptr<open_vcdiff::VCDiffCodeTableData> *)(this + 0xd8),(VCDiffCodeTableData *)0x0)
  ;
  std::auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl>::reset
            ((auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl> *)(this + 0xe8),
             (VCDiffStreamingDecoderImpl *)0x0);
  VCDiffDeltaFileWindow::Reset((VCDiffDeltaFileWindow *)(this + 0x28));
  *(undefined8 *)(this + 0x110) = 0;
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::VCDiffStreamingDecoderImpl() */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::VCDiffStreamingDecoderImpl
          (VCDiffStreamingDecoderImpl *this)

{
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  VCDiffDeltaFileWindow::VCDiffDeltaFileWindow((VCDiffDeltaFileWindow *)(this + 0x28));
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0xd0),(rbtree_node *)0x0);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0xd8),(rbtree_node *)0x0);
  Set8BytesTo0(this + 0xe0);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0xe8),(rbtree_node *)0x0);
  *(undefined8 *)(this + 0xf8) = 0x4000000;
  *(undefined8 *)(this + 0x100) = 0x4000000;
  this[0x119] = (VCDiffStreamingDecoderImpl)0x1;
  FUN_05334d4c((VCDiffDeltaFileWindow *)(this + 0x28),this);
  Reset(this);
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::~VCDiffStreamingDecoderImpl() */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::~VCDiffStreamingDecoderImpl
          (VCDiffStreamingDecoderImpl *this)

{
  Reset(this);
  std::auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl>::~auto_ptr
            ((auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl> *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  std::auto_ptr<open_vcdiff::VCDiffCodeTableData>::~auto_ptr
            ((auto_ptr<open_vcdiff::VCDiffCodeTableData> *)(this + 0xd8));
  std::auto_ptr<open_vcdiff::VCDiffAddressCache>::~auto_ptr
            ((auto_ptr<open_vcdiff::VCDiffAddressCache> *)(this + 0xd0));
  VCDiffDeltaFileWindow::~VCDiffDeltaFileWindow((VCDiffDeltaFileWindow *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::StartDecoding(char const*, unsigned long) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::StartDecoding
          (VCDiffStreamingDecoderImpl *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (this[0x118] == (VCDiffStreamingDecoderImpl)0x0) {
    FUN_05474ff8(this + 0x10);
    FUN_05474ff8(this + 0x18);
    Reset(this);
    *(char **)this = param_1;
    *(ulong *)(this + 8) = param_2;
    this[0x118] = (VCDiffStreamingDecoderImpl)0x1;
    return;
  }
  uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar1 = FUN_054603b8(uVar1,"StartDecoding() called twice without FinishDecoding()");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  CheckFatalError();
  return;
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::FinishDecoding() */

undefined4 __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::FinishDecoding(VCDiffStreamingDecoderImpl *this)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (this[0x118] == (VCDiffStreamingDecoderImpl)0x0) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"WARNING: ");
    pcVar3 = 
    "FinishDecoding() called before StartDecoding(), or called after DecodeChunk() returned false";
  }
  else {
    cVar1 = IsDecodingComplete(this);
    if (cVar1 != '\0') {
      Reset(this);
      return 1;
    }
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar3 = "FinishDecoding() called before parsing entire delta file window";
  }
  uVar2 = FUN_054603b8(uVar2,pcVar3);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  Reset(this);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffStreamingDecoderImpl::InitCustomCodeTable(char const*, char const*) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::InitCustomCodeTable
          (VCDiffStreamingDecoderImpl *this,char *param_1,char *param_2)

{
  auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl> *this_00;
  char cVar1;
  VCDiffCodeTableData *pVVar2;
  void *__s;
  VCDiffAddressCache *this_01;
  VCDiffStreamingDecoderImpl *pVVar3;
  long lVar4;
  int local_40;
  int local_3c;
  VCDiffHeaderParser aVStack_38 [24];
  undefined4 local_20;
  long local_8;
  
  local_40 = 0;
  local_8 = ___stack_chk_guard;
  local_3c = 0;
  VCDiffHeaderParser::VCDiffHeaderParser(aVStack_38,param_1,param_2);
  cVar1 = VCDiffHeaderParser::ParseInt32(aVStack_38,"size of near cache",&local_40);
  if ((cVar1 == '\0') ||
     (cVar1 = VCDiffHeaderParser::ParseInt32(aVStack_38,"size of same cache",&local_3c),
     cVar1 == '\0')) {
    if (local_8 == ___stack_chk_guard) {
      FUN_05334d44(local_20);
      return;
    }
  }
  else {
    this_00 = (auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl> *)(this + 0xe8);
    pVVar2 = ::operator_new(0x600);
    std::auto_ptr<open_vcdiff::VCDiffCodeTableData>::reset
              ((auto_ptr<open_vcdiff::VCDiffCodeTableData> *)(this + 0xd8),pVVar2);
    __s = (void *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    memset(__s,0,0x600);
    FUN_05474ff8(this + 0xe0);
    this_01 = ::operator_new(0x40);
    VCDiffAddressCache::VCDiffAddressCache(this_01,local_40,local_3c);
    std::auto_ptr<open_vcdiff::VCDiffAddressCache>::reset
              ((auto_ptr<open_vcdiff::VCDiffAddressCache> *)(this + 0xd0),this_01);
    pVVar3 = ::operator_new(0x120);
    VCDiffStreamingDecoderImpl(pVVar3);
    std::auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl>::reset(this_00,pVVar3);
    pVVar3 = (VCDiffStreamingDecoderImpl *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
    StartDecoding(pVVar3,VCDiffCodeTableData::kDefaultCodeTableData,0x600);
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
    FUN_05334da8(lVar4 + 0xf0);
    VCDiffHeaderParser::ParsedSize(aVStack_38);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VCDiffStreamingDecoderImpl::ReadDeltaFileHeader(open_vcdiff::ParseableChunk*) */

undefined8 __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::ReadDeltaFileHeader
          (VCDiffStreamingDecoderImpl *this,ParseableChunk *param_1)

{
  VCDiffStreamingDecoderImpl VVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  VCDiffAddressCache *this_00;
  undefined8 uVar8;
  
  cVar3 = FoundFileHeader(this);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_05334c8c(*(undefined8 *)(param_1 + 8),uVar8);
  pcVar6 = (char *)FUN_05334c9c(uVar8);
  if (uVar5 < 4) {
    switch(uVar5 & 0xffffffff) {
    case 0:
      goto switchD_05336c3c_caseD_0;
    case 1:
      if (*pcVar6 == -0x2a) {
        return 0xfffffffe;
      }
      break;
    case 2:
      bVar2 = false;
      goto LAB_05336b64;
    case 3:
      goto switchD_05336c3c_caseD_3;
    default:
      goto switchD_05336c3c_default;
    }
  }
  else {
switchD_05336c3c_default:
    VVar1 = *(VCDiffStreamingDecoderImpl *)(pcVar6 + 3);
    this[0x20] = VVar1;
    if ((VVar1 != (VCDiffStreamingDecoderImpl)0x53) && (VVar1 != (VCDiffStreamingDecoderImpl)0x0)) {
      uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar6 = "Unrecognized VCDIFF format version";
      goto LAB_05336b8c;
    }
switchD_05336c3c_caseD_3:
    bVar2 = pcVar6[2] != -0x3c;
LAB_05336b64:
    if (((pcVar6[1] == -0x3d) && (*pcVar6 == -0x2a)) && (!bVar2)) {
      if (uVar5 < 5) {
switchD_05336c3c_caseD_0:
        return 0xfffffffe;
      }
      if ((pcVar6[4] & 1U) == 0) {
        if (((byte)pcVar6[4] >> 1 & 1) == 0) {
          this_00 = ::operator_new(0x40);
          VCDiffAddressCache::VCDiffAddressCache(this_00);
          std::auto_ptr<open_vcdiff::VCDiffAddressCache>::reset
                    ((auto_ptr<open_vcdiff::VCDiffAddressCache> *)(this + 0xd0),this_00);
          ParseableChunk::Advance(param_1,5);
          return 0;
        }
        lVar7 = FUN_05334c9c(*(undefined8 *)(param_1 + 0x10));
        pcVar6 = (char *)FUN_05334c88(*(undefined8 *)(param_1 + 8));
        iVar4 = InitCustomCodeTable(this,(char *)(lVar7 + 5),pcVar6);
        if (iVar4 != -2) {
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          ParseableChunk::Advance(param_1,(long)iVar4 + 5);
          return 0;
        }
        return 0xfffffffe;
      }
      uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
      pcVar6 = "Secondary compression is not supported";
      goto LAB_05336b8c;
    }
  }
  uVar8 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  pcVar6 = "Did not find VCDIFF header bytes; input is not a VCDIFF delta file";
LAB_05336b8c:
  uVar8 = FUN_054603b8(uVar8,pcVar6);
  FUN_0545f9e8(uVar8,FUN_0545fdc8);
  CheckFatalError();
  return 0xffffffff;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffStreamingDecoderImpl::DecodeChunk(char const*, unsigned long,
   open_vcdiff::OutputStringInterface*) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::DecodeChunk
          (VCDiffStreamingDecoderImpl *this,char *param_1,ulong param_2,
          OutputStringInterface *param_3)

{
  string *this_00;
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  undefined8 uVar4;
  ulong uVar5;
  VCDiffStreamingDecoderImpl VVar6;
  ParseableChunk aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  VVar6 = this[0x118];
  local_8 = ___stack_chk_guard;
  if (VVar6 == (VCDiffStreamingDecoderImpl)0x0) {
    uVar4 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar4 = FUN_054603b8(uVar4,"DecodeChunk() called without StartDecoding()");
    FUN_0545f9e8(uVar4,FUN_0545fdc8);
    CheckFatalError();
    Reset(this);
    goto LAB_05336d94;
  }
  this_00 = (string *)(this + 0x10);
  ParseableChunk::ParseableChunk(aPStack_20,param_1,param_2);
  cVar1 = FUN_0547419c(this_00);
  if (cVar1 == '\0') {
    FUN_05475980(this_00,param_1,param_2);
    pcVar3 = (char *)FUN_054742a4(this_00);
    uVar5 = FUN_05474178(this_00);
    ParseableChunk::SetDataBuffer(aPStack_20,pcVar3,uVar5);
    iVar2 = ReadDeltaFileHeader(this,aPStack_20);
    if (iVar2 == 0) goto LAB_05336e00;
LAB_05336d54:
    if (iVar2 == -1) {
      VVar6 = (VCDiffStreamingDecoderImpl)0x0;
      Reset(this);
      goto LAB_05336d94;
    }
  }
  else {
    iVar2 = ReadDeltaFileHeader(this,aPStack_20);
    if (iVar2 != 0) goto LAB_05336d54;
LAB_05336e00:
    iVar2 = ReadCustomCodeTable(this,aPStack_20);
    if (iVar2 != 0) goto LAB_05336d54;
    while (cVar1 = ParseableChunk::Empty(aPStack_20), cVar1 == '\0') {
      iVar2 = VCDiffDeltaFileWindow::DecodeWindow((VCDiffDeltaFileWindow *)(this + 0x28),aPStack_20)
      ;
      if (iVar2 != 0) goto LAB_05336d54;
      cVar1 = ReachedPlannedTargetFileSize(this);
      if (cVar1 != '\0') break;
      cVar1 = FUN_05334da4(this[0x119]);
      if (cVar1 == '\0') {
        FlushDecodedTarget(this,param_3);
      }
    }
  }
  pcVar3 = (char *)FUN_05334c9c(local_10);
  __n = FUN_05334c8c(local_18,local_10);
  std::string::assign(this_00,pcVar3,__n);
  AppendNewOutputText(this,param_3);
LAB_05336d94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(VVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffStreamingDecoderImpl::ReadCustomCodeTable(open_vcdiff::ParseableChunk*) */

void __thiscall
open_vcdiff::VCDiffStreamingDecoderImpl::ReadCustomCodeTable
          (VCDiffStreamingDecoderImpl *this,ParseableChunk *param_1)

{
  exception_ptr *this_00;
  exception_ptr *this_01;
  string *psVar1;
  char cVar2;
  uchar uVar3;
  long lVar4;
  VCDiffStreamingDecoderImpl *pVVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__dest;
  void *__src;
  VCDiffCodeTableData *pVVar9;
  VCDiffAddressCache *this_02;
  undefined8 uVar10;
  OutputString<std::string> aOStack_18 [16];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  lVar4 = std::__exception_ptr::exception_ptr::_M_get(this_00);
  uVar10 = 0;
  if (lVar4 == 0) goto LAB_05336f74;
  this_01 = (exception_ptr *)(this + 0xd8);
  lVar4 = std::__exception_ptr::exception_ptr::_M_get(this_01);
  if (lVar4 == 0) {
    uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    pcVar6 = "Internal error:  custom_code_table_decoder_ is set, but custom_code_table_ is NULL";
LAB_05337040:
    uVar10 = FUN_054603b8(uVar10,pcVar6);
    FUN_0545f9e8(uVar10,FUN_0545fdc8);
    CheckFatalError();
  }
  else {
    psVar1 = (string *)(this + 0xe0);
    OutputString<std::string>::OutputString(aOStack_18,psVar1);
    pVVar5 = (VCDiffStreamingDecoderImpl *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    pcVar6 = (char *)FUN_05334c9c(uVar10);
    uVar7 = FUN_05334c8c(*(undefined8 *)(param_1 + 8),uVar10);
    cVar2 = DecodeChunk(pVVar5,pcVar6,uVar7,(OutputStringInterface *)aOStack_18);
    if (cVar2 != '\0') {
      uVar7 = FUN_05474184(psVar1);
      if (uVar7 < 0x600) {
        FUN_05334ca0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        uVar10 = 0xfffffffe;
        goto LAB_05336f74;
      }
      pVVar5 = (VCDiffStreamingDecoderImpl *)std::__exception_ptr::exception_ptr::_M_get(this_00);
      cVar2 = FinishDecoding(pVVar5);
      if (cVar2 != '\0') {
        lVar4 = FUN_05474184(psVar1);
        if (lVar4 == 0x600) {
          __dest = (void *)std::__exception_ptr::exception_ptr::_M_get(this_01);
          __src = (void *)FUN_054742a4(psVar1);
          memcpy(__dest,__src,0x600);
          FUN_05474ff8(psVar1);
          pVVar5 = (VCDiffStreamingDecoderImpl *)
                   std::__exception_ptr::exception_ptr::_M_get(this_00);
          uVar7 = GetUnconsumedDataSize(pVVar5);
          ParseableChunk::FinishExcept(param_1,uVar7);
          std::auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl>::reset
                    ((auto_ptr<open_vcdiff::VCDiffStreamingDecoderImpl> *)this_00,
                     (VCDiffStreamingDecoderImpl *)0x0);
          pVVar9 = (VCDiffCodeTableData *)std::__exception_ptr::exception_ptr::_M_get(this_01);
          this_02 = (VCDiffAddressCache *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd0));
          uVar3 = VCDiffAddressCache::LastMode(this_02);
          VCDiffDeltaFileWindow::UseCodeTable((VCDiffDeltaFileWindow *)(this + 0x28),pVVar9,uVar3);
          uVar10 = 0;
          goto LAB_05336f74;
        }
        uVar10 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
        uVar10 = FUN_054603b8(uVar10,"Decoded custom code table size (");
        uVar8 = FUN_05474184(psVar1);
        uVar10 = thunk_FUN_0546069c(uVar10,uVar8);
        uVar10 = FUN_054603b8(uVar10,") does not match size of a code table (");
        uVar10 = thunk_FUN_0546069c(uVar10,0x600);
        pcVar6 = ")";
        goto LAB_05337040;
      }
    }
  }
  uVar10 = 0xffffffff;
LAB_05336f74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

