// Class: HotUIPrefab


/* HotUIPrefab::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall HotUIPrefab::RemovedFromManager(HotUIPrefab *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(HotUIAdaptor **)(this + 0x210) != (HotUIAdaptor *)0x0) {
    HotUIAdaptor::RemoveAndDeleteWidget(*(HotUIAdaptor **)(this + 0x210));
    *(undefined8 *)(this + 0x210) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPrefab::StaticClassInit() */

void HotUIPrefab::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPrefab");
    (*pcVar2)(plVar1,asStack_10,FUN_03649fe8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPrefab::StaticGetClass() */

long * HotUIPrefab::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIPrefab",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPrefab::onInitializeWidget() */

void __thiscall HotUIPrefab::onInitializeWidget(HotUIPrefab *this)

{
  char cVar1;
  HotUIZPSMeterProperties *pHVar2;
  long lVar3;
  HotUIAdaptor *this_00;
  char *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  FUN_05475d88(asStack_10,pHVar2 + 0x130);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    pcVar4 = (char *)FUN_0547429c(asStack_10);
    lVar3 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
  }
  else {
    lVar3 = HotUIAdaptor::StaticGetClass();
  }
  FUN_03649ab0(*(undefined8 *)(lVar3 + 0x18));
  nop();
  *(HotUIAdaptor **)(this + 0x210) = this_00;
  HotUIAdaptor::SetParentAndFile(this_00,(HotUIWidget *)this,(string *)(pHVar2 + 0x128));
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x210));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPrefab::HotUIPrefab() */

void __thiscall HotUIPrefab::HotUIPrefab(HotUIPrefab *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066704d0;
  return;
}


/* HotUIPrefab::StaticNew() */

HotUIPrefab * HotUIPrefab::StaticNew(void)

{
  HotUIPrefab *this;
  
  this = ::operator_new(0x218);
  HotUIPrefab(this);
  return this;
}


/* HotUIPrefab::~HotUIPrefab() */

void __thiscall HotUIPrefab::~HotUIPrefab(HotUIPrefab *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066704d0;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIPrefab::~HotUIPrefab() */

void __thiscall HotUIPrefab::~HotUIPrefab(HotUIPrefab *this)

{
  ~HotUIPrefab(this);
  AK::FreeHook(this);
  return;
}

