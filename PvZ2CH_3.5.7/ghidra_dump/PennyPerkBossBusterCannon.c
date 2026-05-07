// Class: PennyPerkBossBusterCannon


/* PennyPerkBossBusterCannon::~PennyPerkBossBusterCannon() */

void __thiscall
PennyPerkBossBusterCannon::~PennyPerkBossBusterCannon(PennyPerkBossBusterCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_06681ad0;
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkBossBusterCannon::~PennyPerkBossBusterCannon() */

void __thiscall
PennyPerkBossBusterCannon::~PennyPerkBossBusterCannon(PennyPerkBossBusterCannon *this)

{
  ~PennyPerkBossBusterCannon(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkBossBusterCannon::PennyPerkBossBusterCannon() */

void __thiscall
PennyPerkBossBusterCannon::PennyPerkBossBusterCannon(PennyPerkBossBusterCannon *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06681ad0;
  return;
}


/* PennyPerkBossBusterCannon::StaticNew() */

PennyPerkBossBusterCannon * PennyPerkBossBusterCannon::StaticNew(void)

{
  PennyPerkBossBusterCannon *this;
  
  this = ::operator_new(0x28);
  PennyPerkBossBusterCannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannon::StaticClassInit() */

void PennyPerkBossBusterCannon::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PennyPerkBossBusterCannon");
    (*pcVar2)(plVar1,asStack_10,FUN_036c54d0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkBossBusterCannon::StaticGetClass() */

long * PennyPerkBossBusterCannon::StaticGetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkBossBusterCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkBossBusterCannon::GetClass() const */

long * PennyPerkBossBusterCannon::GetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkBossBusterCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannon::calcNextUpdateTime() */

void __thiscall PennyPerkBossBusterCannon::calcNextUpdateTime(PennyPerkBossBusterCannon *this)

{
  long extraout_x0;
  float *pfVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_036c50b0(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + *pfVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannon::findTarget() */

void __thiscall PennyPerkBossBusterCannon::findTarget(PennyPerkBossBusterCannon *this)

{
  bool bVar1;
  char cVar2;
  LevelModuleManager *this_00;
  ZombossBattleModule *pZVar3;
  undefined8 uVar4;
  long *extraout_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_036c50ac(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pZVar3 = LevelModuleManager::GetModuleByClass<ZombossBattleModule>(this_00);
  if (pZVar3 != (ZombossBattleModule *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar4 = ZombieZombossMech::StaticGetClass();
    EntityFinder::GetEntitiesMatchingClass(avStack_20,2,uVar4);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      cVar2 = (**(code **)(*extraout_x0 + 0x328))();
      if ((cVar2 == '\0') &&
         (cVar2 = FUN_036c55b4(*(undefined4 *)((long)extraout_x0 + 0xcc)), cVar2 == '\0')) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        goto LAB_036c58cc;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_036c58cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannon::fireProjectiles() */

void __thiscall PennyPerkBossBusterCannon::fireProjectiles(PennyPerkBossBusterCannon *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long extraout_x0;
  int *piVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  Board *pBVar10;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findTarget(this);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar3) {
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar2 = *(int *)(this + 0x10);
    piVar4 = (int *)FUN_036c50b8(*(undefined8 *)(extraout_x0 + 0x78),(long)iVar2);
    iVar1 = *piVar4;
    piVar4 = (int *)FUN_036c50b8(*(undefined8 *)(extraout_x0 + 0x90),(long)iVar2);
    iVar2 = *piVar4;
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
                    /* WARNING: Load size is inaccurate */
    pBVar10._0_4_ = *puVar5;
    uVar9 = *(undefined4 *)((long)puVar5 + 4);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,
                   (RtWeakPtrBase *)(extraout_x0 + 0xa8));
        lVar6 = Board::AddProjectile(pBVar10._0_4_,uVar9,0,uVar8,aRStack_10,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        FUN_036c5200(lVar6 + 0x24);
        FUN_036c50a4((float)iVar2,lVar6 + 0xd8);
      } while (iVar7 != iVar1);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkBossBusterCannon::onUpdate() */

void __thiscall PennyPerkBossBusterCannon::onUpdate(PennyPerkBossBusterCannon *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long extraout_x0;
  int *piVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  Board *pBVar10;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  findTarget(this);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar3) {
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar2 = *(int *)(this + 0x10);
    piVar4 = (int *)FUN_036c50b8(*(undefined8 *)(extraout_x0 + 0x78),(long)iVar2);
    iVar1 = *piVar4;
    piVar4 = (int *)FUN_036c50b8(*(undefined8 *)(extraout_x0 + 0x90),(long)iVar2);
    iVar2 = *piVar4;
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
                    /* WARNING: Load size is inaccurate */
    pBVar10._0_4_ = *puVar5;
    uVar9 = *(undefined4 *)((long)puVar5 + 4);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,
                   (RtWeakPtrBase *)(extraout_x0 + 0xa8));
        lVar6 = Board::AddProjectile(pBVar10._0_4_,uVar9,0,uVar8,aRStack_10,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        FUN_036c5200(lVar6 + 0x24);
        FUN_036c50a4((float)iVar2,lVar6 + 0xd8);
      } while (iVar7 != iVar1);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

