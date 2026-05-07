// Class: UIWidgetPrimeText


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetPrimeText::StaticClassInit() */

void UIWidgetPrimeText::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIWidgetPrimeText");
    (*pcVar2)(plVar1,asStack_10,FUN_044d3930,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetPrimeText::StaticGetClass() */

long * UIWidgetPrimeText::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIWidgetPrimeText",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWidgetPrimeText::GetClass() const */

long * UIWidgetPrimeText::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIWidgetPrimeText",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWidgetPrimeText::UIWidgetPrimeText() */

void __thiscall UIWidgetPrimeText::UIWidgetPrimeText(UIWidgetPrimeText *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_06854890;
  *(undefined ***)(this + 0x10) = &PTR__UIWidgetPrimeText_06854a30;
  return;
}


/* UIWidgetPrimeText::StaticNew() */

UIWidgetPrimeText * UIWidgetPrimeText::StaticNew(void)

{
  UIWidgetPrimeText *this;
  
  this = ::operator_new(0x178);
  UIWidgetPrimeText(this);
  return this;
}


/* UIWidgetPrimeText::SetGlyphMesh(Sexy::PrimeGlyphMesh*) */

void __thiscall UIWidgetPrimeText::SetGlyphMesh(UIWidgetPrimeText *this,PrimeGlyphMesh *param_1)

{
  PrimeGlyphMesh *this_00;
  
  this_00 = *(PrimeGlyphMesh **)(this + 0x170);
  if (this_00 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(this_00);
    AK::FreeHook(this_00);
  }
  *(PrimeGlyphMesh **)(this + 0x170) = param_1;
  return;
}


/* UIWidgetPrimeText::~UIWidgetPrimeText() */

void __thiscall UIWidgetPrimeText::~UIWidgetPrimeText(UIWidgetPrimeText *this)

{
  *(undefined ***)this = &PTR_GetClass_06854890;
  *(undefined ***)(this + 0x10) = &PTR__UIWidgetPrimeText_06854a30;
  SetGlyphMesh(this,(PrimeGlyphMesh *)0x0);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UIWidgetPrimeText::~UIWidgetPrimeText() */

void __thiscall UIWidgetPrimeText::~UIWidgetPrimeText(UIWidgetPrimeText *this)

{
  ~UIWidgetPrimeText(this + -0x10);
  return;
}


/* UIWidgetPrimeText::~UIWidgetPrimeText() */

void __thiscall UIWidgetPrimeText::~UIWidgetPrimeText(UIWidgetPrimeText *this)

{
  ~UIWidgetPrimeText(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIWidgetPrimeText::~UIWidgetPrimeText() */

void __thiscall UIWidgetPrimeText::~UIWidgetPrimeText(UIWidgetPrimeText *this)

{
  ~UIWidgetPrimeText(this + -0x10);
  return;
}

