// Class: VaseBreakerFlowActionRevealTutorial


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::getPowerupType() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::getPowerupType(VaseBreakerFlowActionRevealTutorial *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"powerupvasebreakerreveal");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::getPowerupSelectAdvice() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::getPowerupSelectAdvice
          (VaseBreakerFlowActionRevealTutorial *this)

{
  long lVar1;
  undefined8 in_x8;
  
  lVar1 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::getOutroAdvice() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::getOutroAdvice(VaseBreakerFlowActionRevealTutorial *this)

{
  long lVar1;
  undefined8 in_x8;
  
  lVar1 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::StaticClassInit() */

void VaseBreakerFlowActionRevealTutorial::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionRevealTutorial");
    (*pcVar2)(plVar1,asStack_10,FUN_0497b140,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionRevealTutorial::StaticGetClass() */

long * VaseBreakerFlowActionRevealTutorial::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowActionTutorialBase::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionRevealTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionRevealTutorial::GetClass() const */

long * VaseBreakerFlowActionRevealTutorial::GetClass(void)

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
  uVar2 = VaseBreakerFlowActionTutorialBase::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionRevealTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionRevealTutorial::wasPowerupUsed() */

char __thiscall
VaseBreakerFlowActionRevealTutorial::wasPowerupUsed(VaseBreakerFlowActionRevealTutorial *this)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  GridItemVase *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x40);
    uVar2 = FUN_04978fec(uVar4,*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar3) {
      return '\0';
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04978ff8(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    this_01 = (GridItemVase *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = GridItemVase::AreContentsRevealed(this_01);
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::HandleStateMachine_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionRevealTutorial::HandleStateMachine_VaseBreakerTutorialState
          (VaseBreakerFlowActionRevealTutorial *this,uint param_2,int param_3)

{
  Board *pBVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<VaseBreakerTutorialState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_VaseBreakerTutorialState);
  Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
  Delegate2<VaseBreakerFlowActionRevealTutorial,void(VaseBreakerFlowActionRevealTutorial::*)(VaseBreakerTutorialState,StateAction)>
            (aDStack_38,aCStack_50);
  if (param_2 == 2) {
    if (param_3 == 1) {
      pBVar1 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aCStack_50,L"[ADVICE_USE_REVEAL_POWERUP]",auStack_58);
      Board::DisplayAdviceAgain(pBVar1,aCStack_50,8,0);
      FUN_05476c50(aCStack_50);
      nop();
      goto LAB_0497a2f8;
    }
    if (param_3 == 0) goto LAB_0497a2f8;
    if (param_3 == 3) {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      goto LAB_0497a2f8;
    }
  }
  else if (param_2 == 3) {
    if (param_3 == 1) {
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar3;
      goto LAB_0497a2f8;
    }
    if (param_3 == 0) goto LAB_0497a2f8;
    if (param_3 == 2) {
      fVar2 = (float)PVZ_T();
      if (1.0 < fVar2 - *(float *)(this + 0x34)) {
        VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState
                  ((VaseBreakerFlowActionTutorialBase *)this,4);
      }
      goto LAB_0497a2f8;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_0497a2f8;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
LAB_0497a2f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::HandleSuperFSMAction_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionRevealTutorial::HandleSuperFSMAction_VaseBreakerTutorialState
          (VaseBreakerFlowActionRevealTutorial *this,uint param_2,int param_3)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_BouncingArrow *pEVar1;
  StandaloneEffect *this_01;
  UIWidget *this_02;
  Board *pBVar2;
  float fVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate2<VaseBreakerTutorialState,StateAction> aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,
             VaseBreakerFlowActionTutorialBase::HandleSuperFSMAction_VaseBreakerTutorialState);
  Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
  Delegate2<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState,StateAction)>
            (aDStack_38,aRStack_50);
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      if (param_3 == 1) {
        this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
        Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
        StandaloneEffect::CreateEffect<Effect_BouncingArrow>();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        pEVar1 = (Effect_BouncingArrow *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar1,5.0,25.0);
        pEVar1 = (Effect_BouncingArrow *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b72cb8);
        Effect_BouncingArrow::SetArrowImage(pEVar1,aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        this_01 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        StandaloneEffect::SetVisibility(this_01,false);
        VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState
                  ((VaseBreakerFlowActionTutorialBase *)this,1);
        (**(code **)(*(long *)this + 0x98))(this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 == 1) {
      std::string::string(asStack_58,"UIPowerupHolder");
      UIWidget::GetWidgetBySheetName(asStack_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      this_02 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      UIWidget::SetVisible(this_02,true);
      VaseBreakerFlowActionTutorialBase::setPowerupsFree
                ((VaseBreakerFlowActionTutorialBase *)this,true);
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      (**(code **)(*(long *)this + 0xa8))(aRStack_50,this);
      VaseBreakerFlowActionTutorialBase::pointArrowAtPowerupButton
                ((VaseBreakerFlowActionTutorialBase *)this,(string *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      (**(code **)(*(long *)this + 0xb0))(aRStack_50,this);
      Board::DisplayAdviceAgain(pBVar2,aRStack_50,8,0);
      FUN_05476c50(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
    else if (param_3 != 0) {
      if (param_3 == 3) {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        VaseBreakerFlowActionTutorialBase::hideArrow((VaseBreakerFlowActionTutorialBase *)this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
    break;
  case 4:
    if (param_3 == 1) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar4;
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      (**(code **)(*(long *)this + 0xb8))(aRStack_50,this);
      Board::DisplayAdviceAgain(pBVar2,aRStack_50,7,0);
      FUN_05476c50(aRStack_50);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        fVar3 = (float)PVZ_T();
        if (3.0 < fVar3 - *(float *)(this + 0x34)) {
          RunnableAction::End((RunnableAction *)(this + 0x10));
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionRevealTutorial::VaseBreakerFlowActionRevealTutorial() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::VaseBreakerFlowActionRevealTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  VaseBreakerFlowActionTutorialBase::VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  *(undefined ***)this = &PTR_GetClass_06917f20;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionRevealTutorial_06917ff8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* VaseBreakerFlowActionRevealTutorial::StaticNew() */

VaseBreakerFlowActionRevealTutorial * VaseBreakerFlowActionRevealTutorial::StaticNew(void)

{
  VaseBreakerFlowActionRevealTutorial *this;
  
  this = ::operator_new(0x58);
  VaseBreakerFlowActionRevealTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::onEnd() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::onEnd(VaseBreakerFlowActionRevealTutorial *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  VaseBreakerFlowActionTutorialBase::onEnd((VaseBreakerFlowActionTutorialBase *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::clear
            ((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
             this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionRevealTutorial::onEnd() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::onEnd(VaseBreakerFlowActionRevealTutorial *this)

{
  onEnd(this + -0x10);
  return;
}


/* VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06917f20;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionRevealTutorial_06917ff8;
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
             (this + 0x40));
  VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial()
    */

void __thiscall
VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  ~VaseBreakerFlowActionRevealTutorial(this + -0x10);
  return;
}


/* VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  ~VaseBreakerFlowActionRevealTutorial(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial()
    */

void __thiscall
VaseBreakerFlowActionRevealTutorial::~VaseBreakerFlowActionRevealTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  ~VaseBreakerFlowActionRevealTutorial(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionRevealTutorial::setupBoardForTutorial() */

void __thiscall
VaseBreakerFlowActionRevealTutorial::setupBoardForTutorial
          (VaseBreakerFlowActionRevealTutorial *this)

{
  vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *this_00;
  string *psVar1;
  VaseBreakerModule *pVVar2;
  GridItemVase *pGVar3;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  VaseConfiguration aVStack_18 [8];
  undefined1 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
            (this + 0x40);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::clear
            (this_00);
  VaseConfiguration::VaseConfiguration(aVStack_18);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aVStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  local_10 = 0;
  pVVar2 = (VaseBreakerModule *)VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this)
  ;
  Sexy::Point::Point((Point *)aRStack_20,3,2);
  pGVar3 = (GridItemVase *)
           VaseBreakerModule::SpawnVaseImmediately(pVVar2,aVStack_18,(Point *)aRStack_20);
  GridItemVase::Drop(pGVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)asStack_28);
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::
  push_back(this_00,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  pVVar2 = (VaseBreakerModule *)VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this)
  ;
  Sexy::Point::Point((Point *)aRStack_20,4,2);
  pGVar3 = (GridItemVase *)
           VaseBreakerModule::SpawnVaseImmediately(pVVar2,aVStack_18,(Point *)aRStack_20);
  GridItemVase::Drop(pGVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)asStack_28);
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::
  push_back(this_00,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  pVVar2 = (VaseBreakerModule *)VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this)
  ;
  Sexy::Point::Point((Point *)aRStack_20,5,2);
  pGVar3 = (GridItemVase *)
           VaseBreakerModule::SpawnVaseImmediately(pVVar2,aVStack_18,(Point *)aRStack_20);
  GridItemVase::Drop(pGVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)asStack_28);
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::
  push_back(this_00,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

