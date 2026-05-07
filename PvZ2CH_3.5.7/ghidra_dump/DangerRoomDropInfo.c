// Class: DangerRoomDropInfo


/* DangerRoomDropInfo::ClearDate() */

void __thiscall DangerRoomDropInfo::ClearDate(DangerRoomDropInfo *this)

{
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x20));
  return;
}


/* DangerRoomDropInfo::~DangerRoomDropInfo() */

void __thiscall DangerRoomDropInfo::~DangerRoomDropInfo(DangerRoomDropInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06908d70;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<DropInfo,std::allocator<DropInfo>>::~vector
            ((vector<DropInfo,std::allocator<DropInfo>> *)(this + 8));
  nop();
  return;
}


/* DangerRoomDropInfo::~DangerRoomDropInfo() */

void __thiscall DangerRoomDropInfo::~DangerRoomDropInfo(DangerRoomDropInfo *this)

{
  ~DangerRoomDropInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::StaticClassInit() */

void DangerRoomDropInfo::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomDropTypeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04837d14,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldGateLevelKey");
    (*pcVar3)(plVar2,asStack_10,FUN_04837b50,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DropInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_048385bc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomDropInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0483882c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomDropInfo::StaticGetClass() */

long * DangerRoomDropInfo::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomDropInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomDropInfo::GetClass() const */

long * DangerRoomDropInfo::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomDropInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::GetDropInfo(WorldGateLevelKey&) */

void __thiscall DangerRoomDropInfo::GetDropInfo(DangerRoomDropInfo *this,WorldGateLevelKey *param_1)

{
  char cVar1;
  bool bVar2;
  WorldGateLevelKey *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (WorldGateLevelKey *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = WorldGateLevelKey::operator==(this_00,param_1);
    if (cVar1 != '\0') goto LAB_04838370;
    std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
              ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_18);
  }
  this_00 = (WorldGateLevelKey *)0x0;
LAB_04838370:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::GetWaveDrop(int) */

void __thiscall DangerRoomDropInfo::GetWaveDrop(DangerRoomDropInfo *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* DangerRoomDropInfo::IsInWaves(int) */

bool __thiscall DangerRoomDropInfo::IsInWaves(DangerRoomDropInfo *this,int param_1)

{
  int iVar1;
  
  iVar1 = GetWaveDrop(this,param_1);
  return iVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::RemoveWaveDrop(int) */

void __thiscall DangerRoomDropInfo::RemoveWaveDrop(DangerRoomDropInfo *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04838a20:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)this_00,local_10);
      goto LAB_04838a20;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::OrderDropZombie(int) */

void __thiscall DangerRoomDropInfo::OrderDropZombie(DangerRoomDropInfo *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  int extraout_w1;
  ulong uVar9;
  int iVar10;
  RtId aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = GetWaveDrop(this,param_1);
  if (0 < iVar3) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 &local_40,(RtWeakPtr *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtId::~RtId(aRStack_50);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       &local_40);
    if (cVar2 == '\0') {
      iVar10 = 0;
LAB_04838c58:
      do {
        iVar4 = FUN_04837a44(local_40,local_38);
        iVar4 = Sexy::Rand(iVar4);
        uVar5 = local_40;
        if (iVar4 < 0) {
          uVar6 = FUN_04837a44(local_40,local_38);
LAB_04838c88:
          uVar9 = (ulong)((int)uVar6 + -1);
        }
        else {
          uVar9 = (ulong)iVar4;
          uVar6 = FUN_04837a44(local_40,local_38);
          if (uVar6 <= uVar9) goto LAB_04838c88;
        }
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04837a50(uVar5,uVar9);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        cVar2 = FUN_04837a38(*(undefined1 *)(lVar8 + 0x570));
        if (cVar2 == '\0') {
          iVar10 = iVar10 + 1;
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04837a50(local_40,uVar9);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          FUN_04837f88(lVar8 + 0x570);
          RemoveWaveDrop(this,param_1);
          if (iVar10 == iVar3) break;
          goto LAB_04838c58;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar3);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_40)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::OrderDropWave(WorldGateLevelKey&, int) */

void __thiscall
DangerRoomDropInfo::OrderDropWave(DangerRoomDropInfo *this,WorldGateLevelKey *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetDropInfo(this,param_1);
  if (lVar3 != 0) {
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)(this + 0x20));
    if (cVar1 != '\0') {
      iVar2 = Sexy::Rand((int)((*(float *)(lVar3 + 0x14) + 1.0) - *(float *)(lVar3 + 0x10)));
      iVar2 = (int)((float)iVar2 + *(float *)(lVar3 + 0x10));
      if (0 < iVar2) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          local_c = Sexy::Rand(param_2 + 1);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(this + 0x20),&local_c);
        } while (iVar4 != iVar2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDropInfo::InitData() */

void __thiscall DangerRoomDropInfo::InitData(DangerRoomDropInfo *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  DangerRoomDropInfo *this_01;
  vector *pvVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x4e);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_048398ec:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      this_01 = Sexy::RtObject::Cast<DangerRoomDropInfo>(this_00);
      if (this_01 != (DangerRoomDropInfo *)0x0) {
        pvVar3 = (vector *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_01);
        std::vector<DropInfo,std::allocator<DropInfo>>::operator=
                  ((vector<DropInfo,std::allocator<DropInfo>> *)(this + 8),pvVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_048398ec;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* DangerRoomDropInfo::DangerRoomDropInfo() */

void __thiscall DangerRoomDropInfo::DangerRoomDropInfo(DangerRoomDropInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06908d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  InitData(this);
  return;
}


/* DangerRoomDropInfo::StaticNew() */

DangerRoomDropInfo * DangerRoomDropInfo::StaticNew(void)

{
  DangerRoomDropInfo *this;
  
  this = ::operator_new(0x38);
  DangerRoomDropInfo(this);
  return this;
}

