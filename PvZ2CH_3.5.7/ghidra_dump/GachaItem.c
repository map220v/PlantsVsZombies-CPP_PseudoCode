// Class: GachaItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::RefreshButton(std::wstring, Sexy::Image*) */

void __thiscall GachaItem::RefreshButton(GachaItem *this,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0xe0));
  if (param_3 != 0) {
    pPVar2 = *(PVZ2UIButton **)(this + 0xe0);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,param_3,1);
    PVZ2UIButton::AddImage(pPVar2,aPStack_40,0);
  }
  pPVar2 = *(PVZ2UIButton **)(this + 0xe0);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar2,param_2,uVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::Resize(int, int, int, int) */

void __thiscall GachaItem::Resize(GachaItem *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar2 = FUN_03def260(0xe);
  iVar3 = FUN_03def260(0x1c);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03def260(0xbe);
  Sexy::Insets::Insets(aIStack_18,iVar2,*(int *)(this + 0x128),iVar1 - iVar3,iVar4);
  plVar5 = *(long **)(this + 0x140);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x1a0))(plVar5,aIStack_18);
  }
  plVar5 = *(long **)(this + 0xe0);
  if (plVar5 != (long *)0x0) {
    iVar1 = *(int *)(this + 0x138);
    iVar3 = FUN_03def260(0x14);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = FUN_03def260(0x28);
    (**(code **)(*plVar5 + 0x198))
              (plVar5,(*(int *)(this + 0x50) - iVar1) / 2,(iVar2 - iVar3) - iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::ShowMask() */

void __thiscall GachaItem::ShowMask(GachaItem *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined8 *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  Sexy::Insets::Insets(aIStack_18);
  GameMaskUI::ShowMask(uVar1,2,asStack_20,aIStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::Draw(Sexy::Graphics*) */

void __thiscall GachaItem::Draw(GachaItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  PrimeTypeface *this_00;
  float fVar6;
  int local_48 [2];
  int local_40;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03def260(4);
  iVar3 = FUN_03def260(8);
  iVar1 = *(int *)(this + 0x50);
  fVar6 = (float)FUN_03def274(0x41f00000);
  Sexy::Insets::Insets
            ((Insets *)local_48,iVar2,0,iVar1 - iVar3,(int)((float)*(int *)(this + 0x54) - fVar6));
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_48);
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  iVar1 = local_48[0];
  iVar3 = FUN_03def260(10);
  fVar6 = (float)FUN_03def274(0x40a00000);
  iVar2 = local_40;
  iVar4 = FUN_03def260(0x14);
  Sexy::Insets::Insets(aIStack_38,iVar1 + iVar3,(int)fVar6,iVar2 - iVar4,*(int *)(this + 0x128));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,aIStack_38,uVar5,aIStack_18,5,1);
  iVar2 = FUN_03def260(0xc2);
  iVar1 = *(int *)(this + 0x128);
  iVar3 = FUN_03def260(10);
  iVar4 = FUN_03def260(0x14);
  this_00 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar6 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
  Sexy::Insets::Insets
            (aIStack_28,local_48[0] + iVar3,iVar2 + iVar1,local_40 - iVar4,(int)(fVar6 * 4.0));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,this + 0x120,aIStack_28,uVar5,aIStack_18,*(undefined4 *)(this + 0x134),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::~GachaItem() */

void __thiscall GachaItem::~GachaItem(GachaItem *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677fe98;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0677fb70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaItem::~GachaItem() */

void __thiscall GachaItem::~GachaItem(GachaItem *this)

{
  ~GachaItem(this);
  AK::FreeHook(this);
  return;
}


/* GachaItem::RefreshAdvertisementTime() */

void __thiscall GachaItem::RefreshAdvertisementTime(GachaItem *this)

{
  undefined8 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar2 != (PlayerInfo *)0x0) {
    if (*(int *)(this + 0x13c) == 0) {
      PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar2,0,uVar1,1);
      return;
    }
    if (*(int *)(this + 0x13c) == 1) {
      PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar2,1,uVar1,1);
      return;
    }
  }
  return;
}


/* GachaItem::CheckAdvertisementCoolDown() */

undefined8 __thiscall GachaItem::CheckAdvertisementCoolDown(GachaItem *this)

{
  ProfileMgr *this_00;
  long lVar1;
  undefined8 uVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0x13c) == 0) {
    lVar1 = PlayerInfo::GetAdvertisementWatchTime();
    uVar2 = TimeUtil::CheckTimeDayPass(lVar1,1);
    return uVar2;
  }
  if (*(int *)(this + 0x13c) != 1) {
    return 0;
  }
  lVar1 = PlayerInfo::GetAdvertisementWatchTime();
  uVar2 = TimeUtil::CheckTimeDayPass(lVar1,3);
  return uVar2;
}


/* GachaItem::onADFinished(int) */

void __thiscall GachaItem::onADFinished(GachaItem *this,int param_1)

{
  GachaMgr *pGVar1;
  
  if ((param_1 == 8) && (this[0x148] == (GachaItem)0x0)) {
    pGVar1 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::DoAdvertiseDraw(pGVar1,*(undefined4 *)(this + 0x13c),this[0x148]);
    return;
  }
  return;
}


/* GachaItem::OnNotifyTutorialResponseInner() */

void __thiscall GachaItem::OnNotifyTutorialResponseInner(GachaItem *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  GachaMgr *this_00;
  
  lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
  if (iVar2 == 1) {
    if (*(int *)(this + 0x13c) == 0) {
      if (this[0x148] != (GachaItem)0x0) {
        (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
        return;
      }
      return;
    }
  }
  else {
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
    if (iVar2 == 2) {
      if ((*(int *)(this + 0x13c) != 1) || (this[0x148] != (GachaItem)0x0)) {
        (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
      }
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      cVar1 = FUN_03def10c(*(undefined1 *)(lVar3 + 0x61));
    }
    else {
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
      if (iVar2 == 3) {
        if ((*(int *)(this + 0x13c) != 3) || (this[0x148] != (GachaItem)0x0)) {
          (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
        }
        this_00 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        cVar1 = GachaMgr::GetObtainTutorialAvatar(this_00);
      }
      else {
        lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
        if (iVar2 != 4) {
          return;
        }
        if ((*(int *)(this + 0x13c) != 2) || (this[0x148] == (GachaItem)0x0)) {
          (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
        }
        lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        cVar1 = FUN_03def110(*(undefined1 *)(lVar3 + 0x62));
      }
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::UpdateViewForKeyMode(GachaType, bool) */

void __thiscall
GachaItem::UpdateViewForKeyMode(GachaItem *this,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  GachaMgr *pGVar3;
  undefined8 uVar4;
  PVZ2UIButton *pPVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  GAME_ITEM_INFO aGStack_70 [32];
  string asStack_50 [16];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    cVar1 = GachaMgr::IsUseGachaKeyMode(pGVar3,param_2,param_3);
    if (cVar1 != '\0') {
      PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0xe0));
      pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar2 = GachaMgr::GetGachaKeyMatId(pGVar3,param_2,param_3);
      GetGameItemInfo(iVar2,0x7fffffff,0);
      uVar4 = StringHelper::ToImage(asStack_50,false);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar4,2);
      PVZ2UIButton::AddImageScale
                ((PVZ2UIButton *)0x3e99999a,*(undefined8 *)(this + 0xe0),aPStack_40,0);
      pPVar5 = *(PVZ2UIButton **)(this + 0xe0);
      FUN_05478178(auStack_78,&DAT_05718d68,auStack_80);
      uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      PVZ2UIButton::AddText(pPVar5,auStack_78,uVar4,0);
      FUN_05476c50(auStack_78);
      nop();
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaItem::IsAdvertiseEnable() */

byte __thiscall GachaItem::IsAdvertiseEnable(GachaItem *this)

{
  int iVar1;
  GachaItem GVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ADManager *pAVar6;
  byte bVar7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar3 = PlayerInfo::canFreeGachaNew(this_01,*(int *)(this + 0x13c));
  iVar1 = *(int *)(this + 0x13c);
  GVar2 = this[0x148];
  iVar5 = FUN_03def0fc(*(undefined4 *)(this_01 + 0x40));
  pAVar6 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  bVar4 = ADManager::CanWatchAD(pAVar6,8);
  bVar7 = 0;
  if (bVar3 < (iVar1 == 0)) {
    bVar7 = bVar4 & (byte)GVar2 < (iVar5 != 0x17);
  }
  return bVar7;
}


/* GachaItem::TryToDraw() */

void __thiscall GachaItem::TryToDraw(GachaItem *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ADManager *pAVar4;
  GachaMgr *pGVar5;
  
  LawnApp::KillGameMaskUI(gLawnApp);
  ProfileUtils::Profile();
  cVar1 = IsAdvertiseEnable(this);
  if (cVar1 != '\0') {
    pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar4,8);
    return;
  }
  lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
  if (iVar2 == 4) {
    pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::DoFreeGachaDraw(pGVar5,*(undefined4 *)(this + 0x13c),1,3);
  }
  else {
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
    if (iVar2 == 0) {
      pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      GachaMgr::DoGachaDraw(pGVar5,*(undefined4 *)(this + 0x13c),this[0x148]);
      return;
    }
    Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::DoLocalDraw();
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
    if (iVar2 != 3) {
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
      if (iVar2 != 1) {
        lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
        if (iVar2 != 2) {
          return;
        }
      }
      (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
      if (iVar2 != 2) {
        return;
      }
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      FUN_03def114(lVar3 + 0x61);
      return;
    }
    pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::SetObtainTutorialAvatar(pGVar5,true);
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
  return;
}


/* GachaItem::ButtonDepress(int) */

void __thiscall GachaItem::ButtonDepress(GachaItem *this,int param_1)

{
  if (param_1 != 0x66) {
    return;
  }
  TryToDraw(this);
  return;
}


/* non-virtual thunk to GachaItem::ButtonDepress(int) */

void __thiscall GachaItem::ButtonDepress(GachaItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::RefreshAdsButton() */

void GachaItem::RefreshAdsButton(void)

{
  long in_x0;
  ProfileMgr *this;
  GachaMgr *pGVar1;
  ulong uVar2;
  int in_w3;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  pGVar1 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar2 = GachaMgr::GetTargetGachaCost
                    (pGVar1,*(undefined4 *)(in_x0 + 0x13c),*(undefined1 *)(in_x0 + 0x148));
  FUN_05476574(auStack_20);
  std::string::string(asStack_18,"[GACHA_TEM_DRAW_PRICE]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(uVar2 & 0xffffffff),in_w3)
  ;
  FUN_054766c8(auStack_20,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  CachedUIResourcePtr<Sexy::Image>::operator->
            ((CachedUIResourcePtr<Sexy::Image> *)GachaItemConfig::IMAGE_UI_STORE_COST_GEM);
  FUN_05477b24(auStack_10,auStack_20);
  RefreshButton();
  FUN_05476c50(auStack_10);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::OnNotifyDrawFinish() */

void GachaItem::OnNotifyDrawFinish(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  GachaItem *in_x0;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var4;
  int *piVar5;
  long lVar6;
  ProfileMgr *this;
  PlayerInfo *this_00;
  GachaMgr *pGVar7;
  ulong uVar8;
  int in_w3;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var4 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  piVar5 = (int *)std::
                  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                  ::_M_root(p_Var4);
  iVar1 = *piVar5;
  p_Var4 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(p_Var4);
  iVar2 = *(int *)(lVar6 + 8);
  p_Var4 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(p_Var4);
  if ((*(int *)(in_x0 + 0x13c) == iVar2) &&
     ((*(char *)(lVar6 + 5) != '\0' || ((iVar1 == 0 && (in_x0[0x148] == (GachaItem)0x0)))))) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar3 = PlayerInfo::canFreeGachaNew(this_00,*(int *)(in_x0 + 0x13c));
    if (cVar3 == '\0') {
      pGVar7 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
      uVar8 = GachaMgr::GetTargetGachaCost(pGVar7,*(undefined4 *)(in_x0 + 0x13c),in_x0[0x148]);
      FUN_05476574(auStack_20);
      std::string::string(asStack_18,"[GACHA_TEM_DRAW_PRICE]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(uVar8 & 0xffffffff),
                 in_w3);
      FUN_054766c8(auStack_20,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
      nop();
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)GachaItemConfig::IMAGE_UI_STORE_COST_GEM);
      cVar3 = IsAdvertiseEnable(in_x0);
      if (cVar3 != '\0') {
        Sexy::OutputDebugStrF((wchar_t *)"GachaItem::OnNotifyDrawFinish");
        TodStringTranslate(L"[ADVERTISEMENT_WATCH]");
        FUN_054766c8(auStack_20,auStack_10);
        FUN_05476c50(auStack_10);
      }
      FUN_05477b24(auStack_10,auStack_20);
      RefreshButton();
      FUN_05476c50(auStack_10);
      FUN_05476c50(auStack_20);
    }
  }
  UpdateViewForKeyMode();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GachaItem::getGachaImage(GachaType, bool) */

undefined8 __thiscall GachaItem::getGachaImage(undefined8 param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 != '\0') {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_NORMAL_10);
      return uVar1;
    }
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_NORMAL);
    return uVar1;
  }
  if (param_2 == 1) {
    if (param_3 != '\0') {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_RARE_10);
      return uVar1;
    }
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_RARE);
    return uVar1;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return 0;
    }
    if (param_3 == '\0') {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_AVATAR);
      return uVar1;
    }
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_AVATAR_10);
    return uVar1;
  }
  if (param_3 != '\0') {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_LEGEND_10);
    return uVar1;
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_LEGEND);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall GachaItem::DrawAll(GachaItem *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PlayerInfo *this_00;
  long lVar5;
  Image *pIVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *this_01;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(long *)(this + 0x110) == 0) goto LAB_03df1440;
  FUN_05476574(auStack_30);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  lVar5 = PlayerInfo::getFreeGachaLeftTimeNew(this_00,*(int *)(this + 0x13c));
  cVar1 = PlayerInfo::canFreeGachaNew(this_00,*(int *)(this + 0x13c));
  if (cVar1 == '\0') {
    lVar7 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar7 + 0x44));
    if (iVar2 != 0) goto LAB_03df1384;
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_TIMING_FREE);
    *(undefined8 *)(this + 0x110) = uVar8;
    lVar7 = LawnApp::GetRealServerTime(gLawnApp);
    LawnApp::GetGachaConfig();
    if (lVar7 < 1) {
LAB_03df14c0:
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)
                                   GachaItemConfig::IMAGE_UI_STORE_GACHA_NO_NETWORK);
      *(Image **)(this + 0x110) = pIVar6;
      iVar2 = FUN_03def260(0x116);
      Sexy::Graphics::DrawImage
                (param_2,pIVar6,(*(int *)(this + 0x50) - *(int *)(pIVar6 + 0x38)) / 2,iVar2);
    }
    else {
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (cVar1 == '\0') goto LAB_03df14c0;
      iVar2 = (int)(lVar5 / 0x3c);
      Sexy::StrFormat(L"%d:%02d:%02d",aCStack_18,lVar5 / 0xe10 & 0xffffffff,
                      (ulong)(uint)(iVar2 + (int)((lVar5 / 0x3c) / 0x3c) * -0x3c),
                      (ulong)(uint)((int)lVar5 + iVar2 * -0x3c));
      FUN_054766c8(auStack_30,aCStack_18);
      FUN_05476c50(aCStack_18);
      pIVar6 = *(Image **)(this + 0x110);
      iVar2 = FUN_03def260(0x116);
      Sexy::Graphics::DrawImage
                (param_2,pIVar6,(*(int *)(this + 0x50) - *(int *)(pIVar6 + 0x38)) / 2,iVar2);
      iVar2 = FUN_03def260(0xfffffff1);
      iVar4 = FUN_03def260(0x67);
      Sexy::Insets::Insets(aIStack_28,iVar2,iVar4,*(int *)(this + 0x50),*(int *)(this + 0x54));
      uVar8 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_2,auStack_30,aIStack_28,uVar8,aCStack_18,5,1);
    }
  }
  else {
LAB_03df1384:
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)
                                 GachaItemConfig::IMAGE_UI_STORE_GACHA_FREE_GACHA);
    *(Image **)(this + 0x110) = pIVar6;
    iVar2 = FUN_03def260(0x116);
    Sexy::Graphics::DrawImage
              (param_2,pIVar6,(int)((float)(*(int *)(this + 0x50) - *(int *)(pIVar6 + 0x38)) * 0.5),
               iVar2);
  }
  cVar1 = PlayerInfo::isFirstDiamondGachaNew(this_00,*(int *)(this + 0x13c));
  if (cVar1 == '\0') {
    if (*(int *)(this + 0x13c) == 3) {
      this_01 = GachaItemConfig::IMAGE_UI_STORE_GACHA_FIRST_RECHARGE_AVATAR;
    }
    else {
      this_01 = GachaItemConfig::IMAGE_UI_STORE_GACHA_FIRST_RECHARGE;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)this_01);
    iVar2 = *(int *)(this + 0x50);
    lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)this_01);
    iVar4 = *(int *)(lVar5 + 0x38);
    iVar3 = FUN_03def260(0x78);
    Sexy::Graphics::DrawImage(param_2,pIVar6,iVar2 - iVar4,iVar3);
  }
  FUN_05476c50(auStack_30);
LAB_03df1440:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::GachaItem(GachaType, bool, Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall
GachaItem::GachaItem(GachaItem *this,undefined4 param_2,GachaItem param_3,RtWeakPtrBase *param_4)

{
  RtWeakPtr<Sexy::SoundResource> *this_00;
  undefined *puVar1;
  LawnApp *this_01;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GachaMgr *pGVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  PVZ2UIButton *pPVar9;
  PVZ2UIGameObjectCard *pPVar10;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  wchar_t *pwVar11;
  long lVar12;
  string *extraout_x1;
  int iVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  string asStack_b8 [8];
  undefined1 auStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::SoundResource> *)(this + 0x150);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_0677fb70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677fe98;
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  Sexy::Point::Point((Point *)(this + 300));
  *(undefined4 *)(this + 0x13c) = param_2;
  this[0x148] = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(this_00,param_4);
  this_01 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Fragment_Material");
  LawnApp::LoadGroup(this_01,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  *(undefined8 *)(this + 0x140) = 0;
  iVar13 = 2;
  *(undefined4 *)(this + 0x134) = 2;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  std::string::string(asStack_b8,"");
  nop();
  *(undefined8 *)(this + 0x110) = 0;
  pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar6 = GachaMgr::GetTargetGachaRewardCoin(pGVar5,param_2,this[0x148]);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString((Sexy *)&local_40,extraout_x1);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x118,auStack_b0);
  FUN_05476c50(auStack_b0);
  FUN_05476c50(awStack_78);
  std::string::~string((string *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  MagentoProductProps::GetLocalizedDescription();
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_40,(string *)L"{NUMBER}",(wchar_t *)(uVar6 & 0xffffffff),iVar13)
  ;
  FUN_054766c8(this + 0x120,awStack_78);
  FUN_05476c50(awStack_78);
  std::string::~string((string *)&local_40);
  switch(param_2) {
  case 0:
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_BLUE);
    *(undefined8 *)(this + 0xf0) = uVar7;
    break;
  case 1:
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar7;
    break;
  case 2:
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_CARDS_STORE_STORE_COIN_CARD);
    *(undefined8 *)(this + 0xf0) = uVar7;
    break;
  case 3:
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar7;
  }
  uVar3 = FUN_03def260(0x46);
  *(undefined4 *)(this + 0x128) = uVar3;
  uVar3 = FUN_03def260(0x2c);
  *(undefined4 *)(this + 0x128) = uVar3;
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     GachaItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     GachaItemConfig::IMAGE_UI_GENERIC_GREENBUYBUTTON_DOWN);
  uVar3 = FUN_03def260(0x8c);
  *(undefined4 *)(this + 0x138) = uVar3;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x66,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,uVar7,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,uVar8,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  pPVar10 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar10,(string *)&local_40,0,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0x140) = pPVar10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  pPVar10 = *(PVZ2UIGameObjectCard **)(this + 0x140);
  uVar7 = getGachaImage(this,param_2,this[0x148]);
  iVar13 = 0x4d;
  Sexy::Insets::Insets((Insets *)&local_40,0,0x2c,0x4d,0xff);
  PVZ2UIGameObjectCard::SetSpecificBackground(pPVar10,uVar7,(string *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x140));
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar6 = GachaMgr::GetTargetGachaCost(pGVar5,param_2,this[0x148]);
  FUN_05476574(auStack_b0);
  if (this[0x148] == (GachaItem)0x0) {
    iVar4 = *(int *)(this + 0x13c);
    if (iVar4 != 2) {
      uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)
                         GachaItemConfig::IMAGE_UI_STORE_GACHA_TIMING_FREE);
      *(undefined8 *)(this + 0x110) = uVar7;
      iVar4 = *(int *)(this + 0x13c);
    }
    cVar2 = PlayerInfo::canFreeGachaNew(this_03,iVar4);
    if (cVar2 == '\0') {
      lVar12 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar4 = FUN_03def108(*(undefined4 *)(lVar12 + 0x44));
      if (iVar4 == 0) {
        cVar2 = IsAdvertiseEnable(this);
        if (cVar2 == '\0') goto LAB_03df1c90;
        pwVar11 = L"[ADVERTISEMENT_WATCH]";
        goto LAB_03df1ae4;
      }
    }
    pwVar11 = L"[GACHA_OPEN]";
  }
  else {
    lVar12 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar4 = FUN_03def108(*(undefined4 *)(lVar12 + 0x44));
    if (iVar4 != 4) {
LAB_03df1c90:
      std::string::string((string *)&local_40,"[GACHA_TEM_DRAW_PRICE]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)&local_40,(string *)L"{NUMBER}",(wchar_t *)(uVar6 & 0xffffffff),
                 iVar13);
      FUN_054766c8(auStack_b0,awStack_78);
      FUN_05476c50(awStack_78);
      std::string::~string((string *)&local_40);
      nop();
      lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)
                          GachaItemConfig::IMAGE_UI_STORE_COST_GEM);
      if (lVar12 != 0) {
        pPVar9 = *(PVZ2UIButton **)(this + 0xe0);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,lVar12,1);
        PVZ2UIButton::AddImage(pPVar9,(string *)&local_40,0);
      }
      goto LAB_03df1afc;
    }
    pwVar11 = L"[GACHA_INTRO_3_FREE_GOT]";
  }
LAB_03df1ae4:
  TodStringTranslate(pwVar11);
  FUN_054766c8(auStack_b0,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
LAB_03df1afc:
  pPVar9 = *(PVZ2UIButton **)(this + 0xe0);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar9,auStack_b0,uVar7,0);
  UpdateViewForKeyMode(this,*(undefined4 *)(this + 0x13c),this[0x148]);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyDrawFinish);
  Sexy::Delegate0::Delegate0<GachaItem,void(GachaItem::*)()>(aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyDrawFinish,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyTutorialResponseInner);
  Sexy::Delegate0::Delegate0<GachaItem,void(GachaItem::*)()>(aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyTutorialResponseInner,aDStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_e0 = local_40;
  uStack_d8 = uStack_38;
  local_d0 = local_30;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<GachaItem,void(GachaItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_e0);
  FUN_05476c50(auStack_b0);
  std::string::~string(asStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::Create(GachaType, bool, Sexy::RtWeakPtr<MagentoProductProps>) */

void GachaItem::Create(undefined4 param_1,undefined1 param_2,RtWeakPtrBase *param_3)

{
  GachaItem *pGVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  pGVar1 = ::operator_new(0x158);
  GachaItem(pGVar1,param_1,param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItem::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall GachaItem::onAdsFinish(GachaItem *this,int param_2)

{
  TGALogMgr *pTVar1;
  GachaMgr *pGVar2;
  undefined1 auStack_78 [16];
  string asStack_68 [8];
  string asStack_60 [8];
  DString aDStack_58 [16];
  DString aDStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GachaItem::onAdsFinish %d");
  if (param_2 == 0) {
    std::string::string(asStack_68,"2019_SUMMER");
    std::string::string(asStack_38,"AD_CLICK");
    DString::DString(aDStack_58,*(int *)(this + 0x13c));
    DString::operator_cast_to_string(aDStack_58);
    DString::DString(aDStack_48,0x3a);
    DString::operator_cast_to_string(aDStack_48);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_78)
    ;
    std::string::string(asStack_60,"");
    BehaviorLog::inGameBehavior(asStack_68,(vector *)avStack_20,asStack_60);
    std::string::~string(asStack_60);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    DString::~DString(aDStack_48);
    DString::~DString(aDStack_58);
    nop();
    std::string::~string(asStack_68);
    nop();
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_60,"2");
    std::string::string((string *)aDStack_58,"");
    std::string::string((string *)aDStack_48,"");
    std::string::string((string *)avStack_20,"");
    TGALogMgr::LogAD(pTVar1,asStack_60,aDStack_58,0x3a,aDStack_48,avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    std::string::~string((string *)aDStack_48);
    nop();
    std::string::~string((string *)aDStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    pGVar2 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::DoAdvertiseDraw(pGVar2,*(undefined4 *)(this + 0x13c),this[0x148]);
    RefreshAdvertisementTime(this);
  }
  else {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_60,"4");
    std::string::string((string *)aDStack_58,"");
    std::string::string((string *)aDStack_48,"");
    std::string::string((string *)avStack_20,"");
    TGALogMgr::LogAD(pTVar1,asStack_60,(string *)aDStack_58,0x3a,(string *)aDStack_48,
                     (string *)avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    std::string::~string((string *)aDStack_48);
    nop();
    std::string::~string((string *)aDStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

