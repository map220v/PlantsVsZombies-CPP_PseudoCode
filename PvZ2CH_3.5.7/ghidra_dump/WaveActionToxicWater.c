// Class: WaveActionToxicWater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionToxicWater::StaticClassInit() */

void WaveActionToxicWater::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionToxicWater");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca8be8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionToxicWater::StaticGetClass() */

long * WaveActionToxicWater::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionToxicWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionToxicWater::WaveActionToxicWater() */

void __thiscall WaveActionToxicWater::WaveActionToxicWater(WaveActionToxicWater *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06998150;
  return;
}


/* WaveActionToxicWater::StaticNew() */

WaveActionToxicWater * WaveActionToxicWater::StaticNew(void)

{
  WaveActionToxicWater *this;
  
  this = ::operator_new(0x18);
  WaveActionToxicWater(this);
  return this;
}


/* WaveActionToxicWater::~WaveActionToxicWater() */

void __thiscall WaveActionToxicWater::~WaveActionToxicWater(WaveActionToxicWater *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06998150;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionToxicWater::~WaveActionToxicWater() */

void __thiscall WaveActionToxicWater::~WaveActionToxicWater(WaveActionToxicWater *this)

{
  ~WaveActionToxicWater(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionToxicWater::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WaveActionToxicWater::WaveStart(WaveAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  long lVar6;
  RtObject *this;
  PoolDaylightStage *this_00;
  string *psVar7;
  ZombieType *this_01;
  Zombie *this_02;
  ZombieToxicWater *pZVar8;
  long *plVar9;
  code *pcVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined8 local_48;
  Vec3 aVStack_40 [16];
  undefined4 local_30;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(pFVar5 + 0x40));
  lVar6 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar6 != 0) {
    this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    this_00 = Sexy::RtObject::Cast<PoolDaylightStage>(this);
    if ((this_00 != (PoolDaylightStage *)0x0) &&
       (iVar4 = PoolDaylightStage::GetToxicZombieRow(this_00), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
      EATextSquish::Vec3::Vec3(aVStack_40,(float)iVar3,(float)iVar4,0.0);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)&local_48,"renai_toxicwater");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      std::string::~string((string *)&local_48);
      nop();
      this_01 = (ZombieType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      ZombieType::EnsureResourceGroupsLoaded(this_01);
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
      local_30 = 1;
      plVar9 = *(long **)(gLawnApp + 0x9f0);
      local_29 = 1;
      pcVar10 = *(code **)(*plVar9 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
      this_02 = (Zombie *)
                (*pcVar10)(plVar9,(string *)&local_48,6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      Zombie::SetIgnoresCollisions(this_02,true);
      Zombie::SetIgnoresAllDamage(this_02,true);
      Zombie::SetIsControlled(this_02,true);
      Zombie::SetIsTargetable(this_02,false);
      Zombie::SetIgnoreFindTarget(this_02,true);
      (**(code **)(*(long *)this_02 + 0x2f0))(this_02);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
      pZVar8 = Sexy::RtObject::Cast<ZombieToxicWater>((RtObject *)this_02);
      if (pZVar8 != (ZombieToxicWater *)0x0) {
        Sexy::Point::Point((Point *)&local_48,*(int *)(pFVar5 + 0x48),*(int *)(pFVar5 + 0x4c));
        uVar1 = *(undefined4 *)(pFVar5 + 0x50);
        uVar2 = *(undefined4 *)(pFVar5 + 0x54);
        *(undefined8 *)(pZVar8 + 0x800) = local_48;
        *(undefined4 *)(pZVar8 + 0x808) = uVar2;
        *(undefined4 *)(pZVar8 + 0x80c) = uVar1;
      }
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

