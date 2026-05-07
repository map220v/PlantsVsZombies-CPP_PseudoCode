// Class: ZombieRenaiCarver


/* ZombieRenaiCarver::canCarveStatue(GridItemRenaiStatue*) */

void __thiscall
ZombieRenaiCarver::canCarveStatue(ZombieRenaiCarver *this,GridItemRenaiStatue *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x2e8) == GridItemRenaiStatue::CanBeCarved) {
    GridItemRenaiStatue::CanBeCarved();
    return;
  }
  (**(code **)(*(long *)param_1 + 0x2e8))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiCarver::OnNotifyStatueFinishCarve(GridItemRenaiStatue*) */

void __thiscall
ZombieRenaiCarver::OnNotifyStatueFinishCarve(ZombieRenaiCarver *this,GridItemRenaiStatue *param_1)

{
  char cVar1;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (GridItemRenaiStatue *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x818));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((cVar1 != '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x24), cVar1 != '\0')) {
      (**(code **)(*(long *)this + 0x260))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRenaiCarver::ZombieRenaiCarver() */

void __thiscall ZombieRenaiCarver::ZombieRenaiCarver(ZombieRenaiCarver *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_068ff7b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRenaiCarver_06900288;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  return;
}


/* ZombieRenaiCarver::StaticNew() */

ZombieRenaiCarver * ZombieRenaiCarver::StaticNew(void)

{
  ZombieRenaiCarver *this;
  
  this = ::operator_new(0x820);
  ZombieRenaiCarver(this);
  return this;
}


/* ZombieRenaiCarver::~ZombieRenaiCarver() */

void __thiscall ZombieRenaiCarver::~ZombieRenaiCarver(ZombieRenaiCarver *this)

{
  *(undefined ***)this = &PTR_GetClass_068ff7b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRenaiCarver_06900288;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieRenaiCarver::~ZombieRenaiCarver() */

void __thiscall ZombieRenaiCarver::~ZombieRenaiCarver(ZombieRenaiCarver *this)

{
  ~ZombieRenaiCarver(this + -0x10);
  return;
}


/* ZombieRenaiCarver::~ZombieRenaiCarver() */

void __thiscall ZombieRenaiCarver::~ZombieRenaiCarver(ZombieRenaiCarver *this)

{
  ~ZombieRenaiCarver(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRenaiCarver::~ZombieRenaiCarver() */

void __thiscall ZombieRenaiCarver::~ZombieRenaiCarver(ZombieRenaiCarver *this)

{
  ~ZombieRenaiCarver(this + -0x10);
  return;
}


/* ZombieRenaiCarver::findStatue() */

char __thiscall ZombieRenaiCarver::findStatue(ZombieRenaiCarver *this)

{
  char cVar1;
  RtObject *this_00;
  GridItemRenaiStatue *pGVar2;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))();
  if (this_00 == (RtObject *)0x0) {
    return '\0';
  }
  pGVar2 = Sexy::RtObject::Cast<GridItemRenaiStatue>(this_00);
  if (pGVar2 != (GridItemRenaiStatue *)0x0) {
    cVar1 = canCarveStatue(this,pGVar2);
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* ZombieRenaiCarver::shouldCarve() */

undefined8 __thiscall ZombieRenaiCarver::shouldCarve(ZombieRenaiCarver *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((cVar1 == '\0') && (cVar1 = findStatue(this), cVar1 != '\0')) {
    uVar2 = Zombie::HasArm((Zombie *)this);
    return uVar2;
  }
  return 0;
}


/* ZombieRenaiCarver::findAndCarveStatue() */

char __thiscall ZombieRenaiCarver::findAndCarveStatue(ZombieRenaiCarver *this)

{
  char cVar1;
  RtObject *this_00;
  GridItemRenaiStatue *pGVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((((cVar1 == '\0') &&
       (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))(this), this_00 != (RtObject *)0x0
       )) && (pGVar2 = Sexy::RtObject::Cast<GridItemRenaiStatue>(this_00),
             pGVar2 != (GridItemRenaiStatue *)0x0)) &&
     (cVar1 = canCarveStatue(this,pGVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pGVar2 + 0x2d0))(pGVar2);
    return cVar1;
  }
  return '\0';
}


/* ZombieRenaiCarver::onCarveAnimDone(std::string const&) */

void ZombieRenaiCarver::onCarveAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    findAndCarveStatue((ZombieRenaiCarver *)param_1);
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x260))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiCarver::TryCarveStatue() */

void __thiscall ZombieRenaiCarver::TryCarveStatue(ZombieRenaiCarver *this)

{
  RtObject *this_00;
  GridItemRenaiStatue *pGVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))();
  if ((this_00 != (RtObject *)0x0) &&
     (pGVar1 = Sexy::RtObject::Cast<GridItemRenaiStatue>(this_00),
     pGVar1 != (GridItemRenaiStatue *)0x0)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x818),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Zombie::setZombieState((Zombie *)this,0x24,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRenaiCarver::updateState_Walk() */

void __thiscall ZombieRenaiCarver::updateState_Walk(ZombieRenaiCarver *this)

{
  char cVar1;
  
  cVar1 = shouldCarve(this);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    TryCarveStatue(this);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieRenaiCarver::updateState_Carve() */

void __thiscall ZombieRenaiCarver::updateState_Carve(ZombieRenaiCarver *this)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x818));
  if (((cVar1 != '\0') ||
      (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x818)), cVar1 == '\0')) ||
     (cVar1 = Zombie::HasArm((Zombie *)this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieRenaiCarver::onEnterState_Carve(ZombieState) */

void ZombieRenaiCarver::onEnterState_Carve(Zombie *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  ZombieAnimRig_RenaiCarver *this_00;
  long *plVar3;
  
  this = (RtWeakPtr *)(param_1 + 0x818);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar2 != '\0')) {
    Zombie::GetAnimRig(param_1);
    nop();
    if (this_00 != (ZombieAnimRig_RenaiCarver *)0x0) {
      ZombieAnimRig_RenaiCarver::PlayCarve(this_00);
    }
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar3 + 0x2d8))();
    return;
  }
  return;
}


/* ZombieRenaiCarver::registerForEvents() */

void __thiscall ZombieRenaiCarver::registerForEvents(ZombieRenaiCarver *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyStatueFinishCarve);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<GridItemRenaiStatue*,Sexy::CBMemberTranslatorX<ZombieRenaiCarver,void(ZombieRenaiCarver::*)(GridItemRenaiStatue*)>>
            ((MessageRouter *)puVar1,Message::NotifyStatueFinishCarve,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiCarver::findStatue(int, Sexy::TRect<int>) */

void __thiscall
ZombieRenaiCarver::findStatue(ZombieRenaiCarver *this,int param_1,undefined8 param_3)

{
  bool bVar1;
  RtObject *pRVar2;
  RtObject *this_00;
  RtObject *pRVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pRVar2 = (RtObject *)Zombie::GetForcedTarget((Zombie *)this);
  (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_28,this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,4,param_3,(param_1 - local_28._4_4_) + 1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    bVar1 = Sexy::RtObject::IsA<GridItemRenaiStatue>(this_00);
    if ((bVar1) && ((pRVar3 = this_00, pRVar2 == this_00 || (pRVar2 == (RtObject *)0x0))))
    goto LAB_0480d3e0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  pRVar3 = (RtObject *)0x0;
LAB_0480d3e0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiCarver::FindEatTarget() */

void __thiscall ZombieRenaiCarver::FindEatTarget(ZombieRenaiCarver *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x3a0))(aIStack_28,this);
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar3 = findStatue(this,uVar2,aIStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRenaiCarver::StaticClassInit() */

void ZombieRenaiCarver::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieRenaiCarver");
      (*pcVar4)(plVar1,asStack_150,FUN_0480d914,0x820,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRenaiCarver,void(ZombieRenaiCarver::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieRenaiCarver,void(ZombieRenaiCarver::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieRenaiCarver,void(ZombieRenaiCarver::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CARVER_CARVE");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0480d6b8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieRenaiCarver::StaticGetClass() */

long * ZombieRenaiCarver::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRenaiCarver",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRenaiCarver::GetClass() const */

long * ZombieRenaiCarver::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRenaiCarver",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

