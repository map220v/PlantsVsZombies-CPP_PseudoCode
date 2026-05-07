// Class: GridItemRadiationPileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPileProps::StaticClassInit() */

void GridItemRadiationPileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRadiationPileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04244608,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRadiationPileProps::StaticGetClass() */

long * GridItemRadiationPileProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRadiationPileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRadiationPileProps::GetClass() const */

long * GridItemRadiationPileProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRadiationPileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRadiationPileProps::GridItemRadiationPileProps() */

void __thiscall
GridItemRadiationPileProps::GridItemRadiationPileProps(GridItemRadiationPileProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)this = &PTR_GetClass_06816bf0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0x40000000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Set8BytesTo0(this + 0x100);
  Set8BytesTo0(this + 0x108);
  Set8BytesTo0(this + 0x110);
  return;
}


/* GridItemRadiationPileProps::StaticNew() */

GridItemRadiationPileProps * GridItemRadiationPileProps::StaticNew(void)

{
  GridItemRadiationPileProps *this;
  
  this = ::operator_new(0x118);
  GridItemRadiationPileProps(this);
  return this;
}


/* GridItemRadiationPileProps::~GridItemRadiationPileProps() */

void __thiscall
GridItemRadiationPileProps::~GridItemRadiationPileProps(GridItemRadiationPileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06816bf0;
  std::string::~string((string *)(this + 0x110));
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemRadiationPileProps::~GridItemRadiationPileProps() */

void __thiscall
GridItemRadiationPileProps::~GridItemRadiationPileProps(GridItemRadiationPileProps *this)

{
  ~GridItemRadiationPileProps(this);
  AK::FreeHook(this);
  return;
}

