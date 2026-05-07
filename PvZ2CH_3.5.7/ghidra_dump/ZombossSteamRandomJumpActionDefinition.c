// Class: ZombossSteamRandomJumpActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionDefinition::StaticClassInit() */

void ZombossSteamRandomJumpActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRandomJumpActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c49658,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRandomJumpActionDefinition::StaticGetClass() */

long * ZombossSteamRandomJumpActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossJumpActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRandomJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRandomJumpActionDefinition::GetClass() const */

long * ZombossSteamRandomJumpActionDefinition::GetClass(void)

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
  uVar2 = ZombossJumpActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRandomJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRandomJumpActionDefinition::ZombossSteamRandomJumpActionDefinition() */

void __thiscall
ZombossSteamRandomJumpActionDefinition::ZombossSteamRandomJumpActionDefinition
          (ZombossSteamRandomJumpActionDefinition *this)

{
  ZombossJumpActionDefinition::ZombossJumpActionDefinition((ZombossJumpActionDefinition *)this);
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_06751e60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* ZombossSteamRandomJumpActionDefinition::StaticNew() */

ZombossSteamRandomJumpActionDefinition * ZombossSteamRandomJumpActionDefinition::StaticNew(void)

{
  ZombossSteamRandomJumpActionDefinition *this;
  
  this = ::operator_new(0x60);
  ZombossSteamRandomJumpActionDefinition(this);
  return this;
}


/* ZombossSteamRandomJumpActionDefinition::~ZombossSteamRandomJumpActionDefinition() */

void __thiscall
ZombossSteamRandomJumpActionDefinition::~ZombossSteamRandomJumpActionDefinition
          (ZombossSteamRandomJumpActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06751e60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  ZombossJumpActionDefinition::~ZombossJumpActionDefinition((ZombossJumpActionDefinition *)this);
  return;
}


/* ZombossSteamRandomJumpActionDefinition::~ZombossSteamRandomJumpActionDefinition() */

void __thiscall
ZombossSteamRandomJumpActionDefinition::~ZombossSteamRandomJumpActionDefinition
          (ZombossSteamRandomJumpActionDefinition *this)

{
  ~ZombossSteamRandomJumpActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionDefinition::GetRandomJumpTarget(Sexy::Point&, int, int, int, int)
   const */

void __thiscall
ZombossSteamRandomJumpActionDefinition::GetRandomJumpTarget
          (ZombossSteamRandomJumpActionDefinition *this,Point *param_1,int param_2,int param_3,
          int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  int local_2c;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_28[0] = 0;
  local_2c = param_2 - param_4;
  piVar5 = eastl::max_alt<int>(&local_2c,(int *)local_28);
  iVar1 = *piVar5;
  local_28[0] = 0;
  local_2c = param_5 + -1;
  piVar5 = eastl::max_alt<int>(&local_2c,(int *)local_28);
  iVar2 = *piVar5;
  local_28[0] = 0;
  local_2c = param_3 + -1;
  piVar5 = eastl::max_alt<int>(&local_2c,(int *)local_28);
  iVar3 = *piVar5;
  iVar4 = iVar2;
  if (-1 < iVar1) {
    do {
      for (; iVar4 <= iVar3; iVar4 = iVar4 + 1) {
        Sexy::Point::Point((Point *)local_28,iVar10,iVar4);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)local_28);
      }
      iVar10 = iVar10 + 1;
      iVar4 = iVar2;
    } while (iVar10 <= iVar1);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar6,uVar7);
  lVar8 = FUN_03c3ed48(local_20,local_18);
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)FUN_03c3ed54(local_20,0);
    *(undefined8 *)param_1 = *puVar9;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4f168 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamRandomJumpActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSteamRandomJumpActionDefinition::TryStartAction
          (ZombossSteamRandomJumpActionDefinition *this,RtWeakPtrBase *param_2,long *param_3)

{
  ZombossSteamJumpActionHandler *this_00;
  ZombieWithActions *extraout_x0;
  ZombossSteamRandomJumpActionHandler *this_01;
  int local_18;
  int local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x50));
  this_00 = ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>
                      ((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  ZombossJumpActionHandler::SetJumpTarget
            ((ZombossJumpActionHandler *)this_00,(Point *)(extraout_x0 + 0x44));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  this_01 = ZombieWithActions::QueueAction<ZombossSteamRandomJumpActionHandler>
                      (extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*param_3 + 0xd0))(&local_18,param_3);
  Sexy::Point::Point((Point *)aRStack_10);
  GetRandomJumpTarget(this,(Point *)aRStack_10,*(int *)(this + 0x44),*(int *)(this + 0x48),local_18,
                      local_14);
  ZombossJumpActionHandler::SetJumpTarget((ZombossJumpActionHandler *)this_01,(Point *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossSteamRandomJumpActionDefinition::GatherResourceRequirements
          (ZombossSteamRandomJumpActionDefinition *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieSteamCoalMinerGroup");
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

