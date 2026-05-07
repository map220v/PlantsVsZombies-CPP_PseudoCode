// Class: BasicZombieWeights


/* BasicZombieWeights::BasicZombieWeights() */

void __thiscall BasicZombieWeights::BasicZombieWeights(BasicZombieWeights *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068e65a0;
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* BasicZombieWeights::BasicZombieWeights(BasicZombieWeights const&) */

void __thiscall
BasicZombieWeights::BasicZombieWeights(BasicZombieWeights *this,BasicZombieWeights *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_068e65a0;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* BasicZombieWeights::~BasicZombieWeights() */

void __thiscall BasicZombieWeights::~BasicZombieWeights(BasicZombieWeights *this)

{
  *(undefined ***)this = &PTR_GetClass_068e65a0;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* BasicZombieWeights::~BasicZombieWeights() */

void __thiscall BasicZombieWeights::~BasicZombieWeights(BasicZombieWeights *this)

{
  ~BasicZombieWeights(this);
  AK::FreeHook(this);
  return;
}


/* BasicZombieWeights::BasicZombieWeights(BasicZombieWeights&&) */

void __thiscall
BasicZombieWeights::BasicZombieWeights(BasicZombieWeights *this,BasicZombieWeights *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_068e65a0;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* BasicZombieWeights::StaticNew() */

BasicZombieWeights * BasicZombieWeights::StaticNew(void)

{
  BasicZombieWeights *this;
  
  this = ::operator_new(0x20);
  BasicZombieWeights(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasicZombieWeights::StaticClassInit() */

void BasicZombieWeights::StaticClassInit(void)

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
    std::string::string(asStack_10,"BasicZombieWeights");
    (*pcVar2)(plVar1,asStack_10,FUN_047cfec8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BasicZombieWeights::StaticGetClass() */

long * BasicZombieWeights::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BasicZombieWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BasicZombieWeights::GetClass() const */

long * BasicZombieWeights::GetClass(void)

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
  (*pcVar3)(plVar1,"BasicZombieWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BasicZombieWeights::TEMPNAMEPLACEHOLDERVALUE(BasicZombieWeights const&) */

BasicZombieWeights * __thiscall
BasicZombieWeights::operator=(BasicZombieWeights *this,BasicZombieWeights *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

