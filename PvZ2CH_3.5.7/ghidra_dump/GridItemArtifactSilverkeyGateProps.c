// Class: GridItemArtifactSilverkeyGateProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactSilverkeyGateProps::StaticClassInit() */

void GridItemArtifactSilverkeyGateProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactSilverkeyGateProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037432fc,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactSilverkeyGateProps::StaticGetClass() */

long * GridItemArtifactSilverkeyGateProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimControllerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactSilverkeyGateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactSilverkeyGateProps::GetClass() const */

long * GridItemArtifactSilverkeyGateProps::GetClass(void)

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
  uVar2 = GridItemAnimControllerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactSilverkeyGateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactSilverkeyGateProps::GridItemArtifactSilverkeyGateProps() */

void __thiscall
GridItemArtifactSilverkeyGateProps::GridItemArtifactSilverkeyGateProps
          (GridItemArtifactSilverkeyGateProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06693870;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  *(undefined4 *)(this + 0xd0) = 0x40400000;
  return;
}


/* GridItemArtifactSilverkeyGateProps::StaticNew() */

GridItemArtifactSilverkeyGateProps * GridItemArtifactSilverkeyGateProps::StaticNew(void)

{
  GridItemArtifactSilverkeyGateProps *this;
  
  this = ::operator_new(0xf0);
  GridItemArtifactSilverkeyGateProps(this);
  return this;
}


/* GridItemArtifactSilverkeyGateProps::~GridItemArtifactSilverkeyGateProps() */

void __thiscall
GridItemArtifactSilverkeyGateProps::~GridItemArtifactSilverkeyGateProps
          (GridItemArtifactSilverkeyGateProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06693870;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemArtifactSilverkeyGateProps::~GridItemArtifactSilverkeyGateProps() */

void __thiscall
GridItemArtifactSilverkeyGateProps::~GridItemArtifactSilverkeyGateProps
          (GridItemArtifactSilverkeyGateProps *this)

{
  ~GridItemArtifactSilverkeyGateProps(this);
  AK::FreeHook(this);
  return;
}

