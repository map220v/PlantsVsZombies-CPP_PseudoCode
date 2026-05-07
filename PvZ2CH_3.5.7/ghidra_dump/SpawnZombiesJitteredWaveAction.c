// Class: SpawnZombiesJitteredWaveAction


/* SpawnZombiesJitteredWaveAction::getZombieCountToSpawn() */

void __thiscall
SpawnZombiesJitteredWaveAction::getZombieCountToSpawn(SpawnZombiesJitteredWaveAction *this)

{
  FUN_04937090(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::StaticClassInit() */

void SpawnZombiesJitteredWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesJitteredWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_0493a134,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesJitteredWaveAction::StaticGetClass() */

long * SpawnZombiesJitteredWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpawnZombiesJitteredWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesJitteredWaveAction::getZombieColumn(ColumnSpawnInstruction::ColumnSpawnInstruction,
   Sexy::RtWeakPtr<ZombieType const>, Sexy::MTRand&, int) */

ulong __thiscall
SpawnZombiesJitteredWaveAction::getZombieColumn
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    return (ulong)param_2;
  case 10:
    uVar1 = FUN_04937354();
    return uVar1;
  case 0xb:
    break;
  default:
    param_5 = 0;
  }
  return param_5 & 0xffffffff;
}


/* SpawnZombiesJitteredWaveAction::HasFriendZombie() const */

char __thiscall
SpawnZombiesJitteredWaveAction::HasFriendZombie(SpawnZombiesJitteredWaveAction *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x18);
  lVar1 = FUN_04937090(uVar4,*(undefined8 *)(this + 0x20));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return '\0';
    }
    lVar2 = FUN_04937110(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar2 + 0x10) == '\0');
  return *(char *)(lVar2 + 0x10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::getZombieRow(RowSpawnInstruction::RowSpawnInstruction,
   Sexy::RtWeakPtr<ZombieType const>, Sexy::MTRand&, int) */

void __thiscall
SpawnZombiesJitteredWaveAction::getZombieRow
          (undefined8 param_1,undefined4 param_2,RtWeakPtrBase *param_3,undefined8 param_4,
          undefined4 param_5)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    param_5 = param_2;
    break;
  case 5:
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    param_5 = Board::PickRowForNewZombie(pBVar1,aRStack_10,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    break;
  case 6:
    break;
  default:
    param_5 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::getZombieSpawnPosition(SpawnZombiesJitteredInstruction&, Zombie*,
   Sexy::MTRand&, int&) */

void __thiscall
SpawnZombiesJitteredWaveAction::getZombieSpawnPosition
          (SpawnZombiesJitteredWaveAction *this,SpawnZombiesJitteredInstruction *param_1,
          Zombie *param_2,MTRand *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ulong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_1);
    iVar2 = getZombieRow(this,uVar1,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,*param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar5 = (float)(**(code **)(*(long *)this + 0xe8))(this,param_2,iVar2,param_3);
    iVar3 = BoardTransforms::GridToBoardSpaceY(iVar2);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar5,(float)iVar3,0.0);
    *param_4 = iVar2;
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_1);
    iVar2 = getZombieRow(this,uVar1,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,*param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_1);
    iVar3 = getZombieColumn(this,uVar1,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar2);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar3,(float)iVar4,0.0);
    *param_4 = iVar2;
    local_18 = local_28;
    local_10 = local_20;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18 & 0xffffffff,local_18._4_4_,local_10);
}


/* SpawnZombiesJitteredWaveAction::getZombieSpawnXPosition(Zombie*, int, Sexy::MTRand&) */

float SpawnZombiesJitteredWaveAction::getZombieSpawnXPosition
                (Zombie *param_1,int param_2,MTRand *param_3)

{
  int iVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar3;
  
  plVar2 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2,(ulong)param_3 & 0xffffffff);
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)(ulong)(uint)param_2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  return (float)(iVar1 + *(int *)(lVar3 + 0x78));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
SpawnZombiesJitteredWaveAction::AddResourceRequirements
          (SpawnZombiesJitteredWaveAction *this,set *param_1)

{
  bool bVar1;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    ZombieType::AddInGameResourceRequirements((ZombieType *)this_01,param_1);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesJitteredWaveAction::SpawnZombiesJitteredWaveAction() */

void __thiscall
SpawnZombiesJitteredWaveAction::SpawnZombiesJitteredWaveAction(SpawnZombiesJitteredWaveAction *this)

{
  ZombieSpawnerAction::ZombieSpawnerAction((ZombieSpawnerAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069119b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* SpawnZombiesJitteredWaveAction::StaticNew() */

SpawnZombiesJitteredWaveAction * SpawnZombiesJitteredWaveAction::StaticNew(void)

{
  SpawnZombiesJitteredWaveAction *this;
  
  this = ::operator_new(0x48);
  SpawnZombiesJitteredWaveAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::wavePositionZombies(std::vector<Zombie*, std::allocator<Zombie*>
   >, Sexy::MTRand&) */

void __thiscall
SpawnZombiesJitteredWaveAction::wavePositionZombies
          (SpawnZombiesJitteredWaveAction *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,MTRand *param_3)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  FairyTaleWindWaveActionProps *pFVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  SexyVector3 *this_01;
  int iVar16;
  ResourceInfo *pRVar17;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar9 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  this_00 = (RtMixedPtrBase *)(pFVar9 + 0x80);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar3 == '\0') {
    iVar5 = 0x1e;
    iVar6 = 0x50;
    cVar3 = FUN_0547419c(pFVar9 + 0x88);
  }
  else {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = *(int *)(lVar11 + 8);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = *(int *)(lVar11 + 0xc);
    cVar3 = FUN_0547419c(pFVar9 + 0x88);
  }
  if (cVar3 == '\0') {
    uVar15 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString((string *)(pFVar9 + 0x88));
    Sexy::RtName::RtName((RtName *)&local_30,(wstring *)&local_38);
    PVZDB::GetIdByAlias((RtId *)&local_40,uVar15,5,(RtName *)&local_30);
    Sexy::RtName::~RtName((RtName *)&local_30);
    FUN_05476c50((wstring *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
    pRVar17 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_40);
    local_20[4] = 0;
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    if (pRVar17 != (ResourceInfo *)0x0) {
      uVar8 = FUN_04937068(*(undefined8 *)(pRVar17 + 0x10),*(undefined8 *)(pRVar17 + 0x18));
      local_38 = CONCAT44(local_38._4_4_,uVar8);
      uVar8 = BoardConstants::NUMBER_OF_ROWS();
      local_30 = CONCAT44(local_30._4_4_,uVar8);
      piVar13 = eastl::min_alt<int>((int *)&local_38,(int *)&local_30);
      iVar16 = *piVar13;
      if (0 < iVar16) {
        uVar15 = *(undefined8 *)(pRVar17 + 0x10);
        puVar14 = (undefined4 *)FUN_04937088(uVar15,0);
        local_20[0] = *puVar14;
        if (iVar16 != 1) {
          puVar14 = (undefined4 *)FUN_04937088(uVar15,1);
          local_20[1] = *puVar14;
          if (iVar16 != 2) {
            puVar14 = (undefined4 *)FUN_04937088(uVar15,2);
            local_20[2] = *puVar14;
            if (iVar16 != 3) {
              puVar14 = (undefined4 *)FUN_04937088(uVar15,3);
              local_20[3] = *puVar14;
              if (iVar16 != 4) {
                puVar14 = (undefined4 *)FUN_04937088(uVar15,4);
                local_20[4] = *puVar14;
              }
            }
          }
        }
      }
    }
  }
  else {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_20[4] = 0;
    pRVar17 = (ResourceInfo *)0x0;
  }
  iVar16 = 0;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar4) {
    puVar10 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (SexyVector3 *)*puVar10;
    iVar7 = SharkMinion::getRow((SharkMinion *)this_01);
    puVar10 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
    local_30 = *puVar10;
    local_28 = *(undefined4 *)(puVar10 + 1);
    cVar3 = (**(code **)(*(long *)this + 0xe0))(this);
    if (cVar3 == '\0') {
      if (*(float *)(pFVar9 + 0x90) == 0.0) {
        lVar11 = Sexy::MTRand::Next(param_3,iVar5);
        iVar2 = local_20[iVar7];
        iVar1 = iVar6 + iVar2;
        local_20[iVar7] = iVar1;
        local_30 = CONCAT44(local_30._4_4_,(float)(ulong)(lVar11 + iVar2) + (float)local_30);
        if (pRVar17 != (ResourceInfo *)0x0) {
          uVar15 = *(undefined8 *)(pRVar17 + 0x28);
          uVar12 = FUN_04937068(uVar15,*(undefined8 *)(pRVar17 + 0x30));
          if ((ulong)(long)iVar7 < uVar12) {
            piVar13 = (int *)FUN_04937088(uVar15,(long)iVar7);
            local_20[iVar7] = iVar1 + *piVar13;
          }
        }
      }
      else {
        local_30 = CONCAT44(local_30._4_4_,
                            (float)local_30 + *(float *)(pFVar9 + 0x90) * (float)iVar16);
      }
      BoardEntity::PlaceOnBoard(this_01);
    }
    else {
      Zombie::RiseFromGround((Zombie *)this_01,(SexyVector3 *)&local_30,true);
    }
    iVar16 = iVar16 + 1;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction() */

void __thiscall
SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction
          (SpawnZombiesJitteredWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069119b0;
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x30));
  std::vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>::
  ~vector((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>> *
          )(this + 0x18));
  ZombieSpawnerAction::~ZombieSpawnerAction((ZombieSpawnerAction *)this);
  return;
}


/* SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction() */

void __thiscall
SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction
          (SpawnZombiesJitteredWaveAction *this)

{
  ~SpawnZombiesJitteredWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* SpawnZombiesJitteredWaveAction::GetLoot() */

vector<Loot,std::allocator<Loot>> * SpawnZombiesJitteredWaveAction::GetLoot(void)

{
  long in_x0;
  vector<Loot,std::allocator<Loot>> *in_x8;
  
  std::vector<Loot,std::allocator<Loot>>::vector(in_x8,(vector *)(in_x0 + 0x30));
  return in_x8;
}


/* SpawnZombiesJitteredWaveAction::SetLoot(std::vector<Loot, std::allocator<Loot> > const&) */

void __thiscall
SpawnZombiesJitteredWaveAction::SetLoot(SpawnZombiesJitteredWaveAction *this,vector *param_1)

{
  std::vector<Loot,std::allocator<Loot>>::operator=
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x30),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::createZombies(int, Sexy::MTRand&, std::vector<Zombie*,
   std::allocator<Zombie*> >&) */

void SpawnZombiesJitteredWaveAction::createZombies(int param_1,MTRand *param_2,vector *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  WaveAction *this;
  FairyTaleWindWaveActionProps *pFVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ZombieType *this_01;
  long lVar8;
  string *psVar9;
  RtWeakPtrBase *pRVar10;
  ulong uVar11;
  Toggles *this_02;
  wchar16 *pwVar12;
  undefined4 *puVar13;
  int *piVar14;
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar15;
  long *plVar16;
  vector<Zombie*,std::allocator<Zombie*>> *in_x3;
  vector<Zombie*,std::allocator<Zombie*>> *pvVar17;
  Zombie *pZVar18;
  LineBreakCategory *in_x4;
  ulong uVar19;
  undefined8 uVar20;
  int iVar21;
  code *pcVar22;
  undefined4 in_s1;
  undefined1 auVar23 [16];
  LineBreakCategory aLStack_58 [4];
  undefined4 local_54;
  RtWeakPtrBase aRStack_50 [8];
  Zombie *local_48;
  undefined8 local_40;
  undefined4 local_30 [4];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  LineBreakCategory *local_8;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pLVar15 = ___stack_chk_guard;
  pvVar17 = in_x3;
  (**(code **)(*(long *)this + 200))();
  pFVar7 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  sVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)pFVar7,extraout_x1,pLVar15,(LineBreakCategory *)pvVar17,in_x4);
  auVar23 = FUN_04937068(*(undefined8 *)(pFVar7 + 0x60),*(undefined8 *)(pFVar7 + 0x68));
  if ((wchar16 *)(long)sVar4 < auVar23._0_8_) {
    sVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar23._0_8_,auVar23._8_8_,pLVar15,(LineBreakCategory *)pvVar17,in_x4);
    piVar14 = (int *)FUN_04937074(*(undefined8 *)(pFVar7 + 0x60),(long)sVar4);
    iVar21 = *piVar14;
  }
  else {
    iVar21 = *(int *)(pFVar7 + 0x58);
  }
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetFlagZombieType();
  local_54 = 0;
  iVar5 = (**(code **)(*(long *)this + 0xd8))(this);
  if (0 < iVar5) {
    uVar19 = 0;
    do {
      if (iVar21 < 1) {
LAB_0493c074:
        bVar1 = false;
      }
      else {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19)
        ;
        this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        lVar8 = ZombieType::GetProps(this_01);
        if (*(char *)(lVar8 + 0x38) == '\0') goto LAB_0493c074;
        iVar21 = iVar21 + -1;
        bVar1 = true;
      }
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
      lVar8 = FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      local_30[0] = *(undefined4 *)(lVar8 + 0x14);
      local_48 = (Zombie *)
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar8 + 0x20));
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar8 + 0x20));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar2) {
        psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        std::vector<std::string,std::allocator<std::string>>::push_back(avStack_20,psVar9);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      plVar16 = *(long **)(gLawnApp + 0x9f0);
      pcVar22 = *(code **)(*plVar16 + 0x318);
      pRVar10 = (RtWeakPtrBase *)FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar10);
      local_48 = (Zombie *)
                 (*pcVar22)(plVar16,(RtWeakPtr<Sexy::SoundResource> *)&local_40,
                            (ulong)param_2 & 0xffffffff,(SpawnZombieParams *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar2 = SUB81(local_48,0);
      if (bVar1) {
        Zombie::SetHasPlantFood(bVar2);
        uVar20 = *(undefined8 *)(this + 0x30);
        uVar11 = FUN_049370fc(uVar20,*(undefined8 *)(this + 0x38));
        pZVar18 = local_48;
      }
      else {
        pZVar18 = local_48;
        pwVar12 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar15 = aLStack_58;
        std::string::string((string *)&local_40,"PlantfoodZombies");
        EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                  (pwVar12,(wchar16 *)&local_40,pLVar15,(LineBreakCategory *)pZVar18,in_x4);
        Zombie::SetHasPlantFood(bVar2);
        std::string::~string((string *)&local_40);
        nop();
        uVar20 = *(undefined8 *)(this + 0x30);
        uVar11 = FUN_049370fc(uVar20,*(undefined8 *)(this + 0x38));
        pZVar18 = local_48;
      }
      local_48 = pZVar18;
      if (uVar19 < uVar11) {
        puVar13 = (undefined4 *)FUN_04937108(uVar20,uVar19);
        Zombie::SetLoot(pZVar18,*puVar13);
      }
      pZVar18 = local_48;
      pRVar10 = (RtWeakPtrBase *)FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      uVar6 = Sexy::RtWeakPtrBase::operator==(pRVar10,aRStack_50);
      (**(code **)(*(long *)pZVar18 + 0x250))(pZVar18,uVar6);
      pZVar18 = local_48;
      lVar8 = FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      Zombie::SetHasLeader(pZVar18,*(bool *)(lVar8 + 0x11));
      this_02 = (Toggles *)Toggles::GetInstance();
      std::string::string((string *)&local_40,"PetZombie");
      cVar3 = Toggles::IsEnabled(this_02,(string *)&local_40);
      if ((cVar3 == '\0') ||
         (lVar8 = FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19), *(char *)(lVar8 + 0x10) == '\0'
         )) {
        std::string::~string((string *)&local_40);
        nop();
      }
      else {
        std::string::~string((string *)&local_40);
        nop();
        Zombie::SetIsFriendZombie(local_48,true);
      }
      lVar8 = FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      if (*(int *)(lVar8 + 0x18) != -1) {
        Zombie::SetEliminateColor(local_48,*(int *)(lVar8 + 0x18));
        pZVar18 = local_48;
        PVZ_EOT();
        in_s1 = 0;
        Zombie::ApplyCondition(pZVar18,0x3a,1);
        lVar8 = FUN_049370ec(*(undefined8 *)(this + 0x18),uVar19);
      }
      pZVar18 = local_48;
      uVar19 = uVar19 + 1;
      pcVar22 = *(code **)(*(long *)local_48 + 0x78);
      in_x4 = (LineBreakCategory *)&local_54;
      uVar6 = (**(code **)(*(long *)this + 0xf0))(this,lVar8,local_48,param_3);
      local_40 = CONCAT44(in_s1,uVar6);
      (*pcVar22)(pZVar18,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back(in_x3,&local_48);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    } while ((int)uVar19 < iVar5);
  }
  (**(code **)(*(long *)this + 0xd0))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void __thiscall
SpawnZombiesJitteredWaveAction::WaveStart
          (SpawnZombiesJitteredWaveAction *this,uint param_1,undefined8 param_3,undefined8 param_4,
          vector *param_5)

{
  code *pcVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  createZombies((int)this,(MTRand *)(ulong)param_1,param_5);
  pcVar1 = *(code **)(*(long *)this + 0xf8);
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(this,avStack_20,param_5);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
  pcVar1 = *(code **)(*(long *)this + 0xb8);
  std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,(vector *)avStack_38);
  (*pcVar1)(this,param_1,avStack_20);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
  WaveAction::notifyWaveEvents((WaveAction *)this);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::GetZombies(std::vector<ZombieType const*,
   std::allocator<ZombieType const*> >&) */

void __thiscall
SpawnZombiesJitteredWaveAction::GetZombies(SpawnZombiesJitteredWaveAction *this,vector *param_1)

{
  bool bVar1;
  RtWeakPtr *this_00;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_1,
               (ZombieType **)&local_10);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesJitteredWaveAction::initializeAction(Sexy::MTRand&, int) */

void __thiscall
SpawnZombiesJitteredWaveAction::initializeAction
          (SpawnZombiesJitteredWaveAction *this,MTRand *param_1,int param_2)

{
  vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>> *this_00;
  char cVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar3;
  WaveManager *this_02;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  this_00 = (vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  std::vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>::
  operator=(this_00,(vector *)(pFVar2 + 0x40));
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_049399b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  cVar1 = (**(code **)(*(long *)this + 0xc0))(this);
  if (((this_01 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) && (cVar1 != '\0')) && (lVar3 = WaveManagerModule::GetDifficultyProps(), lVar3 != 0)
     ) {
    this_02 = (WaveManager *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_01);
    cVar1 = WaveManager::ShouldCullZombiesForWave(this_02,param_2);
    if (cVar1 != '\0') {
      lVar3 = WaveManagerModule::GetDifficultyProps();
      iVar12 = *(int *)(lVar3 + 8);
      if (iVar12 <= param_2) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        std::string::string((string *)&local_10,"treasureyeti");
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        std::string::~string((string *)&local_10);
        nop();
        lVar3 = WaveManagerModule::GetDifficultyProps();
        iVar12 = *(int *)(lVar3 + 4) + (param_2 - iVar12) * *(int *)(lVar3 + 4);
        if (iVar12 < 0) {
          do {
            uVar5 = FUN_04937090(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
            if (uVar5 < 2) break;
            uVar6 = Sexy::MTRand::Next(param_1);
            uVar13 = *(undefined8 *)(this + 0x18);
            uVar7 = FUN_04937090(uVar13,*(undefined8 *)(this + 0x20));
            uVar5 = 0;
            if (uVar7 != 0) {
              uVar5 = uVar6 / uVar7;
            }
            lVar11 = uVar6 - uVar5 * uVar7;
            pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049370ec(uVar13,lVar11);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0xa0));
            local_10 = 1;
            piVar9 = eastl::max_alt<int>((int *)(lVar3 + 0x9c),(int *)&local_10);
            iVar12 = iVar12 + *piVar9;
            pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_049370ec(*(undefined8 *)(this + 0x18),lVar11);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            if (lVar3 != lVar10) {
              local_20 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)this_00);
              local_18 = __gnu_cxx::
                         __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                         ::operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                                      *)&local_20,lVar11);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_10,(__normal_iterator *)&local_18);
              std::
              vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
              ::erase(this_00,CONCAT44(uStack_c,local_10));
            }
          } while (iVar12 < 0);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

