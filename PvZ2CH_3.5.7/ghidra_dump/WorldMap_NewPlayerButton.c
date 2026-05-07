// Class: WorldMap_NewPlayerButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewPlayerButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_NewPlayerButton::Draw(WorldMap_NewPlayerButton *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this_00;
  ResourceInfo *pRVar5;
  float fVar6;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
    cVar1 = FUN_04bf79d8(this[0x160]);
    if ((cVar1 != '\0') || (this[0x1a8] != (WorldMap_NewPlayerButton)0x0)) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x170));
      if (cVar1 == '\0') {
        Sexy::Color::Color(aCStack_18,1);
        cVar1 = Sexy::TRect<int>::operator!=((TRect<int> *)(this + 0x180),(TRect *)aCStack_18);
        if (cVar1 != '\0') {
          Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x180));
          Sexy::Graphics::SetColorizeImages(param_1,true);
        }
      }
      else {
        this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x170));
      }
    }
    if (this_00 != (ResourceInfo *)0x0) {
      Sexy::Graphics::DrawImage(param_1,(Image *)this_00,0,0);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if ((bVar2) && (this[0x1a8] == (WorldMap_NewPlayerButton)0x0)) {
      Sexy::Color::Color(aCStack_18,1);
      Sexy::Graphics::SetColor(param_1,aCStack_18);
      Sexy::Graphics::SetColorizeImages(param_1,false);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x178));
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      fVar6 = *(float *)(this + 400);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar5,(int)((float)iVar3 * fVar6),
                 (int)((float)iVar4 * *(float *)(this + 0x194)));
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WorldMap_NewPlayerButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_NewPlayerButton::Draw(WorldMap_NewPlayerButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewPlayerButton::StaticClassInit() */

void WorldMap_NewPlayerButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_NewPlayerButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0344231c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_NewPlayerButton::StaticGetClass() */

long * WorldMap_NewPlayerButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_NewPlayerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_NewPlayerButton::GetClass() const */

long * WorldMap_NewPlayerButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_NewPlayerButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_NewPlayerButton::OnClick() */

void WorldMap_NewPlayerButton::OnClick(void)

{
  LawnApp::ShowNewPlayerCollection(gLawnApp);
  return;
}


/* WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton() */

void __thiscall WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton(WorldMap_NewPlayerButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06631620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_NewPlayerButton_066317c8;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton() */

void __thiscall WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton(WorldMap_NewPlayerButton *this)

{
  ~WorldMap_NewPlayerButton(this + -0x10);
  return;
}


/* WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton() */

void __thiscall WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton(WorldMap_NewPlayerButton *this)

{
  ~WorldMap_NewPlayerButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton() */

void __thiscall WorldMap_NewPlayerButton::~WorldMap_NewPlayerButton(WorldMap_NewPlayerButton *this)

{
  ~WorldMap_NewPlayerButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewPlayerButton::CheckVisibility(bool) */

void __thiscall
WorldMap_NewPlayerButton::CheckVisibility(WorldMap_NewPlayerButton *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  UniverseMap *this_00;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  int *piVar7;
  byte bVar8;
  undefined8 local_e0;
  undefined8 local_d8;
  string asStack_d0 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_b8 [40];
  int local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar4 == 0) ||
      (this_00 = (UniverseMap *)FUN_03441c10(*(undefined8 *)(lVar4 + 0x2b0)),
      this_00 == (UniverseMap *)0x0)) || (cVar1 = UniverseMap::isInState(this_00,2), cVar1 != '\0'))
  {
    bVar8 = 0;
  }
  else {
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
    bVar8 = 0;
    if ((cVar1 != '\0') || (param_1)) {
      pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
      cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar6,0x13);
      if (cVar1 != '\0') {
        std::string::string(asStack_d0,"egypt2");
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_d0,false,pPVar6);
        std::string::~string(asStack_d0);
        nop();
        if (cVar1 != '\0') {
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          cVar1 = FUN_03441c04(local_80);
          bVar8 = 0;
          if ((cVar1 != '\0') && (bVar8 = local_70, local_70 != 0)) {
            ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_d0);
            cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d0);
            if ((cVar1 != '\0') && (local_90 == 0)) {
              bVar8 = 1;
              local_e0 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(avStack_b8);
              local_d8 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(avStack_b8);
              while (bVar2 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_e0,
                                        (__normal_iterator *)&local_d8), bVar2) {
                piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_e0);
                if (((*piVar7 == 0x2a4c) || (*piVar7 == 0x2a5b)) && (piVar7[2] != 2)) {
                  bVar8 = 0;
                }
                __gnu_cxx::
                __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                              *)&local_e0);
              }
              bVar8 = bVar8 ^ 1;
            }
            ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_d0);
          }
          ActiveItem::~ActiveItem(aAStack_88);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_NewPlayerButton::WorldMap_NewPlayerButton() */

void __thiscall WorldMap_NewPlayerButton::WorldMap_NewPlayerButton(WorldMap_NewPlayerButton *this)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06631620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_NewPlayerButton_066317c8;
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_NEWPLAYER");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  FUN_03442018(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  bVar2 = (bool)CheckVisibility(this,false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_NewPlayerButton,void(WorldMap_NewPlayerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_NewPlayerButton::StaticNew() */

WorldMap_NewPlayerButton * WorldMap_NewPlayerButton::StaticNew(void)

{
  WorldMap_NewPlayerButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_NewPlayerButton(this);
  return this;
}


/* WorldMap_NewPlayerButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_NewPlayerButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  bool bVar1;
  
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  bVar1 = (bool)CheckVisibility((WorldMap_NewPlayerButton *)(ulong)param_1,false);
  UIWidget::SetVisible((UIWidget *)(ulong)param_1,bVar1);
  return;
}

