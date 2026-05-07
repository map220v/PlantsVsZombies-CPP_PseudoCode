// Class: AdaptorPlantGeneHowToPlayScreen


/* AdaptorPlantGeneHowToPlayScreen::~AdaptorPlantGeneHowToPlayScreen() */

void __thiscall
AdaptorPlantGeneHowToPlayScreen::~AdaptorPlantGeneHowToPlayScreen
          (AdaptorPlantGeneHowToPlayScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_0669dfc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669e320;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0669e368;
  HowToPlayScreen::~HowToPlayScreen((HowToPlayScreen *)this);
  return;
}


/* AdaptorPlantGeneHowToPlayScreen::~AdaptorPlantGeneHowToPlayScreen() */

void __thiscall
AdaptorPlantGeneHowToPlayScreen::~AdaptorPlantGeneHowToPlayScreen
          (AdaptorPlantGeneHowToPlayScreen *this)

{
  ~AdaptorPlantGeneHowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPlantGeneHowToPlayScreen::StaticClassInit() */

void AdaptorPlantGeneHowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPlantGeneHowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_038009b0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPlantGeneHowToPlayScreen::StaticGetClass() */

long * AdaptorPlantGeneHowToPlayScreen::StaticGetClass(void)

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
  uVar2 = HowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPlantGeneHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPlantGeneHowToPlayScreen::GetClass() const */

long * AdaptorPlantGeneHowToPlayScreen::GetClass(void)

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
  uVar2 = HowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPlantGeneHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPlantGeneHowToPlayScreen::doClose() */

void __thiscall AdaptorPlantGeneHowToPlayScreen::doClose(AdaptorPlantGeneHowToPlayScreen *this)

{
  char cVar1;
  long *plVar2;
  
  HowToPlayScreen::Close((HowToPlayScreen *)this);
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  if ((plVar2 != (long *)0x0) &&
     (cVar1 = FUN_037fe580(*(undefined1 *)((long)plVar2 + 0x9dc)), cVar1 != '\0')) {
    (**(code **)(*plVar2 + 800))(plVar2,0);
  }
  return;
}


/* AdaptorPlantGeneHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorPlantGeneHowToPlayScreen::ButtonDepress(AdaptorPlantGeneHowToPlayScreen *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (0 < *(int *)(this + 0x180)) {
        iVar1 = *(int *)(this + 0x180) + -1;
        *(int *)(this + 0x180) = iVar1;
        HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
        return;
      }
    }
    else if (param_1 == 3) goto LAB_03800b6c;
    return;
  }
  iVar1 = *(int *)(this + 0x180);
  lVar2 = FUN_037fe984(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  if (lVar2 + -1 != (long)iVar1) {
    iVar1 = iVar1 + 1;
    *(int *)(this + 0x180) = iVar1;
    HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
    return;
  }
LAB_03800b6c:
  doClose(this);
  return;
}


/* non-virtual thunk to AdaptorPlantGeneHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorPlantGeneHowToPlayScreen::ButtonDepress(AdaptorPlantGeneHowToPlayScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorPlantGeneHowToPlayScreen::AdaptorPlantGeneHowToPlayScreen() */

void __thiscall
AdaptorPlantGeneHowToPlayScreen::AdaptorPlantGeneHowToPlayScreen
          (AdaptorPlantGeneHowToPlayScreen *this)

{
  HowToPlayScreen::HowToPlayScreen((HowToPlayScreen *)this);
  *(undefined ***)this = &PTR_GetClass_0669dfc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0669e320;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0669e368;
  return;
}


/* AdaptorPlantGeneHowToPlayScreen::StaticNew() */

AdaptorPlantGeneHowToPlayScreen * AdaptorPlantGeneHowToPlayScreen::StaticNew(void)

{
  AdaptorPlantGeneHowToPlayScreen *this;
  
  this = ::operator_new(0x1a8);
  AdaptorPlantGeneHowToPlayScreen(this);
  return this;
}

