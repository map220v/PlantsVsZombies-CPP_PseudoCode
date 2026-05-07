// Class: AcidCursor


/* AcidCursor::StaticGetClass() */

long * AcidCursor::StaticGetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"AcidCursor",uVar2,StaticNew);
  return sClass;
}


/* AcidCursor::GetClass() const */

long * AcidCursor::GetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"AcidCursor",uVar2,StaticNew);
  return sClass;
}


/* AcidCursor::~AcidCursor() */

void __thiscall AcidCursor::~AcidCursor(AcidCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e710;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* AcidCursor::~AcidCursor() */

void __thiscall AcidCursor::~AcidCursor(AcidCursor *this)

{
  ~AcidCursor(this);
  AK::FreeHook(this);
  return;
}


/* AcidCursor::AcidCursor() */

void __thiscall AcidCursor::AcidCursor(AcidCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0668e710;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* AcidCursor::StaticNew() */

AcidCursor * AcidCursor::StaticNew(void)

{
  AcidCursor *this;
  
  this = ::operator_new(0x50);
  AcidCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcidCursor::tryToUse() */

void __thiscall AcidCursor::tryToUse(AcidCursor *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  RtObject *this_00;
  GridItemAcid *this_01;
  undefined8 *puVar7;
  ArtifactMgr *this_02;
  Board *pBVar8;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_40);
  if (local_40 < 0) {
LAB_03763244:
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  }
  else {
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    if ((local_40 < *(int *)(pBVar8 + 0xf8)) && (-1 < local_3c)) {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (local_3c < iVar3) {
        pBVar8 = (Board *)0x0;
        if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
          plVar5 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
          if (*(code **)(*plVar5 + 0xb8) == StageModule::CanGraveStoneSpawnAt) {
            cVar1 = StageModule::CanGraveStoneSpawnAt((int)plVar5,local_40);
          }
          else {
            cVar1 = (**(code **)(*plVar5 + 0xb8))(plVar5,local_40,local_3c);
          }
          if (cVar1 == '\0') {
            pBVar8 = *(Board **)(gLawnApp + 0x9f0);
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_30);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)local_30);
            Board::GiveAdvice(pBVar8,local_40,local_3c,(RtWeakPtr<Sexy::SoundResource> *)&local_20,
                              0x78);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            goto LAB_03763290;
          }
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        }
        lVar6 = Board::GetStage(pBVar8);
        if (lVar6 != 0) {
          this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
          bVar2 = Sexy::RtObject::IsA<PirateStage>(this_00);
          if ((bVar2) && (4 < local_40)) {
            pBVar8 = *(Board **)(gLawnApp + 0x9f0);
            goto LAB_03763258;
          }
        }
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_20,"acid");
        lVar6 = Board::GetGridItemAt(pBVar8,(string *)&local_20,local_40,local_3c);
        std::string::~string((string *)&local_20);
        nop();
        if (lVar6 != 0) {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_20,"acid");
          Board::GetGridItemAt(pBVar8,(string *)&local_20,local_40,local_3c);
          nop();
          std::string::~string((string *)&local_20);
          nop();
          if (this_01 != (GridItemAcid *)0x0) {
            cVar1 = GridItemAcid::IsDevouring(this_01);
            if (cVar1 == '\0') {
              MessageRouter::Post<int,int,bool,int,int,bool>
                        ((MessageRouter *)gMessageRouter,Message::NotifyAcidReturn,local_40,local_3c
                         ,false);
            }
            goto LAB_03763290;
          }
        }
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),local_40,local_3c,(vector *)&local_20);
        lVar6 = FUN_037246fc(local_20,local_18);
        if (lVar6 == 0) {
LAB_037633bc:
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          Sexy::Point::Point((Point *)&local_38,local_40,local_3c);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)(this + 0x48));
          cVar1 = Board::CanPlantAt(pBVar8,(Point *)&local_38,
                                    (RtWeakPtr<Sexy::SoundResource> *)local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          if (cVar1 == '\0') {
            pBVar8 = *(Board **)(gLawnApp + 0x9f0);
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
            Board::GiveAdvice(pBVar8,local_40,local_3c,(RtWeakPtr<Sexy::SoundResource> *)local_30,
                              0x78);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          }
          else {
            this_02 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
            if (this_02 != (ArtifactMgr *)0x0) {
              BaseCursor::GetBoardPosition();
              Board::GetGridBoundingRect();
              cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)local_30,(TPoint *)&local_38);
              if (cVar1 != '\0') {
                iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
                iVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
                if (iVar3 < iVar4) {
                  MessageRouter::Post<int,int,int,int>
                            ((MessageRouter *)gMessageRouter,Message::NotifyAcidCursor,local_40,
                             local_3c);
                  ArtifactMgr::RequestTriggerArtifact(this_02);
                }
              }
            }
          }
        }
        else {
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
          local_30[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)&local_20);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_38,(__normal_iterator *)local_30),
                bVar2) {
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
            bVar2 = Sexy::RtObject::IsA<GridItemScoreTile>((RtObject *)*puVar7);
            if (bVar2) goto LAB_037633bc;
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
          }
        }
        std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                  ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
        goto LAB_03763290;
      }
      goto LAB_03763244;
    }
  }
LAB_03763258:
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)local_30);
  Board::GiveAdvice(pBVar8,local_40,local_3c,(RtWeakPtr<Sexy::SoundResource> *)&local_20,0x78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
LAB_03763290:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AcidCursor::AcidCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall AcidCursor::AcidCursor(AcidCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  string *psVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  *(undefined ***)this = &PTR_GetClass_0668e710;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aRStack_48,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string((string *)aRStack_48);
  nop();
  std::string::string((string *)aRStack_48,"POPANIM_EFFECTS_ARTIFACT_STANDARD_RETICLE");
  GetPAMByName((string *)aRStack_48);
  std::string::~string((string *)aRStack_48);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  std::string::string((string *)aRStack_48,"beans_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_48,0,aDStack_38);
  std::string::~string((string *)aRStack_48);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
  Sexy::Insets::Insets((Insets *)aRStack_48);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

