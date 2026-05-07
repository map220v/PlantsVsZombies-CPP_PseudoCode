// Class: UIMiniGameCollection


/* UIMiniGameCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIMiniGameCollection::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIMiniGameCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIMiniGameCollection::ScrollTargetReached(UIMiniGameCollection *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIMiniGameCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIMiniGameCollection::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIMiniGameCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIMiniGameCollection::ScrollTargetInterrupted(UIMiniGameCollection *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::GetLayoutName() */

void __thiscall UIMiniGameCollection::GetLayoutName(UIMiniGameCollection *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIMiniGameCollection");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIMiniGameCollection::CloseMainTips() */

void __thiscall UIMiniGameCollection::CloseMainTips(UIMiniGameCollection *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* UIMiniGameCollection::~UIMiniGameCollection() */

void __thiscall UIMiniGameCollection::~UIMiniGameCollection(UIMiniGameCollection *this)

{
  *(undefined ***)this = &PTR_GetClass_066b5120;
  *(undefined **)(this + 0x138) = &DAT_066b54d0;
  *(undefined **)(this + 0xd8) = &DAT_066b5488;
  *(undefined ***)(this + 0x140) = &PTR__UIMiniGameCollection_066b54e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIMiniGameCollection>::~UISingletonDialog
            ((UISingletonDialog<UIMiniGameCollection> *)this);
  return;
}


/* non-virtual thunk to UIMiniGameCollection::~UIMiniGameCollection() */

void __thiscall UIMiniGameCollection::~UIMiniGameCollection(UIMiniGameCollection *this)

{
  ~UIMiniGameCollection(this + -0x140);
  return;
}


/* UIMiniGameCollection::~UIMiniGameCollection() */

void __thiscall UIMiniGameCollection::~UIMiniGameCollection(UIMiniGameCollection *this)

{
  ~UIMiniGameCollection(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIMiniGameCollection::~UIMiniGameCollection() */

void __thiscall UIMiniGameCollection::~UIMiniGameCollection(UIMiniGameCollection *this)

{
  ~UIMiniGameCollection(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::GetMiniGameBgStr(MiniGameType) */

void UIMiniGameCollection::GetMiniGameBgStr(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 == 0) {
    __s = "IMAGE_UI_MINIGAME_COLLECTION_BG_COPYCAT";
  }
  else if (param_3 == 1) {
    __s = "IMAGE_UI_MINIGAME_COLLECTION_BG_KLOTSKI";
  }
  else if (param_3 == 2) {
    __s = "IMAGE_UI_MINIGAME_COLLECTION_BG_CAMELCARD";
  }
  else if (param_3 == 3) {
    __s = "IMAGE_UI_MINIGAME_COLLECTION_BG_BOWLING";
  }
  else {
    __s = "";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::UpdateMiniGameBg(MiniGameType) */

void __thiscall
UIMiniGameCollection::UpdateMiniGameBg(UIMiniGameCollection *this,undefined4 param_2)

{
  UIWidgetImage *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_MiniGame_Background");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    GetMiniGameBgStr(asStack_10,this,param_2);
    UIWidgetImage::SetImage(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::UpdateTimer() */

void __thiscall UIMiniGameCollection::UpdateTimer(UIMiniGameCollection *this)

{
  UIWidgetText *pUVar1;
  float fVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    fVar2 = (float)TimeUtil::GetTimeCountdown(3,0x2a8d);
    if (fVar2 <= 0.0) {
      std::string::string(asStack_18,"[MINIGAME_COLLECTION_ACTIVITY_TIME_OVER]");
      StringHelper::ToStringValue(asStack_18);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::Update() */

void __thiscall UIMiniGameCollection::Update(UIMiniGameCollection *this)

{
  UIWidgetText *pUVar1;
  float fVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    fVar2 = (float)TimeUtil::GetTimeCountdown(3,0x2a8d);
    if (fVar2 <= 0.0) {
      std::string::string(asStack_18,"[MINIGAME_COLLECTION_ACTIVITY_TIME_OVER]");
      StringHelper::ToStringValue(asStack_18);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
      PuzzleTip::SetTip(pUVar1,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::ShowMainTips() */

void __thiscall UIMiniGameCollection::ShowMainTips(UIMiniGameCollection *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x148) = this_00;
    TodStringTranslate(L"[MINIGAME_COLLECTION_TIPS_INFO]");
    TodStringTranslate(L"[REVIVE_TIP]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x148);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseMainTips);
    Sexy::Delegate0::Delegate0<UIMiniGameCollection,void(UIMiniGameCollection::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameCollection::UIMiniGameCollection() */

void __thiscall UIMiniGameCollection::UIMiniGameCollection(UIMiniGameCollection *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIMiniGameCollection>::UISingletonDialog
            ((UISingletonDialog<UIMiniGameCollection> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_066b5120;
  *(undefined **)(this + 0x138) = &DAT_066b54d0;
  *(undefined ***)(this + 0x140) = &PTR__UIMiniGameCollection_066b54e8;
  *(undefined **)(this + 0xd8) = &DAT_066b5488;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifySelectMiniGame);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIMiniGameCollection,void(UIMiniGameCollection::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectMiniGame,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::UpdateMiniGameLevelStatus(MiniGameType) */

void __thiscall
UIMiniGameCollection::UpdateMiniGameLevelStatus(UIMiniGameCollection *this,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  PVZ2UIButton *pPVar3;
  PVZ2UIButton *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = MiniGameCollectionUtils::IsLevelUnlock(param_2,0);
  bVar2 = MiniGameCollectionUtils::IsLevelUnlock(param_2,1);
  std::string::string(asStack_10,"UIButton_NormalLevel");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_HardLevel");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar3 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,bVar1 ^ 1);
  }
  if (pPVar4 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,bVar2 ^ 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::UpdateMiniGameScore(MiniGameType) */

void __thiscall
UIMiniGameCollection::UpdateMiniGameScore(UIMiniGameCollection *this,undefined4 param_2)

{
  int iVar1;
  UIWidgetText *pUVar2;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Score");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    iVar1 = MiniGameCollectionUtils::GetLevelScore(param_2);
    FUN_05478178(asStack_10,L"[PLANTWARS_WORLD_SCORE_DESC]",auStack_20);
    TodReplaceNumberString((wstring *)asStack_10,L"{NUMS}",iVar1);
    FUN_05476c50(asStack_10);
    nop();
    PuzzleTip::SetTip(pUVar2,auStack_18);
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::UpdateTokenUI() */

void __thiscall UIMiniGameCollection::UpdateTokenUI(UIMiniGameCollection *this)

{
  UIWidgetText *pUVar1;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long lVar2;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Currency");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    lVar2 = eastl::
            hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
            ::get_allocator(this_00);
    local_1c = *(undefined4 *)(lVar2 + 0x60);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
    Sexy::ToWString(asStack_18);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::InitRewards() */

void __thiscall UIMiniGameCollection::InitRewards(UIMiniGameCollection *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_02;
  long lVar8;
  MiniGameRewardLine *this_03;
  MiniGameRewardData *pMVar9;
  ulong uVar10;
  ulong uVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_RewardContainer");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  uVar1 = FUN_038b4cfc(5);
  uVar2 = FUN_038b4cfc(0xf);
  iVar3 = FUN_038b4cfc(10);
  lVar8 = plVar7[10];
  iVar4 = FUN_038b4cfc(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,(int)lVar8 - iVar3,*(int *)((long)plVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_038b4cfc(10);
  iVar4 = FUN_038b4cfc(0xf);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_038b4cfc(0x5a);
  this_02 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  lVar8 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator(this_02);
  uVar11 = 0;
  while( true ) {
    uVar10 = FUN_038b3f4c(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38));
    if (uVar10 <= uVar11) break;
    this_03 = ::operator_new(0x100);
    MiniGameRewardLine::MiniGameRewardLine(this_03);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar5,iVar4,iVar3 + iVar5 * -2,iVar6);
    pMVar9 = (MiniGameRewardData *)FUN_038b3f9c(*(undefined8 *)(lVar8 + 0x30),uVar11);
    MiniGameRewardLine::InitView(this_03,(int)uVar11,pMVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
    uVar11 = uVar11 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar5 + (iVar5 + iVar6) * (int)uVar10;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::InitBuffers() */

void __thiscall UIMiniGameCollection::InitBuffers(UIMiniGameCollection *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long lVar7;
  UIWidgetImage *pUVar8;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  MiniGameUpgradeItem *this_03;
  MiniGameBufferData *pMVar9;
  ulong uVar10;
  ulong uVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  iVar6 = 0;
  lVar7 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator(this_00);
  std::string::string(asStack_10,"UIImage_Shop");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x140));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  uVar1 = FUN_038b4cfc(0xf);
  uVar2 = FUN_038b4cfc(10);
  iVar3 = FUN_038b4cfc(0x1e);
  iVar5 = *(int *)(pUVar8 + 0x50);
  iVar4 = FUN_038b4cfc(0x14);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,uVar1,uVar2,iVar5 - iVar3,*(int *)(pUVar8 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  iVar5 = FUN_038b4cfc(100);
  uVar11 = 0;
  while( true ) {
    uVar10 = FUN_038b3f1c(*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(lVar7 + 0x50));
    if (uVar10 <= uVar11) break;
    this_03 = ::operator_new(0x128);
    MiniGameUpgradeItem::MiniGameUpgradeItem(this_03);
    iVar6 = FUN_038b4cfc(10);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,0,(iVar6 + iVar5) * (int)uVar11,uVar1,iVar5);
    pMVar9 = (MiniGameBufferData *)FUN_038b3f94(*(undefined8 *)(lVar7 + 0x48),uVar11);
    MiniGameUpgradeItem::SetData(this_03,pMVar9);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    iVar6 = *(int *)(this_03 + 0x4c) + *(int *)(this_03 + 0x54);
    uVar11 = uVar11 + 1;
  }
  lVar7 = *(long *)this_01;
  *(int *)(this_02 + 0x54) = iVar6;
  (**(code **)(lVar7 + 0x60))(this_01,this_02);
  (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,this_01);
  std::string::string(asStack_10,"UIImage_Currency_Mask");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar8 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::NotifySelectMiniGame(int) */

void __thiscall UIMiniGameCollection::NotifySelectMiniGame(UIMiniGameCollection *this,int param_1)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  MiniGameCollectionMainEntryData *pMVar1;
  MiniGameData *pMVar2;
  undefined4 local_90 [8];
  MiniGameCollectionMainEntryData aMStack_70 [24];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar1 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this_00);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar1);
  pMVar2 = (MiniGameData *)FUN_038b3e88(local_58,(long)param_1);
  MiniGameData::MiniGameData((MiniGameData *)local_90,pMVar2);
  *(undefined4 *)(this + 0x158) = local_90[0];
  UpdateMiniGameScore(this);
  UpdateMiniGameLevelStatus(this,*(undefined4 *)(this + 0x158));
  UpdateMiniGameBg(this,*(undefined4 *)(this + 0x158));
  MiniGameData::~MiniGameData((MiniGameData *)local_90);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::TabSelectionChanged(int) */

void __thiscall UIMiniGameCollection::TabSelectionChanged(UIMiniGameCollection *this,int param_1)

{
  undefined4 uVar1;
  UIWidgetImage *pUVar2;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  char *__s;
  TGALogMgr *this_01;
  DString *__n;
  ulong uVar7;
  undefined8 uVar8;
  DString aDStack_1b8 [16];
  string asStack_1a8 [8];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    __n = aDStack_1b8;
    std::string::string(asStack_1a8,"UIImage_Currency_Mask");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_1a8);
    std::string::~string(asStack_1a8);
    nop();
    if (pUVar2 != (UIWidgetImage *)0x0) {
      __n = *(DString **)(*(long *)pUVar2 + 0x158);
      (*(code *)__n)(pUVar2,1);
    }
    this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    lVar3 = eastl::
            hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
            ::get_allocator(this_00);
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    uVar7 = 0;
    while( true ) {
      uVar8 = *(undefined8 *)(lVar3 + 0x48);
      uVar6 = FUN_038b3f1c(uVar8,*(undefined8 *)(lVar3 + 0x50));
      if (uVar6 <= uVar7) break;
      puVar4 = (undefined4 *)FUN_038b3f94(uVar8,uVar7);
      uVar8 = FUN_0546065c(auStack_168,*puVar4);
      uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
      lVar5 = FUN_038b3f94(*(undefined8 *)(lVar3 + 0x48),uVar7);
      uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar5 + 8));
      FUN_054603b8(uVar8,&DAT_05594620);
      uVar7 = uVar7 + 1;
    }
    TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8);
    DString::DString(aDStack_1b8,4);
    __s = (char *)DString::c_str(aDStack_1b8);
    std::string::append(asStack_1a8,__s,(size_t)__n);
    DString::~DString(aDStack_1b8);
    Sexy::StrFormat("%d, %d, %d",aDStack_1b8,(ulong)*(uint *)(lVar3 + 0x60),0,
                    (ulong)*(uint *)(lVar3 + 0x60));
    FUN_05474278(auStack_1a0,aDStack_1b8);
    std::string::~string((string *)aDStack_1b8);
    FUN_05462824(aDStack_1b8,auStack_178);
    FUN_05474278(auStack_180,aDStack_1b8);
    std::string::~string((string *)aDStack_1b8);
    this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstancePtr();
    TGALogMgr::LogMiniGameCollectionData(this_01,(TGAMiniGameCollectionData *)asStack_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
    FUN_054617bc(auStack_178);
  }
  else {
    std::string::string(asStack_1a8,"UIImage_Currency_Mask");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_1a8);
    std::string::~string(asStack_1a8);
    nop();
    if (pUVar2 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIMiniGameCollection::TabSelectionChanged(int) */

void __thiscall UIMiniGameCollection::TabSelectionChanged(UIMiniGameCollection *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::InitTabButtons() */

void __thiscall UIMiniGameCollection::InitTabButtons(UIMiniGameCollection *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  MiniGameCollectionMainEntryData *pMVar8;
  long lVar9;
  long *plVar10;
  MiniGameData *pMVar11;
  MiniGameTabButton *this_01;
  UIWidgetText *pUVar12;
  char *__s;
  undefined8 uVar13;
  TGALogMgr *this_02;
  long lVar14;
  DString *__n;
  int iVar15;
  undefined1 auStack_228 [8];
  DString aDStack_220 [16];
  int local_210;
  bool local_20c;
  undefined1 auStack_208 [40];
  MiniGameCollectionMainEntryData aMStack_1e0 [24];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pMVar8 = (MiniGameCollectionMainEntryData *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this_00);
  MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_1e0,pMVar8);
  uVar13 = local_1c8;
  iVar2 = FUN_038b3ecc(local_1c8,local_1c0);
  if (0 < iVar2) {
    lVar14 = 0;
    do {
      iVar15 = (int)lVar14;
      lVar9 = FUN_038b3e88(uVar13,lVar14);
      if (*(char *)(lVar9 + 4) != '\0') goto LAB_038c0128;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar2);
  }
  iVar15 = -1;
LAB_038c0128:
  lVar14 = 0;
  std::string::string((string *)&local_210,"UIImage_ButtonContainer");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_210);
  std::string::~string((string *)&local_210);
  nop();
  uVar3 = FUN_038b3874((int)plVar10[10]);
  iVar4 = FUN_038b3878(*(undefined4 *)((long)plVar10 + 0x54));
  if (0 < iVar2) {
    do {
      pMVar11 = (MiniGameData *)FUN_038b3e88(local_1c8,lVar14);
      MiniGameData::MiniGameData((MiniGameData *)&local_210,pMVar11);
      iVar5 = local_210;
      this_01 = ::operator_new(800);
      iVar1 = (int)lVar14;
      MiniGameTabButton::MiniGameTabButton(this_01,iVar5 + 0x44c,iVar1,local_20c);
      iVar5 = FUN_038b4cfc(10);
      iVar6 = FUN_038b4cfc(7);
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,0,iVar5 + (iVar6 + (int)((float)iVar4 * 0.22222222)) * iVar1,uVar3,
                 (int)((float)iVar4 * 0.22222222));
      MiniGameTabButton::InitView(this_01);
      if (iVar15 == iVar1) {
        FUN_038b426c(this_01 + 0x314);
      }
      lVar14 = lVar14 + 1;
      (**(code **)(*plVar10 + 0x60))(plVar10,this_01);
      MiniGameData::~MiniGameData((MiniGameData *)&local_210);
    } while ((int)lVar14 < iVar2);
  }
  if (iVar15 != -1) {
    NotifySelectMiniGame(this,iVar15);
  }
  __n = aDStack_220;
  std::string::string((string *)&local_210,"UIText_TotalScore");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_210);
  std::string::~string((string *)&local_210);
  nop();
  if (pUVar12 != (UIWidgetText *)0x0) {
    uVar7 = MiniGameCollectionUtils::GetTotalScore();
    __n = (DString *)(ulong)uVar7;
    FUN_05478178((string *)&local_210,L"[PLANTWARS_WORLD_SCORE_DESC]",auStack_228);
    TodReplaceNumberString((wstring *)&local_210,L"{NUMS}",uVar7);
    FUN_05476c50((string *)&local_210);
    nop();
    PuzzleTip::SetTip(pUVar12,aDStack_220);
    FUN_05476c50(aDStack_220);
  }
  TGASecretStore::TGASecretStore((TGASecretStore *)&local_210);
  DString::DString(aDStack_220,1);
  __s = (char *)DString::c_str(aDStack_220);
  std::string::append((string *)&local_210,__s,(size_t)__n);
  DString::~DString(aDStack_220);
  std::string::string((string *)aDStack_220,"");
  uVar3 = operator|(0x10,8);
  FUN_05462618(auStack_178,aDStack_220,uVar3);
  std::string::~string((string *)aDStack_220);
  nop();
  uVar13 = FUN_0546065c(auStack_168,local_180);
  uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
  uVar13 = FUN_0546065c(uVar13,0);
  uVar13 = FUN_054603b8(uVar13,&DAT_05593348);
  FUN_0546065c(uVar13,local_180);
  FUN_05462824(aDStack_220,auStack_178);
  FUN_05474278(auStack_208,aDStack_220);
  std::string::~string((string *)aDStack_220);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstancePtr();
  TGALogMgr::LogMiniGameCollectionData(this_02,(TGAMiniGameCollectionData *)&local_210);
  FUN_054617bc(auStack_178);
  DropGroupNode::~DropGroupNode((DropGroupNode *)&local_210);
  MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_1e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameCollection::InitView() */

void __thiscall UIMiniGameCollection::InitView(UIMiniGameCollection *this)

{
  InitTabButtons(this);
  InitRewards(this);
  InitBuffers(this);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::OnCreate() */

void __thiscall UIMiniGameCollection::OnCreate(UIMiniGameCollection *this)

{
  undefined4 uVar1;
  Widget *pWVar2;
  UITabControl *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  std::string::string(asStack_10,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x138));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameCollection::GoToLevel(bool) */

void __thiscall UIMiniGameCollection::GoToLevel(UIMiniGameCollection *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  MiniGameCollectionMainEntryData *pMVar5;
  undefined4 *puVar6;
  MiniGamePerkMgr *this_01;
  WorldMap *pWVar7;
  char *__s;
  TGALogMgr *this_02;
  UIMessageBox *this_03;
  Image *pIVar8;
  size_t __n;
  string asStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0 [2];
  vector<MiniGameBufferData,std::allocator<MiniGameBufferData>> avStack_d0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_90 [32];
  MiniGameCollectionMainEntryData aMStack_70 [72];
  vector avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) &&
     (cVar1 = MiniGameCollectionUtils::IsLevelUnlock(*(undefined4 *)(this + 0x158),1), cVar1 == '\0'
     )) {
    this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_03 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_03,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MINIGAME_COLLECTION_UNLOCK_DESC]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_03,(wstring *)avStack_b8,(wstring *)avStack_d0);
      std::string::string((string *)aMStack_70,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar8 = (Image *)StringHelper::ToImage((string *)aMStack_70,false);
      UIMessageBox::SetBackground(this_03,pIVar8);
      std::string::~string((string *)aMStack_70);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_03);
      thunk_FUN_05477b9c(lVar3 + 0xd8,&local_a0);
      FUN_05476c50(&local_a0);
      FUN_05476c50((wstring *)avStack_b8);
      FUN_05476c50((wstring *)avStack_d0);
    }
  }
  else {
    lVar3 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    FUN_038b390c(lVar3 + 0xd0,*(undefined4 *)(this + 0x158));
    lVar3 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    FUN_038b3930(lVar3 + 0xf8,param_1);
    uVar4 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    MiniGameCollectionNetworkMgr::GetMiniGameRealLevel
              (asStack_f0,uVar4,*(undefined4 *)(this + 0x158),param_1);
    FUN_038b4264(gGameStateMgr + 0x1eb1);
    this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
               *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    pMVar5 = (MiniGameCollectionMainEntryData *)
             eastl::
             hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             ::get_allocator(this_00);
    MiniGameCollectionMainEntryData::MiniGameCollectionMainEntryData(aMStack_70,pMVar5);
    std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::vector
              (avStack_d0,avStack_28);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_d0);
    local_e0[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_d0);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)local_e0);
      if (!bVar2) break;
      puVar6 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8)
      ;
      if (puVar6[2] != 0) {
        Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_a0);
        local_a0 = *puVar6;
        local_9c = puVar6[2];
        std::vector<NetMiniGamePerkData,std::allocator<NetMiniGamePerkData>>::push_back
                  ((vector<NetMiniGamePerkData,std::allocator<NetMiniGamePerkData>> *)avStack_b8,
                   (NetMiniGamePerkData *)&local_a0);
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_e8);
    }
    this_01 = (MiniGamePerkMgr *)Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
    MiniGamePerkMgr::SyncPerkList(this_01,(vector *)avStack_b8);
    pWVar7 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    __n = 5;
    WorldMap::SwitchToGameLevel(pWVar7,asStack_f0,5,0);
    UISingletonDialog<UIMiniGameCollection>::CloseDialog();
    LawnApp::KillActivityCollection(gLawnApp);
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_a0);
    DString::DString((DString *)local_e0,6);
    __s = (char *)DString::c_str((DString *)local_e0);
    std::string::append((string *)&local_a0,__s,__n);
    DString::~DString((DString *)local_e0);
    thunk_FUN_05475e00(auStack_90,asStack_f0);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstancePtr();
    TGALogMgr::LogMiniGameCollectionData(this_02,(TGAMiniGameCollectionData *)&local_a0);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_a0);
    std::vector<NetMiniGamePerkData,std::allocator<NetMiniGamePerkData>>::~vector
              ((vector<NetMiniGamePerkData,std::allocator<NetMiniGamePerkData>> *)avStack_b8);
    std::vector<MiniGameBufferData,std::allocator<MiniGameBufferData>>::~vector(avStack_d0);
    MiniGameCollectionMainEntryData::~MiniGameCollectionMainEntryData(aMStack_70);
    std::string::~string(asStack_f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameCollection::ButtonDepress(int) */

void __thiscall UIMiniGameCollection::ButtonDepress(UIMiniGameCollection *this,int param_1)

{
  if (param_1 == 0x3ed) {
    ShowMainTips(this);
    return;
  }
  if (param_1 < 0x3ee) {
    if (param_1 == 1000) {
      UISingletonDialog<UIMiniGameCollection>::CloseDialog();
      return;
    }
  }
  else {
    if (param_1 == 0x514) {
      GoToLevel(this,false);
      return;
    }
    if (param_1 == 0x515) {
      GoToLevel(this,true);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIMiniGameCollection::ButtonDepress(int) */

void __thiscall UIMiniGameCollection::ButtonDepress(UIMiniGameCollection *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

