// Class: ZombieBoundTileActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBoundTileActionProps::StaticClassInit() */

void ZombieBoundTileActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBoundTileActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1f464,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBoundTileActionProps::StaticGetClass() */

long * ZombieBoundTileActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBoundTileActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBoundTileActionProps::GetClass() const */

long * ZombieBoundTileActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBoundTileActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBoundTileActionProps::GetActionClass() const */

long * ZombieBoundTileActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieBoundTileAction::sClass != (long *)0x0) {
    return ZombieBoundTileAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieBoundTileAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBoundTileAction",uVar2,ZombieBoundTileAction::StaticNew);
  ZombieBoundTileAction::StaticClassInit();
  return ZombieBoundTileAction::sClass;
}


/* ZombieBoundTileActionProps::ZombieBoundTileActionProps() */

void __thiscall
ZombieBoundTileActionProps::ZombieBoundTileActionProps(ZombieBoundTileActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067658c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombieBoundTileActionProps::StaticNew() */

ZombieBoundTileActionProps * ZombieBoundTileActionProps::StaticNew(void)

{
  ZombieBoundTileActionProps *this;
  
  this = ::operator_new(0x58);
  ZombieBoundTileActionProps(this);
  return this;
}


/* ZombieBoundTileActionProps::~ZombieBoundTileActionProps() */

void __thiscall
ZombieBoundTileActionProps::~ZombieBoundTileActionProps(ZombieBoundTileActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067658c0;
  std::vector<PotionData,std::allocator<PotionData>>::~vector
            ((vector<PotionData,std::allocator<PotionData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* ZombieBoundTileActionProps::~ZombieBoundTileActionProps() */

void __thiscall
ZombieBoundTileActionProps::~ZombieBoundTileActionProps(ZombieBoundTileActionProps *this)

{
  ~ZombieBoundTileActionProps(this);
  AK::FreeHook(this);
  return;
}

