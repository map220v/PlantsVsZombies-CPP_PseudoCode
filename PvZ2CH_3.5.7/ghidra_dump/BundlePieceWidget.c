// Class: BundlePieceWidget


/* BundlePieceWidget::Resize(int, int, int, int) */

void __thiscall
BundlePieceWidget::Resize(BundlePieceWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  return;
}


/* BundlePieceWidget::ButtonDepress(int) */

void __thiscall BundlePieceWidget::ButtonDepress(BundlePieceWidget *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to BundlePieceWidget::ButtonDepress(int) */

void __thiscall BundlePieceWidget::ButtonDepress(BundlePieceWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* BundlePieceWidget::ButtonMouseLeave(int) */

void __thiscall BundlePieceWidget::ButtonMouseLeave(BundlePieceWidget *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to BundlePieceWidget::ButtonMouseLeave(int) */

void __thiscall BundlePieceWidget::ButtonMouseLeave(BundlePieceWidget *this,int param_1)

{
  ButtonMouseLeave(this + -0xd8,param_1);
  return;
}


/* BundlePieceWidget::~BundlePieceWidget() */

void __thiscall BundlePieceWidget::~BundlePieceWidget(BundlePieceWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0692ba00;
  *(undefined **)(this + 0xd8) = &DAT_0692bd38;
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 0x108));
  FUN_05476c50(this + 0xf8);
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BundlePieceWidget::~BundlePieceWidget() */

void __thiscall BundlePieceWidget::~BundlePieceWidget(BundlePieceWidget *this)

{
  ~BundlePieceWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundlePieceWidget::ButtonPress(int) */

void __thiscall BundlePieceWidget::ButtonPress(BundlePieceWidget *this,int param_1)

{
  LawnApp *pLVar1;
  TPoint aTStack_40 [8];
  Point aPStack_38 [8];
  BundlePieceWidget *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0xd0))(aTStack_40);
    pLVar1 = gLawnApp;
    Sexy::Point::Point(aPStack_38,aTStack_40);
    local_30 = this;
    FUN_049ecc90(afStack_28,aPStack_38);
    LawnApp::ShowPlantSkillTipsUI(pLVar1,this + 0xf8,0,0,3,afStack_28,0);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BundlePieceWidget::ButtonPress(int) */

void __thiscall BundlePieceWidget::ButtonPress(BundlePieceWidget *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundlePieceWidget::BundlePieceWidget(std::string const&, std::string const&, int const&) */

void __thiscall
BundlePieceWidget::BundlePieceWidget
          (BundlePieceWidget *this,string *param_1,string *param_2,int *param_3)

{
  BundlePieceWidget *pBVar1;
  bool bVar2;
  int iVar3;
  PVZ2UIButton *this_00;
  NameMapperBase *pNVar4;
  undefined1 auVar5 [12];
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = this + 0xf8;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0692ba00;
  *(undefined **)(this + 0xd8) = &DAT_0692bd38;
  FUN_05475d88(this + 0xe0,param_1);
  FUN_05475d88(this + 0xe8,param_2);
  *(int *)(this + 0xf0) = *param_3;
  FUN_05476574(pBVar1);
  GAME_ITEM_INFO::GAME_ITEM_INFO((GAME_ITEM_INFO *)(this + 0x108));
  FUN_05478178(awStack_40,&DAT_056f11a8,auStack_48);
  Sexy::Color::Color((Color *)aGStack_38,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)(this + 0xd8),awStack_40,(Color *)aGStack_38);
  *(PVZ2UIButton **)(this + 0x100) = this_00;
  FUN_05476c50(awStack_40);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  bVar2 = std::operator==(param_1,"family");
  if (bVar2) {
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    auVar5 = NameMapperBase::GetIdForName(pNVar4,param_2);
    NetworkHelper::getObjectNameByActId(auVar5._0_8_,auVar5._8_4_);
    FUN_054766c8(pBVar1,aGStack_38);
    FUN_05476c50(aGStack_38);
  }
  else {
    bVar2 = std::operator==(param_1,"nutrient");
    if (bVar2) {
      pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      iVar3 = NameMapperBase::GetIdForName(pNVar4,param_2);
      GetGameItemInfo(iVar3,0x100,0);
      GAME_ITEM_INFO::operator=((GAME_ITEM_INFO *)(this + 0x108),aGStack_38);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      thunk_FUN_05477b9c(pBVar1,this + 0x130);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundlePieceWidget::Draw(Sexy::Graphics*) */

void __thiscall BundlePieceWidget::Draw(BundlePieceWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar7;
  PrimeTypeface *pPVar8;
  Image *pIVar9;
  long lVar10;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  bVar4 = std::operator==((string *)(this + 0xe0),"family");
  if (bVar4) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0xe8));
    iVar6 = *(int *)(this_01 + 0x28);
    iVar1 = *(int *)(this_01 + 0x2c);
    iVar2 = *(int *)(this_01 + 0x10);
    iVar3 = *(int *)(this_01 + 0x14);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Insets::Insets
              (aIStack_18,(int)((float)*(int *)(this_01 + 0x30) * 0.7),
               (int)((float)*(int *)(this_01 + 0x34) * 0.7),(int)((float)iVar6 * 0.7),
               (int)((float)iVar1 * 0.7));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20))
    ;
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar4) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      Sexy::Insets::Insets
                (aIStack_18,(int)((float)*(int *)(this_01 + 0x18) * 0.7),
                 (int)((float)*(int *)(this_01 + 0x1c) * 0.7),(int)((float)iVar2 * 0.7),
                 (int)((float)iVar3 * 0.7));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(TRect *)aIStack_18,(TRect *)(this_01 + 8));
    }
  }
  else {
    bVar5 = std::operator==((string *)(this + 0xe0),"nutrient");
    if ((bVar5) &&
       (pIVar9 = (Image *)StringHelper::ToImage((string *)(this + 0x128),bVar4),
       pIVar9 != (Image *)0x0)) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar9,(uint)bVar4,(uint)bVar4,(int)((float)*(int *)(pIVar9 + 0x38) * 0.6),
                 (int)((float)*(int *)(pIVar9 + 0x3c) * 0.6));
    }
  }
  iVar6 = FUN_049ec7f8(0x1e);
  Sexy::Insets::Insets(aIStack_38,0,*(int *)(this + 0x54) - iVar6,*(int *)(this + 0x50),iVar6);
  pPVar8 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  Sexy::StrFormat(L"%d",auStack_40,(ulong)*(uint *)(this + 0xf0));
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar8,param_1,aIStack_28,auStack_40,1,1,(Color *)aIStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

