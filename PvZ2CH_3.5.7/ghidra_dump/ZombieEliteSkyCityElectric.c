// Class: ZombieEliteSkyCityElectric


/* ZombieEliteSkyCityElectric::takeBodyDamage(DamageInfo const&) */

void __thiscall
ZombieEliteSkyCityElectric::takeBodyDamage(ZombieEliteSkyCityElectric *this,DamageInfo *param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x4000);
  if (bVar1) {
    return;
  }
  Zombie::takeBodyDamage((Zombie *)this,param_1);
  return;
}


/* ZombieEliteSkyCityElectric::onDraw(Sexy::Graphics*) */

void __thiscall
ZombieEliteSkyCityElectric::onDraw(ZombieEliteSkyCityElectric *this,Graphics *param_1)

{
  Zombie::onDraw((Graphics *)this);
  (**(code **)(*(long *)(this + 0x8f0) + 0x10))(this + 0x8f0,param_1);
  return;
}


/* ZombieEliteSkyCityElectric::updateState_Walk() */

void __thiscall ZombieEliteSkyCityElectric::updateState_Walk(ZombieEliteSkyCityElectric *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((this[0x931] != (ZombieEliteSkyCityElectric)0x0) && (*pfVar3 < (float)iVar2)) {
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if ((cVar1 != '\0') && (this[0x852] != (ZombieEliteSkyCityElectric)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x11,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieEliteSkyCityElectric::ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ZombieSkyCityElectric::ZombieSkyCityElectric((ZombieSkyCityElectric *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x8f0));
  *(undefined ***)this = &PTR_GetClass_06a07c90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteSkyCityElectric_06a08700;
  *(undefined ***)(this + 0x8f0) = &PTR__ZombieEliteSkyCityElectric_06a08730;
  return;
}


/* ZombieEliteSkyCityElectric::StaticNew() */

ZombieEliteSkyCityElectric * ZombieEliteSkyCityElectric::StaticNew(void)

{
  ZombieEliteSkyCityElectric *this;
  
  this = ::operator_new(0x938);
  ZombieEliteSkyCityElectric(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteSkyCityElectric::StaticClassInit() */

void ZombieEliteSkyCityElectric::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteSkyCityElectric");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef896c,0x938,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteSkyCityElectric::StaticGetClass() */

long * ZombieEliteSkyCityElectric::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityElectric::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteSkyCityElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteSkyCityElectric::GetClass() const */

long * ZombieEliteSkyCityElectric::GetClass(void)

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
  uVar2 = ZombieSkyCityElectric::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteSkyCityElectric",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteSkyCityElectric::onPlaceOnBoard() */

void __thiscall ZombieEliteSkyCityElectric::onPlaceOnBoard(ZombieEliteSkyCityElectric *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  undefined4 *puVar2;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(int *)(lVar1 + 0x1dc) != 2) {
    return;
  }
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SpawnZombieEffect(*puVar2,puVar2[1],puVar2[2],this + 0x8f0);
  return;
}


/* ZombieEliteSkyCityElectric::updateState_Eat() */

void __thiscall ZombieEliteSkyCityElectric::updateState_Eat(ZombieEliteSkyCityElectric *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    cVar2 = Zombie::IsSuspended((Zombie *)this);
    if (cVar2 == '\0') {
      if (this[0x931] != (ZombieEliteSkyCityElectric)0x0) {
        Zombie::setZombieState((Zombie *)this,0,0);
        return;
      }
LAB_04ef9570:
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  else {
    bVar1 = Sexy::RtObject::IsA<GridItemArmrack>(this_00);
    if (bVar1) {
      cVar2 = Zombie::IsSuspended((Zombie *)this);
      if (cVar2 == '\0') {
        if (this[0x931] != (ZombieEliteSkyCityElectric)0x0) {
          Zombie::setZombieState((Zombie *)this,0,0);
          return;
        }
        goto LAB_04ef9570;
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_00);
      if (!bVar1) {
        (**(code **)(*(long *)this + 0x958))(this,this_00);
        return;
      }
    }
  }
  return;
}


/* ZombieEliteSkyCityElectric::onUpdate() */

void __thiscall ZombieEliteSkyCityElectric::onUpdate(ZombieEliteSkyCityElectric *this)

{
  ZombieEliteModule *this_00;
  undefined4 *puVar1;
  float fVar2;
  
  Zombie::onUpdate((Zombie *)this);
  this_00 = (ZombieEliteModule *)(this + 0x8f0);
  fVar2 = (float)FUN_04ef8664(*(undefined4 *)(this + 0x280));
  ZombieEliteModule::SetCurrentHealth(this_00,fVar2);
  puVar1 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombieEliteModule::SetPosition(*puVar1,puVar1[1],puVar1[2],this_00);
  fVar2 = (float)PVZ_T();
  HeroPlantTalentButton::OnSelect
            ((HeroPlantTalentButton *)this_00,fVar2 <= *(float *)(this + 0x1bc));
  return;
}


/* ZombieEliteSkyCityElectric::onZombieInitialize() */

void __thiscall ZombieEliteSkyCityElectric::onZombieInitialize(ZombieEliteSkyCityElectric *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  ZombieEliteSkyCityElectricProps *pZVar2;
  float fVar3;
  
  this[0x1b8] = (ZombieEliteSkyCityElectric)0x1;
  this[0x931] = (ZombieEliteSkyCityElectric)0x1;
  this[0x930] = (ZombieEliteSkyCityElectric)0x0;
  ZombieLostCityLostPilot::onZombieInitialize((ZombieLostCityLostPilot *)this);
  fVar3 = (float)FUN_04ef8668(*(undefined4 *)(this + 0x284));
  ZombieEliteModule::SetMaxHealth((ZombieEliteModule *)(this + 0x8f0),fVar3);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Zombie::SetZombieScale((Zombie *)this,*(float *)(lVar1 + 0x1d4));
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEliteSkyCityElectricProps>((Zombie *)this);
  *(float *)(this + 0x928) = fVar3 + *(float *)(pZVar2 + 0x238);
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEliteSkyCityElectricProps>((Zombie *)this);
  *(float *)(this + 0x92c) = fVar3 + *(float *)(pZVar2 + 0x23c);
  return;
}


/* ZombieEliteSkyCityElectric::FinishSpecialSkill() */

void __thiscall ZombieEliteSkyCityElectric::FinishSpecialSkill(ZombieEliteSkyCityElectric *this)

{
  ZombieEliteSkyCityElectricProps *pZVar1;
  float fVar2;
  
  this[0x930] = (ZombieEliteSkyCityElectric)0x0;
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieEliteSkyCityElectricProps>((Zombie *)this);
  *(float *)(this + 0x92c) = fVar2 + *(float *)(pZVar1 + 0x23c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteSkyCityElectric::DoSpecialSkill() */

void __thiscall ZombieEliteSkyCityElectric::DoSpecialSkill(ZombieEliteSkyCityElectric *this)

{
  long lVar1;
  char *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,0);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_SkyCity_Lightning_Release");
  ZombieWithActions::getBaseActionDefinition<ZombieEliteElectricProjectileActionDefinition>();
  ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  this[0x930] = (ZombieEliteSkyCityElectric)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteSkyCityElectric::updateState_Idle() */

void __thiscall ZombieEliteSkyCityElectric::updateState_Idle(ZombieEliteSkyCityElectric *this)

{
  long lVar1;
  float fVar2;
  
  Zombie::updateState_Idle((Zombie *)this);
  if (this[0x930] == (ZombieEliteSkyCityElectric)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x928) < fVar2) {
      Zombie::setZombieState((Zombie *)this,1,0);
      this[0x931] = (ZombieEliteSkyCityElectric)0x0;
      return;
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x92c) < fVar2) {
      DoSpecialSkill(this);
    }
    lVar1 = (**(code **)(*(long *)this + 0x428))(this);
    if (lVar1 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
      return;
    }
  }
  return;
}


/* ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  *(undefined ***)this = &PTR_GetClass_06a07c90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteSkyCityElectric_06a08700;
  *(undefined ***)(this + 0x8f0) = &PTR__ZombieEliteSkyCityElectric_06a08730;
  nop();
  ZombieSkyCityElectric::~ZombieSkyCityElectric((ZombieSkyCityElectric *)this);
  return;
}


/* non-virtual thunk to ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ~ZombieEliteSkyCityElectric(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ~ZombieEliteSkyCityElectric(this + -0x8f0);
  return;
}


/* ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ~ZombieEliteSkyCityElectric(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ~ZombieEliteSkyCityElectric(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric() */

void __thiscall
ZombieEliteSkyCityElectric::~ZombieEliteSkyCityElectric(ZombieEliteSkyCityElectric *this)

{
  ~ZombieEliteSkyCityElectric(this + -0x8f0);
  return;
}

