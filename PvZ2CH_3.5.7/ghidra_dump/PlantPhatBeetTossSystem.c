// Class: PlantPhatBeetTossSystem


/* PlantPhatBeetTossSystem::setStunTime(float) */

void __thiscall PlantPhatBeetTossSystem::setStunTime(PlantPhatBeetTossSystem *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  return;
}


/* PlantPhatBeetTossSystem::onFlyingEnd(Zombie*) */

void PlantPhatBeetTossSystem::onFlyingEnd(Zombie *param_1)

{
  return;
}


/* PlantPhatBeetTossSystem::~PlantPhatBeetTossSystem() */

void __thiscall PlantPhatBeetTossSystem::~PlantPhatBeetTossSystem(PlantPhatBeetTossSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067f44f0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantPhatBeetTossSystem::~PlantPhatBeetTossSystem() */

void __thiscall PlantPhatBeetTossSystem::~PlantPhatBeetTossSystem(PlantPhatBeetTossSystem *this)

{
  ~PlantPhatBeetTossSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeetTossSystem::StaticClassInit() */

void PlantPhatBeetTossSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPhatBeetTossSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0416c668,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeetTossSystem::StaticGetClass() */

long * PlantPhatBeetTossSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPhatBeetTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeetTossSystem::GetClass() const */

long * PlantPhatBeetTossSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPhatBeetTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeetTossSystem::PlantPhatBeetTossSystem() */

void __thiscall PlantPhatBeetTossSystem::PlantPhatBeetTossSystem(PlantPhatBeetTossSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067f44f0;
  return;
}


/* PlantPhatBeetTossSystem::StaticNew() */

PlantPhatBeetTossSystem * PlantPhatBeetTossSystem::StaticNew(void)

{
  PlantPhatBeetTossSystem *this;
  
  this = ::operator_new(0x18);
  PlantPhatBeetTossSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeetTossSystem::TossZombies(Zombie*) */

void __thiscall PlantPhatBeetTossSystem::TossZombies(PlantPhatBeetTossSystem *this,Zombie *param_1)

{
  ZombieTosserSubSystem *pZVar1;
  undefined8 uVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyingEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x43480000,0x3f800000,pZVar1,param_1,uVar2,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

