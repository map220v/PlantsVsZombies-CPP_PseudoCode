// Class: PassionFlowerProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectileProps::StaticClassInit() */

void PassionFlowerProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PassionFlowerProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0396b4d0,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassionFlowerProjectileProps::StaticGetClass() */

long * PassionFlowerProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerProjectileProps::GetClass() const */

long * PassionFlowerProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerProjectileProps::~PassionFlowerProjectileProps() */

void __thiscall
PassionFlowerProjectileProps::~PassionFlowerProjectileProps(PassionFlowerProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5e20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PassionFlowerProjectileProps::~PassionFlowerProjectileProps() */

void __thiscall
PassionFlowerProjectileProps::~PassionFlowerProjectileProps(PassionFlowerProjectileProps *this)

{
  ~PassionFlowerProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PassionFlowerProjectileProps::PassionFlowerProjectileProps() */

void __thiscall
PassionFlowerProjectileProps::PassionFlowerProjectileProps(PassionFlowerProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066d5e20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  *(undefined4 *)(this + 0x1ec) = 0x40400000;
  return;
}


/* PassionFlowerProjectileProps::StaticNew() */

PassionFlowerProjectileProps * PassionFlowerProjectileProps::StaticNew(void)

{
  PassionFlowerProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  PassionFlowerProjectileProps(this);
  return this;
}

