// Class: PlantCursor


/* PlantCursor::PlantCursor() */

void __thiscall PlantCursor::PlantCursor(PlantCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a21f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (PlantCursor)0x0;
  this[0x51] = (PlantCursor)0x0;
  this[0x52] = (PlantCursor)0x0;
  return;
}


/* PlantCursor::StaticGetClass() */

long * PlantCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCursor",uVar2,StaticNew);
  return sClass;
}


/* PlantCursor::GetClass() const */

long * PlantCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::makeNewPlantAt(Sexy::RtWeakPtr<PlantType const>, int, int, int, bool) */

void __thiscall
PlantCursor::makeNewPlantAt
          (undefined8 param_1,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = Board::AddPlant((Board *)0x0,uVar1,param_3,param_4,aRStack_10,1,1,param_5,param_6,1,1,0,0,
                          0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantCursor::StaticNew() */

PlantCursor * PlantCursor::StaticNew(void)

{
  PlantCursor *this;
  
  this = ::operator_new(0x58);
  PlantCursor(this);
  return this;
}


/* PlantCursor::canAffordPlant(Sexy::RtWeakPtr<PlantType const>, int) const */

undefined8 PlantCursor::canAffordPlant(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,0xfffffffe);
    cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if ((cVar1 != '\0') ||
       ((cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar1 != '\0' &&
        (iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar3 == 0)))) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,1);
    }
    if (0 < iVar2) {
      uVar5 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar2);
      return uVar5;
    }
  }
  return 1;
}


/* PlantCursor::payForPlant(Sexy::RtWeakPtr<PlantType const>) */

int __thiscall PlantCursor::payForPlant(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,0xfffffffe);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar1 == '\0') &&
     ((cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar1 == '\0' ||
      (iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar3 != 0)))) {
    cVar1 = CopycatsUtils::IsPlayingCopycats();
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,1);
    cVar1 = CopycatsUtils::IsPlayingCopycats();
  }
  if (cVar1 != '\0') {
    cVar1 = CustomLevelUtils::IsCustomLevel();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (iVar2 < 1) {
    return iVar2;
  }
  Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar2,false,false);
  return iVar2;
}


/* PlantCursor::~PlantCursor() */

void __thiscall PlantCursor::~PlantCursor(PlantCursor *this)

{
  bool bVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_GetClass_067a21f0;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  bVar1 = std::operator==("cobcannon",(string *)(lVar2 + 8));
  if (bVar1) {
    Board::SetNeedShineKernelpult(*(Board **)(gLawnApp + 0x9f0),false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* PlantCursor::~PlantCursor() */

void __thiscall PlantCursor::~PlantCursor(PlantCursor *this)

{
  ~PlantCursor(this);
  AK::FreeHook(this);
  return;
}


/* PlantCursor::IsInsideOriginRect() const */

undefined8 __thiscall PlantCursor::IsInsideOriginRect(PlantCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_03f6dd58(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_03f6e16c(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_03f6dd48(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::shouldInitializeToFreePlanting() const */

void PlantCursor::shouldInitializeToFreePlanting(void)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  wchar16 *pwVar6;
  SeedPacket *pSVar7;
  RtObject *this_00;
  PVPManager *this_01;
  ArtifactMgr *this_02;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03f6e160(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar5 != 0) goto LAB_03f6e230;
  pLVar8 = aLStack_18;
  lVar5 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar6,(wchar16 *)asStack_10,pLVar8,in_x3,in_x4);
  if (((lVar5 == 0) || (cVar1 != '\0')) ||
     (iVar4 = FUN_03f6dd60(*(undefined4 *)(lVar5 + 0x19c)), iVar4 != 0)) {
LAB_03f6e2b4:
    uVar3 = 1;
  }
  else {
    this = (RtWeakPtr *)(in_x0 + 0x40);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::GetIsPlantTrialForFree(pSVar7);
      if (cVar1 != '\0') goto LAB_03f6e2b4;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      bVar2 = Sexy::RtObject::IsA<SeedPacket_DangerRoomTraining>(this_00);
      if (bVar2) goto LAB_03f6e2b4;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::IsFreePlant(pSVar7);
      if (cVar1 != '\0') goto LAB_03f6e2b4;
    }
    this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar1 = PVPManager::IsInPVPMap(this_01);
    if (cVar1 != '\0') goto LAB_03f6e2b4;
    this_02 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar3 = ArtifactMgr::CanFreePlanting(this_02);
  }
  std::string::~string(asStack_10);
  nop();
LAB_03f6e230:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::PlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>, int) */

void __thiscall
PlantCursor::PlantCursor
          (PlantCursor *this,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3,
          undefined4 param_4)

{
  char cVar1;
  PlantCursor PVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  PlantAnimRig *this_00;
  string *psVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a21f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  this[0x50] = (PlantCursor)0x0;
  this[0x51] = (PlantCursor)0x0;
  this[0x52] = (PlantCursor)0x0;
  cVar1 = shouldInitializeToFreePlanting();
  PVar2 = (PlantCursor)0x0;
  if (cVar1 != '\0') {
    bVar4 = RiftUtils::IsRiftTimedLevel();
    PVar2 = (PlantCursor)(bVar4 ^ 1);
  }
  this[0x51] = PVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  SeedPacket::GetPlantType();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PVar2 = (PlantCursor)FUN_03f6dd54(*(undefined1 *)(lVar7 + 0x1a8));
  *(undefined4 *)(this + 0x54) = param_4;
  this[0x52] = PVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_01);
  this_00 = (PlantAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
    psVar8 = (string *)ProfileUtils::Profile();
    cVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    uVar5 = PlayerInfo::GetPlantAvatar(psVar8,(bool)(cVar1 + '\b'));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    iVar6 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar7 + 8));
    PlantAnimRig::SetAvatarIndex(this_00,iVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_01);
    PlantAnimRig::ShowAvatarLayers(this_00,aRStack_10,uVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    PlantAnimRig::HideAllAvatarLayers(this_00);
  }
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
  BaseCursor::setAnimRig((BaseCursor *)this,(PopAnimRig *)this_00);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  bVar3 = std::operator==("cobcannon",(string *)(lVar7 + 8));
  if (bVar3) {
    Board::SetNeedShineKernelpult(*(Board **)(gLawnApp + 0x9f0),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::PlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<PlantType const>, Sexy::TRect<int>,
   bool, int) */

void __thiscall
PlantCursor::PlantCursor
          (PlantCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4,
          PlantCursor param_5,undefined4 param_6)

{
  char cVar1;
  PlantCursor PVar2;
  bool bVar3;
  byte bVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067a21f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x50] = (PlantCursor)0x0;
  this[0x51] = (PlantCursor)0x0;
  this[0x52] = (PlantCursor)0x0;
  cVar1 = shouldInitializeToFreePlanting();
  PVar2 = (PlantCursor)0x0;
  if (cVar1 != '\0') {
    bVar4 = RiftUtils::IsRiftTimedLevel();
    PVar2 = (PlantCursor)(bVar4 ^ 1);
  }
  this[0x51] = PVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  this[0x52] = param_5;
  *(undefined4 *)(this + 0x54) = param_6;
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_00);
  pPVar5 = (PopAnimRig *)CreateStandalonePlantAnimRig(a_Stack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  (**(code **)(*(long *)pPVar5 + 0x1a0))(pPVar5,0);
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar5);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  bVar3 = std::operator==("cobcannon",(string *)(lVar6 + 8));
  if (bVar3) {
    Board::SetNeedShineKernelpult(*(Board **)(gLawnApp + 0x9f0),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::tryReplaceExistingPlantAt(int, int) */

void __thiscall PlantCursor::tryReplaceExistingPlantAt(PlantCursor *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  PlantType *pPVar4;
  long lVar5;
  Plant *this_01;
  string *psVar6;
  Plant *pPVar7;
  PlantPeapod *this_02;
  PlantChainsawburmannii *this_03;
  Board *pBVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar5 = PlantType::GetProps(pPVar4);
  uVar1 = *(undefined4 *)(lVar5 + 0xbc);
  pBVar8 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,param_1,param_2);
  this_01 = (Plant *)Board::GetPlantAt(pBVar8,aPStack_10,uVar1);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aPStack_10,"peapod");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string((string *)aPStack_10);
  nop();
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aPStack_10,"chainsawburmannii");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string((string *)aPStack_10);
  nop();
  if (this_01 != (Plant *)0x0) {
    pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar5 = PlantType::GetProps(pPVar4);
    if (*(char *)(lVar5 + 0x248) != '\0') {
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aPStack_10,(RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (cVar2 != '\0') {
        Plant::Heal(this_01);
        goto LAB_03f6eaa0;
      }
    }
    pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar5 = PlantType::GetProps(pPVar4);
    if (*(char *)(lVar5 + 0x24c) != '\0') {
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aPStack_10,(RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (cVar2 != '\0') {
        if (*(code **)(**(long **)(this_01 + 0xa8) + 0x4c0) != PlantFramework::UpgradePlant) {
          (**(code **)(**(long **)(this_01 + 0xa8) + 0x4c0))();
        }
        goto LAB_03f6eaa0;
      }
    }
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aPStack_10,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (cVar2 != '\0') {
        nop();
        PlantPeapod::Upgrade(this_02);
        goto LAB_03f6eaa0;
      }
    }
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_18);
    if (cVar2 != '\0') {
      Plant::GetType();
      cVar2 = Sexy::RtWeakPtrBase::operator==
                        ((RtWeakPtrBase *)aPStack_10,(RtWeakPtrBase *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (cVar2 != '\0') {
        nop();
        PlantChainsawburmannii::Upgrade(this_03);
        goto LAB_03f6eaa0;
      }
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar3 = std::operator==("cobcannon",(string *)(lVar5 + 8));
    if (bVar3) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      bVar3 = std::operator==("kernelpult",(string *)(lVar5 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (bVar3) {
        Plant::KillPlant(this_01,1,0,0x8000000000);
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        *(int *)(pBVar8 + 0x194) = *(int *)(pBVar8 + 0x194) + -1;
      }
      else {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      }
      std::string::string((string *)aPStack_10,"");
      pPVar7 = (Plant *)Board::GetPlantAt(pBVar8,param_1 + 1,param_2,(string *)aPStack_10);
      std::string::~string((string *)aPStack_10);
      nop();
      if (pPVar7 != (Plant *)0x0) {
        Plant::GetType();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
        bVar3 = std::operator==("kernelpult",(string *)(lVar5 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10)
        ;
        if (bVar3) {
          this_01 = (Plant *)0x0;
          Plant::KillPlant(pPVar7,1,0,0x8000000000);
          *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) =
               *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x194) + -1;
          goto LAB_03f6eaa0;
        }
      }
    }
  }
  this_01 = (Plant *)0x0;
LAB_03f6eaa0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::tryMakeNewPlantAt(int, int, int) */

void __thiscall
PlantCursor::tryMakeNewPlantAt(PlantCursor *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  string *psVar6;
  PlantImitater *extraout_x0;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  code *pcVar8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4,___stack_chk_guard,param_3);
  if (cVar2 != '\0') {
    uVar4 = *(undefined8 *)(pLVar1 + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    uVar4 = Board::AddPlant((Board *)0x0,uVar4,param_1,param_2,aRStack_10,0,0,0xffffffff,0,1,1,0,0,0
                            ,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    goto LAB_03f6ecb4;
  }
  cVar2 = ResilienceTutorial::IsPlayingResilienceTutorialIntro();
  if (cVar2 == '\0') {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
    if (bVar3) {
LAB_03f6ed58:
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      cVar2 = FUN_03f6de24(*(undefined4 *)(lVar5 + 400));
      if (cVar2 != '\0') {
        uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_18,"imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        uVar4 = Board::AddPlant((Board *)0x0,uVar4,param_1,param_2,
                                (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,1,1,param_3,this[0x52],1
                                ,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        std::string::~string(asStack_18);
        nop();
        nop();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        PlantImitater::SetImitatedPlant(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        PlantImitater::SyncPlantBoost(extraout_x0,0x11,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_03f6ecb4;
      }
    }
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x4e);
    if (cVar2 == '\0') {
      param_3 = 1;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
    if (bVar3) goto LAB_03f6ed58;
  }
  pcVar8 = *(code **)(*(long *)this + 0x90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
  uVar4 = (*pcVar8)(this,aRStack_10,param_1,param_2,param_3,this[0x52]);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_03f6ecb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::tryToPlantAt(int, int) */

void __thiscall PlantCursor::tryToPlantAt(PlantCursor *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Plant *this_01;
  RtObject *pRVar7;
  long lVar8;
  int *piVar9;
  PlantCursor PVar10;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x50] != (PlantCursor)0x0) goto LAB_03f6efc8;
  iVar4 = 0;
  if (this[0x51] == (PlantCursor)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x48));
    iVar4 = payForPlant(this,(RtWeakPtr<Sexy::SoundResource> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    MessageRouter::Broadcast<int,int,int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::PaidSunmoneyAtGridForPlant,iVar4,param_1,
               param_2);
  }
  this_00 = (RtWeakPtr *)(this + 0x40);
  this_01 = (Plant *)tryReplaceExistingPlantAt(this,param_1,param_2);
  if (this_01 == (Plant *)0x0) {
    iVar6 = *(int *)(this + 0x54);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((((bVar2) &&
         (pRVar7 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
         pRVar7 != (RtObject *)0x0)) &&
        ((bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar7), bVar2 ||
         ((iVar5 = FUN_03f6dd5c(*(undefined4 *)(pRVar7 + 0x1e8)), iVar5 != -1 ||
          (bVar2 = Sexy::RtObject::IsA<RiftSeedBank>(pRVar7), bVar2)))))) &&
       (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 != '\0')) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar6 = FUN_03f6dd4c(*(undefined4 *)(lVar8 + 0x1cc));
    }
    this_01 = (Plant *)tryMakeNewPlantAt(this,param_1,param_2,iVar6);
    if (this_01 != (Plant *)0x0) {
      Plant::PlantReturnSun(this_01,iVar4);
      MessageRouter::Broadcast<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantPlanted,this_01);
      goto LAB_03f6ef14;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (!bVar2) {
      this[0x50] = (PlantCursor)0x0;
      goto LAB_03f6efc8;
    }
    Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    PVar10 = (PlantCursor)0x0;
LAB_03f6ef4c:
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this_00);
    MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
              ((MessageRouter *)puVar1,Message::SeedPacketPlanted,
               (RtWeakPtr<Sexy::SoundResource> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    this[0x50] = PVar10;
    if (PVar10 == (PlantCursor)0x0) goto LAB_03f6efc8;
  }
  else {
LAB_03f6ef14:
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar7 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      PVar10 = (PlantCursor)0x1;
      if ((pRVar7 != (RtObject *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar7), bVar2)) {
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
        PVar10 = (PlantCursor)0x1;
        if (cVar3 != '\0') {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar4 = FUN_03f6dd50(*(undefined4 *)(lVar8 + 0x1d0));
          Plant::SetPlantAvatarValue(this_01,iVar4);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar4 = FUN_03f6dd4c(*(undefined4 *)(lVar8 + 0x1cc));
          Plant::SetPlantLevelValue(this_01,iVar4);
          puVar1 = gMessageRouter;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this_00);
          MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                    ((MessageRouter *)puVar1,Message::SeedPacketPlanted,
                     (RtWeakPtr<Sexy::SoundResource> *)local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10)
          ;
          this[0x50] = (PlantCursor)0x1;
          goto LAB_03f6ef8c;
        }
      }
      goto LAB_03f6ef4c;
    }
    this[0x50] = (PlantCursor)0x1;
  }
LAB_03f6ef8c:
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_14 = FUN_03f6dd6c(*(undefined4 *)(lVar8 + 100));
  local_14 = local_14 + -1;
  local_10[0] = 0;
  piVar9 = eastl::max_alt<int>(&local_14,local_10);
  iVar4 = *piVar9;
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  FUN_03f6dd64(lVar8 + 100,iVar4);
LAB_03f6efc8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCursor::tryToUse() */

void __thiscall PlantCursor::tryToUse(PlantCursor *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  GridItemWizardCrucible *pGVar6;
  char *pcVar7;
  code *pcVar8;
  Board *pBVar9;
  LawnApp *pLVar10;
  undefined8 uVar11;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_20);
  cVar2 = BoardTransforms::IsGridCoordinateOnBoard(local_20,local_1c);
  pLVar10 = gLawnApp;
  if (cVar2 == '\0') {
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_drop");
  }
  else {
    cVar2 = LawnApp::IsInModule(gLawnApp,4);
    if (cVar2 != '\0') {
      pBVar9 = *(Board **)(pLVar10 + 0x9f0);
      std::string::string(asStack_10,"BesiegeBox");
      lVar5 = Board::GetGridItemAt(pBVar9,asStack_10,local_20,local_1c);
      std::string::~string(asStack_10);
      nop();
      pLVar10 = gLawnApp;
      if (lVar5 == 0) {
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x48));
        Board::GiveAdvice(pBVar9,local_20,local_1c,asStack_10,0x48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        goto LAB_03f6f36c;
      }
    }
    uVar11 = *(undefined8 *)(pLVar10 + 0x9f0);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
    Sexy::Point::Point(aPStack_18,local_20,local_1c);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
    iVar4 = Board::GetCanPlantAtReason(uVar11,aPStack_18,asStack_10,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
    Board::GiveAdvice(pBVar9,local_20,local_1c,asStack_10,iVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (iVar4 == 0) {
      Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
      pcVar8 = *(code **)(*(long *)this + 0x98);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
      cVar2 = (*pcVar8)(this,asStack_10,*(undefined4 *)(this + 0x54));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar2 != '\0') {
        tryToPlantAt(this,local_20,local_1c);
      }
    }
    pGVar6 = (GridItemWizardCrucible *)FUN_03f6e710(local_20,local_1c);
    if (pGVar6 != (GridItemWizardCrucible *)0x0) {
      PlantTwinsHoneySuckle::GetAssistPerson();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aPStack_18);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18)
        ;
      }
      else {
        pcVar8 = *(code **)(*(long *)this + 0x98);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
        cVar2 = (*pcVar8)(this,asStack_10,*(undefined4 *)(this + 0x54));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18)
        ;
        if (cVar2 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          FUN_05475d88(asStack_10,lVar5 + 8);
          cVar2 = GridItemWizardCrucible::tryToTrigger(pGVar6,asStack_10);
          std::string::~string(asStack_10);
          if (cVar2 != '\0') {
            if (this[0x51] == (PlantCursor)0x0) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
              payForPlant(this,asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
            }
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
            puVar1 = gMessageRouter;
            if (bVar3) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x40)
                        );
              MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                        ((MessageRouter *)puVar1,Message::SeedPacketPlanted,asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
            }
          }
        }
      }
    }
  }
LAB_03f6f36c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

