// Class: GridItemArtifactBlackholeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeProps::StaticClassInit() */

void GridItemArtifactBlackholeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactBlackholeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cad0f4,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackholeProps::StaticGetClass() */

long * GridItemArtifactBlackholeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactBlackholeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactBlackholeProps::GetClass() const */

long * GridItemArtifactBlackholeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactBlackholeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactBlackholeProps::GridItemArtifactBlackholeProps() */

void __thiscall
GridItemArtifactBlackholeProps::GridItemArtifactBlackholeProps(GridItemArtifactBlackholeProps *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimControllerProps::GridItemAnimControllerProps((GridItemAnimControllerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06998a40;
  Sexy::Insets::Insets((Insets *)(this + 0xec));
  Sexy::Insets::Insets((Insets *)&local_18,-1,-1,3,3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xec) = local_18;
  *(undefined8 *)(this + 0xf4) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactBlackholeProps::StaticNew() */

GridItemArtifactBlackholeProps * GridItemArtifactBlackholeProps::StaticNew(void)

{
  GridItemArtifactBlackholeProps *this;
  
  this = ::operator_new(0x100);
  GridItemArtifactBlackholeProps(this);
  return this;
}


/* GridItemArtifactBlackholeProps::~GridItemArtifactBlackholeProps() */

void __thiscall
GridItemArtifactBlackholeProps::~GridItemArtifactBlackholeProps
          (GridItemArtifactBlackholeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06998a40;
  GridItemAnimControllerProps::~GridItemAnimControllerProps((GridItemAnimControllerProps *)this);
  return;
}


/* GridItemArtifactBlackholeProps::~GridItemArtifactBlackholeProps() */

void __thiscall
GridItemArtifactBlackholeProps::~GridItemArtifactBlackholeProps
          (GridItemArtifactBlackholeProps *this)

{
  ~GridItemArtifactBlackholeProps(this);
  AK::FreeHook(this);
  return;
}

