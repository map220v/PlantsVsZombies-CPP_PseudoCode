// Class: RichManScreenState


/* RichManScreenState::getHotUIAdaptorClass() */

long * RichManScreenState::getHotUIAdaptorClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (AdaptorRichManScreen::sClass != (long *)0x0) {
    return AdaptorRichManScreen::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  AdaptorRichManScreen::sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorRichManScreen",uVar2,AdaptorRichManScreen::StaticNew);
  AdaptorRichManScreen::StaticClassInit();
  return AdaptorRichManScreen::sClass;
}


/* RichManScreenState::~RichManScreenState() */

void __thiscall RichManScreenState::~RichManScreenState(RichManScreenState *this)

{
  *(undefined ***)this = &PTR_GetClass_066bcc10;
  PVZHotUIGameState::~PVZHotUIGameState((PVZHotUIGameState *)this);
  return;
}


/* RichManScreenState::~RichManScreenState() */

void __thiscall RichManScreenState::~RichManScreenState(RichManScreenState *this)

{
  ~RichManScreenState(this);
  AK::FreeHook(this);
  return;
}


/* RichManScreenState::RichManScreenState() */

void __thiscall RichManScreenState::RichManScreenState(RichManScreenState *this)

{
  PVZHotUIGameState::PVZHotUIGameState((PVZHotUIGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066bcc10;
  return;
}


/* RichManScreenState::StaticNew() */

RichManScreenState * RichManScreenState::StaticNew(void)

{
  RichManScreenState *this;
  
  this = ::operator_new(0x30);
  RichManScreenState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManScreenState::StaticClassInit() */

void RichManScreenState::StaticClassInit(void)

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
    std::string::string(asStack_10,"RichManScreenState");
    (*pcVar2)(plVar1,asStack_10,FUN_038e2c70,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManScreenState::StaticGetClass() */

long * RichManScreenState::StaticGetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"RichManScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichManScreenState::GetClass() const */

long * RichManScreenState::GetClass(void)

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
  uVar2 = PVZHotUIGameState::StaticGetClass();
  (*pcVar3)(plVar1,"RichManScreenState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

