// Class: PlantGeneDisplayView


/* PlantGeneDisplayView::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantGeneDisplayView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneDisplayView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneDisplayView::ScrollTargetReached(PlantGeneDisplayView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneDisplayView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantGeneDisplayView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneDisplayView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneDisplayView::ScrollTargetInterrupted(PlantGeneDisplayView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneDisplayView::GetCloseButton() */

undefined8 __thiscall PlantGeneDisplayView::GetCloseButton(PlantGeneDisplayView *this)

{
  return *(undefined8 *)(this + 0x100);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneDisplayView::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneDisplayView::Draw(PlantGeneDisplayView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  float fVar8;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar7 = *(Image **)(this + 0xe8);
  if (pIVar7 != (Image *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    fVar8 = (float)*(int *)(pIVar7 + 0x38) / (float)*(int *)(pIVar7 + 0x3c);
    if (fVar8 <= (float)iVar1 / (float)iVar2) {
      fVar8 = (float)iVar1 / fVar8;
      Sexy::Graphics::DrawImage
                (param_1,pIVar7,0,(int)((float)(iVar2 / 2) - fVar8 * 0.5),iVar1,(int)fVar8);
    }
    else {
      fVar8 = fVar8 * (float)iVar2;
      Sexy::Graphics::DrawImage
                (param_1,pIVar7,(int)((float)(iVar1 / 2) - fVar8 * 0.5),0,(int)fVar8,iVar2);
    }
  }
  pIVar7 = *(Image **)(this + 0xf0);
  if (pIVar7 != (Image *)0x0) {
    iVar2 = FUN_03800484(0x7d);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03800484(0x1e);
    iVar4 = FUN_03800484(0xfa);
    iVar5 = FUN_03800484(0x2d);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 / 2 - iVar2,iVar3,iVar4,iVar5);
  }
  iVar2 = FUN_03800484(0x7d);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03800484(0x1e);
  iVar4 = FUN_03800484(0xfa);
  iVar5 = FUN_03800484(0x2d);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2 - iVar2,iVar3,iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneDisplayView::StartToturial() */

void __thiscall PlantGeneDisplayView::StartToturial(PlantGeneDisplayView *this)

{
  char cVar1;
  int iVar2;
  PlantGeneEnhancementView *this_00;
  undefined8 *puVar3;
  ulong uVar4;
  GameMaskUI *this_01;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  cVar1 = PlantGeneEnhancementView::IsOnToturial(this_00);
  if (cVar1 != '\0') {
    uVar5 = 0;
    LawnApp::KillGameMaskUI(gLawnApp);
    while( true ) {
      uVar6 = *(undefined8 *)(this + 0x110);
      uVar4 = FUN_037fe9f0(uVar6,*(undefined8 *)(this + 0x118));
      if (uVar4 <= uVar5) break;
      puVar3 = (undefined8 *)FUN_037fe9fc(uVar6,uVar5);
      iVar2 = PlantGeneItem::GetGeneID((PlantGeneItem *)*puVar3);
      if (iVar2 == 0x11d82) {
        puVar3 = (undefined8 *)FUN_037fe9fc(*(undefined8 *)(this + 0x110),uVar5);
        uVar6 = *puVar3;
        goto LAB_03803eec;
      }
      uVar5 = uVar5 + 1;
    }
    uVar6 = 0;
LAB_03803eec:
    std::string::string(asStack_20,"");
    Sexy::Insets::Insets(aIStack_18);
    this_01 = (GameMaskUI *)GameMaskUI::ShowMask(uVar6,2,asStack_20,aIStack_18);
    GameMaskUI::EnableScale(this_01,true);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneDisplayView::RefreshProgress() */

void __thiscall PlantGeneDisplayView::RefreshProgress(PlantGeneDisplayView *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_gene_factor");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x108) = uVar1;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_univeral_gene_sequence");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  *(undefined4 *)(this + 0x10c) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneDisplayView::ButtonDepress(int) */

PlantGeneDisplayView * __thiscall
PlantGeneDisplayView::ButtonDepress(PlantGeneDisplayView *this,int param_1)

{
  byte bVar1;
  PlantGeneEnhancementView *pPVar2;
  PlantGeneDisplayView *pPVar3;
  
  if (param_1 == 0x58) {
    pPVar2 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    PlantGeneEnhancementView::ClosePlantGeneDisplayView(pPVar2);
    pPVar2 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
    bVar1 = PlantGeneEnhancementView::IsOnToturial(pPVar2);
    this = (PlantGeneDisplayView *)(ulong)bVar1;
    if (bVar1 != 0) {
      pPVar2 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
      pPVar3 = (PlantGeneDisplayView *)PlantGeneEnhancementView::onQueuedNarrationFinished(pPVar2);
      return pPVar3;
    }
  }
  return this;
}


/* non-virtual thunk to PlantGeneDisplayView::ButtonDepress(int) */

void __thiscall PlantGeneDisplayView::ButtonDepress(PlantGeneDisplayView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneDisplayView::PlantGeneDisplayView() */

void __thiscall PlantGeneDisplayView::PlantGeneDisplayView(PlantGeneDisplayView *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0669f7f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669fb28;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneDisplayView_0669fb70;
  FUN_05476574(this + 0xf8);
  *(undefined8 *)(this + 0x100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshProgress);
  Sexy::Delegate0::Delegate0<PlantGeneDisplayView,void(PlantGeneDisplayView::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshGeneEnhancement,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGeneDisplayView::~PlantGeneDisplayView() */

void __thiscall PlantGeneDisplayView::~PlantGeneDisplayView(PlantGeneDisplayView *this)

{
  *(undefined ***)this = &PTR_GetClass_0669f7f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669fb28;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneDisplayView_0669fb70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantGeneItem*,std::allocator<PlantGeneItem*>>::~vector
            ((vector<PlantGeneItem*,std::allocator<PlantGeneItem*>> *)(this + 0x110));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantGeneDisplayView::~PlantGeneDisplayView() */

void __thiscall PlantGeneDisplayView::~PlantGeneDisplayView(PlantGeneDisplayView *this)

{
  ~PlantGeneDisplayView(this + -0xe0);
  return;
}


/* PlantGeneDisplayView::~PlantGeneDisplayView() */

void __thiscall PlantGeneDisplayView::~PlantGeneDisplayView(PlantGeneDisplayView *this)

{
  ~PlantGeneDisplayView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGeneDisplayView::~PlantGeneDisplayView() */

void __thiscall PlantGeneDisplayView::~PlantGeneDisplayView(PlantGeneDisplayView *this)

{
  ~PlantGeneDisplayView(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneDisplayView::InitView(int) */

void __thiscall PlantGeneDisplayView::InitView(PlantGeneDisplayView *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  PVZ2UIButton *pPVar6;
  GeneEnhancement *this_00;
  long lVar7;
  vector *pvVar8;
  long *plVar9;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  PlantGeneDisplayView *local_78;
  int local_70;
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::string::string(asStack_40,"BACKGROUND");
  uVar5 = FUN_03802028(param_1,asStack_40);
  *(undefined8 *)(this + 0xe8) = uVar5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"TITLE");
  uVar5 = FUN_03802028(param_1,asStack_40);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string(asStack_40);
  nop();
  FUN_037fe070(asStack_a0,param_1);
  std::operator+("[",asStack_a0);
  std::operator+(asStack_98,"]");
  Sexy::ToWString(asStack_90);
  TodStringTranslate(awStack_88);
  TodStringTranslate(L"[GENE_SEQUENCE_GROUP]");
  std::operator+(awStack_80,(wstring *)&local_78);
  FUN_054766c8(this + 0xf8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50((wstring *)&local_78);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  std::string::~string(asStack_a0);
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x58,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar6;
  FUN_05476c50((wstring *)&local_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06ab2598,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ab25f8,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)asStack_40);
  plVar9 = *(long **)(this + 0x100);
  uVar1 = FUN_03800484(0xf);
  uVar2 = FUN_03800484(8);
  uVar3 = FUN_03800484(0x37);
  uVar4 = FUN_03800484(0x32);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar1,uVar2,uVar3,uVar4);
  this_00 = (GeneEnhancement *)
            (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  local_78 = this;
  local_70 = param_1;
  GeneEnhancement::GetGeneConfig(this_00);
  switch(param_1) {
  case 0x65:
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    pvVar8 = (vector *)(lVar7 + 0x10);
    break;
  case 0x66:
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    pvVar8 = (vector *)(lVar7 + 0x28);
    break;
  case 0x67:
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    pvVar8 = (vector *)(lVar7 + 0x40);
    break;
  case 0x68:
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    pvVar8 = (vector *)(lVar7 + 0x58);
    break;
  case 0x69:
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    pvVar8 = (vector *)(lVar7 + 0x70);
    break;
  default:
    goto switchD_038127d0_default;
  }
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             asStack_40,pvVar8);
  FUN_03812134((wstring *)&local_78,asStack_40);
  std::vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGene>,std::allocator<Sexy::RtWeakPtr<PlantGene>>> *)
             asStack_40);
switchD_038127d0_default:
  RefreshProgress(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

