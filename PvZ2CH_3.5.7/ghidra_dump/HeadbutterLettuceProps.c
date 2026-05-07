// Class: HeadbutterLettuceProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeadbutterLettuceProps::StaticClassInit() */

void HeadbutterLettuceProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeadbutterLettuceProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf5ab8,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeadbutterLettuceProps::StaticGetClass() */

long * HeadbutterLettuceProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HeadbutterLettuceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeadbutterLettuceProps::GetClass() const */

long * HeadbutterLettuceProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HeadbutterLettuceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeadbutterLettuceProps::HeadbutterLettuceProps() */

void __thiscall HeadbutterLettuceProps::HeadbutterLettuceProps(HeadbutterLettuceProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2d4) = 1;
  *(undefined ***)this = &PTR_GetClass_069a43e0;
  *(undefined4 *)(this + 0x2c4) = 4;
  *(undefined4 *)(this + 0x2c8) = 2;
  *(undefined4 *)(this + 0x2d8) = 3;
  *(undefined4 *)(this + 0x2dc) = 3;
  *(undefined4 *)(this + 0x2cc) = 3;
  *(undefined4 *)(this + 0x2b8) = 0x3e99999a;
  *(undefined4 *)(this + 0x2e4) = 0x3f99999a;
  *(undefined4 *)(this + 700) = 0x3e99999a;
  *(undefined4 *)(this + 0x2c0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2e0) = 0x41000000;
  *(undefined4 *)(this + 0x2e8) = 0x43af0000;
  *(undefined4 *)(this + 0x2d0) = 0x3dcccccd;
  return;
}


/* HeadbutterLettuceProps::StaticNew() */

HeadbutterLettuceProps * HeadbutterLettuceProps::StaticNew(void)

{
  HeadbutterLettuceProps *this;
  
  this = ::operator_new(0x2f0);
  HeadbutterLettuceProps(this);
  return this;
}


/* HeadbutterLettuceProps::~HeadbutterLettuceProps() */

void __thiscall HeadbutterLettuceProps::~HeadbutterLettuceProps(HeadbutterLettuceProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a43e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HeadbutterLettuceProps::~HeadbutterLettuceProps() */

void __thiscall HeadbutterLettuceProps::~HeadbutterLettuceProps(HeadbutterLettuceProps *this)

{
  ~HeadbutterLettuceProps(this);
  AK::FreeHook(this);
  return;
}

