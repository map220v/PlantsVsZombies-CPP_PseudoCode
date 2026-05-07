// Class: LevelReplayData


/* LevelReplayData::CalculateNextTimeDelta(int) */

undefined1  [16] __thiscall
LevelReplayData::CalculateNextTimeDelta(LevelReplayData *this,int param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)this;
  iVar2 = FUN_03848ee0(uVar5,*(undefined8 *)(this + 8));
  if (param_1 < iVar2) {
    lVar4 = (long)param_1;
    do {
      lVar1 = lVar4 + 1;
      piVar3 = (int *)FUN_03848ef4(uVar5,lVar4);
      if (*piVar3 == 0) {
        return ZEXT416((uint)piVar3[1]);
      }
      lVar4 = lVar1;
    } while (lVar1 != (long)param_1 + 1 + (ulong)(uint)(~param_1 + iVar2));
  }
  PVZ_EOT();
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_8_ = extraout_var_00;
  return auVar6;
}


/* LevelReplayData::TEMPNAMEPLACEHOLDERVALUE(LevelReplayData const&) */

undefined8 __thiscall LevelReplayData::operator==(LevelReplayData *this,LevelReplayData *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)this;
  lVar2 = FUN_03848ee0(uVar7,*(undefined8 *)(this + 8));
  uVar8 = *(undefined8 *)param_1;
  lVar3 = FUN_03848ee0(uVar8,*(undefined8 *)(param_1 + 8));
  uVar4 = 0;
  if (lVar2 == lVar3) {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        piVar5 = (int *)FUN_03848ef4(uVar7,lVar3);
        lVar1 = lVar3 + 1;
        piVar6 = (int *)FUN_03848eec(uVar8,lVar3);
        if (*piVar5 != *piVar6) {
          return 0;
        }
        if ((float)piVar5[1] != (float)piVar6[1]) {
          return 0;
        }
        lVar3 = lVar1;
      } while (lVar1 != lVar2);
    }
    uVar7 = *(undefined8 *)(this + 0x28);
    lVar2 = FUN_03848efc(uVar7,*(undefined8 *)(this + 0x30));
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = FUN_03848efc(uVar8,*(undefined8 *)(param_1 + 0x30));
    uVar4 = 0;
    if (lVar2 == lVar3) {
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          piVar5 = (int *)FUN_03848f10(uVar7,lVar3);
          lVar1 = lVar3 + 1;
          piVar6 = (int *)FUN_03848f1c(uVar8,lVar3);
          if ((((char)piVar5[2] != (char)piVar6[2]) || (piVar5[1] != piVar6[1])) ||
             (*piVar5 != *piVar6)) {
            return 0;
          }
          lVar3 = lVar1;
        } while (lVar1 != lVar2);
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* LevelReplayData::GetLastEvent(LevelReplayEvent::EventType) */

int * __thiscall LevelReplayData::GetLastEvent(LevelReplayData *this,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)this;
  iVar2 = FUN_03848ee0(uVar6,*(undefined8 *)(this + 8));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1;
    do {
      lVar5 = lVar4 + -1;
      piVar3 = (int *)FUN_03848ef4(uVar6,lVar4);
      if (*piVar3 == param_2) {
        return piVar3;
      }
      lVar4 = lVar5;
    } while (lVar5 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  return (int *)0x0;
}


/* LevelReplayData::IsBinaryValid(Sexy::Buffer const*) */

bool LevelReplayData::IsBinaryValid(Buffer *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = Sexy::Buffer::GetDataLen(param_1);
  bVar1 = false;
  if (iVar2 != 0) {
    uVar3 = Sexy::Buffer::ReadByte(param_1);
    uVar4 = open_vcdiff::VCDiffAddressCache::FirstNearMode();
    bVar1 = (uVar3 & 0xff) == uVar4;
  }
  return bVar1;
}


/* LevelReplayData::Clear() */

void __thiscall LevelReplayData::Clear(LevelReplayData *this)

{
  FUN_03848f28(this + 8,*(undefined8 *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayData::ToString() */

void LevelReplayData::ToString(void)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 *in_x0;
  undefined8 uVar6;
  int *piVar7;
  PlantNameMapperServerID *this;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 auStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Plant aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = FUN_03848ee0(*in_x0,in_x0[1]);
  Sexy::StrFormat(L"Replay [%d events]\n",uVar6);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 5));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 5));
  while (bVar5 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar5) {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    uVar2 = piVar7[1];
    iVar3 = *piVar7;
    iVar4 = piVar7[2];
    this = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this,iVar3);
    Plant::GetFormattedNameString(aPStack_10,aRStack_18);
    uVar6 = FUN_054766ec(aPStack_10);
    pwVar1 = L"IMITATER";
    if ((char)iVar4 == '\0') {
      pwVar1 = L"";
    }
    Sexy::StrFormat(L"> plant %ls (level %d) [%ls]\n",auStack_20,uVar6,(ulong)uVar2,pwVar1);
    FUN_05476c50(aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    thunk_FUN_05477668();
    FUN_05476c50(auStack_20);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayData::ExportToBinary(Sexy::Buffer*) */

void __thiscall LevelReplayData::ExportToBinary(LevelReplayData *this,Buffer *param_1)

{
  undefined4 uVar1;
  short sVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  short *psVar6;
  uchar *puVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = open_vcdiff::VCDiffAddressCache::FirstNearMode();
  Sexy::Buffer::WriteByte(param_1,uVar3);
  iVar5 = FUN_03848efc(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  Sexy::Buffer::WriteInt32(param_1,iVar5);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar4) {
    psVar6 = (short *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar1 = *(undefined4 *)(psVar6 + 2);
    sVar2 = psVar6[4];
    Sexy::Buffer::WriteInt16(param_1,*psVar6);
    Sexy::Buffer::WriteByte(param_1,(uchar)uVar1);
    Sexy::Buffer::WriteByte(param_1,(uchar)sVar2);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  iVar5 = FUN_03848ee0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  Sexy::Buffer::WriteInt32(param_1,iVar5);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar4) {
    puVar7 = (uchar *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    fVar8 = *(float *)(puVar7 + 4);
    Sexy::Buffer::WriteByte(param_1,*puVar7);
    Sexy::Buffer::WriteFloat(param_1,fVar8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayData::AddEvent(LevelReplayEvent::EventType, float, std::string const&) */

void LevelReplayData::AddEvent
               (undefined4 param_1,
               vector<LevelReplayEvent,std::allocator<LevelReplayEvent>> *param_2,undefined4 param_3
               )

{
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = param_3;
  local_c = param_1;
  std::vector<LevelReplayEvent,std::allocator<LevelReplayEvent>>::push_back
            (param_2,(LevelReplayEvent *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelReplayData::ImportFromBinary(Sexy::Buffer const*) */

void __thiscall LevelReplayData::ImportFromBinary(LevelReplayData *this,Buffer *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_18;
  undefined4 local_14;
  long local_8;
  
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::Buffer::ReadByte(param_1);
  uVar5 = open_vcdiff::VCDiffAddressCache::FirstNearMode();
  if ((uVar4 & 0xff) == uVar5) {
    iVar6 = Sexy::Buffer::ReadInt32(param_1);
    std::vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>>::clear
              ((vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>> *)(this + 0x28));
    if (0 < iVar6) {
      do {
        iVar7 = iVar7 + 1;
        sVar3 = Sexy::Buffer::ReadInt16(param_1);
        bVar1 = Sexy::Buffer::ReadByte(param_1);
        cVar2 = Sexy::Buffer::ReadByte(param_1);
        JoustPlayerPlantData::JoustPlayerPlantData
                  ((JoustPlayerPlantData *)&local_18,(int)sVar3,(uint)bVar1,cVar2 != '\0');
        std::vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>>::push_back
                  ((vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>> *)
                   (this + 0x28),(JoustPlayerPlantData *)&local_18);
      } while (iVar7 != iVar6);
    }
    iVar7 = 0;
    iVar6 = Sexy::Buffer::ReadInt32(param_1);
    std::vector<LevelReplayEvent,std::allocator<LevelReplayEvent>>::clear
              ((vector<LevelReplayEvent,std::allocator<LevelReplayEvent>> *)this);
    if (0 < iVar6) {
      do {
        iVar7 = iVar7 + 1;
        local_18 = Sexy::Buffer::ReadByte(param_1);
        local_18 = local_18 & 0xff;
        local_14 = Sexy::Buffer::ReadFloat(param_1);
        std::vector<LevelReplayEvent,std::allocator<LevelReplayEvent>>::push_back
                  ((vector<LevelReplayEvent,std::allocator<LevelReplayEvent>> *)this,
                   (LevelReplayEvent *)&local_18);
      } while (iVar7 != iVar6);
    }
    iVar7 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* LevelReplayData::Init(std::string const&, unsigned long) */

void __thiscall LevelReplayData::Init(LevelReplayData *this,string *param_1,ulong param_2)

{
  thunk_FUN_05475e00(this + 0x18);
  *(ulong *)(this + 0x20) = param_2;
  return;
}


/* LevelReplayData::HasData() const */

bool __thiscall LevelReplayData::HasData(LevelReplayData *this)

{
  long lVar1;
  
  lVar1 = FUN_0384a0c0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return lVar1 != 0;
}


/* LevelReplayData::GetEventCount() const */

void __thiscall LevelReplayData::GetEventCount(LevelReplayData *this)

{
  FUN_0384a0c0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* LevelReplayData::GetEvent(int) const */

void __thiscall LevelReplayData::GetEvent(LevelReplayData *this,int param_1)

{
  FUN_0384a0e8(*(undefined8 *)this,(long)param_1);
  return;
}


/* LevelReplayData::LevelReplayData() */

void __thiscall LevelReplayData::LevelReplayData(LevelReplayData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0(this + 0x18);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x28));
  return;
}


/* LevelReplayData::~LevelReplayData() */

void __thiscall LevelReplayData::~LevelReplayData(LevelReplayData *this)

{
  JoustPlayerLoadoutData::~JoustPlayerLoadoutData((JoustPlayerLoadoutData *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::vector<LevelReplayEvent,std::allocator<LevelReplayEvent>>::~vector
            ((vector<LevelReplayEvent,std::allocator<LevelReplayEvent>> *)this);
  return;
}

