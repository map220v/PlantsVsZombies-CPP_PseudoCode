// Class: WishingPoolSelectItem


/* WishingPoolSelectItem::~WishingPoolSelectItem() */

void __thiscall WishingPoolSelectItem::~WishingPoolSelectItem(WishingPoolSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06634470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06634790;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WishingPoolSelectItem::~WishingPoolSelectItem() */

void __thiscall WishingPoolSelectItem::~WishingPoolSelectItem(WishingPoolSelectItem *this)

{
  ~WishingPoolSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* WishingPoolSelectItem::WishingPoolSelectItem() */

void __thiscall WishingPoolSelectItem::WishingPoolSelectItem(WishingPoolSelectItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06634470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06634790;
  return;
}


/* WishingPoolSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall WishingPoolSelectItem::TouchEnded(WishingPoolSelectItem *this,Touch *param_1)

{
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (WishingPoolSelectItem)0x0)) {
    WishingPoolSelectLine::SelectItem
              (*(WishingPoolSelectLine **)(this + 0xf0),*(int *)(this + 0xe4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolSelectItem::InitView(WishingPoolSelectLine*, int, S2C_BonusInfo) */

void __thiscall
WishingPoolSelectItem::InitView
          (WishingPoolSelectItem *this,undefined8 param_1,undefined4 param_2,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  undefined8 uVar3;
  NameMapperBase *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  long lVar4;
  code *pcVar5;
  int local_30;
  int iStack_2c;
  string asStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0xf0) = param_1;
  local_30 = (int)param_4;
  iStack_2c = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(this + 0xe4) = param_2;
  this[0xe8] = (WishingPoolSelectItem)0x1;
  local_8 = ___stack_chk_guard;
  this[0xe9] = (WishingPoolSelectItem)0x0;
  plVar2 = (long *)UIRewardFrame::CreateUIRewardFrame(local_30,iStack_2c,true);
  (**(code **)(*plVar2 + 0x198))
            (plVar2,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  lVar4 = *(long *)this;
  *(undefined1 *)((long)plVar2 + 0x6d) = 0;
  (**(code **)(lVar4 + 0x60))(this,plVar2);
  std::string::string(asStack_18,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  lVar4 = *(long *)this;
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar4 + 0x60))(this,this_00);
  TodStringTranslate(L"[LUCKBAG_SELECT]");
  this_01 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_01,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  FUN_03450d18(this_01 + 0xe8,uVar3);
  FUN_03450d20(this_01 + 0xe0,5);
  pcVar5 = *(code **)(*(long *)this_01 + 0x170);
  Sexy::Color::Color((Color *)asStack_18,1);
  (*pcVar5)(this_01,0,asStack_18);
  lVar4 = *(long *)this_00;
  this_01[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar4 + 0x60))(this_00,this_01);
  lVar4 = *(long *)this_00;
  *(UIWidgetImage **)(this + 0xf8) = this_00;
  (**(code **)(lVar4 + 0x158))(this_00,0);
  this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_02,local_30);
  if (cVar1 != '\0') {
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this_04,local_30);
    if (cVar1 != '\0') {
      this[0xe8] = (WishingPoolSelectItem)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

