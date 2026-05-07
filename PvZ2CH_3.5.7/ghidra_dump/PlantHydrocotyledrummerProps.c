// Class: PlantHydrocotyledrummerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummerProps::StaticClassInit() */

void PlantHydrocotyledrummerProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HydrocotyledrummerParams");
    (*pcVar3)(plVar2,asStack_10,FUN_04cd8528,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantHydrocotyledrummerProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04cd9f94,0x468,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHydrocotyledrummerProps::StaticGetClass() */

long * PlantHydrocotyledrummerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHydrocotyledrummerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHydrocotyledrummerProps::GetClass() const */

long * PlantHydrocotyledrummerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHydrocotyledrummerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHydrocotyledrummerProps::PlantHydrocotyledrummerProps() */

void __thiscall
PlantHydrocotyledrummerProps::PlantHydrocotyledrummerProps(PlantHydrocotyledrummerProps *this)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0699f8d0;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x2cc));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x2e4));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x2fc));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x314));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x32c));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x344));
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)(this + 0x35c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x380));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x398));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x410));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x428));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x440));
  *(undefined4 *)(this + 0x2b8) = 0x41700000;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  *(undefined4 *)(this + 0x2c8) = 0x40000000;
  HydrocotyledrummerParams::HydrocotyledrummerParams((HydrocotyledrummerParams *)&local_20);
  *(undefined8 *)(this + 0x2cc) = local_20;
  *(undefined8 *)(this + 0x2d4) = uStack_18;
  *(undefined8 *)(this + 0x2dc) = local_10;
  *(undefined8 *)(this + 0x2e4) = local_20;
  *(undefined8 *)(this + 0x2ec) = uStack_18;
  *(undefined8 *)(this + 0x2f4) = local_10;
  *(undefined8 *)(this + 0x2fc) = local_20;
  *(undefined8 *)(this + 0x304) = uStack_18;
  *(undefined8 *)(this + 0x30c) = local_10;
  *(undefined8 *)(this + 0x314) = local_20;
  *(undefined8 *)(this + 0x31c) = uStack_18;
  *(undefined8 *)(this + 0x324) = local_10;
  *(undefined8 *)(this + 0x32c) = local_20;
  *(undefined8 *)(this + 0x334) = uStack_18;
  *(undefined8 *)(this + 0x33c) = local_10;
  *(undefined8 *)(this + 0x344) = local_20;
  *(undefined8 *)(this + 0x34c) = uStack_18;
  *(undefined8 *)(this + 0x354) = local_10;
  *(undefined8 *)(this + 0x36c) = local_10;
  uVar1 = _FUN_04cdc5cc;
  *(undefined8 *)(this + 0x35c) = local_20;
  *(undefined8 *)(this + 0x364) = uStack_18;
  *(undefined4 *)(this + 0x374) = 0x41700000;
  *(undefined4 *)(this + 0x378) = uVar1;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x380));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x398));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3b0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3c8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3e0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3f8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x410));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x428));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHydrocotyledrummerProps::StaticNew() */

PlantHydrocotyledrummerProps * PlantHydrocotyledrummerProps::StaticNew(void)

{
  PlantHydrocotyledrummerProps *this;
  
  this = ::operator_new(0x468);
  PlantHydrocotyledrummerProps(this);
  return this;
}


/* PlantHydrocotyledrummerProps::~PlantHydrocotyledrummerProps() */

void __thiscall
PlantHydrocotyledrummerProps::~PlantHydrocotyledrummerProps(PlantHydrocotyledrummerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699f8d0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x440));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x428));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x410));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3f8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3e0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3c8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3b0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x398));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x380));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantHydrocotyledrummerProps::~PlantHydrocotyledrummerProps() */

void __thiscall
PlantHydrocotyledrummerProps::~PlantHydrocotyledrummerProps(PlantHydrocotyledrummerProps *this)

{
  ~PlantHydrocotyledrummerProps(this);
  AK::FreeHook(this);
  return;
}

