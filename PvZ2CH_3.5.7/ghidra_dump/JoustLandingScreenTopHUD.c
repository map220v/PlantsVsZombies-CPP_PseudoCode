// Class: JoustLandingScreenTopHUD


/* JoustLandingScreenTopHUD::GetClass() const */

long * JoustLandingScreenTopHUD::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustLandingScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustLandingScreenTopHUD::~JoustLandingScreenTopHUD() */

void __thiscall JoustLandingScreenTopHUD::~JoustLandingScreenTopHUD(JoustLandingScreenTopHUD *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae1a0;
  PVZGameStateTopHUDController::~PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  return;
}


/* JoustLandingScreenTopHUD::~JoustLandingScreenTopHUD() */

void __thiscall JoustLandingScreenTopHUD::~JoustLandingScreenTopHUD(JoustLandingScreenTopHUD *this)

{
  ~JoustLandingScreenTopHUD(this);
  AK::FreeHook(this);
  return;
}


/* JoustLandingScreenTopHUD::JoustLandingScreenTopHUD() */

void __thiscall JoustLandingScreenTopHUD::JoustLandingScreenTopHUD(JoustLandingScreenTopHUD *this)

{
  PVZGameStateTopHUDController::PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  *(undefined ***)this = &PTR_GetClass_066ae1a0;
  return;
}


/* JoustLandingScreenTopHUD::StaticNew() */

JoustLandingScreenTopHUD * JoustLandingScreenTopHUD::StaticNew(void)

{
  JoustLandingScreenTopHUD *this;
  
  this = ::operator_new(0xe0);
  JoustLandingScreenTopHUD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLandingScreenTopHUD::StaticClassInit() */

void JoustLandingScreenTopHUD::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustLandingScreenTopHUD");
    (*pcVar2)(plVar1,asStack_10,FUN_0387ceb4,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustLandingScreenTopHUD::StaticGetClass() */

long * JoustLandingScreenTopHUD::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustLandingScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLandingScreenTopHUD::Open() */

void JoustLandingScreenTopHUD::Open(void)

{
  TopHUDLayoutHelper aTStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  TopHUDLayoutHelperParams aTStack_48 [24];
  vector<std::string,std::allocator<std::string>> avStack_30 [24];
  undefined1 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::ResetUI();
  TopHUDLayoutHelperParams::TopHUDLayoutHelperParams(aTStack_48);
  std::string::string(asStack_60,"UIWorldMapCoinBank");
  std::string::string(asStack_58,"UIWorldMapGemBank");
  std::string::string(asStack_50,"UIWorldMapZMatchTicketBank");
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_30,asStack_60,3);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  nop();
  nop();
  nop();
  local_18 = 1;
  std::string::append(asStack_10,"Joust",1);
  TopHUDLayoutHelper::ConfigureTopHUD(aTStack_68,aTStack_48);
  TopHUDLayoutHelperParams::~TopHUDLayoutHelperParams(aTStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

