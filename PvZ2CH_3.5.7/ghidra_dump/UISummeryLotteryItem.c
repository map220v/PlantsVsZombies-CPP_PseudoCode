// Class: UISummeryLotteryItem


/* UISummeryLotteryItem::GetItemID() */

undefined4 __thiscall UISummeryLotteryItem::GetItemID(UISummeryLotteryItem *this)

{
  return *(undefined4 *)(this + 0x308);
}


/* UISummeryLotteryItem::~UISummeryLotteryItem() */

void __thiscall UISummeryLotteryItem::~UISummeryLotteryItem(UISummeryLotteryItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06973fc0;
  *(undefined ***)(this + 0x198) = &PTR__UISummeryLotteryItem_06974330;
  *(undefined **)(this + 0x300) = &DAT_06974358;
  FUN_05476c50(this + 0x328);
  std::string::~string((string *)(this + 800));
  std::string::~string((string *)(this + 0x318));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to UISummeryLotteryItem::~UISummeryLotteryItem() */

void __thiscall UISummeryLotteryItem::~UISummeryLotteryItem(UISummeryLotteryItem *this)

{
  ~UISummeryLotteryItem(this + -0x198);
  return;
}


/* UISummeryLotteryItem::~UISummeryLotteryItem() */

void __thiscall UISummeryLotteryItem::~UISummeryLotteryItem(UISummeryLotteryItem *this)

{
  ~UISummeryLotteryItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISummeryLotteryItem::~UISummeryLotteryItem() */

void __thiscall UISummeryLotteryItem::~UISummeryLotteryItem(UISummeryLotteryItem *this)

{
  ~UISummeryLotteryItem(this + -0x198);
  return;
}


/* UISummeryLotteryItem::Setbackground(Sexy::Image*) */

void __thiscall UISummeryLotteryItem::Setbackground(UISummeryLotteryItem *this,Image *param_1)

{
  *(Image **)(this + 0x350) = param_1;
  return;
}


/* UISummeryLotteryItem::SetTransparent(bool) */

void __thiscall UISummeryLotteryItem::SetTransparent(UISummeryLotteryItem *this,bool param_1)

{
  this[0x310] = (UISummeryLotteryItem)param_1;
  return;
}


/* UISummeryLotteryItem::KillTip() */

void UISummeryLotteryItem::KillTip(void)

{
  if (m_tip != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,m_tip);
    m_tip = 0;
  }
  return;
}


/* UISummeryLotteryItem::ButtonDepress(int) */

ulong UISummeryLotteryItem::ButtonDepress(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (m_tip != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    uVar1 = (**(code **)(*gLawnApp + 0x150))(gLawnApp,m_tip);
    m_tip = 0;
  }
  return uVar1;
}


/* non-virtual thunk to UISummeryLotteryItem::ButtonDepress(int) */

void __thiscall UISummeryLotteryItem::ButtonDepress(UISummeryLotteryItem *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* UISummeryLotteryItem::ButtonMouseLeave(int) */

ulong UISummeryLotteryItem::ButtonMouseLeave(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (m_tip != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    uVar1 = (**(code **)(*gLawnApp + 0x150))(gLawnApp,m_tip);
    m_tip = 0;
  }
  return uVar1;
}


/* non-virtual thunk to UISummeryLotteryItem::ButtonMouseLeave(int) */

void __thiscall UISummeryLotteryItem::ButtonMouseLeave(UISummeryLotteryItem *this,int param_1)

{
  ButtonMouseLeave((int)this + -0x300);
  return;
}


/* UISummeryLotteryItem::GetItemType() */

undefined4 __thiscall UISummeryLotteryItem::GetItemType(UISummeryLotteryItem *this)

{
  return *(undefined4 *)(this + 0x330);
}


/* UISummeryLotteryItem::GetImage() */

undefined8 __thiscall UISummeryLotteryItem::GetImage(UISummeryLotteryItem *this)

{
  return *(undefined8 *)(this + 0x338);
}


/* UISummeryLotteryItem::GetImageScale() */

undefined4 __thiscall UISummeryLotteryItem::GetImageScale(UISummeryLotteryItem *this)

{
  return *(undefined4 *)(this + 0x340);
}


/* UISummeryLotteryItem::GetPlantType() */

undefined8 UISummeryLotteryItem::GetPlantType(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* UISummeryLotteryItem::GetPlantPieceType() */

undefined8 UISummeryLotteryItem::GetPlantPieceType(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* UISummeryLotteryItem::GetItemName() */

undefined8 UISummeryLotteryItem::GetItemName(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::GetItemTypeAndImage() */

void __thiscall UISummeryLotteryItem::GetItemTypeAndImage(UISummeryLotteryItem *this)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  NameMapperBase *this_00;
  undefined4 uVar4;
  char *__s;
  string asStack_40 [8];
  int local_38;
  int local_34;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x308);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0x59f4) {
    *(undefined4 *)(this + 0x330) = 4;
    std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_ZMATCH_TICKET");
    uVar2 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x338) = uVar2;
    std::string::~string((string *)&local_38);
    nop();
    __s = "[MAT_ZMATCH_TICKET]";
    goto LAB_04b95c28;
  }
  if (iVar1 < 0x59f5) {
    if (iVar1 == 0x59db) {
      *(undefined4 *)(this + 0x330) = 3;
      uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88d28);
      *(undefined8 *)(this + 0x338) = uVar2;
      *(undefined4 *)(this + 0x340) = 0x3e99999a;
      std::string::string(asStack_40,"[MAT_EVOLUTION_FIREFLOWER]");
      StringHelper::ToStringValue(asStack_40);
      FUN_054766c8(this + 0x328,&local_38);
      FUN_05476c50(&local_38);
      std::string::~string(asStack_40);
      nop();
      goto LAB_04b95b08;
    }
    if (iVar1 < 0x59dc) {
      if (iVar1 == 0xbc0) {
        *(undefined4 *)(this + 0x330) = 2;
        std::string::string((string *)&local_38,"IMAGE_UI_PROFILE_SELECT_GEM_ICON");
        uVar2 = StringHelper::ToImage((string *)&local_38,false);
        *(undefined8 *)(this + 0x338) = uVar2;
        std::string::~string((string *)&local_38);
        nop();
        pwVar3 = L"[GEM_STORE]";
        uVar4 = 0x3fe66666;
      }
      else {
        if (iVar1 != 0xfad) {
LAB_04b95dc0:
          this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
          std::string::string((string *)&local_38,"mat_BossRush_crystal_blue");
          iVar1 = NameMapperBase::GetIdForName(this_00,(string *)&local_38);
          std::string::~string((string *)&local_38);
          nop();
          if (*(int *)(this + 0x308) != iVar1) {
            GetGameItemInfo(*(int *)(this + 0x308),0x7fffffff,0);
            if (local_38 == 0) {
              *(undefined4 *)(this + 0x330) = 0;
            }
            else if (local_34 == 8) {
              uVar2 = StringHelper::ToImage(asStack_18,false);
              *(undefined8 *)(this + 0x338) = uVar2;
              *(undefined4 *)(this + 0x330) = 6;
              *(undefined4 *)(this + 0x340) = 0x3f000000;
              thunk_FUN_05477b9c(this + 0x328,auStack_10);
            }
            else if (local_34 == 0x20) {
              uVar2 = StringHelper::ToImage(asStack_18,false);
              *(undefined8 *)(this + 0x338) = uVar2;
              *(undefined4 *)(this + 0x330) = 7;
              *(undefined4 *)(this + 0x340) = 0x3f19999a;
              thunk_FUN_05477b9c(this + 0x328,auStack_10);
            }
            else if (local_34 == 2) {
              thunk_FUN_05475e00(this + 0x318,auStack_28);
              thunk_FUN_05475e00(this + 800,auStack_20);
              *(undefined4 *)(this + 0x330) = 5;
              thunk_FUN_05477b9c(this + 0x328,auStack_10);
            }
            GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
            goto LAB_04b95b08;
          }
          *(undefined4 *)(this + 0x330) = 4;
          std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_BOSSRUSH_CRYSTAL")
          ;
          uVar2 = StringHelper::ToImage((string *)&local_38,false);
          *(undefined8 *)(this + 0x338) = uVar2;
          std::string::~string((string *)&local_38);
          nop();
          __s = "[MAT_BOSSRUSH_CRYSTAL]";
          goto LAB_04b95c28;
        }
        *(undefined4 *)(this + 0x330) = 1;
        std::string::string((string *)&local_38,"IMAGE_ENDLEVEL_MONEYBAG");
        uVar2 = StringHelper::ToImage((string *)&local_38,false);
        *(undefined8 *)(this + 0x338) = uVar2;
        std::string::~string((string *)&local_38);
        nop();
        uVar4 = 0x3f333333;
        pwVar3 = L"[COIN_STORE]";
      }
      *(undefined4 *)(this + 0x340) = uVar4;
      TodStringTranslate(pwVar3);
      FUN_054766c8(this + 0x328,&local_38);
      FUN_05476c50(&local_38);
      goto LAB_04b95b08;
    }
    if (iVar1 == 0x59ea) {
      *(undefined4 *)(this + 0x330) = 4;
      std::string::string((string *)&local_38,"IMAGE_UI_ACTIVESUMMERY_NATIONAL_CURRENCY");
      uVar2 = StringHelper::ToImage((string *)&local_38,false);
      *(undefined8 *)(this + 0x338) = uVar2;
      std::string::~string((string *)&local_38);
      nop();
      __s = "[MAT_NATIONAL_CURRENCY]";
    }
    else {
      if (iVar1 != 0x59ee) goto LAB_04b95dc0;
      *(undefined4 *)(this + 0x330) = 4;
      std::string::string((string *)&local_38,"IMAGE_UI_ACTIVESUMMERY_NATIONAL_CURRENCY");
      uVar2 = StringHelper::ToImage((string *)&local_38,false);
      *(undefined8 *)(this + 0x338) = uVar2;
      std::string::~string((string *)&local_38);
      nop();
      __s = "[MAT_CHRISMAS_CURRENCY]";
    }
LAB_04b95c28:
    *(undefined4 *)(this + 0x340) = 0x3e99999a;
  }
  else if (iVar1 == 0x59f8) {
    *(undefined4 *)(this + 0x330) = 4;
    std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_COLLECT_COIN_C");
    uVar2 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x338) = uVar2;
    std::string::~string((string *)&local_38);
    nop();
    __s = "[MAT_COLLECT_COIN_C]";
    *(undefined4 *)(this + 0x340) = 0x3f800000;
  }
  else if (iVar1 < 0x59f9) {
    if (iVar1 == 0x59f6) {
      *(undefined4 *)(this + 0x330) = 4;
      std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_COLLECT_COIN_A");
      uVar2 = StringHelper::ToImage((string *)&local_38,false);
      *(undefined8 *)(this + 0x338) = uVar2;
      std::string::~string((string *)&local_38);
      nop();
      __s = "[MAT_COLLECT_COIN_A]";
      *(undefined4 *)(this + 0x340) = 0x3f800000;
    }
    else {
      if (iVar1 != 0x59f7) goto LAB_04b95dc0;
      *(undefined4 *)(this + 0x330) = 4;
      std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_COLLECT_COIN_B");
      uVar2 = StringHelper::ToImage((string *)&local_38,false);
      *(undefined8 *)(this + 0x338) = uVar2;
      std::string::~string((string *)&local_38);
      nop();
      __s = "[MAT_COLLECT_COIN_B]";
      *(undefined4 *)(this + 0x340) = 0x3f800000;
    }
  }
  else if (iVar1 == 0x59f9) {
    *(undefined4 *)(this + 0x330) = 4;
    std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_COLLECT_COIN_D");
    uVar2 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x338) = uVar2;
    std::string::~string((string *)&local_38);
    nop();
    __s = "[MAT_COLLECT_COIN_D]";
    *(undefined4 *)(this + 0x340) = 0x3f800000;
  }
  else {
    if (iVar1 != 0x59fa) goto LAB_04b95dc0;
    *(undefined4 *)(this + 0x330) = 4;
    std::string::string((string *)&local_38,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_COLLECT_COIN_E");
    uVar2 = StringHelper::ToImage((string *)&local_38,false);
    *(undefined8 *)(this + 0x338) = uVar2;
    std::string::~string((string *)&local_38);
    nop();
    __s = "[MAT_COLLECT_COIN_E]";
    *(undefined4 *)(this + 0x340) = 0x3f800000;
  }
  std::string::string(asStack_40,__s);
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(this + 0x328,&local_38);
  FUN_05476c50(&local_38);
  std::string::~string(asStack_40);
  nop();
LAB_04b95b08:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISummeryLotteryItem::ShowTip(std::wstring const&, Sexy::SexyVector2 const&) */

void UISummeryLotteryItem::ShowTip(wstring *param_1,SexyVector2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  UISummeryLotteryItemTip *pUVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  
  if (m_tip == (UISummeryLotteryItemTip *)0x0) {
    pUVar3 = ::operator_new(0xe0);
    *(undefined8 *)pUVar3 = 0;
    *(undefined8 *)(pUVar3 + 8) = 0;
    *(undefined8 *)(pUVar3 + 0x10) = 0;
    *(undefined8 *)(pUVar3 + 0x18) = 0;
    *(undefined8 *)(pUVar3 + 0x20) = 0;
    *(undefined8 *)(pUVar3 + 0x28) = 0;
    *(undefined8 *)(pUVar3 + 0x30) = 0;
    *(undefined8 *)(pUVar3 + 0x38) = 0;
    *(undefined8 *)(pUVar3 + 0x40) = 0;
    *(undefined8 *)(pUVar3 + 0x48) = 0;
    *(undefined8 *)(pUVar3 + 0x50) = 0;
    *(undefined8 *)(pUVar3 + 0x58) = 0;
    *(undefined8 *)(pUVar3 + 0x60) = 0;
    *(undefined8 *)(pUVar3 + 0x68) = 0;
    *(undefined8 *)(pUVar3 + 0x70) = 0;
    *(undefined8 *)(pUVar3 + 0x78) = 0;
    *(undefined8 *)(pUVar3 + 0x80) = 0;
    *(undefined8 *)(pUVar3 + 0x88) = 0;
    *(undefined8 *)(pUVar3 + 0x90) = 0;
    *(undefined8 *)(pUVar3 + 0x98) = 0;
    *(undefined8 *)(pUVar3 + 0xa0) = 0;
    *(undefined8 *)(pUVar3 + 0xa8) = 0;
    *(undefined8 *)(pUVar3 + 0xb0) = 0;
    *(undefined8 *)(pUVar3 + 0xb8) = 0;
    *(undefined8 *)(pUVar3 + 0xc0) = 0;
    *(undefined8 *)(pUVar3 + 200) = 0;
    *(undefined8 *)(pUVar3 + 0xd0) = 0;
    *(undefined8 *)(pUVar3 + 0xd8) = 0;
    UISummeryLotteryItemTip::UISummeryLotteryItemTip(pUVar3);
    m_tip = pUVar3;
    *(uint *)(pUVar3 + 0x60) = *(uint *)(pUVar3 + 0x60) | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),pUVar3);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),m_tip);
  }
  PuzzleTip::SetTip(m_tip,param_1);
  pUVar3 = m_tip;
  fVar6 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  pcVar4 = *(code **)(*(long *)m_tip + 0x198);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e98);
  uVar1 = LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e98);
  uVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  (*pcVar4)(pUVar3,(int)fVar6,(int)fVar5,uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::ButtonPress(int) */

void UISummeryLotteryItem::ButtonPress(int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  wstring awStack_20 [8];
  int local_18;
  int local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  plVar5 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L" X%d",aFStack_10,(ulong)*(uint *)((long)plVar5 + 0x30c));
  std::operator+((wstring *)(plVar5 + 0x65),(wstring *)aFStack_10);
  FUN_05476c50(aFStack_10);
  (**(code **)(*plVar5 + 0xd0))(&local_18,plVar5);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e98);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e98);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  lVar1 = plVar5[10];
  iVar4 = FUN_04b9259c(5);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,(float)(local_18 + ((int)lVar1 - iVar2) / 2),
             (float)((local_14 - iVar3) + iVar4));
  ShowTip(awStack_20,(SexyVector2 *)aFStack_10);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UISummeryLotteryItem::ButtonPress(int) */

void __thiscall UISummeryLotteryItem::ButtonPress(UISummeryLotteryItem *this,int param_1)

{
  ButtonPress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::GetPlantPieceRare(int) */

void UISummeryLotteryItem::GetPlantPieceRare(int param_1)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  undefined4 uVar5;
  string asStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = *(undefined4 *)(lVar4 + 0xd0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::GetFrame() */

void __thiscall UISummeryLotteryItem::GetFrame(UISummeryLotteryItem *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  PlantAccessoryMgr *this_00;
  size_t in_x2;
  string asStack_50 [8];
  string asStack_48 [8];
  TGAAccumulatedLoginData aTStack_40 [32];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_50);
  switch(*(undefined4 *)(this + 0x330)) {
  case 1:
switchD_04b971ec_caseD_1:
    std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_BLUE",in_x2);
    break;
  case 2:
switchD_04b971ec_caseD_2:
    std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_PURPLE",in_x2);
    break;
  case 3:
  case 4:
switchD_04b971ec_caseD_3:
    std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_GOLD",in_x2);
    break;
  case 5:
    uVar2 = GetPlantPieceRare((int)this);
    switch(uVar2) {
    case 0:
      std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_NORMAL",in_x2);
      break;
    case 1:
      goto switchD_04b971ec_caseD_6;
    case 2:
      goto switchD_04b971ec_caseD_1;
    case 3:
      goto switchD_04b971ec_caseD_2;
    case 4:
      goto switchD_04b971ec_caseD_3;
    }
    break;
  case 6:
switchD_04b971ec_caseD_6:
    std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_GREEN",in_x2);
    break;
  case 7:
    iVar1 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetAccessoryUIInfo(this_00,asStack_48);
    switch(local_20) {
    case 0:
      std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_GREEN",in_x2);
      break;
    case 1:
      std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_BLUE",in_x2);
      break;
    case 2:
      std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_PURPLE",in_x2);
      break;
    case 3:
      std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_GOLD",in_x2);
    }
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
    std::string::~string(asStack_48);
    std::string::append(asStack_50,"IMAGE_UI_ACCESSORY_ICON_BG_GREEN",in_x2);
  }
  uVar3 = StringHelper::ToImage(asStack_50,false);
  *(undefined8 *)(this + 0x348) = uVar3;
  std::string::~string(asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::UISummeryLotteryItem(int, int) */

void __thiscall
UISummeryLotteryItem::UISummeryLotteryItem(UISummeryLotteryItem *this,int param_1,int param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)0x0,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined ***)(this + 0x198) = &PTR__UISummeryLotteryItem_06974330;
  *(undefined ***)this = &PTR_GetClass_06973fc0;
  *(undefined **)(this + 0x300) = &DAT_06974358;
  *(undefined4 *)(this + 0x30c) = 0;
  this[0x310] = (UISummeryLotteryItem)0x0;
  Set8BytesTo0(this + 0x318);
  Set8BytesTo0(this + 800);
  FUN_05476574(this + 0x328);
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  this[0x59] = (UISummeryLotteryItem)0x0;
  *(int *)(this + 0x308) = param_1;
  *(int *)(this + 0x30c) = param_2;
  *(undefined4 *)(this + 0x340) = 0x3f800000;
  GetItemTypeAndImage(this);
  GetFrame(this);
  *(ButtonListener **)(this + 0x168) = (ButtonListener *)(this + 0x300);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISummeryLotteryItem::Draw(Sexy::Graphics*) */

void __thiscall UISummeryLotteryItem::Draw(UISummeryLotteryItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar10;
  long lVar11;
  Image *pIVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x310] == (UISummeryLotteryItem)0x0) {
    nop();
    if (*(Image **)(this + 0x350) != (Image *)0x0) {
      Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x350),0,0);
    }
    pIVar12 = *(Image **)(this + 0x348);
    if (pIVar12 != (Image *)0x0) {
      iVar5 = FUN_04b9259c(4);
      Sexy::Graphics::DrawImage(param_1,pIVar12,iVar5,iVar5);
    }
    if (*(LotteryResultProgressBar **)(this + 0x338) != (LotteryResultProgressBar *)0x0) {
      iVar5 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x338));
      fVar13 = *(float *)(this + 0x340);
      iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x338));
      fVar14 = *(float *)(this + 0x340);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x350));
      iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x350));
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0x338),(iVar7 - (int)((float)iVar5 * fVar13)) / 2,
                 (iVar8 - (int)((float)iVar6 * fVar14)) / 2,(int)((float)iVar5 * fVar13),
                 (int)((float)iVar6 * fVar14));
    }
    if (*(int *)(this + 0x330) == 5) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x318));
      iVar9 = FUN_04b9259c(10);
      iVar5 = *(int *)(this_01 + 0x10);
      iVar6 = *(int *)(this_01 + 0x30);
      iVar7 = *(int *)(this_01 + 0x34);
      iVar8 = *(int *)(this_01 + 0x28);
      iVar1 = *(int *)(this_01 + 0x2c);
      iVar2 = *(int *)(this_01 + 0x14);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      fVar14 = (float)(int)((float)iVar9 + (float)-iVar6 * 0.55);
      fVar13 = (float)(int)((float)iVar9 + (float)-iVar7 * 0.55);
      Sexy::Insets::Insets
                ((Insets *)aCStack_18,(int)(fVar14 + (float)*(int *)(this_01 + 0x30) * 0.55),
                 (int)(fVar13 + (float)*(int *)(this_01 + 0x34) * 0.55),(int)((float)iVar8 * 0.55),
                 (int)((float)iVar1 * 0.55));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar10,(TRect *)aCStack_18,(TRect *)(this_01 + 0x20));
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar4) {
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
        Sexy::Insets::Insets
                  ((Insets *)aCStack_18,(int)(fVar14 + (float)*(int *)(this_01 + 0x18) * 0.55),
                   (int)(fVar13 + (float)*(int *)(this_01 + 0x1c) * 0.55),(int)((float)iVar5 * 0.55)
                   ,(int)((float)iVar2 * 0.55));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar10,(TRect *)aCStack_18,(TRect *)(this_01 + 8));
      }
    }
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x30c));
    Sexy::Insets::Insets
              (aIStack_28,0,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
               *(int *)(this + 0x54) / 2);
    uVar3 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

