// Class: ToadstoolProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToadstoolProps::StaticClassInit() */

void ToadstoolProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToadstoolProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0412a4dc,0x3f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToadstoolProps::StaticGetClass() */

long * ToadstoolProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToadstoolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToadstoolProps::GetClass() const */

long * ToadstoolProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ToadstoolProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToadstoolProps::ToadstoolProps() */

void __thiscall ToadstoolProps::ToadstoolProps(ToadstoolProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067eac70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2d8));
  ComponentVisualStretcherProps::ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x2e8));
  ComponentVisualStretcherProps::ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x368));
  *(undefined4 *)(this + 0x360) = 0x32;
  *(undefined4 *)(this + 1000) = 0x32;
  *(undefined4 *)(this + 0x2d0) = 2;
  *(undefined4 *)(this + 0x350) = 0x43480000;
  *(undefined4 *)(this + 0x3d8) = 0x43480000;
  *(undefined4 *)(this + 0x35c) = 0x19;
  *(undefined4 *)(this + 0x3e4) = 0x19;
  *(undefined4 *)(this + 0x3cc) = 5;
  *(undefined4 *)(this + 0x2d4) = 0x3f000000;
  *(undefined4 *)(this + 0x34c) = 0x40800000;
  *(undefined4 *)(this + 0x3c8) = 0x40800000;
  *(undefined4 *)(this + 0x348) = 0x40400000;
  *(undefined4 *)(this + 0x354) = 0x3e99999a;
  *(undefined4 *)(this + 0x358) = 0x40a00000;
  *(undefined4 *)(this + 0x3d0) = 0x40a00000;
  *(undefined4 *)(this + 0x3d4) = 0x40c00000;
  *(undefined4 *)(this + 0x3dc) = 0x3dcccccd;
  *(undefined4 *)(this + 0x3e0) = 0x40a00000;
  return;
}


/* ToadstoolProps::StaticNew() */

ToadstoolProps * ToadstoolProps::StaticNew(void)

{
  ToadstoolProps *this;
  
  this = ::operator_new(0x3f0);
  ToadstoolProps(this);
  return this;
}


/* ToadstoolProps::~ToadstoolProps() */

void __thiscall ToadstoolProps::~ToadstoolProps(ToadstoolProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067eac70;
  ComponentVisualStretcherProps::~ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x368));
  ComponentVisualStretcherProps::~ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x2e8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ToadstoolProps::~ToadstoolProps() */

void __thiscall ToadstoolProps::~ToadstoolProps(ToadstoolProps *this)

{
  ~ToadstoolProps(this);
  AK::FreeHook(this);
  return;
}

