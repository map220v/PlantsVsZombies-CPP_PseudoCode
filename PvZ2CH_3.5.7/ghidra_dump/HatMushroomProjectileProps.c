// Class: HatMushroomProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectileProps::StaticClassInit() */

void HatMushroomProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HatMushroomProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b1d2f0,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomProjectileProps::StaticGetClass() */

long * HatMushroomProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HatMushroomProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectileProps::GetClass() const */

long * HatMushroomProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"HatMushroomProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectileProps::~HatMushroomProjectileProps() */

void __thiscall
HatMushroomProjectileProps::~HatMushroomProjectileProps(HatMushroomProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672d8c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1f8));
  std::string::~string((string *)(this + 0x1e8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* HatMushroomProjectileProps::~HatMushroomProjectileProps() */

void __thiscall
HatMushroomProjectileProps::~HatMushroomProjectileProps(HatMushroomProjectileProps *this)

{
  ~HatMushroomProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* HatMushroomProjectileProps::HatMushroomProjectileProps() */

void __thiscall
HatMushroomProjectileProps::HatMushroomProjectileProps(HatMushroomProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672d8c0;
  Set8BytesTo0(this + 0x1e8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined4 *)(this + 0x1e0) = 0x40a00000;
  *(undefined4 *)(this + 500) = 0;
  return;
}


/* HatMushroomProjectileProps::StaticNew() */

HatMushroomProjectileProps * HatMushroomProjectileProps::StaticNew(void)

{
  HatMushroomProjectileProps *this;
  
  this = ::operator_new(0x228);
  HatMushroomProjectileProps(this);
  return this;
}

