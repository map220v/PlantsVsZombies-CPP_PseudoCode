// Class: NightNormalBallProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightNormalBallProjectileProps::StaticClassInit() */

void NightNormalBallProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"NightNormalBallProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e417c4,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightNormalBallProjectileProps::StaticGetClass() */

long * NightNormalBallProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NightNormalBallProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightNormalBallProjectileProps::GetClass() const */

long * NightNormalBallProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NightNormalBallProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightNormalBallProjectileProps::~NightNormalBallProjectileProps() */

void __thiscall
NightNormalBallProjectileProps::~NightNormalBallProjectileProps
          (NightNormalBallProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069ddcf0;
  std::
  vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
             *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* NightNormalBallProjectileProps::~NightNormalBallProjectileProps() */

void __thiscall
NightNormalBallProjectileProps::~NightNormalBallProjectileProps
          (NightNormalBallProjectileProps *this)

{
  ~NightNormalBallProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* NightNormalBallProjectileProps::NightNormalBallProjectileProps() */

void __thiscall
NightNormalBallProjectileProps::NightNormalBallProjectileProps(NightNormalBallProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069ddcf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  return;
}


/* NightNormalBallProjectileProps::StaticNew() */

NightNormalBallProjectileProps * NightNormalBallProjectileProps::StaticNew(void)

{
  NightNormalBallProjectileProps *this;
  
  this = ::operator_new(0x200);
  NightNormalBallProjectileProps(this);
  return this;
}

