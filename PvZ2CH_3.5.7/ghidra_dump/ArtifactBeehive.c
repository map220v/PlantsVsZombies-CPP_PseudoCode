// Class: ArtifactBeehive


/* ArtifactBeehive::GetExtraFastPlant(std::string const&) */

float ArtifactBeehive::GetExtraFastPlant(string *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = Artifact::IsFieldActivated((Artifact *)param_1,1);
  fVar2 = 0.0;
  if (cVar1 != '\0') {
    fVar2 = *(float *)(param_1 + 0x50) * 0.01;
  }
  return fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::StaticClassInit() */

void ArtifactBeehive::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactBeehive");
    (*pcVar2)(plVar1,asStack_10,FUN_03734a54,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBeehive::StaticGetClass() */

long * ArtifactBeehive::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactBeehive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBeehive::GetClass() const */

long * ArtifactBeehive::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactBeehive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBeehive::CalcSpawnBeeCount() */

int __thiscall ArtifactBeehive::CalcSpawnBeeCount(ArtifactBeehive *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_03726da8(this + 0x54);
  iVar2 = 1;
  if (cVar1 != '\0') {
    iVar2 = *(int *)(this + 0x58) + 1;
  }
  return iVar2;
}


/* ArtifactBeehive::RandomBeePosition(Sexy::SexyVector3, float) */

float ArtifactBeehive::RandomBeePosition
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float fVar1;
  
  fVar1 = (float)FUN_03724790(-param_4,param_4);
  FUN_03724790(-param_4,param_4);
  return fVar1 + param_1;
}


/* ArtifactBeehive::GetBeeType(bool, int) */

undefined4 __thiscall ArtifactBeehive::GetBeeType(ArtifactBeehive *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1) {
    uVar1 = 3;
    if ((param_2 != 0) && (uVar1 = 4, param_2 != 1)) {
      uVar1 = 0;
      if (param_2 == 2) {
        uVar1 = 5;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      if (param_2 != 1) {
        uVar1 = 0;
        if (param_2 == 2) {
          uVar1 = 2;
        }
        return uVar1;
      }
      return 1;
    }
  }
  return uVar1;
}


/* ArtifactBeehive::~ArtifactBeehive() */

void __thiscall ArtifactBeehive::~ArtifactBeehive(ArtifactBeehive *this)

{
  *(undefined ***)this = &PTR_GetClass_06691970;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactBeehive::~ArtifactBeehive() */

void __thiscall ArtifactBeehive::~ArtifactBeehive(ArtifactBeehive *this)

{
  ~ArtifactBeehive(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactBeehive::Update() */

void __thiscall ArtifactBeehive::Update(ArtifactBeehive *this)

{
  float fVar1;
  
  if ((this[0x3c] != (ArtifactBeehive)0x0) &&
     (fVar1 = (float)Artifact::GetTriggerLeftTime((Artifact *)this), fVar1 <= 0.0)) {
    this[0x3c] = (ArtifactBeehive)0x0;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* ArtifactBeehive::CanTriggerMain() */

char __thiscall ArtifactBeehive::CanTriggerMain(ArtifactBeehive *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((this[0x18] != (ArtifactBeehive)0x0) &&
     (cVar1 = Artifact::IsFieldActivated((Artifact *)this,0), cVar1 != '\0')) {
    iVar2 = DangerRoomManager::GetMaxLastWeekLevel((DangerRoomManager *)this);
    iVar3 = (**(code **)(*(long *)this + 0xa0))(this);
    if ((iVar2 <= iVar3) &&
       ((fVar5 = *(float *)(this + 0x38), fVar4 = (float)PVZ_T(), fVar5 <= fVar4 &&
        (0 < *(int *)(this + 0x40))))) {
      return cVar1;
    }
  }
  return '\0';
}


/* ArtifactBeehive::ArtifactBeehive() */

void __thiscall ArtifactBeehive::ArtifactBeehive(ArtifactBeehive *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06691970;
  return;
}


/* ArtifactBeehive::StaticNew() */

ArtifactBeehive * ArtifactBeehive::StaticNew(void)

{
  ArtifactBeehive *this;
  
  this = ::operator_new(0x68);
  ArtifactBeehive(this);
  return this;
}


/* ArtifactBeehive::registerForEvents() */

void ArtifactBeehive::registerForEvents(void)

{
  undefined *puVar1;
  ReceivedDataCallback *in_x0;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (in_x0,OnCreatePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ArtifactBeehive,void(ArtifactBeehive::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::GetRandomBeeType(bool) */

void __thiscall ArtifactBeehive::GetRandomBeeType(ArtifactBeehive *this,bool param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,&DAT_057519a0,3,auStack_28);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  piVar4 = (int *)FUN_03724788(local_20[0],0);
  uVar1 = GetBeeType(this,param_1,*piVar4);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::GenerateBeeFromPlant(Plant*) */

void __thiscall ArtifactBeehive::GenerateBeeFromPlant(ArtifactBeehive *this,Plant *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ArtifactBeeEntity *pAVar5;
  Point *extraout_x1;
  int iVar6;
  float fVar7;
  int local_30;
  int local_2c;
  undefined4 local_28;
  float fStack_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar1 = CalcSpawnBeeCount(this);
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + iVar1;
  if (0 < iVar1) {
    iVar6 = 0;
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    do {
      iVar6 = iVar6 + 1;
      pAVar5 = GameObject::Create<ArtifactBeeEntity>();
      uVar2 = *(undefined4 *)(puVar4 + 1);
      fStack_24 = (float)((ulong)*puVar4 >> 0x20);
      local_28 = (undefined4)*puVar4;
      fVar7 = fStack_24 - 100.0;
      _local_28 = CONCAT44(fVar7,local_28);
      local_20 = uVar2;
      local_18 = (float)RandomBeePosition(local_28,fVar7,uVar2,0x41f00000,this);
      local_14 = fVar7;
      local_10 = uVar2;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      (**(code **)(*(long *)pAVar5 + 0x78))(pAVar5,(SexyVector3 *)&local_28);
      uVar2 = GetRandomBeeType(this,false);
                    /* WARNING: Load size is inaccurate */
      ArtifactBeeEntity::ArtifactBeeEntityInitialize
                (*(ArtifactBeeEntity **)(this + 0x48),*(undefined4 *)(this + 0x4c),
                 *(undefined4 *)(this + 0x5c),pAVar5,uVar2,1);
      Sexy::Point::Point((Point *)&local_18,0,2);
      BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_18);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_18 = (float)(local_30 - iVar3);
      local_14 = (float)local_2c - 100.0;
      ArtifactBeeEntity::MoveToTarget(local_18,local_14,pAVar5);
    } while (iVar6 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBeehive::OnCreatePlant(Plant*) */

void __thiscall ArtifactBeehive::OnCreatePlant(ArtifactBeehive *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (Plant *)0x0) {
    iVar2 = *(int *)(this + 0x44);
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(this + 0x44) << 1;
    }
    if (*(int *)(this + 0x40) < iVar2) {
      GenerateBeeFromPlant(this,param_1);
      return;
    }
  }
  return;
}


/* ArtifactBeehive::Activate() */

void __thiscall ArtifactBeehive::Activate(ArtifactBeehive *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  cVar1 = FUN_03723bbc(this[0x3e]);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x40) = 1;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0x40) = 0x10;
    }
  }
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  fVar4 = (float)std::ceil(fVar4);
  *(int *)(this + 0x44) = (int)fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(float *)(this + 0x48) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar4 * fVar5;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  *(float *)(this + 0x4c) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) + fVar4 * fVar5;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,0,3);
  *(undefined4 *)(this + 0x60) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  uVar6 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
  }
  *(undefined4 *)(this + 0x50) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar6 = 0xbf800000;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(undefined4 *)(this + 0x54) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  iVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    iVar3 = (int)fVar4;
  }
  fVar4 = 0.0;
  *(int *)(this + 0x58) = iVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(float *)(this + 0x5c) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar4 * fVar5;
  if (0.0 < *(float *)(this + 0x50)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::FindTarget() */

void ArtifactBeehive::FindTarget(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *extraout_x0;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  long *local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point((Point *)&local_50,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_48,(Point *)&local_50);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar3,uVar4,(__normal_iterator *)local_48);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_48[0] = (long *)std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_48);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    nop();
    if ((((extraout_x0 != (long *)0x0) && (cVar2 = RealObject::IsOnTeam(), cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')) {
      local_48[0] = extraout_x0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                 (BoardEntity **)local_48);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar5 = FUN_03724708(local_38,local_30);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_03724714(local_38,0);
    uVar3 = *puVar6;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::FindTargets() */

void __thiscall ArtifactBeehive::FindTargets(ArtifactBeehive *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_38;
  long local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point((Point *)&local_38,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_38);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar3,uVar4,(__normal_iterator *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    if (!bVar2) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if ((extraout_x0 != 0) && (cVar1 = RealObject::IsOnTeam(), cVar1 != '\0')) {
      local_30[0] = extraout_x0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,(BoardEntity **)local_30
                );
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeehive::GenerateBee(ArtifactBeehive::ArtifactBeeType, int) */

void __thiscall ArtifactBeehive::GenerateBee(ArtifactBeehive *this,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ArtifactBeeEntity *pAVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  Point *extraout_x1;
  RtObject *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  int local_60;
  int local_5c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  float local_50;
  float local_4c;
  undefined4 local_48;
  Insets aIStack_40 [16];
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets(this);
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (cVar2 == '\0') {
    pAVar4 = GameObject::Create<ArtifactBeeEntity>();
    DVec3::DVec3((DVec3 *)&local_50);
    Sexy::Point::Point((Point *)&local_30,0,2);
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_30,extraout_x1);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_50 = (float)(local_60 - iVar3);
    fVar9 = (float)local_5c - 100.0;
    uVar8 = 0;
    local_48 = 0;
    local_4c = fVar9;
    local_30 = RandomBeePosition(local_50,fVar9,0,*(undefined4 *)(this + 0x60),this);
    local_2c = fVar9;
    local_28 = uVar8;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_30);
    (**(code **)(*(long *)pAVar4 + 0x78))(pAVar4,(DVec3 *)&local_50);
                    /* WARNING: Load size is inaccurate */
    uVar8 = *(undefined4 *)(this + 0x4c);
    ArtifactBeeEntity::ArtifactBeeEntityInitialize
              (*(ArtifactBeeEntity **)(this + 0x48),uVar8,*(undefined4 *)(this + 0x5c),pAVar4,
               param_2,0);
    if (*(int *)(this + 0x44) == param_3) {
      puVar5 = (undefined8 *)FUN_03724714(local_20,0);
      this_00 = (RtObject *)*puVar5;
    }
    else {
      iVar3 = FUN_03724708(local_20,local_18);
      if (iVar3 < 6) {
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = param_3 / iVar3;
        }
        puVar5 = (undefined8 *)FUN_03724714(local_20,(long)(param_3 - iVar1 * iVar3));
        this_00 = (RtObject *)*puVar5;
      }
      else {
        puVar5 = (undefined8 *)FUN_03724714(local_20,(long)(param_3 % 5));
        this_00 = (RtObject *)*puVar5;
      }
    }
    pZVar6 = Sexy::RtObject::Cast<Zombie>(this_00);
    (**(code **)(*(long *)pZVar6 + 0x3a0))(aIStack_40);
    Sexy::Insets::Insets((Insets *)&local_30,aIStack_40);
    uVar7 = ArtifactBeeEntity::CalcMoveTarget((ArtifactBeeEntity *)this,param_2,(Point *)&local_30);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_58);
    ArtifactBeeEntity::SetTarget(pAVar4,(Point *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    ArtifactBeeEntity::MoveToTarget(uVar7,uVar8,pAVar4);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactBeehive::SpawnBees() */

void __thiscall ArtifactBeehive::SpawnBees(ArtifactBeehive *this)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(this + 0x44) < *(int *)(this + 0x40)) {
    bVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
    uVar5 = (uint)bVar2;
    if (bVar2 != 0) {
      uVar5 = *(int *)(this + 0x40) - *(int *)(this + 0x44);
    }
    if (0 < *(int *)(this + 0x44)) {
      iVar4 = 0;
      do {
        uVar3 = GetRandomBeeType(this,iVar4 < (int)uVar5);
        iVar1 = iVar4 + 1;
        GenerateBee(this,uVar3,iVar4);
        iVar4 = iVar1;
      } while (iVar1 < *(int *)(this + 0x44));
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x40)) {
      do {
        uVar3 = GetRandomBeeType(this,false);
        iVar1 = iVar4 + 1;
        GenerateBee(this,uVar3,iVar4);
        iVar4 = iVar1;
      } while (iVar1 < *(int *)(this + 0x40));
    }
  }
  return;
}


/* ArtifactBeehive::DoTrigger() */

void __thiscall ArtifactBeehive::DoTrigger(ArtifactBeehive *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  SpawnBees(this);
  return;
}

