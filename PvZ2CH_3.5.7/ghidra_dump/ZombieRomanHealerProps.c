// Class: ZombieRomanHealerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerProps::StaticClassInit() */

void ZombieRomanHealerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanHealerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04eea288,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealerProps::StaticGetClass() */

long * ZombieRomanHealerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanHealerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerProps::GetClass() const */

long * ZombieRomanHealerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanHealerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerProps::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
ZombieRomanHealerProps::GatherResourceRequirements(ZombieRomanHealerProps *this,set *param_1)

{
  char cVar1;
  GridItemType *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x228));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (GridItemType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  GridItemType::AddResourceRequirements(this_00,param_1);
  return;
}


/* ZombieRomanHealerProps::ZombieRomanHealerProps() */

void __thiscall ZombieRomanHealerProps::ZombieRomanHealerProps(ZombieRomanHealerProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a01480;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x230));
  return;
}


/* ZombieRomanHealerProps::StaticNew() */

ZombieRomanHealerProps * ZombieRomanHealerProps::StaticNew(void)

{
  ZombieRomanHealerProps *this;
  
  this = ::operator_new(600);
  ZombieRomanHealerProps(this);
  return this;
}


/* ZombieRomanHealerProps::~ZombieRomanHealerProps() */

void __thiscall ZombieRomanHealerProps::~ZombieRomanHealerProps(ZombieRomanHealerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a01480;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x230));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieRomanHealerProps::~ZombieRomanHealerProps() */

void __thiscall ZombieRomanHealerProps::~ZombieRomanHealerProps(ZombieRomanHealerProps *this)

{
  ~ZombieRomanHealerProps(this);
  AK::FreeHook(this);
  return;
}

