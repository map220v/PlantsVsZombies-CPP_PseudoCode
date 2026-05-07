// Class: ZombieVanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVanProps::StaticClassInit() */

void ZombieVanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanSpawnZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_04f3bb04,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieVanProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04f3f9ec,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVanProps::StaticGetClass() */

long * ZombieVanProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieVanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieVanProps::GetClass() const */

long * ZombieVanProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieVanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVanProps::ZombieVanProps() */

void __thiscall ZombieVanProps::ZombieVanProps(ZombieVanProps *this)

{
  bool bVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06a17600;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  DVec3::DVec3((DVec3 *)(this + 0x238));
  DVec3::DVec3((DVec3 *)(this + 0x244));
  DVec3::DVec3((DVec3 *)(this + 0x250));
  Sexy::Insets::Insets((Insets *)(this + 0x268));
  *(undefined4 *)(this + 0x210) = 3;
  *(undefined4 *)(this + 0x214) = 5;
  std::vector<VanSpawnZombieData,std::allocator<VanSpawnZombieData>>::clear
            ((vector<VanSpawnZombieData,std::allocator<VanSpawnZombieData>> *)(this + 0x218));
  *(undefined4 *)(this + 0x230) = 0x3e99999a;
  *(undefined4 *)(this + 0x234) = 0x40400000;
  EATextSquish::Vec3::Vec3(aVStack_18,-220.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x238),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,-220.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x244),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,-120.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x250),(SexyVector3 *)aVStack_18);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVanProps::StaticNew() */

ZombieVanProps * ZombieVanProps::StaticNew(void)

{
  ZombieVanProps *this;
  
  this = ::operator_new(0x278);
  ZombieVanProps(this);
  return this;
}


/* ZombieVanProps::~ZombieVanProps() */

void __thiscall ZombieVanProps::~ZombieVanProps(ZombieVanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a17600;
  std::vector<VanSpawnZombieData,std::allocator<VanSpawnZombieData>>::~vector
            ((vector<VanSpawnZombieData,std::allocator<VanSpawnZombieData>> *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieVanProps::~ZombieVanProps() */

void __thiscall ZombieVanProps::~ZombieVanProps(ZombieVanProps *this)

{
  ~ZombieVanProps(this);
  AK::FreeHook(this);
  return;
}

