// Class: ZombieTarget


/* ZombieTarget::onAppearAnimDone(std::string const&) */

void ZombieTarget::onAppearAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 600))();
  return;
}


/* ZombieTarget::TargetRise(Sexy::SexyVector3 const&) */

void ZombieTarget::TargetRise(SexyVector3 *param_1)

{
  (**(code **)(*(long *)param_1 + 0x78))();
  Zombie::setZombieState((Zombie *)param_1,0x10,0);
  return;
}


/* ZombieTarget::~ZombieTarget() */

void __thiscall ZombieTarget::~ZombieTarget(ZombieTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_06895300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTarget_06895d40;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieTarget::~ZombieTarget() */

void __thiscall ZombieTarget::~ZombieTarget(ZombieTarget *this)

{
  ~ZombieTarget(this + -0x10);
  return;
}


/* ZombieTarget::~ZombieTarget() */

void __thiscall ZombieTarget::~ZombieTarget(ZombieTarget *this)

{
  ~ZombieTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTarget::~ZombieTarget() */

void __thiscall ZombieTarget::~ZombieTarget(ZombieTarget *this)

{
  ~ZombieTarget(this + -0x10);
  return;
}


/* ZombieTarget::ZombieTarget() */

void __thiscall ZombieTarget::ZombieTarget(ZombieTarget *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06895300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTarget_06895d40;
  return;
}


/* ZombieTarget::StaticNew() */

ZombieTarget * ZombieTarget::StaticNew(void)

{
  ZombieTarget *this;
  
  this = ::operator_new(0x820);
  ZombieTarget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTarget::getValidTargetPlant() */

void ZombieTarget::getValidTargetPlant(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 local_48;
  Plant *local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntities(avStack_38,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    local_40 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    if (local_40 != (Plant *)0x0) {
      std::vector<Plant*,std::allocator<Plant*>>::push_back
                ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar2 = FUN_046736e0(local_20,local_18);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar3,uVar4);
    puVar5 = (undefined8 *)FUN_046736ec(local_20);
    uVar3 = *puVar5;
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTarget::StaticClassInit() */

void ZombieTarget::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieTarget");
      (*pcVar4)(plVar1,asStack_150,FUN_04673d70,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTarget,void(ZombieTarget::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieTarget,void(ZombieTarget::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTarget,void(ZombieTarget::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TARGET_Attack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04673b14(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTarget::StaticGetClass() */

long * ZombieTarget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTarget::GetClass() const */

long * ZombieTarget::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTarget::onZombieInitialize() */

void __thiscall ZombieTarget::onZombieInitialize(ZombieTarget *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  uVar1 = PVZ_EOT();
  this[0x810] = (ZombieTarget)0x0;
  this[0x804] = (ZombieTarget)0x0;
  *(undefined4 *)(this + 0x814) = 0;
  this[0x818] = (ZombieTarget)0x0;
  *(undefined4 *)(this + 0x808) = uVar1;
  *(undefined4 *)(this + 0x800) = uVar1;
  *(undefined4 *)(this + 0x80c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTarget::onEnterState_TargetRise(ZombieState) */

void __thiscall ZombieTarget::onEnterState_TargetRise(ZombieTarget *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAppearAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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


/* ZombieTarget::onEnterState_Idle(ZombieState) */

void ZombieTarget::onEnterState_Idle(long param_1)

{
  float fVar1;
  
  Zombie::onEnterState_Idle();
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x808) = fVar1 + *(float *)(param_1 + 0x80c);
  return;
}


/* ZombieTarget::onEnterState_Die(ZombieState) */

void ZombieTarget::onEnterState_Die(long param_1)

{
  undefined4 uVar1;
  
  Zombie::onEnterState_Die();
  uVar1 = PVZ_EOT();
  *(undefined1 *)(param_1 + 0x810) = 1;
  *(undefined4 *)(param_1 + 0x808) = uVar1;
  return;
}


/* ZombieTarget::onUpdate() */

void __thiscall ZombieTarget::onUpdate(ZombieTarget *this)

{
  char cVar1;
  ZombieTargetProps *pZVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  Zombie::onUpdate((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombieTargetProps>((Zombie *)this);
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x218));
  if ((fVar3 <= 0.0) || (cVar1 = Zombie::isInState((Zombie *)this,5), cVar1 != '\0')) {
    fVar3 = (float)PVZ_T();
    if ((*(float *)(this + 0x808) < fVar3) && (this[0x810] == (ZombieTarget)0x0)) {
      pZVar2 = Zombie::GetProps<ZombieTargetProps>((Zombie *)this);
      fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x218));
      if (fVar3 <= 0.0) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x808) = uVar4;
      return;
    }
  }
  else {
    if (this[0x804] == (ZombieTarget)0x0) {
      fVar5 = *(float *)(this + 0x800);
      pZVar2 = Zombie::GetProps<ZombieTargetProps>((Zombie *)this);
      fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x210));
      fVar3 = fVar3 + fVar5;
    }
    else {
      fVar5 = *(float *)(this + 0x800);
      pZVar2 = Zombie::GetProps<ZombieTargetProps>((Zombie *)this);
      fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x218));
      fVar3 = fVar3 + fVar5;
    }
    fVar5 = (float)PVZ_T();
    if ((fVar3 <= fVar5) && (cVar1 = Zombie::isInState((Zombie *)this,8), cVar1 == '\0')) {
      if ((this[0x818] == (ZombieTarget)0x0) || (*(int *)(this + 0x814) < 1)) {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        uVar4 = PVZ_T();
        this[0x804] = (ZombieTarget)0x1;
        *(int *)(this + 0x814) = *(int *)(this + 0x814) + 1;
        *(undefined4 *)(this + 0x800) = uVar4;
        return;
      }
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x800) = uVar4;
    }
  }
  return;
}

