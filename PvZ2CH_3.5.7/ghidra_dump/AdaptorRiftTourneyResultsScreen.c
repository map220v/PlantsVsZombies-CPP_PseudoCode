// Class: AdaptorRiftTourneyResultsScreen


/* AdaptorRiftTourneyResultsScreen::HandleSuperFSMAction_RiftTournamentResultsScreenState(RiftTournamentResultsScreenState,
   StateAction) */

void AdaptorRiftTourneyResultsScreen::HandleSuperFSMAction_RiftTournamentResultsScreenState(void)

{
  return;
}


/* AdaptorRiftTourneyResultsScreen::setState_RiftTournamentResultsScreenState(RiftTournamentResultsScreenState)
    */

void __thiscall
AdaptorRiftTourneyResultsScreen::setState_RiftTournamentResultsScreenState
          (AdaptorRiftTourneyResultsScreen *this,int param_2)

{
  if (*(int *)(this + 0x1b0) != -1) {
    (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x1b0),3);
  }
  *(int *)(this + 0x1b0) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x350))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::StaticClassInit() */

void AdaptorRiftTourneyResultsScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftTourneyResultsScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_036776b8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::StaticGetClass() */

long * AdaptorRiftTourneyResultsScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftTourneyResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftTourneyResultsScreen::onAwardScreenDismissed() */

void __thiscall
AdaptorRiftTourneyResultsScreen::onAwardScreenDismissed(AdaptorRiftTourneyResultsScreen *this)

{
  RiftUtils::GoToRiftWorldMap();
  AdaptorJoustTourneyResultsScreen::Close((AdaptorJoustTourneyResultsScreen *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::updateFTUE() */

void __thiscall AdaptorRiftTourneyResultsScreen::updateFTUE(AdaptorRiftTourneyResultsScreen *this)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x128) == 0) && (0 < *(int *)(this + 0x120))) {
    TodStringTranslate((wstring *)&DAT_06aaad18);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaae30,awStack_10);
    FUN_05476c50(awStack_10);
    TodStringTranslate((wstring *)&DAT_06aaad00);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaad78,awStack_10);
    FUN_05476c50(awStack_10);
    TodStringTranslate((wstring *)&DAT_06aaad80);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaadb0,awStack_10);
    FUN_05476c50(awStack_10);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06aaad48,false);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06aaad20,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::updateRewardData() */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateRewardData(AdaptorRiftTourneyResultsScreen *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  undefined8 uVar5;
  string *extraout_x1;
  ulong uVar6;
  LevelOfTheDay_RewardItemType aLStack_20 [8];
  Sexy aSStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03676f30(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06aaadd8,lVar2 != 0);
  lVar2 = FUN_03676f30(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06aaad30,lVar2 == 0);
  lVar2 = FUN_03676f30(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  uVar5 = DAT_06aaad50;
  if (lVar2 != 0) {
    uVar6 = 0;
    lVar2 = FUN_03676f3c(DAT_06aaad50,DAT_06aaad58);
    if (lVar2 != 0) {
      do {
        uVar3 = FUN_03676f30(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
        bVar1 = uVar6 < uVar3;
        psVar4 = (string *)FUN_03676f48(uVar5,uVar6);
        HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar4,bVar1);
        psVar4 = (string *)FUN_03676f48(DAT_06aaae10,uVar6);
        HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar4,bVar1);
        if (bVar1) {
          uVar5 = FUN_03676f48(DAT_06aaad50,uVar6);
          FUN_03676f50(*(undefined8 *)(this + 0x130),uVar6);
          RewardImageFactory::GetImageForReward(aLStack_20);
          HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,uVar5,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          psVar4 = (string *)FUN_03676f48(DAT_06aaae10,uVar6);
          lVar2 = FUN_03676f50(*(undefined8 *)(this + 0x130),uVar6);
          Sexy::StrFormat("x%d",aSStack_18,(ulong)*(uint *)(lVar2 + 0x28));
          Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
          HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,psVar4,(wstring *)aRStack_10);
          FUN_05476c50(aRStack_10);
          std::string::~string((string *)aSStack_18);
        }
        uVar5 = DAT_06aaad50;
        uVar6 = uVar6 + 1;
        uVar3 = FUN_03676f3c(DAT_06aaad50,DAT_06aaad58);
      } while (uVar6 < uVar3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::setInputEnabled(bool) */

void __thiscall
AdaptorRiftTourneyResultsScreen::setInputEnabled(AdaptorRiftTourneyResultsScreen *this,bool param_1)

{
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::EnableFullScreenDismiss(bool) */

void __thiscall
AdaptorRiftTourneyResultsScreen::EnableFullScreenDismiss
          (AdaptorRiftTourneyResultsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"DialogDismiss");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::setup() */

void __thiscall AdaptorRiftTourneyResultsScreen::setup(AdaptorRiftTourneyResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftTourneyResultsScreen::onLinkToUIViewCreated(AdaptorRiftTourneyResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::onLoadUIView() */

void __thiscall AdaptorRiftTourneyResultsScreen::onLoadUIView(AdaptorRiftTourneyResultsScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"RiftTourneyResultsScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::startHotUIAnim(RiftWidgetAnimationData*) */

void __thiscall
AdaptorRiftTourneyResultsScreen::startHotUIAnim
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1)

{
  int iVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  if (param_1[0x18] == (RiftWidgetAnimationData)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onHotUIAnimFinished);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,aCStack_50);
    iVar1 = HotUIAnim::PlayAndStop
                      ((HotUIAnim *)pHVar2,param_1 + 0x10,0,
                       (Delegate1<std::string_const&> *)aDStack_38);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onHotUIAnimLoopFinished);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::
    Delegate3<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
              (aDStack_38,aCStack_50);
    iVar1 = HotUIAnim::PlayAndContinue((HotUIAnim *)pHVar2,param_1 + 0x10,0,aDStack_38);
  }
  if (iVar1 != -1) {
    param_1[0x1b] = (RiftWidgetAnimationData)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::AdaptorRiftTourneyResultsScreen() */

void __thiscall
AdaptorRiftTourneyResultsScreen::AdaptorRiftTourneyResultsScreen
          (AdaptorRiftTourneyResultsScreen *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_0667a040;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667a3a8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667a3f0;
  AdaptorJoustTourneyResultsScreenParams::AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x150));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x180));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAwardScreenDismissed);
  Sexy::Delegate0::
  Delegate0<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyAwardScreenClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::StaticNew() */

AdaptorRiftTourneyResultsScreen * AdaptorRiftTourneyResultsScreen::StaticNew(void)

{
  AdaptorRiftTourneyResultsScreen *this;
  
  this = ::operator_new(0x1b8);
  AdaptorRiftTourneyResultsScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::endAnimsForState(RiftTournamentResultsScreenState) */

void __thiscall
AdaptorRiftTourneyResultsScreen::endAnimsForState(AdaptorRiftTourneyResultsScreen *this,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
                      *)(this + 0x180));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x180));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar2 + 0xc) == param_2) {
      HotUIAdaptor::setWidgetVisibility
                ((HotUIAdaptor *)this,(string *)(lVar2 + 0x10),*(bool *)(lVar2 + 0x22));
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::~AdaptorRiftTourneyResultsScreen() */

void __thiscall
AdaptorRiftTourneyResultsScreen::~AdaptorRiftTourneyResultsScreen
          (AdaptorRiftTourneyResultsScreen *this)

{
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667a3f0;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_0667a040;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667a3a8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
  ::~map((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
          *)(this + 0x180));
  CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection
            ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150));
  AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftTourneyResultsScreen::~AdaptorRiftTourneyResultsScreen() */

void __thiscall
AdaptorRiftTourneyResultsScreen::~AdaptorRiftTourneyResultsScreen
          (AdaptorRiftTourneyResultsScreen *this)

{
  ~AdaptorRiftTourneyResultsScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRiftTourneyResultsScreen::onHotUIAnimFinished(std::string const&) */

void __thiscall
AdaptorRiftTourneyResultsScreen::onHotUIAnimFinished
          (AdaptorRiftTourneyResultsScreen *this,string *param_1)

{
  long lVar1;
  
  lVar1 = std::
          map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
          ::operator[]((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
                        *)(this + 0x180),param_1);
  *(undefined1 *)(lVar1 + 0x1b) = 1;
  return;
}


/* AdaptorRiftTourneyResultsScreen::onHotUIAnimLoopFinished(std::string const&, std::string const&,
   int) */

void AdaptorRiftTourneyResultsScreen::onHotUIAnimLoopFinished
               (string *param_1,string *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = std::
          map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
          ::operator[]((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
                        *)(param_1 + 0x180),param_2);
  *(undefined1 *)(lVar1 + 0x1b) = 1;
  return;
}


/* AdaptorRiftTourneyResultsScreen::showAwardScreen() */

void __thiscall
AdaptorRiftTourneyResultsScreen::showAwardScreen(AdaptorRiftTourneyResultsScreen *this)

{
  UIRiftRewardResult *this_00;
  
  this_00 = (UIRiftRewardResult *)UISingletonDialog<UIRiftRewardResult>::ShowDialog();
  if (this_00 != (UIRiftRewardResult *)0x0) {
    UIRiftRewardResult::InitRewards(this_00,(vector *)(this + 0x130));
    return;
  }
  return;
}


/* AdaptorRiftTourneyResultsScreen::onRegistrationDone() */

void __thiscall
AdaptorRiftTourneyResultsScreen::onRegistrationDone(AdaptorRiftTourneyResultsScreen *this)

{
  long lVar1;
  
  lVar1 = FUN_03676f30(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  if (lVar1 == 0) {
    RiftUtils::GoToRiftWorldMap();
    AdaptorJoustTourneyResultsScreen::Close((AdaptorJoustTourneyResultsScreen *)this);
    return;
  }
  showAwardScreen(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::setupAnimationsPromotion() */

void __thiscall
AdaptorRiftTourneyResultsScreen::setupAnimationsPromotion(AdaptorRiftTourneyResultsScreen *this)

{
  map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
  *this_00;
  CurveSequenceCollection<Sexy::SexyVector2> *this_01;
  bool bVar1;
  HotUIFile *this_02;
  long lVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  WidgetAnimationData *pWVar4;
  HotUISeedPacketList *pHVar5;
  _func_void *extraout_x1;
  AdaptorRiftTourneyResultsScreen *__n;
  FastCurve *pFVar6;
  float fVar7;
  uint local_40 [2];
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 local_10;
  bool local_f;
  undefined1 local_e;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             *)(this + 0x180);
  this_01 = (CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150);
  __n = this;
  this_02 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslateNewIconIn",(size_t)__n);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaae78);
  local_28 = 0x300000000;
  lVar2 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar2 + 0x48),(float)(*(int *)(lVar2 + 0x4c) + 0x140));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar2 + 0x48),(float)*(int *)(lVar2 + 0x4c));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar6 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,4);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadeNewIconIn",(size_t)pFVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaae78);
  local_28 = 0x300000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,255.0,255.0);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar6 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3e4ccccd,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadePreviousIconOut",(size_t)pFVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaad20);
  local_28 = 0x200000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,255.0,255.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,0.0);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar6 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3ecccccd,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScalePreviousIconOut",(size_t)pFVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaad20);
  local_28 = 0x200000001;
  if (*(int *)(this + 0x128) == 0) {
    local_f = *(int *)(this + 0x120) < 1;
  }
  else {
    local_f = true;
  }
  local_e = local_f;
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,asStack_20);
  fVar7 = (float)FUN_03676f28(*(undefined4 *)(pHVar5 + 0x27c));
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar7,fVar7);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar7 * 0.2,fVar7 * 0.2);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3ecccccd,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  pWVar4 = (WidgetAnimationData *)&local_28;
  std::string::string((string *)local_40,"BackgroundRays");
  nop();
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScaleShineIn",(size_t)pWVar4);
  thunk_FUN_05475e00(asStack_20,(string *)local_40);
  local_f = false;
  local_28 = 0x400000003;
  local_10 = 1;
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,asStack_20);
  fVar7 = (float)FUN_03676f2c(*(undefined4 *)(pHVar5 + 0x240));
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar7,fVar7);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar6 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::string::~string((string *)local_40);
  local_40[0] = 1;
  do {
    WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
    std::string::append(asStack_18,"intro",(size_t)pFVar6);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
    std::operator+("BackgroundStar",(string *)aFStack_38);
    FUN_05474278(asStack_20,(FastCurve *)&local_30);
    std::string::~string((string *)&local_30);
    std::string::~string((string *)aFStack_38);
    local_28 = 0x400000004;
    FUN_031dcc6c((FastCurve *)&local_30,asStack_20,asStack_18);
    pWVar4 = (WidgetAnimationData *)
             std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::operator[](this_00,(string *)&local_30);
    WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
    std::string::~string((string *)&local_30);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
    local_40[0] = local_40[0] + 1;
    pFVar6 = (FastCurve *)(ulong)local_40[0];
  } while ((int)local_40[0] < 7);
  local_40[0] = 1;
  do {
    WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
    std::string::append(asStack_18,"loop",(size_t)pFVar6);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
    std::operator+("BackgroundStar",(string *)aFStack_38);
    FUN_05474278(asStack_20,(FastCurve *)&local_30);
    std::string::~string((string *)&local_30);
    std::string::~string((string *)aFStack_38);
    local_f = true;
    local_10 = 1;
    local_28 = 0x500000004;
    FUN_031dcc6c((FastCurve *)&local_30,asStack_20,asStack_18);
    pWVar4 = (WidgetAnimationData *)
             std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::operator[](this_00,(string *)&local_30);
    WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
    std::string::~string((string *)&local_30);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
    local_40[0] = local_40[0] + 1;
    pFVar6 = (FastCurve *)(ulong)local_40[0];
  } while ((int)local_40[0] < 7);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar2 + 0x10),*(bool *)(lVar2 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::setupAnimationsStay() */

void __thiscall
AdaptorRiftTourneyResultsScreen::setupAnimationsStay(AdaptorRiftTourneyResultsScreen *this)

{
  map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar2;
  CurveSequence<Sexy::SexyVector2> *this_02;
  WidgetAnimationData *pWVar3;
  long lVar4;
  _func_void *extraout_x1;
  float fVar5;
  string asStack_40 [8];
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 local_10;
  undefined1 local_f;
  long local_8;
  
  this_00 = (map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             *)(this + 0x180);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  pWVar3 = (WidgetAnimationData *)&local_28;
  std::string::string(asStack_40,"BackgroundRays");
  nop();
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScaleShineIn",(size_t)pWVar3);
  thunk_FUN_05475e00(asStack_20,asStack_40);
  local_f = 0;
  local_28 = 0x400000003;
  local_10 = 1;
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_20);
  fVar5 = (float)FUN_03676f2c(*(undefined4 *)(pHVar2 + 0x240));
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar5,fVar5);
  this_02 = (CurveSequence<Sexy::SexyVector2> *)
            CurveSequenceCollection<Sexy::SexyVector2>::Get
                      ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150),asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(this_02,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,this_02,aFStack_38,
             (FastCurve *)&local_30,1);
  pWVar3 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar3,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::string::~string(asStack_40);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar4 + 0x10),*(bool *)(lVar4 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06aaad20,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::setupAnimationsDemotion() */

void __thiscall
AdaptorRiftTourneyResultsScreen::setupAnimationsDemotion(AdaptorRiftTourneyResultsScreen *this)

{
  CurveSequenceCollection<Sexy::SexyVector2> *this_00;
  map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
  *this_01;
  bool bVar1;
  HotUIFile *this_02;
  long lVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  WidgetAnimationData *pWVar4;
  _func_void *extraout_x1;
  size_t in_x2;
  FastCurve *pFVar5;
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [9];
  undefined1 local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  this_00 = (CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x150);
  this_01 = (map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             *)(this + 0x180);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslateNewIconIn",in_x2);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaae78);
  local_28 = 0x300000000;
  lVar2 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar2 + 0x48),(float)(*(int *)(lVar2 + 0x4c) + -0xd2));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar2 + 0x48),(float)*(int *)(lVar2 + 0x4c));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar5 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,4);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadeNewIconIn",(size_t)pFVar5);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaae78);
  local_28 = 0x300000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,255.0,255.0);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar5 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3e4ccccd,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadePreviousIconOut",(size_t)pFVar5);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaad20);
  local_f = 1;
  local_28 = 0x200000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,255.0,255.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,0.0);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  pFVar5 = (FastCurve *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslatePreviousIconOut",(size_t)pFVar5);
  thunk_FUN_05475e00(asStack_20,&DAT_06aaad20);
  local_28 = 0x200000000;
  local_f = 1;
  lVar2 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar2 + 0x48),(float)*(int *)(lVar2 + 0x4c));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar2 + 0x48),
             (float)*(int *)(lVar2 + 0x4c) + 320.0);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar3,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar3,aFStack_38,(FastCurve *)&local_30
             ,4);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin(this_01);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_01);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar2 + 0x10),*(bool *)(lVar2 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::updateLeagueData() */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateLeagueData(AdaptorRiftTourneyResultsScreen *this)

{
  uint uVar1;
  int extraout_w1;
  int iVar2;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  string *extraout_x1;
  int iVar3;
  int local_20 [2];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x128) == 0) {
    if (iVar3 < 1) {
      if (iVar3 != 0) goto LAB_0367bf10;
    }
    else {
      iVar3 = 1;
    }
  }
  else if (iVar3 != 0) {
    if (0 < iVar3) {
      iVar3 = 0;
      TodStringTranslate((wstring *)&DAT_06aaad10);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaace0,awStack_10);
      FUN_05476c50(awStack_10);
      HotUIAdaptor::replaceImageWidgetImage
                ((HotUIAdaptor *)this,(string *)&DAT_06aaad38,(string *)&DAT_06aaad08);
      setupAnimationsPromotion(this);
      iVar2 = extraout_w1_02;
      goto LAB_0367bc40;
    }
LAB_0367bf10:
    iVar3 = 0;
    TodStringTranslate((wstring *)&DAT_06aaacf0);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaace0,awStack_10);
    FUN_05476c50(awStack_10);
    HotUIAdaptor::replaceImageWidgetImage
              ((HotUIAdaptor *)this,(string *)&DAT_06aaad38,(string *)&DAT_06aaad28);
    setupAnimationsDemotion(this);
    iVar2 = extraout_w1_03;
    goto LAB_0367bc40;
  }
  TodStringTranslate((wstring *)&DAT_06aaae70);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaace0,awStack_10);
  FUN_05476c50(awStack_10);
  HotUIAdaptor::replaceImageWidgetImage
            ((HotUIAdaptor *)this,(string *)&DAT_06aaad38,(string *)&DAT_06aaae80);
  setupAnimationsStay(this);
  iVar2 = extraout_w1;
LAB_0367bc40:
  RiftUtils::GetLeagueIcon((RiftUtils *)(ulong)*(uint *)(this + 0x128),iVar2);
  HotUIAdaptor::replaceImageWidgetImage
            ((HotUIAdaptor *)this,(string *)&DAT_06aaae78,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  RiftUtils::GetLeagueName((RiftUtils *)(ulong)*(uint *)(this + 0x128),extraout_w1_00);
  Sexy::UTF8StringToWString((Sexy *)local_20,extraout_x1);
  TodStringTranslate(awStack_18);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaad40,awStack_10);
  FUN_05476c50((string *)awStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)local_20);
  std::string::string((string *)awStack_10,"BackgroundRays");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"PromotionIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"DemotionIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"StayIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  local_20[0] = 1;
  do {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_20);
    std::operator+("BackgroundStar",(string *)awStack_18);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
    std::string::~string((string *)awStack_10);
    std::string::~string((string *)awStack_18);
    local_20[0] = local_20[0] + 1;
  } while (local_20[0] < 7);
  if (iVar3 == 0) {
    uVar1 = *(int *)(this + 0x128) - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    RiftUtils::GetLeagueIcon((RiftUtils *)(ulong)uVar1,extraout_w1_01);
    HotUIAdaptor::replaceImageWidgetImage
              ((HotUIAdaptor *)this,(string *)&DAT_06aaad20,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
  }
  TodStringTranslate(L"[RIFT_TOURNAMENT_PLACEMENT_RANK]");
  TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0x124) + 1);
  FUN_054766c8(awStack_18,(string *)awStack_10);
  FUN_05476c50((string *)awStack_10);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06aaace8,awStack_18);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::refresh() */

void __thiscall AdaptorRiftTourneyResultsScreen::refresh(AdaptorRiftTourneyResultsScreen *this)

{
  updateLeagueData(this);
  updateFTUE(this);
  updateRewardData(this);
  *(undefined4 *)(this + 0x1b0) = 0xffffffff;
  setState_RiftTournamentResultsScreenState(this,0);
  return;
}


/* AdaptorRiftTourneyResultsScreen::SetParams(AdaptorRiftTourneyResultsScreenParams const&) */

void __thiscall
AdaptorRiftTourneyResultsScreen::SetParams
          (AdaptorRiftTourneyResultsScreen *this,AdaptorRiftTourneyResultsScreenParams *param_1)

{
  AdaptorJoustTourneyResultsScreenParams::operator=
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120),
             (AdaptorJoustTourneyResultsScreenParams *)param_1);
  refresh(this);
  return;
}


/* AdaptorRiftTourneyResultsScreen::updateWidgetFromAnimationTranslation(RiftWidgetAnimationData*,
   float) */

void AdaptorRiftTourneyResultsScreen::updateWidgetFromAnimationTranslation
               (RiftWidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this;
  HotUISeedPacketList *pHVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  long in_x1;
  float fVar4;
  float in_s1;
  
  this = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(param_1 + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,(string *)(in_x1 + 8));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(param_1 + 0x150));
  fVar4 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar3,param_2);
  *(int *)(pHVar2 + 0x48) = (int)fVar4;
  *(int *)(pHVar2 + 0x4c) = (int)in_s1;
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(param_1 + 0x150));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar3,param_2);
  *(byte *)(in_x1 + 0x1b) = bVar1 ^ 1;
  return;
}


/* AdaptorRiftTourneyResultsScreen::updateHotUIImageWidgetFromAnimationScale(RiftWidgetAnimationData*,
   float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateHotUIImageWidgetFromAnimationScale
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  undefined4 uVar4;
  
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  uVar4 = CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar3,param_2);
  FUN_03676f20(uVar4,pHVar2 + 0x27c);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar3,param_2);
  param_1[0x1b] = (RiftWidgetAnimationData)(bVar1 ^ 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::updateHotUIImageWidgetFromAnimationAlpha(RiftWidgetAnimationData*,
   float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateHotUIImageWidgetFromAnimationAlpha
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1,float param_2)

{
  long lVar1;
  byte bVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  CurveSequence<Sexy::SexyVector2> *pCVar4;
  float fVar5;
  Insets aIStack_28 [12];
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  fVar5 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar4,param_2);
  HotUIImage::GetImageColor();
  local_1c = (int)fVar5;
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  HotUIImage::SetImageColor((HotUIImage *)pHVar3,aIStack_18);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  bVar2 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar4,param_2);
  lVar1 = ___stack_chk_guard;
  param_1[0x1b] = (RiftWidgetAnimationData)(bVar2 ^ 1);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::updateHotUIAnimWidgetFromAnimationScale(RiftWidgetAnimationData*,
   float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateHotUIAnimWidgetFromAnimationScale
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  CurveSequence<Sexy::SexyVector2> *pCVar2;
  float fVar3;
  
  this_00 = (HotUIFile *)FUN_03676f0c(*(undefined8 *)(this + 0xf8));
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  fVar3 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar2,param_2);
  HotUIAnim::SetScaleOverride((HotUIAnim *)this_01,fVar3);
  pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x150));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar2,param_2);
  param_1[0x1b] = (RiftWidgetAnimationData)(bVar1 ^ 1);
  return;
}


/* AdaptorRiftTourneyResultsScreen::updateWidgetFromAnimation(RiftWidgetAnimationData*, float) */

RiftWidgetAnimationData __thiscall
AdaptorRiftTourneyResultsScreen::updateWidgetFromAnimation
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1,float param_2)

{
  switch(*(undefined4 *)param_1) {
  case 0:
    updateWidgetFromAnimationTranslation((RiftWidgetAnimationData *)this,param_2);
    return param_1[0x1b];
  case 1:
    updateHotUIImageWidgetFromAnimationScale(this,param_1,param_2);
    break;
  case 2:
    updateHotUIImageWidgetFromAnimationAlpha(this,param_1,param_2);
    return param_1[0x1b];
  case 3:
    updateHotUIAnimWidgetFromAnimationScale(this,param_1,param_2);
    return param_1[0x1b];
  }
  return param_1[0x1b];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::updateAnimsForState(RiftTournamentResultsScreenState, float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::updateAnimsForState
          (float param_1,AdaptorRiftTourneyResultsScreen *this,int param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  uVar4 = 1;
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
                      *)(this + 0x180));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x180));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar3 + 0xc) == param_3) {
      uVar2 = updateWidgetFromAnimation(this,(RiftWidgetAnimationData *)(lVar3 + 8),param_1);
      uVar4 = uVar2 & uVar4;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* AdaptorRiftTourneyResultsScreen::startWidgetAnimation(RiftWidgetAnimationData*, float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::startWidgetAnimation
          (AdaptorRiftTourneyResultsScreen *this,RiftWidgetAnimationData *param_1,float param_2)

{
  param_1[0x1b] = (RiftWidgetAnimationData)0x0;
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)(param_1 + 8),true);
  if (*(int *)param_1 == 4) {
    startHotUIAnim(this,param_1);
    return;
  }
  updateWidgetFromAnimation(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::startAnimsForState(RiftTournamentResultsScreenState, float) */

void __thiscall
AdaptorRiftTourneyResultsScreen::startAnimsForState
          (float param_1,AdaptorRiftTourneyResultsScreen *this,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
             ::begin((map<std::string,RiftWidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,RiftWidgetAnimationData>>>
                      *)(this + 0x180));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x180));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar2 + 0xc) == param_3) {
      startWidgetAnimation(this,(RiftWidgetAnimationData *)(lVar2 + 8),param_1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::HandleStateMachine_RiftTournamentResultsScreenState(RiftTournamentResultsScreenState,
   StateAction) */

void __thiscall
AdaptorRiftTourneyResultsScreen::HandleStateMachine_RiftTournamentResultsScreenState
          (AdaptorRiftTourneyResultsScreen *this,uint param_2,int param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<RiftTournamentResultsScreenState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_RiftTournamentResultsScreenState);
  Sexy::Delegate2<RiftTournamentResultsScreenState,StateAction>::
  Delegate2<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(RiftTournamentResultsScreenState,StateAction)>
            (aDStack_38,aCStack_50);
  switch(param_2) {
  case 0:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,0);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      if (0.5 < fVar2 - *(float *)(this + 0x148)) {
        setState_RiftTournamentResultsScreenState(this,1);
      }
      break;
    case 3:
      endAnimsForState(this,0);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
    }
    break;
  case 1:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,1);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorRiftTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x148)),this,1);
      if (cVar1 != '\0') {
        setState_RiftTournamentResultsScreenState(this,2);
      }
      break;
    case 3:
      endAnimsForState(this,1);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
    }
    break;
  case 2:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,2);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorRiftTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x148)),this,2);
      if (cVar1 != '\0') {
        setState_RiftTournamentResultsScreenState(this,3);
      }
      break;
    case 3:
      endAnimsForState(this,2);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
    }
    break;
  case 3:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,3);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorRiftTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x148)),this,3);
      if (cVar1 != '\0') {
        setState_RiftTournamentResultsScreenState(this,4);
      }
      break;
    case 3:
      endAnimsForState(this,3);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
    }
    break;
  case 4:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,4);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorRiftTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x148)),this,4);
      if (cVar1 != '\0') {
        setState_RiftTournamentResultsScreenState(this,5);
      }
      break;
    case 3:
      endAnimsForState(this,4);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
    }
    break;
  case 5:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x148) = uVar3;
      startAnimsForState((AdaptorRiftTourneyResultsScreen *)0x0,this,5);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorRiftTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x148)),this,5);
      if (cVar1 != '\0') {
        setState_RiftTournamentResultsScreenState(this,6);
      }
      break;
    case 3:
      endAnimsForState(this,5);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x5);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::Update() */

void __thiscall AdaptorRiftTourneyResultsScreen::Update(AdaptorRiftTourneyResultsScreen *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  uVar1 = FUN_03676f1c(*(undefined4 *)(this + 0x1b0));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::giveRewards() */

void __thiscall AdaptorRiftTourneyResultsScreen::giveRewards(AdaptorRiftTourneyResultsScreen *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char *__s;
  TGALogMgr *pTVar5;
  TGAPennyPursuitData *__n;
  undefined8 local_260;
  undefined8 local_258 [4];
  undefined1 auStack_238 [72];
  string asStack_1f0 [8];
  string asStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  __n = (TGAPennyPursuitData *)local_258;
  std::string::string(asStack_1e8,"");
  FUN_05462980(auStack_178,asStack_1e8);
  std::string::~string(asStack_1e8);
  nop();
  local_260 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x130));
  local_258[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x130));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_260,(__normal_iterator *)local_258), bVar1)
  {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_260);
    __n = (TGAPennyPursuitData *)(ulong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) != 0) {
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x38));
      FUN_054603b8(auStack_168,&DAT_05593348);
      FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x28));
      FUN_054603b8(auStack_168,&DAT_05594620);
      __n = (TGAPennyPursuitData *)0x0;
      ProfileChangeItemAmount(*(int *)(lVar4 + 0x38),*(int *)(lVar4 + 0x28),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_1e8);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_260);
  }
  FUN_05462824((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_260,auStack_178);
  TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)local_258);
  std::string::append((string *)local_258,"6",(size_t)__n);
  thunk_FUN_05475e00(auStack_238,(generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_260);
  iVar3 = RiftUtils::GetLocalPlayerLeaderboardIndex();
  DString::DString((DString *)asStack_1e8,iVar3 + 1);
  __s = (char *)DString::c_str((DString *)asStack_1e8);
  std::string::append(asStack_1f0,__s,(size_t)__n);
  DString::~DString((DString *)asStack_1e8);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPennyPursuitData::TGAPennyPursuitData
            ((TGAPennyPursuitData *)asStack_1e8,(TGAPennyPursuitData *)local_258);
  TGALogMgr::LogPennyPursuit(pTVar5,asStack_1e8);
  TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)asStack_1e8);
  TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)local_258);
  std::string::~string((string *)&local_260);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftTourneyResultsScreen::onContinueClick() */

void __thiscall
AdaptorRiftTourneyResultsScreen::onContinueClick(AdaptorRiftTourneyResultsScreen *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  DaveTreasureDataManager *this_00;
  string *extraout_x0;
  ProfileMgr *this_01;
  UserInfo *this_02;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  int local_48 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  giveRewards(this);
  onRegistrationDone(this);
  setInputEnabled(this,false);
  cVar1 = RiftUtils::HasPromotedReward();
  if (cVar1 != '\0') {
    iVar3 = RiftUtils::GetPromotedReward();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    local_48[1] = 1;
    local_48[2] = 0;
    local_48[0] = iVar3;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_38,
               (LotteryBonus *)local_48);
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_38,(vector *)avStack_20);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_20);
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    DString::DString((DString *)avStack_20,iVar3);
    DString::operator_cast_to_string((DString *)avStack_20);
    std::string::string(asStack_58,"plant");
    std::string::string(asStack_50,"none");
    DIniFile::getItem(extraout_x0,asStack_60,asStack_58);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    DString::~DString((DString *)avStack_20);
    bVar2 = std::operator!=(asStack_68,"none");
    if (bVar2) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_01);
      this_02 = (UserInfo *)DSingleton<UserInfo>::getInstance();
      UserInfo::unlockHeadShotId(this_02,iVar3);
    }
    std::string::~string(asStack_68);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftTourneyResultsScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorRiftTourneyResultsScreen::OnBackButtonPressed(AdaptorRiftTourneyResultsScreen *this)

{
  onContinueClick(this);
  return 1;
}


/* AdaptorRiftTourneyResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftTourneyResultsScreen::ButtonDepress(AdaptorRiftTourneyResultsScreen *this,int param_1)

{
  if (param_1 == 0) {
    AdaptorJoustTourneyResultsScreen::Close((AdaptorJoustTourneyResultsScreen *)this);
    return;
  }
  if (param_1 == 1) {
    onContinueClick(this);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorRiftTourneyResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftTourneyResultsScreen::ButtonDepress(AdaptorRiftTourneyResultsScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

