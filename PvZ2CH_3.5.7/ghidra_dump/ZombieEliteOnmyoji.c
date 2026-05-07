// Class: ZombieEliteOnmyoji


/* ZombieEliteOnmyoji::onDraw(Sexy::Graphics*) */

void __thiscall ZombieEliteOnmyoji::onDraw(ZombieEliteOnmyoji *this,Graphics *param_1)

{
  Zombie::onDraw((Graphics *)this);
  (**(code **)(*(long *)(this + 0x868) + 0x10))(this + 0x868,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteOnmyoji::StaticClassInit() */

void ZombieEliteOnmyoji::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteOnmyoji");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef7730,0x8b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteOnmyoji::StaticGetClass() */

long * ZombieEliteOnmyoji::StaticGetClass(void)

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
  uVar2 = ZombieOnmyoji::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteOnmyoji",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteOnmyoji::GetClass() const */

long * ZombieEliteOnmyoji::GetClass(void)

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
  uVar2 = ZombieOnmyoji::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteOnmyoji",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteOnmyoji::DoSpecialSkill() */

void __thiscall ZombieEliteOnmyoji::DoSpecialSkill(ZombieEliteOnmyoji *this)

{
  char cVar1;
  
  cVar1 = Zombie::HasCondition(this,0x19);
  if (cVar1 == '\0') {
    cVar1 = Zombie::HasCondition(this,0x77);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f);
      this[0x8a8] = (ZombieEliteOnmyoji)0x1;
      return;
    }
  }
  return;
}


/* ZombieEliteOnmyoji::onPlaceOnBoard() */

void __thiscall ZombieEliteOnmyoji::onPlaceOnBoard(ZombieEliteOnmyoji *this)

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
  ZombieEliteModule::SpawnZombieEffect(*puVar2,puVar2[1],puVar2[2],this + 0x868);
  return;
}


/* ZombieEliteOnmyoji::updateState_Eat() */

void __thiscall ZombieEliteOnmyoji::updateState_Eat(ZombieEliteOnmyoji *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    cVar2 = Zombie::IsSuspended((Zombie *)this);
    if (cVar2 == '\0') {
      if (this[0x8a9] != (ZombieEliteOnmyoji)0x0) {
        Zombie::setZombieState((Zombie *)this,0,0);
        return;
      }
LAB_04ef7f94:
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  else {
    bVar1 = Sexy::RtObject::IsA<GridItemArmrack>(this_00);
    if (bVar1) {
      cVar2 = Zombie::IsSuspended((Zombie *)this);
      if (cVar2 == '\0') {
        if (this[0x8a9] != (ZombieEliteOnmyoji)0x0) {
          Zombie::setZombieState((Zombie *)this,0,0);
          return;
        }
        goto LAB_04ef7f94;
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


/* ZombieEliteOnmyoji::updateState_Idle() */

void __thiscall ZombieEliteOnmyoji::updateState_Idle(ZombieEliteOnmyoji *this)

{
  long lVar1;
  float fVar2;
  
  Zombie::updateState_Idle((Zombie *)this);
  if (this[0x8a8] == (ZombieEliteOnmyoji)0x0) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x8a0) < fVar2) {
      Zombie::setZombieState((Zombie *)this,1,0);
      this[0x8a9] = (ZombieEliteOnmyoji)0x0;
      return;
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x8a4) < fVar2) {
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


/* ZombieEliteOnmyoji::onUpdate() */

void __thiscall ZombieEliteOnmyoji::onUpdate(ZombieEliteOnmyoji *this)

{
  ZombieEliteModule *this_00;
  undefined4 *puVar1;
  float fVar2;
  
  ZombieOnmyoji::onUpdate((ZombieOnmyoji *)this);
  this_00 = (ZombieEliteModule *)(this + 0x868);
  fVar2 = (float)FUN_04ef75a8(*(undefined4 *)(this + 0x280));
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


/* ZombieEliteOnmyoji::onZombieInitialize() */

void __thiscall ZombieEliteOnmyoji::onZombieInitialize(ZombieEliteOnmyoji *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long lVar2;
  ZombieEliteOnmyojiProps *pZVar3;
  undefined4 *puVar4;
  float fVar5;
  
  this[0x1b8] = (ZombieEliteOnmyoji)0x1;
  this[0x8a9] = (ZombieEliteOnmyoji)0x1;
  this[0x8a8] = (ZombieEliteOnmyoji)0x0;
  ZombieOnmyoji::onZombieInitialize((ZombieOnmyoji *)this);
  fVar5 = (float)FUN_04ef75ac(*(undefined4 *)(this + 0x284));
  ZombieEliteModule::SetMaxHealth((ZombieEliteModule *)(this + 0x868),fVar5);
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  Zombie::SetZombieScale((Zombie *)this,*(float *)(lVar2 + 0x1d4));
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  if (*(int *)(lVar2 + 0x1dc) == 2) {
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    ZombieEliteModule::SpawnZombieEffect
              (*puVar4,puVar4[1],puVar4[2],(ZombieEliteModule *)(this + 0x868));
  }
  fVar5 = (float)PVZ_T();
  pZVar3 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
  *(float *)(this + 0x8a0) = fVar5 + *(float *)(pZVar3 + 0x224);
  fVar5 = (float)PVZ_T();
  pZVar3 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
  *(float *)(this + 0x8a4) = fVar5 + *(float *)(pZVar3 + 0x228);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteOnmyoji::addSmallWind(float) */

void __thiscall ZombieEliteOnmyoji::addSmallWind(ZombieEliteOnmyoji *this,float param_1)

{
  ZombieEliteOnmyojiProps *pZVar1;
  HeianWindSubsystem *pHVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x8a9] == (ZombieEliteOnmyoji)0x0) {
    ZombieOnmyoji::addSmallWind(param_1);
  }
  else {
    HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_20);
    local_18 = 0xffffffff;
    pZVar1 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
    local_20 = *(undefined4 *)(pZVar1 + 0x22c);
    pZVar1 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
    fStack_1c = (float)*(int *)(pZVar1 + 0x230);
    pZVar1 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
    local_14 = *(undefined4 *)(pZVar1 + 0x218);
    pHVar2 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    local_30 = local_10;
    local_40 = CONCAT44(fStack_1c,local_20);
    uStack_38 = CONCAT44(local_14,local_18);
    HeianWindSubsystem::Generate(pHVar2,&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteOnmyoji::addTornado(float) */

void __thiscall ZombieEliteOnmyoji::addTornado(ZombieEliteOnmyoji *this,float param_1)

{
  int iVar1;
  ZombieEliteOnmyojiProps *pZVar2;
  HeianWindSubsystem *this_00;
  float fVar3;
  
  if (this[0x8a9] == (ZombieEliteOnmyoji)0x0) {
    ZombieOnmyoji::addTornado(param_1);
  }
  else {
    Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
    iVar1 = FUN_04ef75bc();
    this_00 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    HeianWindSubsystem::GenerateTornadoElite(this_00,iVar1);
  }
  this[0x8a8] = (ZombieEliteOnmyoji)0x0;
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieEliteOnmyojiProps>((Zombie *)this);
  *(float *)(this + 0x8a4) = fVar3 + *(float *)(pZVar2 + 0x228);
  return;
}


/* ZombieEliteOnmyoji::ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ZombieOnmyoji::ZombieOnmyoji((ZombieOnmyoji *)this);
  ZombieEliteModule::ZombieEliteModule((ZombieEliteModule *)(this + 0x868));
  *(undefined ***)this = &PTR_GetClass_06a07160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteOnmyoji_06a07ba0;
  *(undefined ***)(this + 0x868) = &PTR__ZombieEliteOnmyoji_06a07bd0;
  return;
}


/* ZombieEliteOnmyoji::StaticNew() */

ZombieEliteOnmyoji * ZombieEliteOnmyoji::StaticNew(void)

{
  ZombieEliteOnmyoji *this;
  
  this = ::operator_new(0x8b0);
  ZombieEliteOnmyoji(this);
  return this;
}


/* ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  *(undefined ***)this = &PTR_GetClass_06a07160;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEliteOnmyoji_06a07ba0;
  *(undefined ***)(this + 0x868) = &PTR__ZombieEliteOnmyoji_06a07bd0;
  nop();
  ZombieOnmyoji::~ZombieOnmyoji((ZombieOnmyoji *)this);
  return;
}


/* non-virtual thunk to ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ~ZombieEliteOnmyoji(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ~ZombieEliteOnmyoji(this + -0x868);
  return;
}


/* ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ~ZombieEliteOnmyoji(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ~ZombieEliteOnmyoji(this + -0x10);
  return;
}


/* non-virtual thunk to ZombieEliteOnmyoji::~ZombieEliteOnmyoji() */

void __thiscall ZombieEliteOnmyoji::~ZombieEliteOnmyoji(ZombieEliteOnmyoji *this)

{
  ~ZombieEliteOnmyoji(this + -0x868);
  return;
}


/* ZombieEliteOnmyoji::updateState_Walk() */

void __thiscall ZombieEliteOnmyoji::updateState_Walk(ZombieEliteOnmyoji *this)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((this[0x8a9] != (ZombieEliteOnmyoji)0x0) && (*pfVar2 < (float)iVar1)) {
    Zombie::setZombieState((Zombie *)this,0,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}

