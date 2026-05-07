// Class: PlantGeneSequenceShopItem


/* PlantGeneSequenceShopItem::~PlantGeneSequenceShopItem() */

void __thiscall
PlantGeneSequenceShopItem::~PlantGeneSequenceShopItem(PlantGeneSequenceShopItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a06a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a09c8;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantGeneSequenceShopItem::~PlantGeneSequenceShopItem() */

void __thiscall
PlantGeneSequenceShopItem::~PlantGeneSequenceShopItem(PlantGeneSequenceShopItem *this)

{
  ~PlantGeneSequenceShopItem(this);
  AK::FreeHook(this);
  return;
}


/* PlantGeneSequenceShopItem::PlantGeneSequenceShopItem() */

void __thiscall
PlantGeneSequenceShopItem::PlantGeneSequenceShopItem(PlantGeneSequenceShopItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066a06a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a09c8;
  FUN_05476574(this + 0xe0);
  GeneSequenceShopItem::GeneSequenceShopItem((GeneSequenceShopItem *)(this + 0xf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneSequenceShopItem::InitView(GeneSequenceShopItem const&) */

void __thiscall
PlantGeneSequenceShopItem::InitView(PlantGeneSequenceShopItem *this,GeneSequenceShopItem *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  PVZ2UIButton *this_00;
  UIWidgetImage *pUVar7;
  UIWidgetText *this_01;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_b0 [8];
  GAME_ITEM_INFO aGStack_a8 [40];
  wstring awStack_80 [8];
  string asStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf8) = uVar8;
  local_8 = ___stack_chk_guard;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x108) = uVar8;
  GetGameItemInfo(iVar1,0x7fffffff,0);
  TodStringTranslate(awStack_80);
  FUN_054766c8(this + 0xe0,awStack_40);
  FUN_05476c50(awStack_40);
  plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame
                             (*(int *)(param_1 + 4),*(int *)(param_1 + 8),false);
  uVar2 = FUN_03800484(0x2d);
  uVar3 = FUN_03800484(0x1e);
  uVar4 = FUN_03800484(100);
  (**(code **)(*plVar6 + 0x198))(plVar6,uVar2,uVar3,uVar4,uVar4);
  lVar9 = *(long *)this;
  *(undefined1 *)((long)plVar6 + 0x6d) = 0;
  (**(code **)(lVar9 + 0x60))(this,plVar6);
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)awStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x16,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)awStack_40)
  ;
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab2700,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab2620,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)awStack_40);
  uVar2 = FUN_03800484(0x32);
  uVar3 = FUN_03800484(0x8c);
  uVar4 = FUN_03800484(0x5a);
  uVar5 = FUN_03800484(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  pUVar7 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06ab2570,9);
  UIWidgetImage::SetImage(pUVar7,(PVZ2UIImage *)awStack_40);
  uVar2 = FUN_03800484(5);
  uVar3 = FUN_03800484(3);
  uVar4 = FUN_03800484(0x28);
  uVar5 = FUN_03800484(0x23);
  (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar2,uVar3,uVar4,uVar5);
  lVar9 = *(long *)this_00;
  pUVar7[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar9 + 0x60))(this_00,pUVar7);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x10));
  Sexy::ToWString(asStack_78);
  this_01 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_01,awStack_40);
  FUN_05476c50(awStack_40);
  std::string::~string(asStack_78);
  FUN_037fe590(this_01 + 0xe0,3);
  UIWidgetText::SetFontIndex(this_01,0);
  pcVar10 = *(code **)(*(long *)this_01 + 0x170);
  Sexy::Color::Color((Color *)awStack_40,1);
  (*pcVar10)(this_01,0,awStack_40);
  uVar2 = FUN_03800484(0x32);
  uVar3 = FUN_03800484(0);
  uVar4 = FUN_03800484(0x28);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar4,uVar4);
  lVar9 = *(long *)this_00;
  this_01[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar9 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (*(int *)(param_1 + 0x1c) - 1U < 10) {
    Sexy::StrFormat("IMAGE_UI_PLANTGENE_RANK_%d",awStack_40);
    uVar8 = StringHelper::ToImage((string *)awStack_40,false);
    std::string::~string((string *)awStack_40);
    pUVar7 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar7);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,uVar8,2);
    UIWidgetImage::SetImage(pUVar7,(PVZ2UIImage *)awStack_40);
    uVar2 = FUN_03800484(0x6e);
    uVar3 = FUN_03800484(0x1e);
    uVar4 = FUN_03800484(0x32);
    uVar5 = FUN_03800484(0x3e);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar2,uVar3,uVar4,uVar5);
    lVar9 = *(long *)this;
    pUVar7[0x6d] = (UIWidgetImage)0x0;
    (**(code **)(lVar9 + 0x60))(this,pUVar7);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneSequenceShopItem::ConfirmBuy(UIMessageBox*, int) */

void __thiscall
PlantGeneSequenceShopItem::ConfirmBuy
          (PlantGeneSequenceShopItem *this,UIMessageBox *param_1,int param_2)

{
  NetworkMgr *this_00;
  long *plVar1;
  float fVar2;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  fVar2 = (float)PVZ_T();
  m_timer = fVar2 + 1.5;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x370))
            (plVar1,0xd,*(undefined4 *)(this + 0xf0),1,*(undefined4 *)(this + 0xfc),
             *(undefined4 *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneSequenceShopItem::ButtonDepress(int) */

void __thiscall
PlantGeneSequenceShopItem::ButtonDepress(PlantGeneSequenceShopItem *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar2;
  wchar_t *pwVar3;
  Image *pIVar4;
  long lVar5;
  float fVar6;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0x16) goto LAB_03806278;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_50,"mat_univeral_gene_sequence");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (iVar1 < *(int *)(this + 0x100)) {
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 == (UIMessageBox *)0x0) goto LAB_03806278;
    UIMessageBox::SetShowType(pUVar2,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar3 = L"[MATERIAL_NOT_ENOUGH]";
  }
  else {
    fVar6 = (float)PVZ_T();
    if (m_timer <= fVar6) {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GENE_SEQUENCE_BUY]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar2,pIVar4);
        std::string::~string(asStack_50);
        nop();
        lVar5 = UIMessageBox::GetButtonOK(pUVar2);
        thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ConfirmBuy);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<PlantGeneSequenceShopItem,void(PlantGeneSequenceShopItem::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar2,aDStack_38);
        FUN_05476c50(auStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
      goto LAB_03806278;
    }
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 == (UIMessageBox *)0x0) goto LAB_03806278;
    UIMessageBox::SetShowType(pUVar2,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    pwVar3 = L"[OPERATE_TOO_FREQUENTLY]";
  }
  TodStringTranslate(pwVar3);
  TodStringTranslate(L"[BUTTON_OK]");
  UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
  std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
  pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
  UIMessageBox::SetBackground(pUVar2,pIVar4);
  std::string::~string(asStack_50);
  nop();
  lVar5 = UIMessageBox::GetButtonCancel(pUVar2);
  thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
  FUN_05476c50(auStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
LAB_03806278:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantGeneSequenceShopItem::ButtonDepress(int) */

void __thiscall
PlantGeneSequenceShopItem::ButtonDepress(PlantGeneSequenceShopItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneSequenceShopItem::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneSequenceShopItem::Draw(PlantGeneSequenceShopItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03800484(0xbe);
  iVar2 = FUN_03800484(0xa0);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2670);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2d68);
  iVar1 = FUN_03800484(0x19);
  iVar2 = FUN_03800484(0x1e);
  iVar3 = FUN_03800484(0x8c);
  iVar4 = FUN_03800484(100);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  iVar1 = FUN_03800484(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar5,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

