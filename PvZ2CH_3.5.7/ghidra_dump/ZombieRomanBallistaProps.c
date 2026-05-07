// Class: ZombieRomanBallistaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallistaProps::StaticClassInit() */

void ZombieRomanBallistaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanBallistaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0465ba30,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanBallistaProps::StaticGetClass() */

long * ZombieRomanBallistaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanBallistaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanBallistaProps::GetClass() const */

long * ZombieRomanBallistaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanBallistaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanBallistaProps::ZombieRomanBallistaProps() */

void __thiscall ZombieRomanBallistaProps::ZombieRomanBallistaProps(ZombieRomanBallistaProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0688c0f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x238));
  ProbabilityTypeContainer::ProbabilityTypeContainer((ProbabilityTypeContainer *)(this + 0x240));
  *(undefined4 *)(this + 0x228) = 0xfffffff6;
  *(undefined4 *)(this + 0x22c) = 0xffffffff;
  *(undefined4 *)(this + 0x230) = 3;
  *(undefined4 *)(this + 0x210) = 0x40400000;
  *(undefined4 *)(this + 0x218) = 0x3dcccccd;
  *(undefined4 *)(this + 0x214) = 0x41000000;
  *(undefined4 *)(this + 0x220) = 0x42a00000;
  *(undefined4 *)(this + 0x224) = 0x3f800000;
  return;
}


/* ZombieRomanBallistaProps::StaticNew() */

ZombieRomanBallistaProps * ZombieRomanBallistaProps::StaticNew(void)

{
  ZombieRomanBallistaProps *this;
  
  this = ::operator_new(0x268);
  ZombieRomanBallistaProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanBallistaProps::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
ZombieRomanBallistaProps::GatherResourceRequirements(ZombieRomanBallistaProps *this,set *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  string *psVar3;
  ZombieType *this_00;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)(this + 0x240));
  local_20 = FUN_0465af7c(*puVar2);
  local_18 = FUN_0465afcc(puVar2[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      ZombieType::AddInGameResourceRequirements(this_00,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanBallistaProps::~ZombieRomanBallistaProps() */

void __thiscall ZombieRomanBallistaProps::~ZombieRomanBallistaProps(ZombieRomanBallistaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0688c0f0;
  ProbabilityTypeContainer::~ProbabilityTypeContainer((ProbabilityTypeContainer *)(this + 0x240));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieRomanBallistaProps::~ZombieRomanBallistaProps() */

void __thiscall ZombieRomanBallistaProps::~ZombieRomanBallistaProps(ZombieRomanBallistaProps *this)

{
  ~ZombieRomanBallistaProps(this);
  AK::FreeHook(this);
  return;
}

