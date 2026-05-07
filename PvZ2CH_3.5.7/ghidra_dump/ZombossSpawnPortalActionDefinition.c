// Class: ZombossSpawnPortalActionDefinition


/* ZombossSpawnPortalActionDefinition::~ZombossSpawnPortalActionDefinition() */

void __thiscall
ZombossSpawnPortalActionDefinition::~ZombossSpawnPortalActionDefinition
          (ZombossSpawnPortalActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6650;
  std::string::~string((string *)(this + 0x40));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSpawnPortalActionDefinition::~ZombossSpawnPortalActionDefinition() */

void __thiscall
ZombossSpawnPortalActionDefinition::~ZombossSpawnPortalActionDefinition
          (ZombossSpawnPortalActionDefinition *this)

{
  ~ZombossSpawnPortalActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnPortalActionDefinition::StaticClassInit() */

void ZombossSpawnPortalActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnPortalActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047379f4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnPortalActionDefinition::StaticGetClass() */

long * ZombossSpawnPortalActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnPortalActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnPortalActionDefinition::GetClass() const */

long * ZombossSpawnPortalActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnPortalActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnPortalActionDefinition::ZombossSpawnPortalActionDefinition() */

void __thiscall
ZombossSpawnPortalActionDefinition::ZombossSpawnPortalActionDefinition
          (ZombossSpawnPortalActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR_GetClass_068c6650;
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 0xbf800000;
  return;
}


/* ZombossSpawnPortalActionDefinition::StaticNew() */

ZombossSpawnPortalActionDefinition * ZombossSpawnPortalActionDefinition::StaticNew(void)

{
  ZombossSpawnPortalActionDefinition *this;
  
  this = ::operator_new(0x60);
  ZombossSpawnPortalActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnPortalActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossSpawnPortalActionDefinition::TryStartAction(long param_1)

{
  string *psVar1;
  GridItemZombiePortal *this;
  Board *pBVar2;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_28,"zombieportal_dangerroom_",param_1 + 0x40);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
  Board::AddGridItem(pBVar2,aRStack_10,*(undefined4 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x3c),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  FUN_04735bb8(this + 0x1c8,*(undefined4 *)(param_1 + 0x50));
  FUN_04735bc0(this + 0x1cc,this + 0x1d0,*(undefined4 *)(param_1 + 0x54),
               *(undefined4 *)(param_1 + 0x58));
  GridItemZombiePortal::setSpawnZombiesNum(this,*(int *)(param_1 + 0x48));
  GridItemZombiePortal::setSpawnSpace(this,*(float *)(param_1 + 0x4c));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  GridItemZombiePortal::setZomBoss(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnPortalActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossSpawnPortalActionDefinition::GatherResourceRequirements
          (ZombossSpawnPortalActionDefinition *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  string asStack_20 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_20,"zombieportal_dangerroom_",this + 0x40);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (GridItemType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

