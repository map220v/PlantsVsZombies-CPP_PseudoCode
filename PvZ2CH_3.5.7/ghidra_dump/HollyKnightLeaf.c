// Class: HollyKnightLeaf


/* HollyKnightLeaf::~HollyKnightLeaf() */

void __thiscall HollyKnightLeaf::~HollyKnightLeaf(HollyKnightLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_06825aa0;
  *(undefined ***)(this + 0x10) = &PTR__HollyKnightLeaf_06825c90;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HollyKnightLeaf::~HollyKnightLeaf() */

void __thiscall HollyKnightLeaf::~HollyKnightLeaf(HollyKnightLeaf *this)

{
  ~HollyKnightLeaf(this + -0x10);
  return;
}


/* HollyKnightLeaf::~HollyKnightLeaf() */

void __thiscall HollyKnightLeaf::~HollyKnightLeaf(HollyKnightLeaf *this)

{
  ~HollyKnightLeaf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HollyKnightLeaf::~HollyKnightLeaf() */

void __thiscall HollyKnightLeaf::~HollyKnightLeaf(HollyKnightLeaf *this)

{
  ~HollyKnightLeaf(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyKnightLeaf::StaticClassInit() */

void HollyKnightLeaf::StaticClassInit(void)

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
    std::string::string(asStack_10,"HollyKnightLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_04287334,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HollyKnightLeaf::StaticGetClass() */

long * HollyKnightLeaf::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"HollyKnightLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyKnightLeaf::GetClass() const */

long * HollyKnightLeaf::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"HollyKnightLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyKnightLeaf::HollyKnightLeaf() */

void __thiscall HollyKnightLeaf::HollyKnightLeaf(HollyKnightLeaf *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1b0) = 1;
  *(undefined ***)this = &PTR_GetClass_06825aa0;
  *(undefined ***)(this + 0x10) = &PTR__HollyKnightLeaf_06825c90;
  return;
}


/* HollyKnightLeaf::StaticNew() */

HollyKnightLeaf * HollyKnightLeaf::StaticNew(void)

{
  HollyKnightLeaf *this;
  
  this = ::operator_new(0x1b8);
  HollyKnightLeaf(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyKnightLeaf::shouldKnockback(BoardEntity*) */

void __thiscall HollyKnightLeaf::shouldKnockback(HollyKnightLeaf *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Zombie *this_00;
  bool bVar4;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (BoardEntity *)0x0) &&
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
       (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0)) &&
      ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')))) &&
     (cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0')) {
    cVar1 = Zombie::IsBerserk(this_00);
    if (cVar1 == '\0') {
      Zombie::GetCurrentTitleStatus();
      bVar4 = false;
      if (((local_58 == '\0') && (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) {
        cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00);
        TitleStatus::~TitleStatus(aTStack_70);
        if (cVar1 == '\0') {
          iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
          iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
          bVar4 = iVar2 < iVar3 + -1;
        }
      }
      else {
        TitleStatus::~TitleStatus(aTStack_70);
      }
      goto LAB_0428926c;
    }
  }
  bVar4 = false;
LAB_0428926c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyKnightLeaf::hitZombie(BoardEntity*) */

void HollyKnightLeaf::hitZombie(BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  Zombie *this;
  float *pfVar4;
  ZombieTosserSubSystem *pZVar5;
  RtObject *in_x1;
  Board *this_00;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (RtObject *)0x0) {
    Projectile::GetProps((Projectile *)param_1);
    nop();
    cVar2 = shouldKnockback((HollyKnightLeaf *)param_1,(BoardEntity *)in_x1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(extraout_x0 + 0x1e4);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      this = Sexy::RtObject::Cast<Zombie>(in_x1);
      fVar6 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                               (this,(float)(iVar1 * iVar3));
      fVar9 = 0.0;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      local_60[0] = fVar6;
      if (this_00[0x119] == (Board)0x0) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar7 = *pfVar4;
      }
      else {
        fVar9 = 70.0;
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar7 = *pfVar4;
      }
      if (fVar7 < fVar6) {
        pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(this_00);
        fVar6 = *(float *)(extraout_x0 + 0x1ec);
        uVar8 = *(undefined4 *)(extraout_x0 + 0x1e8);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)(fVar9 + fVar6),uVar8,pZVar5,this,local_60,aRStack_50,1)
        ;
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
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
/* HollyKnightLeaf::onSplashDamageHitEntity(BoardEntity*) */

void HollyKnightLeaf::onSplashDamageHitEntity(BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  Zombie *this;
  float *pfVar4;
  ZombieTosserSubSystem *pZVar5;
  RtObject *in_x1;
  Board *this_00;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float afStack_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (in_x1 != (RtObject *)0x0) {
    Projectile::GetProps((Projectile *)param_1);
    nop();
    cVar2 = shouldKnockback((HollyKnightLeaf *)param_1,(BoardEntity *)in_x1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(extraout_x0 + 0x1e4);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      this = Sexy::RtObject::Cast<Zombie>(in_x1);
      fVar6 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                               (this,(float)(iVar1 * iVar3));
      fVar9 = 0.0;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      afStack_60[0] = fVar6;
      if (this_00[0x119] == (Board)0x0) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar7 = *pfVar4;
      }
      else {
        fVar9 = 70.0;
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar7 = *pfVar4;
      }
      if (fVar7 < fVar6) {
        pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(this_00);
        fVar6 = *(float *)(extraout_x0 + 0x1ec);
        uVar8 = *(undefined4 *)(extraout_x0 + 0x1e8);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)(fVar9 + fVar6),uVar8,pZVar5,this,afStack_60,aRStack_50,
                   1);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyKnightLeaf::OnCollideGround() */

void __thiscall HollyKnightLeaf::OnCollideGround(HollyKnightLeaf *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Plant *this_00;
  RtObject *this_01;
  HollyKnightLeafProps *pHVar4;
  undefined8 uVar5;
  string *psVar6;
  RiverCrossingModule *this_02;
  long *plVar7;
  Board *pBVar8;
  code *pcVar9;
  int local_20;
  int local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x18),*(float *)(this + 0x1c));
  iVar2 = local_1c;
  iVar1 = local_20;
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(pBVar8,iVar1,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pHVar4 = Sexy::RtObject::Cast<HollyKnightLeafProps>(this_01);
  if (this_00 != (Plant *)0x0) {
    plVar7 = *(long **)(this_00 + 0xa8);
    pcVar9 = *(code **)(*plVar7 + 0x20);
    uVar5 = HollyBarrierLeaf::StaticGetClass();
    cVar3 = (*pcVar9)(plVar7,uVar5);
    if (cVar3 != '\0') {
      if (pHVar4[0x1e0] == (HollyKnightLeafProps)0x0) {
        Plant::Heal(this_00);
      }
      else {
        Board::KillPlantAt(*(Board **)(gLawnApp + 0x9f0),local_20,local_1c);
      }
    }
  }
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"hollybarrierleaf");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  cVar3 = Board::CanPlantAt(pBVar8,&local_20,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar3 != '\0') {
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"hollybarrierleaf");
    Board::AddPlant(pBVar8,local_20,local_1c,asStack_10,*(int *)(this + 0x1b0),false,false,false,
                    false);
    nop();
    std::string::~string(asStack_10);
    nop();
    RiverCrossingModule::SetTutorial(this_02,(bool)pHVar4[0x1e0]);
    HollyBarrierLeaf::initEffect((HollyBarrierLeaf *)this_02);
  }
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

