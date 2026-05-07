// Class: SalesRewardBox


/* SalesRewardBox::HideAllButtonAndAnims() */

void __thiscall SalesRewardBox::HideAllButtonAndAnims(SalesRewardBox *this)

{
  (**(code **)(**(long **)(this + 0x1d8) + 0x158))(*(long **)(this + 0x1d8),0);
  (**(code **)(**(long **)(this + 0x1d8) + 0x188))(*(long **)(this + 0x1d8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::InitShiningAnims() */

void __thiscall SalesRewardBox::InitShiningAnims(SalesRewardBox *this)

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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1f0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x148) + *(int *)(this + 0x150) / 2),
             (float)(*(int *)(this + 0x14c) + *(int *)(this + 0x154) / 2));
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
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x220);
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
/* SalesRewardBox::SetProgress(int) */

void __thiscall SalesRewardBox::SetProgress(SalesRewardBox *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x140) == *(int *)(this + 0x144)) {
    iVar3 = 0;
    iVar1 = FUN_04a58180(10);
  }
  else {
    iVar2 = *(int *)(this + 0x140) - *(int *)(this + 0x144);
    iVar1 = FUN_04a58180(10);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = ((*(int *)(this + 0x180) - iVar1) * param_1) / iVar2;
    }
  }
  iVar2 = FUN_04a58180(5);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar2 + *(int *)(this + 0x178),iVar2 + *(int *)(this + 0x17c),iVar3
             ,*(int *)(this + 0x184) - iVar1);
  *(undefined8 *)(this + 0x168) = local_18;
  *(undefined8 *)(this + 0x170) = uStack_10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SalesRewardBox::~SalesRewardBox() */

void __thiscall SalesRewardBox::~SalesRewardBox(SalesRewardBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06936bf0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06936f30;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x280));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x250));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x220));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  nop();
  PopingWidget::~PopingWidget((PopingWidget *)this);
  return;
}


/* SalesRewardBox::~SalesRewardBox() */

void __thiscall SalesRewardBox::~SalesRewardBox(SalesRewardBox *this)

{
  ~SalesRewardBox(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::InitPlantView() */

void __thiscall SalesRewardBox::InitPlantView(SalesRewardBox *this)

{
  EffectAnim_UIAnim *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  string asStack_30 [8];
  int local_28;
  undefined4 local_24;
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x250);
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  iVar3 = local_28;
  PopingWidget::GetMainRect();
  iVar8 = local_10 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar5 = FUN_04a58180(0x96);
  iVar6 = FUN_04a58180(0x5a);
  iVar1 = *(int *)(this + 0x14c);
  iVar2 = *(int *)(this + 0x154);
  iVar7 = FUN_04a58180(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar3 + iVar8) - iVar5 / 2,iVar1 + iVar2 + iVar7,iVar5,iVar6);
  *(undefined8 *)(this + 0x158) = local_18;
  *(ulong *)(this + 0x160) = CONCAT44(uStack_c,local_10);
  iVar8 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar8);
  iVar8 = FUN_04a58180(10);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_28,(float)(*(int *)(this + 0x158) + *(int *)(this + 0x160) / 2),
             (float)(iVar8 + *(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2));
  FUN_05475d88((Insets *)&local_18,asStack_30);
  EffectAnim_UIAnim::InitPlantUIAnim(0x3f845a1d,local_28,local_24,this_00,(Insets *)&local_18,1);
  std::string::~string((string *)&local_18);
  cVar4 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar4 != '\0') {
    EffectAnim_UIAnim::HideAvatarLayer(this_00);
    EffectAnim_UIAnim::PlayIdleLoop(this_00);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesRewardBox::PlayProgress() */

void __thiscall SalesRewardBox::PlayProgress(SalesRewardBox *this)

{
  SalesTimer::StartTimer((SalesTimer *)(this + 0x1b8),0.4);
  return;
}


/* SalesRewardBox::StartToShow() */

void __thiscall SalesRewardBox::StartToShow(SalesRewardBox *this)

{
  SetProgress(this,*(int *)(this + 0x138) - *(int *)(this + 0x144));
  PlayProgress(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::RecoverAllButtonAndAnims() */

void __thiscall SalesRewardBox::RecoverAllButtonAndAnims(SalesRewardBox *this)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x1d8) + 0x158))(*(long **)(this + 0x1d8),1);
  (**(code **)(**(long **)(this + 0x1d8) + 0x188))(*(long **)(this + 0x1d8),0);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x280));
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"effects_on");
    std::string::string(asStack_10,"effects_loop");
    EffectAnim_UIAnim::PlayOnceThenLoop((EffectAnim_UIAnim *)(this + 0x280),asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  StartToShow(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesRewardBox::UpdatePieceToShow() */

void __thiscall SalesRewardBox::UpdatePieceToShow(SalesRewardBox *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  
  iVar1 = *(int *)(this + 0x138);
  iVar2 = *(int *)(this + 0x144);
  iVar3 = *(int *)(this + 0x13c);
  fVar5 = (float)SalesTimer::GetTimerScale((SalesTimer *)(this + 0x1b8));
  cVar4 = SalesTimer::IsTimeUp((SalesTimer *)(this + 0x1b8));
  if (cVar4 == '\0') {
    SetProgress(this,(int)((float)(iVar1 - iVar2) + (float)iVar3 * fVar5));
    return;
  }
  SetProgress(this,(*(int *)(this + 0x138) - *(int *)(this + 0x144)) + *(int *)(this + 0x13c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::InitView() */

void __thiscall SalesRewardBox::InitView(SalesRewardBox *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PVZ2UIButton *pPVar7;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (SalesRewardBox)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_054772c4(this + 0x1d0,&DAT_056f11a8);
  iVar2 = FUN_04a58180(500);
  iVar3 = FUN_04a58180(300);
  iVar5 = *(int *)(this + 0x50) - iVar2 >> 1;
  iVar4 = FUN_04a58180(0);
  iVar1 = iVar5 + iVar2 / 2;
  iVar4 = iVar4 + (*(int *)(this + 0x54) - iVar3 >> 1);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar4,iVar2,iVar3);
  PopingWidget::SetMainRect
            ((PopingWidget *)this,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  iVar5 = FUN_04a58180(0x87);
  iVar2 = FUN_04a58180(10);
  iVar6 = FUN_04a58180(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar5 / 2,iVar2 + iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  TodStringTranslate(L"[SALES_BUY_SUCCESS_TITLE]");
  FUN_054766c8(this + 0x1c8,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c888);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c888);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = (iVar5 * 6) / 5;
  TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1d8) = pPVar7;
  FUN_05476c50(awStack_78);
  pPVar7 = *(PVZ2UIButton **)(this + 0x1d8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7cda8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7d0a8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1d8) + 0x198))
            (*(long **)(this + 0x1d8),iVar1 - ((iVar2 << 1) >> 1),(iVar4 + iVar3) - iVar5 / 2,
             iVar2 << 1,iVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d8));
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::SalesRewardBox() */

void __thiscall SalesRewardBox::SalesRewardBox(SalesRewardBox *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined ***)this = &PTR_GetClass_06936bf0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06936f30;
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  SalesTimer::SalesTimer((SalesTimer *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  FUN_05476574(this + 0x1d0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1f0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x220));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x250));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x280));
  this[0x128] = (SalesRewardBox)0x0;
  this[0x129] = (SalesRewardBox)0x0;
  *(undefined4 *)(this + 300) = 0xffffffff;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  FUN_054772c4(this + 0x1c8,&DAT_056f11a8);
  FUN_054772c4(this + 0x1d0,&DAT_056f11a8);
  *(undefined8 *)(this + 0x1d8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::InitProgressBar() */

void __thiscall SalesRewardBox::InitProgressBar(SalesRewardBox *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  char *__s;
  CachedUIResourcePtr *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *__n;
  string asStack_30 [8];
  int local_28;
  undefined4 local_24;
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0);
  PopingWidget::GetMainRect();
  iVar1 = local_28;
  PopingWidget::GetMainRect();
  iVar1 = iVar1 + local_10 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  switch(*(undefined4 *)(this + 0x130)) {
  case 2:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7cfb0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (CachedUIResourcePtr *)&DAT_06b7cc78;
    break;
  case 3:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7cc78);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (CachedUIResourcePtr *)&DAT_06b7d080;
    break;
  case 4:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7d080);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (CachedUIResourcePtr *)&DAT_06b7ccf8;
    break;
  case 5:
    this_01 = (CachedUIResourcePtr *)&DAT_06b7ccf8;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7ccf8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    break;
  default:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7cc28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (CachedUIResourcePtr *)&DAT_06b7cfb0;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e8),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (this[0x129] == (SalesRewardBox)0x0) {
    iVar2 = FUN_04a58180(0xfa);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7caf8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    iVar5 = *(int *)(this + 0x15c);
    iVar6 = *(int *)(this + 0x164);
    iVar1 = iVar1 - iVar2 / 2;
    iVar4 = FUN_04a58180(0xf);
    iVar4 = iVar5 + iVar6 + iVar4;
    Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar4,iVar2,iVar3);
    *(undefined8 *)(this + 0x178) = local_18;
    *(ulong *)(this + 0x180) = CONCAT44(uStack_c,local_10);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar8 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Insets::Insets((Insets *)&local_18,iVar1 - iVar5 / 2,iVar4,iVar5,iVar6);
    *(undefined8 *)(this + 0x198) = local_18;
    *(ulong *)(this + 0x1a0) = CONCAT44(uStack_c,local_10);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar8 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Insets::Insets((Insets *)&local_18,(iVar1 + iVar2) - iVar5 / 2,iVar4,iVar5,iVar6);
    *(undefined8 *)(this + 0x1a8) = local_18;
    *(ulong *)(this + 0x1b0) = CONCAT44(uStack_c,local_10);
  }
  else {
    __n = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18;
    std::string::string(asStack_30,"");
    nop();
    switch(*(undefined4 *)(this + 0x134)) {
    case 2:
      std::string::append(asStack_30,"POPANIM_EFFECTS_SALES_LEVELUP2",(size_t)__n);
      break;
    case 3:
      std::string::append(asStack_30,"POPANIM_EFFECTS_SALES_LEVELUP3",(size_t)__n);
      break;
    case 4:
      std::string::append(asStack_30,"POPANIM_EFFECTS_SALES_LEVELUP4",(size_t)__n);
      break;
    case 5:
      std::string::append(asStack_30,"POPANIM_EFFECTS_SALES_LEVELUP5",(size_t)__n);
      break;
    default:
      std::string::append(asStack_30,"POPANIM_EFFECTS_SALES_LEVELUP1",(size_t)__n);
    }
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar8 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    iVar5 = *(int *)(this + 0x15c);
    iVar6 = *(int *)(this + 0x164);
    iVar1 = iVar1 - iVar2 / 2;
    iVar4 = FUN_04a58180(0xf);
    iVar4 = iVar5 + iVar6 + iVar4;
    Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar4,iVar2,iVar3);
    *(undefined8 *)(this + 0x178) = local_18;
    *(ulong *)(this + 0x180) = CONCAT44(uStack_c,local_10);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,(float)(iVar1 + iVar2 / 2),(float)(iVar4 + iVar3 / 2));
    __s = (char *)FUN_0547429c(asStack_30);
    std::string::string((string *)&local_18,__s);
    EffectAnim_UIAnim::InitUIAnim
              (0x3fc00000,local_28,local_24,this + 0x280,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18,1);
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::Draw(Sexy::Graphics*) */

void __thiscall SalesRewardBox::Draw(SalesRewardBox *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  SalesRewardBox *pSVar4;
  ResourceInfo *local_28;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x220));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x220),param_1);
  }
  PopingWidget::GetMainRect();
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d058);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
  if (this[0x129] == (SalesRewardBox)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x178));
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7caf8);
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x168));
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c900);
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1e0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x198));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_18);
    local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1e8));
    pSVar4 = this + 0x1a8;
  }
  else {
    local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1e0));
    pSVar4 = this + 0x178;
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)pSVar4);
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_28,aIStack_18);
  cVar1 = FUN_04a578f4(this[0x115]);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1c8,this + 0x148,uVar2,aIStack_18,5,1);
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x250));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x250),param_1);
    }
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x280));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x280),param_1);
    }
    uVar2 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1d0,this + 0x188,uVar2,aIStack_18,5,1);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1f0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SalesRewardBox::ButtonDepress(int) */

SalesRewardBox * __thiscall SalesRewardBox::ButtonDepress(SalesRewardBox *this,int param_1)

{
  byte bVar1;
  SalesUI *this_00;
  SalesRewardBox *pSVar2;
  
  if (param_1 == 0) {
    bVar1 = LawnApp::IsSalesUIValid(gLawnApp);
    this = (SalesRewardBox *)(ulong)bVar1;
    if (bVar1 != 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      this_00 = (SalesUI *)LawnApp::GetSalesUI(gLawnApp);
      pSVar2 = (SalesRewardBox *)SalesUI::KillRewardBox(this_00);
      return pSVar2;
    }
  }
  return this;
}


/* non-virtual thunk to SalesRewardBox::ButtonDepress(int) */

void __thiscall SalesRewardBox::ButtonDepress(SalesRewardBox *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SalesRewardBox::InitDescription() */

void __thiscall SalesRewardBox::InitDescription(SalesRewardBox *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  long lVar8;
  MagentoProductProps *this_00;
  int iVar9;
  string *psVar10;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  string asStack_38 [8];
  int local_30 [4];
  undefined4 local_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar6 = local_18 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar3 = FUN_04a58180(500);
  uVar4 = FUN_04a58180(0x1e);
  iVar9 = *(int *)(this + 0x17c);
  iVar1 = *(int *)(this + 0x184);
  psVar10 = (string *)(ulong)uVar4;
  iVar5 = FUN_04a58180(0xf);
  Sexy::Insets::Insets
            ((Insets *)&local_20,(local_30[0] + iVar6) - iVar3 / 2,iVar9 + iVar1 + iVar5,iVar3,uVar4
            );
  *(ulong *)(this + 0x188) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(this + 400) = CONCAT44(uStack_14,local_18);
  iVar6 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar6);
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  if (this[0x129] == (SalesRewardBox)0x0) {
    std::string::string(asStack_38,"iOS PvZ2 Plant Store");
    std::string::string((string *)local_30,"Plant Pieces");
    std::string::string((string *)&local_20,"plant");
    Magento::FindStoreProduct
              ((Magento *)asStack_38,(string *)local_30,(string *)&local_20,asStack_50,psVar10);
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)local_30);
    nop();
    std::string::~string(asStack_38);
    nop();
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if ((cVar2 == '\0') || (iVar6 = 0, *(int *)(this + 0x130) < 0)) {
      iVar9 = *(int *)(this + 0x140);
    }
    else {
      do {
        GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_20);
        if (iVar6 == 0) {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          iVar9 = *(int *)(lVar8 + 0x90);
        }
        else {
          this_00 = (MagentoProductProps *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          MagentoProductProps::GetCurrentLevelPriceData(this_00,iVar6,(LevelUpPriceData *)&local_20)
          ;
          iVar9 = iStack_1c;
        }
        if (iVar6 < *(int *)(this + 0x130)) {
          *(int *)(this + 0x144) = *(int *)(this + 0x144) + iVar9;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + *(int *)(this + 0x140);
        *(int *)(this + 0x140) = iVar9;
      } while (iVar6 <= *(int *)(this + 0x130));
    }
    iVar6 = *(int *)(this + 0x13c);
    iVar1 = *(int *)(this + 0x138);
    TodStringTranslate(L"[SALES_PIECES_ADDED]");
    TodReplaceNumberString((wstring *)local_30,L"{PIECES}",iVar9 - (iVar1 + iVar6));
    FUN_054766c8(this + 0x1d0,(Insets *)&local_20);
    FUN_05476c50((Insets *)&local_20);
    FUN_05476c50((string *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_48);
    Plant::GetFormattedNameString((Plant *)asStack_38,(Insets *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    TodStringTranslate(L"[SALES_LEVELUP]");
    TodReplaceString((wstring *)local_30,L"{PLANT}",(wstring *)asStack_38);
    FUN_054766c8(this + 0x1d0,(Insets *)&local_20);
    FUN_05476c50((Insets *)&local_20);
    FUN_05476c50((string *)local_30);
    FUN_05476c50((wstring *)asStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SalesRewardBox::InitBox(bool, int, int, int, int, int) */

void __thiscall
SalesRewardBox::InitBox
          (SalesRewardBox *this,bool param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  *(int *)(this + 300) = param_2;
  *(int *)(this + 0x130) = param_3;
  *(int *)(this + 0x134) = param_4;
  *(int *)(this + 0x138) = param_5;
  *(int *)(this + 0x13c) = param_6;
  this[0x129] = (SalesRewardBox)param_1;
  this[0x128] = (SalesRewardBox)0x1;
  InitPlantView(this);
  InitProgressBar(this);
  InitDescription(this);
  InitShiningAnims(this);
  return;
}


/* SalesRewardBox::Update() */

void __thiscall SalesRewardBox::Update(SalesRewardBox *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x220));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x220));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1f0));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1f0));
  }
  cVar1 = FUN_04a578f4(this[0x115]);
  if (cVar1 == '\0') {
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x250));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x250));
    }
    cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x280));
    if (cVar1 != '\0') {
      EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x280));
    }
    if (this[0x129] == (SalesRewardBox)0x0) {
      cVar1 = SalesTimer::IsTimeUp((SalesTimer *)(this + 0x1b8));
      if (cVar1 != '\0') {
        SetProgress(this,(*(int *)(this + 0x138) - *(int *)(this + 0x144)) + *(int *)(this + 0x13c))
        ;
        return;
      }
      UpdatePieceToShow(this);
      return;
    }
  }
  return;
}

