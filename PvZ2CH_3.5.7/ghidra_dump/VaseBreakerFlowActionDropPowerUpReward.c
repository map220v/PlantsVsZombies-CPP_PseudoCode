// Class: VaseBreakerFlowActionDropPowerUpReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionDropPowerUpReward::StaticClassInit() */

void VaseBreakerFlowActionDropPowerUpReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionDropPowerUpReward");
    (*pcVar2)(plVar1,asStack_10,FUN_04977360,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionDropPowerUpReward::StaticGetClass() */

long * VaseBreakerFlowActionDropPowerUpReward::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionDropPowerUpReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionDropPowerUpReward::GetClass() const */

long * VaseBreakerFlowActionDropPowerUpReward::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionDropPowerUpReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionDropPowerUpReward::VaseBreakerFlowActionDropPowerUpReward() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::VaseBreakerFlowActionDropPowerUpReward
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917be0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionDropPowerUpReward_06917c88;
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* VaseBreakerFlowActionDropPowerUpReward::StaticNew() */

VaseBreakerFlowActionDropPowerUpReward * VaseBreakerFlowActionDropPowerUpReward::StaticNew(void)

{
  VaseBreakerFlowActionDropPowerUpReward *this;
  
  this = ::operator_new(0x48);
  VaseBreakerFlowActionDropPowerUpReward(this);
  return this;
}


/* VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06917be0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionDropPowerUpReward_06917c88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::string::~string((string *)(this + 0x30));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  ~VaseBreakerFlowActionDropPowerUpReward(this + -0x10);
  return;
}


/* VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  ~VaseBreakerFlowActionDropPowerUpReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::~VaseBreakerFlowActionDropPowerUpReward
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  ~VaseBreakerFlowActionDropPowerUpReward(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionDropPowerUpReward::startCollectableCollection(float) */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::startCollectableCollection
          (VaseBreakerFlowActionDropPowerUpReward *this,float param_1)

{
  int iVar1;
  int iVar2;
  ResourceInfo *this_00;
  undefined8 uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x40));
  Collectable::StartCollect((Collectable *)this_00,true);
  Collectable::SetFlashing((Collectable *)this_00,false);
  Sexy::Point::Point((Point *)&local_20);
  iVar1 = *(int *)(gLawnApp + 0x724);
  Board::GetBoardBaseOffset();
  iVar2 = *(int *)(gLawnApp + 0x728);
  local_20 = (int)((float)iVar1 * 0.5 - (float)local_18);
  Board::GetBoardBaseOffset();
  local_1c = (int)((float)iVar2 * 0.5 - (float)local_14);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
  iVar1 = FUN_04973128(local_20);
  iVar2 = FUN_04973128(local_1c);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar1,(float)iVar2,0.0);
  Collectable::SetMotionInterpolateAndScale
            ((Collectable *)0x3f800000,0x40000000,param_1,this_00,uVar3,(Vec3 *)&local_18,5);
  Collectable::CancelFinishCollectAfterMotion((Collectable *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionDropPowerUpReward::onCollectableTryToCollect(Collectable*) */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onCollectableTryToCollect
          (VaseBreakerFlowActionDropPowerUpReward *this,Collectable *param_1)

{
  char cVar1;
  ResourceInfo *this_00;
  float fVar2;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x40));
  if ((param_1 == (Collectable *)this_00) &&
     (cVar1 = Collectable::IsCollecting((Collectable *)this_00), cVar1 == '\0')) {
    startCollectableCollection(this,3.0);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x38) = fVar2 + 3.0;
  }
  return;
}


/* VaseBreakerFlowActionDropPowerUpReward::registerForEvents() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::registerForEvents
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableTryToCollect);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionDropPowerUpReward,void(VaseBreakerFlowActionDropPowerUpReward::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionDropPowerUpReward::onBegin() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onBegin(VaseBreakerFlowActionDropPowerUpReward *this)

{
  UIWidget *this_00;
  char *pcVar1;
  undefined8 uVar2;
  Collectable *this_01;
  string *psVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPauseButton");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Spawn_Sun");
  uVar2 = FUN_0547429c(this + 0x30);
  Sexy::StrFormat("%s",asStack_20,uVar2);
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,400.0,200.0,0.0);
  this_01 = (Collectable *)Board::AddCollectableWithDefaultMotion(psVar3,(SexyVector3 *)asStack_20);
  Collectable::SetNeverExpire(this_01,true);
  Collectable::SetIsEndOfLevelReward(this_01,true);
  Board::TossCollectableOntoBoard(*(Board **)(gLawnApp + 0x9f0),this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionDropPowerUpReward::onBegin() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onBegin(VaseBreakerFlowActionDropPowerUpReward *this)

{
  onBegin(this + -0x10);
  return;
}


/* VaseBreakerFlowActionDropPowerUpReward::onAwardScreenDismissed() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onAwardScreenDismissed
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  PVZ2UIAwardScreen *this_00;
  char *pcVar1;
  
  this_00 = (PVZ2UIAwardScreen *)FUN_0497287c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Prize_Menu");
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionDropPowerUpReward::showAwardScreen() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::showAwardScreen
          (VaseBreakerFlowActionDropPowerUpReward *this)

{
  int extraout_w0;
  PVZ2UIAwardScreen *this_00;
  undefined8 uVar1;
  string *psVar2;
  char *pcVar3;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVZ2UIAwardScreen *)FUN_0497287c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  PVZ2UIAwardScreen::ShowAwardScreen(this_00);
  uVar1 = FUN_0547429c(this + 0x30);
  Sexy::StrFormat("%s",asStack_58,uVar1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar2);
  PVZ2UIAwardScreen::AddCollectableReward(this_00,aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  nop();
  UIHappyVaseBreaker::SetResetHammerNeed((UIHappyVaseBreaker *)this_00,extraout_w0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAwardScreenDismissed);
  Sexy::Delegate0::
  Delegate0<VaseBreakerFlowActionDropPowerUpReward,void(VaseBreakerFlowActionDropPowerUpReward::*)()>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
  PVZ2UIAwardScreen::Start(this_00);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Prize_Menu");
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionDropPowerUpReward::onUpdate() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onUpdate(VaseBreakerFlowActionDropPowerUpReward *this)

{
  long *plVar1;
  float fVar2;
  
  if ((0.0 < *(float *)(this + 0x38)) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar2))
  {
    *(undefined4 *)(this + 0x38) = 0;
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    (**(code **)(*plVar1 + 0x48))();
    showAwardScreen(this);
    return;
  }
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionDropPowerUpReward::onUpdate() */

void __thiscall
VaseBreakerFlowActionDropPowerUpReward::onUpdate(VaseBreakerFlowActionDropPowerUpReward *this)

{
  onUpdate(this + -0x10);
  return;
}

