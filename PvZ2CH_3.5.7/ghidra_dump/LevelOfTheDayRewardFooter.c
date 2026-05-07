// Class: LevelOfTheDayRewardFooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardFooter::Draw(Sexy::Graphics*) */

void __thiscall LevelOfTheDayRewardFooter::Draw(LevelOfTheDayRewardFooter *this,Graphics *param_1)

{
  RtMixedPtrBase *pRVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ResourceInfo *pRVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar12;
  PrimeTextWidget *pPVar13;
  float fVar14;
  float fVar15;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  pRVar1 = (RtMixedPtrBase *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  cVar4 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar4 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    pSVar12 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar5 = *(int *)(this + 0x48);
    iVar6 = *(int *)(this + 0x4c);
    pSVar12 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar2 = *(int *)(this + 0x50);
    iVar3 = *(int *)(this + 0x54);
    pSVar12 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Insets::Insets((Insets *)&local_18,iVar5,iVar6 - iVar9,iVar2,iVar3 + iVar10);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(param_1 + 0x30) = uStack_10;
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    iVar5 = *(int *)(this + 0x50);
    iVar6 = FUN_049bcb8c(0x10);
    DrawImageCentered(param_1,(Image *)pRVar11,(float)iVar5 - (float)iVar7 * 0.5,
                      (float)iVar6 - (float)iVar8 * 0.5,3,1.0,1.0);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0xd8);
  cVar4 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar4 != '\0') {
    if (this[0x111] == (LevelOfTheDayRewardFooter)0x0) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
      DrawImageCentered(param_1,(Image *)pRVar11,(float)*(int *)(this + 0x50) * 0.5,
                        (float)*(int *)(this + 0x54) * 0.5,3,1.0,1.0);
    }
    else {
      Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
      Draw3SliceImage(param_1,(Insets *)&local_18,pRVar11);
    }
  }
  iVar5 = FUN_049bcb8c(0);
  fVar15 = (float)iVar5;
  iVar5 = FUN_049bcb8c(0x20);
  pPVar13 = *(PrimeTextWidget **)(this + 0xe8);
  if (pPVar13 == (PrimeTextWidget *)0x0) {
    pPVar13 = *(PrimeTextWidget **)(this + 0xf0);
    if (pPVar13 == (PrimeTextWidget *)0x0) goto LAB_049bce18;
    fVar15 = (((float)*(int *)(this + 0x54) - (float)*(int *)(pPVar13 + 0x54)) -
             ((float)iVar5 + fVar15)) + fVar15;
  }
  else {
    if (*(long *)(this + 0xf0) == 0) {
      fVar14 = (float)*(int *)(this + 0x54);
    }
    else {
      fVar14 = (float)*(int *)(this + 0x54) - (float)*(int *)(*(long *)(this + 0xf0) + 0x54);
    }
    fVar14 = fVar14 - ((float)iVar5 + fVar15 + (float)*(int *)(pPVar13 + 0x54));
    fVar15 = fVar14 + fVar15 + (float)*(int *)(pPVar13 + 0x54);
    Sexy::PrimeTextWidget::GetPosition();
    iVar5 = local_18;
    iVar6 = FUN_049bcb8c(0x1e);
    Sexy::PrimeTextWidget::SetPosition(pPVar13,iVar5,(int)(fVar14 - (float)iVar6));
    pPVar13 = *(PrimeTextWidget **)(this + 0xf0);
  }
  if (pPVar13 != (PrimeTextWidget *)0x0) {
    Sexy::PrimeTextWidget::GetPosition();
    Sexy::PrimeTextWidget::SetPosition(pPVar13,local_18,(int)fVar15);
  }
LAB_049bce18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardFooter::Initialize(std::string const&, std::string const&, std::wstring
   const&, std::wstring const&, Sexy::Color const&) */

void __thiscall
LevelOfTheDayRewardFooter::Initialize
          (LevelOfTheDayRewardFooter *this,string *param_1,string *param_2,wstring *param_3,
          wstring *param_4,Color *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  PrimeText_PotentialText *pPVar5;
  PrimeTextWidget *pPVar6;
  int iVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x6d] = (LevelOfTheDayRewardFooter)0x0;
  pcVar3 = (char *)FUN_0547429c(param_2);
  iVar7 = *(int *)(this + 0x50);
  uVar8 = 1;
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar3);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  this[0x111] = (LevelOfTheDayRewardFooter)0x1;
  iVar2 = FUN_0547490c(param_1,"progressive");
  if (iVar2 == 0) {
    uVar8 = 2;
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
              (aCStack_30,"IMAGE_UI_LEVELOFTHEDAY_PROGRESSIVE_FLO");
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
    this[0x111] = (LevelOfTheDayRewardFooter)0x0;
    iVar7 = *(int *)(this + 0x50) / 2;
  }
  cVar1 = FUN_054765e8(param_3);
  if (cVar1 == '\0') {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
    TodStringTranslate(param_3);
    Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)param_5);
    pPVar5 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Line(0,0,(float)iVar7,uVar4,aRStack_38,1,aCStack_30);
    pPVar6 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar6,pPVar5);
    *(PrimeTextWidget **)(this + 0xe8) = pPVar6;
    FUN_05476c50(aRStack_38);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  }
  cVar1 = FUN_054765e8(param_4);
  if (cVar1 == '\0') {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
    TodStringTranslate(param_4);
    Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)param_5);
    pPVar5 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Line(0,0,(float)iVar7,uVar4,aRStack_38,uVar8,aCStack_30);
    pPVar6 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar6,pPVar5);
    *(PrimeTextWidget **)(this + 0xf0) = pPVar6;
    FUN_05476c50(aRStack_38);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayRewardFooter::LevelOfTheDayRewardFooter() */

void __thiscall
LevelOfTheDayRewardFooter::LevelOfTheDayRewardFooter(LevelOfTheDayRewardFooter *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069267b0;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b74c30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xf8));
  this[0x110] = (LevelOfTheDayRewardFooter)0x0;
  return;
}


/* LevelOfTheDayRewardFooter::~LevelOfTheDayRewardFooter() */

void __thiscall
LevelOfTheDayRewardFooter::~LevelOfTheDayRewardFooter(LevelOfTheDayRewardFooter *this)

{
  *(undefined ***)this = &PTR_GetClass_069267b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  CurveSequence<float>::~CurveSequence((CurveSequence<float> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfTheDayRewardFooter::~LevelOfTheDayRewardFooter() */

void __thiscall
LevelOfTheDayRewardFooter::~LevelOfTheDayRewardFooter(LevelOfTheDayRewardFooter *this)

{
  ~LevelOfTheDayRewardFooter(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDayRewardFooter::Update() */

void __thiscall LevelOfTheDayRewardFooter::Update(LevelOfTheDayRewardFooter *this)

{
  float fVar1;
  
  if (this[0x110] != (LevelOfTheDayRewardFooter)0x0) {
    fVar1 = (float)PVZ_T();
    fVar1 = (float)CurveSequence<float>::GetValueAt((CurveSequence<float> *)(this + 0xf8),fVar1);
    *(int *)(this + 0x4c) = (int)fVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardFooter::AnimateUp() */

void __thiscall LevelOfTheDayRewardFooter::AnimateUp(LevelOfTheDayRewardFooter *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  SalesProgressBar *this_00;
  float fVar4;
  float local_c;
  long local_8;
  
  iVar1 = *(int *)(this + 0x4c);
  this[0x110] = (LevelOfTheDayRewardFooter)0x1;
  *(int *)(this + 0x4c) = iVar1 + *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  if (cVar2 != '\0') {
    this_00 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + iVar3;
  }
  fVar4 = (float)PVZ_T();
  local_c = (float)*(int *)(this + 0x4c);
  CurveSequence<float>::StartSequence((CurveSequence<float> *)(this + 0xf8),fVar4,&local_c);
  local_c = (float)iVar1;
  CurveSequence<float>::AddCurve
            ((CurveSequence<float> *)0x3f000000,(CurveSequence<float> *)(this + 0xf8),&local_c,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

