// Class: Lv5SwordProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5SwordProps::StaticClassInit() */

void Lv5SwordProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"Lv5SwordProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3d138,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lv5SwordProps::StaticGetClass() */

long * Lv5SwordProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Lv5SwordProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5SwordProps::GetClass() const */

long * Lv5SwordProps::GetClass(void)

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
  (*pcVar3)(plVar1,"Lv5SwordProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Lv5SwordProps::~Lv5SwordProps() */

void __thiscall Lv5SwordProps::~Lv5SwordProps(Lv5SwordProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd2b0;
  std::
  vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
             *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* Lv5SwordProps::~Lv5SwordProps() */

void __thiscall Lv5SwordProps::~Lv5SwordProps(Lv5SwordProps *this)

{
  ~Lv5SwordProps(this);
  AK::FreeHook(this);
  return;
}


/* Lv5SwordProps::Lv5SwordProps() */

void __thiscall Lv5SwordProps::Lv5SwordProps(Lv5SwordProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069dd2b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  return;
}


/* Lv5SwordProps::StaticNew() */

Lv5SwordProps * Lv5SwordProps::StaticNew(void)

{
  Lv5SwordProps *this;
  
  this = ::operator_new(0x1f8);
  Lv5SwordProps(this);
  return this;
}

