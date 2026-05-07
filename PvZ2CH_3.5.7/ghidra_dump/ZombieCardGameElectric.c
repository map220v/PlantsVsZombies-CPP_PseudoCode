// Class: ZombieCardGameElectric


/* ZombieCardGameElectric::onZombieInitialize() */

void ZombieCardGameElectric::onZombieInitialize(void)

{
  Zombie *in_x0;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0xdc8) != '\0')
     ) {
    Zombie::buildProjectileSets(in_x0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameElectric::getAshPAMName() const */

void __thiscall ZombieCardGameElectric::getAshPAMName(ZombieCardGameElectric *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_SKYCITY_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieCardGameElectric::~ZombieCardGameElectric() */

void __thiscall ZombieCardGameElectric::~ZombieCardGameElectric(ZombieCardGameElectric *this)

{
  *(undefined ***)this = &PTR_GetClass_06a18ac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameElectric_06a194d8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieCardGameElectric::~ZombieCardGameElectric() */

void __thiscall ZombieCardGameElectric::~ZombieCardGameElectric(ZombieCardGameElectric *this)

{
  ~ZombieCardGameElectric(this + -0x10);
  return;
}


/* ZombieCardGameElectric::~ZombieCardGameElectric() */

void __thiscall ZombieCardGameElectric::~ZombieCardGameElectric(ZombieCardGameElectric *this)

{
  ~ZombieCardGameElectric(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCardGameElectric::~ZombieCardGameElectric() */

void __thiscall ZombieCardGameElectric::~ZombieCardGameElectric(ZombieCardGameElectric *this)

{
  ~ZombieCardGameElectric(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameElectric::StaticClassInit() */

void ZombieCardGameElectric::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCardGameElectric");
    (*pcVar2)(plVar1,asStack_10,FUN_04f43d14,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCardGameElectric::StaticGetClass() */

long * ZombieCardGameElectric::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameElectric::GetClass() const */

long * ZombieCardGameElectric::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCardGameElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCardGameElectric::ZombieCardGameElectric() */

void __thiscall ZombieCardGameElectric::ZombieCardGameElectric(ZombieCardGameElectric *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a18ac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCardGameElectric_06a194d8;
  return;
}


/* ZombieCardGameElectric::StaticNew() */

ZombieCardGameElectric * ZombieCardGameElectric::StaticNew(void)

{
  ZombieCardGameElectric *this;
  
  this = ::operator_new(0x800);
  ZombieCardGameElectric(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameElectric::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieCardGameElectric::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  ZombieCardGameElectricProperty *pZVar3;
  undefined8 uVar4;
  float *pfVar5;
  Projectile *this_00;
  undefined8 *puVar6;
  GridItem *pGVar7;
  long lVar8;
  float fVar9;
  undefined4 in_register_00005004;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(CONCAT44(in_register_00005004,param_2));
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')
       ) && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) &&
     (this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)(**(code **)(*(long *)param_1 + 0x228))(param_1),
     this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0)) {
    pZVar3 = Zombie::GetProps<ZombieCardGameElectricProperty>((Zombie *)param_1);
    FUN_05475d88(asStack_38,pZVar3 + 0x210);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    fVar11 = 10.0;
    Sexy::ToWString(asStack_38);
    Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar4,0xc,(RtName *)&local_18);
    Sexy::RtName::~RtName((RtName *)&local_18);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar12 = *pfVar5;
    fVar9 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
    fVar10 = pfVar5[1];
    lVar8 = *(long *)(gLawnApp + 0x9f0);
    if (*(char *)(lVar8 + 0x119) != '\0') {
      fVar11 = pfVar5[2] + 10.0;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
    this_00 = (Projectile *)
              Board::AddProjectile
                        ((Board *)(fVar12 - fVar9 * 55.0),lVar8,(RtName *)&local_18,param_1,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_28);
    Projectile::SetTarget(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_28 = *puVar6;
    local_20 = *(undefined4 *)(puVar6 + 1);
    pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)this);
    if (pGVar7 != (GridItem *)0x0) {
      local_18 = (**(code **)(*(long *)pGVar7 + 0x238))(0);
      local_14 = fVar10;
      local_10 = fVar11;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    Projectile::LaunchAt(this_00,(SexyVector3 *)&local_28,100.0,1.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCardGameElectric::findTarget() */

void __thiscall ZombieCardGameElectric::findTarget(ZombieCardGameElectric *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  RealObject *pRVar5;
  RealObject *extraout_x0;
  RealObject *extraout_x0_00;
  Plant *extraout_x0_01;
  RealObject *pRVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar2 == '\0') && (cVar2 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar2 == '\0')) {
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    iVar1 = iVar4 + -1;
    iVar4 = iVar4 + 1;
    (**(code **)(*(long *)this + 0x3a0))(auStack_30,this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pRVar5 = (RealObject *)Zombie::GetForcedTarget((Zombie *)this);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,auStack_30,iVar1,iVar4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
      if (((((cVar2 != '\0') &&
            (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) &&
           (cVar2 = Zombie::HasCondition(extraout_x0,0x65), cVar2 == '\0')) &&
          ((cVar2 = Zombie::HasCondition(extraout_x0,0x27), cVar2 == '\0' &&
           (cVar2 = Zombie::HasCondition(extraout_x0,0x25), cVar2 == '\0')))) &&
         (((cVar2 = Zombie::HasCondition(extraout_x0,0x2c), cVar2 == '\0' &&
           ((pRVar5 == extraout_x0 || (pRVar5 == (RealObject *)0x0)))) &&
          (cVar2 = Zombie::HasCondition(extraout_x0,0x71), pRVar6 = extraout_x0, cVar2 == '\0'))))
      goto LAB_04f44538;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,4,auStack_30,iVar1,iVar4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0_00);
      if (((cVar2 != '\0') &&
          (cVar2 = (**(code **)(*(long *)extraout_x0_00 + 0x218))(extraout_x0_00,this),
          cVar2 != '\0')) &&
         ((pRVar6 = extraout_x0_00, pRVar5 == extraout_x0_00 || (pRVar5 == (RealObject *)0x0))))
      goto LAB_04f44538;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,1,auStack_30,iVar1,iVar4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar2 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0_01);
      if ((cVar2 != '\0') &&
         ((pRVar6 = (RealObject *)extraout_x0_01, pRVar5 == (RealObject *)extraout_x0_01 ||
          (pRVar5 == (RealObject *)0x0)))) goto LAB_04f44538;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    pRVar6 = (RealObject *)0x0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    pRVar6 = (RealObject *)0x0;
  }
LAB_04f443a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pRVar6);
  }
  return;
LAB_04f44538:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  goto LAB_04f443a8;
}

