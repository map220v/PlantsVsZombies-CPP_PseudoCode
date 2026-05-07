// Class: SeedBankNew


/* SeedBankNew::updateState_Initializing() */

void __thiscall SeedBankNew::updateState_Initializing(SeedBankNew *this)

{
  undefined4 uVar1;
  SeedBankModule *this_00;
  
  this_00 = (SeedBankModule *)Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
  uVar1 = SeedBankModule::GetNumSlotsAvailableForChooser(this_00);
  (**(code **)(*(long *)this + 0x1d8))(this,uVar1);
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* SeedBankNew::SetSeedPacketType(Sexy::RtName) */

void SeedBankNew::SetSeedPacketType(long param_1)

{
  FUN_04413d5c(param_1 + 0x1c8);
  return;
}


/* SeedBankNew::SetSeedBankProperties(Sexy::RtWeakPtr<SeedBankProperties const>) */

void __thiscall SeedBankNew::SetSeedBankProperties(SeedBankNew *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),param_2);
  return;
}


/* SeedBankNew::SetGridItemMode(bool) */

void __thiscall SeedBankNew::SetGridItemMode(SeedBankNew *this,bool param_1)

{
  this[0x1c1] = (SeedBankNew)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::TryFindSeedPacket(Sexy::RtWeakPtr<PlantType const>) */

void SeedBankNew::TryFindSeedPacket
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               UINewPVPTopZombieQueue *param_2,RtWeakPtrBase *param_3)

{
  char cVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  do {
    cVar1 = FUN_04413e38(param_2[0x199]);
    if (cVar1 <= iVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_04413f48:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    UINewPVPTopZombieQueue::gettItem(param_2,iVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::GetPlantType();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_04413f48;
    }
    iVar2 = iVar2 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::SetAllPacketsReady() */

void __thiscall SeedBankNew::SetAllPacketsReady(SeedBankNew *this)

{
  char cVar1;
  FishingEnergyBar *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar2 = 0; cVar1 = FUN_04413e38(this[0x199]), iVar2 < cVar1; iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
    this_00 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    FishingEnergyBar::onGameUnpaused(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::GetPacket(std::string const&) */

void SeedBankNew::GetPacket(string *param_1)

{
  char cVar1;
  PVPManager *this;
  string *psVar2;
  string *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x199] != (string)0x0) {
    iVar3 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)param_1,iVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if (cVar1 != '\0') {
        this = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        psVar2 = (string *)PVPManager::GetPVPMapDataList(this);
        cVar1 = std::operator==(psVar2,in_x1);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          goto LAB_044140e0;
        }
      }
      iVar3 = iVar3 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar3 < (int)(uint)(byte)param_1[0x199]);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_044140e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::GetSeedsCount() */

void __thiscall SeedBankNew::GetSeedsCount(SeedBankNew *this)

{
  char cVar1;
  PVPManager *this_00;
  int iVar2;
  uint uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = (uint)(byte)this[0x199];
  if (this[0x199] != (SeedBankNew)0x0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      while( true ) {
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar1 == '\0') break;
        iVar2 = iVar2 + 1;
        this_00 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        PVPManager::GetPVPMapDataList(this_00);
        cVar1 = FUN_0547419c();
        if (cVar1 == '\0') {
          uVar3 = uVar3 + 1;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if ((int)(uint)(byte)this[0x199] <= iVar2) goto LAB_044141bc;
      }
      iVar2 = iVar2 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar2 < (int)(uint)(byte)this[0x199]);
  }
LAB_044141bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::SetPacketsOnDisplay(bool) */

void __thiscall SeedBankNew::SetPacketsOnDisplay(SeedBankNew *this,bool param_1)

{
  int iVar1;
  SeedPacket *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar2 = 0; iVar1 = UIWidget::GetChildCount((UIWidget *)this), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
    this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    SeedPacket::SetOnDisplay(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankNew::initialize(unsigned char) */

void __thiscall SeedBankNew::initialize(SeedBankNew *this,uchar param_1)

{
  (**(code **)(*(long *)this + 0x1c0))(this,param_1,1);
  SetPacketsOnDisplay(this,true);
  (**(code **)(*(long *)this + 0x1c8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::layoutVertical() */

void __thiscall SeedBankNew::layoutVertical(SeedBankNew *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04413e38(this[0x199]);
  iVar2 = (int)cVar3;
  if (iVar2 != 0) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar4 = FUN_04413e34(*(undefined4 *)(lVar6 + 0x3c));
    if (0 < iVar2) {
      iVar8 = 0;
      iVar5 = 0;
      do {
        iVar1 = iVar5 + 1;
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar5);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        iVar5 = FUN_04413e5c(0xb);
        fVar9 = (float)iVar8;
        iVar8 = iVar8 + iVar4;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar5,fVar9);
        UIWidget::SetPositionOffset(local_10,local_c,uVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        iVar5 = iVar1;
      } while (iVar2 != iVar1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::layoutHorizontal() */

void __thiscall SeedBankNew::layoutHorizontal(SeedBankNew *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04413e38(this[0x199]);
  iVar2 = (int)cVar3;
  if (iVar2 != 0) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar4 = FUN_04413e30(*(undefined4 *)(lVar6 + 0x38));
    iVar5 = FUN_04413e5c(0);
    if (0 < iVar2) {
      iVar9 = 0;
      iVar8 = 0;
      do {
        iVar1 = iVar8 + 1;
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar8);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        fVar10 = (float)iVar9;
        iVar9 = iVar9 + iVar4 + iVar5;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar10,(float)iVar5);
        UIWidget::SetPositionOffset(local_10,local_c,uVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        iVar8 = iVar1;
      } while (iVar2 != iVar1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankNew::setPacketPositions() */

void __thiscall SeedBankNew::setPacketPositions(SeedBankNew *this)

{
  if (this[0x1c2] == (SeedBankNew)0x0) {
    layoutHorizontal(this);
    return;
  }
  layoutVertical(this);
  return;
}


/* SeedBankNew::addPacket(Sexy::RtWeakPtr<UIWidget>, bool) */

void __thiscall
SeedBankNew::addPacket(SeedBankNew *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,char param_3)

{
  UIWidget *pUVar1;
  
  this[0x199] = (SeedBankNew)((char)this[0x199] + '\x01');
  pUVar1 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  UIWidget::SetParentWidget(pUVar1,(UIWidget *)this);
  pUVar1 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  UIWidget::CompleteLoad(pUVar1);
  if (param_3 != '\0') {
    (**(code **)(*(long *)this + 0x1f0))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::HasPlant(std::string const&) */

void SeedBankNew::HasPlant(string *param_1)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPacket(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1 != (ResourceInfo *)0x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::SetNumPackets(unsigned char, bool) */

void __thiscall SeedBankNew::SetNumPackets(SeedBankNew *this,uchar param_1,bool param_2)

{
  int iVar1;
  long *plVar2;
  UIWidget *this_00;
  int iVar3;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = UIWidget::GetChildCount((UIWidget *)this);
  iVar1 = iVar1 - (uint)param_1;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(uint)param_1);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      UIWidget::RemoveChildWidget((UIWidget *)this);
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    } while (iVar3 != iVar1);
  }
  this[0x199] = (SeedBankNew)param_1;
  iVar1 = UIWidget::GetChildCount((UIWidget *)this);
  if (0 < (int)((uint)param_1 - iVar1)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      Sexy::RtName::RtName((RtName *)aRStack_18,(RtName *)(this + 0x1c8));
      this_00 = (UIWidget *)UIWidget::CreateWidget((RtName *)aRStack_18,1);
      Sexy::RtName::~RtName((RtName *)aRStack_18);
      UIWidget::SetParentWidget(this_00,(UIWidget *)this);
      UIWidget::CompleteLoad(this_00);
    } while (iVar3 != (uint)param_1 - iVar1);
  }
  if (param_2) {
    (**(code **)(*(long *)this + 0x1f0))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankNew::SeedBankNew() */

void __thiscall SeedBankNew::SeedBankNew(SeedBankNew *this)

{
  SlidingWidget::SlidingWidget((SlidingWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06848050;
  *(undefined ***)(this + 0x10) = &PTR__SeedBankNew_06848258;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  this[0x1c2] = (SeedBankNew)0x1;
  Sexy::RtName::RtName((RtName *)(this + 0x1c8));
  Sexy::RtName::RtName((RtName *)(this + 0x1d8));
  this[0x199] = (SeedBankNew)0x0;
  *(undefined4 *)(this + 0x19c) = 0;
  this[0x1c0] = (SeedBankNew)0x0;
  this[0x1c1] = (SeedBankNew)0x0;
  Sexy::RtName::operator=((RtName *)(this + 0x1c8),L"UISeedBankPacket");
  Sexy::RtName::operator=((RtName *)(this + 0x1d8),L"UISeedBankPacket");
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  return;
}


/* SeedBankNew::StaticNew() */

SeedBankNew * SeedBankNew::StaticNew(void)

{
  SeedBankNew *this;
  
  this = ::operator_new(0x1f0);
  SeedBankNew(this);
  return this;
}


/* SeedBankNew::~SeedBankNew() */

void __thiscall SeedBankNew::~SeedBankNew(SeedBankNew *this)

{
  *(undefined ***)this = &PTR_GetClass_06848050;
  *(undefined ***)(this + 0x10) = &PTR__SeedBankNew_06848258;
  Sexy::RtName::~RtName((RtName *)(this + 0x1d8));
  Sexy::RtName::~RtName((RtName *)(this + 0x1c8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  SlidingWidget::~SlidingWidget((SlidingWidget *)this);
  return;
}


/* non-virtual thunk to SeedBankNew::~SeedBankNew() */

void __thiscall SeedBankNew::~SeedBankNew(SeedBankNew *this)

{
  ~SeedBankNew(this + -0x10);
  return;
}


/* SeedBankNew::~SeedBankNew() */

void __thiscall SeedBankNew::~SeedBankNew(SeedBankNew *this)

{
  ~SeedBankNew(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedBankNew::~SeedBankNew() */

void __thiscall SeedBankNew::~SeedBankNew(SeedBankNew *this)

{
  ~SeedBankNew(this + -0x10);
  return;
}


/* SeedBankNew::GetBlacklist() */

void SeedBankNew::GetBlacklist(void)

{
  long in_x0;
  long lVar1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1a0))
  ;
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)(lVar1 + 0xa8));
  return;
}


/* SeedBankNew::SetAutofillSeedTypes(std::vector<std::string, std::allocator<std::string > > const&)
    */

void __thiscall SeedBankNew::SetAutofillSeedTypes(SeedBankNew *this,vector *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::InitializePacketTimers() */

void __thiscall SeedBankNew::InitializePacketTimers(SeedBankNew *this)

{
  char cVar1;
  SeedPacket *this_00;
  string *psVar2;
  FishingEnergyBar *this_01;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtrBase aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetPacketsOnDisplay(this,false);
  for (iVar3 = 0; cVar1 = FUN_04413e38(this[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar3);
    this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    SeedPacket::InitializeTimer(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    SeedPacket::GetPlantType();
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"sunflower");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (cVar1 != '\0') {
      this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      FishingEnergyBar::onGameUnpaused(this_01);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::fillSeedPackets() */

void __thiscall SeedBankNew::fillSeedPackets(SeedBankNew *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  SeedPacket *pSVar6;
  undefined8 uVar7;
  string *psVar8;
  ResourceInfo *pRVar9;
  PlantType *this_01;
  int *piVar10;
  ulong uVar11;
  code *pcVar12;
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = (**(code **)(*plVar3 + 0xa0))();
  if (iVar2 == 1) goto LAB_04414ba8;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = (**(code **)(*plVar3 + 0xa0))();
  if (iVar2 == 2) goto LAB_04414ba8;
  lVar4 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  if (lVar4 == 0) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar2 = (**(code **)(*plVar3 + 0xa0))();
    if (iVar2 == 5) {
      lVar4 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
      goto LAB_04414be0;
    }
    uVar5 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  }
  else {
LAB_04414be0:
    uVar11 = 0;
    (**(code **)(*(long *)this + 0x1c0))(this,lVar4,1);
    if (this[0x1c0] == (SeedBankNew)0x0) {
      while (uVar5 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0)),
            uVar11 < uVar5) {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        FUN_04413e54(*(undefined8 *)(this + 0x1a8),uVar11);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
        if (pRVar9 == (ResourceInfo *)0x0) {
          if (this[0x1c1] != (SeedBankNew)0x0) {
            psVar8 = (string *)
                     Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
            FUN_04413e54(*(undefined8 *)(this + 0x1a8),uVar11);
            ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar8);
            UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)uVar11);
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            pcVar12 = *(code **)(*plVar3 + 0x1a8);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
            (*pcVar12)(plVar3,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          }
          uVar11 = uVar11 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
        else {
          UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)uVar11);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          bVar1 = std::operator==((string *)(lVar4 + 8),"imitater");
          if (bVar1) {
            pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            SeedPacket::SetIsImitater(pSVar6,true);
            FUN_04413e54(*(undefined8 *)(this + 0x1a8),uVar11 - 1);
            GetPacket((string *)this);
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            pcVar12 = *(code **)(*plVar3 + 0x198);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            SeedPacket::GetPlantType();
            (*pcVar12)(plVar3,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          else {
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            pcVar12 = *(code **)(*plVar3 + 0x198);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
            (*pcVar12)(plVar3,aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          }
          if (*(int *)(this + 0x1e8) != -1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            SeedPacket::GetPlantType();
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            if (bVar1) {
              pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
              SeedPacket::GetPlantType();
              this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              lVar4 = PlantType::GetProps(this_01);
              piVar10 = eastl::min_alt<int>((int *)(lVar4 + 0x2c),(int *)(this + 0x1e8));
              SeedPacket::SetPlantAvatarAndLevel(pSVar6,*piVar10,-1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            }
          }
          uVar11 = uVar11 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
      }
    }
    else {
      while( true ) {
        uVar5 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
        if (uVar5 <= uVar11) break;
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        FUN_04413e54(*(undefined8 *)(this + 0x1a8),uVar11);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
        UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(int)uVar11);
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        pcVar12 = *(code **)(*plVar3 + 0x1a0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
        (*pcVar12)(plVar3,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        uVar11 = uVar11 + 1;
      }
    }
  }
  if (uVar5 != 0) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar2 = (**(code **)(*plVar3 + 0xa0))();
    if (iVar2 == 6) {
      uVar11 = 0;
      uVar7 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
      (**(code **)(*(long *)this + 0x1c0))(this,uVar7,1);
      while (uVar5 = FUN_04413e48(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0)),
            uVar11 < uVar5) {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        FUN_04413e54(*(undefined8 *)(this + 0x1a8),uVar11);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
        if (pRVar9 == (ResourceInfo *)0x0) {
          uVar11 = uVar11 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
        else {
          iVar2 = (int)uVar11;
          uVar11 = uVar11 + 1;
          UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar2);
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          pcVar12 = *(code **)(*plVar3 + 0x198);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
          (*pcVar12)(plVar3,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
      }
    }
  }
LAB_04414ba8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::GetPlantResourceGroups(std::vector<std::string, std::allocator<std::string > >&) */

void __thiscall SeedBankNew::GetPlantResourceGroups(SeedBankNew *this,vector *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  char *__s;
  string *psVar6;
  int iVar7;
  ResourceManager *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38,uVar2
             ,uVar3);
  for (iVar7 = 0; cVar1 = FUN_04413e38(this[0x199]), iVar7 < cVar1; iVar7 = iVar7 + 1) {
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    SeedPacket::GetPlantType();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      (**(code **)(*plVar4 + 0x48))(plVar4,amStack_38);
      this_00 = *(ResourceManager **)(gLawnApp + 0x848);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      __s = (char *)FUN_0547429c(lVar5 + 0x10);
      std::string::string((string *)&local_40,__s);
      lVar5 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      if (lVar5 != 0) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                  ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38
                   ,(string *)(lVar5 + 0x10));
      }
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      uVar2 = FUN_04414594(*(undefined8 *)(lVar5 + 0x80));
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      uVar3 = FUN_044145e4(*(undefined8 *)(lVar5 + 0x88));
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
      insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38,
                 uVar2,uVar3);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      cVar1 = FUN_04413e98(*(undefined4 *)(lVar5 + 400));
      if (cVar1 != '\0') {
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string((string *)&local_40,"imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        std::string::~string((string *)&local_40);
        nop();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                  ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38
                   ,(string *)(lVar5 + 0x10));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        uVar2 = FUN_04414594(*(undefined8 *)(lVar5 + 0x80));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        uVar3 = FUN_044145e4(*(undefined8 *)(lVar5 + 0x88));
        std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
        insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
                  ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38
                   ,uVar2,uVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_48);
  uVar2 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar3 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  insert<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)param_1,local_40,uVar2,uVar3);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedBankNew::StaticClassInit() */

void SeedBankNew::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SEEDBANK_NORMAL",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SEEDBANK_BEGHOULED",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"SEEDBANK_CONVEYOR",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"SeedBankType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"SeedBankNew");
    (*pcVar3)(plVar2,avStack_20,FUN_044154fc,0x1f0,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankNew::StaticGetClass() */

long * SeedBankNew::StaticGetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SeedBankNew",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedBankNew::GetClass() const */

long * SeedBankNew::GetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SeedBankNew",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedBankNew::Draw(Sexy::Graphics*) */

void SeedBankNew::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to SeedBankNew::Draw(Sexy::Graphics*) */

void __thiscall SeedBankNew::Draw(SeedBankNew *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* SeedBankNew::GetSeedPacketType() const */

RtName * SeedBankNew::GetSeedPacketType(void)

{
  long in_x0;
  RtName *in_x8;
  
  Sexy::RtName::RtName(in_x8,(RtName *)(in_x0 + 0x1c8));
  return in_x8;
}

