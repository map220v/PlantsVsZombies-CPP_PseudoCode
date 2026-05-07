// Class: TwinsSunProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsSunProps::StaticClassInit() */

void TwinsSunProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsSunProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d45498,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsSunProps::StaticGetClass() */

long * TwinsSunProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsSunProps::GetClass() const */

long * TwinsSunProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsSunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsSunProps::~TwinsSunProps() */

void __thiscall TwinsSunProps::~TwinsSunProps(TwinsSunProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069af3f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* TwinsSunProps::~TwinsSunProps() */

void __thiscall TwinsSunProps::~TwinsSunProps(TwinsSunProps *this)

{
  ~TwinsSunProps(this);
  AK::FreeHook(this);
  return;
}


/* TwinsSunProps::TwinsSunProps() */

void __thiscall TwinsSunProps::TwinsSunProps(TwinsSunProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069af3f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  return;
}


/* TwinsSunProps::StaticNew() */

TwinsSunProps * TwinsSunProps::StaticNew(void)

{
  TwinsSunProps *this;
  
  this = ::operator_new(0x1e8);
  TwinsSunProps(this);
  return this;
}

