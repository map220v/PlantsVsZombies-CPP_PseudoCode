// Class: RiftSeedBank


/* RiftSeedBank::~RiftSeedBank() */

void __thiscall RiftSeedBank::~RiftSeedBank(RiftSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a140;
  *(undefined ***)(this + 0x10) = &PTR__RiftSeedBank_0668a348;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to RiftSeedBank::~RiftSeedBank() */

void __thiscall RiftSeedBank::~RiftSeedBank(RiftSeedBank *this)

{
  ~RiftSeedBank(this + -0x10);
  return;
}


/* RiftSeedBank::~RiftSeedBank() */

void __thiscall RiftSeedBank::~RiftSeedBank(RiftSeedBank *this)

{
  ~RiftSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiftSeedBank::~RiftSeedBank() */

void __thiscall RiftSeedBank::~RiftSeedBank(RiftSeedBank *this)

{
  ~RiftSeedBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBank::StaticClassInit() */

void RiftSeedBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftSeedBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03718d78,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSeedBank::StaticGetClass() */

long * RiftSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"RiftSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftSeedBank::GetClass() const */

long * RiftSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"RiftSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBank::OnNotifyToolPlantLevelUp() */

void __thiscall RiftSeedBank::OnNotifyToolPlantLevelUp(RiftSeedBank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = UIWidget::GetChildCount((UIWidget *)this);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar5);
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      if ((this_00 != (RtObject *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_00), !bVar1)) {
        iVar3 = FUN_03718b80(*(undefined4 *)(this_00 + 0x1cc));
        iVar4 = FUN_03718b84(*(undefined4 *)(this_00 + 0x1d0));
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)this_00,iVar3 + 1,iVar4);
      }
      iVar5 = iVar5 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar5 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBank::RiftSeedBank() */

void __thiscall RiftSeedBank::RiftSeedBank(RiftSeedBank *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined4 *)(this + 0x19c) = 7;
  *(undefined ***)this = &PTR_GetClass_0668a140;
  *(undefined ***)(this + 0x10) = &PTR__RiftSeedBank_0668a348;
  Sexy::RtName::operator=((RtName *)(this + 0x1d8),L"UISeedBankRiftPacket");
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyToolPlantLevelUp);
  Sexy::Delegate0::Delegate0<RiftSeedBank,void(RiftSeedBank::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyToolPlantLevelUp,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSeedChooserFinalized);
  Sexy::Delegate0::Delegate0<RiftSeedBank,void(RiftSeedBank::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::SeedChooserSelectionFinalized,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftSeedBank::StaticNew() */

RiftSeedBank * RiftSeedBank::StaticNew(void)

{
  RiftSeedBank *this;
  
  this = ::operator_new(0x1f0);
  RiftSeedBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBank::OnSeedChooserFinalized() */

void __thiscall RiftSeedBank::OnSeedChooserFinalized(RiftSeedBank *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  RtObject *this_01;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = UIWidget::GetChildCount((UIWidget *)this);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar4);
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      if ((this_01 != (RtObject *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_01), !bVar1)) {
        iVar3 = FUN_03718b84(*(undefined4 *)(this_01 + 0x1d0));
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)this_01,1,iVar3);
      }
      iVar4 = iVar4 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar4 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftSeedBank::SetNumPackets(unsigned char, bool) */

void __thiscall RiftSeedBank::SetNumPackets(RiftSeedBank *this,uchar param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  UIWidget *pUVar4;
  SeedPacket *this_00;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = UIWidget::GetChildCount((UIWidget *)this);
  iVar2 = iVar2 - (uint)param_1;
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,(uint)param_1);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_20);
      UIWidget::RemoveChildWidget((UIWidget *)this);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    } while (iVar7 != iVar2);
  }
  this[0x199] = (RiftSeedBank)param_1;
  iVar2 = UIWidget::GetChildCount((UIWidget *)this);
  if (3 < (int)((uint)param_1 - iVar2)) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      Sexy::RtName::RtName((RtName *)local_20,(RtName *)(this + 0x1c8));
      pUVar4 = (UIWidget *)UIWidget::CreateWidget((RtName *)local_20,1);
      Sexy::RtName::~RtName((RtName *)local_20);
      UIWidget::SetParentWidget(pUVar4,(UIWidget *)this);
      UIWidget::CompleteLoad(pUVar4);
    } while (iVar7 != ((uint)param_1 - iVar2) + -3);
    lVar6 = 0;
    do {
      Sexy::RtName::RtName((RtName *)local_20,(RtName *)(this + 0x1d8));
      pUVar4 = (UIWidget *)UIWidget::CreateWidget((RtName *)local_20,1);
      Sexy::RtName::~RtName((RtName *)local_20);
      UIWidget::SetParentWidget(pUVar4,(UIWidget *)this);
      UIWidget::CompleteLoad(pUVar4);
      if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
         (cVar1 = Board::ChooseSeedsOnCurrentLevel(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
        iVar2 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
        if (0 < iVar2) {
          BoardHelpers::ApplyLevelOverride_RiftTimedToolList((vector *)local_20);
          nop();
          uVar5 = FUN_03718b88(local_20[0],lVar6);
          (**(code **)(*(long *)this_00 + 0x230))(this_00,uVar5);
          SeedPacket::SetAlwaysPlantable(this_00,false);
        }
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)local_20);
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 != 3);
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

