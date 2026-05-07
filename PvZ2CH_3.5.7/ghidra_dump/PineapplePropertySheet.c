// Class: PineapplePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineapplePropertySheet::StaticClassInit() */

void PineapplePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineapplePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0410d87c,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineapplePropertySheet::StaticGetClass() */

long * PineapplePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineapplePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineapplePropertySheet::GetClass() const */

long * PineapplePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"PineapplePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineapplePropertySheet::PineapplePropertySheet() */

void __thiscall PineapplePropertySheet::PineapplePropertySheet(PineapplePropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_067e4cd0;
  *(undefined4 *)(this + 700) = 0x40400000;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  return;
}


/* PineapplePropertySheet::StaticNew() */

PineapplePropertySheet * PineapplePropertySheet::StaticNew(void)

{
  PineapplePropertySheet *this;
  
  this = ::operator_new(0x2e0);
  PineapplePropertySheet(this);
  return this;
}


/* PineapplePropertySheet::~PineapplePropertySheet() */

void __thiscall PineapplePropertySheet::~PineapplePropertySheet(PineapplePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4cd0;
  std::
  vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
             *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PineapplePropertySheet::~PineapplePropertySheet() */

void __thiscall PineapplePropertySheet::~PineapplePropertySheet(PineapplePropertySheet *this)

{
  ~PineapplePropertySheet(this);
  AK::FreeHook(this);
  return;
}

