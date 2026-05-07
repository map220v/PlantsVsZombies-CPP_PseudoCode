// Class: ZombiePotionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionProps::StaticClassInit() */

void ZombiePotionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePotionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1bd74,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePotionProps::StaticGetClass() */

long * ZombiePotionProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionProps::GetClass() const */

long * ZombiePotionProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionProps::ZombiePotionProps() */

void __thiscall ZombiePotionProps::ZombiePotionProps(ZombiePotionProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06784b20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  Set8BytesTo0(this + 0xf8);
  Set8BytesTo0(this + 0x100);
  Set8BytesTo0(this + 0x108);
  return;
}


/* ZombiePotionProps::StaticNew() */

ZombiePotionProps * ZombiePotionProps::StaticNew(void)

{
  ZombiePotionProps *this;
  
  this = ::operator_new(0x110);
  ZombiePotionProps(this);
  return this;
}


/* ZombiePotionProps::~ZombiePotionProps() */

void __thiscall ZombiePotionProps::~ZombiePotionProps(ZombiePotionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06784b20;
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::string::~string((string *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* ZombiePotionProps::~ZombiePotionProps() */

void __thiscall ZombiePotionProps::~ZombiePotionProps(ZombiePotionProps *this)

{
  ~ZombiePotionProps(this);
  AK::FreeHook(this);
  return;
}

