// Class: DragonTreasureSelectItem


/* DragonTreasureSelectItem::~DragonTreasureSelectItem() */

void __thiscall DragonTreasureSelectItem::~DragonTreasureSelectItem(DragonTreasureSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06644240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06644560;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DragonTreasureSelectItem::~DragonTreasureSelectItem() */

void __thiscall DragonTreasureSelectItem::~DragonTreasureSelectItem(DragonTreasureSelectItem *this)

{
  ~DragonTreasureSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* DragonTreasureSelectItem::DragonTreasureSelectItem() */

void __thiscall DragonTreasureSelectItem::DragonTreasureSelectItem(DragonTreasureSelectItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06644240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06644560;
  return;
}


/* DragonTreasureSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall DragonTreasureSelectItem::TouchEnded(DragonTreasureSelectItem *this,Touch *param_1)

{
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (DragonTreasureSelectItem)0x0)) {
    DragonTreasureSelectLine::SelectItem
              (*(DragonTreasureSelectLine **)(this + 0xf0),*(int *)(this + 0xe4));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonTreasureSelectItem::InitView(DragonTreasureSelectLine*, int, DragonTreasureItemData) */

void DragonTreasureSelectItem::InitView
               (long *param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  long *plVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  undefined8 uVar5;
  NameMapperBase *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar6;
  code *pcVar7;
  int local_30;
  int iStack_2c;
  string asStack_18 [16];
  long local_8;
  
  param_1[0x1e] = param_2;
  *(undefined4 *)((long)param_1 + 0xe4) = param_3;
  local_30 = (int)param_4;
  iStack_2c = (int)((ulong)param_4 >> 0x20);
  *(bool *)(param_1 + 0x1d) = param_5 != 2;
  local_8 = ___stack_chk_guard;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  plVar2 = (long *)UIRewardFrame::CreateUIRewardFrame(local_30,iStack_2c,true);
  (**(code **)(*plVar2 + 0x198))(plVar2,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  lVar6 = *param_1;
  *(undefined1 *)((long)plVar2 + 0x6d) = 0;
  (**(code **)(lVar6 + 0x60))(param_1,plVar2);
  std::string::string(asStack_18,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar3 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x198))
            (pUVar3,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  lVar6 = *param_1;
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar6 + 0x60))(param_1,pUVar3);
  TodStringTranslate(L"[LUCKBAG_SELECT]");
  pUVar4 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar4,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x198))
            (pUVar4,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  FUN_03499ad0(pUVar4 + 0xe8,uVar5);
  FUN_0349a228(pUVar4 + 0xe0);
  pcVar7 = *(code **)(*(long *)pUVar4 + 0x170);
  Sexy::Color::Color((Color *)asStack_18,1);
  (*pcVar7)(pUVar4,0,asStack_18);
  lVar6 = *(long *)pUVar3;
  pUVar4[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar6 + 0x60))(pUVar3,pUVar4);
  lVar6 = *(long *)pUVar3;
  param_1[0x1f] = (long)pUVar3;
  (**(code **)(lVar6 + 0x158))(pUVar3,0);
  this = (NameMapperBase *)ArtifactMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this,local_30);
  if (cVar1 == '\0') {
LAB_0349c318:
    if ((char)param_1[0x1d] != '\0') goto LAB_0349c320;
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = PlayerInfo::IsArtifactUnlocked(this_01,local_30);
    if (cVar1 == '\0') goto LAB_0349c318;
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  std::string::string(asStack_18,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  pUVar3 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x198))
            (pUVar3,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  lVar6 = *param_1;
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar6 + 0x60))(param_1,pUVar3);
  TodStringTranslate(L"[PARTY_ASSIST_HAS_GOT]");
  pUVar4 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar4,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x198))
            (pUVar4,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  FUN_03499ad0(pUVar4 + 0xe8,uVar5);
  FUN_0349a228(pUVar4 + 0xe0);
  pcVar7 = *(code **)(*(long *)pUVar4 + 0x170);
  Sexy::Color::Color((Color *)asStack_18,1);
  (*pcVar7)(pUVar4,0,asStack_18);
  lVar6 = *(long *)pUVar3;
  pUVar4[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar6 + 0x60))(pUVar3,pUVar4);
LAB_0349c320:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

