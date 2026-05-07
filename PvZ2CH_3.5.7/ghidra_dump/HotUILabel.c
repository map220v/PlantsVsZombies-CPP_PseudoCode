// Class: HotUILabel


/* HotUILabel::GetText() */

undefined8 HotUILabel::GetText(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* HotUILabel::HotUILabel() */

void __thiscall HotUILabel::HotUILabel(HotUILabel *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666efc0;
  FUN_05476574(this + 0x210);
  Sexy::Color::Color((Color *)(this + 0x230));
  *(undefined8 *)(this + 0x218) = 0;
  return;
}


/* HotUILabel::~HotUILabel() */

void __thiscall HotUILabel::~HotUILabel(HotUILabel *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666efc0;
  FUN_05476c50(this + 0x210);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUILabel::~HotUILabel() */

void __thiscall HotUILabel::~HotUILabel(HotUILabel *this)

{
  ~HotUILabel(this);
  AK::FreeHook(this);
  return;
}


/* HotUILabel::SetTextColor(Sexy::Color const&) */

void __thiscall HotUILabel::SetTextColor(HotUILabel *this,Color *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = **(long **)(this + 0x218);
  *(undefined8 *)(this + 0x230) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x238) = uVar1;
  (**(code **)(lVar2 + 0x170))(*(long **)(this + 0x218),0,this + 0x230);
  return;
}


/* HotUILabel::onDraw(Sexy::Graphics*) */

void __thiscall HotUILabel::onDraw(HotUILabel *this,Graphics *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_054765c4(this + 0x210);
  if (lVar1 != 0) {
    plVar2 = *(long **)(this + 0x218);
    if (plVar2 == (long *)0x0) {
      (**(code **)(*(long *)this + 0x340))(this,param_1);
      plVar2 = *(long **)(this + 0x218);
    }
    (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILabel::onLayoutFinalized() */

void __thiscall HotUILabel::onLayoutFinalized(HotUILabel *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PrimeText_PotentialText *pPVar5;
  PrimeTextWidget *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 0x18))();
  }
  uVar7 = FUN_03643aec();
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  uVar6 = *(undefined8 *)(this + 0x228);
  FUN_05477b24(auStack_20,this + 0x210);
  uVar3 = *(undefined4 *)(this + 0x220);
  uVar4 = *(undefined4 *)(this + 0x224);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x230));
  pPVar5 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     (uVar7,(int)uVar7,(float)iVar1,(float)iVar2,uVar6,auStack_20,uVar3,uVar4,
                      aIStack_18);
  FUN_05476c50(auStack_20);
  this_00 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar5);
  *(PrimeTextWidget **)(this + 0x218) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILabel::StaticClassInit() */

void HotUILabel::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUILabel");
    (*pcVar2)(plVar1,asStack_10,FUN_03643d40,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUILabel::StaticGetClass() */

long * HotUILabel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUILabel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILabel::RefreshMesh() */

void __thiscall HotUILabel::RefreshMesh(HotUILabel *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PrimeGlyphMesh *pPVar5;
  PrimeTextWidget *this_00;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  this_00 = *(PrimeTextWidget **)(this + 0x218);
  uVar6 = *(undefined8 *)(this + 0x228);
  FUN_05477b24(auStack_20,this + 0x210);
  uVar3 = *(undefined4 *)(this + 0x220);
  uVar4 = *(undefined4 *)(this + 0x224);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x230));
  pPVar5 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     (0,0,(float)iVar1,(float)iVar2,uVar6,auStack_20,uVar3,uVar4,aIStack_18);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_00,pPVar5);
  FUN_05476c50(auStack_20);
  Sexy::PrimeTextWidget::UpdateGlyphMeshCacheVersion(*(PrimeTextWidget **)(this + 0x218));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILabel::getContentBounds() */

void HotUILabel::getContentBounds(void)

{
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar1;
  int *piVar2;
  long in_x8;
  int *piVar3;
  PrimeTypeface *pPVar4;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  if (*(int *)(pHVar1 + 0x30) == 2) {
    piVar3 = local_14 + 1;
    local_14[1] = 0;
    piVar2 = eastl::min_alt<int>(piVar3,(int *)(in_x8 + 4));
    pPVar4 = *(PrimeTypeface **)(in_x0 + 0x228);
    *(int *)(in_x8 + 4) = *piVar2;
    local_14[0] = 0;
    FUN_05477b24(piVar3,in_x0 + 0x210);
    Sexy::PrimeTypeface::FitString_Paragraph
              (pPVar4,piVar3,*(undefined4 *)(in_x0 + 0x50),999999,local_14);
    FUN_05476c50(piVar3);
    piVar2 = eastl::max_alt<int>(local_14,(int *)(in_x8 + 0xc));
    *(int *)(in_x8 + 0xc) = *piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUILabel::SetText(std::wstring const&) */

void HotUILabel::SetText(wstring *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  
  thunk_FUN_05477b9c(param_1 + 0x210);
  Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(param_1 + 0x218),param_1 + 0x210);
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)param_1);
  if ((*(int *)(pHVar1 + 0x20) == 2) || (*(int *)(pHVar1 + 0x30) == 2)) {
    HotUIWidget::MarkLayoutDirty((HotUIWidget *)param_1);
  }
  if (pHVar1[0x148] == (HotUIZPSMeterProperties)0x0) {
    return;
  }
  RefreshMesh((HotUILabel *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILabel::onProcessStringReplaceMap(std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUILabel::onProcessStringReplaceMap(HotUILabel *this,map *param_1)

{
  int iVar1;
  HotUIZPSMeterProperties *pHVar2;
  undefined8 uVar3;
  PrimeText_PotentialTypeface *this_00;
  string *psVar4;
  undefined8 *puVar5;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  Set8BytesTo0(aSStack_20);
  uVar3 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar2 + 0x128),param_1);
  thunk_FUN_05475e00(aSStack_20,uVar3);
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 0x210,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  this_00 = (PrimeText_PotentialTypeface *)
            PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface((string *)(pHVar2 + 0x138));
  uVar3 = PrimeText_PotentialTypeface::Typeface(this_00);
  *(undefined8 *)(this + 0x228) = uVar3;
  psVar4 = (string *)
           HotUIWidget::processStringReplaceMapHelper
                     ((HotUIWidget *)this,(string *)(pHVar2 + 0x140),param_1);
  puVar5 = (undefined8 *)HotUIColor_Dictionary::GetColor(psVar4);
  uVar3 = puVar5[1];
  iVar1 = *(int *)(pHVar2 + 0x130);
  *(undefined8 *)(this + 0x230) = *puVar5;
  *(undefined8 *)(this + 0x238) = uVar3;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    iVar1 = 1;
  }
  *(int *)(this + 0x220) = iVar1;
  iVar1 = *(int *)(pHVar2 + 0x134);
  if ((iVar1 != 0) && (iVar1 != 2)) {
    iVar1 = 1;
  }
  *(int *)(this + 0x224) = iVar1;
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUILabel::StaticNew() */

HotUILabel * HotUILabel::StaticNew(void)

{
  HotUILabel *this;
  
  this = ::operator_new(0x240);
  HotUILabel(this);
  return this;
}

