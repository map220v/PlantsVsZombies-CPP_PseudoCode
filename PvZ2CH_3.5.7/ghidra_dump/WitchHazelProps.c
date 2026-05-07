// Class: WitchHazelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WitchHazelProps::StaticClassInit() */

void WitchHazelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WitchHazelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041ac2f8,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WitchHazelProps::StaticGetClass() */

long * WitchHazelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WitchHazelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WitchHazelProps::GetClass() const */

long * WitchHazelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WitchHazelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WitchHazelProps::WitchHazelProps() */

void __thiscall WitchHazelProps::WitchHazelProps(WitchHazelProps *this)

{
  long lVar1;
  size_t in_x2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067fe890;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2b8));
  Set8BytesTo0((string *)(this + 0x2c8));
  Set8BytesTo0((string *)(this + 0x2d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x300));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x2b8) = local_10;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  std::string::append((string *)(this + 0x2c8),"puffshroom",in_x2);
  std::string::append((string *)(this + 0x2d0),"toadstool",in_x2);
  *(undefined4 *)(this + 0x2d8) = 0xffffffff;
  *(undefined4 *)(this + 0x2dc) = 0xffffffff;
  *(undefined4 *)(this + 0x2e0) = 2;
  *(undefined4 *)(this + 0x2e8) = 3;
  *(undefined4 *)(this + 0x2f0) = 5;
  *(undefined4 *)(this + 0x2f8) = 500;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x2e4) = 0x40400000;
  *(undefined4 *)(this + 0x2f4) = 0x3e99999a;
  *(undefined4 *)(this + 0x2ec) = 0x40a00000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WitchHazelProps::StaticNew() */

WitchHazelProps * WitchHazelProps::StaticNew(void)

{
  WitchHazelProps *this;
  
  this = ::operator_new(0x318);
  WitchHazelProps(this);
  return this;
}


/* WitchHazelProps::~WitchHazelProps() */

void __thiscall WitchHazelProps::~WitchHazelProps(WitchHazelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe890;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x300));
  std::string::~string((string *)(this + 0x2d0));
  std::string::~string((string *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WitchHazelProps::~WitchHazelProps() */

void __thiscall WitchHazelProps::~WitchHazelProps(WitchHazelProps *this)

{
  ~WitchHazelProps(this);
  AK::FreeHook(this);
  return;
}

