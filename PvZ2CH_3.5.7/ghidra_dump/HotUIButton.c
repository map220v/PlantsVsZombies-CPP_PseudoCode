// Class: HotUIButton


/* HotUIButton::SetUpImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall HotUIButton::SetUpImage(HotUIButton *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x248),param_2);
  initializeButtonStates(this);
  setButtonSize(this);
  return;
}


/* HotUIButton::SetDownImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall HotUIButton::SetDownImage(HotUIButton *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x250),param_2);
  initializeButtonStates(this);
  setButtonSize(this);
  return;
}


/* HotUIButton::GetUpImage() */

RtWeakPtr<Sexy::SoundResource> * HotUIButton::GetUpImage(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x248));
  return in_x8;
}


/* HotUIButton::GetDownImage() */

RtWeakPtr<Sexy::SoundResource> * HotUIButton::GetDownImage(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x250));
  return in_x8;
}


/* HotUIButton::SetDisabled(bool) */

void __thiscall HotUIButton::SetDisabled(HotUIButton *this,bool param_1)

{
  Sexy::Widget::SetDisabled((Widget *)this,param_1);
  (**(code **)(**(long **)(this + 0x238) + 0x188))(*(long **)(this + 0x238),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::StaticClassInit() */

void HotUIButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIButton");
    (*pcVar2)(plVar1,asStack_10,FUN_036201b4,0x290,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButton::StaticGetClass() */

long * HotUIButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIButton::SetFont(Sexy::PrimeTypeface*) */

void __thiscall HotUIButton::SetFont(HotUIButton *this,PrimeTypeface *param_1)

{
  (**(code **)(**(long **)(this + 0x238) + 800))(*(long **)(this + 0x238));
  *(PrimeTypeface **)(this + 0x220) = param_1;
  return;
}


/* HotUIButton::GetFont() */

void __thiscall HotUIButton::GetFont(HotUIButton *this)

{
  PVZ2UIButton::GetTextFontDrawn(*(PVZ2UIButton **)(this + 0x238));
  return;
}


/* HotUIButton::SetListener(Sexy::ButtonListener*) */

void __thiscall HotUIButton::SetListener(HotUIButton *this,ButtonListener *param_1)

{
  *(ButtonListener **)(this + 0x288) = param_1;
  *(HotUIButton **)(*(long *)(this + 0x238) + 0x168) = this + 0x210;
  return;
}


/* HotUIButton::SetListener(int, Sexy::ButtonListener*) */

void __thiscall HotUIButton::SetListener(HotUIButton *this,int param_1,ButtonListener *param_2)

{
  *(int *)(*(long *)(this + 0x238) + 0xd4) = param_1;
  SetListener(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::SetLabel(std::wstring) */

void __thiscall HotUIButton::SetLabel(HotUIButton *this,wstring *param_2)

{
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = *(PVZ2UIButton **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_2);
  PVZ2UIButton::SetLabelText(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButton::SetInvisible(bool) */

void __thiscall HotUIButton::SetInvisible(HotUIButton *this,bool param_1)

{
  PVZ2UIButton::SetInvisible(*(PVZ2UIButton **)(this + 0x238),param_1);
  return;
}


/* HotUIButton::SetDownAudio(std::string) */

void HotUIButton::SetDownAudio(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x280);
  return;
}


/* HotUIButton::SetUpAudio(std::string) */

void HotUIButton::SetUpAudio(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x278);
  return;
}


/* HotUIButton::SetDrawGrayscaleWhenDisabled(bool) */

void __thiscall HotUIButton::SetDrawGrayscaleWhenDisabled(HotUIButton *this,bool param_1)

{
  PVZ2UIButton::SetGrayscaleWhenDisabled(*(PVZ2UIButton **)(this + 0x238),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::assignImagesFromProcessedStrings() */

void __thiscall HotUIButton::assignImagesFromProcessedStrings(HotUIButton *this)

{
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x268),___stack_chk_guard);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x248),(RtWeakPtr *)aRStack_18);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x270),extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x250),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::initializeButtonStates() */

void __thiscall HotUIButton::initializeButtonStates(HotUIButton *this)

{
  undefined8 uVar1;
  PVZ2UIButton *this_00;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this_00 = *(PVZ2UIButton **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar1,*(undefined4 *)(this + 0x240));
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar1,*(undefined4 *)(this + 0x240));
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::SetLabelWithImage(std::wstring, Sexy::RtWeakPtr<Sexy::Image>, int) */

void __thiscall
HotUIButton::SetLabelWithImage
          (HotUIButton *this,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  PVZ2UIButton *this_00;
  Insets aIStack_50 [16];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x238));
  this_00 = *(PVZ2UIButton **)(this + 0x238);
  FUN_05478178(awStack_40,&DAT_056f11a8,aIStack_50);
  PVZ2UIButton::SetLabelText(this_00,awStack_40);
  FUN_05476c50(awStack_40);
  nop();
  uVar2 = *(undefined8 *)(this + 0x238);
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,uVar1,1);
  Sexy::Insets::Insets(aIStack_50);
  PVZ2UIButton::AddTextWithIcon
            ((PVZ2UIButton *)0x3f800000,uVar2,param_2,awStack_40,param_4,aIStack_50,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButton::getImageWidthForResizeData() */

void __thiscall HotUIButton::getImageWidthForResizeData(HotUIButton *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  if (!bVar1) {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* HotUIButton::getImageHeightForResizeData() */

void __thiscall HotUIButton::getImageHeightForResizeData(HotUIButton *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  if (!bVar1) {
    return;
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}


/* HotUIButton::onInitializeWidget() */

void __thiscall HotUIButton::onInitializeWidget(HotUIButton *this)

{
  PVZ2UIButton *this_00;
  HotUIZPSMeterProperties *pHVar1;
  
  assignImagesFromProcessedStrings(this);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)0x0,(wstring *)(this + 0x218),(Color *)(this + 0x228));
  *(PVZ2UIButton **)(this + 0x238) = this_00;
  if (*(long *)(this + 0x220) != 0) {
    (**(code **)(*(long *)this_00 + 800))(this_00);
  }
  initializeButtonStates(this);
  if (this[0x59] == (HotUIButton)0x0) {
    *(undefined1 *)(*(long *)(this + 0x238) + 0x59) = 0;
  }
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (pHVar1[0x180] != (HotUIZPSMeterProperties)0x0) {
    PVZ2UIButton::SetOnlyDrawParts(*(PVZ2UIButton **)(this + 0x238));
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x238));
  (**(code **)(*(long *)this + 0x340))(this);
  Whitelistable::SetWhitelistID((string *)(*(long *)(this + 0x238) + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::getContentBounds() */

void HotUIButton::getContentBounds(void)

{
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar1;
  int *piVar2;
  SalesProgressBar *this;
  LotteryResultProgressBar *this_00;
  int *in_x8;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  if (*(int *)(pHVar1 + 0x20) == 2) {
    local_c = 0;
    piVar2 = eastl::min_alt<int>(&local_c,in_x8);
    *in_x8 = *piVar2;
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x248));
    local_c = LotteryResultProgressBar::GetCurrentLevel(this_00);
    piVar2 = eastl::max_alt<int>(&local_c,in_x8);
    in_x8[2] = *piVar2;
  }
  if (*(int *)(pHVar1 + 0x30) == 2) {
    local_c = 0;
    piVar2 = eastl::min_alt<int>(&local_c,in_x8 + 1);
    in_x8[1] = *piVar2;
    this = (SalesProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x248));
    local_c = SalesProgressBar::GetCurrentLevel(this);
    piVar2 = eastl::max_alt<int>(&local_c,in_x8 + 3);
    in_x8[3] = *piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::setButtonSize() */

void __thiscall HotUIButton::setButtonSize(HotUIButton *this)

{
  undefined4 uVar1;
  HotUIZPSMeterProperties *pHVar2;
  DynamicPadding *extraout_x1;
  PVZ2UIButton *this_00;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_38 = 0.0;
  local_30 = (float)*(int *)(this + 0x50);
  local_2c = (float)*(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  local_34 = 0.0;
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar1 = *(undefined4 *)(pHVar2 + 0x19c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x248));
  HotUIImage::getImageAspectRatioStretchedData
            ((HotUIImage *)this,uVar1,aRStack_18,&local_30,&local_2c,&local_38,&local_34);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  (**(code **)(**(long **)(this + 0x238) + 0x198))
            (*(long **)(this + 0x238),(int)local_38,(int)local_34,(int)local_30,(int)local_2c);
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)(pHVar2 + 0x130),extraout_x1);
  local_20 = local_20 + *(int *)(this + 0x260);
  local_28 = local_28 + *(int *)(this + 600);
  local_24 = local_24 + *(int *)(this + 0x25c);
  local_1c = local_1c + *(int *)(this + 0x264);
  this_00 = *(PVZ2UIButton **)(this + 0x238);
  Sexy::Insets::Insets
            ((Insets *)aRStack_18,local_28,local_24,(*(int *)(this + 0x50) - local_28) - local_20,
             (*(int *)(this + 0x54) - local_24) - local_1c);
  PVZ2UIButton::SetContentsRect(this_00,(TRect *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::onLayoutFinalized() */

void __thiscall HotUIButton::onLayoutFinalized(HotUIButton *this)

{
  undefined4 uVar1;
  HotUIZPSMeterProperties *pHVar2;
  DynamicPadding *extraout_x1;
  PVZ2UIButton *this_00;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long lStack_8;
  
  fStack_38 = 0.0;
  fStack_30 = (float)*(int *)(this + 0x50);
  fStack_2c = (float)*(int *)(this + 0x54);
  lStack_8 = ___stack_chk_guard;
  fStack_34 = 0.0;
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar1 = *(undefined4 *)(pHVar2 + 0x19c);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x248));
  HotUIImage::getImageAspectRatioStretchedData
            ((HotUIImage *)this,uVar1,aRStack_18,&fStack_30,&fStack_2c,&fStack_38,&fStack_34);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  (**(code **)(**(long **)(this + 0x238) + 0x198))
            (*(long **)(this + 0x238),(int)fStack_38,(int)fStack_34,(int)fStack_30,(int)fStack_2c);
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)(pHVar2 + 0x130),extraout_x1);
  iStack_20 = iStack_20 + *(int *)(this + 0x260);
  iStack_28 = iStack_28 + *(int *)(this + 600);
  iStack_24 = iStack_24 + *(int *)(this + 0x25c);
  iStack_1c = iStack_1c + *(int *)(this + 0x264);
  this_00 = *(PVZ2UIButton **)(this + 0x238);
  Sexy::Insets::Insets
            ((Insets *)aRStack_18,iStack_28,iStack_24,
             (*(int *)(this + 0x50) - iStack_28) - iStack_20,
             (*(int *)(this + 0x54) - iStack_24) - iStack_1c);
  PVZ2UIButton::SetContentsRect(this_00,(TRect *)aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButton::SetAdditionalContentsInset(Sexy::Insets const&) */

void __thiscall HotUIButton::SetAdditionalContentsInset(HotUIButton *this,Insets *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 600) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x260) = uVar1;
  setButtonSize(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIButton::onProcessStringReplaceMap(std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUIButton::onProcessStringReplaceMap(HotUIButton *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  long lVar3;
  Insets *pIVar4;
  PrimeText_PotentialTypeface *this_00;
  string *extraout_x1;
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  Set8BytesTo0(aSStack_28);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x128),param_1);
  thunk_FUN_05475e00(aSStack_28,uVar2);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0x218,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x170),param_1);
  thunk_FUN_05475e00(this + 0x268,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x178),param_1);
  thunk_FUN_05475e00(this + 0x270,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x188),param_1);
  thunk_FUN_05475e00(this + 0x278,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 400),param_1);
  thunk_FUN_05475e00(this + 0x280,uVar2);
  lVar3 = FUN_05474184((string *)(pHVar1 + 0x1a0));
  uVar2 = 0;
  if (lVar3 != 0) {
    this_00 = (PrimeText_PotentialTypeface *)
              PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface
                        ((string *)(pHVar1 + 0x1a0));
    uVar2 = PrimeText_PotentialTypeface::Typeface(this_00);
  }
  *(undefined8 *)(this + 0x220) = uVar2;
  lVar3 = FUN_05474184((string *)(pHVar1 + 0x1a8));
  if (lVar3 == 0) {
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x228) = local_18;
    *(undefined8 *)(this + 0x230) = uStack_10;
  }
  else {
    pIVar4 = (Insets *)HotUIColor_Dictionary::GetColor((string *)(pHVar1 + 0x1a8));
    Sexy::Insets::Insets((Insets *)&local_18,pIVar4);
    *(undefined8 *)(this + 0x228) = local_18;
    *(undefined8 *)(this + 0x230) = uStack_10;
  }
  if ((*(int *)(pHVar1 + 0x19c) - 3U < 4) || (*(int *)(pHVar1 + 0x19c) == 1)) {
    *(undefined4 *)(this + 0x240) = 2;
  }
  else if (*(int *)(pHVar1 + 0x198) == 0) {
    *(undefined4 *)(this + 0x240) = 1;
  }
  else if (*(int *)(pHVar1 + 0x198) == 4) {
    *(undefined4 *)(this + 0x240) = 5;
  }
  else {
    *(undefined4 *)(this + 0x240) = 3;
  }
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIButton::HotUIButton() */

void __thiscall HotUIButton::HotUIButton(HotUIButton *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x210));
  *(undefined ***)this = &PTR_GetWidgetClass_0666b090;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_0666b410;
  FUN_05476574(this + 0x218);
  Sexy::Color::Color((Color *)(this + 0x228));
  *(undefined8 *)(this + 0x238) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x250));
  Sexy::Insets::Insets((Insets *)(this + 600));
  Set8BytesTo0(this + 0x268);
  Set8BytesTo0(this + 0x270);
  Set8BytesTo0(this + 0x278);
  Set8BytesTo0(this + 0x280);
  return;
}


/* HotUIButton::StaticNew() */

HotUIButton * HotUIButton::StaticNew(void)

{
  HotUIButton *this;
  
  this = ::operator_new(0x290);
  HotUIButton(this);
  return this;
}


/* HotUIButton::~HotUIButton() */

void __thiscall HotUIButton::~HotUIButton(HotUIButton *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666b090;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_0666b410;
  HotUIWidget::RemoveWidget((HotUIWidget *)this,*(Widget **)(this + 0x238));
  if (*(long **)(this + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x238) + 0x18))();
    *(undefined8 *)(this + 0x238) = 0;
  }
  std::string::~string((string *)(this + 0x280));
  std::string::~string((string *)(this + 0x278));
  std::string::~string((string *)(this + 0x270));
  std::string::~string((string *)(this + 0x268));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  FUN_05476c50(this + 0x218);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIButton::~HotUIButton() */

void __thiscall HotUIButton::~HotUIButton(HotUIButton *this)

{
  ~HotUIButton(this);
  AK::FreeHook(this);
  return;
}


/* HotUIButton::ButtonPress(int) */

void __thiscall HotUIButton::ButtonPress(HotUIButton *this,int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  string *psVar3;
  
  cVar1 = FUN_0547419c(this + 0x280);
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,this + 0x280);
  }
  puVar2 = *(undefined8 **)(this + 0x288);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,param_1);
  }
  return;
}


/* non-virtual thunk to HotUIButton::ButtonPress(int) */

void __thiscall HotUIButton::ButtonPress(HotUIButton *this,int param_1)

{
  ButtonPress(this + -0x210,param_1);
  return;
}


/* HotUIButton::ButtonDepress(int) */

void __thiscall HotUIButton::ButtonDepress(HotUIButton *this,int param_1)

{
  char cVar1;
  long *plVar2;
  string *psVar3;
  
  cVar1 = FUN_0547419c(this + 0x278);
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(psVar3,this + 0x278);
  }
  plVar2 = *(long **)(this + 0x288);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  return;
}


/* non-virtual thunk to HotUIButton::ButtonDepress(int) */

void __thiscall HotUIButton::ButtonDepress(HotUIButton *this,int param_1)

{
  ButtonDepress(this + -0x210,param_1);
  return;
}

