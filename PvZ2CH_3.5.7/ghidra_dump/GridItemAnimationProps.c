// Class: GridItemAnimationProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimationProps::GridItemAnimationProps() */

void __thiscall GridItemAnimationProps::GridItemAnimationProps(GridItemAnimationProps *this)

{
  long lVar1;
  size_t in_x2;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06781b20;
  Set8BytesTo0(this + 0x98);
  Set8BytesTo0((string *)(this + 0xa0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xa8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb0));
  Set8BytesTo0(this + 0xb8);
  DVec3::DVec3((DVec3 *)(this + 0xc0));
  std::string::append((string *)(this + 0xa0),"PopAnimRig",in_x2);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,100.0,115.0);
  *(undefined8 *)(this + 0xa8) = local_18[0];
  Sexy::FastCurve::SetOutRange((FastCurve *)local_18,1.0,1.0);
  *(undefined8 *)(this + 0xb0) = local_18[0];
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc0),(SexyVector3 *)local_18);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xcc) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimationProps::~GridItemAnimationProps() */

void __thiscall GridItemAnimationProps::~GridItemAnimationProps(GridItemAnimationProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06781b20;
  std::string::~string((string *)(this + 0xb8));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* GridItemAnimationProps::~GridItemAnimationProps() */

void __thiscall GridItemAnimationProps::~GridItemAnimationProps(GridItemAnimationProps *this)

{
  ~GridItemAnimationProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAnimationProps::StaticClassInit() */

void GridItemAnimationProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAnimationProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e041a0,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAnimationProps::StaticGetClass() */

long * GridItemAnimationProps::StaticGetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAnimationProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimationProps::GetClass() const */

long * GridItemAnimationProps::GetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAnimationProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAnimationProps::StaticNew() */

GridItemAnimationProps * GridItemAnimationProps::StaticNew(void)

{
  GridItemAnimationProps *this;
  
  this = ::operator_new(0xd0);
  GridItemAnimationProps(this);
  return this;
}

