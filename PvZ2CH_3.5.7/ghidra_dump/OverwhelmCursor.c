// Class: OverwhelmCursor


/* OverwhelmCursor::GetPlantAnimRig() */

vector<PlantAnimRig*,std::allocator<PlantAnimRig*>> * OverwhelmCursor::GetPlantAnimRig(void)

{
  long in_x0;
  vector<PlantAnimRig*,std::allocator<PlantAnimRig*>> *in_x8;
  
  std::vector<PlantAnimRig*,std::allocator<PlantAnimRig*>>::vector(in_x8,(vector *)(in_x0 + 0x58));
  return in_x8;
}


/* OverwhelmCursor::StaticGetClass() */

long * OverwhelmCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OverwhelmCursor",uVar2,StaticNew);
  return sClass;
}


/* OverwhelmCursor::GetClass() const */

long * OverwhelmCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"OverwhelmCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::onUpdate() */

void __thiscall OverwhelmCursor::onUpdate(OverwhelmCursor *this)

{
  bool bVar1;
  undefined8 *puVar2;
  PopAnimRig *this_00;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x58));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x58));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (PopAnimRig *)*puVar2;
    if (this_00 != (PopAnimRig *)0x0) {
      fVar3 = (float)PVZ_T();
      fVar4 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OverwhelmCursor::OverwhelmCursor() */

void __thiscall OverwhelmCursor::OverwhelmCursor(OverwhelmCursor *this)

{
  PlantCursor::PlantCursor((PlantCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


/* OverwhelmCursor::StaticNew() */

OverwhelmCursor * OverwhelmCursor::StaticNew(void)

{
  OverwhelmCursor *this;
  
  this = ::operator_new(0x78);
  OverwhelmCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::~OverwhelmCursor() */

void __thiscall OverwhelmCursor::~OverwhelmCursor(OverwhelmCursor *this)

{
  bool bVar1;
  long *plVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x58);
  *(undefined ***)this = &PTR_GetClass_067a1fe0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<PlantAnimRig*,std::allocator<PlantAnimRig*>>::~vector
            ((vector<PlantAnimRig*,std::allocator<PlantAnimRig*>> *)this_00);
  PlantCursor::~PlantCursor((PlantCursor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OverwhelmCursor::~OverwhelmCursor() */

void __thiscall OverwhelmCursor::~OverwhelmCursor(OverwhelmCursor *this)

{
  ~OverwhelmCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::tryToPlantAt(int, int) */

void __thiscall OverwhelmCursor::tryToPlantAt(OverwhelmCursor *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_01;
  RtObject *pRVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03f6c4d8(this[0x50]);
  if (cVar1 == '\0') {
    cVar1 = FUN_03f6c4d4(this[0x51]);
    iVar3 = 0;
    if (cVar1 == '\0') {
      ArtifactEvolutionCursor::GetPlantType();
      iVar3 = PlantCursor::payForPlant((PlantCursor *)this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    this_00 = (RtWeakPtr *)(this + 0x40);
    this_01 = (Plant *)PlantCursor::tryReplaceExistingPlantAt((PlantCursor *)this,param_1,param_2);
    if (this_01 == (Plant *)0x0) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      iVar4 = 1;
      if (bVar2) {
        pRVar5 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
        if (((pRVar5 == (RtObject *)0x0) ||
            (((bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar5), !bVar2 &&
              (iVar4 = FUN_03f6c4dc(*(undefined4 *)(pRVar5 + 0x1e8)), iVar4 == -1)) &&
             (bVar2 = Sexy::RtObject::IsA<RiftSeedBank>(pRVar5), !bVar2)))) ||
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 == '\0')) {
          iVar4 = 1;
        }
        else {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar4 = FUN_03f6c4cc(*(undefined4 *)(lVar6 + 0x1cc));
        }
      }
      this_01 = (Plant *)PlantCursor::tryMakeNewPlantAt((PlantCursor *)this,param_1,param_2,iVar4);
      if (this_01 == (Plant *)0x0) {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar2) {
          Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
        }
        goto LAB_03f6d0b8;
      }
      Plant::PlantReturnSun(this_01,iVar3);
      MessageRouter::Broadcast<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantPlanted,this_01);
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (((bVar2) &&
        (pRVar5 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
        pRVar5 != (RtObject *)0x0)) &&
       ((bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar5), bVar2 &&
        (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 != '\0')))) {
      *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = FUN_03f6c4d0(*(undefined4 *)(lVar6 + 0x1d0));
      Plant::SetPlantAvatarValue(this_01,iVar3);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = FUN_03f6c4cc(*(undefined4 *)(lVar6 + 0x1cc));
      Plant::SetPlantLevelValue(this_01,iVar3);
    }
  }
LAB_03f6d0b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::tryToUse() */

void __thiscall OverwhelmCursor::tryToUse(OverwhelmCursor *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  GridItemWizardCrucible *pGVar7;
  char *pcVar8;
  int iVar9;
  Board *pBVar10;
  LawnApp *pLVar11;
  undefined8 uVar12;
  code *pcVar13;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int local_20 [2];
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  (**(code **)(*(long *)this + 0x80))(local_20);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar4) {
    do {
      cVar2 = BoardTransforms::IsGridCoordinateOnBoard(local_20[0],iVar9);
      pLVar11 = gLawnApp;
      if (cVar2 == '\0') {
        pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar8,"Play_drop");
        goto LAB_03f6d620;
      }
      cVar2 = LawnApp::IsInModule(gLawnApp,4);
      if (cVar2 != '\0') {
        pBVar10 = *(Board **)(pLVar11 + 0x9f0);
        std::string::string(asStack_10,"BesiegeBox");
        lVar6 = Board::GetGridItemAt(pBVar10,asStack_10,local_20[0],iVar9);
        std::string::~string(asStack_10);
        nop();
        pLVar11 = gLawnApp;
        if (lVar6 == 0) {
          pBVar10 = *(Board **)(gLawnApp + 0x9f0);
          ArtifactEvolutionCursor::GetPlantType();
          Board::GiveAdvice(pBVar10,local_20[0],iVar9,asStack_10,0x48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          goto LAB_03f6d620;
        }
      }
      uVar12 = *(undefined8 *)(pLVar11 + 0x9f0);
      Sexy::Point::Point(aPStack_18,local_20[0],iVar9);
      ArtifactEvolutionCursor::GetPlantType();
      iVar4 = Board::GetCanPlantAtReason(uVar12,aPStack_18,asStack_10,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      ArtifactEvolutionCursor::GetPlantType();
      Board::GiveAdvice(pBVar10,local_20[0],iVar9,asStack_10,iVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (iVar4 == 0) {
        Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
        pcVar13 = *(code **)(*(long *)this + 0x98);
        ArtifactEvolutionCursor::GetPlantType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        uVar5 = FUN_03f6c4cc(*(undefined4 *)(lVar6 + 0x1cc));
        cVar2 = (*pcVar13)(this,asStack_10,uVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        if (cVar2 != '\0') {
          tryToPlantAt(this,local_20[0],iVar9);
        }
      }
      pGVar7 = (GridItemWizardCrucible *)FUN_03f6d370(local_20[0],iVar9);
      if (pGVar7 != (GridItemWizardCrucible *)0x0) {
        PlantTwinsHoneySuckle::GetAssistPerson();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aPStack_18);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
        }
        else {
          pcVar13 = *(code **)(*(long *)this + 0x98);
          ArtifactEvolutionCursor::GetPlantType();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          uVar5 = FUN_03f6c4cc(*(undefined4 *)(lVar6 + 0x1cc));
          cVar2 = (*pcVar13)(this,asStack_10,uVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
          if (cVar2 != '\0') {
            ArtifactEvolutionCursor::GetPlantType();
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
            FUN_05475d88(asStack_10,lVar6 + 8);
            cVar2 = GridItemWizardCrucible::tryToTrigger(pGVar7,asStack_10);
            std::string::~string(asStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
            if (cVar2 != '\0') {
              cVar2 = FUN_03f6c4d4(this[0x51]);
              if (cVar2 == '\0') {
                ArtifactEvolutionCursor::GetPlantType();
                PlantCursor::payForPlant((PlantCursor *)this,asStack_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
              }
              bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
              puVar1 = gMessageRouter;
              if (bVar3) {
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
                MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                          ((MessageRouter *)puVar1,Message::SeedPacketPlanted,asStack_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
              }
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar9 < iVar4);
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if ((bVar3) && (*(int *)(this + 0x70) != 0)) {
    Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x40));
    MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
              ((MessageRouter *)puVar1,Message::SeedPacketPlanted,
               (RtWeakPtr<Sexy::SoundResource> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
LAB_03f6d620:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::createCacheAnim() */

void __thiscall OverwhelmCursor::createCacheAnim(OverwhelmCursor *this)

{
  PlantAnimRig *pPVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  string *psVar5;
  long lVar6;
  int iVar7;
  PlantAnimRig *local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar7 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar7 < iVar3; iVar7 = iVar7 + 1) {
    ArtifactEvolutionCursor::GetPlantType();
    local_18 = (PlantAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = CustomLevelUtils::IsCustomLevel();
    if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
      psVar5 = (string *)ProfileUtils::Profile();
      ArtifactEvolutionCursor::GetPlantType();
      cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar4 = PlayerInfo::GetPlantAvatar(psVar5,(bool)(cVar2 + '\b'));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar1 = local_18;
      ArtifactEvolutionCursor::GetPlantType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      iVar3 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar6 + 8));
      PlantAnimRig::SetAvatarIndex(pPVar1,iVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pPVar1 = local_18;
      ArtifactEvolutionCursor::GetPlantType();
      PlantAnimRig::ShowAvatarLayers(pPVar1,aRStack_10,uVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      PlantAnimRig::HideAllAvatarLayers(local_18);
    }
    (**(code **)(*(long *)local_18 + 0x1a0))(local_18,0);
    std::vector<PlantAnimRig*,std::allocator<PlantAnimRig*>>::push_back
              ((vector<PlantAnimRig*,std::allocator<PlantAnimRig*>> *)(this + 0x58),&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::OverwhelmCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>, int) */

void __thiscall
OverwhelmCursor::OverwhelmCursor
          (OverwhelmCursor *this,undefined8 param_1,RtWeakPtrBase *param_3,undefined8 param_4)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  PlantCursor::PlantCursor((PlantCursor *)this,param_1,aRStack_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined ***)this = &PTR_GetClass_067a1fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x70) = 0;
  createCacheAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OverwhelmCursor::OverwhelmCursor(Sexy::Touch const&, Sexy::RtWeakPtr<PlantType const>,
   Sexy::TRect<int>, bool, int) */

void __thiscall
OverwhelmCursor::OverwhelmCursor
          (OverwhelmCursor *this,undefined8 param_1,RtWeakPtrBase *param_3,Insets *param_4,
          undefined1 param_5,undefined8 param_6)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_3);
  Sexy::Insets::Insets(aIStack_18,param_4);
  PlantCursor::PlantCursor((PlantCursor *)this,param_1,aRStack_20,aIStack_18,param_5,param_6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  *(undefined ***)this = &PTR_GetClass_067a1fe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x70) = 0;
  createCacheAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

