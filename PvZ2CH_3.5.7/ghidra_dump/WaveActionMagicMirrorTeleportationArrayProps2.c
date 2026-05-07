// Class: WaveActionMagicMirrorTeleportationArrayProps2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionMagicMirrorTeleportationArrayProps2::StaticClassInit() */

void WaveActionMagicMirrorTeleportationArrayProps2::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicMirrorTeleportationArrayData2");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9270c,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveActionMagicMirrorTeleportationArrayProps2");
    (*pcVar3)(plVar2,asStack_10,FUN_04c93400,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionMagicMirrorTeleportationArrayProps2::StaticGetClass() */

long * WaveActionMagicMirrorTeleportationArrayProps2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArrayProps2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::GetClass() const */

long * WaveActionMagicMirrorTeleportationArrayProps2::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArrayProps2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::GetActionClass() const */

long * WaveActionMagicMirrorTeleportationArrayProps2::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionMagicMirrorTeleportationArray2::sClass != (long *)0x0) {
    return WaveActionMagicMirrorTeleportationArray2::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionMagicMirrorTeleportationArray2::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionMagicMirrorTeleportationArray2",uVar2,
            WaveActionMagicMirrorTeleportationArray2::StaticNew);
  WaveActionMagicMirrorTeleportationArray2::StaticClassInit();
  return WaveActionMagicMirrorTeleportationArray2::sClass;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::WaveActionMagicMirrorTeleportationArrayProps2() */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps2::WaveActionMagicMirrorTeleportationArrayProps2
          (WaveActionMagicMirrorTeleportationArrayProps2 *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069955f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::StaticNew() */

WaveActionMagicMirrorTeleportationArrayProps2 *
WaveActionMagicMirrorTeleportationArrayProps2::StaticNew(void)

{
  WaveActionMagicMirrorTeleportationArrayProps2 *this;
  
  this = ::operator_new(0x58);
  WaveActionMagicMirrorTeleportationArrayProps2(this);
  return this;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::~WaveActionMagicMirrorTeleportationArrayProps2()
    */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps2::~WaveActionMagicMirrorTeleportationArrayProps2
          (WaveActionMagicMirrorTeleportationArrayProps2 *this)

{
  *(undefined ***)this = &PTR_GetClass_069955f0;
  std::vector<MagicMirrorTeleportationArrayData2,std::allocator<MagicMirrorTeleportationArrayData2>>
  ::~vector((vector<MagicMirrorTeleportationArrayData2,std::allocator<MagicMirrorTeleportationArrayData2>>
             *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionMagicMirrorTeleportationArrayProps2::~WaveActionMagicMirrorTeleportationArrayProps2()
    */

void __thiscall
WaveActionMagicMirrorTeleportationArrayProps2::~WaveActionMagicMirrorTeleportationArrayProps2
          (WaveActionMagicMirrorTeleportationArrayProps2 *this)

{
  ~WaveActionMagicMirrorTeleportationArrayProps2(this);
  AK::FreeHook(this);
  return;
}

