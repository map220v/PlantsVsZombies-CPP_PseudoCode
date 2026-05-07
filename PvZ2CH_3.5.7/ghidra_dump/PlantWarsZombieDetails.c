// Class: PlantWarsZombieDetails


/* PlantWarsZombieDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantWarsZombieDetails::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsZombieDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsZombieDetails::ScrollTargetReached(PlantWarsZombieDetails *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantWarsZombieDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantWarsZombieDetails::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantWarsZombieDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantWarsZombieDetails::ScrollTargetInterrupted(PlantWarsZombieDetails *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::colorizeDescription(std::wstring const&) */

void PlantWarsZombieDetails::colorizeDescription(wstring *param_1)

{
  long lVar1;
  wstring *in_x8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24();
  FUN_05478178(auStack_20,&DAT_05722e80,auStack_10);
  nop();
  lVar1 = FUN_054767d0();
  if (lVar1 != -1) {
    do {
      FUN_05478178(awStack_18,L"[COLOR_STAT]",auStack_28);
      TodReplaceString(in_x8,L"{STAT}",awStack_18);
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
      nop();
      lVar1 = FUN_054767d0();
    } while (lVar1 != -1);
  }
  FUN_054772c4(auStack_20,L"{KEYWORD}");
  lVar1 = FUN_054767d0();
  if (lVar1 != -1) {
    do {
      FUN_05478178(awStack_18,L"[COLOR_KEYWORD]",auStack_28);
      TodReplaceString(in_x8,L"{KEYWORD}",awStack_18);
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
      nop();
      lVar1 = FUN_054767d0();
    } while (lVar1 != -1);
  }
  FUN_054772c4(auStack_20,L"{FLAVOR}");
  lVar1 = FUN_054767d0();
  if (lVar1 != -1) {
    do {
      FUN_05478178(awStack_18,L"[COLOR_FLAVOR]",auStack_28);
      TodReplaceString(in_x8,L"{FLAVOR}",awStack_18);
      FUN_054766c8();
      FUN_05476c50(auStack_10);
      FUN_05476c50(awStack_18);
      nop();
      lVar1 = FUN_054767d0();
    } while (lVar1 != -1);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombieDetails::SelectZombieSkillCard(int) */

void __thiscall
PlantWarsZombieDetails::SelectZombieSkillCard(PlantWarsZombieDetails *this,int param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_1;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x168);
    uVar1 = FUN_04d9e828(uVar4,*(undefined8 *)(this + 0x170));
    if (uVar1 <= uVar3) break;
    plVar2 = (long *)FUN_04d9e834(uVar4,uVar3);
    FUN_04d9e718(*plVar2 + 0xd8,*(int *)(*plVar2 + 0xdc) == param_1);
    uVar3 = uVar3 + 1;
  }
  if (uVar1 <= uVar5) {
    return;
  }
  plVar2 = (long *)FUN_04d9e834(uVar4,uVar5);
  thunk_FUN_05477b9c(this + 0x198,*plVar2 + 0xe8);
  plVar2 = (long *)FUN_04d9e834(*(undefined8 *)(this + 0x168),uVar5);
  thunk_FUN_05477b9c(this + 0x1a8,*plVar2 + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::OnSelectZombieCard(PlantWarsSeedCard*) */

void __thiscall
PlantWarsZombieDetails::OnSelectZombieCard(PlantWarsZombieDetails *this,PlantWarsSeedCard *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  TextScollingWidget *pTVar8;
  PrimeTypeface *pPVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0x150);
    uVar7 = FUN_04d9e754(uVar12,*(undefined8 *)(this + 0x158));
    if (uVar7 <= uVar10) break;
    plVar11 = (long *)FUN_04d9e760(uVar12,uVar10);
    FUN_04d9e700((PlantWarsSeedCard *)*plVar11 + 0xd8,(PlantWarsSeedCard *)*plVar11 == param_1);
    uVar10 = uVar10 + 1;
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xf8);
  auVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::StringToUpper((Sexy *)(auVar14._0_8_ + 8),auVar14._8_8_);
  std::operator+("[ZOMBIE_",asStack_38);
  std::operator+(asStack_30,"]");
  Sexy::ToWString(asStack_28);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 400,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (*(long *)(this + 0x1a0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
  }
  auVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::StringToUpper((Sexy *)(auVar14._0_8_ + 8),auVar14._8_8_);
  std::operator+("[ZOMBIE_",asStack_30);
  std::operator+(asStack_28,"_DESCRIPTION_HEADER]");
  Sexy::ToWString((string *)awStack_20);
  TodStringTranslate(awStack_18);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)awStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  auVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::StringToUpper((Sexy *)(auVar14._0_8_ + 8),auVar14._8_8_);
  std::operator+("[ZOMBIE_",asStack_38);
  std::operator+(asStack_30,"_DESCRIPTION]");
  Sexy::ToWString(asStack_28);
  TodStringTranslate(awStack_20);
  colorizeDescription((wstring *)this);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  pTVar8 = ::operator_new(0x108);
  TextScollingWidget::TextScollingWidget(pTVar8);
  *(TextScollingWidget **)(this + 0x1a0) = pTVar8;
  iVar3 = FUN_04d9f494(0x32);
  iVar1 = *(int *)(this + 0xe8);
  iVar4 = FUN_04d9f494(0x14a);
  iVar2 = *(int *)(this + 0xec);
  uVar5 = FUN_04d9f494(600);
  uVar6 = FUN_04d9f494(0x87);
  (**(code **)(*(long *)pTVar8 + 0x198))(pTVar8,iVar3 + iVar1,iVar4 + iVar2,uVar5,uVar6);
  plVar11 = *(long **)(this + 0x1a0);
  pcVar13 = *(code **)(*plVar11 + 0x170);
  Sexy::Color::Color((Color *)awStack_18,1);
  (*pcVar13)(plVar11,0,awStack_18);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a0));
  pTVar8 = *(TextScollingWidget **)(this + 0x1a0);
  pPVar9 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  TextScollingWidget::SetString(pTVar8,awStack_48,pPVar9);
  pTVar8 = *(TextScollingWidget **)(this + 0x1a0);
  pPVar9 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  TextScollingWidget::SetStringExtra(pTVar8,awStack_40,pPVar9);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::ButtonDepress(int) */

void __thiscall PlantWarsZombieDetails::ButtonDepress(PlantWarsZombieDetails *this,int param_1)

{
  long *plVar1;
  PlantWarsLevelSelectManager *this_00;
  undefined *puVar2;
  PVZ2UIButton *pPVar3;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 8) {
    *(undefined4 *)(this + 0xf8) = 1;
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
    plVar1 = *(long **)(this + 0x1a0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x158))(plVar1,0);
    }
    pPVar3 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b99270,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b98d18,2);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    pPVar3 = *(PVZ2UIButton **)(this + 0x138);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b992c0,2);
    puVar2 = &DAT_06b99248;
  }
  else {
    if (param_1 == 0x58) {
      this_00 = (PlantWarsLevelSelectManager *)
                Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
      PlantWarsLevelSelectManager::CloseZombieDetails(this_00);
      goto LAB_04da36c8;
    }
    if (param_1 != 7) goto LAB_04da36c8;
    *(undefined4 *)(this + 0xf8) = 0;
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
    plVar1 = *(long **)(this + 0x1a0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
    }
    pPVar3 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b98d18,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b99270,2);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    pPVar3 = *(PVZ2UIButton **)(this + 0x138);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b99248,2);
    puVar2 = &DAT_06b992c0;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar2,2);
  PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
LAB_04da36c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsZombieDetails::ButtonDepress(int) */

void __thiscall PlantWarsZombieDetails::ButtonDepress(PlantWarsZombieDetails *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsZombieDetails::Draw(PlantWarsZombieDetails *this,Graphics *param_1)

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
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0xe8),*(int *)(this + 0xec));
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0xf0),*(int *)(this + 0xf4));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b994d0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995f8);
  iVar1 = FUN_04d9f494(0x87);
  iVar2 = FUN_04d9f494(0xe9);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b995f8);
  iVar1 = FUN_04d9f494(0x1c2);
  iVar2 = FUN_04d9f494(0xe9);
  Sexy::Graphics::DrawImageRotated(param_1,pIVar6,iVar1,iVar2,0.0,(TRect *)0x0);
  iVar1 = FUN_04d9f494(0x19);
  iVar2 = FUN_04d9f494(0x113);
  iVar3 = FUN_04d9f494(0x28a);
  iVar4 = FUN_04d9f494(200);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b990b0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (*(int *)(this + 0xf8) == 0) {
    iVar1 = FUN_04d9f494(0xfa);
    iVar2 = FUN_04d9f494(0xd7);
    iVar3 = FUN_04d9f494(200);
    iVar4 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x180,aIStack_28,uVar5,aIStack_18,5,1);
    iVar1 = FUN_04d9f494(0xfa);
    iVar2 = FUN_04d9f494(0x11d);
    iVar3 = FUN_04d9f494(200);
    iVar4 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 400,aIStack_28,uVar5,aIStack_18,5,1);
  }
  else if (*(int *)(this + 0xf8) == 1) {
    iVar1 = FUN_04d9f494(0xfa);
    iVar2 = FUN_04d9f494(0xd7);
    iVar3 = FUN_04d9f494(200);
    iVar4 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x188,aIStack_28,uVar5,aIStack_18,5,1);
    iVar1 = FUN_04d9f494(0xfa);
    iVar2 = FUN_04d9f494(0x11d);
    iVar3 = FUN_04d9f494(200);
    iVar4 = FUN_04d9f494(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x198,aIStack_28,uVar5,aIStack_18,5,1);
    iVar1 = FUN_04d9f494(0x32);
    iVar2 = FUN_04d9f494(0x14a);
    iVar3 = FUN_04d9f494(600);
    iVar4 = FUN_04d9f494(0x87);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1a8,aIStack_28,uVar5,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::PlantWarsZombieDetails() */

void __thiscall PlantWarsZombieDetails::PlantWarsZombieDetails(PlantWarsZombieDetails *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_069bca60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bcd98;
  *(undefined ***)(this + 0xe0) = &PTR__PlantWarsZombieDetails_069bcde0;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x100));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  FUN_05476574(this + 400);
  FUN_05476574(this + 0x198);
  *(undefined8 *)(this + 0x1a0) = 0;
  FUN_05476574(this + 0x1a8);
  *(undefined8 *)(this + 0x1a0) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_New_PVP");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlantWars");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectZombieCard);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<PlantWarsSeedCard*,Sexy::CBMemberTranslatorX<PlantWarsZombieDetails,void(PlantWarsZombieDetails::*)(PlantWarsSeedCard*)>>
            ((MessageRouter *)puVar1,Message::SelectZombieCard,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::~PlantWarsZombieDetails() */

void __thiscall PlantWarsZombieDetails::~PlantWarsZombieDetails(PlantWarsZombieDetails *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069bcd98;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069bca60;
  *(undefined ***)(this + 0xe0) = &PTR__PlantWarsZombieDetails_069bcde0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_New_PVP");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantWars");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x198);
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  std::vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>>::~vector
            ((vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>> *)
             (this + 0x168));
  std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::~vector
            ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0x150));
  ShowZombieTitles::~ShowZombieTitles((ShowZombieTitles *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsZombieDetails::~PlantWarsZombieDetails() */

void __thiscall PlantWarsZombieDetails::~PlantWarsZombieDetails(PlantWarsZombieDetails *this)

{
  ~PlantWarsZombieDetails(this + -0xe0);
  return;
}


/* PlantWarsZombieDetails::~PlantWarsZombieDetails() */

void __thiscall PlantWarsZombieDetails::~PlantWarsZombieDetails(PlantWarsZombieDetails *this)

{
  ~PlantWarsZombieDetails(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsZombieDetails::~PlantWarsZombieDetails() */

void __thiscall PlantWarsZombieDetails::~PlantWarsZombieDetails(PlantWarsZombieDetails *this)

{
  ~PlantWarsZombieDetails(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::InitZombie() */

void __thiscall PlantWarsZombieDetails::InitZombie(PlantWarsZombieDetails *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsSeedCard *pPVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  PlantWarsSeedCard *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x248);
  iVar14 = 0;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  iVar2 = FUN_04d9f494(0x1e);
  iVar5 = *(int *)(this + 0xe8);
  iVar3 = FUN_04d9f494(0x5a);
  iVar6 = *(int *)(this + 0xec);
  iVar7 = *(int *)(this + 0xf0);
  uVar4 = FUN_04d9f494(0x78);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,iVar2 + iVar5,iVar3 + iVar6,iVar7 + iVar2 * -2,uVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04d9f494(0xd);
  iVar6 = FUN_04d9f494(0);
  iVar7 = FUN_04d9f494(10);
  iVar2 = FUN_04d9f494(0x44);
  iVar3 = FUN_04d9f494(0x37);
  uVar13 = 0;
  while( true ) {
    uVar10 = FUN_04d9e7d0(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
    if (uVar10 <= uVar13) break;
    pPVar8 = ::operator_new(0x108);
    PlantWarsSeedCard::PlantWarsSeedCard(pPVar8);
    local_10 = pPVar8;
    (**(code **)(*(long *)pPVar8 + 0x198))
              (pPVar8,iVar5 + (iVar2 + iVar7) * ((uint)uVar13 & 7),
               iVar6 + (iVar7 + iVar3) * ((int)(uint)uVar13 >> 3),iVar2,iVar3);
    pPVar8 = local_10;
    uVar9 = FUN_04d9e7e4(*(undefined8 *)(this + 0x100),uVar13);
    PlantWarsSeedCard::InitZombie(pPVar8,uVar9,3);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_10);
    std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::push_back
              ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0x150),
               &local_10);
    iVar14 = *(int *)(local_10 + 0x4c) + *(int *)(local_10 + 0x54);
    uVar13 = uVar13 + 1;
  }
  lVar12 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar14;
  (**(code **)(lVar12 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_00;
  cVar1 = std::vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>>::empty
                    ((vector<PlantWarsSeedCard*,std::allocator<PlantWarsSeedCard*>> *)(this + 0x150)
                    );
  if (cVar1 == '\0') {
    puVar11 = (undefined8 *)FUN_04d9e760(*(undefined8 *)(this + 0x150),0);
    OnSelectZombieCard(this,(PlantWarsSeedCard *)*puVar11);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::InitSkill() */

void __thiscall PlantWarsZombieDetails::InitSkill(PlantWarsZombieDetails *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsZombieSkillCard *pPVar9;
  string *psVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  PlantWarsZombieSkillCard *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x248);
  iVar14 = 0;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  iVar2 = FUN_04d9f494(0x1e);
  iVar6 = *(int *)(this + 0xe8);
  iVar3 = FUN_04d9f494(0x5a);
  iVar7 = *(int *)(this + 0xec);
  iVar4 = FUN_04d9f494(0x3c);
  iVar8 = *(int *)(this + 0xf0);
  uVar5 = FUN_04d9f494(0x78);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,iVar2 + iVar6,iVar3 + iVar7,iVar8 + iVar4 * -2,uVar5);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar6 = FUN_04d9f494(0xd);
  iVar7 = FUN_04d9f494(0x14);
  iVar8 = FUN_04d9f494(10);
  iVar2 = FUN_04d9f494(0x50);
  uVar13 = 0;
  while( true ) {
    iVar3 = (int)uVar13;
    uVar11 = FUN_04d9e7d0(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
    if (uVar11 <= uVar13) break;
    pPVar9 = ::operator_new(0x100);
    PlantWarsZombieSkillCard::PlantWarsZombieSkillCard(pPVar9);
    local_10 = pPVar9;
    (**(code **)(*(long *)pPVar9 + 0x198))
              (pPVar9,iVar6 + (iVar2 + iVar8) * (iVar3 % 999),
               iVar7 + (iVar2 + iVar8) * (iVar3 / 999),iVar2,iVar2);
    pPVar9 = local_10;
    psVar10 = (string *)FUN_04d9e7e4(*(undefined8 *)(this + 0x118),uVar13);
    PlantWarsZombieSkillCard::Init(pPVar9,this,iVar3,psVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_10);
    std::vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>>::push_back
              ((vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>> *)
               (this + 0x168),&local_10);
    iVar14 = *(int *)(local_10 + 0x48) + *(int *)(local_10 + 0x50);
    uVar13 = uVar13 + 1;
  }
  lVar12 = *(long *)this_00;
  *(int *)(this_01 + 0x50) = iVar14;
  (**(code **)(lVar12 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  *(PVZ2UIScrollingWidget **)(this + 0x148) = this_00;
  cVar1 = std::vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>>::empty
                    ((vector<PlantWarsZombieSkillCard*,std::allocator<PlantWarsZombieSkillCard*>> *)
                     (this + 0x168));
  if (cVar1 == '\0') {
    SelectZombieSkillCard(this,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombieDetails::Init(ShowZombieTitles const&) */

void __thiscall PlantWarsZombieDetails::Init(PlantWarsZombieDetails *this,ShowZombieTitles *param_1)

{
  ButtonListener *pBVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  PVZ2UIButton *pPVar9;
  long *plVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  ShowZombieTitles::operator=((ShowZombieTitles *)(this + 0x100),param_1);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  lVar2 = gLawnApp;
  iVar3 = FUN_04d9f494(700);
  *(int *)(this + 0xe8) = (*(int *)(lVar2 + 0xd4) - iVar3) / 2;
  iVar3 = FUN_04d9f494(500);
  iVar4 = FUN_04d9f494(10);
  *(int *)(this + 0xec) = (*(int *)(lVar2 + 0xd8) - iVar3) / 2 - iVar4;
  uVar5 = FUN_04d9f494(700);
  *(undefined4 *)(this + 0xf0) = uVar5;
  uVar5 = FUN_04d9f494(500);
  *(undefined4 *)(this + 0xf4) = uVar5;
  TodStringTranslate(L"[ZOMBIE_DETAILS]");
  FUN_054766c8(this + 0x180,aPStack_40);
  FUN_05476c50(aPStack_40);
  TodStringTranslate(L"[ENTRIES_DETAILS]");
  FUN_054766c8(this + 0x188,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,7,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98d18,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b99270,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar10 = *(long **)(this + 0x130);
  iVar6 = FUN_04d9f494(0x5a);
  iVar3 = *(int *)(this + 0xe8);
  iVar7 = FUN_04d9f494(0x19);
  iVar4 = *(int *)(this + 0xec);
  uVar5 = FUN_04d9f494(0xfa);
  uVar8 = FUN_04d9f494(0x37);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 + iVar3,iVar7 + iVar4,uVar5,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,8,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b992c0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b99248,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar10 = *(long **)(this + 0x138);
  iVar6 = FUN_04d9f494(0x168);
  iVar3 = *(int *)(this + 0xe8);
  iVar7 = FUN_04d9f494(0x19);
  iVar4 = *(int *)(this + 0xec);
  uVar5 = FUN_04d9f494(0xfa);
  uVar8 = FUN_04d9f494(0x37);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 + iVar3,iVar7 + iVar4,uVar5,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x58,pBVar1,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b98da0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b992f0,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar6 = FUN_04d9f494(0x299);
  iVar3 = *(int *)(this + 0xe8);
  iVar7 = FUN_04d9f494(0x18);
  iVar4 = *(int *)(this + 0xec);
  uVar5 = FUN_04d9f494(0x35);
  uVar8 = FUN_04d9f494(0x37);
  (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar6 + iVar3,iVar4 - iVar7,uVar5,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  InitZombie(this);
  InitSkill(this);
  (**(code **)(*(long *)this + 0x310))(this,7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

