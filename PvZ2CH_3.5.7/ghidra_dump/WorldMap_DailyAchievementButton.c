// Class: WorldMap_DailyAchievementButton


/* WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton() */

void __thiscall
WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton
          (WorldMap_DailyAchievementButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06803230;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DailyAchievementButton_068033d8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton() */

void __thiscall
WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton
          (WorldMap_DailyAchievementButton *this)

{
  ~WorldMap_DailyAchievementButton(this + -0x10);
  return;
}


/* WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton() */

void __thiscall
WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton
          (WorldMap_DailyAchievementButton *this)

{
  ~WorldMap_DailyAchievementButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton() */

void __thiscall
WorldMap_DailyAchievementButton::~WorldMap_DailyAchievementButton
          (WorldMap_DailyAchievementButton *this)

{
  ~WorldMap_DailyAchievementButton(this + -0x10);
  return;
}


/* WorldMap_DailyAchievementButton::onWorldLoaded() */

void __thiscall
WorldMap_DailyAchievementButton::onWorldLoaded(WorldMap_DailyAchievementButton *this)

{
  char cVar1;
  INetworkMsgProcess *this_00;
  ActivityConfig *this_01;
  
  UIWidget::SetVisible((UIWidget *)this,false);
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestAchievementConfig(this_00);
  this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
  cVar1 = ActivityConfig::IsDailyAchievementActivated(this_01);
  if (cVar1 == '\0') {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::StaticClassInit() */

void WorldMap_DailyAchievementButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_DailyAchievementButton");
    (*pcVar2)(plVar1,asStack_10,FUN_041df674,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DailyAchievementButton::StaticGetClass() */

long * WorldMap_DailyAchievementButton::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_DailyAchievementButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_DailyAchievementButton::GetClass() const */

long * WorldMap_DailyAchievementButton::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_DailyAchievementButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::CheckActivited() */

void __thiscall
WorldMap_DailyAchievementButton::CheckActivited(WorldMap_DailyAchievementButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ActivityConfig *this_00;
  long lVar5;
  DailyAchievementInfo *this_01;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::SetVisible((UIWidget *)this,false);
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  cVar4 = ActivityConfig::IsDailyAchievementActivated(this_00);
  if (cVar4 == '\0') {
    Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar4 = PVPManager::IsActivated();
    if (cVar4 != '\0') {
      local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
      if ((0 < local_10) && (lVar5 = LawnApp::BeijingTime(gLawnApp,&local_10), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x10);
        iVar2 = *(int *)(lVar5 + 0x14);
        iVar3 = *(int *)(lVar5 + 0xc);
        this_01 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
        lVar5 = DailyAchievementInfo::getAchievementConfigByDate
                          (this_01,iVar1 * 100 + 100 + (iVar2 + 0x76c) * 10000 + iVar3);
        UIWidget::SetVisible((UIWidget *)this,lVar5 != 0);
      }
    }
  }
  else {
    UIWidget::SetVisible((UIWidget *)this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::onNotifyAchievementConfigChanged() */

void __thiscall
WorldMap_DailyAchievementButton::onNotifyAchievementConfigChanged
          (WorldMap_DailyAchievementButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ActivityConfig *this_00;
  long lVar5;
  DailyAchievementInfo *this_01;
  long lStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  UIWidget::SetVisible((UIWidget *)this,false);
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  cVar4 = ActivityConfig::IsDailyAchievementActivated(this_00);
  if (cVar4 == '\0') {
    Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar4 = PVPManager::IsActivated();
    if (cVar4 != '\0') {
      lStack_10 = LawnApp::GetRealBeijingTime(gLawnApp);
      if ((0 < lStack_10) && (lVar5 = LawnApp::BeijingTime(gLawnApp,&lStack_10), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x10);
        iVar2 = *(int *)(lVar5 + 0x14);
        iVar3 = *(int *)(lVar5 + 0xc);
        this_01 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
        lVar5 = DailyAchievementInfo::getAchievementConfigByDate
                          (this_01,iVar1 * 100 + 100 + (iVar2 + 0x76c) * 10000 + iVar3);
        UIWidget::SetVisible((UIWidget *)this,lVar5 != 0);
      }
    }
  }
  else {
    UIWidget::SetVisible((UIWidget *)this,true);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::WorldMap_DailyAchievementButton() */

void __thiscall
WorldMap_DailyAchievementButton::WorldMap_DailyAchievementButton
          (WorldMap_DailyAchievementButton *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06803230;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_DailyAchievementButton_068033d8;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::
  Delegate0<WorldMap_DailyAchievementButton,void(WorldMap_DailyAchievementButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::
  Delegate0<WorldMap_DailyAchievementButton,void(WorldMap_DailyAchievementButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapLoadComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAchievementConfigChanged);
  Sexy::Delegate0::
  Delegate0<WorldMap_DailyAchievementButton,void(WorldMap_DailyAchievementButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyAchievementConfigChanged,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_DailyAchievementButton::StaticNew() */

WorldMap_DailyAchievementButton * WorldMap_DailyAchievementButton::StaticNew(void)

{
  WorldMap_DailyAchievementButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_DailyAchievementButton(this);
  return this;
}


/* WorldMap_DailyAchievementButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_DailyAchievementButton::updateButtonStates
          (WorldMap_DailyAchievementButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_041df4b0(this + 0x160);
  }
  else {
    cVar1 = FUN_041df4b8(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Open_Press");
      FUN_041df4b0(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Open_Release");
    LawnApp::ShowDailyAchievement(gLawnApp);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::canGetDailyAchievementReward() */

void WorldMap_DailyAchievementButton::canGetDailyAchievementReward(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  DailyAchievementInfo *pDVar5;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  int *piVar6;
  vector *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  local_58 = LawnApp::GetRealBeijingTime(gLawnApp);
  if ((0 < local_58) && (lVar4 = LawnApp::BeijingTime(gLawnApp,&local_58), lVar4 != 0)) {
    iVar3 = *(int *)(lVar4 + 0x10);
    iVar10 = *(int *)(lVar4 + 0x14);
    iVar1 = *(int *)(lVar4 + 0xc);
    pDVar5 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
    this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)DailyAchievementInfo::getAchievementConfigByDate
                           (pDVar5,iVar3 * 100 + 100 + (iVar10 + 0x76c) * 10000 + iVar1);
    if (this_01 !=
        (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)0x0) {
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_01);
      iVar3 = 0;
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_01);
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48)
        ;
        if (!bVar2) break;
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        pvVar7 = (vector *)PlayerInfo::GetDailyAchievementRecord(this_00,*piVar6);
        if (pvVar7 == (vector *)0x0) {
          iVar10 = *piVar6;
          if (iVar10 == 0x27e0) goto LAB_041dfd30;
        }
        else {
          std::vector<int,std::allocator<int>>::operator=
                    ((vector<int,std::allocator<int>> *)avStack_20,pvVar7);
          iVar10 = *piVar6;
          if (iVar10 == 0x27e0) {
LAB_041dfd30:
            iVar3 = PlayerInfo::GetNumStars((int)this_00);
            iVar10 = *piVar6;
          }
          else {
            iVar3 = *(int *)(pvVar7 + 0x24);
          }
        }
        pDVar5 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
        lVar4 = DailyAchievementInfo::getAchievementItemById(pDVar5,iVar10);
        if (lVar4 == 0) {
          bVar2 = false;
          break;
        }
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar4 + 0x18));
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0x18));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          if (*piVar6 <= iVar3) {
            uVar8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_20);
            uVar9 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_20);
            local_30 = std::
                       find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                                 (uVar8,uVar9,piVar6);
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
            bVar2 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
            if (bVar2) {
              bVar2 = true;
              goto LAB_041dfcd0;
            }
          }
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_40);
        }
        eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                  ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
      }
      goto LAB_041dfcd0;
    }
  }
  bVar2 = false;
LAB_041dfcd0:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_DailyAchievementButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_DailyAchievementButton::Draw(WorldMap_DailyAchievementButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_041df4b8(this[0x160]);
  if (cVar1 == '\0') {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af27f8);
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2758);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  cVar1 = canGetDailyAchievementReward();
  if (cVar1 != '\0') {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2730);
    iVar2 = FUN_041df52c(0xffffffec);
    iVar3 = FUN_041df52c(0);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_DailyAchievementButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_DailyAchievementButton::Draw(WorldMap_DailyAchievementButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

