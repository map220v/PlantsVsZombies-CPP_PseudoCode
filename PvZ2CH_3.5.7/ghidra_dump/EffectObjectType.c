// Class: EffectObjectType


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObjectType::StaticClassInit() */

void EffectObjectType::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObjectType");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd8538,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObjectType::StaticGetClass() */

long * EffectObjectType::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObjectType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObjectType::GetClass() const */

long * EffectObjectType::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObjectType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObjectType::GetProps() const */

void __thiscall EffectObjectType::GetProps(EffectObjectType *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  return;
}


/* EffectObjectType::EffectObjectType() */

void __thiscall EffectObjectType::EffectObjectType(EffectObjectType *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_0675ff60;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* EffectObjectType::StaticNew() */

EffectObjectType * EffectObjectType::StaticNew(void)

{
  EffectObjectType *this;
  
  this = ::operator_new(0x38);
  EffectObjectType(this);
  return this;
}


/* EffectObjectType::~EffectObjectType() */

void __thiscall EffectObjectType::~EffectObjectType(EffectObjectType *this)

{
  *(undefined ***)this = &PTR_GetClass_0675ff60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* EffectObjectType::~EffectObjectType() */

void __thiscall EffectObjectType::~EffectObjectType(EffectObjectType *this)

{
  ~EffectObjectType(this);
  AK::FreeHook(this);
  return;
}


/* EffectObjectType::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall EffectObjectType::AddResourceRequirements(EffectObjectType *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_03cd8424(*(undefined8 *)(this + 0x18));
  uVar2 = FUN_03cd8474(*(undefined8 *)(this + 0x20));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar1,
             uVar2);
  return;
}

