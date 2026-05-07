// Class: WaveActionMagicMirrorTeleportationArrayProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArrayProps::StaticClassInit() */

void WaveActionMagicMirrorTeleportationArrayProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicMirrorTeleportationArrayData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c91338,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveActionMagicMirrorTeleportationArrayProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04c91f68,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionMagicMirrorTeleportationArrayProps::StaticGetClass() */

long * WaveActionMagicMirrorTeleportationArrayProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArrayProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps::GetClass() const */

long * WaveActionMagicMirrorTeleportationArrayProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArrayProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps::GetActionClass() const */

long * WaveActionMagicMirrorTeleportationArrayProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionMagicMirrorTeleportationArray::sClass != (long *)0x0) {
    return WaveActionMagicMirrorTeleportationArray::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionMagicMirrorTeleportationArray::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArray",uVar2,
            WaveActionMagicMirrorTeleportationArray::StaticNew);
  WaveActionMagicMirrorTeleportationArray::StaticClassInit();
  return WaveActionMagicMirrorTeleportationArray::sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps::WaveActionMagicMirrorTeleportationArrayProps() */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps::WaveActionMagicMirrorTeleportationArrayProps
          (WaveActionMagicMirrorTeleportationArrayProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06995470;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* WaveActionMagicMirrorTeleportationArrayProps::StaticNew() */

WaveActionMagicMirrorTeleportationArrayProps *
WaveActionMagicMirrorTeleportationArrayProps::StaticNew(void)

{
  WaveActionMagicMirrorTeleportationArrayProps *this;
  
  this = ::operator_new(0x58);
  WaveActionMagicMirrorTeleportationArrayProps(this);
  return this;
}


/* WaveActionMagicMirrorTeleportationArrayProps::~WaveActionMagicMirrorTeleportationArrayProps() */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps::~WaveActionMagicMirrorTeleportationArrayProps
          (WaveActionMagicMirrorTeleportationArrayProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06995470;
  std::vector<MagicMirrorTeleportationArrayData,std::allocator<MagicMirrorTeleportationArrayData>>::
  ~vector((vector<MagicMirrorTeleportationArrayData,std::allocator<MagicMirrorTeleportationArrayData>>
           *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionMagicMirrorTeleportationArrayProps::~WaveActionMagicMirrorTeleportationArrayProps() */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps::~WaveActionMagicMirrorTeleportationArrayProps
          (WaveActionMagicMirrorTeleportationArrayProps *this)

{
  ~WaveActionMagicMirrorTeleportationArrayProps(this);
  AK::FreeHook(this);
  return;
}

