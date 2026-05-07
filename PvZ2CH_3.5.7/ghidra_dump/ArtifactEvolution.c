// Class: ArtifactEvolution


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::StaticClassInit() */

void ArtifactEvolution::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactEvolution");
    (*pcVar2)(plVar1,asStack_10,FUN_037799f0,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolution::StaticGetClass() */

long * ArtifactEvolution::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolution",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactEvolution::GetClass() const */

long * ArtifactEvolution::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactEvolution",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::setRenderTransformForRig(PopAnimRig*, float) */

void __thiscall
ArtifactEvolution::setRenderTransformForRig
          (ArtifactEvolution *this,PopAnimRig *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FastCurve aFStack_48 [8];
  float local_40;
  float local_3c;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_40,130.0,180.0,0.0);
  fVar3 = (float)FUN_03728ac0(*(float *)(this + 0x90) - local_40);
  fVar4 = (float)FUN_03728ac0(*(float *)(this + 0x94) - local_3c);
  Sexy::FastCurve::SetOutRange(aFStack_48,fVar3,fVar4);
  fVar3 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)aFStack_48);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  iVar1 = FUN_03728aac(0xffffffbf);
  iVar2 = FUN_03728aac(0xffffff9c);
  FUN_0372397c((float)iVar1,(float)iVar2,auStack_28,auStack_1c);
  fVar3 = acosf(fVar3);
  if (0.0 < fVar4) {
    fVar3 = 6.2831855 - fVar3;
  }
  FUN_0372397c(param_2,0,auStack_28,auStack_1c);
  Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar3);
  uVar5 = FUN_03728ac0(local_40);
  uVar6 = FUN_03728ac0(local_3c);
  FUN_0372397c(uVar5,uVar6,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::findLowestLevelInTeamSeeds() */

void ArtifactEvolution::findLowestLevelInTeamSeeds(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UINewPVPTopZombieQueue *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  int iVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  iVar6 = 1;
  this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar1 = FUN_03723d64(this[0x199]), iVar5 < cVar1; iVar5 = iVar5 + 1) {
      UINewPVPTopZombieQueue::gettItem(this,iVar5);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if ((bVar2) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar1 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        SeedPacket::GetPlantType();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          SeedPacket::GetPlantType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar4 + 8),false);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          if (iVar3 < iVar6) {
            iVar6 = iVar3;
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::FindTheLowestCostplant() */

void __thiscall ArtifactEvolution::FindTheLowestCostplant(ArtifactEvolution *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x0_00;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar4 = 10000;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if ((extraout_x0 != 0) && (cVar2 = RealObject::IsOnOpposingTeam(), cVar2 == '\0')) {
      Plant::GetType();
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      iVar3 = (**(code **)(*plVar5 + 0x70))(plVar5,0xfffffffe);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (iVar3 < iVar4) {
        Plant::GetType();
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        iVar4 = (**(code **)(*plVar5 + 0x70))(plVar5,0xfffffffe);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar6,uVar7);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03758158:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar6 = *puVar8;
    nop();
    if ((extraout_x0_00 != 0) && (cVar2 = RealObject::IsOnOpposingTeam(uVar6,1), cVar2 == '\0')) {
      Plant::GetType();
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      iVar3 = (**(code **)(*plVar5 + 0x70))(plVar5,0xfffffffe);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (iVar3 == iVar4) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        goto LAB_03758158;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* ArtifactEvolution::~ArtifactEvolution() */

void __thiscall ArtifactEvolution::~ArtifactEvolution(ArtifactEvolution *this)

{
  *(undefined ***)this = &PTR_GetClass_06691b20;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0x60));
  std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::~vector
            ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
             (this + 0x48));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactEvolution::~ArtifactEvolution() */

void __thiscall ArtifactEvolution::~ArtifactEvolution(ArtifactEvolution *this)

{
  ~ArtifactEvolution(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::GetPlantTypes() */

void __thiscall ArtifactEvolution::GetPlantTypes(ArtifactEvolution *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  LevelEditorCardPlantInterface aLStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_18);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_18), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_10);
    if ((cVar2 == '\0') &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10),
       *(char *)(lVar3 + 0x30) != '\0')) {
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)(this + 0x60),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::ArtifactEvolution() */

void __thiscall ArtifactEvolution::ArtifactEvolution(ArtifactEvolution *this)

{
  undefined4 uVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  this[0x40] = (ArtifactEvolution)0x0;
  *(undefined ***)this = &PTR_GetClass_06691b20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  DVec3::DVec3((DVec3 *)(this + 0x90));
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x90),(SexyVector3 *)aVStack_18);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x9c) = uVar1;
  GetPlantTypes(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolution::StaticNew() */

ArtifactEvolution * ArtifactEvolution::StaticNew(void)

{
  ArtifactEvolution *this;
  
  this = ::operator_new(0xb8);
  ArtifactEvolution(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::AutogenousPlants(int, int) */

void __thiscall ArtifactEvolution::AutogenousPlants(ArtifactEvolution *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  long *plVar8;
  PlantType *pPVar9;
  IntroArenaTutorialBattleModule *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  Effect_evolveLight *pEVar12;
  Board *pBVar13;
  int iVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48 [3];
  undefined8 local_30 [5];
  long local_8;
  
  iVar1 = param_1 + 2;
  local_8 = ___stack_chk_guard;
  uVar4 = findLowestLevelInTeamSeeds();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
  iVar14 = param_2;
  do {
    if ((((-1 < param_1) && (-1 < iVar14)) &&
        (param_1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8))) &&
       (iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar14 < iVar5)) {
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x60));
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x60));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar2) {
        pRVar6 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,pRVar6);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        bVar2 = std::operator==((string *)(lVar7 + 8),"coffeebean");
        if (!bVar2) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          bVar2 = std::operator==((string *)(lVar7 + 8),"pumpkin");
          if (!bVar2) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
            bVar2 = std::operator==((string *)(lVar7 + 8),"powervine");
            if (!bVar2) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
              bVar2 = std::operator==((string *)(lVar7 + 8),"peavine");
              if (!bVar2) {
                plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                if (*(code **)(*plVar8 + 0xa0) == PlantType::IsVine) {
                  cVar3 = PlantType::IsVine();
                }
                else {
                  cVar3 = (**(code **)(*plVar8 + 0xa0))();
                }
                if (cVar3 == '\0') {
                  pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                  cVar3 = PlantType::IsHeroPlant(pPVar9);
                  if (cVar3 == '\0') {
                    pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                    lVar7 = PlantType::GetProps(pPVar9);
                    if (*(int *)(lVar7 + 0x18) < 0x65) {
                      pPVar9 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                      lVar7 = PlantType::GetProps(pPVar9);
                      if (*(char *)(lVar7 + 0x249) == '\0') {
                        pBVar13 = *(Board **)(gLawnApp + 0x9f0);
                        Sexy::Point::Point((Point *)&local_50,param_1,iVar14);
                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,
                                   (RtWeakPtrBase *)aRStack_70);
                        cVar3 = Board::CanPlantAt(pBVar13,(Point *)&local_50,
                                                  (RtWeakPtr<Sexy::SoundResource> *)local_30);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                        if (cVar3 != '\0') {
                          lVar7 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                          if (lVar7 != 0) {
                            this_00 = (IntroArenaTutorialBattleModule *)
                                      Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                            uVar10 = IntroArenaTutorialBattleModule::getMowerAudio(this_00);
                            FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)local_30,uVar10);
                            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                            cVar3 = (**(code **)(*plVar8 + 0x80))
                                              (plVar8,(RtWeakPtr<Sexy::SoundResource> *)local_30);
                            if (cVar3 == '\0') {
                              std::string::~string((string *)local_30);
                              goto LAB_0377cc68;
                            }
                            std::string::~string((string *)local_30);
                          }
                          local_50 = std::
                                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                              *)(this + 0x78));
                          local_30[0] = std::
                                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                               *)(this + 0x78));
                          while (bVar2 = __gnu_cxx::operator!=
                                                   ((__normal_iterator *)&local_50,
                                                    (__normal_iterator *)local_30), bVar2) {
                            uVar10 = std::__exception_ptr::exception_ptr::_M_get
                                               ((exception_ptr *)&local_50);
                            FUN_05475d88(asStack_58,uVar10);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
                            std::string::~string(asStack_58);
                            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)
                                       &local_50);
                          }
                          std::
                          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                                       *)local_48,(RtWeakPtr *)aRStack_70);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0377cc68:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      cVar3 = std::
              vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
              ::empty((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)local_48);
      if (cVar3 == '\0') {
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_48);
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_48);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                  (uVar10,uVar11);
        pEVar12 = Board::AddEffect<Effect_evolveLight>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::Point::Point((Point *)&local_68,param_1,iVar14);
        std::string::string((string *)&local_60,"grownew");
        pRVar6 = (RtWeakPtrBase *)FUN_037247b8(local_48[0],0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,pRVar6);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
        evolutionaryInformation::evolutionaryInformation
                  ((evolutionaryInformation *)local_30,
                   (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68,
                   (string *)&local_60,(RtWeakPtr<Sexy::SoundResource> *)asStack_58,uVar4,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
        Effect_evolveLight::setevolutionaryInformation(pEVar12,(evolutionaryInformation *)local_30);
        evolutionaryInformation::~evolutionaryInformation((evolutionaryInformation *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        std::string::~string((string *)&local_60);
        nop();
        Sexy::Point::Point((Point *)&local_50,param_1,iVar14);
        std::string::string((string *)local_30,"grownew");
        Effect_evolveLight::playEvolveLight
                  (pEVar12,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_50,(evolutionaryInformation *)local_30);
        std::string::~string((string *)local_30);
        nop();
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)local_48);
      }
    }
    iVar14 = iVar14 + 1;
    if ((param_2 + 2 < iVar14) && (param_1 = param_1 + 1, iVar14 = param_2, iVar1 < param_1)) {
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                 *)local_48);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::RandomlyChooseAHigherCostPlant(int, int, int) */

void ArtifactEvolution::RandomlyChooseAHigherCostPlant(int param_1,int param_2,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  long *plVar7;
  PlantType *pPVar8;
  IntroArenaTutorialBattleModule *this;
  undefined8 uVar9;
  int in_w3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)((ulong)(uint)param_1 + 0x60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar1);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar2) {
      cVar3 = std::
              vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
              ::empty((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)local_20);
      if (cVar3 == '\0') {
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_20);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                  (uVar10,uVar9);
        pRVar5 = (RtWeakPtrBase *)FUN_037247b8(local_20[0],0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar5);
      }
      else {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (in_x8);
      }
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                 *)local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar5);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    bVar2 = std::operator==((string *)(lVar6 + 8),"coffeebean");
    if (!bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      bVar2 = std::operator==((string *)(lVar6 + 8),"pumpkin");
      if (!bVar2) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        bVar2 = std::operator==((string *)(lVar6 + 8),"powervine");
        if (!bVar2) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          bVar2 = std::operator==((string *)(lVar6 + 8),"peavine");
          if (!bVar2) {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            if (*(code **)(*plVar7 + 0xa0) == PlantType::IsVine) {
              cVar3 = PlantType::IsVine();
            }
            else {
              cVar3 = (**(code **)(*plVar7 + 0xa0))();
            }
            if (cVar3 == '\0') {
              pPVar8 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
              cVar3 = PlantType::IsHeroPlant(pPVar8);
              if (cVar3 == '\0') {
                pPVar8 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                lVar6 = PlantType::GetProps(pPVar8);
                if (param_2 < *(int *)(lVar6 + 0x18)) {
                  pPVar8 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                  lVar6 = PlantType::GetProps(pPVar8);
                  if (*(char *)(lVar6 + 0x249) == '\0') {
                    uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
                    Sexy::Point::Point((Point *)&local_30,param_3,in_w3);
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,
                               (RtWeakPtrBase *)aRStack_50);
                    iVar4 = Board::GetCanPlantAtReason
                                      (uVar10,(Point *)&local_30,
                                       (RtWeakPtr<Sexy::SoundResource> *)&local_28,1,0xffffffff);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
                    if (iVar4 == 0) {
                      lVar6 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                      if (lVar6 != 0) {
                        this = (IntroArenaTutorialBattleModule *)
                               Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                        uVar10 = IntroArenaTutorialBattleModule::getMowerAudio(this);
                        FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)&local_28,uVar10);
                        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        cVar3 = (**(code **)(*plVar7 + 0x80))
                                          (plVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
                        std::string::~string((string *)&local_28);
                        if (cVar3 == '\0') goto LAB_0377d12c;
                      }
                      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)((ulong)(uint)param_1 + 0x78);
                      local_30 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::begin(pvVar1);
                      local_28 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::end(pvVar1);
                      while (bVar2 = __gnu_cxx::operator!=
                                               ((__normal_iterator *)&local_30,
                                                (__normal_iterator *)&local_28), bVar2) {
                        uVar10 = std::__exception_ptr::exception_ptr::_M_get
                                           ((exception_ptr *)&local_30);
                        FUN_05475d88(asStack_38,uVar10);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        std::string::~string(asStack_38);
                        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
                      }
                      std::
                      vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                      ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                                   *)local_20,(RtWeakPtr *)aRStack_50);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0377d12c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::EvolutionaryDesignatedPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall
ArtifactEvolution::EvolutionaryDesignatedPlant(int param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar11;
  long *plVar12;
  Effect_evolveLight *pEVar13;
  PlantType *this_00;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  Point aPStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Plant::GetProps();
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  if (*(char *)(lVar10 + 0x249) == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    bVar2 = std::operator==((string *)(lVar10 + 8),"coffeebean");
    if (bVar2) {
      bVar1 = false;
      bVar2 = false;
      bVar4 = true;
      goto LAB_0377d498;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    bVar2 = std::operator==((string *)(lVar10 + 8),"pumpkin");
    if (bVar2) {
      bVar1 = false;
      bVar4 = true;
      bVar2 = true;
      goto LAB_0377d498;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    bVar3 = std::operator==((string *)(lVar10 + 8),"powervine");
    bVar4 = true;
    bVar2 = true;
    bVar1 = true;
    if (bVar3) goto LAB_0377d498;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    bVar4 = std::operator==((string *)(lVar10 + 8),"peavine");
    cVar5 = bVar4;
    if (!bVar4) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      Plant::GetType();
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar5 = (**(code **)(*plVar12 + 0xa0))();
      if (cVar5 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        Plant::GetType();
        this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        cVar5 = PlantType::IsHeroPlant(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      bVar4 = true;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    bVar2 = false;
    bVar3 = bVar4;
    if (bVar4 == false) goto joined_r0x0377d49c;
  }
  else {
    bVar1 = false;
    bVar2 = false;
    bVar4 = false;
LAB_0377d498:
    cVar5 = '\x01';
    bVar3 = bVar2;
    if (!bVar1) goto joined_r0x0377d49c;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  bVar2 = bVar3;
joined_r0x0377d49c:
  if (bVar2 != false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  if (bVar4 == false) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (cVar5 == '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    pfVar11 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this);
    fVar14 = pfVar11[1];
    iVar6 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar11);
    iVar7 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar14);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    iVar8 = (**(code **)(*plVar12 + 0x70))(plVar12,0xfffffffe);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar9 = FUN_03723b28(*(undefined4 *)(lVar10 + 0x50));
    RandomlyChooseAHigherCostPlant(param_1,iVar8,iVar6);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    if (bVar2) {
      pEVar13 = Board::AddEffect<Effect_evolveLight>(*(Board **)(gLawnApp + 0x9f0));
      Sexy::Point::Point(aPStack_50,iVar6,iVar7);
      std::string::string(asStack_48,"loop");
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)param_2);
      evolutionaryInformation::evolutionaryInformation
                ((evolutionaryInformation *)aRStack_30,aPStack_50,asStack_48,aRStack_40,uVar9,
                 aRStack_38);
      Effect_evolveLight::setevolutionaryInformation(pEVar13,aRStack_30);
      evolutionaryInformation::~evolutionaryInformation((evolutionaryInformation *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      std::string::~string(asStack_48);
      nop();
      Sexy::Point::Point((Point *)aRStack_38,iVar6,iVar7);
      std::string::string((string *)aRStack_30,"loop");
      Effect_evolveLight::playEvolveLight(pEVar13,aRStack_38,aRStack_30);
      std::string::~string((string *)aRStack_30);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::GroupPlantEvolution(int, int) */

void __thiscall
ArtifactEvolution::GroupPlantEvolution(ArtifactEvolution *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  Sexy::Insets::Insets((Insets *)&local_20,param_1,param_2,3,3);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,1,(Insets *)&local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((pPVar4 != (Plant *)0x0) && (cVar1 = Plant::HasCondition(pPVar4,2), cVar1 == '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      EvolutionaryDesignatedPlant(this,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactEvolution::AutoClick(int) */

void ArtifactEvolution::AutoClick(int param_1)

{
  char cVar1;
  ArtifactEvolution *this;
  long lVar2;
  
  this = (ArtifactEvolution *)(ulong)(uint)param_1;
  if ((this[0x40] == (ArtifactEvolution)0x0) &&
     (lVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr(), lVar2 != 0)) {
    GroupPlantEvolution(this,2,0);
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar1 != '\0') {
      AutogenousPlants(this,2,0);
    }
    this[0x40] = (ArtifactEvolution)0x1;
    return;
  }
  return;
}


/* ArtifactEvolution::Activate() */

void __thiscall ArtifactEvolution::Activate(ArtifactEvolution *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x30) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0xa4) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0xa4) = *(float *)(this + 0xa4) - fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(undefined4 *)(this + 0xa8) = uVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 0xac) = uVar5;
  if (*(float *)(this + 0xa4) <= 0.0) {
    uVar5 = PVZ_EOT();
    this[0xb0] = (ArtifactEvolution)0x0;
    *(undefined4 *)(this + 0xa0) = uVar5;
    return;
  }
  fVar3 = (float)PVZ_T();
  this[0xb0] = (ArtifactEvolution)0x0;
  *(float *)(this + 0xa0) = fVar3 + *(float *)(this + 0xa4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::DoTrigger() */

void __thiscall ArtifactEvolution::DoTrigger(ArtifactEvolution *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long extraout_x0;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if ((lVar4 != 0) && (this[0x40] == (ArtifactEvolution)0x0)) {
    iVar1 = *(int *)(lVar4 + 0x1c);
    iVar2 = *(int *)(lVar4 + 0x18) + -1;
    EntityComponent_GroundEffect::GetEffect();
    iVar1 = iVar1 + -1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50,
               (vector *)(extraout_x0 + 0x150));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    lVar4 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (lVar4 != 0) {
      Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      SeedBankNew::GetBlacklist();
      std::vector<std::string,std::allocator<std::string>>::operator=
                ((vector<std::string,std::allocator<std::string>> *)&local_38,(vector *)aRStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)aRStack_20);
    }
    lVar4 = FUN_0372476c(local_50,local_48);
    lVar5 = FUN_0372476c(local_38,local_30);
    std::vector<std::string,std::allocator<std::string>>::resize
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x78),lVar5 + lVar4);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_50);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x78));
    std::
    merge<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
              (uVar6,uVar7,uVar8,uVar9,uVar10);
    GroupPlantEvolution(this,iVar2,iVar1);
    pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar11,"Play_drop");
    cVar3 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar3 != '\0') {
      AutogenousPlants(this,iVar2,iVar1);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_38);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::AddAPlant() */

void __thiscall ArtifactEvolution::AddAPlant(ArtifactEvolution *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long extraout_x0;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  RtWeakPtrBase *pRVar15;
  long *plVar16;
  PlantType *pPVar17;
  IntroArenaTutorialBattleModule *this_01;
  LightningBoltToGround *this_02;
  Effect_evolveLight *pEVar18;
  Board *pBVar19;
  Point aPStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48 [3];
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = findLowestLevelInTeamSeeds();
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_78,
             (vector *)(extraout_x0 + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
  lVar8 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (lVar8 != 0) {
    Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    SeedBankNew::GetBlacklist();
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)&local_60,(vector *)local_30);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_30);
  }
  iVar7 = 200;
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x78);
  lVar8 = FUN_0372476c(local_78,local_70);
  lVar9 = FUN_0372476c(local_60,local_58);
  std::vector<std::string,std::allocator<std::string>>::resize(this_00,lVar9 + lVar8);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_78);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_78);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_60);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_60);
  uVar14 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  std::
  merge<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar10,uVar11,uVar12,uVar13,uVar14);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_48);
  do {
    iVar4 = RandRangeInt(0,8);
    iVar5 = RandRangeInt(0,4);
    if ((((-1 < iVar4) && (iVar4 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8))) && (-1 < iVar5))
       && (iVar6 = BoardConstants::NUMBER_OF_ROWS(), iVar5 < iVar6)) {
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x60));
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x60));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar1) {
        pRVar15 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,pRVar15);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        bVar1 = std::operator==((string *)(lVar8 + 8),"coffeebean");
        if (!bVar1) {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          bVar1 = std::operator==((string *)(lVar8 + 8),"pumpkin");
          if (!bVar1) {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
            bVar1 = std::operator==((string *)(lVar8 + 8),"powervine");
            if (!bVar1) {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
              bVar1 = std::operator==((string *)(lVar8 + 8),"peavine");
              if (!bVar1) {
                plVar16 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                if (*(code **)(*plVar16 + 0xa0) == PlantType::IsVine) {
                  cVar2 = PlantType::IsVine();
                }
                else {
                  cVar2 = (**(code **)(*plVar16 + 0xa0))();
                }
                if (cVar2 == '\0') {
                  pPVar17 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                  cVar2 = PlantType::IsHeroPlant(pPVar17);
                  if (cVar2 == '\0') {
                    pPVar17 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                    lVar8 = PlantType::GetProps(pPVar17);
                    if (*(int *)(lVar8 + 0x18) < 0x65) {
                      pPVar17 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                      lVar8 = PlantType::GetProps(pPVar17);
                      if (*(char *)(lVar8 + 0x249) == '\0') {
                        pBVar19 = *(Board **)(gLawnApp + 0x9f0);
                        Sexy::Point::Point((Point *)&local_88,iVar4,iVar5);
                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,
                                   (RtWeakPtrBase *)aRStack_b0);
                        cVar2 = Board::CanPlantAt(pBVar19,(Point *)&local_88,
                                                  (RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                        if (cVar2 != '\0') {
                          lVar8 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                          if (lVar8 != 0) {
                            this_01 = (IntroArenaTutorialBattleModule *)
                                      Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                            uVar10 = IntroArenaTutorialBattleModule::getMowerAudio(this_01);
                            FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_30,uVar10);
                            plVar16 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                            cVar2 = (**(code **)(*plVar16 + 0x80))
                                              (plVar16,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                            std::string::~string((string *)local_30);
                            if (cVar2 == '\0') goto LAB_03789780;
                          }
                          local_88 = std::
                                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                              *)this_00);
                          local_30[0] = std::
                                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                               *)this_00);
                          while (bVar1 = __gnu_cxx::operator!=
                                                   ((__normal_iterator *)&local_88,
                                                    (__normal_iterator *)local_30), bVar1) {
                            uVar10 = std::__exception_ptr::exception_ptr::_M_get
                                               ((exception_ptr *)&local_88);
                            FUN_05475d88(asStack_98,uVar10);
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
                            std::string::~string(asStack_98);
                            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)
                                       &local_88);
                          }
                          std::
                          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                                       *)local_48,(RtWeakPtr *)aRStack_b0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_03789780:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      cVar2 = std::
              vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
              ::empty((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)local_48);
      if (cVar2 == '\0') {
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_98,200.0,300.0,0.0);
        this_02 = GameObject::Create<LightningBoltToGround>();
        std::string::string((string *)&local_a0,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
        std::string::string((string *)&local_88,"");
        std::string::string((string *)local_30,"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
        LightningBolt::SetPopAnim
                  ((LightningBolt *)this_02,(string *)&local_a0,(string *)&local_88,
                   (string *)local_30);
        std::string::~string((string *)local_30);
        nop();
        std::string::~string((string *)&local_88);
        nop();
        std::string::~string((string *)&local_a0);
        nop();
        FUN_03726df0(this_02 + 0x118);
        FUN_03726ddc(this_02 + 0x11c,this_02 + 0x120);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_88);
        TwinsAssistPerson::SetOwner
                  ((TwinsAssistPerson *)this_02,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
        iVar7 = BoardTransforms::GridToBoardSpaceX(iVar4);
        iVar6 = BoardTransforms::GridToBoardSpaceX(iVar5);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_88,(float)iVar7,(float)iVar6,0.0);
        LightningBoltToGround::SetInitialTarget
                  ((undefined4)local_88,local_88._4_4_,local_80,this_02);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_48);
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_48);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                  (uVar10,uVar11);
        pEVar18 = Board::AddEffect<Effect_evolveLight>(*(Board **)(gLawnApp + 0x9f0));
        Sexy::Point::Point(aPStack_b8,iVar4,iVar5);
        std::string::string((string *)aRStack_b0,"grownew");
        pRVar15 = (RtWeakPtrBase *)FUN_037247b8(local_48[0],0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_a8,pRVar15);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_a0);
        evolutionaryInformation::evolutionaryInformation
                  ((evolutionaryInformation *)local_30,aPStack_b8,(string *)aRStack_b0,
                   (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8,uVar3,
                   (string *)&local_a0);
        Effect_evolveLight::setevolutionaryInformation
                  (pEVar18,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        evolutionaryInformation::~evolutionaryInformation((evolutionaryInformation *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
        std::string::~string((string *)aRStack_b0);
        nop();
        Sexy::Point::Point((Point *)&local_a0,iVar4,iVar5);
        std::string::string((string *)local_30,"grownew");
        Effect_evolveLight::playEvolveLight
                  (pEVar18,(string *)&local_a0,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        std::string::~string((string *)local_30);
        nop();
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)local_48);
        goto LAB_03789c60;
      }
    }
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
LAB_03789c60:
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                 *)local_48);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_60);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_78);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* ArtifactEvolution::UpdatePassiveEvolution() */

void __thiscall ArtifactEvolution::UpdatePassiveEvolution(ArtifactEvolution *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0xa0)) {
    return;
  }
  *(float *)(this + 0xa0) = *(float *)(this + 0xa4) + *(float *)(this + 0xa0);
  AddAPlant(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactEvolution::Update() */

void __thiscall ArtifactEvolution::Update(ArtifactEvolution *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  PopAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x48);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      this_01 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      fVar6 = (float)PVZ_T();
      fVar5 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_01,fVar6,fVar5);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x9c) < fVar6) {
      uVar7 = PVZ_EOT();
      *(undefined4 *)(this + 0x9c) = uVar7;
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        (**(code **)(*plVar4 + 0x48))();
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      std::vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>>::clear
                ((vector<Sexy::RtWeakPtr<PopAnimRig>,std::allocator<Sexy::RtWeakPtr<PopAnimRig>>> *)
                 this_00);
    }
    UpdatePassiveEvolution(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

