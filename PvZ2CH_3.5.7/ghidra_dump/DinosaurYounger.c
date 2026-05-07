// Class: DinosaurYounger


/* DinosaurYounger::onWakeAnimDone(std::string const&) */

void DinosaurYounger::onWakeAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x3b8))();
  return;
}


/* DinosaurYounger::onCaughtAnimDone(std::string const&) */

void DinosaurYounger::onCaughtAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x3c8))();
  return;
}


/* DinosaurYounger::~DinosaurYounger() */

void __thiscall DinosaurYounger::~DinosaurYounger(DinosaurYounger *this)

{
  *(undefined ***)this = &PTR_GetClass_06905a30;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurYounger_06905e10;
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurYounger::~DinosaurYounger() */

void __thiscall DinosaurYounger::~DinosaurYounger(DinosaurYounger *this)

{
  ~DinosaurYounger(this + -0x10);
  return;
}


/* DinosaurYounger::~DinosaurYounger() */

void __thiscall DinosaurYounger::~DinosaurYounger(DinosaurYounger *this)

{
  ~DinosaurYounger(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurYounger::~DinosaurYounger() */

void __thiscall DinosaurYounger::~DinosaurYounger(DinosaurYounger *this)

{
  ~DinosaurYounger(this + -0x10);
  return;
}


/* DinosaurYounger::DinosaurYounger() */

void __thiscall DinosaurYounger::DinosaurYounger(DinosaurYounger *this)

{
  undefined4 uVar1;
  
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined ***)this = &PTR_GetClass_06905a30;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurYounger_06905e10;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x218) = uVar1;
  *(undefined4 *)(this + 0x21c) = uVar1;
  *(undefined4 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x224) = uVar1;
  *(undefined4 *)(this + 0x228) = uVar1;
  return;
}


/* DinosaurYounger::StaticNew() */

DinosaurYounger * DinosaurYounger::StaticNew(void)

{
  DinosaurYounger *this;
  
  this = ::operator_new(0x230);
  DinosaurYounger(this);
  return this;
}


/* DinosaurYounger::onCryAnimDone(std::string const&) */

void DinosaurYounger::onCryAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x3c0))();
  return;
}


/* DinosaurYounger::updateState_Idle() */

void __thiscall DinosaurYounger::updateState_Idle(DinosaurYounger *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x21c)) {
    return;
  }
  Creature::setState((Creature *)this,8,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYounger::onEnterState_Cry(DinoYoungerState) */

void DinosaurYounger::onEnterState_Cry(Creature *param_1)

{
  long lVar1;
  DinosaurAnimRig_Runner *pDVar2;
  undefined4 uVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Younger::PlayCry((DinosaurAnimRig_Younger *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x224) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurYounger::onPlaceOnBoard() */

void __thiscall DinosaurYounger::onPlaceOnBoard(DinosaurYounger *this)

{
  DinosaurYoungerPropertySheet *pDVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0x22c) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x218) = uVar2;
  Creature::setState((Creature *)this,0,0);
  pDVar1 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  if ((pDVar1 != (DinosaurYoungerPropertySheet *)0x0) &&
     (pDVar1[0xd8] != (DinosaurYoungerPropertySheet)0x0)) {
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),10,-5,*(float *)(pDVar1 + 0xb8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYounger::onEnterState_Idle(CreatureState) */

void DinosaurYounger::onEnterState_Idle(Creature *param_1)

{
  DinosaurYoungerPropertySheet *pDVar1;
  DinosaurAnimRig_Runner *pDVar2;
  float fVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  pDVar1 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  *(float *)(param_1 + 0x21c) = fVar3 + *(float *)(pDVar1 + 0xb0);
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  DinosaurAnimRig_Younger::PlaySleep((DinosaurAnimRig_Younger *)pDVar2,aRStack_50);
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


/* DinosaurYounger::updateState_Cry() */

void __thiscall DinosaurYounger::updateState_Cry(DinosaurYounger *this)

{
  DinosaurYoungerPropertySheet *pDVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x224);
  pDVar1 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  if (*(float *)(pDVar1 + 0xb4) <= fVar2 - fVar4) {
    (**(code **)(*(long *)this + 0x3c0))(this);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x224) = uVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYounger::onEnterState_Wake(DinoYoungerState) */

void DinosaurYounger::onEnterState_Wake(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWakeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemSummerFireworksAnimRig::PlayAppear((GridItemSummerFireworksAnimRig *)pDVar1,aRStack_50);
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
/* DinosaurYounger::onEnterState_Caught(DinoYoungerState) */

void DinosaurYounger::onEnterState_Caught(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCaughtAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Younger::PlayCaught((DinosaurAnimRig_Younger *)pDVar1,aRStack_50);
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
/* DinosaurYounger::onEnterState_CaughtFly(DinoYoungerState) */

void DinosaurYounger::onEnterState_CaughtFly(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::setUseAnimTranslation(param_1,false);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCaughtAnimDone");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  DinosaurAnimRig_Younger::PlayCaughtFly((DinosaurAnimRig_Younger *)pDVar1,aRStack_50);
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
/* DinosaurYounger::StaticClassInit() */

void DinosaurYounger::StaticClassInit(void)

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
  Delegate1<DinoYoungerState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<DinoYoungerState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurYounger");
      (*pcVar4)(plVar1,asStack_150,FUN_04830944,0x230,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<DinoYoungerState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurYounger,void(DinosaurYounger::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINOYOUNGER_Wake");
  StateDefinition<DinoYoungerState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048303a4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurYounger,void(DinosaurYounger::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINOYOUNGER_Cry");
  StateDefinition<DinoYoungerState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048303a4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurYounger,void(DinosaurYounger::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINOYOUNGER_Caught");
  StateDefinition<DinoYoungerState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048303a4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a0);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<DinosaurYounger,void(DinosaurYounger::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b0);
  Sexy::Delegate1<DinoYoungerState>::
  Delegate1<DinosaurYounger,void(DinosaurYounger::*)(DinoYoungerState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_DINOYOUNGER_CaughtFly");
  StateDefinition<DinoYoungerState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_048303a4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurYounger::StaticGetClass() */

long * DinosaurYounger::StaticGetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurYounger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurYounger::GetClass() const */

long * DinosaurYounger::GetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurYounger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

