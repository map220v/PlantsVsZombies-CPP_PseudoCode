// Class: ZombieBumperCarElite


/* ZombieBumperCarElite::TakeDamage(DamageInfo const&) */

void __thiscall ZombieBumperCarElite::TakeDamage(ZombieBumperCarElite *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x2c), cVar1 == '\0')) {
    Zombie::TakeDamage((Zombie *)this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCarElite::StaticClassInit() */

void ZombieBumperCarElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBumperCarElite");
    (*pcVar2)(plVar1,asStack_10,FUN_033dee84,0x910,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCarElite::ZombieBumperCarElite() */

void __thiscall ZombieBumperCarElite::ZombieBumperCarElite(ZombieBumperCarElite *this)

{
  ZombieBumperCar::ZombieBumperCar((ZombieBumperCar *)this);
  *(undefined ***)this = &PTR_GetClass_0661a860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBumperCarElite_0661b3c8;
  return;
}


/* ZombieBumperCarElite::StaticNew() */

ZombieBumperCarElite * ZombieBumperCarElite::StaticNew(void)

{
  ZombieBumperCarElite *this;
  
  this = ::operator_new(0x910);
  ZombieBumperCarElite(this);
  return this;
}


/* ZombieBumperCarElite::~ZombieBumperCarElite() */

void __thiscall ZombieBumperCarElite::~ZombieBumperCarElite(ZombieBumperCarElite *this)

{
  *(undefined ***)this = &PTR_GetClass_0661a860;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBumperCarElite_0661b3c8;
  ZombieBumperCar::~ZombieBumperCar((ZombieBumperCar *)this);
  return;
}


/* non-virtual thunk to ZombieBumperCarElite::~ZombieBumperCarElite() */

void __thiscall ZombieBumperCarElite::~ZombieBumperCarElite(ZombieBumperCarElite *this)

{
  ~ZombieBumperCarElite(this + -0x10);
  return;
}


/* ZombieBumperCarElite::~ZombieBumperCarElite() */

void __thiscall ZombieBumperCarElite::~ZombieBumperCarElite(ZombieBumperCarElite *this)

{
  ~ZombieBumperCarElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBumperCarElite::~ZombieBumperCarElite() */

void __thiscall ZombieBumperCarElite::~ZombieBumperCarElite(ZombieBumperCarElite *this)

{
  ~ZombieBumperCarElite(this + -0x10);
  return;
}


/* ZombieBumperCarElite::StaticGetClass() */

long * ZombieBumperCarElite::StaticGetClass(void)

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
  uVar2 = ZombieBumperCar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBumperCarElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCarElite::GetClass() const */

long * ZombieBumperCarElite::GetClass(void)

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
  uVar2 = ZombieBumperCar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBumperCarElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCarElite::onZombieInitialize() */

void ZombieBumperCarElite::onZombieInitialize(void)

{
  Zombie *in_x0;
  
  Zombie::onZombieInitialize(in_x0);
  ZombieBumperCar::buildProjectileSets((ZombieBumperCar *)in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCarElite::onPlaceOnBoard() */

void ZombieBumperCarElite::onPlaceOnBoard(void)

{
  long lVar1;
  Zombie *in_x0;
  code *pcVar2;
  undefined4 auStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard(in_x0);
  auStack_18[0] = ZombieBumperCar::getChargeVelocity((ZombieBumperCar *)in_x0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x800),(SexyVector3 *)auStack_18);
  Zombie::setZombieState();
  pcVar2 = *(code **)(*(long *)in_x0 + 0x78);
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)in_x0);
  EATextSquish::Vec3::Vec3((Vec3 *)auStack_18,920.0,*(float *)(lVar1 + 4),*(float *)(lVar1 + 8));
  (*pcVar2)();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

