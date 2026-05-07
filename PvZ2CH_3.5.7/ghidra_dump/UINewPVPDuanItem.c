// Class: UINewPVPDuanItem


/* UINewPVPDuanItem::UINewPVPDuanItem() */

void __thiscall UINewPVPDuanItem::UINewPVPDuanItem(UINewPVPDuanItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06651580;
  NewPVPSmallDuan::NewPVPSmallDuan((NewPVPSmallDuan *)(this + 0xd8));
  *(undefined8 *)(this + 0x110) = 0;
  return;
}


/* UINewPVPDuanItem::~UINewPVPDuanItem() */

void __thiscall UINewPVPDuanItem::~UINewPVPDuanItem(UINewPVPDuanItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06651580;
  NewPVPSmallDuan::~NewPVPSmallDuan((NewPVPSmallDuan *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UINewPVPDuanItem::~UINewPVPDuanItem() */

void __thiscall UINewPVPDuanItem::~UINewPVPDuanItem(UINewPVPDuanItem *this)

{
  ~UINewPVPDuanItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItem::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPDuanItem::Draw(UINewPVPDuanItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  UIBossMedalLottery *pUVar7;
  Image *pIVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  string asStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd8));
  std::operator+("IMAGE_UI_NEW_PVP_DUAN_BADGE_",asStack_28);
  pIVar6 = (Image *)StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  std::string::~string(asStack_28);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x50));
  Sexy::StrFormat("[NEW_PVP_DUAN_RANK_%d]",asStack_28,(ulong)*(uint *)(this + 0xd8));
  Sexy::ToSexyString((Sexy *)asStack_28,extraout_x1);
  TodStringTranslate((wstring *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_28);
  if (*(RtObject **)(this + 0x20) == (RtObject *)0x0) {
    iVar3 = 0;
  }
  else {
    pUVar7 = Sexy::RtObject::Cast<UIBossMedalLottery>(*(RtObject **)(this + 0x20));
    iVar3 = UINewPVPDuanPlane::CalculateSmallDuanNumOfBigDuan
                      ((UINewPVPDuanPlane *)pUVar7,*(int *)(this + 0xd8));
  }
  Sexy::StrFormat("[ROMAN_NUM_%d]",asStack_28,(ulong)(uint)(iVar3 - *(int *)(this + 0xdc)));
  Sexy::ToSexyString((Sexy *)asStack_28,extraout_x1_00);
  TodStringTranslate((wstring *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_28);
  if (*(RtObject **)(this + 0x20) != (RtObject *)0x0) {
    pUVar7 = Sexy::RtObject::Cast<UIBossMedalLottery>(*(RtObject **)(this + 0x20));
    cVar2 = UINewPVPDuanPlane::IsTopBigDuan((UINewPVPDuanPlane *)pUVar7,*(int *)(this + 0xd8));
    if (cVar2 != '\0') {
      FUN_05476574((string *)&local_18);
      FUN_054766c8(auStack_38,(string *)&local_18);
      FUN_05476c50((string *)&local_18);
    }
  }
  iVar3 = *(int *)(this + 0x50);
  iVar4 = FUN_0352e078(0x14);
  Sexy::Insets::Insets((Insets *)asStack_28,0,iVar3,iVar3,iVar4);
  FUN_0342e660(auStack_30,auStack_40,auStack_38);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_16_Outline;
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,asStack_28,uVar1,(string *)&local_18,5,1);
  FUN_05476c50(auStack_30);
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf8));
  if (cVar2 == '\0') {
    std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_DUAN_ARROW_UP");
    pIVar6 = (Image *)StringHelper::ToImage((string *)&local_18,true);
    std::string::~string((string *)&local_18);
    nop();
    std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_DUAN_ARROW_UP_LOCKED");
    pIVar8 = (Image *)StringHelper::ToImage((string *)&local_18,true);
    std::string::~string((string *)&local_18);
    nop();
    iVar3 = *(int *)(this + 0x50);
    iVar4 = FUN_0352e078(0xf);
    iVar5 = FUN_0352e078(0x14);
    Sexy::Insets::Insets((Insets *)&local_18,(iVar3 - iVar4) / 2,iVar3 + iVar5,iVar4,iVar4);
    if (*(int *)(this + 0xec) == 0) {
      pIVar6 = pIVar8;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar6,local_18,local_14,local_10,local_c);
    FUN_05476c50(auStack_38);
    FUN_05476c50(auStack_40);
  }
  else {
    FUN_05476c50(auStack_38);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuanItem::InitRewardsFrame() */

void __thiscall UINewPVPDuanItem::InitRewardsFrame(UINewPVPDuanItem *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  UIRewardFrame *pUVar5;
  UINewPVPDuanItemRewardFrame *pUVar6;
  NewPVPDuanRewardsData aNStack_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  NewPVPDuanRewardsData aNStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPDuanRewardsData::NewPVPDuanRewardsData(aNStack_58,(NewPVPDuanRewardsData *)(this + 0xe8));
  lVar3 = FUN_0352d844(local_48,local_40);
  if (lVar3 == 0) goto LAB_035388f8;
  NewPVPDuanRewardsData::NewPVPDuanRewardsData(aNStack_30,(NewPVPDuanRewardsData *)(this + 0xe8));
  uVar4 = UINewPVPDuanItemRewardFrame::CreateUIRewardsFrame(aNStack_30);
  *(undefined8 *)(this + 0x110) = uVar4;
  PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)aNStack_30);
  FUN_0352d7c8(*(long *)(this + 0x110) + 0x170,*(undefined4 *)(this + 0xf4));
  iVar1 = *(int *)(this + 0x50);
  (**(code **)(**(long **)(this + 0x110) + 0x198))
            (*(long **)(this + 0x110),0,*(int *)(this + 0x54) - iVar1,iVar1,iVar1);
  if (*(int *)(this + 0xec) == 0) {
    pUVar5 = *(UIRewardFrame **)(this + 0x110);
    std::string::string((string *)aNStack_30,"IMAGE_UI_NEW_PVP_DUAN_LOCK");
    UIRewardFrame::SetLockString(pUVar5,aNStack_30);
    std::string::~string((string *)aNStack_30);
    nop();
  }
  if (*(int *)(this + 0xe8) == 0) {
    lVar3 = UISingletonDialog<UINewPVPDuan>::GetSingletonPtr();
    cVar2 = FUN_0352d7d0(*(undefined1 *)(lVar3 + 400));
LAB_035389a4:
    if (cVar2 == '\0') {
      UINewPVPDuanItemRewardFrame::SetCanReward
                (*(UINewPVPDuanItemRewardFrame **)(this + 0x110),false);
      pUVar5 = *(UIRewardFrame **)(this + 0x110);
      std::string::string((string *)aNStack_30,"IMAGE_UI_NEW_PVP_DUAN_LOCK");
      UIRewardFrame::SetLockString(pUVar5,aNStack_30);
      std::string::~string((string *)aNStack_30);
      nop();
    }
    else {
      UINewPVPDuanItemRewardFrame::SetCanReward
                (*(UINewPVPDuanItemRewardFrame **)(this + 0x110),true);
      this[0x59] = (UINewPVPDuanItem)0x0;
    }
  }
  else {
    pUVar6 = *(UINewPVPDuanItemRewardFrame **)(this + 0x110);
    std::string::string((string *)aNStack_30,"IMAGE_UI_NEW_PVP_DUAN_DUI");
    UINewPVPDuanItemRewardFrame::SetObtainedString(pUVar6,aNStack_30);
    std::string::~string((string *)aNStack_30);
    nop();
    lVar3 = UISingletonDialog<UINewPVPDuan>::GetSingletonPtr();
    cVar2 = FUN_0352d7d0(*(undefined1 *)(lVar3 + 400));
    if (*(int *)(this + 0xe8) == 0) goto LAB_035389a4;
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
LAB_035388f8:
  PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)aNStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UINewPVPDuanItem::Init(NewPVPSmallDuan) */

void __thiscall UINewPVPDuanItem::Init(UINewPVPDuanItem *this,NewPVPSmallDuan *param_2)

{
  NewPVPSmallDuan::operator=((NewPVPSmallDuan *)(this + 0xd8),param_2);
  InitRewardsFrame(this);
  return;
}

