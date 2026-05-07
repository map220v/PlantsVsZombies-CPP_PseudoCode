// Class: ZombiePumpkinImp


/* ZombiePumpkinImp::~ZombiePumpkinImp() */

void __thiscall ZombiePumpkinImp::~ZombiePumpkinImp(ZombiePumpkinImp *this)

{
  *(undefined ***)this = &PTR_GetClass_069082e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinImp_06908d40;
  ZombiePumpkin::~ZombiePumpkin((ZombiePumpkin *)this);
  return;
}


/* non-virtual thunk to ZombiePumpkinImp::~ZombiePumpkinImp() */

void __thiscall ZombiePumpkinImp::~ZombiePumpkinImp(ZombiePumpkinImp *this)

{
  ~ZombiePumpkinImp(this + -0x10);
  return;
}


/* ZombiePumpkinImp::~ZombiePumpkinImp() */

void __thiscall ZombiePumpkinImp::~ZombiePumpkinImp(ZombiePumpkinImp *this)

{
  ~ZombiePumpkinImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePumpkinImp::~ZombiePumpkinImp() */

void __thiscall ZombiePumpkinImp::~ZombiePumpkinImp(ZombiePumpkinImp *this)

{
  ~ZombiePumpkinImp(this + -0x10);
  return;
}


/* ZombiePumpkinImp::ZombiePumpkinImp() */

void __thiscall ZombiePumpkinImp::ZombiePumpkinImp(ZombiePumpkinImp *this)

{
  ZombiePumpkin::ZombiePumpkin((ZombiePumpkin *)this);
  *(undefined ***)this = &PTR_GetClass_069082e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinImp_06908d40;
  return;
}


/* ZombiePumpkinImp::StaticNew() */

ZombiePumpkinImp * ZombiePumpkinImp::StaticNew(void)

{
  ZombiePumpkinImp *this;
  
  this = ::operator_new(0x820);
  ZombiePumpkinImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinImp::StaticClassInit() */

void ZombiePumpkinImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePumpkinImp");
    (*pcVar2)(plVar1,asStack_10,FUN_048371ec,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinImp::StaticGetClass() */

long * ZombiePumpkinImp::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinImp::GetClass() const */

long * ZombiePumpkinImp::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinImp::onAnimStoppedCallback(std::string const&) */

void __thiscall ZombiePumpkinImp::onAnimStoppedCallback(ZombiePumpkinImp *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"ks");
  if (!bVar1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombiePumpkinImp::setColor(std::string const&) */

void ZombiePumpkinImp::setColor(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  thunk_FUN_05475e00(param_1 + 0x818);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  (**(code **)(*(long *)pZVar1 + 0x290))(pZVar1,1,param_1 + 0x818);
  return;
}


/* ZombiePumpkinImp::onUpdate() */

void __thiscall ZombiePumpkinImp::onUpdate(ZombiePumpkinImp *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  float fVar2;
  float fVar3;
  
  Zombie::onUpdate((Zombie *)this);
  fVar2 = (float)FUN_048365bc(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_048365c0(*(undefined4 *)(this + 0x284));
  if (fVar2 < fVar3 * 0.6) {
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar1 + 0x290))(pZVar1,3,this + 0x818);
    return;
  }
  if (fVar3 * 0.8 <= fVar2) {
    return;
  }
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar1 + 0x290))(pZVar1,2,this + 0x818);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinImp::onPlaceOnBoard() */

void __thiscall ZombiePumpkinImp::onPlaceOnBoard(ZombiePumpkinImp *this)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0,0);
  plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"ks");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

