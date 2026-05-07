// Class: NewPVPPlantCursor


/* NewPVPPlantCursor::~NewPVPPlantCursor() */

void __thiscall NewPVPPlantCursor::~NewPVPPlantCursor(NewPVPPlantCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06646cf0;
  PlantCursor::~PlantCursor((PlantCursor *)this);
  return;
}


/* NewPVPPlantCursor::~NewPVPPlantCursor() */

void __thiscall NewPVPPlantCursor::~NewPVPPlantCursor(NewPVPPlantCursor *this)

{
  ~NewPVPPlantCursor(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPPlantCursor::StaticGetClass() */

long * NewPVPPlantCursor::StaticGetClass(void)

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
  uVar2 = PlantCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* NewPVPPlantCursor::GetClass() const */

long * NewPVPPlantCursor::GetClass(void)

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
  uVar2 = PlantCursor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantCursor::NewPVPPlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<PlantType const>,
   Sexy::TRect<int>, bool, int) */

void __thiscall
NewPVPPlantCursor::NewPVPPlantCursor
          (NewPVPPlantCursor *this,undefined8 param_1,RtWeakPtrBase *param_3,Insets *param_4,
          undefined1 param_5,undefined8 param_6)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_3);
  Sexy::Insets::Insets(aIStack_18,param_4);
  PlantCursor::PlantCursor((PlantCursor *)this,param_1,aRStack_20,aIStack_18,param_5,param_6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06646cf0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPPlantCursor::NewPVPPlantCursor() */

void __thiscall NewPVPPlantCursor::NewPVPPlantCursor(NewPVPPlantCursor *this)

{
  PlantCursor::PlantCursor((PlantCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06646cf0;
  return;
}


/* NewPVPPlantCursor::StaticNew() */

NewPVPPlantCursor * NewPVPPlantCursor::StaticNew(void)

{
  NewPVPPlantCursor *this;
  
  this = ::operator_new(0x58);
  NewPVPPlantCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantCursor::NewPVPPlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>, int) */

void __thiscall
NewPVPPlantCursor::NewPVPPlantCursor
          (NewPVPPlantCursor *this,undefined8 param_1,RtWeakPtrBase *param_3,undefined8 param_4)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  PlantCursor::PlantCursor((PlantCursor *)this,param_1,aRStack_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06646cf0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantCursor::canAffordPlant(Sexy::RtWeakPtr<PlantType const>, int) const */

void __thiscall
NewPVPPlantCursor::canAffordPlant(undefined8 param_1,RtWeakPtrBase *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PlantNameMapperServerID *pPVar3;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_10[0] = 1;
  local_8 = ___stack_chk_guard;
  local_14 = param_3;
  eastl::max_alt<int>(&local_14,(int *)local_10);
  pPVar3 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_10,param_2);
  iVar1 = PlantNameMapperServerID::GetIdForType(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  iVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetPlantCost(iVar2,iVar1);
  Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = NewPVPGameSubsystem::GetCurrentSun();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 <= iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantCursor::makeNewPlantAt(Sexy::RtWeakPtr<PlantType const>, int, int, int, bool) */

void NewPVPPlantCursor::makeNewPlantAt
               (undefined8 param_1,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  PlantNameMapperServerID *pPVar6;
  ProfileMgr *this;
  PlayerInfo *pPVar7;
  NewPVPGameSubsystem *pNVar8;
  long lVar9;
  NewPVPMgr *this_00;
  undefined8 extraout_x0;
  Board *this_01;
  undefined8 uVar10;
  int local_34 [3];
  undefined4 local_28 [2];
  undefined4 local_20 [6];
  long local_8;
  
  local_20[0] = 1;
  local_8 = ___stack_chk_guard;
  local_34[0] = param_5;
  piVar5 = eastl::max_alt<int>(local_34,(int *)local_20);
  iVar4 = *piVar5;
  pPVar6 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_20,param_2);
  iVar2 = PlantNameMapperServerID::GetIdForType(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string((string *)local_28,"peavine");
  cVar1 = LocalProfileSaveData::GetPlantLv5SkillSwitch(pPVar7,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (cVar1 != '\0') {
    local_28[0] = 0x3f800000;
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)local_20,(float *)local_28);
  }
  pNVar8 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar3 = CalcRandomSeed(1);
  lVar9 = NewPVPGameSubsystem::TriggerEvent
                    ((NewPVPGameSubsystem *)(float)iVar4,pNVar8,0,1,0,iVar2,param_3,param_4,uVar3,
                     (RtWeakPtr<Sexy::SoundResource> *)local_20);
  iVar4 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar4 = NewPVPMgr::GetPlantCost(iVar4,iVar2);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar4 = NewPVPMgr::GetSafeCost(this_00,iVar4);
  Board::TakeSunMoney(this_01,iVar4,true,false);
  uVar10 = 0;
  if (lVar9 != 0) {
    nop();
    uVar10 = extraout_x0;
  }
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)local_20)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

