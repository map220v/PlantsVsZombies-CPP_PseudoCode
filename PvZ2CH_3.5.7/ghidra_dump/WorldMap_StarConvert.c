// Class: WorldMap_StarConvert


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarConvert::StaticClassInit() */

void WorldMap_StarConvert::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_StarConvert");
    (*pcVar2)(plVar1,asStack_10,FUN_04a6dd78,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_StarConvert::StaticGetClass() */

long * WorldMap_StarConvert::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_StarConvert",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_StarConvert::GetClass() const */

long * WorldMap_StarConvert::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_StarConvert",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_StarConvert::ShouldDrawBubble() */

WorldMap_StarConvert __thiscall WorldMap_StarConvert::ShouldDrawBubble(WorldMap_StarConvert *this)

{
  char cVar1;
  WorldMap_StarConvert WVar2;
  
  cVar1 = LawnApp::IsStarConvertOpened(gLawnApp);
  WVar2 = (WorldMap_StarConvert)0x1;
  if (cVar1 != '\0') {
    WVar2 = this[0x1d0];
  }
  return WVar2;
}


/* WorldMap_StarConvert::OnButtonClicked() */

void WorldMap_StarConvert::OnButtonClicked(void)

{
  LawnApp::ShowStarConvert(gLawnApp);
  return;
}


/* WorldMap_StarConvert::onUpdate() */

void __thiscall WorldMap_StarConvert::onUpdate(WorldMap_StarConvert *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==("Plant",(string *)(this + 0x1d8));
  if (bVar1) {
    cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x200));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x200));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarConvert::WorldMap_StarConvert() */

void __thiscall WorldMap_StarConvert::WorldMap_StarConvert(WorldMap_StarConvert *this)

{
  undefined *puVar1;
  undefined1 *__n;
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  __n = auStack_58;
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06938470;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_StarConvert_06938618;
  ConvertObject::ConvertObject((ConvertObject *)(this + 0x1d8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x200));
  FUN_05476574(this + 0x230);
  *(undefined8 *)(this + 0x238) = 0;
  std::string::string(asStack_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_STAR_CONVERT");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_50);
  nop();
  FUN_04a6dbc8(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_StarConvert)0x0;
  std::string::append((string *)(this + 0x1d8),"",(size_t)__n);
  std::string::append((string *)(this + 0x1e0),"",(size_t)__n);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::clear
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x1e8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshStarConvert);
  Sexy::Delegate0::Delegate0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>
            ((Delegate0 *)afStack_38,asStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshStarConvert);
  Sexy::Delegate0::Delegate0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>
            ((Delegate0 *)afStack_38,asStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapLoadComplete,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshStarConvert);
  Sexy::Delegate0::Delegate0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>
            ((Delegate0 *)afStack_38,asStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::UniverseMapOpened,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshStarConvert);
  Sexy::Delegate0::Delegate0<WorldMap_StarConvert,void(WorldMap_StarConvert::*)()>
            ((Delegate0 *)afStack_38,asStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::RefreshStarConvert,(Delegate0 *)afStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_StarConvert::StaticNew() */

WorldMap_StarConvert * WorldMap_StarConvert::StaticNew(void)

{
  WorldMap_StarConvert *this;
  
  this = ::operator_new(0x240);
  WorldMap_StarConvert(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarConvert::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_StarConvert::Draw(WorldMap_StarConvert *this,Graphics *param_1)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar2 != '\0') {
    uVar4 = LawnApp::IsStarConvertIValid(gLawnApp);
    FUN_04a6d9c0(this + 0x1a8,uVar4);
    UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    cVar2 = FUN_04a6d9bc(this[0x160]);
    if (((cVar2 == '\0') && (cVar2 = FUN_04a6d9c8(this[0x1a8]), cVar2 == '\0')) &&
       (cVar2 = ShouldDrawBubble(this), cVar2 != '\0')) {
      psVar1 = (string *)(this + 0x1d8);
      bVar3 = std::operator!=("",psVar1);
      if ((bVar3) && (bVar3 = std::operator!=("",(string *)(this + 0x1e0)), bVar3)) {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d8f8);
        iVar5 = FUN_04a6dc24(0x28);
        iVar6 = FUN_04a6dc24(0xffffffd8);
        Sexy::Graphics::DrawImage(param_1,pIVar10,iVar5,iVar6);
        bVar3 = std::operator==("Plant",psVar1);
        if (bVar3) {
          EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x200),param_1);
        }
        else {
          bVar3 = std::operator==("Feature",psVar1);
          if ((bVar3) &&
             (pLVar11 = *(LotteryResultProgressBar **)(this + 0x238),
             pLVar11 != (LotteryResultProgressBar *)0x0)) {
            iVar5 = FUN_04a6dc24(0x32);
            iVar6 = FUN_04a6dc24(0xffffffc9);
            iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
            pSVar12 = *(SalesProgressBar **)(this + 0x238);
            iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pSVar12,iVar5,iVar6,(int)((double)iVar7 * 0.8),
                       (int)((double)iVar8 * 0.8));
          }
        }
      }
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d8d0);
    iVar5 = FUN_04a6dc24(0x50);
    iVar6 = FUN_04a6dc24(0x28);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar5,iVar6);
    iVar5 = FUN_04a6dc24(0x55);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d8d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar7 = FUN_04a6dc24(0x28);
    iVar8 = FUN_04a6dc24(300);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d8d0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Insets::Insets(aIStack_28,iVar5 + iVar6,iVar7,iVar8,iVar9);
    uVar13 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x230,aIStack_28,uVar13,aCStack_18,3,1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_StarConvert::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_StarConvert::Draw(WorldMap_StarConvert *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_StarConvert::~WorldMap_StarConvert() */

void __thiscall WorldMap_StarConvert::~WorldMap_StarConvert(WorldMap_StarConvert *this)

{
  undefined **__n;
  
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_StarConvert_06938618;
  *(undefined ***)this = &PTR_GetClass_06938470;
  __n = &gMessageRouter;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::append((string *)(this + 0x1d8),"",(size_t)__n);
  std::string::append((string *)(this + 0x1e0),"",(size_t)__n);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::clear
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x1e8));
  FUN_05476c50(this + 0x230);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x200));
  ConvertObject::~ConvertObject((ConvertObject *)(this + 0x1d8));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_StarConvert::~WorldMap_StarConvert() */

void __thiscall WorldMap_StarConvert::~WorldMap_StarConvert(WorldMap_StarConvert *this)

{
  ~WorldMap_StarConvert(this + -0x10);
  return;
}


/* WorldMap_StarConvert::~WorldMap_StarConvert() */

void __thiscall WorldMap_StarConvert::~WorldMap_StarConvert(WorldMap_StarConvert *this)

{
  ~WorldMap_StarConvert(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_StarConvert::~WorldMap_StarConvert() */

void __thiscall WorldMap_StarConvert::~WorldMap_StarConvert(WorldMap_StarConvert *this)

{
  ~WorldMap_StarConvert(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarConvert::RefreshShouldDrawBubble() */

void __thiscall WorldMap_StarConvert::RefreshShouldDrawBubble(WorldMap_StarConvert *this)

{
  string *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  StarConvertConfig *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string *psVar7;
  int *piVar8;
  long lVar9;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *__n;
  int iVar10;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  this_00 = (string *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  __n = avStack_20;
  this_01 = (StarConvertConfig *)LawnApp::GetStarConvertConfig(gLawnApp);
  iVar4 = StarConvertConfig::GetMaxConvertId(this_01);
  StarConvertConfig::GetConvertList();
  this[0x1d0] = (WorldMap_StarConvert)0x0;
  std::string::append(this_00,"",(size_t)__n);
  std::string::append((string *)(this + 0x1e0),"",(size_t)__n);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::clear
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x1e8));
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if ((this_03 != (PlayerInfo *)0x0) && (iVar5 = PlayerInfo::GetNumStars((int)this_03), 0 < iVar4))
  {
    iVar10 = 1;
    do {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
LAB_04a6e6dc:
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
      if (bVar2) {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        bVar2 = std::operator==("Plant",psVar7);
        if (bVar2) goto code_r0x04a6e710;
        bVar2 = std::operator==("Feature",psVar7);
        if ((!bVar2) ||
           (lVar9 = FUN_04a6d9d4(*(undefined8 *)(psVar7 + 0x10)), *(int *)(lVar9 + 8) != iVar10))
        goto LAB_04a6e764;
        FUN_05475d88((string *)&local_28,psVar7 + 8);
        GameFeatureType::GetGameFeatureTypeFromUnlockString
                  ((GameFeatureType *)&local_30,(string *)&local_28);
        std::string::~string((string *)&local_28);
        pLVar1 = gLawnApp;
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
        ;
        cVar3 = LawnApp::HasPlayerUnlockedFeature(pLVar1,*(undefined4 *)(lVar9 + 0x30));
        if (cVar3 == '\0') {
          ConvertObject::operator=((ConvertObject *)this_00,(ConvertObject *)psVar7);
          piVar8 = (int *)FUN_04a6d9d4(*(undefined8 *)(psVar7 + 0x10));
          this[0x1d0] = (WorldMap_StarConvert)(*piVar8 <= iVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          break;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar4);
  }
LAB_04a6e7f8:
  std::vector<ConvertObject,std::allocator<ConvertObject>>::~vector
            ((vector<ConvertObject,std::allocator<ConvertObject>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x04a6e710:
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(psVar7 + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(psVar7 + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (piVar8[2] == iVar10) {
      if (piVar8[1] < 2) {
        cVar3 = PlayerInfo::GetIsPlantUnlocked(this_03,psVar7 + 8);
        if (cVar3 != '\0') {
          __gnu_cxx::
          __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
          ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                        *)&local_40);
          goto LAB_04a6e6dc;
        }
      }
      else {
        iVar6 = PlayerInfo::GetPlantStarLevel(this_03,psVar7 + 8,false);
        if (piVar8[1] <= iVar6) break;
      }
      ConvertObject::operator=((ConvertObject *)this_00,(ConvertObject *)psVar7);
      this[0x1d0] = (WorldMap_StarConvert)(*piVar8 <= iVar5);
      goto LAB_04a6e7f8;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
LAB_04a6e764:
  __gnu_cxx::
  __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
  ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                *)&local_40);
  goto LAB_04a6e6dc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_StarConvert::CheckActivated() */

void __thiscall WorldMap_StarConvert::CheckActivated(WorldMap_StarConvert *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar6 != 0) {
    uVar7 = PlayerInfo::GetNumStars((int)lVar6);
    Sexy::StrFormat(L"X%d",asStack_10,uVar7 & 0xffffffff);
    FUN_054766c8(this + 0x230,asStack_10);
    FUN_05476c50(asStack_10);
  }
  RefreshShouldDrawBubble(this);
  cVar1 = ShouldDrawBubble(this);
  if (cVar1 != '\0') {
    bVar2 = std::operator==("Plant",(string *)(this + 0x1d8));
    if (bVar2) {
      this_00 = (EffectAnim_UIAnim *)(this + 0x200);
      EffectAnim_UIAnim::SafeRelease(this_00);
      iVar4 = FUN_04a6dc24(0x49);
      iVar5 = FUN_04a6dc24(0xfffffff6);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar4,(float)iVar5);
      FUN_05475d88(asStack_10,this + 0x1e0);
      EffectAnim_UIAnim::InitPlantUIAnim(0x3f70a3d7,local_18,local_14,this_00,asStack_10,1);
      std::string::~string(asStack_10);
      cVar1 = EffectAnim_UIAnim::IsValid(this_00);
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::HideAvatarLayer(this_00);
        EffectAnim_UIAnim::PlayIdleLoop(this_00);
      }
    }
    else {
      bVar3 = std::operator==("Feature",(string *)(this + 0x1d8));
      if (bVar3) {
        FUN_05475d88(asStack_10,this + 0x1e0);
        GameFeatureType::GetGameFeatureTypeFromUnlockString((GameFeatureType *)&local_18,asStack_10)
        ;
        std::string::~string(asStack_10);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        uVar8 = StringHelper::ToImage((string *)(lVar6 + 0x20),bVar2);
        *(undefined8 *)(this + 0x238) = uVar8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      }
    }
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_StarConvert::OnRefreshStarConvert() */

void __thiscall WorldMap_StarConvert::OnRefreshStarConvert(WorldMap_StarConvert *this)

{
  char cVar1;
  
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 == '\0') {
    return;
  }
  CheckActivated(this);
  return;
}

