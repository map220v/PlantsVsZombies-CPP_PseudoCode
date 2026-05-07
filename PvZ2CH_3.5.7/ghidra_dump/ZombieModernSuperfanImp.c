// Class: ZombieModernSuperfanImp


/* ZombieModernSuperfanImp::~ZombieModernSuperfanImp() */

void __thiscall ZombieModernSuperfanImp::~ZombieModernSuperfanImp(ZombieModernSuperfanImp *this)

{
  *(undefined ***)this = &PTR_GetClass_06844ea0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernSuperfanImp_06845978;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieModernSuperfanImp::~ZombieModernSuperfanImp() */

void __thiscall ZombieModernSuperfanImp::~ZombieModernSuperfanImp(ZombieModernSuperfanImp *this)

{
  ~ZombieModernSuperfanImp(this + -0x10);
  return;
}


/* ZombieModernSuperfanImp::~ZombieModernSuperfanImp() */

void __thiscall ZombieModernSuperfanImp::~ZombieModernSuperfanImp(ZombieModernSuperfanImp *this)

{
  ~ZombieModernSuperfanImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernSuperfanImp::~ZombieModernSuperfanImp() */

void __thiscall ZombieModernSuperfanImp::~ZombieModernSuperfanImp(ZombieModernSuperfanImp *this)

{
  ~ZombieModernSuperfanImp(this + -0x10);
  return;
}


/* ZombieModernSuperfanImp::ZombieModernSuperfanImp() */

void __thiscall ZombieModernSuperfanImp::ZombieModernSuperfanImp(ZombieModernSuperfanImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_06844ea0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernSuperfanImp_06845978;
  return;
}


/* ZombieModernSuperfanImp::StaticNew() */

ZombieModernSuperfanImp * ZombieModernSuperfanImp::StaticNew(void)

{
  ZombieModernSuperfanImp *this;
  
  this = ::operator_new(0x820);
  ZombieModernSuperfanImp(this);
  return this;
}


/* ZombieModernSuperfanImp::canInitiateCheeringForTheEnd() */

byte __thiscall ZombieModernSuperfanImp::canInitiateCheeringForTheEnd(ZombieModernSuperfanImp *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if ((iVar3 <= *(int *)(this + 0x818)) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x328))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* ZombieModernSuperfanImp::updateState_Walk() */

void __thiscall ZombieModernSuperfanImp::updateState_Walk(ZombieModernSuperfanImp *this)

{
  char cVar1;
  
  cVar1 = canInitiateCheeringForTheEnd(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImp::SetFlyingDestinationWithTravelTime(Sexy::SexyVector3, float, float,
   bool) */

void ZombieModernSuperfanImp::SetFlyingDestinationWithTravelTime
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5,Zombie *param_6,undefined1 param_7)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(param_6 + 0x818));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar1,param_2,param_3);
  ZombieImp::SetFlyingDestinationWithTravelTime
            (local_18,local_14,local_10,param_4,param_5,param_6,param_7);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_6);
  FUN_043c3f40(pZVar2 + 0x240,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSuperfanImp::onPlaceOnBoard() */

void __thiscall ZombieModernSuperfanImp::onPlaceOnBoard(ZombieModernSuperfanImp *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieModernSuperfanImpProps *pZVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  pZVar4 = Zombie::GetProps<ZombieModernSuperfanImpProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x214);
  iVar2 = *(int *)(pZVar4 + 0x210);
  iVar3 = rand();
  iVar1 = (iVar1 - iVar2) + 1;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3 / iVar1;
  }
  *(int *)(this + 0x818) = (iVar3 - iVar2 * iVar1) + *(int *)(pZVar4 + 0x210);
  pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_043c3f40(pZVar5 + 0x240,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImp::onEnterState_CheerForTheEnd(ZombieState) */

void ZombieModernSuperfanImp::onEnterState_CheerForTheEnd(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCheerForTheEndAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ModernSuperfanImp::CheerForTheEnd
            ((ZombieAnimRig_ModernSuperfanImp *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImp::onCheerForTheEndAnimStopped(std::string const&) */

void ZombieModernSuperfanImp::onCheerForTheEndAnimStopped(string *param_1)

{
  char cVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x47c34f80,local_70,local_6c,aDStack_68,4,0,aPStack_78,0);
    Zombie::SetIgnoresAllDamage((Zombie *)param_1,false);
    (**(code **)(*(long *)param_1 + 0x120))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernSuperfanImp::onLandingAnimStopped(std::string const&) */

void __thiscall
ZombieModernSuperfanImp::onLandingAnimStopped(ZombieModernSuperfanImp *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"land2");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      Zombie::SetIgnoresAllDamage((Zombie *)this,false);
      (**(code **)(*(long *)this + 0x260))(this);
      return;
    }
  }
  onCheerForTheEndAnimStopped((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImp::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieModernSuperfanImp::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieModernSuperfanImpProps *pZVar5;
  undefined8 *puVar6;
  Plant *pPVar7;
  DamageInfo *pDVar8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((((cVar1 == '\0') && (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) &&
      ((bVar2 = std::operator==(param_3,"land"), bVar2 ||
       (bVar2 = std::operator==(param_3,"eplode"), bVar2)))) &&
     (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    pZVar5 = Zombie::GetProps<ZombieModernSuperfanImpProps>((Zombie *)param_1);
                    /* WARNING: Load size is inaccurate */
    pDVar8._0_4_ = *(DamageInfo **)(pZVar5 + 0x218);
    Sexy::Point::Point((Point *)&local_88,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo(pDVar8._0_4_,local_80,local_7c,aDStack_68,0x400,0,(Point *)&local_88,0);
    Zombie::SetIsControlled((Zombie *)param_1,true);
    Zombie::SetIsTargetable((Zombie *)param_1,false);
    Zombie::SetIgnoresAllDamage((Zombie *)param_1,true);
    Zombie::SetIgnoresCollisions((Zombie *)param_1,true);
    uVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesAtGridSquare((FastCurve *)&local_80,1,uVar4,uVar3);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      pPVar7 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
      (**(code **)(*(long *)pPVar7 + 0x110))(pPVar7,aDStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernSuperfanImp::StaticClassInit() */

void ZombieModernSuperfanImp::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieModernSuperfanImp");
      (*pcVar4)(plVar1,asStack_150,FUN_043c55e4,0x820,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSuperfanImp,void(ZombieModernSuperfanImp::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieModernSuperfanImp,void(ZombieModernSuperfanImp::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernSuperfanImp,void(ZombieModernSuperfanImp::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMSIZS_CheerForTheEnd");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_043c5388(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernSuperfanImp::StaticGetClass() */

long * ZombieModernSuperfanImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSuperfanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernSuperfanImp::GetClass() const */

long * ZombieModernSuperfanImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernSuperfanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

