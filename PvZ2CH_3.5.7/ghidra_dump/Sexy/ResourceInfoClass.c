// Class: Sexy::ResourceInfoClass


/* Sexy::ResourceInfoClass::SetManifestTypeName(Sexy::RtName const&) */

void Sexy::ResourceInfoClass::SetManifestTypeName(RtName *param_1)

{
  FUN_05194864(param_1 + 0x58);
  return;
}


/* Sexy::ResourceInfoClass::GetManifestTypeName() */

RtName * Sexy::ResourceInfoClass::GetManifestTypeName(void)

{
  long in_x0;
  RtName *in_x8;
  
  RtName::RtName(in_x8,(RtName *)(in_x0 + 0x58));
  return in_x8;
}


/* Sexy::ResourceInfoClass::StaticGetClass() */

long * Sexy::ResourceInfoClass::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtClass::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoClass",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ResourceInfoClass::GetClass() const */

long * Sexy::ResourceInfoClass::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtClass::StaticGetClass();
  (*pcVar3)(plVar1,"ResourceInfoClass",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ResourceInfoClass::~ResourceInfoClass() */

void __thiscall Sexy::ResourceInfoClass::~ResourceInfoClass(ResourceInfoClass *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2fbb0;
  std::
  map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
  ::~map((map<unsigned_long,Sexy::ResourceInfo*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Sexy::ResourceInfo*>>>
          *)(this + 0x68));
  RtName::~RtName((RtName *)(this + 0x58));
  RtClass::~RtClass((RtClass *)this);
  return;
}


/* Sexy::ResourceInfoClass::~ResourceInfoClass() */

void __thiscall Sexy::ResourceInfoClass::~ResourceInfoClass(ResourceInfoClass *this)

{
  ~ResourceInfoClass(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceInfoClass::ResourceInfoClass() */

void __thiscall Sexy::ResourceInfoClass::ResourceInfoClass(ResourceInfoClass *this)

{
  RtClass::RtClass((RtClass *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2fbb0;
  RtName::RtName((RtName *)(this + 0x58));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x68));
  return;
}


/* Sexy::ResourceInfoClass::StaticNew() */

ResourceInfoClass * Sexy::ResourceInfoClass::StaticNew(void)

{
  ResourceInfoClass *this;
  
  this = ::operator_new(0x98);
  ResourceInfoClass(this);
  return this;
}

