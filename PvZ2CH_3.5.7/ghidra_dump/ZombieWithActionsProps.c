// Class: ZombieWithActionsProps


/* ZombieWithActionsProps::ZombieWithActionsProps() */

void __thiscall ZombieWithActionsProps::ZombieWithActionsProps(ZombieWithActionsProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068affe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  return;
}


/* ZombieWithActionsProps::~ZombieWithActionsProps() */

void __thiscall ZombieWithActionsProps::~ZombieWithActionsProps(ZombieWithActionsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068affe0;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieWithActionsProps::~ZombieWithActionsProps() */

void __thiscall ZombieWithActionsProps::~ZombieWithActionsProps(ZombieWithActionsProps *this)

{
  ~ZombieWithActionsProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActionsProps::StaticClassInit() */

void ZombieWithActionsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWithActionsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bb5e4,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActionsProps::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
ZombieWithActionsProps::GatherResourceRequirements(ZombieWithActionsProps *this,set *param_1)

{
  bool bVar1;
  RtWeakPtr *this_00;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_046b527c(*(undefined8 *)(this + 0x210));
  local_10 = FUN_046b52cc(*(undefined8 *)(this + 0x218));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithActionsProps::StaticNew() */

ZombieWithActionsProps * ZombieWithActionsProps::StaticNew(void)

{
  ZombieWithActionsProps *this;
  
  this = ::operator_new(0x228);
  ZombieWithActionsProps(this);
  return this;
}


/* ZombieWithActionsProps::StaticGetClass() */

long * ZombieWithActionsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWithActionsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithActionsProps::GetClass() const */

long * ZombieWithActionsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWithActionsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

