// Class: StormZombieSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::StaticClassInit() */

void StormZombieSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"StormZombieSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_0494513c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StormZombieSpawner::StaticGetClass() */

long * StormZombieSpawner::StaticGetClass(void)

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
  uVar2 = ZombieSpawnerAction::StaticGetClass();
  (*pcVar3)(plVar1,"StormZombieSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::createZombies(int, Sexy::MTRand&, int, int) */

void __thiscall
StormZombieSpawner::createZombies
          (StormZombieSpawner *this,int param_1,MTRand *param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  RtWeakPtrBase *pRVar6;
  Zombie *this_00;
  undefined4 *puVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  code *pcVar14;
  RtWeakPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar13 = *(int *)(pFVar5 + 0x58);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetFlagZombieType();
  if (param_3 < param_4) {
    lVar1 = (long)param_3 + 1;
    lVar11 = (long)param_3;
    lVar12 = lVar1;
    while( true ) {
      pRVar6 = (RtWeakPtrBase *)FUN_04944434(*(undefined8 *)(pFVar5 + 0x40),lVar11);
      if ((byte)pRVar6[8] < (0 < iVar13)) {
        iVar13 = iVar13 + -1;
      }
      plVar10 = *(long **)(gLawnApp + 0x9f0);
      pcVar14 = *(code **)(*plVar10 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar6);
      this_00 = (Zombie *)(*pcVar14)(plVar10,aRStack_18,param_1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Zombie::SetStormType(this_00,*(undefined4 *)(pFVar5 + 0x70));
      Zombie::SetHasPlantFood(SUB81(this_00,0));
      puVar7 = (undefined4 *)FUN_0494443c(*(undefined8 *)(this + 0x18),lVar11);
      Zombie::SetLoot(this_00,*puVar7);
      pcVar14 = *(code **)(*(long *)this_00 + 0x250);
      pRVar6 = (RtWeakPtrBase *)FUN_04944434(*(undefined8 *)(pFVar5 + 0x40),lVar11);
      uVar3 = Sexy::RtWeakPtrBase::operator==(pRVar6,aRStack_20);
      (*pcVar14)(this_00,uVar3);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_00);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      iVar2 = *(int *)(lVar8 + 0x78);
      lVar8 = FUN_04944444(*(undefined8 *)(this + 0x30),lVar11);
      iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar8 + 4));
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(iVar2 + 0x334),(float)iVar4,0.0);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
      piVar9 = (int *)FUN_04944444(*(undefined8 *)(this + 0x30),lVar11);
      Zombie::StormEntrance(this_00,*piVar9,piVar9[1]);
      if (lVar12 == lVar1 + (ulong)(uint)((param_4 + -1) - param_3)) break;
      lVar11 = lVar12;
      lVar12 = lVar12 + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::spawnGroup(int, int, Sexy::MTRand&) */

void __thiscall
StormZombieSpawner::spawnGroup(StormZombieSpawner *this,int param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  int iVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  int *piVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar1 = *(int *)(this + 0x48);
  local_10 = iVar1 + param_1;
  local_c = FUN_049443f8(*(undefined8 *)(pFVar3 + 0x40),*(undefined8 *)(pFVar3 + 0x48));
  piVar4 = eastl::min_alt<int>(&local_10,&local_c);
  iVar2 = *piVar4;
  createZombies(this,param_2,param_3,iVar1,iVar2);
  *(int *)(this + 0x48) = iVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StormZombieSpawner::spawnAllTheThings(int, Sexy::MTRand&) */

void __thiscall
StormZombieSpawner::spawnAllTheThings(StormZombieSpawner *this,int param_1,MTRand *param_2)

{
  int iVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  ulong uVar3;
  
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  iVar1 = *(int *)(this + 0x48);
  uVar3 = FUN_049443f8(*(undefined8 *)(pFVar2 + 0x40),*(undefined8 *)(pFVar2 + 0x48));
  if (uVar3 <= (ulong)(long)iVar1) {
    return;
  }
  spawnGroup(this,(int)uVar3 - iVar1,param_1,param_2);
  return;
}


/* StormZombieSpawner::WaveEnd(int, Sexy::MTRand&) */

void StormZombieSpawner::WaveEnd(int param_1,MTRand *param_2)

{
  int iVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  ulong uVar3;
  WaveAction *this;
  MTRand *in_x2;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  iVar1 = *(int *)(this + 0x48);
  uVar3 = FUN_049443f8(*(undefined8 *)(pFVar2 + 0x40),*(undefined8 *)(pFVar2 + 0x48));
  if (uVar3 <= (ulong)(long)iVar1) {
    return;
  }
  spawnGroup((StormZombieSpawner *)this,(int)uVar3 - iVar1,(int)param_2,in_x2);
  return;
}


/* StormZombieSpawner::WaveUpdate(int, Sexy::MTRand&) */

void __thiscall StormZombieSpawner::WaveUpdate(StormZombieSpawner *this,int param_1,MTRand *param_2)

{
  FairyTaleWindWaveActionProps *pFVar1;
  ulong uVar2;
  float fVar3;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  uVar2 = FUN_049443f8(*(undefined8 *)(pFVar1 + 0x40),*(undefined8 *)(pFVar1 + 0x48));
  if ((ulong)(long)*(int *)(this + 0x48) < uVar2) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x4c) < fVar3) {
      spawnGroup(this,*(int *)(pFVar1 + 0x5c),param_1,param_2);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x4c) = fVar3 + *(float *)(pFVar1 + 0x60);
    }
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x50) < fVar3) {
      spawnAllTheThings(this,param_1,param_2);
      return;
    }
  }
  return;
}


/* StormZombieSpawner::StormZombieSpawner() */

void __thiscall StormZombieSpawner::StormZombieSpawner(StormZombieSpawner *this)

{
  undefined4 uVar1;
  
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06912af0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


/* StormZombieSpawner::StaticNew() */

StormZombieSpawner * StormZombieSpawner::StaticNew(void)

{
  StormZombieSpawner *this;
  
  this = ::operator_new(0x58);
  StormZombieSpawner(this);
  return this;
}


/* StormZombieSpawner::~StormZombieSpawner() */

void __thiscall StormZombieSpawner::~StormZombieSpawner(StormZombieSpawner *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06912af0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* StormZombieSpawner::~StormZombieSpawner() */

void __thiscall StormZombieSpawner::~StormZombieSpawner(StormZombieSpawner *this)

{
  ~StormZombieSpawner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
StormZombieSpawner::WaveStart
          (StormZombieSpawner *this,int param_1,undefined8 param_3,char param_4,MTRand *param_5)

{
  FairyTaleWindWaveActionProps *pFVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  Board *pBVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  spawnGroup(this,*(int *)(pFVar1 + 0x5c),param_1,param_5);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x4c) = fVar5 + *(float *)(pFVar1 + 0x60);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar5 + *(float *)(pFVar1 + 100);
  if (param_4 == '\0') {
    if (*(int *)(pFVar1 + 0x70) == 1) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Game_Icestorm");
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(auStack_10,L"[WARNING_SNOWSTORM]",auStack_18);
    }
    else {
      if (*(int *)(pFVar1 + 0x70) == 2) {
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Play_UI_Game_Icestorm");
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        pwVar3 = L"[WARNING_EXCOLDSTORM]";
      }
      else {
        pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar2,"Play_UI_Game_Sandstorm");
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        pwVar3 = L"[WARNING_SANDSTORM]";
      }
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(auStack_10,pwVar3,auStack_18);
    }
    Board::DisplayAdviceAgain(pBVar4,auStack_10,0x11,1);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall StormZombieSpawner::AddResourceRequirements(StormZombieSpawner *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  char *__s;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_04944c80(*(undefined8 *)(pFVar2 + 0x40));
  local_10 = FUN_04944cd0(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    ZombieType::AddInGameResourceRequirements((ZombieType *)this_01,param_1);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (*(int *)(pFVar2 + 0x70) == 1) {
    __s = "SnowstormGroup";
  }
  else if (*(int *)(pFVar2 + 0x70) == 2) {
    std::string::string((string *)&local_10,"SnowstormGroup");
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               (string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    __s = "FrostbiteIceBlockPlantGroup";
  }
  else {
    __s = "SandstormGroup";
  }
  std::string::string((string *)&local_10,__s);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::GetZombies(std::vector<ZombieType const*, std::allocator<ZombieType const*>
   >&) */

void __thiscall StormZombieSpawner::GetZombies(StormZombieSpawner *this,vector *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  RtWeakPtr *this_00;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_20 = FUN_04944c80(*(undefined8 *)(pFVar2 + 0x40));
  local_18 = FUN_04944cd0(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_1,
               (ZombieType **)&local_10);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StormZombieSpawner::initializeAction(Sexy::MTRand&, int) */

void StormZombieSpawner::initializeAction(MTRand *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  FairyTaleWindWaveActionProps *pFVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  VaseConfiguration *pVVar10;
  ulong uVar11;
  vector<int,std::allocator<int>> *pvVar12;
  MTRand *this;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [4];
  undefined8 local_38;
  undefined8 local_30;
  int local_20;
  undefined4 uStack_1c;
  long local_8;
  
  this = (MTRand *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  pFVar6 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)param_1);
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_20 = 0;
  if (iVar2 < 1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    std::
    vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
    ::resize((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
              *)&local_20,(long)iVar2);
  }
  else {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_38,&local_20);
      local_20 = local_20 + 1;
    } while (local_20 < iVar2);
    lVar14 = 0;
    iVar16 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    std::
    vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
    ::resize((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
              *)&local_20,(long)iVar2);
    do {
      local_48[0] = 0;
      if (0 < iVar16) {
        do {
          while ((local_48[0] < *(int *)(pFVar6 + 0x68) || (*(int *)(pFVar6 + 0x6c) < local_48[0])))
          {
            local_48[0] = local_48[0] + 1;
            if (iVar16 <= local_48[0]) goto LAB_049470d4;
          }
          pvVar12 = (vector<int,std::allocator<int>> *)
                    FUN_04944420(CONCAT44(uStack_1c,local_20),lVar14);
          std::vector<int,std::allocator<int>>::push_back(pvVar12,local_48);
          local_48[0] = local_48[0] + 1;
        } while (local_48[0] < iVar16);
      }
LAB_049470d4:
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar2);
  }
  local_70 = FUN_04944c80(*(undefined8 *)(pFVar6 + 0x40));
  local_68 = FUN_04944cd0(*(undefined8 *)(pFVar6 + 0x48));
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar4) {
      std::
      vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
      ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 *)&local_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pVVar10 = (VaseConfiguration *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    VaseConfiguration::VaseConfiguration((VaseConfiguration *)local_48,pVVar10);
    cVar5 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&local_38);
    if (cVar5 == '\0') {
      uVar7 = Sexy::MTRand::Next(this);
      uVar15 = local_38;
      uVar8 = FUN_049443e0(local_38,local_30);
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar7 / uVar8;
      }
      lVar14 = uVar7 - uVar11 * uVar8;
      piVar9 = (int *)FUN_0494442c(uVar15,lVar14);
      iVar16 = *piVar9;
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_38);
      local_58 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                 ::operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                              *)&local_60,lVar14);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_50,(__normal_iterator *)&local_58);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)&local_38,local_50);
      pvVar12 = (vector<int,std::allocator<int>> *)
                FUN_04944420(CONCAT44(uStack_1c,local_20),(long)iVar16);
      cVar5 = std::vector<int,std::allocator<int>>::empty(pvVar12);
      if (cVar5 != '\0') goto LAB_049472b8;
LAB_049471ac:
      uVar7 = Sexy::MTRand::Next(this);
      uVar15 = *(undefined8 *)pvVar12;
      uVar8 = FUN_049443e0(uVar15,*(undefined8 *)(pvVar12 + 8));
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar7 / uVar8;
      }
      lVar14 = uVar7 - uVar11 * uVar8;
      piVar9 = (int *)FUN_0494442c(uVar15,lVar14);
      iVar13 = *piVar9;
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)pvVar12);
      local_58 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                 ::operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                              *)&local_60,lVar14);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_50,(__normal_iterator *)&local_58);
      std::vector<int,std::allocator<int>>::erase(pvVar12,local_50);
    }
    else {
      uVar11 = Sexy::MTRand::Next(this);
      iVar16 = 0;
      if ((long)iVar2 != 0) {
        iVar16 = (int)(uVar11 / (ulong)(long)iVar2);
      }
      iVar16 = (int)uVar11 - iVar16 * iVar2;
      pvVar12 = (vector<int,std::allocator<int>> *)
                FUN_04944420(CONCAT44(uStack_1c,local_20),(long)iVar16);
      cVar5 = std::vector<int,std::allocator<int>>::empty(pvVar12);
      if (cVar5 == '\0') goto LAB_049471ac;
LAB_049472b8:
      iVar13 = *(int *)(pFVar6 + 0x68);
      uVar11 = Sexy::MTRand::Next(this);
      iVar1 = (*(int *)(pFVar6 + 0x6c) - *(int *)(pFVar6 + 0x68)) + 1;
      iVar3 = 0;
      if ((long)iVar1 != 0) {
        iVar3 = (int)(uVar11 / (ulong)(long)iVar1);
      }
      iVar13 = iVar13 + ((int)uVar11 - iVar3 * iVar1);
    }
    Sexy::Point::Point((Point *)&local_50,iVar13,iVar16);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x30),
               (Point *)&local_50);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_48);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_70);
  } while( true );
}

