// Class: ArtifactBlackholeCursor


/* ArtifactBlackholeCursor::StaticGetClass() */

long * ArtifactBlackholeCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackholeCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactBlackholeCursor::GetClass() const */

long * ArtifactBlackholeCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackholeCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactBlackholeCursor::~ArtifactBlackholeCursor() */

void __thiscall ArtifactBlackholeCursor::~ArtifactBlackholeCursor(ArtifactBlackholeCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0698c5a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArtifactBlackholeCursor::~ArtifactBlackholeCursor() */

void __thiscall ArtifactBlackholeCursor::~ArtifactBlackholeCursor(ArtifactBlackholeCursor *this)

{
  ~ArtifactBlackholeCursor(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactBlackholeCursor::ArtifactBlackholeCursor() */

void __thiscall ArtifactBlackholeCursor::ArtifactBlackholeCursor(ArtifactBlackholeCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0698c5a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ArtifactBlackholeCursor::StaticNew() */

ArtifactBlackholeCursor * ArtifactBlackholeCursor::StaticNew(void)

{
  ArtifactBlackholeCursor *this;
  
  this = ::operator_new(0x50);
  ArtifactBlackholeCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackholeCursor::tryToUse() */

void __thiscall ArtifactBlackholeCursor::tryToUse(ArtifactBlackholeCursor *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ArtifactMgr *this_00;
  Board *pBVar4;
  int local_28;
  int local_24;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_28);
  if (local_28 < 0) {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  }
  else {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    if ((local_28 < *(int *)(pBVar4 + 0xf8)) && (-1 < local_24)) {
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (local_24 < iVar2) {
        pBVar4 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aRStack_18,"griditem_artifact_blackhole");
        lVar3 = Board::GetGridItemAt(pBVar4,(string *)aRStack_18,local_28,local_24);
        std::string::~string((string *)aRStack_18);
        nop();
        if (lVar3 == 0) {
          pBVar4 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_18,"griditem_artifact_blackhole_tile");
          lVar3 = Board::GetGridItemAt(pBVar4,(string *)aRStack_18,local_28,local_24);
          std::string::~string((string *)aRStack_18);
          nop();
          if ((lVar3 == 0) &&
             (this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr(),
             this_00 != (ArtifactMgr *)0x0)) {
            BaseCursor::GetBoardPosition();
            Board::GetGridBoundingRect();
            cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_18,(TPoint *)a_Stack_20);
            if (cVar1 != '\0') {
              *(int *)(this_00 + 0x18) = local_28;
              *(int *)(this_00 + 0x1c) = local_24;
              ArtifactMgr::RequestTriggerArtifact(this_00);
            }
          }
        }
        goto LAB_04c58bd4;
      }
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)a_Stack_20);
  Board::GiveAdvice(pBVar4,local_28,local_24,aRStack_18,0x76);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
LAB_04c58bd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackholeCursor::ArtifactBlackholeCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>)
    */

void __thiscall
ArtifactBlackholeCursor::ArtifactBlackholeCursor
          (ArtifactBlackholeCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

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
  *(undefined ***)this = &PTR_GetClass_0698c5a0;
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

