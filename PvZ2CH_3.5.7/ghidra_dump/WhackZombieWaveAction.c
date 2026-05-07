// Class: WhackZombieWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::StaticClassInit() */

void WhackZombieWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackZombieWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_03fce3c0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackZombieWaveAction::StaticGetClass() */

long * WhackZombieWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackZombieWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackZombieWaveAction::initializeAction(Sexy::MTRand&, int) */

void WhackZombieWaveAction::initializeAction(MTRand *param_1,int param_2)

{
  undefined4 uVar1;
  WaveManager *this;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(param_1 + 0x20));
  this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = WaveManager::GetProps(this);
  uVar1 = *(undefined4 *)(lVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}


/* WhackZombieWaveAction::WhackZombieWaveAction() */

void __thiscall WhackZombieWaveAction::WhackZombieWaveAction(WhackZombieWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_067acf80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* WhackZombieWaveAction::StaticNew() */

WhackZombieWaveAction * WhackZombieWaveAction::StaticNew(void)

{
  WhackZombieWaveAction *this;
  
  this = ::operator_new(0x48);
  WhackZombieWaveAction(this);
  return this;
}


/* WhackZombieWaveAction::~WhackZombieWaveAction() */

void __thiscall WhackZombieWaveAction::~WhackZombieWaveAction(WhackZombieWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_067acf80;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WhackZombieWaveAction::~WhackZombieWaveAction() */

void __thiscall WhackZombieWaveAction::~WhackZombieWaveAction(WhackZombieWaveAction *this)

{
  ~WhackZombieWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::SpawnZombie(Sexy::RtWeakPtr<ZombieType const>, Sexy::Point, int) */

void __thiscall
WhackZombieWaveAction::SpawnZombie
          (undefined8 param_1,RtWeakPtrBase *param_2,Point *param_3,undefined4 param_4)

{
  int iVar1;
  Zombie *this;
  long *plVar2;
  code *pcVar3;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = 1;
  local_2c = 0;
  local_2b = 1;
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
  this = (Zombie *)(*pcVar3)(plVar2,aRStack_40,param_4,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  BoardTransforms::GridToBoardSpace(param_3);
  iVar1 = Sexy::Rand(0x19);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)(local_48 - iVar1),(float)local_44,0.0);
  Zombie::RiseFromGround(this,(SexyVector3 *)aRStack_40,true);
  (**(code **)(*(long *)this + 0x358))(0x40800000,this);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::Spawngriditem(int, bool) */

void __thiscall
WhackZombieWaveAction::Spawngriditem(WhackZombieWaveAction *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  int iVar5;
  Board *this_00;
  int iVar6;
  string asStack_10 [8];
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  iVar5 = 3;
  if (param_2) {
    iVar5 = 1;
  }
  for (; iVar6 < param_1; iVar6 = iVar6 + 1) {
    do {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar2 = Sexy::Rand(iVar2 - iVar5);
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      iVar3 = Sexy::Rand(iVar3);
      cVar1 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),iVar5 + iVar2,iVar3,false);
    } while (cVar1 == '\0');
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"pvz1grid");
    Board::AddGridItem(this_00,asStack_10,iVar5 + iVar2,iVar3,1);
    std::string::~string(asStack_10);
    nop();
  }
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"gravestone_rumble");
  AudioMgr::SendEventThrottled(psVar4,_FUN_03fd11b0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::SmallWave(int) */

void __thiscall WhackZombieWaveAction::SmallWave(WhackZombieWaveAction *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  vector *pvVar8;
  string *psVar9;
  int *piVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  Pvz1GridItem *this_00;
  vector<int,std::allocator<int>> *__n;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  TPoint aTStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Point aPStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,4);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar5,uVar6);
  uVar5 = *(undefined8 *)(pFVar4 + 0x50);
  iVar17 = *(int *)(this + 0x38);
  lVar7 = FUN_03fcd9a4(uVar5,*(undefined8 *)(pFVar4 + 0x58));
  if ((ulong)(long)iVar17 <= lVar7 - 1U) {
    *(int *)(this + 0x38) = iVar17 + 1;
    uVar16 = 0;
    iVar15 = 0;
    uVar18 = 0;
    __n = (vector<int,std::allocator<int>> *)&local_20;
    pvVar8 = (vector *)FUN_03fcd9b8(uVar5,(long)iVar17);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_20,pvVar8);
    lVar7 = FUN_03fcd980(local_20,local_18);
    if (lVar7 != 0) {
      do {
        Set8BytesTo0();
        if ((int)uVar16 == 1) {
          std::string::append(asStack_60,"whackzombie_tutorial_armor1",(size_t)__n);
        }
        else if (iVar15 == 2) {
          std::string::append(asStack_60,"whackzombie_tutorial_armor2",(size_t)__n);
        }
        else if (iVar15 == 0) {
          std::string::append(asStack_60,"whackzombie_tutorial",(size_t)__n);
        }
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
        piVar10 = (int *)FUN_03fcd9c4(local_20,uVar16);
        iVar17 = 1;
        if (0 < *piVar10) {
          do {
            puVar11 = (uint *)FUN_03fcd9c4(*(undefined8 *)(this + 0x20),uVar16);
            uVar5 = local_38;
            uVar2 = *puVar11;
            uVar3 = uVar2 - 1;
            __n = (vector<int,std::allocator<int>> *)(ulong)uVar3;
            *puVar11 = uVar3;
            if (0 < (int)uVar2) {
              iVar15 = (int)uVar18;
              uVar12 = FUN_03fcd998(local_38,local_30);
              uVar18 = (ulong)(iVar15 + 1);
              uVar13 = 0;
              if (uVar12 != 0) {
                uVar13 = (ulong)(long)iVar15 / uVar12;
              }
              FUN_03fcd9cc(uVar5,(long)iVar15 - uVar13 * uVar12);
              BoardEntity::CalcGridPosition();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_48,(RtWeakPtrBase *)aRStack_58);
              Sexy::Point::Point(aPStack_40,aTStack_50);
              __n = (vector<int,std::allocator<int>> *)aPStack_40;
              SpawnZombie(this,aRStack_48,aPStack_40,param_1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              piVar10 = (int *)FUN_03fcd9c4(local_20,uVar16);
            }
            bVar1 = iVar17 < *piVar10;
            iVar17 = iVar17 + 1;
          } while (bVar1);
        }
        uVar16 = uVar16 + 1;
        iVar15 = (int)uVar16;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        std::string::~string(asStack_60);
        uVar13 = FUN_03fcd980(local_20,local_18);
      } while (uVar16 < uVar13);
    }
    while (5 < param_1) {
      do {
        uVar16 = FUN_03fcd998(local_38,local_30);
        if (uVar16 <= uVar18) goto LAB_03fd160c;
        fVar19 = (float)Sexy::Rand(1.0);
      } while (fVar19 <= 0.3);
      puVar14 = (undefined8 *)FUN_03fcd9cc(local_38,uVar18);
      this_00 = Sexy::RtObject::Cast<Pvz1GridItem>((RtObject *)*puVar14);
      Pvz1GridItem::Camouflage(this_00);
      uVar18 = uVar18 + 1;
    }
LAB_03fd160c:
    DVec2::DVec2((DVec2 *)aPStack_40,*(float *)(pFVar4 + 0x68),*(float *)(pFVar4 + 0x6c));
    fVar19 = (float)PVZ_T();
    fVar20 = (float)ValueRange::GetRandomValue((ValueRange *)aPStack_40);
    *(float *)(this + 0x18) = fVar20 + fVar19;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackZombieWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void WhackZombieWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  WhackZombieWaveAction *this;
  WaveManager *this_00;
  float fVar1;
  float fVar2;
  
  this = (WhackZombieWaveAction *)(ulong)(uint)param_1;
  fVar2 = *(float *)(this + 0x18);
  fVar1 = (float)PVZ_T();
  if (fVar2 <= fVar1) {
    SmallWave(this,(int)param_2);
  }
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x40)) {
    return;
  }
  WaveManager::ForceSpawnWave(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
WhackZombieWaveAction::AddResourceRequirements(WhackZombieWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_SteamMiniGame");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieTutorialGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIE");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_WHACKZOMBIEAudio");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WhackZombieWaveAction::WaveStart(WaveAction *param_1,int param_2)

{
  vector<int,std::allocator<int>> *this;
  FairyTaleWindWaveActionProps *pFVar1;
  ulong uVar2;
  float fVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4);
  uVar2 = FUN_03fcd998(local_20,local_18);
  if (uVar2 < (ulong)(long)*(int *)(pFVar1 + 0x78)) {
    Spawngriditem((WhackZombieWaveAction *)param_1,*(int *)(pFVar1 + 0x74),
                  *(int *)(pFVar1 + 0x7c) <= param_2);
  }
  this = (vector<int,std::allocator<int>> *)(param_1 + 0x20);
  std::vector<int,std::allocator<int>>::push_back(this,(int *)(pFVar1 + 0x40));
  std::vector<int,std::allocator<int>>::push_back(this,(int *)(pFVar1 + 0x44));
  std::vector<int,std::allocator<int>>::push_back(this,(int *)(pFVar1 + 0x48));
  SmallWave((WhackZombieWaveAction *)param_1,param_2);
  Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - *(float *)(pFVar1 + 0x70);
  fVar3 = (float)PVZ_T();
  *(float *)(param_1 + 0x40) = fVar3 + *(float *)(param_1 + 0x3c);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveAction::filtrationGrid(std::vector<BoardEntity*, std::allocator<BoardEntity*> >
   const&) */

void WhackZombieWaveAction::filtrationGrid(vector *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long extraout_x0;
  vector<BoardEntity*,std::allocator<BoardEntity*>> *in_x1;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  BoardEntity *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(in_x1);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_30 = FUN_03fcfb30(*(undefined8 *)in_x1);
    local_28 = FUN_03fcfb80(*(undefined8 *)(in_x1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      local_38 = (BoardEntity *)*puVar3;
      nop();
      if (extraout_x0 != 0) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,&local_38);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,(vector *)in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

