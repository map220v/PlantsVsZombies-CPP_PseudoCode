// Class: ZombieSteamCoalMinerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamCoalMinerProps::StaticClassInit() */

void ZombieSteamCoalMinerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSteamCoalMinerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c38524,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSteamCoalMinerProps::StaticGetClass() */

long * ZombieSteamCoalMinerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalMinerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalMinerProps::GetClass() const */

long * ZombieSteamCoalMinerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamCoalMinerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamCoalMinerProps::ZombieSteamCoalMinerProps() */

void __thiscall
ZombieSteamCoalMinerProps::ZombieSteamCoalMinerProps(ZombieSteamCoalMinerProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0674e770;
  Set8BytesTo0((string *)(this + 0x218));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  *(undefined4 *)(this + 0x210) = 0;
  std::string::append((string *)(this + 0x218),"coal",in_x2);
  *(undefined4 *)(this + 0x220) = 5;
  return;
}


/* ZombieSteamCoalMinerProps::StaticNew() */

ZombieSteamCoalMinerProps * ZombieSteamCoalMinerProps::StaticNew(void)

{
  ZombieSteamCoalMinerProps *this;
  
  this = ::operator_new(0x240);
  ZombieSteamCoalMinerProps(this);
  return this;
}


/* ZombieSteamCoalMinerProps::~ZombieSteamCoalMinerProps() */

void __thiscall
ZombieSteamCoalMinerProps::~ZombieSteamCoalMinerProps(ZombieSteamCoalMinerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674e770;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x228));
  std::string::~string((string *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSteamCoalMinerProps::~ZombieSteamCoalMinerProps() */

void __thiscall
ZombieSteamCoalMinerProps::~ZombieSteamCoalMinerProps(ZombieSteamCoalMinerProps *this)

{
  ~ZombieSteamCoalMinerProps(this);
  AK::FreeHook(this);
  return;
}

