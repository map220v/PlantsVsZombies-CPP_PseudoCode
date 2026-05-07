// Class: ZombieMonkNunchaku


/* ZombieMonkNunchaku::onFinishEatAnimation(Zombie*) */

void ZombieMonkNunchaku::onFinishEatAnimation(Zombie *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState(param_1,0x23);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState(param_1,1,0);
  return;
}


/* ZombieMonkNunchaku::~ZombieMonkNunchaku() */

void __thiscall ZombieMonkNunchaku::~ZombieMonkNunchaku(ZombieMonkNunchaku *this)

{
  *(undefined ***)this = &PTR_GetClass_068ca860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkNunchaku_068cb2f0;
  ZombieHammer::~ZombieHammer((ZombieHammer *)this);
  return;
}


/* non-virtual thunk to ZombieMonkNunchaku::~ZombieMonkNunchaku() */

void __thiscall ZombieMonkNunchaku::~ZombieMonkNunchaku(ZombieMonkNunchaku *this)

{
  ~ZombieMonkNunchaku(this + -0x10);
  return;
}


/* ZombieMonkNunchaku::~ZombieMonkNunchaku() */

void __thiscall ZombieMonkNunchaku::~ZombieMonkNunchaku(ZombieMonkNunchaku *this)

{
  ~ZombieMonkNunchaku(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMonkNunchaku::~ZombieMonkNunchaku() */

void __thiscall ZombieMonkNunchaku::~ZombieMonkNunchaku(ZombieMonkNunchaku *this)

{
  ~ZombieMonkNunchaku(this + -0x10);
  return;
}


/* ZombieMonkNunchaku::ZombieMonkNunchaku() */

void __thiscall ZombieMonkNunchaku::ZombieMonkNunchaku(ZombieMonkNunchaku *this)

{
  ZombieHammer::ZombieHammer((ZombieHammer *)this);
  *(undefined ***)this = &PTR_GetClass_068ca860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkNunchaku_068cb2f0;
  return;
}


/* ZombieMonkNunchaku::StaticNew() */

ZombieMonkNunchaku * ZombieMonkNunchaku::StaticNew(void)

{
  ZombieMonkNunchaku *this;
  
  this = ::operator_new(0x818);
  ZombieMonkNunchaku(this);
  return this;
}


/* ZombieMonkNunchaku::CalcPushRect() */

Insets * ZombieMonkNunchaku::CalcPushRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  Sexy::Insets::Insets(in_x8,0xf,0,0x28,0x32);
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_0474cb7c(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  *(int *)in_x8 = (int)(((float)*(int *)in_x8 + fVar1) - (float)*(int *)(in_x8 + 8));
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar2) - (float)*(int *)(in_x8 + 0xc));
  return in_x8;
}


/* ZombieMonkNunchaku::updateState_Block() */

void __thiscall ZombieMonkNunchaku::updateState_Block(ZombieMonkNunchaku *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 < *(float *)(this + 0x80c)) {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x80c);
    *(float *)(this + 0x80c) = fVar3 - fVar2;
    if (0.0 < fVar3 - fVar2) {
      return;
    }
  }
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x22);
    return;
  }
  return;
}


/* ZombieMonkNunchaku::onBlockReturnEnd(Zombie*) */

void ZombieMonkNunchaku::onBlockReturnEnd(Zombie *param_1)

{
  char cVar1;
  ZombieHammerProps *pZVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,1);
      pZVar2 = Zombie::GetProps<ZombieHammerProps>(param_1);
      fVar3 = *(float *)(pZVar2 + 0x210);
      pZVar2 = Zombie::GetProps<ZombieHammerProps>(param_1);
      *(float *)(param_1 + 0x804) = fVar3 - *(float *)(pZVar2 + 0x214);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkNunchaku::onEnterState_Block_Return(ZombieState) */

void ZombieMonkNunchaku::onEnterState_Block_Return(Zombie *param_1)

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
  std::string::string(asStack_58,"onBlockReturnEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MonkNunchaku::PlayBlockReturn((ZombieAnimRig_MonkNunchaku *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_Kongfu_Hammer_Swing");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkNunchaku::onEnterState_Throw(ZombieState) */

void ZombieMonkNunchaku::onEnterState_Throw(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  std::string::string(asStack_58,"special attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFinishEatAnimation");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(pZVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkNunchaku::FindThrowTarget() */

void __thiscall ZombieMonkNunchaku::FindThrowTarget(ZombieMonkNunchaku *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Plant *this_00;
  Plant *pPVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcPushRect();
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,1,auStack_30,uVar3,uVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = Zombie::WillTargetPlant((Zombie *)this,this_00);
    if (((cVar2 != '\0') && (cVar2 = Plant::IsInvincible(this_00,false), cVar2 == '\0')) &&
       (cVar2 = Plant::IsIgnoreControlAndDmg(this_00), pPVar4 = this_00, cVar2 == '\0'))
    goto LAB_0474d45c;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pPVar4 = (Plant *)0x0;
LAB_0474d45c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* ZombieMonkNunchaku::updateState_Walk() */

void __thiscall ZombieMonkNunchaku::updateState_Walk(ZombieMonkNunchaku *this)

{
  long lVar1;
  
  lVar1 = FindThrowTarget(this);
  if (lVar1 != 0) {
    Zombie::setZombieState((Zombie *)this,0x23,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieMonkNunchaku::startPushing(Zombie*) */

void ZombieMonkNunchaku::startPushing(Zombie *param_1)

{
  Plant *this;
  
  this = (Plant *)FindThrowTarget((ZombieMonkNunchaku *)param_1);
  if (this != (Plant *)0x0) {
    Plant::beThrown(this);
    return;
  }
  return;
}


/* ZombieMonkNunchaku::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieMonkNunchaku::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_4,"use_action");
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)param_1,0x23), cVar2 != '\0')) {
    startPushing((Zombie *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkNunchaku::StaticClassInit() */

void ZombieMonkNunchaku::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieMonkNunchaku");
      (*pcVar4)(plVar1,asStack_150,FUN_0474d85c,0x818,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hammer_Block_Return");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474d558(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieMonkNunchaku,void(ZombieMonkNunchaku::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Nunchaku_Throw");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474d558(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMonkNunchaku::StaticGetClass() */

long * ZombieMonkNunchaku::StaticGetClass(void)

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
  uVar2 = ZombieHammer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkNunchaku",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkNunchaku::GetClass() const */

long * ZombieMonkNunchaku::GetClass(void)

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
  uVar2 = ZombieHammer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMonkNunchaku",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

