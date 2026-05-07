// Class: MomotaroRiderModule


/* MomotaroRiderModule::onTryKillRider() */

void __thiscall MomotaroRiderModule::onTryKillRider(MomotaroRiderModule *this)

{
  this[0x1b8] = (MomotaroRiderModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::GetRiderPam() */

void __thiscall MomotaroRiderModule::GetRiderPam(MomotaroRiderModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_ZOMBIE_ZOMBIE_HEIAN_NINJA");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::GetReviveTip() */

void __thiscall MomotaroRiderModule::GetReviveTip(MomotaroRiderModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"[REVIVE_MOMOTARO_DIED_OUT_CANCELED]");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* MomotaroRiderModule::~MomotaroRiderModule() */

void __thiscall MomotaroRiderModule::~MomotaroRiderModule(MomotaroRiderModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06930980;
  RiverCrossingModule::~RiverCrossingModule((RiverCrossingModule *)this);
  return;
}


/* MomotaroRiderModule::~MomotaroRiderModule() */

void __thiscall MomotaroRiderModule::~MomotaroRiderModule(MomotaroRiderModule *this)

{
  ~MomotaroRiderModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::StaticClassInit() */

void MomotaroRiderModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroRiderModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a2aecc,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderModule::StaticGetClass() */

long * MomotaroRiderModule::StaticGetClass(void)

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
  uVar2 = RiverCrossingModule::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderModule::MomotaroRiderModule() */

void __thiscall MomotaroRiderModule::MomotaroRiderModule(MomotaroRiderModule *this)

{
  RiverCrossingModule::RiverCrossingModule((RiverCrossingModule *)this);
  this[0x1b8] = (MomotaroRiderModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06930980;
  return;
}


/* MomotaroRiderModule::StaticNew() */

MomotaroRiderModule * MomotaroRiderModule::StaticNew(void)

{
  MomotaroRiderModule *this;
  
  this = ::operator_new(0x1c0);
  MomotaroRiderModule(this);
  return this;
}


/* MomotaroRiderModule::CreateRider() */

void MomotaroRiderModule::CreateRider(void)

{
  undefined8 uVar1;
  
  uVar1 = Sexy::RtClass::StaticGetClassNamed("MomotaroRider");
  GameObject::Create(uVar1,0x28);
  nop();
  return;
}


/* MomotaroRiderModule::InitDodoRider(bool, Sexy::RtWeakPtr<Sexy::PopAnim>) */

void __thiscall
MomotaroRiderModule::InitDodoRider(MomotaroRiderModule *this,undefined8 param_2,RtWeakPtr *param_3)

{
  ResourceInfo *pRVar1;
  RiverCrossingDodoRider *this_00;
  
  this_00 = *(RiverCrossingDodoRider **)(this + 0x20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
  RiverCrossingDodoRider::RiverCrossingDodoRiderInitialize(this_00,(PopAnim *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::InitChomerGroup() */

void __thiscall MomotaroRiderModule::InitChomerGroup(MomotaroRiderModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  int *piVar5;
  Board *this_00;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_04a2b0c8(*(undefined8 *)(pRVar4 + 0x88));
  local_18 = FUN_04a2b118(*(undefined8 *)(pRVar4 + 0x90));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    if (piVar5[2] == 0) {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"momotaroninja");
      Board::AddPlant(this_00,iVar1,iVar2,asStack_10,-1,false,false,false,false);
      std::string::~string(asStack_10);
      nop();
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::RequireNextChomerGroup() */

void __thiscall MomotaroRiderModule::RequireNextChomerGroup(MomotaroRiderModule *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  int *piVar5;
  Board *this_00;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_04a2b0c8(*(undefined8 *)(pRVar4 + 0x88));
  local_18 = FUN_04a2b118(*(undefined8 *)(pRVar4 + 0x90));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    iVar1 = *piVar5;
    iVar2 = piVar5[1];
    if (*(int *)(this + 0x18) == piVar5[2]) {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"momotaroninja");
      Board::AddPlant(this_00,iVar1,iVar2,asStack_10,-1,false,false,false,false);
      std::string::~string(asStack_10);
      nop();
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderModule::GetRiderUIImage() */

void __thiscall MomotaroRiderModule::GetRiderUIImage(MomotaroRiderModule *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b78f70);
  return;
}


/* MomotaroRiderModule::GetRemainUIImage() */

void __thiscall MomotaroRiderModule::GetRemainUIImage(MomotaroRiderModule *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b78ff8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::registerForEvents() */

void __thiscall MomotaroRiderModule::registerForEvents(MomotaroRiderModule *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTryKillRider);
  Sexy::Delegate0::Delegate0<MomotaroRiderModule,void(MomotaroRiderModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::TryKillRider,aDStack_38);
  RiverCrossingModule::registerForEvents((RiverCrossingModule *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderModule::onDodoRiderDying() */

void __thiscall MomotaroRiderModule::onDodoRiderDying(MomotaroRiderModule *this)

{
  RiverCrossingModule::onDodoRiderDying((RiverCrossingModule *)this);
  this[0x1b8] = (MomotaroRiderModule)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall MomotaroRiderModule::AddResourceRequirements(MomotaroRiderModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiverCrossingModule::AddResourceRequirements((RiverCrossingModule *)this,param_1);
  std::string::string(asStack_10,"ZombieHeianNinjaGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"HeianWind");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderModule::IsRiderKilled() */

ulong __thiscall MomotaroRiderModule::IsRiderKilled(MomotaroRiderModule *this)

{
  ulong uVar1;
  
  if ((byte)this[0x1b8] != 0) {
    return (ulong)(uint)(byte)this[0x1b8];
  }
  uVar1 = RiverCrossingModule::IsRiderKilled((RiverCrossingModule *)this);
  return uVar1;
}

