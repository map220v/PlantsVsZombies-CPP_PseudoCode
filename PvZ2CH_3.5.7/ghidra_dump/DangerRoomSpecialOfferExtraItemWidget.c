// Class: DangerRoomSpecialOfferExtraItemWidget


/* DangerRoomSpecialOfferExtraItemWidget::~DangerRoomSpecialOfferExtraItemWidget() */

void __thiscall
DangerRoomSpecialOfferExtraItemWidget::~DangerRoomSpecialOfferExtraItemWidget
          (DangerRoomSpecialOfferExtraItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069c0e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c1130;
  FUN_05476c50(this + 0x110);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DangerRoomSpecialOfferExtraItemWidget::~DangerRoomSpecialOfferExtraItemWidget() */

void __thiscall
DangerRoomSpecialOfferExtraItemWidget::~DangerRoomSpecialOfferExtraItemWidget
          (DangerRoomSpecialOfferExtraItemWidget *this)

{
  ~DangerRoomSpecialOfferExtraItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomSpecialOfferExtraItemWidget::DangerRoomSpecialOfferExtraItemWidget(DangerRoomSpecialOfferExtraUI*)
    */

void __thiscall
DangerRoomSpecialOfferExtraItemWidget::DangerRoomSpecialOfferExtraItemWidget
          (DangerRoomSpecialOfferExtraItemWidget *this,DangerRoomSpecialOfferExtraUI *param_1)

{
  undefined8 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069c0e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c1130;
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x110);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99e60);
  *(undefined8 *)(this + 0xf8) = uVar1;
  FUN_054772c4(this + 0x110,&DAT_056f11a8);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraItemWidget::InitView(int, DangerRoomSpecialOfferExtraItemData) */

void __thiscall
DangerRoomSpecialOfferExtraItemWidget::InitView
          (DangerRoomSpecialOfferExtraItemWidget *this,int param_1,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  SalesProgressBar *this_00;
  DangerRoomSpecialOfferExtraButton *this_01;
  int iVar11;
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (DangerRoomSpecialOfferExtraItemWidget)0x0;
  iVar1 = FUN_04db7dbc(10);
  iVar11 = *(int *)(this + 0x54);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
  iVar11 = iVar11 + iVar1 * -2;
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf8));
  iVar4 = FUN_04db7dbc(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 + iVar11 + iVar4,(*(int *)(this + 0x54) - iVar3) / 2,iVar2,
             iVar3);
  *(undefined8 *)(this + 0xe4) = local_40;
  *(undefined8 *)(this + 0xec) = uStack_38;
  iVar3 = FUN_04db7dbc(10);
  iVar4 = FUN_04db7dbc(200);
  iVar2 = iVar1 + iVar11 + iVar3 * 2 + iVar2;
  iVar5 = FUN_04db7dbc(100);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3 + iVar11 + iVar2,(*(int *)(this + 0x54) - iVar5) / 2,iVar4,
             iVar5);
  uVar7 = *param_3;
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  piVar8 = (int *)FUN_04db7b68(uVar7,0);
  plVar9 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar8,piVar8[1],true);
  (**(code **)(*plVar9 + 0x198))(plVar9,iVar1,iVar1,iVar11,iVar11);
  piVar8 = (int *)FUN_04db7b68(*param_3,1);
  plVar10 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar8,piVar8[1],true);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar2,iVar1,iVar11,iVar11);
  (**(code **)(*(long *)this + 0x60))(this,plVar9);
  (**(code **)(*(long *)this + 0x60))(this,plVar10);
  std::string::string(asStack_78,"[DANGERROOM_SPECIAL_OFFER_EXTRA_PRICE_DESC_NUM]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_78,(string *)&DAT_056fbd78,
             (wchar_t *)(ulong)*(uint *)((long)param_3 + 0x1c),iVar11);
  FUN_054766c8(this + 0x110,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  std::string::~string(asStack_78);
  nop();
  if (*(uint *)(param_3 + 3) < 2) {
    this_01 = ::operator_new(0x368);
    DangerRoomSpecialOfferExtraButton::DangerRoomSpecialOfferExtraButton(this_01,param_1 + 100);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b99cd0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b99e38,3);
    PVZ2UIButton::SetDialogStates
              ((PVZ2UIButton *)this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
    iVar2 = *(int *)(this + 0x100);
    iVar11 = *(int *)(this + 0x108);
    iVar1 = FUN_04db7dbc(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar2 + iVar11 + iVar1,iVar1,
               ((*(int *)(this + 0x50) - iVar2) - iVar11) + iVar1 * -2,
               iVar1 * -2 + *(int *)(this + 0x54));
    (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)&local_40);
    DangerRoomSpecialOfferExtraButton::InitView(this_01,param_1);
    (**(code **)(*(long *)this_01 + 0x188))(this_01,*(int *)(param_3 + 3) == 0);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
  }
  else if (*(uint *)(param_3 + 3) == 2) {
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99f28);
    iVar2 = *(int *)(this + 0x100);
    iVar11 = *(int *)(this + 0x108);
    *(SalesProgressBar **)(this + 0x128) = this_00;
    iVar3 = FUN_04db7dbc(0x46);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x128));
    iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x128));
    Sexy::Insets::Insets((Insets *)&local_40,iVar2 + iVar11 + iVar3,(iVar1 - iVar4) / 2,iVar5,iVar6)
    ;
    *(undefined8 *)(this + 0x118) = local_40;
    *(undefined8 *)(this + 0x120) = uStack_38;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraItemWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DangerRoomSpecialOfferExtraItemWidget::DrawAll
          (DangerRoomSpecialOfferExtraItemWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SalesProgressBar *pSVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99e00);
  Draw9SliceImage(param_2,aIStack_18,uVar3);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf8));
  pSVar4 = *(SalesProgressBar **)(this + 0xf8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_2,(Image *)pSVar4,(TRect *)(this + 0xe4),(TRect *)aIStack_18);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  Sexy::Insets::Insets(aIStack_18,0x6b,0x3d,6,0xff);
  WriteWordInRect(param_2,this + 0x110,this + 0x100,uVar3,aIStack_18,5,1);
  if (*(LotteryResultProgressBar **)(this + 0x128) != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x128));
    pSVar4 = *(SalesProgressBar **)(this + 0x128);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_2,(Image *)pSVar4,(TRect *)(this + 0x118),(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

