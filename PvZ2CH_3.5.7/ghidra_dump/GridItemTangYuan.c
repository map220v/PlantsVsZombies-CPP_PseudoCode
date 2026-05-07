// Class: GridItemTangYuan


/* GridItemTangYuan::CalcRenderOrder() const */

void __thiscall GridItemTangYuan::CalcRenderOrder(GridItemTangYuan *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04c9db04(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,1);
  return;
}


/* non-virtual thunk to GridItemTangYuan::CalcRenderOrder() const */

void __thiscall GridItemTangYuan::CalcRenderOrder(GridItemTangYuan *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::StaticClassInit() */

void GridItemTangYuan::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTangYuan");
    (*pcVar2)(plVar1,asStack_10,FUN_04c9ee74,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTangYuan::StaticGetClass() */

long * GridItemTangYuan::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTangYuan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTangYuan::GetClass() const */

long * GridItemTangYuan::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTangYuan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTangYuan::~GridItemTangYuan() */

void __thiscall GridItemTangYuan::~GridItemTangYuan(GridItemTangYuan *this)

{
  *(undefined ***)this = &PTR_GetClass_06997240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTangYuan_069974f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemTangYuan::~GridItemTangYuan() */

void __thiscall GridItemTangYuan::~GridItemTangYuan(GridItemTangYuan *this)

{
  ~GridItemTangYuan(this + -0x10);
  return;
}


/* GridItemTangYuan::~GridItemTangYuan() */

void __thiscall GridItemTangYuan::~GridItemTangYuan(GridItemTangYuan *this)

{
  ~GridItemTangYuan(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTangYuan::~GridItemTangYuan() */

void __thiscall GridItemTangYuan::~GridItemTangYuan(GridItemTangYuan *this)

{
  ~GridItemTangYuan(this + -0x10);
  return;
}


/* GridItemTangYuan::GridItemTangYuan() */

void __thiscall GridItemTangYuan::GridItemTangYuan(GridItemTangYuan *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06997240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTangYuan_069974f8;
  *(undefined4 *)(this + 0x1ac) = 3;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  return;
}


/* GridItemTangYuan::StaticNew() */

GridItemTangYuan * GridItemTangYuan::StaticNew(void)

{
  GridItemTangYuan *this;
  
  this = ::operator_new(0x1b8);
  GridItemTangYuan(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::playAnimalGumZombie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemTangYuan::playAnimalGumZombie(GridItemTangYuan *this,RtReflectionDelegate *param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_58;
  std::string::string(asStack_60,"dump_attack");
  nop();
  if (*(int *)(this + 0x1ac) == 1) {
    std::string::append(asStack_60,"dump_attack_3",(size_t)__n);
  }
  else if (*(int *)(this + 0x1ac) == 2) {
    std::string::append(asStack_60,"dump_attack_2",(size_t)__n);
  }
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop(pPVar1,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::playAnimalDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall GridItemTangYuan::playAnimalDie(undefined8 param_1,RtReflectionDelegate *param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"bowl_idle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::playAnimalIdle() */

void __thiscall GridItemTangYuan::playAnimalIdle(GridItemTangYuan *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_40;
  std::string::string(asStack_48,"dump_idle1");
  nop();
  iVar1 = *(int *)(this + 0x1ac);
  if (iVar1 == 0) {
    std::string::append(asStack_48,"bowl_idle",(size_t)__n);
  }
  else if (iVar1 == 1) {
    std::string::append(asStack_48,"dump_idle3",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_48,"dump_idle2",(size_t)__n);
  }
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::setState(int) */

void __thiscall GridItemTangYuan::setState(GridItemTangYuan *this,int param_1)

{
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_1) {
    *(int *)(this + 0x1a8) = param_1;
    if (param_1 == 1) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      playAnimalGumZombie(this,aRStack_50);
    }
    else {
      if (param_1 != 2) {
        if (param_1 == 0) {
          playAnimalIdle(this);
        }
        goto LAB_04c9f54c;
      }
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      playAnimalDie(this,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
LAB_04c9f54c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTangYuan::onGridItemInitialize() */

void __thiscall GridItemTangYuan::onGridItemInitialize(GridItemTangYuan *this)

{
  GridItemAnimationProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04c9daf4(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04c9dafc(this + 0x128);
  setState(this,0);
  playAnimalIdle(this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::isInBlackList(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemTangYuan::isInBlackList(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined8 uVar2;
  Zombie *this;
  string *psVar3;
  string *psVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  RtMixedPtrBase aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"GumnutDefault");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    while( true ) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar6 = FUN_04c9dba0(*(undefined8 *)(lVar5 + 0x2e8),*(undefined8 *)(lVar5 + 0x2f0));
      if (uVar6 <= uVar7) break;
      this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      psVar3 = (string *)Zombie::GetTypeName(this);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      psVar4 = (string *)FUN_04c9dbac(*(undefined8 *)(lVar5 + 0x2e8),uVar7);
      cVar1 = std::operator==(psVar3,psVar4);
      if (cVar1 != '\0') goto LAB_04c9f7c4;
      uVar7 = uVar7 + 1;
    }
  }
  cVar1 = '\0';
LAB_04c9f7c4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::CanGumZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemTangYuan::CanGumZombie(GridItemTangYuan *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RtObject *pRVar7;
  long lVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar4 + 0x330))();
  if (cVar1 == '\0') {
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar5,1);
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar5,3);
      if (cVar1 == '\0') {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar5,4);
        if (cVar1 == '\0') {
          uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = Zombie::HasCondition(uVar5,0x55);
          if (cVar1 == '\0') {
            uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = Zombie::HasCondition(uVar5,0x3f);
            if (cVar1 == '\0') {
              uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::HasCondition(uVar5,0x11);
              if (cVar1 == '\0') {
                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = (**(code **)(*plVar4 + 0x2a8))();
                if (cVar1 == '\0') {
                  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  cVar1 = (**(code **)(*plVar4 + 0x338))();
                  if (cVar1 == '\0') {
                    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    cVar1 = Zombie::HasFogImmune(pZVar6);
                    if (cVar1 == '\0') {
                      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      cVar1 = Zombie::IsBerserk(pZVar6);
                      if (cVar1 == '\0') {
                        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        cVar1 = Zombie::IsFlying(pZVar6);
                        if (cVar1 == '\0') {
                          pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                          bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar7);
                          if (!bVar2) {
                            pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                            bVar2 = Sexy::RtObject::IsA<Zomboss>(pRVar7);
                            if (!bVar2) {
                              plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                              cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                              if (cVar1 == '\0') {
                                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                cVar1 = (**(code **)(*plVar4 + 0x508))();
                                if (cVar1 == '\0') {
                                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                  cVar1 = FUN_02fd478c(*(undefined4 *)(lVar8 + 0xcc));
                                  if (cVar1 == '\0') {
                                    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                                    cVar1 = RealObject::IsOnTeam(uVar5,1);
                                    if (cVar1 == '\0') {
                                      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 (param_2);
                                      cVar1 = (**(code **)(*plVar4 + 0x410))();
                                      if (cVar1 != '\0') {
                                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                                  (aRStack_10,(RtWeakPtrBase *)param_2);
                                        bVar3 = isInBlackList(this,aRStack_10);
                                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                                        bVar3 = bVar3 ^ 1;
                                        goto LAB_04c9f844;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_04c9f844:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::onAnimDone(std::string const&) */

void __thiscall GridItemTangYuan::onAnimDone(GridItemTangYuan *this,string *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  string *__n;
  DamageInfo *pDVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"bowl_idle");
  if (bVar2) {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      pDVar5._0_4_ = (DamageInfo *)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      pDVar5._0_4_ = (DamageInfo *)(**(code **)(*(long *)this + 0x1d8))();
    }
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar5._0_4_,local_70,local_6c,aDStack_68,2,aPStack_78,0);
    (**(code **)(*(long *)this + 0x120))(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    bVar2 = std::operator==(param_1,"dump_attack");
    if (((bVar2) || (bVar2 = std::operator==(param_1,"dump_attack_2"), bVar2)) ||
       (bVar2 = std::operator==(param_1,"dump_attack_3"), bVar2)) {
      iVar1 = *(int *)(this + 0x1ac);
      this_00 = (RtWeakPtr *)(this + 0x1b0);
      *(int *)(this + 0x1ac) = iVar1 + -1;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar3 = Zombie::HasCondition(uVar4,0x55);
        if (cVar3 == '\0') {
          __n = (string *)aDStack_68;
          std::string::string((string *)&local_70,"gum_tangyuan1");
          nop();
          if (iVar1 == 3) {
            std::string::append((string *)&local_70,"gum_tangyuan1",(size_t)__n);
          }
          else if (iVar1 == 2) {
            std::string::append((string *)&local_70,"gum_tangyuan2",(size_t)__n);
          }
          else if (iVar1 == 1) {
            std::string::append((string *)&local_70,"gum_tangyuan3",(size_t)__n);
          }
          uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          FUN_05475d88((string *)aDStack_68,(string *)&local_70);
          Zombie::Gum(_FUN_04c9fcd0,uVar4,(string *)aDStack_68,0);
          std::string::~string((string *)aDStack_68);
          std::string::~string((string *)&local_70);
        }
      }
      bVar2 = std::operator==(param_1,"dump_attack_3");
      if (bVar2) {
        setState(this,2);
      }
      else {
        setState(this,0);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemTangYuan::GatherPlantingRestrictions
          (GridItemTangYuan *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x2c;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTangYuan::TakeDamage(DamageInfo const&) */

void __thiscall GridItemTangYuan::TakeDamage(GridItemTangYuan *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x1a8) == 0) && (0 < *(int *)(this + 0x1ac))) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x40000);
    if (((bVar1) || (bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x10000000000), bVar1)) &&
       ((*(RtObject **)param_1 != (RtObject *)0x0 &&
        (pZVar3 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1), pZVar3 != (Zombie *)0x0)))) {
      Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar2 = CanGumZombie(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),
                   (RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        setState(this,1);
      }
    }
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

