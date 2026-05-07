// Class: ArenaEditPlantCursor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::CanUseAtCurrentPosition() */

void __thiscall ArenaEditPlantCursor::CanUseAtCurrentPosition(ArenaEditPlantCursor *this)

{
  undefined1 uVar1;
  int iVar2;
  Board *pBVar3;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_20);
  if (-1 < local_20) {
    if ((local_20 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) && (-1 < local_1c)) {
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if (local_1c < iVar2) {
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_18,local_20,local_1c);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
        uVar1 = Board::CanPlantAt(pBVar3,aPStack_18,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_0373cabc;
      }
    }
  }
  uVar1 = 0;
LAB_0373cabc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ArenaEditPlantCursor::SetPlantingFreeForCursor(bool) */

void __thiscall
ArenaEditPlantCursor::SetPlantingFreeForCursor(ArenaEditPlantCursor *this,bool param_1)

{
  this[0x51] = (ArenaEditPlantCursor)param_1;
  return;
}


/* ArenaEditPlantCursor::StaticGetClass() */

long * ArenaEditPlantCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArenaEditPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* ArenaEditPlantCursor::GetClass() const */

long * ArenaEditPlantCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArenaEditPlantCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::GetCurrentGridPosition() */

void __thiscall ArenaEditPlantCursor::GetCurrentGridPosition(ArenaEditPlantCursor *this)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  ArtifactEvolutionCursor::GetPlantType();
  iVar1 = BoardTransforms::PlantingBoardSpaceToGridX
                    ((float)local_10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  ArtifactEvolutionCursor::GetPlantType();
  iVar2 = BoardTransforms::PlantingBoardSpaceToGridY
                    ((float)local_c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::tryMakeNewPlantAt(int, int, int) */

void __thiscall
ArenaEditPlantCursor::tryMakeNewPlantAt
          (ArenaEditPlantCursor *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,4,param_2,param_3);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(pLVar1 + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    uVar3 = Board::AddPlant((Board *)0x0,uVar3,param_1,param_2,aRStack_10,1,1,param_3,this[0x52],1,1
                            ,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    uVar3 = *(undefined8 *)(pLVar1 + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    uVar3 = Board::AddPlant((Board *)0x0,uVar3,param_1,param_2,aRStack_10,0,0,0xffffffff,0,1,1,0,0,0
                            ,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ArenaEditPlantCursor::~ArenaEditPlantCursor() */

void __thiscall ArenaEditPlantCursor::~ArenaEditPlantCursor(ArenaEditPlantCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06955220;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArenaEditPlantCursor::~ArenaEditPlantCursor() */

void __thiscall ArenaEditPlantCursor::~ArenaEditPlantCursor(ArenaEditPlantCursor *this)

{
  ~ArenaEditPlantCursor(this);
  AK::FreeHook(this);
  return;
}


/* ArenaEditPlantCursor::ArenaEditPlantCursor() */

void __thiscall ArenaEditPlantCursor::ArenaEditPlantCursor(ArenaEditPlantCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06955220;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (ArenaEditPlantCursor)0x0;
  this[0x51] = (ArenaEditPlantCursor)0x0;
  this[0x52] = (ArenaEditPlantCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* ArenaEditPlantCursor::StaticNew() */

ArenaEditPlantCursor * ArenaEditPlantCursor::StaticNew(void)

{
  ArenaEditPlantCursor *this;
  
  this = ::operator_new(0x60);
  ArenaEditPlantCursor(this);
  return this;
}


/* ArenaEditPlantCursor::canAffordPlant(Sexy::RtWeakPtr<PlantType const>) const */

undefined8 __thiscall
ArenaEditPlantCursor::canAffordPlant
          (ArenaEditPlantCursor *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (this[0x51] == (ArenaEditPlantCursor)0x0) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,0xfffffffe);
    if (0 < iVar1) {
      uVar3 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar1);
      return uVar3;
    }
  }
  return 1;
}


/* ArenaEditPlantCursor::payForPlant(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
ArenaEditPlantCursor::payForPlant(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,0xfffffffe);
  if (0 < iVar1) {
    Board::TakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar1,false,false);
    return;
  }
  return;
}


/* ArenaEditPlantCursor::onDestroy() */

void __thiscall ArenaEditPlantCursor::onDestroy(ArenaEditPlantCursor *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    (**(code **)(*plVar2 + 0x80))(plVar2,0);
  }
  return;
}


/* ArenaEditPlantCursor::IsInsideOriginRect() const */

undefined8 __thiscall ArenaEditPlantCursor::IsInsideOriginRect(ArenaEditPlantCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_04b21154(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_04b21600(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_04b21144(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::shouldInitializeToFreePlanting() const */

void ArenaEditPlantCursor::shouldInitializeToFreePlanting(void)

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
  PVPManager *this_00;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04b215f4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar5 != 0) goto LAB_04b216c4;
  pLVar8 = aLStack_18;
  lVar5 = Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar6,(wchar16 *)asStack_10,pLVar8,in_x3,in_x4);
  if (((lVar5 == 0) || (cVar1 != '\0')) ||
     (iVar4 = FUN_04b21158(*(undefined4 *)(lVar5 + 0x19c)), iVar4 != 0)) {
LAB_04b21748:
    uVar3 = 1;
  }
  else {
    this = (RtWeakPtr *)(in_x0 + 0x40);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::GetIsPlantTrialForFree(pSVar7);
      if (cVar1 != '\0') goto LAB_04b21748;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = SeedPacket::IsFreePlant(pSVar7);
      if (cVar1 != '\0') goto LAB_04b21748;
    }
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    uVar3 = PVPManager::IsInPVPMap(this_00);
  }
  std::string::~string(asStack_10);
  nop();
LAB_04b216c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::ArenaEditPlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>,
   Plant*) */

void __thiscall
ArenaEditPlantCursor::ArenaEditPlantCursor
          (ArenaEditPlantCursor *this,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  ArenaEditPlantCursor AVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  PlantAnimRig *this_00;
  string *psVar7;
  PVPManager *pPVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_06955220;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  this[0x50] = (ArenaEditPlantCursor)0x0;
  this[0x51] = (ArenaEditPlantCursor)0x0;
  this[0x52] = (ArenaEditPlantCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x50] = (ArenaEditPlantCursor)0x0;
  AVar1 = (ArenaEditPlantCursor)shouldInitializeToFreePlanting();
  this[0x51] = AVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  SeedPacket::GetPlantType();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  AVar1 = (ArenaEditPlantCursor)FUN_04b21150(*(undefined1 *)(lVar6 + 0x1a8));
  this[0x52] = AVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_01);
  this_00 = (PlantAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  psVar7 = (string *)ProfileUtils::Profile();
  cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar3 = PlayerInfo::GetPlantAvatar(psVar7,(bool)(cVar2 + '\b'));
  pPVar8 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar4 = PVPManager::IsLoadServerPlantData(pPVar8);
  if (iVar4 == 3) {
    pPVar8 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_01);
    uVar5 = PVPManager::GetTargetPlantAvatar(pPVar8,aRStack_10);
    iVar3 = -(uVar5 & 0xff ^ 1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar4 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar6 + 8));
  PlantAnimRig::SetAvatarIndex(this_00,iVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_01);
  PlantAnimRig::ShowAvatarLayers(this_00,aRStack_10,iVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
  BaseCursor::setAnimRig((BaseCursor *)this,(PopAnimRig *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::ArenaEditPlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<PlantType const>,
   Sexy::TRect<int>, bool, Plant*) */

void __thiscall
ArenaEditPlantCursor::ArenaEditPlantCursor
          (ArenaEditPlantCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4,
          ArenaEditPlantCursor param_5)

{
  ArenaEditPlantCursor AVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  PlantAnimRig *this_00;
  string *psVar6;
  PVPManager *pPVar7;
  long lVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_06955220;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  this[0x50] = (ArenaEditPlantCursor)0x0;
  this[0x51] = (ArenaEditPlantCursor)0x0;
  this[0x52] = (ArenaEditPlantCursor)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x50] = (ArenaEditPlantCursor)0x0;
  AVar1 = (ArenaEditPlantCursor)shouldInitializeToFreePlanting();
  this[0x51] = AVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_01,param_3);
  this[0x52] = param_5;
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_01);
  this_00 = (PlantAnimRig *)CreateStandalonePlantAnimRig(a_Stack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  psVar6 = (string *)ProfileUtils::Profile();
  cVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar3 = PlayerInfo::GetPlantAvatar(psVar6,(bool)(cVar2 + '\b'));
  pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar4 = PVPManager::IsLoadServerPlantData(pPVar7);
  if (iVar4 == 3) {
    pPVar7 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_01);
    uVar5 = PVPManager::GetTargetPlantAvatar(pPVar7,a_Stack_10);
    iVar3 = -(uVar5 & 0xff ^ 1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  iVar4 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar8 + 8));
  PlantAnimRig::SetAvatarIndex(this_00,iVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_01);
  PlantAnimRig::ShowAvatarLayers(this_00,a_Stack_10,iVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
  BaseCursor::setAnimRig((BaseCursor *)this,(PopAnimRig *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::tryToUse() */

void __thiscall ArenaEditPlantCursor::tryToUse(ArenaEditPlantCursor *this)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  char *pcVar5;
  Board *pBVar6;
  LawnApp *pLVar7;
  undefined8 uVar8;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_20);
  cVar1 = BoardTransforms::IsGridCoordinateOnBoard(local_20,local_1c);
  pLVar7 = gLawnApp;
  if (cVar1 == '\0') {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_drop");
  }
  else {
    cVar1 = LawnApp::IsInModule(gLawnApp,4);
    if (cVar1 != '\0') {
      pBVar6 = *(Board **)(pLVar7 + 0x9f0);
      std::string::string(asStack_10,"BesiegeBox");
      lVar3 = Board::GetGridItemAt(pBVar6,asStack_10,local_20,local_1c);
      std::string::~string(asStack_10);
      nop();
      pLVar7 = gLawnApp;
      if (lVar3 == 0) {
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x48));
        Board::GiveAdvice(pBVar6,local_20,local_1c,asStack_10,0x48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        goto LAB_04b21d50;
      }
    }
    uVar8 = *(undefined8 *)(pLVar7 + 0x9f0);
    Sexy::Point::Point(aPStack_18,local_20,local_1c);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x48));
    iVar2 = Board::GetCanPlantAtReason(uVar8,aPStack_18,asStack_10,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(this + 0x48));
    Board::GiveAdvice(pBVar6,local_20,local_1c,asStack_10,iVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (iVar2 == 0) {
      Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
      this_00 = gMessageRouter;
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x58));
      MessageRouter::Post<Plant*,int,int,Plant*,int,int>
                ((MessageRouter *)this_00,Message::NotifySwitchPlant,(Plant *)pRVar4,local_20,
                 local_1c);
    }
  }
LAB_04b21d50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::tryReplaceExistingPlantAt(int, int) */

void __thiscall
ArenaEditPlantCursor::tryReplaceExistingPlantAt(ArenaEditPlantCursor *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  Plant *this_01;
  string *psVar2;
  PlantType *this_02;
  long lVar3;
  PlantPeapod *this_03;
  Board *this_04;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_04 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_01 = (Plant *)Board::GetPlantAt(this_04,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"peapod");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (Plant *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
    this_02 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar3 = PlantType::GetProps(this_02);
    if (*(char *)(lVar3 + 0x248) != '\0') {
      Plant::GetType();
      cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        Plant::Heal(this_01);
        goto LAB_04b21f18;
      }
    }
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_18);
    if (cVar1 != '\0') {
      nop();
      PlantPeapod::Upgrade(this_03);
      goto LAB_04b21f18;
    }
  }
  this_01 = (Plant *)0x0;
LAB_04b21f18:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaEditPlantCursor::tryToPlantAt(int, int) */

void __thiscall
ArenaEditPlantCursor::tryToPlantAt(ArenaEditPlantCursor *this,int param_1,int param_2)

{
  RtWeakPtr *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Plant *this_01;
  RtObject *pRVar5;
  long lVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x51] == (ArenaEditPlantCursor)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    payForPlant(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  this_00 = (RtWeakPtr *)(this + 0x40);
  this_01 = (Plant *)tryReplaceExistingPlantAt(this,param_1,param_2);
  if (this_01 == (Plant *)0x0) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    iVar4 = -1;
    if (bVar2) {
      pRVar5 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      if (((pRVar5 == (RtObject *)0x0) ||
          (bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar5), !bVar2)) ||
         (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 == '\0')) {
        iVar4 = -1;
      }
      else {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar4 = FUN_04b21148(*(undefined4 *)(lVar6 + 0x1cc));
      }
    }
    this_01 = (Plant *)tryMakeNewPlantAt(this,param_1,param_2,iVar4);
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantPlanted,this_01);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pRVar5 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (((pRVar5 != (RtObject *)0x0) && (this_01 != (Plant *)0x0)) &&
       ((bVar2 = Sexy::RtObject::IsA<ConveyorSeedBank>(pRVar5), bVar2 &&
        (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar3 != '\0')))) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = FUN_04b2114c(*(undefined4 *)(lVar6 + 0x1d0));
      Plant::SetPlantAvatarValue(this_01,iVar4);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = FUN_04b21148(*(undefined4 *)(lVar6 + 0x1cc));
      Plant::SetPlantLevelValue(this_01,iVar4);
    }
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
    MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
              ((MessageRouter *)puVar1,Message::SeedPacketPlanted,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  this[0x50] = (ArenaEditPlantCursor)(this_01 != (Plant *)0x0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

