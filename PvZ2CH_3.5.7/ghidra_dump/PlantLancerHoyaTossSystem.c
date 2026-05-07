// Class: PlantLancerHoyaTossSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoyaTossSystem::StaticClassInit() */

void PlantLancerHoyaTossSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLancerHoyaTossSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04d066c8,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLancerHoyaTossSystem::StaticGetClass() */

long * PlantLancerHoyaTossSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLancerHoyaTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLancerHoyaTossSystem::GetClass() const */

long * PlantLancerHoyaTossSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLancerHoyaTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLancerHoyaTossSystem::SetZombieFlyEndFunc(Sexy::Delegate1<Zombie*>) */

void __thiscall
PlantLancerHoyaTossSystem::SetZombieFlyEndFunc(PlantLancerHoyaTossSystem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x10),param_2);
  return;
}


/* PlantLancerHoyaTossSystem::~PlantLancerHoyaTossSystem() */

void __thiscall
PlantLancerHoyaTossSystem::~PlantLancerHoyaTossSystem(PlantLancerHoyaTossSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069a6a70;
  std::
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  ::~map((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
          *)(this + 0x40));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantLancerHoyaTossSystem::~PlantLancerHoyaTossSystem() */

void __thiscall
PlantLancerHoyaTossSystem::~PlantLancerHoyaTossSystem(PlantLancerHoyaTossSystem *this)

{
  ~PlantLancerHoyaTossSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoyaTossSystem::TossZombies(Zombie*, Plant*, Sexy::SexyVector3, float) */

void PlantLancerHoyaTossSystem::TossZombies
               (undefined4 param_1,undefined4 param_2_00,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_2,undefined8 param_7)

{
  ZombieTosserSubSystem *pZVar1;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = param_1;
  local_7c = param_2_00;
  local_78 = param_3;
  pZVar1 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyingEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieTosserSubSystem::LaunchZombieWithPlant
            ((ZombieTosserSubSystem *)0x41200000,param_4,pZVar1,param_2,param_7,&local_80,aRStack_50
             ,1);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoyaTossSystem::PlantLancerHoyaTossSystem() */

void __thiscall
PlantLancerHoyaTossSystem::PlantLancerHoyaTossSystem(PlantLancerHoyaTossSystem *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069a6a70;
  Sexy::Delegate1<Zombie*>::Delegate1((DummyInit *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  Sexy::Delegate1<Zombie*>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x10),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLancerHoyaTossSystem::StaticNew() */

PlantLancerHoyaTossSystem * PlantLancerHoyaTossSystem::StaticNew(void)

{
  PlantLancerHoyaTossSystem *this;
  
  this = ::operator_new(0x70);
  PlantLancerHoyaTossSystem(this);
  return this;
}


/* PlantLancerHoyaTossSystem::SetZombieFlyEndFunc(Zombie*, Sexy::Delegate1<Zombie*>) */

void __thiscall
PlantLancerHoyaTossSystem::SetZombieFlyEndFunc
          (PlantLancerHoyaTossSystem *this,Zombie *param_1,Delegate2 *param_3)

{
  Delegate2<Sexy::IPurchaseDriver*,bool> *this_00;
  Zombie *local_8;
  
  local_8 = param_1;
  this_00 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
            std::
            map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
            ::operator[]((map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
                          *)(this + 0x40),&local_8);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(this_00,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLancerHoyaTossSystem::onFlyingEnd(Zombie*) */

void __thiscall
PlantLancerHoyaTossSystem::onFlyingEnd(PlantLancerHoyaTossSystem *this,Zombie *param_1)

{
  map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
  *this_00;
  bool bVar1;
  Delegate1wRet<bool,SexyURL_const&> *this_01;
  Zombie *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
             ::find(this_00,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    this_01 = (Delegate1wRet<bool,SexyURL_const&> *)
              std::
              map<Zombie*,Sexy::Delegate1<Zombie*>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,Sexy::Delegate1<Zombie*>>>>
              ::operator[](this_00,local_28);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_01,(SexyURL *)local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

