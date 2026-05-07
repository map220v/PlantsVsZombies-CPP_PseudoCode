// Class: HotUIWidgetTrainingProgressBar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingProgressBar::StaticClassInit() */

void HotUIWidgetTrainingProgressBar::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"HotUIWidgetTrainingProgressBar");
    (*pcVar2)(plVar1,asStack_10,FUN_034bc894,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingProgressBar::StaticGetClass() */

long * HotUIWidgetTrainingProgressBar::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingProgressBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingProgressBar::init() */

void __thiscall HotUIWidgetTrainingProgressBar::init(HotUIWidgetTrainingProgressBar *this)

{
  string *extraout_x1;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x224) == -1) {
    TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_BTN_MAX]");
    FUN_054766c8(this + 0x230,auStack_10);
    FUN_05476c50(auStack_10);
  }
  else {
    Sexy::StrFormat("%d/%d",aSStack_18,(ulong)*(uint *)(this + 0x220));
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
    FUN_054766c8(this + 0x230,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingProgressBar::SetInfo(AdaptorNewPVPTrainingEntryConfig const&) */

void __thiscall
HotUIWidgetTrainingProgressBar::SetInfo
          (HotUIWidgetTrainingProgressBar *this,AdaptorNewPVPTrainingEntryConfig *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x210) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x220) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x228) = uVar1;
  init(this);
  return;
}


/* HotUIWidgetTrainingProgressBar::HotUIWidgetTrainingProgressBar() */

void __thiscall
HotUIWidgetTrainingProgressBar::HotUIWidgetTrainingProgressBar(HotUIWidgetTrainingProgressBar *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066488e0;
  AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
            ((AdaptorNewPVPTrainingEntryConfig *)(this + 0x210));
  FUN_05476574(this + 0x230);
  return;
}


/* HotUIWidgetTrainingProgressBar::StaticNew() */

HotUIWidgetTrainingProgressBar * HotUIWidgetTrainingProgressBar::StaticNew(void)

{
  HotUIWidgetTrainingProgressBar *this;
  
  this = ::operator_new(0x238);
  HotUIWidgetTrainingProgressBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingProgressBar::drawProgress(Sexy::Graphics*) */

void __thiscall
HotUIWidgetTrainingProgressBar::drawProgress(HotUIWidgetTrainingProgressBar *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar4;
  float fVar5;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  Insets aIStack_38 [8];
  int local_30;
  float local_28 [4];
  int local_18;
  int iStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_58);
  Sexy::Insets::Insets((Insets *)&local_48);
  iVar1 = FUN_034b7438(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar1,*(int *)(this + 0x54),*(int *)(this + 0x54));
  local_48 = CONCAT44(iStack_14,local_18);
  local_40 = uStack_10;
  fVar5 = (float)FUN_034b744c();
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)fVar5,(int)fVar5,*(int *)(this + 0x50),*(int *)(this + 0x54));
  local_58 = local_18;
  iStack_54 = iStack_14;
  local_50 = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_58);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3818);
  Draw3SliceImage(param_1,(Insets *)&local_18,uVar2);
  iVar1 = FUN_034b7438(2);
  Sexy::Insets::Insets
            (aIStack_38,iVar1 + local_58,iVar1 + iStack_54,(int)local_50 - iVar1,
             local_50._4_4_ - iVar1);
  local_18 = 0x3f800000;
  local_28[0] = (float)*(int *)(this + 0x220) / (float)*(int *)(this + 0x224);
  pfVar3 = eastl::min_alt<float>(local_28,(float *)&local_18);
  fVar5 = *pfVar3;
  local_30 = (int)(fVar5 * (float)local_30);
  if (0.0 < fVar5) {
    if (fVar5 == 1.0) {
      Sexy::Insets::Insets((Insets *)&local_18,aIStack_38);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3bd8;
    }
    else {
      Sexy::Insets::Insets((Insets *)&local_18,aIStack_38);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3ef8;
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Draw3SliceImage(param_1,(Insets *)&local_18,uVar2);
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3698);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,(int)local_48,local_48._4_4_,(int)local_40,local_40._4_4_);
  iVar1 = FUN_034b7438(1);
  Sexy::Insets::Insets((Insets *)local_28,0,iVar1,(int)local_50,local_50._4_4_);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x230,(Insets *)local_28,uVar2,(Insets *)&local_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingProgressBar::onDraw(Sexy::Graphics*) */

void __thiscall
HotUIWidgetTrainingProgressBar::onDraw(HotUIWidgetTrainingProgressBar *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar4;
  float fVar5;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Insets aIStack_38 [8];
  int iStack_30;
  float afStack_28 [4];
  int iStack_18;
  int iStack_14;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&iStack_58);
  Sexy::Insets::Insets((Insets *)&uStack_48);
  iVar1 = FUN_034b7438(0);
  Sexy::Insets::Insets((Insets *)&iStack_18,iVar1,iVar1,*(int *)(this + 0x54),*(int *)(this + 0x54))
  ;
  uStack_48 = CONCAT44(iStack_14,iStack_18);
  uStack_40 = uStack_10;
  fVar5 = (float)FUN_034b744c();
  Sexy::Insets::Insets
            ((Insets *)&iStack_18,(int)fVar5,(int)fVar5,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  iStack_58 = iStack_18;
  iStack_54 = iStack_14;
  uStack_50 = uStack_10;
  Sexy::Insets::Insets((Insets *)&iStack_18,(Insets *)&iStack_58);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3818);
  Draw3SliceImage(param_1,(Insets *)&iStack_18,uVar2);
  iVar1 = FUN_034b7438(2);
  Sexy::Insets::Insets
            (aIStack_38,iVar1 + iStack_58,iVar1 + iStack_54,(int)uStack_50 - iVar1,
             uStack_50._4_4_ - iVar1);
  iStack_18 = 0x3f800000;
  afStack_28[0] = (float)*(int *)(this + 0x220) / (float)*(int *)(this + 0x224);
  pfVar3 = eastl::min_alt<float>(afStack_28,(float *)&iStack_18);
  fVar5 = *pfVar3;
  iStack_30 = (int)(fVar5 * (float)iStack_30);
  if (0.0 < fVar5) {
    if (fVar5 == 1.0) {
      Sexy::Insets::Insets((Insets *)&iStack_18,aIStack_38);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3bd8;
    }
    else {
      Sexy::Insets::Insets((Insets *)&iStack_18,aIStack_38);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3ef8;
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Draw3SliceImage(param_1,(Insets *)&iStack_18,uVar2);
  }
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3698);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,(int)uStack_48,uStack_48._4_4_,(int)uStack_40,uStack_40._4_4_);
  iVar1 = FUN_034b7438(1);
  Sexy::Insets::Insets((Insets *)afStack_28,0,iVar1,(int)uStack_50,uStack_50._4_4_);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)&iStack_18,1);
  WriteWordInRect(param_1,this + 0x230,(Insets *)afStack_28,uVar2,(Insets *)&iStack_18,5,1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingProgressBar::~HotUIWidgetTrainingProgressBar() */

void __thiscall
HotUIWidgetTrainingProgressBar::~HotUIWidgetTrainingProgressBar
          (HotUIWidgetTrainingProgressBar *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066488e0;
  FUN_05476c50(this + 0x230);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIWidgetTrainingProgressBar::~HotUIWidgetTrainingProgressBar() */

void __thiscall
HotUIWidgetTrainingProgressBar::~HotUIWidgetTrainingProgressBar
          (HotUIWidgetTrainingProgressBar *this)

{
  ~HotUIWidgetTrainingProgressBar(this);
  AK::FreeHook(this);
  return;
}

