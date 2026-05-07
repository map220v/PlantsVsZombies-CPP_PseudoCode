// Class: BattleOrderTurnPagesItem


/* BattleOrderTurnPagesItem::~BattleOrderTurnPagesItem() */

void __thiscall BattleOrderTurnPagesItem::~BattleOrderTurnPagesItem(BattleOrderTurnPagesItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06703790;
  PakRecord::~PakRecord((PakRecord *)(this + 0xe0));
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BattleOrderTurnPagesItem::~BattleOrderTurnPagesItem() */

void __thiscall BattleOrderTurnPagesItem::~BattleOrderTurnPagesItem(BattleOrderTurnPagesItem *this)

{
  ~BattleOrderTurnPagesItem(this);
  AK::FreeHook(this);
  return;
}


/* BattleOrderTurnPagesItem::BattleOrderTurnPagesItem() */

void __thiscall BattleOrderTurnPagesItem::BattleOrderTurnPagesItem(BattleOrderTurnPagesItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06703790;
  FUN_05476574(this + 0xd8);
  BattleOrderRankData::BattleOrderRankData((BattleOrderRankData *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTurnPagesItem::Draw(Sexy::Graphics*) */

void __thiscall BattleOrderTurnPagesItem::Draw(BattleOrderTurnPagesItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3f78);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4250;
  }
  else if (iVar1 == 2) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3ee0;
  }
  else {
    if (iVar1 != 3) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd4));
      Sexy::ToWString(asStack_38);
      iVar1 = FUN_03a2d914(10);
      iVar2 = FUN_03a2d914(0xb);
      iVar3 = FUN_03a2d914(0x3c);
      iVar4 = FUN_03a2d914(0x28);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
      uVar5 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_18,4);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      goto LAB_03a3123c;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4450;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_03a2d914(0xf);
  iVar2 = FUN_03a2d914(0xb);
  iVar3 = FUN_03a2d914(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
LAB_03a3123c:
  iVar1 = FUN_03a2d914(0xaa);
  iVar2 = FUN_03a2d914(0x11);
  iVar3 = FUN_03a2d914(200);
  iVar4 = FUN_03a2d914(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xd8,aIStack_18,uVar5,(Color *)aIStack_28,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTurnPagesItem::InitView(int, BattleOrderRankData const&) */

void __thiscall
BattleOrderTurnPagesItem::InitView
          (BattleOrderTurnPagesItem *this,int param_1,BattleOrderRankData *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  string *extraout_x0;
  long *plVar6;
  long lVar7;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  BattleOrderRankData::operator=((BattleOrderRankData *)(this + 0xe0),param_2);
  iVar1 = *(int *)(param_2 + 0x10);
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString(aDStack_18,iVar1);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"plant");
  std::string::string(asStack_20,"init");
  DIniFile::getItem(extraout_x0,asStack_30,asStack_28);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  bVar2 = std::operator==(asStack_38,"init");
  if (bVar2) {
    iVar1 = 0x61aa;
  }
  plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar1,1,false);
  uVar3 = FUN_03a2d914(0x50);
  uVar4 = FUN_03a2d914(6);
  uVar5 = FUN_03a2d914(0x3c);
  (**(code **)(*plVar6 + 0x198))(plVar6,uVar3,uVar4,uVar5,uVar5);
  lVar7 = *(long *)this;
  *(undefined1 *)((long)plVar6 + 0x6d) = 0;
  (**(code **)(lVar7 + 0x60))(this,plVar6);
  Sexy::UTF8StringToSexyString((string *)(param_2 + 8));
  FUN_054766c8(this + 0xd8,aDStack_18);
  FUN_05476c50(aDStack_18);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

