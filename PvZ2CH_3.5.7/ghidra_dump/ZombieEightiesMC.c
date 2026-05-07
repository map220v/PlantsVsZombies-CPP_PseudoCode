// Class: ZombieEightiesMC


/* ZombieEightiesMC::onAttackJamAnimComplete(std::string const&) */

void ZombieEightiesMC::onAttackJamAnimComplete(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1);
  return;
}


/* ZombieEightiesMC::~ZombieEightiesMC() */

void __thiscall ZombieEightiesMC::~ZombieEightiesMC(ZombieEightiesMC *this)

{
  *(undefined ***)this = &PTR_GetClass_068f3bf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesMC_068f4620;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesMC::~ZombieEightiesMC() */

void __thiscall ZombieEightiesMC::~ZombieEightiesMC(ZombieEightiesMC *this)

{
  ~ZombieEightiesMC(this + -0x10);
  return;
}


/* ZombieEightiesMC::~ZombieEightiesMC() */

void __thiscall ZombieEightiesMC::~ZombieEightiesMC(ZombieEightiesMC *this)

{
  ~ZombieEightiesMC(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesMC::~ZombieEightiesMC() */

void __thiscall ZombieEightiesMC::~ZombieEightiesMC(ZombieEightiesMC *this)

{
  ~ZombieEightiesMC(this + -0x10);
  return;
}


/* ZombieEightiesMC::ZombieEightiesMC() */

void __thiscall ZombieEightiesMC::ZombieEightiesMC(ZombieEightiesMC *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieEightiesMC)0x0;
  *(undefined ***)this = &PTR_GetClass_068f3bf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesMC_068f4620;
  return;
}


/* ZombieEightiesMC::StaticNew() */

ZombieEightiesMC * ZombieEightiesMC::StaticNew(void)

{
  ZombieEightiesMC *this;
  
  this = ::operator_new(0x808);
  ZombieEightiesMC(this);
  return this;
}


/* ZombieEightiesMC::StopJamming() */

void __thiscall ZombieEightiesMC::StopJamming(ZombieEightiesMC *this)

{
  ZombieAnimRig_ZombossMech_Hydra *this_00;
  
  this[0x800] = (ZombieEightiesMC)0x0;
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  ZombieAnimRig_ZombossMech_Hydra::onPostPlayCalled(this_00);
  Zombie::reenterZombieState((Zombie *)this);
  return;
}


/* ZombieEightiesMC::isJamAttackablePlant(BoardEntity*) */

bool __thiscall ZombieEightiesMC::isJamAttackablePlant(ZombieEightiesMC *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Plant *this_00;
  
  if ((((param_1 != (BoardEntity *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), this_00 != (Plant *)0x0)) &&
      (cVar1 = Zombie::WillTargetPlant((Zombie *)this,this_00), cVar1 != '\0')) &&
     (cVar1 = Plant::IsInvincible(this_00,false), cVar1 == '\0')) {
    iVar2 = (**(code **)(*(long *)this_00 + 0x180))(this_00);
    return 1 < iVar2;
  }
  return false;
}


/* ZombieEightiesMC::isJamAttackableGridItem(BoardEntity*) */

undefined1 __thiscall
ZombieEightiesMC::isJamAttackableGridItem(ZombieEightiesMC *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  GridItem *this_00;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), this_00 != (GridItem *)0x0))
     && (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
        cVar1 != '\0')) {
    uVar2 = (**(code **)(*(long *)this_00 + 0x208))(this_00);
    return uVar2;
  }
  return 0;
}


/* ZombieEightiesMC::GetJamStyle() */

void ZombieEightiesMC::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesMCProps>(in_x0);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesMC::findEntitiesInJamAttackRange() */

void ZombieEightiesMC::findEntitiesInJamAttackRange(void)

{
  long lVar1;
  Zombie *in_x0;
  ZombieEightiesMCProps *pZVar2;
  CreatureConditionTracker *this;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  float fVar3;
  float fVar4;
  
  lVar1 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  pZVar2 = Zombie::GetProps<ZombieEightiesMCProps>(in_x0);
  fVar4 = *(float *)(pZVar2 + 0x218);
  this = (CreatureConditionTracker *)Zombie::GetConditionTracker(in_x0);
  fVar3 = (float)CreatureConditionTracker::GetDrawScale(this);
  operator|(1,4);
  FUN_047eac84(*(undefined4 *)(in_x0 + 0x18),*(undefined4 *)(in_x0 + 0x1c),
               *(undefined4 *)(in_x0 + 0x20));
  EntityFinder::GetEntitiesWithinCircle2D(fVar3 * fVar4);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesMC::onEnterState_JamAttack(ZombieState) */

void ZombieEightiesMC::onEnterState_JamAttack(Zombie *param_1)

{
  ZombieAnimRig_EightiesMC *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackJamAnimComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesMC::PlayJamAttack(extraout_x0,aRStack_50);
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
/* ZombieEightiesMC::findTargetsInJamAttackRange() */

void ZombieEightiesMC::findTargetsInJamAttackRange(void)

{
  bool bVar1;
  char cVar2;
  ZombieEightiesMC *in_x0;
  undefined8 *puVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  BoardEntity *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  findEntitiesInJamAttackRange();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (BoardEntity *)*puVar3;
    cVar2 = isJamAttackablePlant(in_x0,local_38);
    if ((cVar2 != '\0') || (cVar2 = isJamAttackableGridItem(in_x0,local_38), cVar2 != '\0')) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesMC::canJamAttack() */

void __thiscall ZombieEightiesMC::canJamAttack(ZombieEightiesMC *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x800] == (ZombieEightiesMC)0x0) || (cVar2 = Creature::IsOnBoard(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    findTargetsInJamAttackRange();
    lVar3 = FUN_047eabcc(local_20,local_18);
    bVar1 = lVar3 != 0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesMC::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieEightiesMC::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  ZombieEightiesMCProps *pZVar3;
  undefined8 *puVar4;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  string *local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    pZVar3 = Zombie::GetProps<ZombieEightiesMCProps>((Zombie *)param_1);
    local_60 = *(undefined4 *)(pZVar3 + 0x21c);
    local_68 = param_1;
    findTargetsInJamAttackRange();
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      (**(code **)(*(long *)*puVar4 + 0x110))((long *)*puVar4,(DamageInfo *)&local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesMC::StaticClassInit() */

void ZombieEightiesMC::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieEightiesMC");
      (*pcVar4)(plVar1,asStack_150,FUN_047ec328,0x808,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieEightiesMC,void(ZombieEightiesMC::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEightiesMC,void(ZombieEightiesMC::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieEightiesMC,void(ZombieEightiesMC::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_JamAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047ec0cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesMC::StaticGetClass() */

long * ZombieEightiesMC::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesMC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesMC::GetClass() const */

long * ZombieEightiesMC::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesMC",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesMC::updateState_Walk() */

void __thiscall ZombieEightiesMC::updateState_Walk(ZombieEightiesMC *this)

{
  char cVar1;
  
  cVar1 = canJamAttack(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

