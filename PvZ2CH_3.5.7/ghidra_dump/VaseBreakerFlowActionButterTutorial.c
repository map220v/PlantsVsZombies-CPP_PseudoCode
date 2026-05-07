// Class: VaseBreakerFlowActionButterTutorial


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionButterTutorial::getPowerupType() */

void __thiscall
VaseBreakerFlowActionButterTutorial::getPowerupType(VaseBreakerFlowActionButterTutorial *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"powerupvasebreakerbutter");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionButterTutorial::getPowerupSelectAdvice() */

void __thiscall
VaseBreakerFlowActionButterTutorial::getPowerupSelectAdvice
          (VaseBreakerFlowActionButterTutorial *this)

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
/* VaseBreakerFlowActionButterTutorial::getOutroAdvice() */

void __thiscall
VaseBreakerFlowActionButterTutorial::getOutroAdvice(VaseBreakerFlowActionButterTutorial *this)

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
/* VaseBreakerFlowActionButterTutorial::StaticClassInit() */

void VaseBreakerFlowActionButterTutorial::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionButterTutorial");
    (*pcVar2)(plVar1,asStack_10,FUN_0497b47c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionButterTutorial::StaticGetClass() */

long * VaseBreakerFlowActionButterTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionButterTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionButterTutorial::GetClass() const */

long * VaseBreakerFlowActionButterTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionButterTutorial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionButterTutorial::wasPowerupUsed() */

char __thiscall
VaseBreakerFlowActionButterTutorial::wasPowerupUsed(VaseBreakerFlowActionButterTutorial *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
    ;
    cVar1 = Zombie::HasCondition(uVar2,3);
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionButterTutorial::HandleStateMachine_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionButterTutorial::HandleStateMachine_VaseBreakerTutorialState
          (VaseBreakerFlowActionButterTutorial *this,uint param_2,int param_3)

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
  Delegate2<VaseBreakerFlowActionButterTutorial,void(VaseBreakerFlowActionButterTutorial::*)(VaseBreakerTutorialState,StateAction)>
            (aDStack_38,aCStack_50);
  if (param_2 == 2) {
    if (param_3 == 1) {
      pBVar1 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aCStack_50,L"[ADVICE_USE_BUTTER_POWERUP]",auStack_58);
      Board::DisplayAdviceAgain(pBVar1,aCStack_50,8,0);
      FUN_05476c50(aCStack_50);
      nop();
      goto LAB_0497a770;
    }
    if (param_3 == 0) goto LAB_0497a770;
    if (param_3 == 3) {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      goto LAB_0497a770;
    }
  }
  else if (param_2 == 3) {
    if (param_3 == 1) {
      VaseBreakerFlowActionTutorialBase::setPowerupsClickable
                ((VaseBreakerFlowActionTutorialBase *)this,false);
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x34) = uVar3;
      goto LAB_0497a770;
    }
    if (param_3 == 0) goto LAB_0497a770;
    if (param_3 == 2) {
      fVar2 = (float)PVZ_T();
      if (2.0 < fVar2 - *(float *)(this + 0x34)) {
        VaseBreakerFlowActionTutorialBase::setState_VaseBreakerTutorialState
                  ((VaseBreakerFlowActionTutorialBase *)this,4);
      }
      goto LAB_0497a770;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_0497a770;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
LAB_0497a770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionButterTutorial::VaseBreakerFlowActionButterTutorial() */

void __thiscall
VaseBreakerFlowActionButterTutorial::VaseBreakerFlowActionButterTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  VaseBreakerFlowActionTutorialBase::VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  *(undefined ***)this = &PTR_GetClass_06918140;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionButterTutorial_06918218;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* VaseBreakerFlowActionButterTutorial::StaticNew() */

VaseBreakerFlowActionButterTutorial * VaseBreakerFlowActionButterTutorial::StaticNew(void)

{
  VaseBreakerFlowActionButterTutorial *this;
  
  this = ::operator_new(0x60);
  VaseBreakerFlowActionButterTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionButterTutorial::HandleSuperFSMAction_VaseBreakerTutorialState(VaseBreakerTutorialState,
   StateAction) */

void __thiscall
VaseBreakerFlowActionButterTutorial::HandleSuperFSMAction_VaseBreakerTutorialState
          (VaseBreakerFlowActionButterTutorial *this,uint param_2,int param_3)

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


/* VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial() */

void __thiscall
VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_06918140;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionButterTutorial_06918218;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  VaseBreakerFlowActionTutorialBase::~VaseBreakerFlowActionTutorialBase
            ((VaseBreakerFlowActionTutorialBase *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial()
    */

void __thiscall
VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  ~VaseBreakerFlowActionButterTutorial(this + -0x10);
  return;
}


/* VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial() */

void __thiscall
VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  ~VaseBreakerFlowActionButterTutorial(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial()
    */

void __thiscall
VaseBreakerFlowActionButterTutorial::~VaseBreakerFlowActionButterTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  ~VaseBreakerFlowActionButterTutorial(this + -0x10);
  return;
}


/* VaseBreakerFlowActionButterTutorial::onEnd() */

void __thiscall
VaseBreakerFlowActionButterTutorial::onEnd(VaseBreakerFlowActionButterTutorial *this)

{
  char cVar1;
  long *plVar2;
  
  VaseBreakerFlowActionTutorialBase::onEnd((VaseBreakerFlowActionTutorialBase *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    (**(code **)(*plVar2 + 0x48))();
  }
  Board::DeleteResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionButterTutorial::onEnd() */

void __thiscall
VaseBreakerFlowActionButterTutorial::onEnd(VaseBreakerFlowActionButterTutorial *this)

{
  onEnd(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionButterTutorial::setupBoardForTutorial() */

void __thiscall
VaseBreakerFlowActionButterTutorial::setupBoardForTutorial
          (VaseBreakerFlowActionButterTutorial *this)

{
  int iVar1;
  string *psVar2;
  ZombieType *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  SexyVector3 *pSVar5;
  long *plVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_38,"tutorial");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_38);
  nop();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)asStack_38);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  ZombieType::AddInGameResourceRequirements(this_00,(set *)asStack_38);
  uVar3 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     asStack_38);
  uVar4 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)asStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  assign<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),uVar3,uVar4);
  Board::LoadResourceGroupsForGameplay(*(Board **)(gLawnApp + 0x9f0),(vector *)(this + 0x40));
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_58);
  pSVar5 = (SexyVector3 *)(*pcVar7)(plVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_48,0xfffffffb,0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  DVec3::DVec3((DVec3 *)&local_48);
  iVar1 = BoardTransforms::GridToBoardSpaceX(4);
  local_48 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(2);
  local_44 = (float)iVar1;
  local_40 = 0;
  BoardEntity::PlaceOnBoard(pSVar5);
  (**(code **)(*(long *)pSVar5 + 600))(pSVar5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)asStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

