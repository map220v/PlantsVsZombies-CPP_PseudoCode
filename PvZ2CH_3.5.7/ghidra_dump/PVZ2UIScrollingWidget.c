// Class: PVZ2UIScrollingWidget


/* PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget() */

void __thiscall PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget(PVZ2UIScrollingWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06836640;
  *(undefined **)(this + 0xd8) = &DAT_06836968;
  Sexy::ScrollWidget::~ScrollWidget((ScrollWidget *)this);
  return;
}


/* PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget() */

void __thiscall PVZ2UIScrollingWidget::~PVZ2UIScrollingWidget(PVZ2UIScrollingWidget *this)

{
  ~PVZ2UIScrollingWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingWidget::StaticClassInit() */

void PVZ2UIScrollingWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ2UIScrollingWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0436d4f4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIScrollingWidget::StaticGetClass() */

long * PVZ2UIScrollingWidget::StaticGetClass(void)

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
  uVar2 = Sexy::ScrollWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UIScrollingWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UIScrollingWidget::GetClass() const */

long * PVZ2UIScrollingWidget::GetClass(void)

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
  uVar2 = Sexy::ScrollWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ2UIScrollingWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(Sexy::ScrollWidgetListener*) */

void __thiscall
PVZ2UIScrollingWidget::PVZ2UIScrollingWidget
          (PVZ2UIScrollingWidget *this,ScrollWidgetListener *param_1)

{
  Sexy::ScrollWidget::ScrollWidget((ScrollWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06836640;
  *(undefined **)(this + 0xd8) = &DAT_06836968;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x210));
  return;
}


/* PVZ2UIScrollingWidget::PVZ2UIScrollingWidget() */

void __thiscall PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(PVZ2UIScrollingWidget *this)

{
  PVZ2UIScrollingWidget(this,(ScrollWidgetListener *)0x0);
  return;
}


/* PVZ2UIScrollingWidget::StaticNew() */

PVZ2UIScrollingWidget * PVZ2UIScrollingWidget::StaticNew(void)

{
  PVZ2UIScrollingWidget *this;
  
  this = ::operator_new(0x248);
  PVZ2UIScrollingWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIScrollingWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIScrollingWidget::Draw(PVZ2UIScrollingWidget *this,Graphics *param_1)

{
  char cVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0436caac(*(undefined4 *)(this + 0x210));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x210),param_1,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

