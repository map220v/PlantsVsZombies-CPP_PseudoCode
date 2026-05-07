// Class: PVPSeedChooser


/* PVPSeedChooser::VerifyAndSelectSeeds() */

void __thiscall PVPSeedChooser::VerifyAndSelectSeeds(PVPSeedChooser *this)

{
  if (*(int *)(this + 0x308) == -1) {
    (**(code **)(*(long *)this + 0x1e8))();
  }
  else if (this[0x304] == (PVPSeedChooser)0x0) {
    this[0x304] = (PVPSeedChooser)0x1;
    BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
    return;
  }
  return;
}


/* PVPSeedChooser::~PVPSeedChooser() */

void __thiscall PVPSeedChooser::~PVPSeedChooser(PVPSeedChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_06947fd0;
  *(undefined ***)(this + 0x10) = &PTR__PVPSeedChooser_06948208;
  *(undefined **)(this + 0x1a0) = &DAT_06948238;
  SeedChooser::~SeedChooser((SeedChooser *)this);
  return;
}


/* non-virtual thunk to PVPSeedChooser::~PVPSeedChooser() */

void __thiscall PVPSeedChooser::~PVPSeedChooser(PVPSeedChooser *this)

{
  ~PVPSeedChooser(this + -0x10);
  return;
}


/* PVPSeedChooser::~PVPSeedChooser() */

void __thiscall PVPSeedChooser::~PVPSeedChooser(PVPSeedChooser *this)

{
  ~PVPSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPSeedChooser::~PVPSeedChooser() */

void __thiscall PVPSeedChooser::~PVPSeedChooser(PVPSeedChooser *this)

{
  ~PVPSeedChooser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::StaticClassInit() */

void PVPSeedChooser::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPSeedChooser");
    (*pcVar2)(plVar1,asStack_10,FUN_04ab050c,0x368,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedChooser::StaticGetClass() */

long * PVPSeedChooser::StaticGetClass(void)

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
  uVar2 = SeedChooser::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedChooser::GetClass() const */

long * PVPSeedChooser::GetClass(void)

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
  uVar2 = SeedChooser::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedChooser::PVPSeedChooser() */

void __thiscall PVPSeedChooser::PVPSeedChooser(PVPSeedChooser *this)

{
  SeedChooser::SeedChooser((SeedChooser *)this);
  *(undefined4 *)(this + 0x34c) = 1;
  *(undefined ***)this = &PTR_GetClass_06947fd0;
  *(undefined **)(this + 0x1a0) = &DAT_06948238;
  *(undefined ***)(this + 0x10) = &PTR__PVPSeedChooser_06948208;
  *(undefined4 *)(this + 0x350) = 0x32;
  Sexy::Insets::Insets((Insets *)(this + 0x354));
  return;
}


/* PVPSeedChooser::StaticNew() */

PVPSeedChooser * PVPSeedChooser::StaticNew(void)

{
  PVPSeedChooser *this;
  
  this = ::operator_new(0x368);
  PVPSeedChooser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::InitSeedPacketPVP(SeedPacket*, int) */

void PVPSeedChooser::InitSeedPacketPVP(SeedPacket *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SeedPacket *this;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (SeedPacket *)0x0) && (nop(), this != (SeedPacket *)0x0)) && (param_2 == 1)) {
    SeedPacket::SetPacketsPrefix(this,(string *)&DAT_06b80600);
    uVar1 = FUN_04ab039c(0x46);
    FUN_04ab0360(this + 0x38,uVar1);
    iVar2 = FUN_04ab039c(5);
    iVar3 = FUN_04ab039c(0x14);
    iVar4 = FUN_04ab039c(0xfffffff6);
    iVar5 = FUN_04ab039c(10);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar4,iVar5);
    UIButtonWidget::SetColorLabel((UIButtonWidget *)this,(Color *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::getBankPacket(std::string const&) */

void __thiscall PVPSeedChooser::getBankPacket(PVPSeedChooser *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x1c8);
    uVar5 = 0;
    uVar2 = FUN_04ab0374(uVar6,*(undefined8 *)(this + 0x1d0));
    if (uVar2 != 0) {
      do {
        lVar3 = FUN_04ab0380(uVar6,uVar5);
        if (*(int *)(lVar3 + 0x30) == 5) goto LAB_04ab07f0;
        if (*(int *)(lVar3 + 0x30) - 1U < 2) {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
          (**(code **)(*plVar4 + 0x1b8))(aRStack_10);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
          if (cVar1 != '\0') {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            cVar1 = std::operator==((string *)(lVar3 + 8),param_1);
            if (cVar1 != '\0') {
              lVar3 = FUN_04ab0380(*(undefined8 *)(this + 0x1c8),uVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              goto LAB_04ab07f0;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          uVar6 = *(undefined8 *)(this + 0x1c8);
          uVar2 = FUN_04ab0374(uVar6,*(undefined8 *)(this + 0x1d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  lVar3 = 0;
LAB_04ab07f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* PVPSeedChooser::onLandInBank(ChooserPacketData&) */

void __thiscall PVPSeedChooser::onLandInBank(PVPSeedChooser *this,ChooserPacketData *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x28));
  InitSeedPacketPVP((SeedPacket *)pRVar1,*(int *)(this + 0x34c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::GetUnusedBrains() */

void __thiscall PVPSeedChooser::GetUnusedBrains(PVPSeedChooser *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ChooserPacketData *pCVar5;
  long extraout_x0;
  long *plVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  ChooserPacketData aCStack_48 [40];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1c8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    pCVar5 = (ChooserPacketData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    ChooserPacketData::ChooserPacketData(aCStack_48,pCVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    nop();
    PowerupUI::GetPowerupDownImage();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar2 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      iVar3 = (**(code **)(*plVar6 + 0x50))();
      iVar4 = FUN_04ab0370(*(undefined4 *)(extraout_x0 + 0x204));
      iVar7 = iVar7 + iVar3 * iVar4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    ChooserPacketData::~ChooserPacketData(aCStack_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_60);
  }
  iVar7 = *(int *)(this + 0x350) - iVar7;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::finalizeSelection() */

void __thiscall PVPSeedChooser::finalizeSelection(PVPSeedChooser *this)

{
  bool bVar1;
  RtObject *this_00;
  PVPSeedBank *this_01;
  UIWidget *this_02;
  ChooserPacketData *pCVar2;
  SeedPacket *this_03;
  ResourceInfo *pRVar3;
  code *pcVar4;
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtName aRStack_58 [16];
  string asStack_48 [40];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 == (RtObject *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1000,0x4ab0c28);
    (*pcVar4)();
  }
  this_01 = Sexy::RtObject::Cast<PVPSeedBank>(this_00);
  (**(code **)(*(long *)this_01 + 0x1c0))(this_01,0,1);
  if (*(int *)(this + 0x34c) == 1) {
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1c8));
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1)
    {
      pCVar2 = (ChooserPacketData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      ChooserPacketData::ChooserPacketData((ChooserPacketData *)asStack_48,pCVar2);
      SeedBankNew::GetSeedPacketType();
      UIWidget::CreateWidget(aRStack_58,1);
      Sexy::RtName::~RtName(aRStack_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aRStack_60);
      PVPSeedBank::AddPacket(this_01,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      nop();
      InitSeedPacketPVP(this_03,*(int *)(this + 0x34c));
      pcVar4 = *(code **)(*(long *)this_03 + 0x1d0);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      (*pcVar4)(this_03,pRVar3);
      SeedPacket_PVP::SetCost((SeedPacket_PVP *)this_03,-1);
      ChooserPacketData::~ChooserPacketData((ChooserPacketData *)asStack_48);
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_70);
    }
    PVPSeedBank::RefreshPackets(this_01);
  }
  SlidingWidget::SlideOut((SlidingWidget *)this);
  UIWidget::SetVisible((UIWidget *)this_00,true);
  std::string::string(asStack_48,"UIViewBoardOrZombies");
  this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_48);
  UIWidget::SetVisible(this_02,false);
  std::string::~string(asStack_48);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::rebuildSeedList() */

void __thiscall PVPSeedChooser::rebuildSeedList(PVPSeedChooser *this)

{
  bool bVar1;
  int iVar2;
  long extraout_x0;
  int *piVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  ulong uVar6;
  pair *ppVar7;
  string *psVar8;
  SeedPacket_PVP *this_00;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  int local_28 [4];
  uint local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  SeedChooser::deleteChooserPackets((SeedChooser *)this);
  if (*(int *)(this + 0x34c) == 1) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_48);
    local_40 = FUN_04ab08b0(*(undefined8 *)(extraout_x0 + 0x110));
    local_38 = FUN_04ab0900(*(undefined8 *)(extraout_x0 + 0x118));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      ppVar7 = (pair *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)local_28,ppVar7);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
      Sexy::RtName::RtName((RtName *)local_18,(RtName *)(this + 800));
      UIWidget::CreateWidget((RtName *)local_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)local_18);
      pcVar12 = *(code **)(*(long *)this_00 + 0x1a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
      (*pcVar12)(this_00,(RtName *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      iVar2 = (**(code **)(*plVar9 + 0x50))();
      SeedPacket_PVP::SetCost(this_00,iVar2);
      SeedPacket_PVP::SetMaxNum(this_00,-1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_48);
      SeedChooser::initializeSeedPacket((SeedChooser *)this,this_00,0,(RtName *)local_18,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_28);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  }
  local_28[0] = FUN_04ab0374(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
  local_18[0] = (uint)(byte)this[0x1e6];
  piVar3 = eastl::min_alt<int>(local_28,(int *)local_18);
  this[0x1e7] = SUB41(*piVar3,0);
  SeedChooser::initChooserPackets((SeedChooser *)this);
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x1c8);
    uVar6 = FUN_04ab0374(uVar11,*(undefined8 *)(this + 0x1d0));
    if (uVar6 <= uVar10) break;
    lVar4 = FUN_04ab0380(uVar11,uVar10);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar4 + 0x28));
    InitSeedPacketPVP((SeedPacket *)pRVar5,*(int *)(this + 0x34c));
    uVar10 = uVar10 + 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::onCheatDisabled() */

void __thiscall PVPSeedChooser::onCheatDisabled(PVPSeedChooser *this)

{
  bool bVar1;
  int iVar2;
  long extraout_x0;
  int *piVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  ulong uVar6;
  pair *ppVar7;
  string *psVar8;
  SeedPacket_PVP *this_00;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  int aiStack_28 [4];
  uint auStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  nop();
  SeedChooser::deleteChooserPackets((SeedChooser *)this);
  if (*(int *)(this + 0x34c) == 1) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_48);
    uStack_40 = FUN_04ab08b0(*(undefined8 *)(extraout_x0 + 0x110));
    uStack_38 = FUN_04ab0900(*(undefined8 *)(extraout_x0 + 0x118));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_40,(__normal_iterator *)&uStack_38),
          bVar1) {
      ppVar7 = (pair *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_40);
      std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)aiStack_28,ppVar7);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
      Sexy::RtName::RtName((RtName *)auStack_18,(RtName *)(this + 800));
      UIWidget::CreateWidget((RtName *)auStack_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)auStack_18);
      pcVar12 = *(code **)(*(long *)this_00 + 0x1a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)auStack_18,(RtWeakPtrBase *)aRStack_30);
      (*pcVar12)(this_00,(RtName *)auStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      iVar2 = (**(code **)(*plVar9 + 0x50))();
      SeedPacket_PVP::SetCost(this_00,iVar2);
      SeedPacket_PVP::SetMaxNum(this_00,-1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)auStack_18,(RtWeakPtrBase *)a_Stack_48);
      SeedChooser::initializeSeedPacket((SeedChooser *)this,this_00,0,(RtName *)auStack_18,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aiStack_28);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  }
  aiStack_28[0] = FUN_04ab0374(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
  auStack_18[0] = (uint)(byte)this[0x1e6];
  piVar3 = eastl::min_alt<int>(aiStack_28,(int *)auStack_18);
  this[0x1e7] = SUB41(*piVar3,0);
  SeedChooser::initChooserPackets((SeedChooser *)this);
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x1c8);
    uVar6 = FUN_04ab0374(uVar11,*(undefined8 *)(this + 0x1d0));
    if (uVar6 <= uVar10) break;
    lVar4 = FUN_04ab0380(uVar11,uVar10);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar4 + 0x28));
    InitSeedPacketPVP((SeedPacket *)pRVar5,*(int *)(this + 0x34c));
    uVar10 = uVar10 + 1;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::updateState_Initializing() */

void __thiscall PVPSeedChooser::updateState_Initializing(PVPSeedChooser *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  SalesProgressBar *this_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b80540);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x340),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  rebuildSeedList(this);
  SeedChooser::initButtons((SeedChooser *)this);
  lVar7 = *(long *)(this + 0x1f8);
  if (lVar7 != 0) {
    iVar1 = FUN_04ab039c(100);
    *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) - iVar1;
  }
  *(undefined4 *)(this + 0x350) = *(undefined4 *)(extraout_x0 + 0xd0);
  iVar1 = FUN_04ab039c(0x230);
  iVar2 = FUN_04ab039c(10);
  iVar3 = FUN_04ab039c(0xbe);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80590);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  uVar8 = *(undefined8 *)(this + 0x1b0);
  *(undefined8 *)(this + 0x354) = local_18;
  *(undefined8 *)(this + 0x35c) = uStack_10;
  lVar5 = FUN_04ab0374(uVar8,*(undefined8 *)(this + 0x1b8));
  lVar7 = 0;
  do {
    if (lVar7 == lVar5) goto LAB_04ab10d4;
    lVar6 = FUN_04ab0380(uVar8,lVar7);
    lVar7 = lVar7 + 1;
  } while (*(int *)(lVar6 + 0x30) == 3);
  (**(code **)(*(long *)this + 0x1f8))(this,lVar6);
LAB_04ab10d4:
  (**(code **)(*(long *)this + 0xe8))(this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::Draw(Sexy::Graphics*) */

void __thiscall PVPSeedChooser::Draw(PVPSeedChooser *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *pLVar3;
  undefined8 uVar4;
  SalesProgressBar *this_00;
  Image *pIVar5;
  ulong uVar6;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedChooser::Draw((SeedChooser *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  iVar1 = *(int *)(this + 0x354);
  iVar2 = *(int *)(this + 0x358);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Graphics::Translate(param_1,iVar1,iVar2);
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80510);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  Sexy::Insets::Insets
            (aIStack_18,iVar1 / 2,0,*(int *)(this + 0x35c) - iVar1 / 2,*(int *)(this + 0x360));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80590);
  Draw3SliceImage(param_1,aIStack_18,uVar4);
  iVar1 = *(int *)(this + 0x360);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80510);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80510);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,(iVar1 - iVar2) / 2);
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b80510);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  iVar2 = FUN_04ab039c(5);
  uVar6 = GetUnusedBrains(this);
  Sexy::StrFormat(L"%d",auStack_30,uVar6 & 0xffffffff);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2,0,*(int *)(this + 0x35c),*(int *)(this + 0x360));
  uVar4 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPSeedChooser::Draw(Sexy::Graphics*) */

void __thiscall PVPSeedChooser::Draw(PVPSeedChooser *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedChooser::startMovingPacket(ChooserPacketData&) */

void __thiscall PVPSeedChooser::startMovingPacket(PVPSeedChooser *this,ChooserPacketData *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  SeedPacket *pSVar7;
  SeedPacket_PVP *this_02;
  long lVar8;
  undefined4 *puVar9;
  ChooserPacketData *this_03;
  ChooserPacketData *pCVar10;
  SexyVector2 *pSVar11;
  char *pcVar12;
  PVPManager *this_04;
  string *psVar13;
  undefined8 *puVar14;
  SeedPacket_PVP *this_05;
  long *plVar15;
  ResourceInfo *pRVar16;
  UIWidget *this_06;
  undefined8 *puVar17;
  SeedPacket_PVP *this_07;
  PVPSeedChooser PVar18;
  ulong uVar19;
  undefined8 uVar20;
  Board *pBVar21;
  code *pcVar22;
  undefined4 uVar23;
  float fVar24;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f8))();
  if ((*(int *)(param_1 + 0x30) == 0) && (iVar4 = GetUnusedBrains(this), iVar4 < 1)) {
    pBVar21 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aRStack_10,L"[ADVICE_NO_MORE_BRAINS]",aRStack_18);
    Board::DisplayAdvice(pBVar21,aRStack_10,7,2);
    FUN_05476c50(aRStack_10);
    nop();
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar12,"Play_Buzzer");
    *(undefined4 *)(this + 0x318) = 0xffffffff;
  }
  else if (*(int *)(this + 0x34c) == 0) {
    SeedChooser::startMovingPacket((SeedChooser *)this,param_1);
  }
  else {
    bVar2 = false;
    uVar19 = 0;
    while (uVar5 = FUN_04ab0388(*(undefined8 *)(*(long *)(this + 0x298) + 0x60),
                                *(undefined8 *)(*(long *)(this + 0x298) + 0x68)), uVar19 < uVar5) {
      lVar6 = FUN_04ab0380(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
      (**(code **)(*plVar15 + 0x1b8))(aRStack_10);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar5 = uVar19 + 1;
      psVar13 = (string *)FUN_04ab0394(*(undefined8 *)(*(long *)(this + 0x298) + 0x60),uVar19);
      cVar3 = std::operator==((string *)(lVar6 + 8),psVar13);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar19 = uVar5;
      if (cVar3 != '\0') {
        bVar2 = true;
      }
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28);
      this_04 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      psVar13 = (string *)PVPManager::GetPVPMapDataList(this_04);
      puVar14 = (undefined8 *)getBankPacket(this,psVar13);
      if (puVar14 == (undefined8 *)0x0) goto LAB_04ab15a8;
      if (*(int *)(puVar14 + 6) == 5) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(puVar14 + 5);
        plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        pcVar22 = *(code **)(*plVar15 + 0x1d0);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        (*pcVar22)(plVar15,pRVar16);
        this_06 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        puVar17 = (undefined8 *)UIWidget::GetPositionOffset(this_06);
        *puVar14 = *puVar17;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        UIWidget::SetPositionOffset(*(undefined4 *)puVar14,*(undefined4 *)((long)puVar14 + 4));
        PVar18 = this[0x1e4];
        uVar23 = *(undefined4 *)(param_1 + 0x20);
        *(uint *)((long)puVar14 + 0x24) = (uint)(byte)PVar18;
        *(undefined4 *)(puVar14 + 4) = uVar23;
        SeedChooser::calcPacketPositionInBank
                  ((SeedChooser *)this,(uint)(byte)PVar18,(SexyVector2 *)(puVar14 + 3));
        this[0x1e4] = (PVPSeedChooser)((char)this[0x1e4] + '\x01');
        pSVar7 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        SeedPacket::SetDisabled(pSVar7,bVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        nop();
        SeedPacket_PVP::SetMaxNum(this_07,1);
        SeedPacket_PVP::SetCurNum(this_07,1);
        SeedPacket_PVP::SetCost(this_07,-1);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(puVar14 + 5));
        nop();
        iVar4 = FUN_04ab0370(*(undefined4 *)(this_05 + 0x204));
        SeedPacket_PVP::SetMaxNum(this_05,iVar4 + 1);
        SeedPacket_PVP::SetCurNum(this_05,iVar4 + 1);
      }
      puVar14[2] = *puVar14;
      uVar23 = PVZ_T();
      *(undefined4 *)(puVar14 + 1) = uVar23;
      fVar24 = (float)PVZ_T();
      *(undefined4 *)(puVar14 + 6) = 1;
      *(float *)((long)puVar14 + 0xc) = fVar24 + 0.5;
    }
    else if ((!bVar2) && (*(int *)(param_1 + 0x30) == 2)) {
      lVar6 = FUN_04ab0380(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
      SeedPacket::SetDisabled(pSVar7,false);
      lVar6 = FUN_04ab0380(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      *(undefined4 *)(lVar6 + 0x30) = 0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
      nop();
      iVar4 = FUN_04ab0370(*(undefined4 *)(this_02 + 0x204));
      SeedPacket_PVP::SetMaxNum(this_02,iVar4 + -1);
      iVar4 = FUN_04ab0370(*(undefined4 *)(this_02 + 0x204));
      if (0 < iVar4) goto LAB_04ab15a8;
      iVar4 = *(int *)(param_1 + 0x24);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(param_1 + 0x28));
      iVar4 = iVar4 + 1;
      PVar18 = this[0x1e4];
      if (iVar4 < (int)(uint)(byte)PVar18) {
        lVar6 = (long)iVar4;
        do {
          pSVar11 = (SexyVector2 *)FUN_04ab0380(*(undefined8 *)(this + 0x1c8),lVar6);
          iVar1 = *(int *)(pSVar11 + 0x24) + -1;
          *(int *)(pSVar11 + 0x24) = iVar1;
          if (*(int *)(pSVar11 + 0x30) == 1) {
            SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar1,pSVar11 + 0x18);
          }
          else {
            SeedChooser::calcPacketPositionInBank((SeedChooser *)this,iVar1,pSVar11);
            lVar8 = FUN_04ab0380(*(undefined8 *)(this + 0x1c8),lVar6);
            uVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 0x28));
            puVar9 = (undefined4 *)FUN_04ab0380(*(undefined8 *)(this + 0x1c8),lVar6);
            UIWidget::SetPositionOffset(*puVar9,puVar9[1],uVar20);
          }
          uVar20 = *(undefined8 *)(this + 0x1c8);
          iVar4 = iVar4 + 1;
          this_03 = (ChooserPacketData *)FUN_04ab0380(uVar20,lVar6 + -1);
          pCVar10 = (ChooserPacketData *)FUN_04ab0380(uVar20,lVar6);
          ChooserPacketData::operator=(this_03,pCVar10);
          PVar18 = this[0x1e4];
          lVar6 = lVar6 + 1;
        } while (iVar4 < (int)(uint)(byte)PVar18);
      }
      uVar20 = *(undefined8 *)(this + 0x1c8);
      this[0x1e4] = (PVPSeedChooser)((char)PVar18 - 1U);
      lVar6 = FUN_04ab0380(uVar20,(char)PVar18 - 1U);
      *(undefined4 *)(lVar6 + 0x30) = 5;
      PVar18 = this[0x1e4];
      lVar6 = FUN_04ab0380(uVar20,PVar18);
      *(uint *)(lVar6 + 0x24) = (uint)(byte)PVar18;
      lVar6 = FUN_04ab0380(uVar20,this[0x1e4]);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(lVar6 + 0x28),(RtWeakPtr *)aRStack_18);
      lVar6 = FUN_04ab0380(*(undefined8 *)(this + 0x1c8),this[0x1e4]);
      pSVar7 = (SeedPacket *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      SeedPacket::SetSeedType
                (pSVar7,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10
                );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    if (*(long *)(this + 0x1f8) != 0) {
      *(bool *)(*(long *)(this + 0x1f8) + 0x6e) = this[0x1e4] == (PVPSeedChooser)0x0;
    }
    if (*(long *)(this + 0x200) != 0) {
      *(bool *)(*(long *)(this + 0x200) + 0x6e) = this[0x1e4] == (PVPSeedChooser)0x0;
    }
  }
LAB_04ab15a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVPSeedChooser::onEnterState_Initializing(WidgetState) */

void PVPSeedChooser::onEnterState_Initializing(long param_1)

{
  undefined4 uVar1;
  
  SeedChooser::onEnterState_Initializing();
  uVar1 = FUN_04ab039c(0xba);
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  uVar1 = FUN_04ab039c(0x19f);
  *(undefined4 *)(param_1 + 0x2dc) = uVar1;
  *(undefined4 *)(param_1 + 0x2ec) = uVar1;
  return;
}

