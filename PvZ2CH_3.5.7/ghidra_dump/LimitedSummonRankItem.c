// Class: LimitedSummonRankItem


/* LimitedSummonRankItem::~LimitedSummonRankItem() */

void __thiscall LimitedSummonRankItem::~LimitedSummonRankItem(LimitedSummonRankItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e3180;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitedSummonRankItem::~LimitedSummonRankItem() */

void __thiscall LimitedSummonRankItem::~LimitedSummonRankItem(LimitedSummonRankItem *this)

{
  ~LimitedSummonRankItem(this);
  AK::FreeHook(this);
  return;
}


/* LimitedSummonRankItem::LimitedSummonRankItem() */

void __thiscall LimitedSummonRankItem::LimitedSummonRankItem(LimitedSummonRankItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066e3180;
  FUN_05476574(this + 0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRankItem::Draw(Sexy::Graphics*) */

void __thiscall LimitedSummonRankItem::Draw(LimitedSummonRankItem *this,Graphics *param_1)

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
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abee10);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = *(int *)(this + 0xd8);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abee78;
  }
  else if (iVar1 == 2) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abeed0;
  }
  else {
    if (iVar1 != 3) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd8));
      Sexy::ToWString(asStack_38);
      iVar1 = FUN_0399a924(0xf);
      iVar2 = FUN_0399a924(0xb);
      iVar3 = FUN_0399a924(0x28);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar3);
      uVar5 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_18,4);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      goto LAB_0399de78;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abef78;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_0399a924(0xf);
  iVar2 = FUN_0399a924(0xb);
  iVar3 = FUN_0399a924(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
LAB_0399de78:
  iVar1 = FUN_0399a924(0x7d);
  iVar2 = FUN_0399a924(0x11);
  iVar3 = FUN_0399a924(0x96);
  iVar4 = FUN_0399a924(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe0,aIStack_18,uVar5,(Color *)aIStack_28,3,1);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_0399a924(0x10e);
  iVar2 = FUN_0399a924(0x14);
  iVar3 = FUN_0399a924(0x4b);
  iVar4 = FUN_0399a924(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,(Color *)aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRankItem::InitView(bool, int) */

void __thiscall
LimitedSummonRankItem::InitView(LimitedSummonRankItem *this,bool param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  string *extraout_x0;
  long *plVar6;
  string *psVar7;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xd4) = param_2;
  this[0xd1] = (LimitedSummonRankItem)param_1;
  if (param_1) {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xe0),(long)*(int *)(this + 0xd4));
    iVar2 = *(int *)(lVar5 + 8);
  }
  else {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xf8),(long)*(int *)(this + 0xd4));
    iVar2 = *(int *)(lVar5 + 8);
  }
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString(aDStack_18,iVar2);
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
  bVar1 = std::operator==(asStack_38,"init");
  if (bVar1) {
    iVar2 = 0x61aa;
  }
  plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar2,1,false);
  uVar3 = FUN_0399a924(0x3c);
  uVar4 = FUN_0399a924(6);
  (**(code **)(*plVar6 + 0x198))(plVar6,uVar3,uVar4,uVar3,uVar3);
  lVar5 = *(long *)this;
  *(undefined1 *)((long)plVar6 + 0x6d) = 0;
  (**(code **)(lVar5 + 0x60))(this,plVar6);
  if (this[0xd1] == (LimitedSummonRankItem)0x0) {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xf8),(long)*(int *)(this + 0xd4));
    uVar3 = *(undefined4 *)(lVar5 + 0x10);
  }
  else {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xe0),(long)*(int *)(this + 0xd4));
    uVar3 = *(undefined4 *)(lVar5 + 0x10);
  }
  *(undefined4 *)(this + 0xd8) = uVar3;
  if (this[0xd1] == (LimitedSummonRankItem)0x0) {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    psVar7 = (string *)FUN_039995a0(*(undefined8 *)(lVar5 + 0xf8),(long)*(int *)(this + 0xd4));
  }
  else {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    psVar7 = (string *)FUN_039995a0(*(undefined8 *)(lVar5 + 0xe0),(long)*(int *)(this + 0xd4));
  }
  Sexy::UTF8StringToSexyString(psVar7);
  FUN_054766c8(this + 0xe0,aDStack_18);
  FUN_05476c50(aDStack_18);
  if (this[0xd1] == (LimitedSummonRankItem)0x0) {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xf8),(long)*(int *)(this + 0xd4));
    uVar3 = *(undefined4 *)(lVar5 + 0xc);
  }
  else {
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    lVar5 = FUN_039995a0(*(undefined8 *)(lVar5 + 0xe0),(long)*(int *)(this + 0xd4));
    uVar3 = *(undefined4 *)(lVar5 + 0xc);
  }
  *(undefined4 *)(this + 0xe8) = uVar3;
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

