// Class: ZombieBallon


/* ZombieBallon::~ZombieBallon() */

void __thiscall ZombieBallon::~ZombieBallon(ZombieBallon *this)

{
  *(undefined ***)this = &PTR_GetClass_0693b780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBallon_0693c1f0;
  ZombieLostCityBug::~ZombieLostCityBug((ZombieLostCityBug *)this);
  return;
}


/* non-virtual thunk to ZombieBallon::~ZombieBallon() */

void __thiscall ZombieBallon::~ZombieBallon(ZombieBallon *this)

{
  ~ZombieBallon(this + -0x10);
  return;
}


/* ZombieBallon::~ZombieBallon() */

void __thiscall ZombieBallon::~ZombieBallon(ZombieBallon *this)

{
  ~ZombieBallon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBallon::~ZombieBallon() */

void __thiscall ZombieBallon::~ZombieBallon(ZombieBallon *this)

{
  ~ZombieBallon(this + -0x10);
  return;
}


/* ZombieBallon::ZombieBallon() */

void __thiscall ZombieBallon::ZombieBallon(ZombieBallon *this)

{
  ZombieLostCityBug::ZombieLostCityBug((ZombieLostCityBug *)this);
  *(undefined ***)this = &PTR_GetClass_0693b780;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBallon_0693c1f0;
  return;
}


/* ZombieBallon::StaticNew() */

ZombieBallon * ZombieBallon::StaticNew(void)

{
  ZombieBallon *this;
  
  this = ::operator_new(0x810);
  ZombieBallon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallon::StaticClassInit() */

void ZombieBallon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBallon");
    (*pcVar2)(plVar1,asStack_10,FUN_04a76444,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBallon::StaticGetClass() */

long * ZombieBallon::StaticGetClass(void)

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
  uVar2 = ZombieLostCityBug::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBallon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBallon::GetClass() const */

long * ZombieBallon::GetClass(void)

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
  uVar2 = ZombieLostCityBug::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBallon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallon::onDieCompleted() */

void __thiscall ZombieBallon::onDieCompleted(ZombieBallon *this)

{
  char cVar1;
  string *psVar2;
  SexyVector3 *extraout_x0;
  float *pfVar3;
  long *plVar4;
  code *pcVar5;
  Zombie *pZVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_20,"children_schoolbag");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  (*pcVar5)(plVar4,aRStack_18,0xffffffff,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3 - 11.0,pfVar3[1] - 4.0,pfVar3[2]);
  BoardEntity::PlaceOnBoard(extraout_x0);
  cVar1 = Zombie::HasCondition(this,0x41);
  if ((cVar1 != '\0') || (cVar1 = FUN_04a76258(this[0x805]), cVar1 != '\0')) {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,extraout_x0,0x41,1);
  }
  cVar1 = Zombie::HasCondition(this,0x60);
  if (cVar1 != '\0') {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,extraout_x0,0x60,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

