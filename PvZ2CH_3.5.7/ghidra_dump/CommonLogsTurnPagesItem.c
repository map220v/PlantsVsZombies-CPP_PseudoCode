// Class: CommonLogsTurnPagesItem


/* CommonLogsTurnPagesItem::~CommonLogsTurnPagesItem() */

void __thiscall CommonLogsTurnPagesItem::~CommonLogsTurnPagesItem(CommonLogsTurnPagesItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066b8dc0;
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CommonLogsTurnPagesItem::~CommonLogsTurnPagesItem() */

void __thiscall CommonLogsTurnPagesItem::~CommonLogsTurnPagesItem(CommonLogsTurnPagesItem *this)

{
  ~CommonLogsTurnPagesItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonLogsTurnPagesItem::InitView(LotteryHistory const&) */

void __thiscall
CommonLogsTurnPagesItem::InitView(CommonLogsTurnPagesItem *this,LotteryHistory *param_1)

{
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)param_1,0x7fffffff,0);
  thunk_FUN_05477b9c(this + 0xd8,auStack_10);
  Sexy::StrFormat(" x%d",asStack_48,(ulong)*(uint *)(param_1 + 4));
  Sexy::ToWString(asStack_48);
  FUN_054766c8(this + 0xf0,auStack_40);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  Sexy::ToWString((string *)(param_1 + 8));
  FUN_054766c8(this + 0xf8,auStack_40);
  FUN_05476c50(auStack_40);
  (**(code **)(*(long *)this + 0x310))(this,param_1);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonLogsTurnPagesItem::CommonLogsTurnPagesItem() */

void __thiscall CommonLogsTurnPagesItem::CommonLogsTurnPagesItem(CommonLogsTurnPagesItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066b8dc0;
  FUN_05476574(this + 0xd8);
  Sexy::Color::Color((Color *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonLogsTurnPagesItem::SetItemColor(LotteryHistory const&) */

void __thiscall
CommonLogsTurnPagesItem::SetItemColor(CommonLogsTurnPagesItem *this,LotteryHistory *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = MaterialItemMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  bVar1 = std::operator==((string *)&local_18,"mat_toy_parts");
  if (((bVar1) && (499 < *(int *)(param_1 + 4))) || (*(int *)param_1 == 0x1e84b18)) {
    std::string::~string((string *)&local_18);
    Sexy::Color::Color((Color *)&local_18,2);
    *(undefined8 *)(this + 0xe0) = local_18;
    *(undefined8 *)(this + 0xe8) = uStack_10;
  }
  else {
    std::string::~string((string *)&local_18);
    Sexy::Color::Color((Color *)&local_18,0x66,0x37,0);
    *(undefined8 *)(this + 0xe0) = local_18;
    *(undefined8 *)(this + 0xe8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonLogsTurnPagesItem::Draw(Sexy::Graphics*) */

void __thiscall CommonLogsTurnPagesItem::Draw(CommonLogsTurnPagesItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7518);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_038c310c(0x14);
  iVar2 = FUN_038c310c(0x11);
  iVar3 = FUN_038c310c(0x3c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_038c310c(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar5 - iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar6,aIStack_18,3,1);
  iVar5 = FUN_038c310c(0xdc);
  iVar1 = FUN_038c310c(0x11);
  iVar2 = FUN_038c310c(0x78);
  iVar3 = FUN_038c310c(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar5,iVar1,iVar2,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar6,aIStack_28,3,1);
  iVar5 = FUN_038c310c(0x1e);
  iVar1 = FUN_038c310c(0x11);
  iVar2 = FUN_038c310c(0x3c);
  Sexy::Insets::Insets(aIStack_18,iVar5,iVar1,*(int *)(this + 0x50) - iVar2,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf8,aIStack_18,uVar6,aIStack_28,4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

