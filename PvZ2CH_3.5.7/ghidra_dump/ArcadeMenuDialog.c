// Class: ArcadeMenuDialog


/* ArcadeMenuDialog::~ArcadeMenuDialog() */

void __thiscall ArcadeMenuDialog::~ArcadeMenuDialog(ArcadeMenuDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06674010;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674380;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066743c8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* ArcadeMenuDialog::~ArcadeMenuDialog() */

void __thiscall ArcadeMenuDialog::~ArcadeMenuDialog(ArcadeMenuDialog *this)

{
  ~ArcadeMenuDialog(this);
  AK::FreeHook(this);
  return;
}


/* ArcadeMenuDialog::ArcadeMenuDialog() */

void __thiscall ArcadeMenuDialog::ArcadeMenuDialog(ArcadeMenuDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06674010;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674380;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066743c8;
  return;
}


/* ArcadeMenuDialog::StaticNew() */

ArcadeMenuDialog * ArcadeMenuDialog::StaticNew(void)

{
  ArcadeMenuDialog *this;
  
  this = ::operator_new(0x120);
  ArcadeMenuDialog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeMenuDialog::StaticClassInit() */

void ArcadeMenuDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArcadeMenuDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_0365fb08,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeMenuDialog::StaticGetClass() */

long * ArcadeMenuDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeMenuDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeMenuDialog::GetClass() const */

long * ArcadeMenuDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeMenuDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeMenuDialog::Clone() const */

void __thiscall ArcadeMenuDialog::Clone(ArcadeMenuDialog *this)

{
  long lVar1;
  RtObject *this_00;
  
  lVar1 = (*(code *)**(undefined8 **)this)();
  this_00 = (RtObject *)FUN_0365f944(*(undefined8 *)(lVar1 + 0x18));
  Sexy::RtObject::Cast<ArcadeMenuDialog>(this_00);
  return;
}

