// Class: ZombieYearMonsterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieYearMonsterProps::StaticClassInit() */

void ZombieYearMonsterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieYearMonsterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0347d8b8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieYearMonsterProps::StaticGetClass() */

long * ZombieYearMonsterProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieYearMonsterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieYearMonsterProps::GetClass() const */

long * ZombieYearMonsterProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieYearMonsterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieYearMonsterProps::ZombieYearMonsterProps() */

void __thiscall ZombieYearMonsterProps::ZombieYearMonsterProps(ZombieYearMonsterProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_0663d420;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  return;
}


/* ZombieYearMonsterProps::StaticNew() */

ZombieYearMonsterProps * ZombieYearMonsterProps::StaticNew(void)

{
  ZombieYearMonsterProps *this;
  
  this = ::operator_new(0x248);
  ZombieYearMonsterProps(this);
  return this;
}


/* ZombieYearMonsterProps::~ZombieYearMonsterProps() */

void __thiscall ZombieYearMonsterProps::~ZombieYearMonsterProps(ZombieYearMonsterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0663d420;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x230));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieYearMonsterProps::~ZombieYearMonsterProps() */

void __thiscall ZombieYearMonsterProps::~ZombieYearMonsterProps(ZombieYearMonsterProps *this)

{
  ~ZombieYearMonsterProps(this);
  AK::FreeHook(this);
  return;
}

