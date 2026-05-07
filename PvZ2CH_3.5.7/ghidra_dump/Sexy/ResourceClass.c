// Class: Sexy::ResourceClass


/* Sexy::ResourceClass::~ResourceClass() */

void __thiscall Sexy::ResourceClass::~ResourceClass(ResourceClass *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30230;
  RtClass::~RtClass((RtClass *)this);
  return;
}


/* Sexy::ResourceClass::~ResourceClass() */

void __thiscall Sexy::ResourceClass::~ResourceClass(ResourceClass *this)

{
  ~ResourceClass(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ResourceClass::ResourceClass() */

void __thiscall Sexy::ResourceClass::ResourceClass(ResourceClass *this)

{
  RtClass::RtClass((RtClass *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_06a30230;
  return;
}


/* Sexy::ResourceClass::StaticNew() */

ResourceClass * Sexy::ResourceClass::StaticNew(void)

{
  ResourceClass *this;
  
  this = ::operator_new(0x50);
  ResourceClass(this);
  return this;
}


/* Sexy::ResourceClass::StaticGetClass() */

long * Sexy::ResourceClass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ResourceClass",uVar2,StaticNew);
  return sClass;
}


/* Sexy::ResourceClass::GetClass() const */

long * Sexy::ResourceClass::GetClass(void)

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
  (*pcVar3)(plVar1,"ResourceClass",uVar2,StaticNew);
  return sClass;
}

