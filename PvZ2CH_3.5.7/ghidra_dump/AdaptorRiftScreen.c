// Class: AdaptorRiftScreen


/* AdaptorRiftScreen::~AdaptorRiftScreen() */

void __thiscall AdaptorRiftScreen::~AdaptorRiftScreen(AdaptorRiftScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_06676600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676960;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066769a8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftScreen::~AdaptorRiftScreen() */

void __thiscall AdaptorRiftScreen::~AdaptorRiftScreen(AdaptorRiftScreen *this)

{
  ~AdaptorRiftScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftScreen::StaticClassInit() */

void AdaptorRiftScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_0366a270,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftScreen::StaticGetClass() */

long * AdaptorRiftScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRiftScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftScreen::GetClass() const */

long * AdaptorRiftScreen::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRiftScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftScreen::AdaptorRiftScreen() */

void __thiscall AdaptorRiftScreen::AdaptorRiftScreen(AdaptorRiftScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06676600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676960;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066769a8;
  return;
}


/* AdaptorRiftScreen::StaticNew() */

AdaptorRiftScreen * AdaptorRiftScreen::StaticNew(void)

{
  AdaptorRiftScreen *this;
  
  this = ::operator_new(0x120);
  AdaptorRiftScreen(this);
  return this;
}


/* AdaptorRiftScreen::Update() */

void __thiscall AdaptorRiftScreen::Update(AdaptorRiftScreen *this)

{
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  nop();
  return;
}

