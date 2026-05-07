// Class: ZombieDevilsAlienGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuarProps::StaticClassInit() */

void ZombieDevilsAlienGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDevilsAlienGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d66fe0,0x288,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDevilsAlienGargantuarProps::StaticGetClass() */

long * ZombieDevilsAlienGargantuarProps::StaticGetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDevilsAlienGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDevilsAlienGargantuarProps::GetClass() const */

long * ZombieDevilsAlienGargantuarProps::GetClass(void)

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
  uVar2 = ZombieGargantuarProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDevilsAlienGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuarProps::ZombieDevilsAlienGargantuarProps() */

void __thiscall
ZombieDevilsAlienGargantuarProps::ZombieDevilsAlienGargantuarProps
          (ZombieDevilsAlienGargantuarProps *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieGargantuarProps::ZombieGargantuarProps((ZombieGargantuarProps *)this);
  *(undefined ***)this = &PTR_GetClass_069b4cb0;
  Sexy::Insets::Insets((Insets *)(this + 0x26c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x280));
  *(undefined4 *)(this + 0x268) = 0;
  Sexy::Insets::Insets((Insets *)&local_18,1,-1,3,3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x26c) = local_18;
  *(undefined8 *)(this + 0x274) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDevilsAlienGargantuarProps::StaticNew() */

ZombieDevilsAlienGargantuarProps * ZombieDevilsAlienGargantuarProps::StaticNew(void)

{
  ZombieDevilsAlienGargantuarProps *this;
  
  this = ::operator_new(0x288);
  ZombieDevilsAlienGargantuarProps(this);
  return this;
}


/* ZombieDevilsAlienGargantuarProps::~ZombieDevilsAlienGargantuarProps() */

void __thiscall
ZombieDevilsAlienGargantuarProps::~ZombieDevilsAlienGargantuarProps
          (ZombieDevilsAlienGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b4cb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x280));
  ZombieGargantuarProps::~ZombieGargantuarProps((ZombieGargantuarProps *)this);
  return;
}


/* ZombieDevilsAlienGargantuarProps::~ZombieDevilsAlienGargantuarProps() */

void __thiscall
ZombieDevilsAlienGargantuarProps::~ZombieDevilsAlienGargantuarProps
          (ZombieDevilsAlienGargantuarProps *this)

{
  ~ZombieDevilsAlienGargantuarProps(this);
  AK::FreeHook(this);
  return;
}

