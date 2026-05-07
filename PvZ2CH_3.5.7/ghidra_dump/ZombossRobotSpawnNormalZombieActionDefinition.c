// Class: ZombossRobotSpawnNormalZombieActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionDefinition::StaticClassInit() */

void ZombossRobotSpawnNormalZombieActionDefinition::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossRobotSpawnZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04f1267c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossRobotSpawnNormalZombieActionDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_04f17700,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpawnNormalZombieActionDefinition::StaticGetClass() */

long * ZombossRobotSpawnNormalZombieActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotSpawnNormalZombieActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpawnNormalZombieActionDefinition::GetClass() const */

long * ZombossRobotSpawnNormalZombieActionDefinition::GetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotSpawnNormalZombieActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpawnNormalZombieActionDefinition::ZombossRobotSpawnNormalZombieActionDefinition() */

void __thiscall
ZombossRobotSpawnNormalZombieActionDefinition::ZombossRobotSpawnNormalZombieActionDefinition
          (ZombossRobotSpawnNormalZombieActionDefinition *this)

{
  ZombossRobotBaseZombieActionDefinition::ZombossRobotBaseZombieActionDefinition
            ((ZombossRobotBaseZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x40) = 3;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR_GetClass_06a103a0;
  *(undefined4 *)(this + 0x44) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* ZombossRobotSpawnNormalZombieActionDefinition::StaticNew() */

ZombossRobotSpawnNormalZombieActionDefinition *
ZombossRobotSpawnNormalZombieActionDefinition::StaticNew(void)

{
  ZombossRobotSpawnNormalZombieActionDefinition *this;
  
  this = ::operator_new(0x60);
  ZombossRobotSpawnNormalZombieActionDefinition(this);
  return this;
}


/* ZombossRobotSpawnNormalZombieActionDefinition::~ZombossRobotSpawnNormalZombieActionDefinition()
    */

void __thiscall
ZombossRobotSpawnNormalZombieActionDefinition::~ZombossRobotSpawnNormalZombieActionDefinition
          (ZombossRobotSpawnNormalZombieActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a103a0;
  std::vector<ZombossRobotSpawnZombieInfo,std::allocator<ZombossRobotSpawnZombieInfo>>::~vector
            ((vector<ZombossRobotSpawnZombieInfo,std::allocator<ZombossRobotSpawnZombieInfo>> *)
             (this + 0x48));
  ZombossRobotBaseZombieActionDefinition::~ZombossRobotBaseZombieActionDefinition
            ((ZombossRobotBaseZombieActionDefinition *)this);
  return;
}


/* ZombossRobotSpawnNormalZombieActionDefinition::~ZombossRobotSpawnNormalZombieActionDefinition()
    */

void __thiscall
ZombossRobotSpawnNormalZombieActionDefinition::~ZombossRobotSpawnNormalZombieActionDefinition
          (ZombossRobotSpawnNormalZombieActionDefinition *this)

{
  ~ZombossRobotSpawnNormalZombieActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossRobotSpawnNormalZombieActionDefinition::GatherResourceRequirements
          (ZombossRobotSpawnNormalZombieActionDefinition *this,set *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  ulong uVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_04f11ffc(*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04f1202c(*(undefined8 *)(this + 0x48),uVar3);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    ZombieType::AddInGameResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f2064c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossRobotSpawnNormalZombieActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossRobotSpawnNormalZombieActionDefinition::TryStartAction
          (ZombossRobotSpawnNormalZombieActionDefinition *this,RtWeakPtrBase *param_2,
          undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossRobotSpawnNormalZombieActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

