// Class: NewPlantUIEntryScreenTopHUD


/* NewPlantUIEntryScreenTopHUD::~NewPlantUIEntryScreenTopHUD() */

void __thiscall
NewPlantUIEntryScreenTopHUD::~NewPlantUIEntryScreenTopHUD(NewPlantUIEntryScreenTopHUD *this)

{
  *(undefined ***)this = &PTR_getTopHudControllerClass_066190d0;
  PVZGameStateTopHUDController::~PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  return;
}


/* NewPlantUIEntryScreenTopHUD::~NewPlantUIEntryScreenTopHUD() */

void __thiscall
NewPlantUIEntryScreenTopHUD::~NewPlantUIEntryScreenTopHUD(NewPlantUIEntryScreenTopHUD *this)

{
  ~NewPlantUIEntryScreenTopHUD(this);
  AK::FreeHook(this);
  return;
}


/* NewPlantUIEntryScreenTopHUD::NewPlantUIEntryScreenTopHUD() */

void __thiscall
NewPlantUIEntryScreenTopHUD::NewPlantUIEntryScreenTopHUD(NewPlantUIEntryScreenTopHUD *this)

{
  PVZGameStateTopHUDController::PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  *(undefined ***)this = &PTR_getTopHudControllerClass_066190d0;
  return;
}


/* NewPlantUIEntryScreenTopHUD::StaticNew() */

NewPlantUIEntryScreenTopHUD * NewPlantUIEntryScreenTopHUD::StaticNew(void)

{
  NewPlantUIEntryScreenTopHUD *this;
  
  this = ::operator_new(0xe0);
  NewPlantUIEntryScreenTopHUD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIEntryScreenTopHUD::StaticClassInit() */

void NewPlantUIEntryScreenTopHUD::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPlantUIEntryScreenTopHUD");
    (*pcVar2)(plVar1,asStack_10,FUN_033c0db0,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlantUIEntryScreenTopHUD::StaticGetClass() */

long * NewPlantUIEntryScreenTopHUD::StaticGetClass(void)

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
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"NewPlantUIEntryScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

