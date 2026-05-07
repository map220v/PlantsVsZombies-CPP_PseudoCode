// Class: MainBoardProperties


/* MainBoardProperties::GetWidgetClass() const */

long * MainBoardProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MainBoard::sClass != (long *)0x0) {
    return MainBoard::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MainBoard::sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"MainBoard",uVar2,MainBoard::StaticNew);
  MainBoard::StaticClassInit();
  return MainBoard::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoardProperties::StaticClassInit() */

void MainBoardProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MainBoardProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038dd408,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainBoardProperties::StaticGetClass() */

long * MainBoardProperties::StaticGetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MainBoardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MainBoardProperties::GetClass() const */

long * MainBoardProperties::GetClass(void)

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
  uVar2 = HotUIWidgetProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MainBoardProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MainBoardProperties::MainBoardProperties() */

void __thiscall MainBoardProperties::MainBoardProperties(MainBoardProperties *this)

{
  HotUIWidgetProperties::HotUIWidgetProperties((HotUIWidgetProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066bc7a0;
  return;
}


/* MainBoardProperties::StaticNew() */

MainBoardProperties * MainBoardProperties::StaticNew(void)

{
  MainBoardProperties *this;
  
  this = ::operator_new(0x128);
  MainBoardProperties(this);
  return this;
}


/* MainBoardProperties::~MainBoardProperties() */

void __thiscall MainBoardProperties::~MainBoardProperties(MainBoardProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066bc7a0;
  HotUIWidgetProperties::~HotUIWidgetProperties((HotUIWidgetProperties *)this);
  return;
}


/* MainBoardProperties::~MainBoardProperties() */

void __thiscall MainBoardProperties::~MainBoardProperties(MainBoardProperties *this)

{
  ~MainBoardProperties(this);
  AK::FreeHook(this);
  return;
}

