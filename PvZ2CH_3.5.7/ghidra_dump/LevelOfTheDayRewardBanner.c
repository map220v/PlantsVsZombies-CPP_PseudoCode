// Class: LevelOfTheDayRewardBanner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardBanner::Draw(Sexy::Graphics*) */

void __thiscall LevelOfTheDayRewardBanner::Draw(LevelOfTheDayRewardBanner *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  PrimeTextWidget *this_00;
  float fVar4;
  float fVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
  Draw3SliceImage(param_1,aIStack_18,pRVar3);
  iVar1 = FUN_049bcb8c(6);
  iVar2 = FUN_049bcb8c(0x20);
  this_00 = *(PrimeTextWidget **)(this + 0xe0);
  fVar4 = (float)*(int *)(this_00 + 0x54);
  fVar5 = ((float)*(int *)(this + 0x54) - (float)iVar2) -
          (fVar4 + (float)*(int *)(*(long *)(this + 0xe8) + 0x54) + (float)iVar1);
  iVar2 = FUN_049bcb8c(0x1e);
  Sexy::PrimeTextWidget::SetPosition(this_00,0,(int)(fVar5 * 0.5 - (float)iVar2));
  iVar2 = FUN_049bcb8c(500);
  Sexy::PrimeTextWidget::SetPosition
            (*(PrimeTextWidget **)(this + 0xe8),(*(int *)(this + 0x50) - iVar2) / 2,
             (int)((float)iVar1 + fVar4 + fVar5 * 0.5));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardBanner::Initialize(std::string const&, std::wstring const&, std::wstring
   const&, Sexy::Color const&) */

void __thiscall
LevelOfTheDayRewardBanner::Initialize
          (LevelOfTheDayRewardBanner *this,string *param_1,wstring *param_2,wstring *param_3,
          Color *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  PrimeText_PotentialText *pPVar6;
  PrimeTextWidget *pPVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x6d] = (LevelOfTheDayRewardBanner)0x0;
  pcVar4 = (char *)FUN_0547429c(param_1);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar4);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32);
  iVar1 = *(int *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
  iVar3 = *(int *)(this + 0x50);
  TodStringTranslate(param_2);
  Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)param_4);
  pPVar6 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Line
                     ((float)iVar1,(float)iVar2,(float)iVar3,uVar5,aRStack_38,1,aCStack_30);
  pPVar7 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar7,pPVar6);
  *(PrimeTextWidget **)(this + 0xe0) = pPVar7;
  FUN_05476c50(aRStack_38);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  iVar1 = *(int *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
  iVar3 = FUN_049bcb8c(500);
  TodStringTranslate(param_3);
  Sexy::Insets::Insets((Insets *)aCStack_30,(Insets *)param_4);
  pPVar6 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Line
                     ((float)iVar1,(float)iVar2,(float)iVar3,uVar5,aRStack_38,1,aCStack_30);
  pPVar7 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar7,pPVar6);
  *(PrimeTextWidget **)(this + 0xe8) = pPVar7;
  FUN_05476c50(aRStack_38);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayRewardBanner::LevelOfTheDayRewardBanner() */

void __thiscall
LevelOfTheDayRewardBanner::LevelOfTheDayRewardBanner(LevelOfTheDayRewardBanner *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06926490;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b74c30);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xf0));
  this[0x108] = (LevelOfTheDayRewardBanner)0x0;
  return;
}


/* LevelOfTheDayRewardBanner::~LevelOfTheDayRewardBanner() */

void __thiscall
LevelOfTheDayRewardBanner::~LevelOfTheDayRewardBanner(LevelOfTheDayRewardBanner *this)

{
  *(undefined ***)this = &PTR_GetClass_06926490;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  CurveSequence<float>::~CurveSequence((CurveSequence<float> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfTheDayRewardBanner::~LevelOfTheDayRewardBanner() */

void __thiscall
LevelOfTheDayRewardBanner::~LevelOfTheDayRewardBanner(LevelOfTheDayRewardBanner *this)

{
  ~LevelOfTheDayRewardBanner(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfTheDayRewardBanner::Update() */

void __thiscall LevelOfTheDayRewardBanner::Update(LevelOfTheDayRewardBanner *this)

{
  float fVar1;
  
  if (this[0x108] != (LevelOfTheDayRewardBanner)0x0) {
    fVar1 = (float)PVZ_T();
    fVar1 = (float)CurveSequence<float>::GetValueAt((CurveSequence<float> *)(this + 0xf0),fVar1);
    *(int *)(this + 0x4c) = (int)fVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardBanner::AnimateDown() */

void __thiscall LevelOfTheDayRewardBanner::AnimateDown(LevelOfTheDayRewardBanner *this)

{
  CurveSequence<float> *this_00;
  int iVar1;
  SalesProgressBar *this_01;
  float fVar2;
  float local_c;
  long local_8;
  
  this_00 = (CurveSequence<float> *)(this + 0xf0);
  this[0x108] = (LevelOfTheDayRewardBanner)0x1;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  local_c = (float)*(int *)(this + 0x4c);
  CurveSequence<float>::StartSequence(this_00,fVar2,&local_c);
  local_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x3f000000,this_00,&local_c,2);
  this_01 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  iVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  local_c = (float)-iVar1 * 0.1;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x3e4ccccd,this_00,&local_c,4);
  local_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)0x3e800000,this_00,&local_c,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

