// Class: AdaptorJoustMatchLoadingScreen


/* AdaptorJoustMatchLoadingScreen::HandleSuperFSMAction_MatchLoadingScreenState(MatchLoadingScreenState,
   StateAction) */

void AdaptorJoustMatchLoadingScreen::HandleSuperFSMAction_MatchLoadingScreenState(void)

{
  return;
}


/* AdaptorJoustMatchLoadingScreen::onHotUIAnimFinished(std::string const&) */

void AdaptorJoustMatchLoadingScreen::onHotUIAnimFinished(string *param_1)

{
  param_1[0x14a] = (string)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchLoadingScreen::StaticClassInit() */

void AdaptorJoustMatchLoadingScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustMatchLoadingScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03863230,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchLoadingScreen::StaticGetClass() */

long * AdaptorJoustMatchLoadingScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustMatchLoadingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustMatchLoadingScreen::GetClass() const */

long * AdaptorJoustMatchLoadingScreen::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustMatchLoadingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustMatchLoadingScreen::Setup(AdaptorJoustMatchLoadingScreenConfig const&) */

void __thiscall
AdaptorJoustMatchLoadingScreen::Setup
          (AdaptorJoustMatchLoadingScreen *this,AdaptorJoustMatchLoadingScreenConfig *param_1)

{
  AdaptorJoustMatchLoadingScreenConfig::operator=
            ((AdaptorJoustMatchLoadingScreenConfig *)(this + 0x128),param_1);
  return;
}


/* AdaptorJoustMatchLoadingScreen::SetLoadingComplete() */

void __thiscall
AdaptorJoustMatchLoadingScreen::SetLoadingComplete(AdaptorJoustMatchLoadingScreen *this)

{
  this[0x149] = (AdaptorJoustMatchLoadingScreen)0x1;
  return;
}


/* AdaptorJoustMatchLoadingScreen::isReadyToTransitionOut() */

undefined8 __thiscall
AdaptorJoustMatchLoadingScreen::isReadyToTransitionOut(AdaptorJoustMatchLoadingScreen *this)

{
  char cVar1;
  
  if ((this[0x149] == (AdaptorJoustMatchLoadingScreen)0x0) &&
     ((this[0x140] == (AdaptorJoustMatchLoadingScreen)0x0 ||
      (cVar1 = GameStateMgr::IsTransitioning(gGameStateMgr), cVar1 != '\0')))) {
    return 0;
  }
  return 1;
}


/* AdaptorJoustMatchLoadingScreen::onLayoutFinished() */

void __thiscall
AdaptorJoustMatchLoadingScreen::onLayoutFinished(AdaptorJoustMatchLoadingScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_RealT();
  *(undefined4 *)(this + 0x14c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchLoadingScreen::startHotUIAnim(std::string const&, std::string const&) */

void __thiscall
AdaptorJoustMatchLoadingScreen::startHotUIAnim
          (AdaptorJoustMatchLoadingScreen *this,string *param_1,string *param_2)

{
  int iVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03862f88(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHotUIAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<AdaptorJoustMatchLoadingScreen,void(AdaptorJoustMatchLoadingScreen::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  iVar1 = HotUIAnim::PlayAndStop((HotUIAnim *)pHVar2,param_2,0,aDStack_38);
  if (iVar1 != -1) {
    this[0x14a] = (AdaptorJoustMatchLoadingScreen)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchLoadingScreen::AdaptorJoustMatchLoadingScreen() */

void __thiscall
AdaptorJoustMatchLoadingScreen::AdaptorJoustMatchLoadingScreen(AdaptorJoustMatchLoadingScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066aa870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aabd8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aac20;
  AdaptorJoustMatchLoadingScreenConfig::AdaptorJoustMatchLoadingScreenConfig
            ((AdaptorJoustMatchLoadingScreenConfig *)(this + 0x128));
  this[0x148] = (AdaptorJoustMatchLoadingScreen)0x0;
  this[0x149] = (AdaptorJoustMatchLoadingScreen)0x0;
  this[0x14a] = (AdaptorJoustMatchLoadingScreen)0x0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x150));
  return;
}


/* AdaptorJoustMatchLoadingScreen::StaticNew() */

AdaptorJoustMatchLoadingScreen * AdaptorJoustMatchLoadingScreen::StaticNew(void)

{
  AdaptorJoustMatchLoadingScreen *this;
  
  this = ::operator_new(0x180);
  AdaptorJoustMatchLoadingScreen(this);
  return this;
}


/* AdaptorJoustMatchLoadingScreen::~AdaptorJoustMatchLoadingScreen() */

void __thiscall
AdaptorJoustMatchLoadingScreen::~AdaptorJoustMatchLoadingScreen
          (AdaptorJoustMatchLoadingScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_066aa870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aabd8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aac20;
  CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection
            ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150));
  std::pair<std::wstring,std::wstring>::~pair((pair<std::wstring,std::wstring> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustMatchLoadingScreen::~AdaptorJoustMatchLoadingScreen() */

void __thiscall
AdaptorJoustMatchLoadingScreen::~AdaptorJoustMatchLoadingScreen
          (AdaptorJoustMatchLoadingScreen *this)

{
  ~AdaptorJoustMatchLoadingScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchLoadingScreen::onLoadUIView() */

void __thiscall AdaptorJoustMatchLoadingScreen::onLoadUIView(AdaptorJoustMatchLoadingScreen *this)

{
  undefined8 uVar1;
  HotUIManager *this_00;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar2;
  int extraout_w1;
  int extraout_w1_00;
  bool *pbVar3;
  bool *pbVar4;
  bool abStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar4 = abStack_50;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  pbVar3 = pbVar4;
  std::string::string(asStack_48,"$PLAYER_NAME");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::WStringToString((Sexy *)(this + 0x128),(wstring *)0x0,pbVar3);
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"$OPPONENT_NAME");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::WStringToString((Sexy *)(this + 0x130),(wstring *)0x0,pbVar4);
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"JoustMatchLoadingScreen");
  this_01 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_01);
  std::string::string(asStack_40,"PlayerAvatarImage");
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x138),extraout_w1);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_40,asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"OpponentAvatarImage");
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x13c),extraout_w1_00);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_40,asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"PlayerNameLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,(Sexy *)(this + 0x128));
  std::string::string(asStack_40,"OpponentNameLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x360))(pHVar2,(Sexy *)(this + 0x130));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchLoadingScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustMatchLoadingScreen::onLinkToUIViewCreated(AdaptorJoustMatchLoadingScreen *this)

{
  CurveSequenceCollection<Sexy::SexyVector2> *this_00;
  int iVar1;
  HotUIFile *this_01;
  long lVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  float fVar4;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_03863084();
  this_01 = (HotUIFile *)FUN_03862f88(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"PlayerInfoBackground");
  lVar2 = HotUIFile::GetWidgetByName(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(lVar2 + 0x48);
  Sexy::FastCurve::SetOutRange(aFStack_20,(float)iVar1 - fVar4,(float)*(int *)(lVar2 + 0x4c));
  Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar1,(float)*(int *)(lVar2 + 0x4c));
  std::string::string(asStack_10,"player_in");
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_20);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar3,aFStack_20,aFStack_18,2);
  std::string::string(asStack_10,"player_out");
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_18);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar3,aFStack_18,aFStack_20,2);
  std::string::string(asStack_10,"OpponentInfoBackground");
  lVar2 = HotUIFile::GetWidgetByName(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(lVar2 + 0x48);
  Sexy::FastCurve::SetOutRange(aFStack_20,fVar4 + (float)iVar1,(float)*(int *)(lVar2 + 0x4c));
  Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar1,(float)*(int *)(lVar2 + 0x4c));
  std::string::string(asStack_10,"opponent_in");
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_20);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar3,aFStack_20,aFStack_18,2);
  std::string::string(asStack_10,"opponent_out");
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_18);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar3,aFStack_18,aFStack_20,2);
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
            ((AdaptorJoustMatchmakingScreen *)this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustMatchLoadingScreen::updateWidgetFromAnimation(std::string const&, std::string const&,
   float) */

byte __thiscall
AdaptorJoustMatchLoadingScreen::updateWidgetFromAnimation
          (AdaptorJoustMatchLoadingScreen *this,string *param_1,string *param_2,float param_3)

{
  byte bVar1;
  HotUIFile *this_00;
  long lVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  float fVar4;
  float in_s1;
  
  this_00 = (HotUIFile *)FUN_03862f88(*(undefined8 *)(this + 0xf8));
  lVar2 = HotUIFile::GetWidgetByName(this_00,param_1);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  fVar4 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar3,param_3);
  *(int *)(lVar2 + 0x48) = (int)fVar4;
  *(int *)(lVar2 + 0x4c) = (int)in_s1;
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar3,param_3);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustMatchLoadingScreen::HandleStateMachine_MatchLoadingScreenState(MatchLoadingScreenState,
   StateAction) */

void __thiscall
AdaptorJoustMatchLoadingScreen::HandleStateMachine_MatchLoadingScreenState
          (AdaptorJoustMatchLoadingScreen *this,uint param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  float fVar5;
  undefined4 uVar6;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<MatchLoadingScreenState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_MatchLoadingScreenState);
  Sexy::Delegate2<MatchLoadingScreenState,StateAction>::
  Delegate2<AdaptorJoustMatchLoadingScreen,void(AdaptorJoustMatchLoadingScreen::*)(MatchLoadingScreenState,StateAction)>
            (aDStack_38,asStack_50);
  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      uVar6 = PVZ_RealT();
      *(undefined4 *)(this + 0x14c) = uVar6;
      std::string::string(asStack_58,"PlayerInfoBackground");
      std::string::string(asStack_50,"player_in");
      updateWidgetFromAnimation(this,asStack_58,asStack_50,0.0);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      std::string::string(asStack_58,"OpponentInfoBackground");
      std::string::string(asStack_50,"opponent_in");
      updateWidgetFromAnimation(this,asStack_58,asStack_50,0.0);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      std::string::string(asStack_58,"VersusIcon");
      std::string::string(asStack_50,"INTRO");
      startHotUIAnim(this,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Versus_banner_in");
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        std::string::string(asStack_58,"PlayerInfoBackground");
        std::string::string(asStack_50,"player_in");
        fVar5 = (float)PVZ_RealT();
        bVar2 = updateWidgetFromAnimation
                          (this,asStack_58,asStack_50,fVar5 - *(float *)(this + 0x14c));
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        std::string::string(asStack_58,"OpponentInfoBackground");
        std::string::string(asStack_50,"opponent_in");
        fVar5 = (float)PVZ_RealT();
        bVar3 = updateWidgetFromAnimation
                          (this,asStack_58,asStack_50,fVar5 - *(float *)(this + 0x14c));
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        if ((byte)this[0x14a] < (bVar3 & bVar2)) {
          AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
                    ((AdaptorJoustMatchmakingScreen *)this,1);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 != 0) {
      if (param_3 == 2) {
        cVar1 = isReadyToTransitionOut(this);
        if (cVar1 != '\0') {
          AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
                    ((AdaptorJoustMatchmakingScreen *)this,2);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  case 2:
    if (param_3 == 1) {
      uVar6 = PVZ_RealT();
      *(undefined4 *)(this + 0x14c) = uVar6;
      std::string::string(asStack_58,"VersusIcon");
      std::string::string(asStack_50,"OUTRO");
      startHotUIAnim(this,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_UI_Versus_banner_out");
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        std::string::string(asStack_58,"PlayerInfoBackground");
        std::string::string(asStack_50,"player_out");
        fVar5 = (float)PVZ_RealT();
        bVar2 = updateWidgetFromAnimation
                          (this,asStack_58,asStack_50,fVar5 - *(float *)(this + 0x14c));
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        std::string::string(asStack_58,"OpponentInfoBackground");
        std::string::string(asStack_50,"opponent_out");
        fVar5 = (float)PVZ_RealT();
        bVar3 = updateWidgetFromAnimation
                          (this,asStack_58,asStack_50,fVar5 - *(float *)(this + 0x14c));
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        if ((byte)this[0x14a] < (bVar3 & bVar2)) {
          (**(code **)(*(long *)this + 0x158))(this,0);
          HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
          AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
                    ((AdaptorJoustMatchmakingScreen *)this,3);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
      }
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdaptorJoustMatchLoadingScreen::Update() */

void __thiscall AdaptorJoustMatchLoadingScreen::Update(AdaptorJoustMatchLoadingScreen *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  uVar1 = FUN_03862f98(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  return;
}

