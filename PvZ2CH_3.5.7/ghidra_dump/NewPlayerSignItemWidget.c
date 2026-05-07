// Class: NewPlayerSignItemWidget


/* NewPlayerSignItemWidget::~NewPlayerSignItemWidget() */

void __thiscall NewPlayerSignItemWidget::~NewPlayerSignItemWidget(NewPlayerSignItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06631d50;
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewPlayerSignItemWidget::~NewPlayerSignItemWidget() */

void __thiscall NewPlayerSignItemWidget::~NewPlayerSignItemWidget(NewPlayerSignItemWidget *this)

{
  ~NewPlayerSignItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* NewPlayerSignItemWidget::SetObtained(bool) */

void __thiscall NewPlayerSignItemWidget::SetObtained(NewPlayerSignItemWidget *this,bool param_1)

{
  *(uint *)(this + 0xd8) = (uint)param_1;
  return;
}


/* NewPlayerSignItemWidget::NewPlayerSignItemWidget() */

void __thiscall NewPlayerSignItemWidget::NewPlayerSignItemWidget(NewPlayerSignItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06631d50;
  FUN_05476574(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  FUN_05476574(this + 0x108);
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  FUN_05476574(this + 0x120);
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSignItemWidget::Draw(Sexy::Graphics*) */

void __thiscall NewPlayerSignItemWidget::Draw(NewPlayerSignItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xe0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_03447a18(100);
  iVar3 = FUN_03447a18(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,0,iVar2,iVar3);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar1,aIStack_18,5,1);
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  if (*(int *)(this + 0xd8) != 0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0e58);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,*(int *)(this + 0xf8),*(int *)(this + 0xfc),*(int *)(this + 0x100),
               *(int *)(this + 0x104));
  }
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x120,this + 0x128,uVar1,aIStack_18,4,1);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
  Sexy::Color::Color((Color *)aIStack_18,0x42,0x25,0);
  WriteWordInRect(param_1,this + 0x108,this + 0x110,uVar1,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSignItemWidget::InitView(int, NewPlayerSignItemData) */

void NewPlayerSignItemWidget::InitView
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_60;
  uint uStack_5c;
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0xd8) = param_4;
  *(int *)(param_1 + 0xd4) = param_2;
  uStack_5c = (uint)((ulong)param_3 >> 0x20);
  FUN_05478178((wstring *)&local_48,L"[SUMMARY_DAYS]",asStack_50);
  TodReplaceNumberString((wstring *)&local_48,L"{DAY_COUNT}",param_2 + 1);
  FUN_054766c8(param_1 + 0xe8,(Insets *)&local_38);
  FUN_05476c50((Insets *)&local_38);
  FUN_05476c50((wstring *)&local_48);
  nop();
  iVar1 = FUN_03447a18(0x5a);
  iVar2 = FUN_03447a18(100);
  iVar3 = FUN_03447a18(0x1e);
  Sexy::Insets::Insets((Insets *)&local_38,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x110) = CONCAT44(uStack_34,local_38);
  *(undefined8 *)(param_1 + 0x118) = uStack_30;
  iVar1 = FUN_03447a18(0x4b);
  iVar2 = FUN_03447a18(0x5a);
  iVar3 = FUN_03447a18(0x23);
  Sexy::Insets::Insets((Insets *)&local_38,0,iVar1,iVar2,iVar3);
  local_60 = (int)param_3;
  *(ulong *)(param_1 + 0x128) = CONCAT44(uStack_34,local_38);
  *(undefined8 *)(param_1 + 0x130) = uStack_30;
  GetGameItemInfo(local_60,0x7fffffff,0);
  if (local_38 != 0) {
    thunk_FUN_05477b9c(param_1 + 0x108,auStack_10);
    uVar4 = StringHelper::ToImage(asStack_18,false);
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    if (uStack_5c != 0) {
      Sexy::StrFormat("X%d",asStack_50,(ulong)uStack_5c);
      Sexy::ToWString(asStack_50);
      FUN_054766c8(param_1 + 0x120,(wstring *)&local_48);
      FUN_05476c50((wstring *)&local_48);
      std::string::~string(asStack_50);
    }
  }
  if (*(int *)(param_1 + 0xd4) == 6) {
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0e00);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    iVar1 = FUN_03447a18(10);
    iVar2 = FUN_03447a18(0x53);
    iVar3 = FUN_03447a18(0x50);
    Sexy::Insets::Insets((Insets *)&local_48,iVar1,iVar2,iVar3,iVar3);
    *(undefined8 *)(param_1 + 0xf8) = local_48;
    *(undefined8 *)(param_1 + 0x100) = uStack_40;
    iVar1 = FUN_03447a18(0xd5);
    iVar2 = FUN_03447a18(100);
    iVar3 = FUN_03447a18(0x1e);
    Sexy::Insets::Insets((Insets *)&local_48,0,iVar1,iVar2,iVar3);
    *(undefined8 *)(param_1 + 0x110) = local_48;
    *(undefined8 *)(param_1 + 0x118) = uStack_40;
  }
  else {
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0a38);
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    if (*(int *)(param_1 + 0xd4) == 1) {
      uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0d80);
      *(undefined8 *)(param_1 + 0xe0) = uVar4;
    }
    iVar1 = FUN_03447a18(0x14);
    iVar2 = FUN_03447a18(0x23);
    iVar3 = FUN_03447a18(0x3c);
    Sexy::Insets::Insets((Insets *)&local_48,iVar1,iVar2,iVar3,iVar3);
    *(undefined8 *)(param_1 + 0xf8) = local_48;
    *(undefined8 *)(param_1 + 0x100) = uStack_40;
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

