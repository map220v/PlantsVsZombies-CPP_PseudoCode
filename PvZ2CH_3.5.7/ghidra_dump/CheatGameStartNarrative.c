// Class: CheatGameStartNarrative


/* CheatGameStartNarrative::~CheatGameStartNarrative() */

void __thiscall CheatGameStartNarrative::~CheatGameStartNarrative(CheatGameStartNarrative *this)

{
  *(undefined ***)this = &PTR_GetClass_06846f40;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameStartNarrative::~CheatGameStartNarrative() */

void __thiscall CheatGameStartNarrative::~CheatGameStartNarrative(CheatGameStartNarrative *this)

{
  ~CheatGameStartNarrative(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameStartNarrative::StaticGetClass() */

long * CheatGameStartNarrative::StaticGetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameStartNarrative",uVar2,StaticNew);
  return sClass;
}


/* CheatGameStartNarrative::GetClass() const */

long * CheatGameStartNarrative::GetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameStartNarrative",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameStartNarrative::startNarrative() */

void __thiscall CheatGameStartNarrative::startNarrative(CheatGameStartNarrative *this)

{
  char cVar1;
  CrazyNPCManager *pCVar2;
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  cVar1 = CrazyNPCManager::IsNarrationActive(pCVar2);
  if (cVar1 == '\0') {
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    std::string::string(asStack_40,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,this + 0x38,aDStack_38,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatGameStartNarrative::CheatGameStartNarrative() */

void __thiscall CheatGameStartNarrative::CheatGameStartNarrative(CheatGameStartNarrative *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846f40;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameStartNarrative::StaticNew() */

CheatGameStartNarrative * CheatGameStartNarrative::StaticNew(void)

{
  CheatGameStartNarrative *this;
  
  this = ::operator_new(0x40);
  CheatGameStartNarrative(this);
  return this;
}

