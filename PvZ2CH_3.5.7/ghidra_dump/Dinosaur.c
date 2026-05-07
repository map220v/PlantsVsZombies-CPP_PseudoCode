// Class: Dinosaur


/* Dinosaur::~Dinosaur() */

void __thiscall Dinosaur::~Dinosaur(Dinosaur *this)

{
  *(undefined ***)this = &PTR_GetClass_06903390;
  *(undefined ***)(this + 0x10) = &PTR__Dinosaur_069036f8;
  Creature::~Creature((Creature *)this);
  return;
}


/* non-virtual thunk to Dinosaur::~Dinosaur() */

void __thiscall Dinosaur::~Dinosaur(Dinosaur *this)

{
  ~Dinosaur(this + -0x10);
  return;
}


/* Dinosaur::~Dinosaur() */

void __thiscall Dinosaur::~Dinosaur(Dinosaur *this)

{
  ~Dinosaur(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Dinosaur::~Dinosaur() */

void __thiscall Dinosaur::~Dinosaur(Dinosaur *this)

{
  ~Dinosaur(this + -0x10);
  return;
}


/* Dinosaur::onExitState_Run_Away(CreatureState) */

void Dinosaur::onExitState_Run_Away(Creature *param_1)

{
  Creature::setUseAnimTranslation(param_1,false);
  return;
}


/* Dinosaur::updateState_Run_Away() */

void __thiscall Dinosaur::updateState_Run_Away(Dinosaur *this)

{
  char cVar1;
  
  cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* Dinosaur::Dinosaur() */

void __thiscall Dinosaur::Dinosaur(Dinosaur *this)

{
  undefined4 uVar1;
  
  Creature::Creature((Creature *)this);
  *(undefined ***)this = &PTR_GetClass_06903390;
  *(undefined ***)(this + 0x10) = &PTR__Dinosaur_069036f8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x210) = uVar1;
  FUN_0481763c(*(long *)(gLawnApp + 0x9f0) + 0xcaa);
  this[0x214] = (Dinosaur)0x0;
  return;
}


/* Dinosaur::StaticNew() */

Dinosaur * Dinosaur::StaticNew(void)

{
  Dinosaur *this;
  
  this = ::operator_new(0x218);
  Dinosaur(this);
  return this;
}


/* Dinosaur::isCharmed() */

void __thiscall Dinosaur::isCharmed(Dinosaur *this)

{
  Creature::HasCondition(this,1);
  return;
}


/* Dinosaur::CanBeCharmed() */

byte __thiscall Dinosaur::CanBeCharmed(Dinosaur *this)

{
  byte bVar1;
  
  bVar1 = isCharmed(this);
  return bVar1 ^ 1;
}


/* Dinosaur::disableTimeout() */

void __thiscall Dinosaur::disableTimeout(Dinosaur *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x210) = uVar1;
  return;
}


/* Dinosaur::isValidZombieTarget(Zombie*) */

bool __thiscall Dinosaur::isValidZombieTarget(Dinosaur *this,Zombie *param_1)

{
  bool bVar1;
  string *psVar2;
  
  psVar2 = (string *)Zombie::GetTypeName(param_1);
  bVar1 = std::operator==(psVar2,"pvz1_bungee");
  return !bVar1;
}


/* Dinosaur::isTimedOut() */

bool __thiscall Dinosaur::isTimedOut(Dinosaur *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x210);
  fVar2 = (float)PVZ_EOT();
  bVar1 = false;
  if (fVar3 != fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = fVar3 < fVar2;
  }
  return bVar1;
}


/* Dinosaur::ScareAway() */

void __thiscall Dinosaur::ScareAway(Dinosaur *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x210) = uVar1;
  return;
}


/* Dinosaur::CanBeScared() */

bool __thiscall Dinosaur::CanBeScared(Dinosaur *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x210);
  fVar1 = (float)PVZ_T();
  return fVar1 < fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onEnterState_Active_Action(CreatureState) */

void Dinosaur::onEnterState_Active_Action(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x148);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onEnterState_Charmed_Active_Action(CreatureState) */

void Dinosaur::onEnterState_Charmed_Active_Action(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1e8))(param_1,1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x148);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onEnterState_Active_Ready(CreatureState) */

void Dinosaur::onEnterState_Active_Ready(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x140);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onEnterState_Run_Away(CreatureState) */

void Dinosaur::onEnterState_Run_Away(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x150);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  (**(code **)(*(long *)param_1 + 0x1e8))(param_1,1);
  Creature::setUseAnimTranslation(param_1,true);
  Creature::ApplyExitSpeedup(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onEnterState_Charmed_Active_Ready(CreatureState) */

void Dinosaur::onEnterState_Charmed_Active_Ready(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1e8))(param_1,1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  pcVar2 = *(code **)(*(long *)pDVar1 + 0x140);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::isActivateReady() */

void __thiscall Dinosaur::isActivateReady(Dinosaur *this)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  DinosaurPropertySheet *pDVar5;
  int local_10;
  
  lVar2 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  pDVar5 = Creature::GetProps<DinosaurPropertySheet>();
  iVar1 = *(int *)(pDVar5 + 0xa0);
  cVar3 = isCharmed(this);
  if (cVar3 == '\0') {
    uVar4 = (uint)(local_10 - iVar1 < 1);
  }
  else {
    uVar4 = (uint)~(local_10 - iVar1) >> 0x1f;
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Dinosaur::resetTimeout() */

void __thiscall Dinosaur::resetTimeout(Dinosaur *this)

{
  DinosaurPropertySheet *pDVar1;
  float fVar2;
  float fVar3;
  
  pDVar1 = Creature::GetProps<DinosaurPropertySheet>();
  fVar3 = *(float *)(pDVar1 + 0xa4);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x210) = fVar2 + fVar3;
  return;
}


/* Dinosaur::Charm() */

void __thiscall Dinosaur::Charm(Dinosaur *this)

{
  PVZ_EOT();
  Creature::ApplyCondition((Creature *)this,1);
  RealObject::JoinTeam((RealObject *)this,1);
  resetTimeout(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::onCreatureInitialize() */

void __thiscall Dinosaur::onCreatureInitialize(Dinosaur *this)

{
  Dinosaur DVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    plVar5 = (long *)*puVar3;
    pcVar6 = *(code **)(*plVar5 + 0x20);
    uVar4 = ZombieZombossMech::StaticGetClass();
    DVar1 = (Dinosaur)(*pcVar6)(plVar5,uVar4);
    this[0x214] = DVar1;
    if (DVar1 != (Dinosaur)0x0) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::findAttackTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void Dinosaur::findAttackTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,long *param_2
               ,vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*param_2 + 0x1f8))(auStack_30,param_2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,2,auStack_30,0xffffffff,0xffffffff);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((pZVar4 != (Zombie *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(pZVar4), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*param_2 + 0x350))(param_2,pZVar4), cVar2 != '\0')) {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      ToolPacketData::GetProps();
      local_40 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_48);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      if (bVar1) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dinosaur::StaticClassInit() */

void Dinosaur::StaticClassInit(void)

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
  Delegate1<CreatureState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CreatureState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"Dinosaur");
      (*pcVar4)(plVar1,asStack_150,FUN_04818e90,0x218,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CreatureState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a0);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a8);
  Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b0);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINO_Active_Ready");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04818974(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b8);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c0);
  Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c8);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINO_Active_Action");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04818974(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d0);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e0);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINO_Run_Away");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04818974(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e8);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2f0);
  Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2f8);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINO_Charmed_Active_Ready");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04818974(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x300);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x308);
  Sexy::Delegate0::Delegate0<Dinosaur,void(Dinosaur::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x310);
  Sexy::Delegate1<CreatureState>::Delegate1<Dinosaur,void(Dinosaur::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINO_Charmed_Active_Action");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04818974(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Dinosaur::StaticGetClass() */

long * Dinosaur::StaticGetClass(void)

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
  uVar2 = Creature::StaticGetClass();
  (*pcVar3)(plVar1,"Dinosaur",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Dinosaur::GetClass() const */

long * Dinosaur::GetClass(void)

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
  uVar2 = Creature::StaticGetClass();
  (*pcVar3)(plVar1,"Dinosaur",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

