// Class: PrimalWallnutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalWallnutProps::StaticClassInit() */

void PrimalWallnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalWallnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0418501c,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalWallnutProps::StaticGetClass() */

long * PrimalWallnutProps::StaticGetClass(void)

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
  uVar2 = WallnutProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalWallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalWallnutProps::GetClass() const */

long * PrimalWallnutProps::GetClass(void)

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
  uVar2 = WallnutProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalWallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalWallnutProps::PrimalWallnutProps() */

void __thiscall PrimalWallnutProps::PrimalWallnutProps(PrimalWallnutProps *this)

{
  WallnutProps::WallnutProps((WallnutProps *)this);
  *(undefined ***)this = &PTR_GetClass_067f8ff0;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0x41a00000;
  *(undefined4 *)(this + 0x2ec) = 0x447a0000;
  *(undefined4 *)(this + 0x2e8) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  return;
}


/* PrimalWallnutProps::StaticNew() */

PrimalWallnutProps * PrimalWallnutProps::StaticNew(void)

{
  PrimalWallnutProps *this;
  
  this = ::operator_new(0x308);
  PrimalWallnutProps(this);
  return this;
}


/* PrimalWallnutProps::~PrimalWallnutProps() */

void __thiscall PrimalWallnutProps::~PrimalWallnutProps(PrimalWallnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f8ff0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2f0));
  WallnutProps::~WallnutProps((WallnutProps *)this);
  return;
}


/* PrimalWallnutProps::~PrimalWallnutProps() */

void __thiscall PrimalWallnutProps::~PrimalWallnutProps(PrimalWallnutProps *this)

{
  ~PrimalWallnutProps(this);
  AK::FreeHook(this);
  return;
}

