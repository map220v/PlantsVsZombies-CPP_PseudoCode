// Class: ObjectTypeDescriptor


/* ObjectTypeDescriptor::ObjectTypeDescriptor() */

void __thiscall ObjectTypeDescriptor::ObjectTypeDescriptor(ObjectTypeDescriptor *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06793510;
  Set8BytesTo0(this + 8);
  return;
}


/* ObjectTypeDescriptor::~ObjectTypeDescriptor() */

void __thiscall ObjectTypeDescriptor::~ObjectTypeDescriptor(ObjectTypeDescriptor *this)

{
  *(undefined ***)this = &PTR_GetClass_06793510;
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* ObjectTypeDescriptor::~ObjectTypeDescriptor() */

void __thiscall ObjectTypeDescriptor::~ObjectTypeDescriptor(ObjectTypeDescriptor *this)

{
  ~ObjectTypeDescriptor(this);
  AK::FreeHook(this);
  return;
}


/* ObjectTypeDescriptor::ObjectTypeDescriptor(ObjectTypeDescriptor const&) */

void __thiscall
ObjectTypeDescriptor::ObjectTypeDescriptor(ObjectTypeDescriptor *this,ObjectTypeDescriptor *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06793510;
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* ObjectTypeDescriptor::ObjectTypeDescriptor(ObjectTypeDescriptor&&) */

void __thiscall
ObjectTypeDescriptor::ObjectTypeDescriptor(ObjectTypeDescriptor *this,ObjectTypeDescriptor *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06793510;
  FUN_05474148(this + 8,param_1 + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDescriptor::StaticClassInit() */

void ObjectTypeDescriptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ObjectTypeDescriptor");
    (*pcVar2)(plVar1,asStack_10,
              StaticClassInit()::Local_Build_ObjectTypeDescriptor::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObjectTypeDescriptor::StaticGetClass() */

long * ObjectTypeDescriptor::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ObjectTypeDescriptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObjectTypeDescriptor::GetClass() const */

long * ObjectTypeDescriptor::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ObjectTypeDescriptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObjectTypeDescriptor::StaticNew() */

ObjectTypeDescriptor * ObjectTypeDescriptor::StaticNew(void)

{
  ObjectTypeDescriptor *this;
  
  this = ::operator_new(0x10);
  ObjectTypeDescriptor(this);
  return this;
}

