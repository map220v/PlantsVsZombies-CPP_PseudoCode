// Class: UpdateNewsDisplayWidget


/* UpdateNewsDisplayWidget::~UpdateNewsDisplayWidget() */

void __thiscall UpdateNewsDisplayWidget::~UpdateNewsDisplayWidget(UpdateNewsDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06641c40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06641f68;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UpdateNewsDisplayWidget::~UpdateNewsDisplayWidget() */

void __thiscall UpdateNewsDisplayWidget::~UpdateNewsDisplayWidget(UpdateNewsDisplayWidget *this)

{
  ~UpdateNewsDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* UpdateNewsDisplayWidget::UpdateNewsDisplayWidget() */

void __thiscall UpdateNewsDisplayWidget::UpdateNewsDisplayWidget(UpdateNewsDisplayWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06641c40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06641f68;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpdateNewsDisplayWidget::ButtonDepress(int) */

void __thiscall UpdateNewsDisplayWidget::ButtonDepress(UpdateNewsDisplayWidget *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x14e) {
switchD_0348c5c4_caseD_0:
    GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr,5,5);
  }
  else {
    if (param_1 != 0x150) {
      if (param_1 == 0x14f) {
        Sexy::LazySingleton<QuickJumpUtil>::GetInstance();
        QuickJumpUtil::ShowArtifactCultivation();
      }
      goto switchD_0348c5c4_caseD_3;
    }
    switch(*(undefined4 *)(this + 0x104)) {
    case 0:
    case 5:
      goto switchD_0348c5c4_caseD_0;
    case 1:
      Sexy::LazySingleton<QuickJumpUtil>::GetInstance();
      QuickJumpUtil::ShowPlantFamily();
      break;
    case 2:
      std::string::string(asStack_10,"");
      PlantWarsUtils::GoToPlantWarsWorldMap(asStack_10);
      std::string::~string(asStack_10);
      nop();
      UISingletonDialog<UIUpdateNews>::CloseDialog();
      UISingletonDialog<UIGiftFoReturn>::CloseDialog();
    }
  }
switchD_0348c5c4_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UpdateNewsDisplayWidget::ButtonDepress(int) */

void __thiscall UpdateNewsDisplayWidget::ButtonDepress(UpdateNewsDisplayWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpdateNewsDisplayWidget::InitView(int) */

void __thiscall UpdateNewsDisplayWidget::InitView(UpdateNewsDisplayWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets *__n;
  long *plVar6;
  PVZ2UIButton *pPVar7;
  code *pcVar8;
  string asStack_98 [8];
  wstring awStack_90 [8];
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x104) = param_1;
  if (((uint)param_1 < 3) || (param_1 == 5)) {
    *(undefined4 *)(this + 0x100) = 0;
  }
  else if (param_1 == 3) {
    *(undefined4 *)(this + 0x100) = 1;
  }
  else if (param_1 == 4) {
    *(undefined4 *)(this + 0x100) = 2;
  }
  iVar1 = FUN_0348b398(0x172);
  iVar2 = FUN_0348b398(0x14);
  iVar3 = FUN_0348b398(0xb1);
  iVar4 = FUN_0348b398(0x8c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = uStack_38;
  iVar1 = FUN_0348b398(400);
  iVar2 = FUN_0348b398(0xb4);
  iVar3 = FUN_0348b398(100);
  iVar4 = FUN_0348b398(0x32);
  Sexy::Insets::Insets(aIStack_88,iVar1,iVar2,iVar3,iVar4);
  pPVar7 = *(PVZ2UIButton **)(this + 0xf0);
  if (pPVar7 == (PVZ2UIButton *)0x0) {
    __n = (Insets *)&local_40;
    std::string::string(asStack_98,"[GO_TO_EVENT]");
    nop();
    iVar1 = *(int *)(this + 0x100);
    if (iVar1 == 1) {
      iVar2 = 0x14e;
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2348);
      *(undefined8 *)(this + 0xf8) = uVar5;
    }
    else if (iVar1 == 0) {
      iVar2 = 0x150;
      std::string::append(asStack_98,"[GIFT_RETURN_SEE_UPDATE_NEWS_GO]",(size_t)__n);
    }
    else {
      iVar2 = 0;
      if (iVar1 == 2) {
        iVar2 = 0x14f;
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa20f8);
        *(undefined8 *)(this + 0xf8) = uVar5;
      }
    }
    Sexy::ToWString(asStack_98);
    TodStringTranslate(awStack_90);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,iVar2,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,(Color *)&local_40
              );
    *(PVZ2UIButton **)(this + 0xf0) = pPVar7;
    FUN_05476c50((wstring *)aPStack_78);
    FUN_05476c50(awStack_90);
    std::string::~string(asStack_98);
    pPVar7 = *(PVZ2UIButton **)(this + 0xf0);
    if (pPVar7 == (PVZ2UIButton *)0x0) goto LAB_0348d64c;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aa2280,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa2230,3);
  PVZ2UIButton::SetDialogStates(pPVar7,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0xf0) + 0x1a0))(*(long **)(this + 0xf0),aIStack_88);
  plVar6 = *(long **)(this + 0xf0);
  pcVar8 = *(code **)(*plVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar6,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
LAB_0348d64c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpdateNewsDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall UpdateNewsDisplayWidget::Draw(UpdateNewsDisplayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined8 uVar7;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa22f8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar6 = *(Image **)(this + 0xf8);
  if (pIVar6 != (Image *)0x0) {
    iVar1 = FUN_0348b398(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,iVar1,0,*(int *)(this + 0x50) / 2,*(int *)(this + 0x54));
  }
  iVar1 = *(int *)(this + 0x100);
  if (iVar1 == 2) {
    TodStringTranslate(L"[GIFT_FOR_RETURN_UPDATE_NEW_3_NAME]");
    iVar2 = FUN_0348b398(0x50);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_0348b398(0x1e);
    iVar4 = FUN_0348b398(0x96);
    iVar5 = FUN_0348b398(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar2 + iVar1 / 2,iVar3,iVar4,iVar5);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,(Insets *)aCStack_18,3,1);
    FUN_05476c50(auStack_30);
    TodStringTranslate(L"[GIFT_FOR_RETURN_UPDATE_NEW_3]");
    iVar2 = FUN_0348b398(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_0348b398(0x37);
    iVar4 = FUN_0348b398(0xe6);
    iVar5 = FUN_0348b398(0x96);
    Sexy::Insets::Insets(aIStack_28,iVar2 + iVar1 / 2,iVar3,iVar4,iVar5);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Insets::Insets((Insets *)aCStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,(Insets *)aCStack_18,3,1);
    FUN_05476c50(auStack_30);
    iVar1 = *(int *)(this + 0x100);
  }
  if (iVar1 == 1) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa21f8);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = *(int *)(this + 0x100);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0x104);
    if ((iVar1 == 5) || (iVar1 == 0)) {
      TodStringTranslate(L"[GIFT_FOR_RETURN_UPDATE_NEW_1]");
      iVar1 = FUN_0348b398(10);
      iVar2 = FUN_0348b398(0xbe);
      iVar3 = FUN_0348b398(0x1c2);
      iVar4 = FUN_0348b398(0x32);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
      uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,3,1);
      FUN_05476c50(auStack_30);
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2098);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
    else {
      if (iVar1 == 1) {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2750;
      }
      else {
        if (iVar1 != 2) goto LAB_03493e9c;
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2438;
      }
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
LAB_03493e9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

