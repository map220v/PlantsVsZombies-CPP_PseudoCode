// Class: AnthuriumThunderTarget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnthuriumThunderTarget::StaticClassInit() */

void AnthuriumThunderTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnthuriumThunderTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_042203d8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnthuriumThunderTarget::StaticGetClass() */

long * AnthuriumThunderTarget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnthuriumThunderTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumThunderTarget::GetClass() const */

long * AnthuriumThunderTarget::GetClass(void)

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
  (*pcVar3)(plVar1,"AnthuriumThunderTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumThunderTarget::AnthuriumThunderTarget() */

void __thiscall AnthuriumThunderTarget::AnthuriumThunderTarget(AnthuriumThunderTarget *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0680e5e0;
  Sexy::Point::Point((Point *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* AnthuriumThunderTarget::StaticNew() */

AnthuriumThunderTarget * AnthuriumThunderTarget::StaticNew(void)

{
  AnthuriumThunderTarget *this;
  
  this = ::operator_new(0x18);
  AnthuriumThunderTarget(this);
  return this;
}


/* AnthuriumThunderTarget::~AnthuriumThunderTarget() */

void __thiscall AnthuriumThunderTarget::~AnthuriumThunderTarget(AnthuriumThunderTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_0680e5e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  nop();
  return;
}


/* AnthuriumThunderTarget::~AnthuriumThunderTarget() */

void __thiscall AnthuriumThunderTarget::~AnthuriumThunderTarget(AnthuriumThunderTarget *this)

{
  ~AnthuriumThunderTarget(this);
  AK::FreeHook(this);
  return;
}

