// Class: VaseBreakerFlowActionMoveTutorial


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::getPowerupType() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::getPowerupType(VaseBreakerFlowActionMoveTutorial *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"powerupvasebreakermove");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::getPowerupSelectAdvice() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::getPowerupSelectAdvice(VaseBreakerFlowActionMoveTutorial *this)

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
/* VaseBreakerFlowActionMoveTutorial::getOutroAdvice() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::getOutroAdvice(VaseBreakerFlowActionMoveTutorial *this)

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
/* VaseBreakerFlowActionMoveTutorial::StaticClassInit() */

void VaseBreakerFlowActionMoveTutorial::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionMoveTutorial");
    (*pcVar2)(plVar1,asStack_10,FUN_0497b2a4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionMoveTutorial::StaticGetClass() */

long * VaseBreakerFlowActionMoveTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionMoveTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionMoveTutorial::GetClass() const */

long * VaseBreakerFlowActionMoveTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionMoveTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionMoveTutorial::wasPowerupUsed() */

char __thiscall
VaseBreakerFlowActionMoveTutorial::wasPowerupUsed(VaseBreakerFlowActionMoveTutorial *this)

{
  char cVar1;
  int iVar2;
  SharkMinion *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    this_00 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    iVar2 = SharkMinion::getRow(this_00);
    if (iVar2 == 2) {
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::HandleStateMachine_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionMoveTutorial::HandleStateMachine_VaseBreakerTutorialState
          (VaseBreakerFlowActionMoveTutorial *this,uint param_2,int param_3)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  GridItemVase *pGVar2;
  ResourceInfo *pRVar3;
  Board *pBVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_58 [8];
  Vec3 aVStack_50 [24];
  Delegate2<VaseBreakerTutorialState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_VaseBreakerTutorialState);
  Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
  Delegate2<VaseBreakerFlowActionMoveTutorial,void(VaseBreakerFlowActionMoveTutorial::*)(VaseBreakerTutorialState,StateAction)>
            (aDStack_38,aVStack_50);
  if (param_2 == 2) {
    if (param_3 == 1) {
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aVStack_50,L"[ADVICE_USE_MOVEVASE_POWERUP_SELECT_LOCATION]",auStack_58);
      Board::DisplayAdviceAgain(pBVar4,aVStack_50,8,0);
      FUN_05476c50(aVStack_50);
      nop();
      goto LAB_0497a4bc;
    }
    if (param_3 == 0) goto LAB_0497a4bc;
    if (param_3 == 3) {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      goto LAB_0497a4bc;
    }
  }
  else if (param_2 == 3) {
    if (param_3 == 1) {
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aVStack_50,L"[ADVICE_USE_MOVEVASE_POWERUP_BREAK_VASE]",auStack_58);
      Board::DisplayAdviceAgain(pBVar4,aVStack_50,8,0);
      FUN_05476c50(aVStack_50);
      nop();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x58));
      EATextSquish::Vec3::Vec3(aVStack_50,0.0,0.0,70.0);
      VaseBreakerFlowActionTutorialBase::pointArrowAtEntity
                ((BoardEntity *)this,(SexyVector3 *)pRVar3);
      pGVar2 = (GridItemVase *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
      GridItemVase::SetAllowPreGameplayInteraction(pGVar2,true);
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      goto LAB_0497a4bc;
    }
    if (param_3 == 0) goto LAB_0497a4bc;
    if (param_3 == 2) {
      this_00 = (RtMixedPtrBase *)(this + 0x58);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 == '\0') {
        fVar6 = (float)PVZ_T();
        if (5.0 < fVar6 - *(float *)(this + 0x34)) {
          VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState
                    ((VaseBreakerFlowActionTutorialBase *)this,4);
        }
      }
      else {
        pGVar2 = (GridItemVase *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar1 = GridItemVase::IsBreaking(pGVar2);
        if (cVar1 != '\0') {
          uVar5 = PVZ_T();
          *(undefined4 *)(this + 0x34) = uVar5;
          Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
          VaseBreakerFlowActionTutorialBase::hideArrow((VaseBreakerFlowActionTutorialBase *)this);
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
        }
      }
      goto LAB_0497a4bc;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_0497a4bc;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
LAB_0497a4bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionMoveTutorial::VaseBreakerFlowActionMoveTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::VaseBreakerFlowActionMoveTutorial
          (VaseBreakerFlowActionMoveTutorial *this)

{
  VaseBreakerFlowActionTutorialBase::VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  *(undefined ***)this = &PTR_GetClass_06918030;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionMoveTutorial_06918108;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* VaseBreakerFlowActionMoveTutorial::StaticNew() */

VaseBreakerFlowActionMoveTutorial * VaseBreakerFlowActionMoveTutorial::StaticNew(void)

{
  VaseBreakerFlowActionMoveTutorial *this;
  
  this = ::operator_new(0x60);
  VaseBreakerFlowActionMoveTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::HandleSuperFSMAction_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionMoveTutorial::HandleSuperFSMAction_VaseBreakerTutorialState
          (VaseBreakerFlowActionMoveTutorial *this,uint param_2,int param_3)

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


/* VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial
          (VaseBreakerFlowActionMoveTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06918030;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionMoveTutorial_06918108;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial
          (VaseBreakerFlowActionMoveTutorial *this)

{
  ~VaseBreakerFlowActionMoveTutorial(this + -0x10);
  return;
}


/* VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial
          (VaseBreakerFlowActionMoveTutorial *this)

{
  ~VaseBreakerFlowActionMoveTutorial(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::~VaseBreakerFlowActionMoveTutorial
          (VaseBreakerFlowActionMoveTutorial *this)

{
  ~VaseBreakerFlowActionMoveTutorial(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::onEnd() */

void __thiscall VaseBreakerFlowActionMoveTutorial::onEnd(VaseBreakerFlowActionMoveTutorial *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  VaseBreakerFlowActionTutorialBase::onEnd((VaseBreakerFlowActionTutorialBase *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar5 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(1,2);
  EntityFinder::GetEntities(avStack_20,uVar3);
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
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    (**(code **)(*(long *)*puVar4 + 0x48))((long *)*puVar4);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Board::DeleteResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionMoveTutorial::onEnd() */

void __thiscall VaseBreakerFlowActionMoveTutorial::onEnd(VaseBreakerFlowActionMoveTutorial *this)

{
  onEnd(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionMoveTutorial::setupBoardForTutorial() */

void __thiscall
VaseBreakerFlowActionMoveTutorial::setupBoardForTutorial(VaseBreakerFlowActionMoveTutorial *this)

{
  string *psVar1;
  long *plVar2;
  ZombieType *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  VaseBreakerModule *this_01;
  GridItemVase *this_02;
  Board *pBVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  undefined1 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_48,"repeater");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_48);
  nop();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  (**(code **)(*plVar2 + 0x48))(plVar2,amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_48,"tutorial");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_48);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  ZombieType::AddInGameResourceRequirements(this_00,(set *)amStack_38);
  uVar3 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar4 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  assign<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),uVar3,uVar4);
  Board::LoadResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)(this + 0x40));
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_48,"repeater");
  Board::AddPlant(pBVar5,0,2,asStack_48,-1,false,false,false,false);
  std::string::~string(asStack_48);
  nop();
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_48,"repeater");
  Board::AddPlant(pBVar5,1,2,asStack_48,-1,false,false,false,false);
  std::string::~string(asStack_48);
  nop();
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_48,"repeater");
  Board::AddPlant(pBVar5,2,2,asStack_48,-1,false,false,false,false);
  std::string::~string(asStack_48);
  nop();
  VaseConfiguration::VaseConfiguration((VaseConfiguration *)asStack_48);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_58,"tutorial");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)asStack_48,(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  local_40 = 0;
  this_01 = (VaseBreakerModule *)
            VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this);
  Sexy::Point::Point((Point *)aRStack_50,5,1);
  this_02 = (GridItemVase *)
            VaseBreakerModule::SpawnVaseImmediately
                      (this_01,(VaseConfiguration *)asStack_48,(Point *)aRStack_50);
  GridItemVase::Drop(this_02);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

