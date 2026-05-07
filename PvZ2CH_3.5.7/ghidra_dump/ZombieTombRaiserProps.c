// Class: ZombieTombRaiserProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiserProps::StaticClassInit() */

void ZombieTombRaiserProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTombRaiserProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046be23c,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTombRaiserProps::ZombieTombRaiserProps() */

void __thiscall ZombieTombRaiserProps::ZombieTombRaiserProps(ZombieTombRaiserProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0580;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x220));
  *(undefined4 *)(this + 0x218) = 2;
  *(undefined4 *)(this + 0x214) = 0x40c00000;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* ZombieTombRaiserProps::StaticNew() */

ZombieTombRaiserProps * ZombieTombRaiserProps::StaticNew(void)

{
  ZombieTombRaiserProps *this;
  
  this = ::operator_new(0x228);
  ZombieTombRaiserProps(this);
  return this;
}


/* ZombieTombRaiserProps::~ZombieTombRaiserProps() */

void __thiscall ZombieTombRaiserProps::~ZombieTombRaiserProps(ZombieTombRaiserProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0580;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieTombRaiserProps::~ZombieTombRaiserProps() */

void __thiscall ZombieTombRaiserProps::~ZombieTombRaiserProps(ZombieTombRaiserProps *this)

{
  ~ZombieTombRaiserProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTombRaiserProps::StaticGetClass() */

long * ZombieTombRaiserProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTombRaiserProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTombRaiserProps::GetClass() const */

long * ZombieTombRaiserProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTombRaiserProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

