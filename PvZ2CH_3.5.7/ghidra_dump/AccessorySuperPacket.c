// Class: AccessorySuperPacket


/* AccessorySuperPacket::ScrollTargetReached(Sexy::ScrollWidget*) */

void AccessorySuperPacket::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AccessorySuperPacket::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
AccessorySuperPacket::ScrollTargetReached(AccessorySuperPacket *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* AccessorySuperPacket::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AccessorySuperPacket::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AccessorySuperPacket::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
AccessorySuperPacket::ScrollTargetInterrupted(AccessorySuperPacket *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* AccessorySuperPacket::~AccessorySuperPacket() */

void __thiscall AccessorySuperPacket::~AccessorySuperPacket(AccessorySuperPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06914640;
  *(undefined ***)(this + 0xd8) = &PTR__AccessorySuperPacket_06914978;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069149c0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to AccessorySuperPacket::~AccessorySuperPacket() */

void __thiscall AccessorySuperPacket::~AccessorySuperPacket(AccessorySuperPacket *this)

{
  ~AccessorySuperPacket(this + -0xd8);
  return;
}


/* AccessorySuperPacket::~AccessorySuperPacket() */

void __thiscall AccessorySuperPacket::~AccessorySuperPacket(AccessorySuperPacket *this)

{
  ~AccessorySuperPacket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AccessorySuperPacket::~AccessorySuperPacket() */

void __thiscall AccessorySuperPacket::~AccessorySuperPacket(AccessorySuperPacket *this)

{
  ~AccessorySuperPacket(this + -0xd8);
  return;
}


/* AccessorySuperPacket::AccessorySuperPacket() */

void __thiscall AccessorySuperPacket::AccessorySuperPacket(AccessorySuperPacket *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06914640;
  *(undefined ***)(this + 0xd8) = &PTR__AccessorySuperPacket_06914978;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069149c0;
  return;
}


/* AccessorySuperPacket::ButtonDepress(int) */

AccessorySuperPacket * __thiscall
AccessorySuperPacket::ButtonDepress(AccessorySuperPacket *this,int param_1)

{
  PlantAccessoryUI *this_00;
  AccessorySuperPacket *pAVar1;
  
  if ((param_1 - 0x70U < 2) &&
     (this_00 = (PlantAccessoryUI *)LawnApp::getPlantAccessoryUI(gLawnApp),
     this = (AccessorySuperPacket *)0x0, this_00 != (PlantAccessoryUI *)0x0)) {
    pAVar1 = (AccessorySuperPacket *)PlantAccessoryUI::CloseAccessorySuperPacket(this_00);
    return pAVar1;
  }
  return this;
}


/* non-virtual thunk to AccessorySuperPacket::ButtonDepress(int) */

void __thiscall AccessorySuperPacket::ButtonDepress(AccessorySuperPacket *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySuperPacket::Draw(Sexy::Graphics*) */

void __thiscall AccessorySuperPacket::Draw(AccessorySuperPacket *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar3 = FUN_04950334(300);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(200);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(600);
  iVar6 = FUN_04950334(400);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71590);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70f58);
  iVar3 = FUN_04950334(0x10e);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0xa0);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0x21c);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar3);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b70fa8);
  iVar3 = FUN_04950334(0x50);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0xe6);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0xa0);
  iVar6 = FUN_04950334(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessorySuperPacket::init() */

void __thiscall AccessorySuperPacket::init(AccessorySuperPacket *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIScrollingWidget *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  AccessoryScrollPanel *pAVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  string *extraout_x1;
  code *pcVar11;
  undefined1 auStack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  this[0x59] = (AccessorySuperPacket)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::string::string(asStack_40,"PvZ2 Accessories");
  Magento::GetStore((Magento *)asStack_40,extraout_x1);
  std::string::~string(asStack_40);
  nop();
  iVar3 = FUN_04950334(0x118);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x96);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0x208);
  iVar6 = FUN_04950334(0x104);
  Sexy::Insets::Insets(aIStack_98,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  iVar3 = FUN_04950334(0xfa);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0xa0);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(500);
  iVar6 = FUN_04950334(0x104);
  Sexy::Insets::Insets(aIStack_88,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_98);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  uVar7 = PlayerInfo::GetAccessoryInfosSize(this_02);
  Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  ToolPacketData::GetProps();
  pAVar8 = ::operator_new(0x108);
  AccessoryScrollPanel::AccessoryScrollPanel(pAVar8,aIStack_88,uVar7,aRStack_a0,4,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pAVar8);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x70,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71ca0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b70f80,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar3 = FUN_04950334(0x3c);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0x8c);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0x78);
  iVar6 = FUN_04950334(0x28);
  Sexy::Insets::Insets((Insets *)asStack_40,iVar1 / 2 - iVar3,iVar4 + iVar2 / 2,iVar5,iVar6);
  (*pcVar11)(pPVar9,asStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(pPVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a8);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x71,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b71448,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b71308,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar3 = FUN_04950334(0xe6);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04950334(0xf2);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04950334(0x32);
  iVar6 = FUN_04950334(0x2d);
  Sexy::Insets::Insets((Insets *)asStack_40,iVar3 + iVar1 / 2,iVar2 / 2 - iVar4,iVar5,iVar6);
  (*pcVar11)(pPVar9,asStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(pPVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

