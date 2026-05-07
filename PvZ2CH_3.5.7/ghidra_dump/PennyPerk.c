// Class: PennyPerk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerk::StaticClassInit() */

void PennyPerk::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerk");
    (*pcVar2)(plVar1,asStack_10,FUN_036c3598,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerk::StaticGetClass() */

long * PennyPerk::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerk::GetClass() const */

long * PennyPerk::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerk",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerk::~PennyPerk() */

void __thiscall PennyPerk::~PennyPerk(PennyPerk *this)

{
  *(undefined ***)this = &PTR_GetClass_06680f70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* PennyPerk::~PennyPerk() */

void __thiscall PennyPerk::~PennyPerk(PennyPerk *this)

{
  ~PennyPerk(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerk::PennyPerk() */

void __thiscall PennyPerk::PennyPerk(PennyPerk *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06680f70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[0x20] = (PennyPerk)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* PennyPerk::StaticNew() */

PennyPerk * PennyPerk::StaticNew(void)

{
  PennyPerk *this;
  
  this = ::operator_new(0x28);
  PennyPerk(this);
  return this;
}

