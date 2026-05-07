// Class: AnniversaryTreasureJackPotWidget


/* AnniversaryTreasureJackPotWidget::HideAllButtonAndAnims() */

void __thiscall
AnniversaryTreasureJackPotWidget::HideAllButtonAndAnims(AnniversaryTreasureJackPotWidget *this)

{
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  return;
}


/* AnniversaryTreasureJackPotWidget::RecoverAllButtonAndAnims() */

void __thiscall
AnniversaryTreasureJackPotWidget::RecoverAllButtonAndAnims(AnniversaryTreasureJackPotWidget *this)

{
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotWidget::InitShiningAnims() */

void __thiscall
AnniversaryTreasureJackPotWidget::InitShiningAnims(AnniversaryTreasureJackPotWidget *this)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x148);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar1,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x178);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotWidget::~AnniversaryTreasureJackPotWidget() */

void __thiscall
AnniversaryTreasureJackPotWidget::~AnniversaryTreasureJackPotWidget
          (AnniversaryTreasureJackPotWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06709300;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06708fc0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x178));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureJackPotWidget::~AnniversaryTreasureJackPotWidget() */

void __thiscall
AnniversaryTreasureJackPotWidget::~AnniversaryTreasureJackPotWidget
          (AnniversaryTreasureJackPotWidget *this)

{
  ~AnniversaryTreasureJackPotWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotWidget::AnniversaryTreasureJackPotWidget() */

void __thiscall
AnniversaryTreasureJackPotWidget::AnniversaryTreasureJackPotWidget
          (AnniversaryTreasureJackPotWidget *this)

{
  int iVar1;
  int iVar2;
  LawnApp *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PVZ2UIButton *pPVar7;
  long *plVar8;
  code *pcVar9;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06708fc0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06709300;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  *(undefined8 *)(this + 0x138) = 0;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x140));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x178));
  this_00 = gLawnApp;
  std::string::string(asStack_40,"Sales_Effect");
  LawnApp::LoadGroup(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this[0x59] = (AnniversaryTreasureJackPotWidget)0x0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  Sexy::Insets::Insets((Insets *)asStack_40,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8))
  ;
  PopingWidget::SetMainRect((PopingWidget *)this,asStack_40);
  pPVar7 = *(PVZ2UIButton **)(this + 0x138);
  if (pPVar7 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,400,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)asStack_40
              );
    *(PVZ2UIButton **)(this + 0x138) = pPVar7;
    FUN_05476c50(aPStack_78);
    pPVar7 = *(PVZ2UIButton **)(this + 0x138);
    if (pPVar7 == (PVZ2UIButton *)0x0) goto LAB_03a4e3dc;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac54f8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ac5768,3);
  PVZ2UIButton::SetDialogStates(pPVar7,aPStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x138);
  pcVar9 = *(code **)(*plVar8 + 0x1a0);
  iVar3 = FUN_03a4d834(0x50);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03a4d834(0x78);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_03a4d834(0xb4);
  Sexy::Insets::Insets((Insets *)asStack_40,iVar1 / 2 - iVar3,iVar4 + iVar2 / 2,iVar5,iVar3);
  (*pcVar9)(plVar8,asStack_40);
  plVar8 = *(long **)(this + 0x138);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar8,uVar6);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x138));
LAB_03a4e3dc:
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotWidget::Draw(Sexy::Graphics*) */

void __thiscall
AnniversaryTreasureJackPotWidget::Draw(AnniversaryTreasureJackPotWidget *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  string asStack_48 [8];
  string asStack_40 [4];
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x178));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x178),param_1);
  }
  cVar2 = FUN_03a4cda0(this[0x115]);
  if (cVar2 == '\0') {
    iVar4 = FUN_03a4d834(100);
    iVar6 = *(int *)(this + 0x50);
    iVar1 = *(int *)(this + 0x54);
    iVar5 = FUN_03a4d834(200);
    Sexy::Insets::Insets((Insets *)&local_38,iVar6 / 2 - iVar4,iVar1 / 2 - iVar4,iVar5,iVar5);
    iVar6 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar6);
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_48);
    fVar12 = ((float)local_30 * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar11 = ((float)local_2c * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(asStack_40,aRStack_18);
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)asStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)local_38 + (float)*(int *)(this_01 + 0x30) * fVar12),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x34) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x2c)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)aRStack_18,
               (int)((float)local_38 + (float)*(int *)(this_01 + 0x18) * fVar12),
               (int)((float)local_34 + (float)*(int *)(this_01 + 0x1c) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x14)));
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar3) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aRStack_18,(TRect *)(this_01 + 8));
    }
    std::string::~string(asStack_48);
  }
  else {
    iVar4 = FUN_03a4d834(100);
    iVar6 = *(int *)(this + 0x50);
    iVar1 = *(int *)(this + 0x54);
    iVar5 = FUN_03a4d834(200);
    Sexy::Insets::Insets(aIStack_28,iVar6 / 2 - iVar4,iVar1 / 2 - iVar4,iVar5,iVar5);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x130));
    if (bVar3) {
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x130));
      Sexy::Insets::Insets((Insets *)aRStack_18,aIStack_28);
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar8,(Insets *)aRStack_18);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x128));
    }
    else {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x128));
    }
    if (bVar3) {
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x128));
      Sexy::Insets::Insets((Insets *)aRStack_18,aIStack_28);
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar8,(Insets *)aRStack_18);
    }
  }
  Sexy::StrFormat("x%d",asStack_40,(ulong)*(uint *)(this + 0x144));
  Sexy::ToWString(asStack_40);
  iVar4 = FUN_03a4d834(100);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_03a4d834(0x32);
  iVar1 = *(int *)(this + 0x54);
  iVar7 = FUN_03a4d834(200);
  Sexy::Insets::Insets(aIStack_28,iVar6 / 2 - iVar4,iVar5 + iVar1 / 2,iVar7,iVar5);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Color::Color((Color *)aRStack_18,1);
  PopingWidget::WritePopingWordInRect
            ((PopingWidget *)this,param_1,&local_38,aIStack_28,uVar9,(Color *)aRStack_18,5,1);
  FUN_05476c50(&local_38);
  std::string::~string(asStack_40);
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x148));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x148),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotWidget::InitBonus(std::pair<int, int> const&) */

void __thiscall
AnniversaryTreasureJackPotWidget::InitBonus(AnniversaryTreasureJackPotWidget *this,pair *param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  CachedUIResourcePtr *this_00;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<int,int>::operator=((pair<int,int> *)(this + 0x140),param_1);
  iVar2 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar4 = StringHelper::ToImage((string *)(lVar4 + 0x40),false);
  if (lVar4 == 0) {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x128));
  }
  else {
    Sexy::BaseResource::GetRtId();
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x128),aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    switch(*(undefined4 *)(lVar4 + 0xd0)) {
    default:
      goto switchD_03a50d40_caseD_0;
    case 1:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac55b0;
      break;
    case 2:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac5620;
      break;
    case 3:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac5670;
      break;
    case 4:
      this_00 = (CachedUIResourcePtr *)&DAT_06ac56c8;
    }
  }
  else {
switchD_03a50d40_caseD_0:
    this_00 = (CachedUIResourcePtr *)&DAT_06ac5560;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_00);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnniversaryTreasureJackPotWidget::ButtonDepress(int) */

void __thiscall
AnniversaryTreasureJackPotWidget::ButtonDepress(AnniversaryTreasureJackPotWidget *this,int param_1)

{
  PlantAccessoryUI *this_00;
  UIAnniversaryTreasure *this_01;
  
  if (param_1 != 400) {
    return;
  }
  this_00 = (PlantAccessoryUI *)UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr();
  PlantAccessoryUI::CloseAccessorySuperPacket(this_00);
  this_01 = (UIAnniversaryTreasure *)UISingletonDialog<UIAnniversaryTreasure>::GetSingletonPtr();
  UIAnniversaryTreasure::JackPotAnimFinish(this_01);
  return;
}


/* non-virtual thunk to AnniversaryTreasureJackPotWidget::ButtonDepress(int) */

void __thiscall
AnniversaryTreasureJackPotWidget::ButtonDepress(AnniversaryTreasureJackPotWidget *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* AnniversaryTreasureJackPotWidget::Update() */

void __thiscall AnniversaryTreasureJackPotWidget::Update(AnniversaryTreasureJackPotWidget *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x178));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x178));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x148));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x148));
  return;
}

