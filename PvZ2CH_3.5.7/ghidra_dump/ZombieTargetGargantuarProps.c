// Class: ZombieTargetGargantuarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTargetGargantuarProps::StaticClassInit() */

void ZombieTargetGargantuarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTargetGargantuarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c3570,0x270,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTargetGargantuarProps::ZombieTargetGargantuarProps() */

void __thiscall
ZombieTargetGargantuarProps::ZombieTargetGargantuarProps(ZombieTargetGargantuarProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b16f0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x22c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x234));
  Set8BytesTo0((string *)(this + 0x240));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  DVec3::DVec3((DVec3 *)(this + 0x260));
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  std::string::append((string *)(this + 0x240),"",in_x2);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x248));
  return;
}


/* ZombieTargetGargantuarProps::StaticNew() */

ZombieTargetGargantuarProps * ZombieTargetGargantuarProps::StaticNew(void)

{
  ZombieTargetGargantuarProps *this;
  
  this = ::operator_new(0x270);
  ZombieTargetGargantuarProps(this);
  return this;
}


/* ZombieTargetGargantuarProps::~ZombieTargetGargantuarProps() */

void __thiscall
ZombieTargetGargantuarProps::~ZombieTargetGargantuarProps(ZombieTargetGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b16f0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x248));
  std::string::~string((string *)(this + 0x240));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieTargetGargantuarProps::~ZombieTargetGargantuarProps() */

void __thiscall
ZombieTargetGargantuarProps::~ZombieTargetGargantuarProps(ZombieTargetGargantuarProps *this)

{
  ~ZombieTargetGargantuarProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTargetGargantuarProps::StaticGetClass() */

long * ZombieTargetGargantuarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTargetGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTargetGargantuarProps::GetClass() const */

long * ZombieTargetGargantuarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTargetGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

