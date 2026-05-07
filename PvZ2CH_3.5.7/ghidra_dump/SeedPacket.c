// Class: SeedPacket


/* SeedPacket::SetDisabled(bool) */

void __thiscall SeedPacket::SetDisabled(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,2,param_1);
  return;
}


/* SeedPacket::SetIsImitater(bool) */

void __thiscall SeedPacket::SetIsImitater(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x100,param_1);
  return;
}


/* SeedPacket::TryUse(PacketCursor*) */

undefined8 SeedPacket::TryUse(PacketCursor *param_1)

{
  return 0;
}


/* SeedPacket::IsAffordable() */

SeedPacket __thiscall SeedPacket::IsAffordable(SeedPacket *this)

{
  SeedPacket SVar1;
  undefined4 uVar2;
  char cVar3;
  SeedPacket SVar4;
  
  uVar2 = *(undefined4 *)(this + 400);
  cVar3 = FUN_0341bcd4(uVar2);
  SVar4 = (SeedPacket)0x1;
  if (cVar3 == '\0') {
    SVar4 = (SeedPacket)TestFlag<VaseFlags>(uVar2);
  }
  if (this[0x1e4] != (SeedPacket)0x0) {
    SVar1 = this[0x1e4];
    if (*(int *)(this + 0x1e8) < 1) {
      SVar1 = SVar4;
    }
    return SVar1;
  }
  return SVar4;
}


/* SeedPacket::setAffordable(bool) */

void __thiscall SeedPacket::setAffordable(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,1,param_1);
  return;
}


/* SeedPacket::SetAlwaysPlantable(bool) */

void __thiscall SeedPacket::SetAlwaysPlantable(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,8,param_1);
  return;
}


/* SeedPacket::SetIsFlashing(bool) */

void __thiscall SeedPacket::SetIsFlashing(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x40,param_1);
  return;
}


/* SeedPacket::SetOnDisplay(bool) */

void __thiscall SeedPacket::SetOnDisplay(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x10,param_1);
  return;
}


/* SeedPacket::SetBlacklisted(bool) */

void __thiscall SeedPacket::SetBlacklisted(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,4,param_1);
  return;
}


/* SeedPacket::SetPurchasable(bool) */

void __thiscall SeedPacket::SetPurchasable(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x200,param_1);
  return;
}


/* SeedPacket::SetFavorite(bool) */

void __thiscall SeedPacket::SetFavorite(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x400,param_1);
  return;
}


/* SeedPacket::SetIsSelected(bool) */

void __thiscall SeedPacket::SetIsSelected(SeedPacket *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 400,0x80,param_1);
  return;
}


/* SeedPacket::onSunCurrencyChanged(int) */

void SeedPacket::onSunCurrencyChanged(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x210))();
  return;
}


/* SeedPacket::onSunClicked(CollectableSun*, int) */

void __thiscall SeedPacket::onSunClicked(SeedPacket *this,CollectableSun *param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x210))(this,param_2);
  return;
}


/* SeedPacket::onUpdate() */

void __thiscall SeedPacket::onUpdate(SeedPacket *this)

{
  if (*(StandaloneEffect **)(this + 0x1f0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1f0));
    return;
  }
  return;
}


/* SeedPacket::onEnterState_Ready(WidgetState) */

void SeedPacket::onEnterState_Ready(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  return;
}


/* SeedPacket::setIsNeedShowExpTip(bool) */

void __thiscall SeedPacket::setIsNeedShowExpTip(SeedPacket *this,bool param_1)

{
  this[0x1f8] = (SeedPacket)param_1;
  return;
}


/* SeedPacket::GetPlantType() */

RtWeakPtr<Sexy::SoundResource> * SeedPacket::GetPlantType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x168));
  return in_x8;
}


/* SeedPacket::IsEmpty() */

byte __thiscall SeedPacket::IsEmpty(SeedPacket *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
  if ((cVar1 == '\0') &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x178)), cVar1 == '\0')) {
    bVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x170));
    return bVar2 ^ 1;
  }
  return 0;
}


/* SeedPacket::IsPressState() */

void __thiscall SeedPacket::IsPressState(SeedPacket *this)

{
  UIWidget::isInState((UIWidget *)this,4);
  return;
}


/* SeedPacket::GetIsPlantTrialForFree() const */

bool __thiscall SeedPacket::GetIsPlantTrialForFree(SeedPacket *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (this[0x1e4] != (SeedPacket)0x0) {
    bVar1 = 0 < *(int *)(this + 0x1e8);
  }
  return bVar1;
}


/* SeedPacket::onGameplayEnded() */

void __thiscall SeedPacket::onGameplayEnded(SeedPacket *this)

{
  SetDisabled(this,true);
  return;
}


/* SeedPacket::updateAffordability(int) */

void __thiscall SeedPacket::updateAffordability(SeedPacket *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x228))();
  setAffordable(this,iVar1 <= param_1);
  return;
}


/* SeedPacket::SetFreePlant() */

void __thiscall SeedPacket::SetFreePlant(SeedPacket *this)

{
  SetFlag<DebugLogFlags>(this + 400,0x20,1);
  return;
}


/* SeedPacket::onCheatDisabled() */

void __thiscall SeedPacket::onCheatDisabled(SeedPacket *this)

{
  SetFlag<DebugLogFlags>(this + 400,0x20,0);
  return;
}


/* SeedPacket::IsFreePlant() */

bool __thiscall SeedPacket::IsFreePlant(SeedPacket *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 400),0x20);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::DrawText(Sexy::Graphics*) */

void __thiscall SeedPacket::DrawText(SeedPacket *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar4 = *(undefined4 *)(this + 400);
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<VaseFlags>(uVar4,8);
  if (((bVar1) || (cVar2 = FUN_04430f20(uVar4), cVar2 != '\0')) ||
     (cVar2 = FUN_04430f28(uVar4), cVar2 != '\0')) goto LAB_04430fb8;
  Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
  uVar4 = *(undefined4 *)(this + 400);
  cVar2 = FUN_04430f30(uVar4);
  if (cVar2 == '\0') {
    if (*(code **)(*(long *)this + 0x1c0) == IsAffordable) {
      cVar2 = IsAffordable(this);
    }
    else {
      cVar2 = (**(code **)(*(long *)this + 0x1c0))();
    }
    if (cVar2 != '\0') {
      uVar4 = *(undefined4 *)(this + 400);
      goto LAB_0443101c;
    }
    Sexy::Color::Color((Color *)&local_18,0xff,0,0);
    local_28 = local_18;
    uStack_20 = uStack_10;
  }
  else {
LAB_0443101c:
    cVar2 = FUN_04430ed8(uVar4);
    if (cVar2 != '\0') {
      Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
  }
  uVar3 = (**(code **)(*(long *)this + 0x228))(this);
  cVar2 = GetIsPlantTrialForFree(this);
  if (cVar2 != '\0') {
    uVar3 = 0;
  }
  Sexy::StrFormat(L"%d",(wstring *)&local_18,(ulong)uVar3);
  Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1a0),(wstring *)&local_18);
  (**(code **)(**(long **)(this + 0x1a0) + 0x170))(*(long **)(this + 0x1a0),0,(Color *)&local_28);
  (**(code **)(**(long **)(this + 0x1a0) + 0x128))(*(long **)(this + 0x1a0),param_1);
  FUN_05476c50((wstring *)&local_18);
LAB_04430fb8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onPlantCostChanged(Plant*, int) */

void __thiscall SeedPacket::onPlantCostChanged(SeedPacket *this,Plant *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  cVar1 = Sexy::RtWeakPtrBase::operator==
                    ((RtWeakPtrBase *)(this + 0x168),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    *(int *)(this + 0x1c8) = param_2;
    uVar2 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)this + 0x210))(this,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::~SeedPacket() */

void __thiscall SeedPacket::~SeedPacket(SeedPacket *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_0684a0f0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06849eb0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SeedChooser");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 0x18))();
    *(undefined8 *)(this + 0x1f0) = 0;
  }
  std::string::~string((string *)(this + 0x1b0));
  std::string::~string((string *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket::~SeedPacket() */

void __thiscall SeedPacket::~SeedPacket(SeedPacket *this)

{
  ~SeedPacket(this + -0x10);
  return;
}


/* SeedPacket::~SeedPacket() */

void __thiscall SeedPacket::~SeedPacket(SeedPacket *this)

{
  ~SeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket::~SeedPacket() */

void __thiscall SeedPacket::~SeedPacket(SeedPacket *this)

{
  ~SeedPacket(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::InitText() */

void __thiscall SeedPacket::InitText(SeedPacket *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  PrimeText_PotentialText *pPVar9;
  PrimeTextWidget *this_00;
  long lVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a0) == 0) {
    FUN_05478178(auStack_38,&DAT_056f11a8,aIStack_18);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar1) {
      GetPlantType();
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      uVar7 = (**(code **)(*plVar6 + 0x70))(plVar6,0xfffffffe);
      Sexy::StrFormat(L"%d",aIStack_18,uVar7 & 0xffffffff);
      FUN_054766c8(auStack_38,aIStack_18);
      FUN_05476c50(aIStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    else {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
      if (bVar1) {
        PowerupUI::GetPowerupDownImage();
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        uVar7 = (**(code **)(*plVar6 + 0x48))();
        Sexy::StrFormat(L"%d",aIStack_18,uVar7 & 0xffffffff);
        FUN_054766c8(auStack_38,aIStack_18);
        FUN_05476c50(aIStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar1) {
      GetPlantType();
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18)
      ;
      bVar1 = std::operator==((string *)(lVar10 + 8),"imitater");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
      if (bVar1) {
        FUN_054772c4(auStack_38,&DAT_056f11a8);
      }
    }
    Sexy::Color::Color((Color *)aRStack_28,0xff,0xff,0xff);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
    iVar2 = FUN_04430c68(0x13);
    iVar3 = FUN_04430c68(0x18);
    iVar4 = FUN_04430c68(0x46);
    iVar5 = FUN_04430c68(0x28);
    FUN_05477b24(auStack_30,auStack_38);
    Sexy::Insets::Insets(aIStack_18,(Insets *)aRStack_28);
    pPVar9 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar2,(float)iVar3,(float)iVar4,(float)iVar5,uVar8,auStack_30,2,2,
                        aIStack_18);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar9);
    *(PrimeTextWidget **)(this + 0x1a0) = this_00;
    FUN_05476c50(auStack_30);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onExitState_Loading(WidgetState) */

void SeedPacket::onExitState_Loading(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x2d));
  if (bVar1) {
    pcVar2 = *(code **)(*param_1 + 0x198);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x2d));
    (*pcVar2)(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x2f));
    if (bVar1) {
      pcVar2 = *(code **)(*param_1 + 0x1a0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x2f));
      (*pcVar2)(param_1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x2e));
      if (bVar1) {
        pcVar2 = *(code **)(*param_1 + 0x1a8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_10,(RtWeakPtrBase *)(param_1 + 0x2e));
        (*pcVar2)(param_1,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::CreateZombieCursor(Sexy::Touch) */

void __thiscall SeedPacket::CreateZombieCursor(undefined8 param_1,undefined8 param_2)

{
  ZombieCursor *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pZVar1 = ::operator_new(0x60);
  ZombieCursor::ZombieCursor(pZVar1,param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar1);
}


/* SeedPacket::GetSeedType() */

void SeedPacket::GetSeedType(void)

{
  char cVar1;
  long in_x0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtMixedPtrBase *this;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x168);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    this = (RtMixedPtrBase *)(in_x0 + 0x178);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x170));
      if (cVar1 == '\0') {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (in_x8);
        return;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)(in_x0 + 0x170));
      return;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetSeedType(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall SeedPacket::SetSeedType(SeedPacket *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  code *pcVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(*(long *)this + 0x198);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  (*pcVar4)(this,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  pcVar4 = *(code **)(*(long *)this + 0x1a0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  (*pcVar4)(this,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  pcVar4 = *(code **)(*(long *)this + 0x1a8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  (*pcVar4)(this,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<PlantType>(pRVar3);
    if (bVar2) {
      pcVar4 = *(code **)(*(long *)this + 0x198);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)param_2);
      (*pcVar4)(this,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
    else {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<ZombieType>(pRVar3);
      if (bVar2) {
        pcVar4 = *(code **)(*(long *)this + 0x1a0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)param_2);
        (*pcVar4)(this,a_Stack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
      }
      else {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        bVar2 = Sexy::RtObject::IsA<GridItemType>(pRVar3);
        if (bVar2) {
          pcVar4 = *(code **)(*(long *)this + 0x1a8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)param_2);
          (*pcVar4)(this,a_Stack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetPacketsPrefix(std::string const&) */

void __thiscall SeedPacket::SetPacketsPrefix(SeedPacket *this,string *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator!=((string *)(this + 0x1b0),param_1);
  if (bVar1) {
    thunk_FUN_05475e00((string *)(this + 0x1b0),param_1);
    (**(code **)(*(long *)this + 0x1b8))(aRStack_10,this);
    SetSeedType(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::InitializeTimer() */

void __thiscall SeedPacket::InitializeTimer(SeedPacket *this)

{
  bool bVar1;
  char cVar2;
  PlantType *pPVar3;
  long lVar4;
  ZombieType *pZVar5;
  EffectObjectType *this_00;
  GridItemType *this_01;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x198] != (SeedPacket)0x0) {
    (**(code **)(*(long *)this + 0xe8))(this,3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar1) {
      GetPlantType();
      pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = PlantType::GetProps(pPVar3);
      fVar7 = *(float *)(lVar4 + 0x34);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar2 = Sexy::IsNearZero(fVar7,0.001);
      if (cVar2 == '\0') {
        fVar6 = (float)PVZ_T();
        fVar6 = fVar6 + fVar7;
        *(float *)(this + 0x194) = fVar6;
        GetPlantType();
        pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        fVar7 = (float)PlantType::GetPacketCoolDown(pPVar3,0xfffffffe);
        FUN_044308cc(fVar6 - *(float *)(this + 0x1d8) * fVar7,this + 0x6c);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      goto LAB_04431c18;
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (!bVar1) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
      if (bVar1) {
        PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
        this_00 = (EffectObjectType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar4 = EffectObjectType::GetProps(this_00);
        fVar7 = *(float *)(lVar4 + 0x28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        cVar2 = Sexy::IsNearZero(fVar7,0.001);
        if (cVar2 == '\0') {
          fVar6 = (float)PVZ_T();
          fVar6 = fVar6 + fVar7;
          *(float *)(this + 0x194) = fVar6;
          PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
          this_01 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          fVar7 = (float)GridItemType::GetPacketCoolDown(this_01);
          FUN_044308cc(fVar6 - fVar7,this + 0x6c);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
      }
      goto LAB_04431c18;
    }
    PowerupUI::GetPowerupDownImage();
    pZVar5 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = ZombieType::GetProps(pZVar5);
    fVar7 = *(float *)(lVar4 + 0x198);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = Sexy::IsNearZero(fVar7,0.001);
    if (cVar2 == '\0') {
      fVar6 = (float)PVZ_T();
      fVar6 = fVar6 + fVar7;
      *(float *)(this + 0x194) = fVar6;
      PowerupUI::GetPowerupDownImage();
      pZVar5 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      fVar7 = (float)ZombieType::GetPacketCoolDown(pZVar5);
      FUN_044308cc(fVar6 - fVar7,this + 0x6c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_04431c18;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    lVar4 = FUN_05474374(lVar4 + 8,"izombie_",0);
    if (lVar4 == -1) goto LAB_04431c18;
  }
  FishingEnergyBar::onGameUnpaused((FishingEnergyBar *)this);
LAB_04431c18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onEnterState_NotReady(WidgetState) */

void SeedPacket::onEnterState_NotReady(long param_1)

{
  bool bVar1;
  GridItemType *this;
  ZombieType *this_00;
  PlantType *pPVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x168));
  if (bVar1) {
    GetPlantType();
    pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar3 = (float)PlantType::GetPacketCoolDown(pPVar2,0xfffffffe);
    fVar4 = *(float *)(param_1 + 0x1d8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar3 = (1.0 - *(float *)(param_1 + 0x1dc)) * fVar4 * fVar3;
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x178));
    if (bVar1) {
      PowerupUI::GetPowerupDownImage();
      this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      fVar3 = (float)ZombieType::GetPacketCoolDown(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      fVar3 = 0.0;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x170));
      if (bVar1) {
        PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
        this = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        fVar3 = (float)GridItemType::GetPacketCoolDown(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
  }
  fVar4 = (float)PVZ_T();
  *(float *)(param_1 + 0x194) = fVar4 + fVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket::updateState_NotReady() */

void __thiscall SeedPacket::updateState_NotReady(SeedPacket *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x194) <= fVar1) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onAccessoryActionComplete() */

void __thiscall SeedPacket::onAccessoryActionComplete(SeedPacket *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  PlantNameMapperServerID *pPVar6;
  undefined8 uVar7;
  NameMapperBase *this_00;
  long lVar8;
  MiniGameCollectionNetworkMgr *this_01;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if (!bVar1) goto LAB_04431eb8;
  pPVar6 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  fVar10 = 0.0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x168));
  uVar3 = PlantNameMapperServerID::GetIdForType(pPVar6,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar2 = FUN_04430f38(*(undefined4 *)(this + 400));
  if (cVar2 == '\0') {
    cVar2 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
    if (cVar2 == '\0') goto LAB_04431f34;
LAB_04431fec:
    lVar8 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    iVar5 = FUN_04430978(*(undefined4 *)(lVar8 + 0xd0));
    if (iVar5 != 0) goto LAB_04431f34;
    uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar9 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar3,10,0);
    this_01 = (MiniGameCollectionNetworkMgr *)
              Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    fVar11 = (float)MiniGameCollectionNetworkMgr::GetPlantCooldownSpeed(this_01);
    *(float *)(this + 0x1d8) = 1.0 / ((fVar9 + fVar10) * (1.0 - fVar11) + 1.0);
  }
  else {
    this_00 = (NameMapperBase *)PlantNameMapper::GetInstance();
    std::string::string((string *)aRStack_10,"imitater");
    uVar4 = NameMapperBase::GetIdForName(this_00,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar10 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar4,10,0);
    cVar2 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
    if (cVar2 != '\0') goto LAB_04431fec;
LAB_04431f34:
    uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar9 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar3,10,0);
    *(float *)(this + 0x1d8) = 1.0 / (fVar10 + 1.0 + fVar9);
  }
  uVar7 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar3 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar7,uVar3,0x1a,0);
  *(undefined4 *)(this + 0x1e0) = uVar3;
LAB_04431eb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket::GetZombieRenderData() */

void __thiscall SeedPacket::GetZombieRenderData(SeedPacket *this)

{
  SeedPacketUtils *this_00;
  
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::GetZombiePacketRenderData
            (this_00,(string *)(this + 0x188),(string *)(this + 0x1b0),-1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::GetSunCost() */

void __thiscall SeedPacket::GetSunCost(SeedPacket *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  ArtifactMgr *this_01;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  cVar1 = ArtifactMgr::CanFreePlanting(this_01);
  if ((cVar1 == '\0') &&
     ((cVar1 = CopycatsUtils::IsPlayingCopycats(), cVar1 == '\0' ||
      (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 != '\0')))) {
    this_00 = (RtWeakPtr *)(this + 0x168);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      uVar4 = (ulong)*(uint *)(this + 0x1c8);
      if (*(uint *)(this + 0x1c8) == 0) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5,0xfffffffe);
        uVar4 = uVar4 & 0xffffffff;
        cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
        if ((cVar1 != '\0') ||
           ((cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar1 != '\0' &&
            (iVar3 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar3 == 0)))) {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          uVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,1);
        }
      }
      goto LAB_044320a8;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar2) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      uVar4 = (**(code **)(*plVar5 + 0x48))();
      goto LAB_044320a8;
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
    if (bVar2) {
      PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar2 = std::operator==((string *)(lVar6 + 8),"BesiegeBox");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (bVar2) {
        uVar4 = 100;
        goto LAB_044320a8;
      }
    }
  }
  uVar4 = 0;
LAB_044320a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* SeedPacket::IsUsable() */

char __thiscall SeedPacket::IsUsable(SeedPacket *this)

{
  undefined4 uVar1;
  char cVar2;
  ArtifactMgr *this_00;
  
  uVar1 = *(undefined4 *)(this + 400);
  cVar2 = FUN_04430ed8(uVar1);
  if (cVar2 != '\0') {
    return '\0';
  }
  cVar2 = FUN_04430ee0(uVar1);
  if (cVar2 == '\0') {
    cVar2 = UIWidget::isInState((UIWidget *)this,3);
    if (cVar2 != '\0') {
      this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      cVar2 = ArtifactMgr::CanFreeNoCD(this_00);
      if (cVar2 == '\0') {
        return '\0';
      }
    }
    return '\x01';
  }
  return cVar2;
}


/* SeedPacket::onSeedPacketPlanted(SeedPacket*) */

void __thiscall SeedPacket::onSeedPacketPlanted(SeedPacket *this,SeedPacket *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ArtifactMgr *this_00;
  long lVar3;
  float fVar4;
  
  if (param_1 == this) {
    if ((param_1[0x1e4] != (SeedPacket)0x0) && (0 < *(int *)(param_1 + 0x1e8))) {
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + -1;
    }
    cVar1 = FUN_04430ee0(*(undefined4 *)(param_1 + 400));
    if (cVar1 == '\0') {
      this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      cVar1 = ArtifactMgr::CanFreeNoCD(this_00);
      if ((((cVar1 == '\0') && (param_1[0x198] != (SeedPacket)0x0)) &&
          ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0 ||
           ((lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar3 == 0 ||
            (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
            *(char *)(lVar3 + 0x114) == '\0')))))) &&
         (fVar4 = (float)Sexy::Rand(1.0), *(float *)(param_1 + 0x1e0) <= fVar4)) {
        (**(code **)(*(long *)param_1 + 0xe8))(param_1,3);
        goto LAB_0443228c;
      }
    }
    (**(code **)(*(long *)param_1 + 0xe8))(param_1,2);
  }
LAB_0443228c:
  uVar2 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)this + 0x210))(this,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onPlantDieCostChanged(Plant*, int) */

void SeedPacket::onPlantDieCostChanged(Plant *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  DangerRoomManager *this;
  ArtifactMgr *this_00;
  bool bVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  cVar1 = Sexy::RtWeakPtrBase::operator==
                    ((RtWeakPtrBase *)(param_1 + 0x168),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    iVar3 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x168));
    if (*(code **)(*plVar5 + 0x98) == PlantType::GetRefundSunCount) {
      iVar4 = PlantType::GetRefundSunCount();
    }
    else {
      iVar4 = (**(code **)(*plVar5 + 0x98))();
    }
    this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar1 = DangerRoomManager::IsTrainingMode(this);
    this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    cVar2 = ArtifactMgr::CanFreePlanting(this_00);
    if ((cVar2 == '\0') && (cVar1 == '\0')) {
      bVar6 = iVar4 <= iVar3;
    }
    else {
      bVar6 = true;
    }
    setAffordable((SeedPacket *)param_1,bVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::onCursorDestroyed(BaseCursor*) */

void __thiscall SeedPacket::onCursorDestroyed(SeedPacket *this,BaseCursor *param_1)

{
  bool bVar1;
  char cVar2;
  PlantCursor *pPVar3;
  ResourceInfo *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BaseCursor *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1);
    if (bVar1) {
      pPVar3 = Sexy::RtObject::Cast<PlantCursor>((RtObject *)param_1);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<ZombieCursor>((RtObject *)param_1);
      if (bVar1) {
        pPVar3 = (PlantCursor *)Sexy::RtObject::Cast<ZombieCursor>((RtObject *)param_1);
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItemCursor>((RtObject *)param_1);
        if (bVar1) {
          pPVar3 = (PlantCursor *)Sexy::RtObject::Cast<GridItemCursor>((RtObject *)param_1);
        }
        else {
          bVar1 = Sexy::RtObject::IsA<PacketCursor>((RtObject *)param_1);
          if (!bVar1) goto LAB_04432514;
          pPVar3 = (PlantCursor *)Sexy::RtObject::Cast<PacketCursor>((RtObject *)param_1);
        }
      }
    }
    if (pPVar3 != (PlantCursor *)0x0) {
      PlantTwinsHoneySuckle::GetAssistPerson();
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      if (this_00 == (ResourceInfo *)this) {
        cVar2 = UIWidget::isInState((UIWidget *)this_00,4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_00 + 0xe8))(this_00,2);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
  }
LAB_04432514:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::CreateAffordEffect(std::string const&, std::string const&, int, int, int, int) */

void __thiscall
SeedPacket::CreateAffordEffect
          (SeedPacket *this,string *param_1,string *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetBoardBaseOffset();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::SetCentered(this_00,true);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_2,0);
  UIWidget::GetDrawRect();
  Sexy::FastCurve::SetOutRange
            (aFStack_20,(float)((param_3 + local_18 + param_5) - local_28),
             (float)((param_4 + local_14 + param_6) - local_24));
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)aFStack_20,900000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::PlayCardAffordEffect() */

void __thiscall SeedPacket::PlayCardAffordEffect(SeedPacket *this)

{
  int iVar1;
  int iVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_UI_PVP_INBATTLEANIM_CARD_EFFECT");
  std::string::string(asStack_10,"idle");
  iVar1 = FUN_04430c68(0x6e);
  iVar2 = FUN_04430c68(0x28);
  CreateAffordEffect(this,asStack_18,asStack_10,iVar1,iVar2,0,0);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::PlayWordAffordEffect(int, int) */

void __thiscall SeedPacket::PlayWordAffordEffect(SeedPacket *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_UI_PVP_INBATTLEANIM_WORD_EFFECT");
  std::string::string(asStack_10,"idle1");
  iVar1 = FUN_04430c68(0x7d);
  iVar2 = FUN_04430c68(0x3c);
  CreateAffordEffect(this,asStack_18,asStack_10,iVar1,iVar2,param_1,param_2);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::ShowBoarderEffect(bool) */

void __thiscall SeedPacket::ShowBoarderEffect(SeedPacket *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SeedPacketUtils *this_00;
  long lVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  PopAnimRig *pPVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar6 = SeedPacketUtils::GetPlantPacketRenderData
                      (this_00,(string *)(this + 0x188),*(int *)(this + 0x1cc),
                       *(int *)(this + 0x1d0),-1);
    iVar1 = *(int *)(lVar6 + 0x28);
    iVar2 = *(int *)(lVar6 + 0x30);
    iVar3 = *(int *)(lVar6 + 0x2c);
    iVar4 = *(int *)(lVar6 + 0x34);
    iVar5 = *(int *)(gLawnApp + 0xd8);
    this_01 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    std::string::string(asStack_40,"POPANIM_EFFECTS_SEED_PACKET_BORDER");
    GetPAMByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    *(float *)(lVar6 + 0x28) = (float)iVar5 * 0.0006510417;
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_40,(float)(iVar2 + iVar1 / 2),(float)(iVar4 + iVar3 / 2));
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector2 *)asStack_40,900000);
    Effect_PopAnim::SetCentered(this_01,true);
    pPVar8 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar8,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(Effect_PopAnim **)(this + 0x1f0) = this_01;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else if (*(long **)(this + 0x1f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f0) + 0x18))();
    *(undefined8 *)(this + 0x1f0) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket::drawPlantFavoriteIcon(Sexy::Graphics*, Sexy::Image*, PacketRenderData const&) */

void __thiscall
SeedPacket::drawPlantFavoriteIcon
          (SeedPacket *this,Graphics *param_1,Image *param_2,PacketRenderData *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  
  cVar3 = FUN_04430f50(*(undefined4 *)(this + 400));
  if (cVar3 == '\0') {
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07b48);
  iVar1 = *(int *)(param_3 + 0x100);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_04430c68(9);
  iVar2 = *(int *)(param_3 + 0x104);
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  iVar7 = FUN_04430c68(0x1a);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)this_00,iVar5 + (iVar1 + iVar4) / 2,iVar7 + (iVar2 + iVar6) / 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::registerForEvents() */

void __thiscall SeedPacket::registerForEvents(SeedPacket *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *local_170;
  undefined8 uStack_168;
  LineBreakCategory *local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  LineBreakCategory aLStack_e8 [8];
  string asStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  LineBreakCategory *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  LineBreakCategory *local_50;
  undefined8 uStack_48;
  LineBreakCategory *local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  pLVar4 = aLStack_e8;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f0);
  local_100 = local_b8;
  local_110 = local_c8;
  uStack_108 = uStack_c0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunBanked,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f0);
  local_110 = local_b0;
  uStack_108 = uStack_a8;
  local_100 = local_a0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunChanged,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f8);
  local_120 = local_88;
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<SeedPacket*,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(SeedPacket*)>>
            ((MessageRouter *)puVar1,Message::SeedPacketPlanted,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x208);
  local_150 = local_80;
  uStack_148 = uStack_78;
  local_140 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<SeedPacket,void(SeedPacket::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantCostChanged);
  local_160 = (LineBreakCategory *)local_58;
  local_170 = local_68;
  uStack_168 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::PlantCostChanged,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDieCostChanged);
  local_170 = local_50;
  uStack_168 = uStack_48;
  local_160 = local_40;
  MessageRouter::
  Subscribe<Plant*,int,Sexy::CBMemberTranslatorX<SeedPacket,void(SeedPacket::*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::PlantDieCostChanged,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAccessoryActionComplete);
  Sexy::Delegate0::Delegate0<SeedPacket,void(SeedPacket::*)()>(aDStack_38,asStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ActionComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<SeedPacket,void(SeedPacket::*)()>(aDStack_38,asStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FreeplantingCheatEnabled,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  Sexy::Delegate0::Delegate0<SeedPacket,void(SeedPacket::*)()>(aDStack_38,asStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FreeplantingCheatDisabled,aDStack_38);
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_e0,"FreePlanting");
  uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_e0,pLVar4,local_40,local_50);
  SetFlag<DebugLogFlags>(this + 400,0x20,uVar2);
  std::string::~string(asStack_e0);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::IsShowExpHit() */

void __thiscall SeedPacket::IsShowExpHit(SeedPacket *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ProfileMgr *this_01;
  long lVar4;
  PlantNameMapperServerID *pPVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1f8] != (SeedPacket)0x0) {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x168);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if ((cVar1 == '\0') &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar1 != '\0')) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = ProfileMgr::GetCurrentProfile(this_01);
      if (lVar4 != 0) {
        pPVar5 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
        PlantNameMapperServerID::GetIdForType(pPVar5,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        iVar3 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
        uVar2 = TrialCardManager::IsTrialingPlant(iVar3);
        goto LAB_04433380;
      }
    }
  }
  uVar2 = 0;
LAB_04433380:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SeedPacket() */

void __thiscall SeedPacket::SeedPacket(SeedPacket *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantNameMapperServerID *pPVar4;
  undefined8 uVar5;
  RiftThemeBuffPlantFastCD *pRVar6;
  long lVar7;
  MiniGameCollectionNetworkMgr *this_01;
  LawnApp *pLVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06849eb0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_0684a0f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  Set8BytesTo0(this + 0x188);
  Set8BytesTo0(this + 0x1b0);
  Sexy::Insets::Insets((Insets *)(this + 0x1b8),0,0,0,0);
  this[0x1e4] = (SeedPacket)0x0;
  *(undefined4 *)(this + 0x1e8) = 0;
  this[0x1ec] = (SeedPacket)0x0;
  this[0x1f8] = (SeedPacket)0x0;
  *(undefined4 *)(this + 0x1fc) = 0x3f800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined4 *)(this + 400) = 0;
  uVar9 = PVZ_EOT();
  this[0x198] = (SeedPacket)0x1;
  this[0x199] = (SeedPacket)0x0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d0) = 0xffffffff;
  *(undefined4 *)(this + 0x1cc) = 0xffffffff;
  this[0x1a8] = (SeedPacket)0x0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x194) = uVar9;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  pLVar8 = gLawnApp;
  if (!bVar1) goto LAB_044335ac;
  pPVar4 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_00);
  uVar9 = PlantNameMapperServerID::GetIdForType(pPVar4,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  cVar2 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
  if (cVar2 == '\0') {
LAB_04433680:
    uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar10 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar9,10,0);
    *(float *)(this + 0x1d8) = 1.0 / (fVar10 + 1.0);
  }
  else {
    lVar7 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    iVar3 = FUN_04430978(*(undefined4 *)(lVar7 + 0xd0));
    if (iVar3 != 0) goto LAB_04433680;
    uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar10 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar9,10,0);
    this_01 = (MiniGameCollectionNetworkMgr *)
              Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    fVar11 = (float)MiniGameCollectionNetworkMgr::GetPlantCooldownSpeed(this_01);
    *(float *)(this + 0x1d8) = 1.0 / (fVar10 * (1.0 - fVar11) + 1.0);
  }
  uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar9 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar9,0x1a,0);
  *(undefined4 *)(this + 0x1e0) = uVar9;
  pRVar6 = RiftUtils::GetThemeByClass<RiftThemeBuffPlantFastCD>();
  if (pRVar6 != (RiftThemeBuffPlantFastCD *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_00);
    RiftThemeBuffPlantFastCD::GetReducedCD(pRVar6,a_Stack_10,this + 0x1dc);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  cVar2 = IsShowExpHit(this);
  pLVar8 = gLawnApp;
  if ((cVar2 != '\0') && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    uVar9 = Board::GetCurrentZombieMaxLevel(*(Board **)(gLawnApp + 0x9f0));
    pLVar8 = gLawnApp;
    *(undefined4 *)(this + 0x1cc) = uVar9;
  }
LAB_044335ac:
  std::string::string((string *)a_Stack_10,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar8,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar8 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_SeedChooser");
  LawnApp::LoadGroup(pLVar8,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedPacket::StaticNew() */

SeedPacket * SeedPacket::StaticNew(void)

{
  SeedPacket *this;
  
  this = ::operator_new(0x200);
  SeedPacket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetZombieType(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall SeedPacket::SetZombieType(SeedPacket *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  FUN_05474ff8(this + 0x188);
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    thunk_FUN_05475e00(this + 0x188,lVar2 + 8);
    MessageRouter::Post<SeedPacket*,SeedPacket*>
              ((MessageRouter *)gMessageRouter,Message::SeedPacketTypeChanged,this);
    lVar2 = (**(code **)(*(long *)this + 0x1b0))(this);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar2 + 0x170));
    Sexy::Insets::Insets(aIStack_18,0,0,1,1);
    UIWidget::SetAtlasImageData((UIWidget *)this,pRVar3,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetGridItemType(Sexy::RtWeakPtr<GridItemType const>) */

void __thiscall SeedPacket::SetGridItemType(SeedPacket *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  string *psVar1;
  bool bVar2;
  long lVar3;
  SeedPacketUtils *this_01;
  ResourceInfo *pRVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x170);
  psVar1 = (string *)(this + 0x188);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  FUN_05474ff8(psVar1);
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    thunk_FUN_05475e00(psVar1,lVar3 + 8);
    MessageRouter::Post<SeedPacket*,SeedPacket*>
              ((MessageRouter *)gMessageRouter,Message::SeedPacketTypeChanged,this);
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar3 = SeedPacketUtils::GetGridItemPacketRenderData(this_01,psVar1,-1,-1);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar3 + 0x170));
    Sexy::Insets::Insets(aIStack_18,0,0,1,1);
    UIWidget::SetAtlasImageData((UIWidget *)this,pRVar4,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetPlantType(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall SeedPacket::SetPlantType(SeedPacket *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  string *psVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PlantNameMapperServerID *pPVar8;
  undefined8 uVar9;
  RiftThemeBuffPlantFastCD *pRVar10;
  UnchartedBoostMgr *pUVar11;
  ResourceInfo *pRVar12;
  long lVar13;
  SeedPacketUtils *this_01;
  LevelModule *pLVar14;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  MiniGameCollectionNetworkMgr *this_04;
  NameMapperBase *this_05;
  PennyClassroomModuleProperties *pPVar15;
  RtObject *pRVar16;
  PresetPlantModuleProperties *pPVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  RtWeakPtr aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [12];
  int local_2c;
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x168);
  psVar1 = (string *)(this + 0x188);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  FUN_05474ff8(psVar1);
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (!bVar2) goto LAB_04433a30;
  pPVar8 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  fVar19 = 0.0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)this_00);
  uVar4 = PlantNameMapperServerID::GetIdForType(pPVar8,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  cVar3 = FUN_04430f38(*(undefined4 *)(this + 400));
  if (cVar3 != '\0') {
    this_05 = (NameMapperBase *)PlantNameMapper::GetInstance();
    std::string::string((string *)aRStack_38,"imitater");
    uVar7 = NameMapperBase::GetIdForName(this_05,(string *)aRStack_38);
    std::string::~string((string *)aRStack_38);
    nop();
    uVar9 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar19 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar9,uVar7,10,0);
  }
  cVar3 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
  if (cVar3 == '\0') {
LAB_04433ab0:
    uVar9 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar18 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar9,uVar4,10,0);
    *(float *)(this + 0x1d8) = 1.0 / (fVar19 + 1.0 + fVar18);
  }
  else {
    lVar13 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    iVar6 = FUN_04430978(*(undefined4 *)(lVar13 + 0xd0));
    if (iVar6 != 0) goto LAB_04433ab0;
    uVar9 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
    fVar18 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar9,uVar4,10,0);
    this_04 = (MiniGameCollectionNetworkMgr *)
              Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
    fVar20 = (float)MiniGameCollectionNetworkMgr::GetPlantCooldownSpeed(this_04);
    *(float *)(this + 0x1d8) = 1.0 / ((fVar18 + fVar19) * (1.0 - fVar20) + 1.0);
  }
  uVar9 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  uVar4 = PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar9,uVar4,0x1a,0);
  *(undefined4 *)(this + 0x1e0) = uVar4;
  pRVar10 = RiftUtils::GetThemeByClass<RiftThemeBuffPlantFastCD>();
  if (pRVar10 != (RiftThemeBuffPlantFastCD *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)this_00);
    RiftThemeBuffPlantFastCD::GetReducedCD(pRVar10,aRStack_38,this + 0x1dc);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  pUVar11 = (UnchartedBoostMgr *)Sexy::LazySingleton<UnchartedBoostMgr>::GetInstancePtr();
  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  fVar19 = (float)UnchartedBoostMgr::GetBoostValue(pUVar11,pRVar12,2,0);
  iVar6 = *(int *)(this + 0x1cc);
  *(float *)(this + 0x1dc) = *(float *)(this + 0x1dc) + fVar19;
  if ((iVar6 == -1) && (cVar3 = IsShowExpHit(this), cVar3 != '\0')) {
    pPVar8 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)this_00);
    PlantNameMapperServerID::GetIdForType(pPVar8,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar6 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    TrialCardManager::GetConfigForBestTrialStatus(iVar6);
    TrialCardConfig::~TrialCardConfig((TrialCardConfig *)aRStack_38);
    iVar6 = local_2c;
  }
  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  thunk_FUN_05475e00(psVar1,lVar13 + 8);
  MessageRouter::Post<SeedPacket*,SeedPacket*>
            ((MessageRouter *)gMessageRouter,Message::SeedPacketTypeChanged,this);
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar13 = SeedPacketUtils::GetPlantPacketRenderData(this_01,psVar1,iVar6,*(int *)(this + 0x1d0),-1)
  ;
  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar13 + 0x170));
  Sexy::Insets::Insets((Insets *)aRStack_38,0,0,1,1);
  UIWidget::SetAtlasImageData((UIWidget *)this,pRVar12,aRStack_38);
  Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
  cVar3 = PennyClassroomManager::IsPennyClassroomLevel();
  if (cVar3 == '\0') {
    cVar3 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
    if (cVar3 != '\0') {
      pLVar14 = (LevelModule *)FUN_04432c48(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      if (pLVar14 == (LevelModule *)0x0) {
        uVar4 = PlayerInfo::GetPlantStarLevel(this_03,psVar1,false);
        *(undefined4 *)(this + 0x180) = uVar4;
      }
      else {
        pPVar17 = (PresetPlantModuleProperties *)0x0;
        LevelModule::GetPropsPtr(pLVar14);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
        if (bVar2) {
          LevelModule::GetPropsPtr(pLVar14);
          pRVar16 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          pPVar17 = Sexy::RtObject::Cast<PresetPlantModuleProperties>(pRVar16);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        FUN_05475d88(aRStack_38,psVar1);
        cVar3 = PresetPlantModuleProperties::IsPlant(pPVar17,aRStack_38);
        std::string::~string((string *)aRStack_38);
        if (cVar3 == '\0') {
          uVar4 = PlayerInfo::GetPlantStarLevel(this_03,psVar1,false);
          *(undefined4 *)(this + 0x180) = uVar4;
        }
        else {
          FUN_05475d88(aRStack_38,psVar1);
          iVar5 = PresetPlantModuleProperties::GetPlantLevel(pPVar17,aRStack_38);
          std::string::~string((string *)aRStack_38);
          iVar6 = PlayerInfo::GetPlantStarLevel(this_03,psVar1,false);
          if (iVar6 < iVar5) {
            iVar6 = iVar5;
          }
          *(int *)(this + 0x180) = iVar6;
        }
      }
    }
  }
  else {
    pLVar14 = (LevelModule *)FUN_04432c3c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModule::GetPropsPtr(pLVar14);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
    if (bVar2) {
      LevelModule::GetPropsPtr(pLVar14);
      pRVar16 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pPVar15 = Sexy::RtObject::Cast<PennyClassroomModuleProperties>(pRVar16);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      if (pPVar15 != (PennyClassroomModuleProperties *)0x0) {
        FUN_05475d88(aRStack_38,psVar1);
        uVar4 = PresetPlantModuleProperties::GetPlantLevel
                          ((PresetPlantModuleProperties *)pPVar15,aRStack_38);
        std::string::~string((string *)aRStack_38);
        *(undefined4 *)(this + 0x180) = uVar4;
        goto LAB_04433a30;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    *(undefined4 *)(this + 0x180) = 1;
  }
LAB_04433a30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket::OnTouch(SeedPacket *this,Touch *param_1)

{
  undefined *puVar1;
  SeedPacket SVar2;
  bool bVar3;
  SeedPacket SVar4;
  char cVar5;
  int iVar6;
  string *psVar7;
  char *pcVar8;
  long lVar9;
  NewPVPMgr *pNVar10;
  BaseCursor *pBVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  Board *pBVar14;
  code *pcVar15;
  RtWeakPtrBase aRStack_80 [8];
  Touch aTStack_78 [16];
  Point aPStack_68 [8];
  Point aPStack_60 [32];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SVar4 = (SeedPacket)0x0;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_04433f94;
  pBVar14 = *(Board **)(gLawnApp + 0x9f0);
  iVar6 = FUN_04430970(*(undefined4 *)(pBVar14 + 0x104));
  if (iVar6 == 3) {
LAB_04433fe0:
    SVar4 = (SeedPacket)0x0;
    goto LAB_04433f94;
  }
  if (iVar6 == 4) {
    psVar7 = (string *)Board::GetLevel(pBVar14);
    bVar3 = std::operator!=(psVar7,"egypt1");
    if (bVar3) goto LAB_04433fe0;
  }
  SVar4 = this[0x199];
  if (SVar4 == (SeedPacket)0x0) {
    SVar2 = (SeedPacket)(**(code **)(*(long *)this + 400))(this);
    if (SVar2 != (SeedPacket)0x0) {
      if (*(code **)(*(long *)this + 0x1c0) == IsAffordable) {
        SVar4 = (SeedPacket)IsAffordable(this);
      }
      else {
        SVar4 = (SeedPacket)(**(code **)(*(long *)this + 0x1c0))();
      }
      if (SVar4 == (SeedPacket)0x0) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        pBVar14 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05478178(aRStack_40,L"[ADVICE_NOT_ENOUGH_SUN]",aTStack_78);
        Board::DisplayAdvice(pBVar14,aRStack_40,7,2);
        FUN_05476c50(aRStack_40);
        nop();
        pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar8,"Play_Buzzer");
        SVar4 = SVar2;
        goto LAB_04433f94;
      }
      lVar9 = Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
      iVar6 = FUN_04430974(*(undefined4 *)(lVar9 + 0x44));
      puVar1 = gMessageRouter;
      if (iVar6 == 2) {
        uVar13 = PVPManager::GetPVPMapDataList((PVPManager *)this);
        FUN_05475d88((string *)aRStack_40,uVar13);
        MessageRouter::Broadcast<std::string&,std::string>
                  ((MessageRouter *)puVar1,Message::BeghouledPlantUpgraded,(string *)aRStack_40);
        std::string::~string((string *)aRStack_40);
        goto LAB_04433f94;
      }
      cVar5 = IsPressState(this);
      if (cVar5 != '\0') goto LAB_04433f94;
      Sexy::Touch::Touch(aTStack_78,param_1);
      Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_68);
      Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_60);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
      if (bVar3) {
        pBVar14 = *(Board **)(gLawnApp + 0x9f0);
        pNVar10 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,aRStack_80);
        pBVar11 = (BaseCursor *)NewPVPMgr::TryAddPlantCursor(pNVar10,aTStack_78,aRStack_40);
LAB_04434224:
        SVar2 = (SeedPacket)Board::TryToAddCursor(pBVar14,pBVar11,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
      }
      else {
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
        if (!bVar3) {
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
          if (!bVar3) goto LAB_04433f94;
          pBVar14 = *(Board **)(gLawnApp + 0x9f0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,aRStack_80);
          pBVar11 = ::operator_new(0x60);
          GridItemCursor::GridItemCursor((GridItemCursor *)pBVar11,aTStack_78,aRStack_40);
          goto LAB_04434224;
        }
        pBVar14 = *(Board **)(gLawnApp + 0x9f0);
        pcVar15 = *(code **)(*(long *)this + 0x1d8);
        Sexy::Touch::Touch((Touch *)aRStack_40,aTStack_78);
        pBVar11 = (BaseCursor *)(*pcVar15)(this,(Touch *)aRStack_40);
        SVar2 = (SeedPacket)Board::TryToAddCursor(pBVar14,pBVar11,true);
      }
      if (SVar2 != (SeedPacket)0x0) {
        (**(code **)(*(long *)this + 0xe8))(this,4);
        SVar4 = SVar2;
      }
      goto LAB_04433f94;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar3) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      lVar9 = FUN_05474374(lVar9 + 8,"izombie_",0);
      if (lVar9 == -1) goto LAB_04434014;
      pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar8,"Play_Buzzer");
      pwVar12 = L"[ADVICE_SEED_REFRESH_IZOMBIE]";
      pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    }
    else {
LAB_04434014:
      pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar8,"Play_Buzzer");
      pwVar12 = L"[ADVICE_SEED_REFRESH]";
      pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    }
    SVar4 = (SeedPacket)0x1;
    FUN_05478178(aRStack_40,pwVar12,aTStack_78);
    uVar13 = 9;
  }
  else {
    pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aRStack_40,L"[PACKET_LAST_STAND_LOCKED]",aTStack_78);
    uVar13 = 7;
  }
  Board::DisplayAdvice(pBVar14,aRStack_40,uVar13,2);
  FUN_05476c50(aRStack_40);
  nop();
LAB_04433f94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(SVar4);
  }
  return;
}


/* SeedPacket::onEnterState_Pressed(WidgetState) */

void SeedPacket::onEnterState_Pressed(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_SeedLift");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::CheckResourceLoaded() */

void __thiscall SeedPacket::CheckResourceLoaded(SeedPacket *this)

{
  bool bVar1;
  string *psVar2;
  long *plVar3;
  GridItemType *this_00;
  ZombieType *this_01;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ec] == (SeedPacket)0x0) {
    this[0x1ec] = (SeedPacket)0x1;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
      (**(code **)(*plVar3 + 0x48))(plVar3,amStack_38);
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar1) {
      this_01 = (ZombieType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      ZombieType::AddInGameResourceRequirements(this_01,(set *)amStack_38);
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
    if (bVar1) {
      this_00 = (GridItemType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
      GridItemType::AddResourceRequirements(this_00,(set *)amStack_38);
    }
    local_48 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                         ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                          amStack_38);
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40),
          bVar1) {
      psVar2 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
      Board::LoadResourceGroupForGameplay(*(Board **)(gLawnApp + 0x9f0),psVar2);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
    }
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::DrawRenderData(Sexy::Graphics*, PacketRenderData const&) */

void __thiscall
SeedPacket::DrawRenderData(SeedPacket *this,Graphics *param_1,PacketRenderData *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  Image *pIVar17;
  Image *pIVar18;
  RenderEffectDefinition *pRVar19;
  RenderEffect *pRVar20;
  ZombieType *this_00;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ArtifactMgr *this_03;
  PlantType *pPVar21;
  GridItemType *this_04;
  code *pcVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  Insets local_50 [8];
  undefined8 uStack_48;
  RtMixedPtr<Sexy::Image> aRStack_40 [16];
  Insets aIStack_30 [16];
  float local_20 [2];
  undefined4 uStack_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)local_50,1);
  if (*(code **)(*(long *)this + 0x1c0) == IsAffordable) {
    bVar3 = IsAffordable(this);
  }
  else {
    bVar3 = (**(code **)(*(long *)this + 0x1c0))();
  }
  cVar4 = FUN_04430ed8(*(undefined4 *)(this + 400));
  cVar5 = UIWidget::isInState((UIWidget *)this,3);
  uVar24 = *(undefined4 *)(this + 400);
  bVar10 = 0;
  if (cVar5 != '\0') {
    cVar5 = FUN_04430ee0(uVar24);
    if ((cVar5 == '\0') && (cVar4 == '\0')) {
      this_03 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      bVar10 = ArtifactMgr::CanFreeNoCD(this_03);
      bVar10 = bVar10 ^ 1;
      uVar24 = *(undefined4 *)(this + 400);
    }
    else {
      bVar10 = 0;
    }
  }
  cVar5 = FUN_04430f20(uVar24);
  cVar6 = FUN_04430f28(uVar24);
  GetPlantType();
  cVar7 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_40);
  if (cVar7 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
joined_r0x04434b04:
    if ((((cVar6 != '\0') || (cVar7 = FUN_04430d98(*(undefined4 *)(this + 0x68)), cVar7 == '\0')) ||
        (cVar4 != '\0')) ||
       ((cVar5 != '\0' ||
        (bVar9 = FUN_04430f30(*(undefined4 *)(this + 400)), bVar9 < (bVar3 <= bVar10))))) {
      Sexy::Insets::Insets(aIStack_30,local_50);
      Sexy::Insets::Insets((Insets *)aRStack_40,0,0,0,0xff);
      Sexy::ColorLerp((Sexy *)local_20,0x3f000000,aIStack_30,aRStack_40);
      uStack_48 = CONCAT44(local_14,uStack_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
  }
  else {
    PowerupUI::GetPowerupDownImage();
    cVar7 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aIStack_30);
    if (cVar7 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      goto joined_r0x04434b04;
    }
    PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
    cVar7 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    if (cVar7 == '\0') goto joined_r0x04434b04;
    uStack_48 = CONCAT44(0x50,(undefined4)uStack_48);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  Sexy::Graphics::SetColor(param_1,(Color *)local_50);
  pIVar17 = (Image *)UIWidget::GetAtlasImage((UIWidget *)this);
  cVar4 = UIWidget::isInState((UIWidget *)this,4);
  if (cVar4 == '\0') {
    if (this[0x1e4] == (SeedPacket)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar17,*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),
                 (TRect *)(param_2 + 0x20));
    }
    else {
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d48);
      Sexy::Graphics::DrawImage(param_1,pIVar18,*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34));
    }
LAB_0443471c:
    GetPlantType();
    bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (!bVar8) goto LAB_044346bc;
LAB_04434738:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  else {
    if (this[0x1e4] == (SeedPacket)0x0) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar17,*(int *)(param_2 + 0x78),*(int *)(param_2 + 0x7c),
                 (TRect *)(param_2 + 0x68));
      goto LAB_0443471c;
    }
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d48);
    Sexy::Graphics::DrawImage(param_1,pIVar18,*(int *)(param_2 + 0x78),*(int *)(param_2 + 0x7c));
    GetPlantType();
    bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (bVar8) goto LAB_04434738;
LAB_044346bc:
    PowerupUI::GetPowerupDownImage();
    bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aIStack_30);
    if (bVar8) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    else {
      PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
      bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      if (!bVar8) {
        Sexy::Graphics::DrawImage
                  (param_1,pIVar17,*(int *)(param_2 + 0xc0),*(int *)(param_2 + 0xc4),
                   (TRect *)(param_2 + 0xb0));
        Sexy::Graphics::DrawImage
                  (param_1,pIVar17,*(int *)(param_2 + 0xf0),*(int *)(param_2 + 0xf4),
                   (TRect *)(param_2 + 0xe0));
        Sexy::Graphics::DrawImage
                  (param_1,pIVar17,*(int *)(param_2 + 0xd8),*(int *)(param_2 + 0xdc),
                   (TRect *)(param_2 + 200));
        goto LAB_04434880;
      }
    }
  }
  cVar4 = FUN_04430f38(*(undefined4 *)(this + 400));
  if (cVar4 == '\0') {
    Sexy::Graphics::DrawImage
              (param_1,pIVar17,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),
               (TRect *)(param_2 + 8));
  }
  else {
    pRVar19 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b07cf0);
    pRVar20 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar19);
    pcVar22 = *(code **)(*(long *)pRVar20 + 0x38);
    std::string::string((string *)local_20,"Default");
    (*pcVar22)(pRVar20,(string *)local_20,1);
    std::string::~string((string *)local_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)local_20,param_1,pRVar20,1);
    while (bVar8 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)local_20), bVar8) {
      Sexy::Graphics::DrawImage
                (param_1,pIVar17,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),
                 (TRect *)(param_2 + 8));
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)local_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)local_20);
  }
  if (bVar10 != 0) {
    fVar25 = (float)FUN_044308c8(*(undefined4 *)(this + 0x6c));
    bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar8) {
      GetPlantType();
      pPVar21 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      fVar23 = (float)PlantType::GetPacketCoolDown(pPVar21,0xfffffffe);
      fVar26 = *(float *)(this + 0x1d8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      fVar23 = (1.0 - *(float *)(this + 0x1dc)) * fVar26 * fVar23;
    }
    else {
      bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
      if (bVar8) {
        PowerupUI::GetPowerupDownImage();
        this_00 = (ZombieType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
        fVar23 = (float)ZombieType::GetPacketCoolDown(this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      else {
        bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
        if (bVar8) {
          PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
          this_04 = (GridItemType *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
          fVar23 = (float)GridItemType::GetPacketCoolDown(this_04);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
        }
        else {
          fVar23 = 0.0;
        }
      }
    }
    uVar24 = PVZ_T();
    local_20[0] = (float)*(int *)(param_2 + 0xa4);
    fVar25 = CurveLerp<float>(fVar25,fVar23 + fVar25,uVar24,(Insets *)local_20,&DAT_06a88714,1);
    Sexy::Insets::Insets((Insets *)local_20,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_20);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)local_20,(Insets *)(param_2 + 0x98));
    local_14 = (int)fVar25;
    Sexy::Graphics::DrawImage
              (param_1,pIVar17,*(int *)(param_2 + 0xa8),*(int *)(param_2 + 0xac),(TRect *)local_20);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (cVar5 != '\0') {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Color::Color((Color *)local_20,1);
    Sexy::Graphics::SetColor(param_1,(Color *)local_20);
    Sexy::Graphics::DrawImage
              (param_1,pIVar17,*(int *)(param_2 + 0x90),*(int *)(param_2 + 0x94),
               (TRect *)(param_2 + 0x80));
  }
  (**(code **)(*(long *)this + 0x220))(this,param_1);
  cVar4 = FUN_04430f40(*(undefined4 *)(this + 400));
  if (cVar4 != '\0') {
    fVar25 = (float)PVZ_T();
    fVar25 = fmodf(fVar25,1.0);
    local_20[0] = 0.0;
    fVar25 = CurveLerp<float>(0,0x40000000,fVar25,(Insets *)local_20,&DAT_06a88710,0xc);
    Sexy::Color::Color((Color *)aIStack_30,0xffee44,(int)fVar25);
    Sexy::Graphics::SetDrawMode(param_1,1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_30);
    Sexy::Insets::Insets((Insets *)local_20,(Insets *)(param_2 + 0x98));
    Sexy::Graphics::DrawImage
              (param_1,pIVar17,*(int *)(param_2 + 0xa8),*(int *)(param_2 + 0xac),(TRect *)local_20);
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (cVar6 != '\0') {
    iVar11 = FUN_044308c0(*(undefined4 *)(this + 0x38));
    iVar1 = *(int *)(param_2 + 0x100);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d18);
    iVar12 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar13 = FUN_04430c68(0xfffffffc);
    iVar14 = FUN_044308c4(*(undefined4 *)(this + 0x3c));
    iVar2 = *(int *)(param_2 + 0x104);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d18);
    iVar15 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar16 = FUN_04430c68(0xfffffff9);
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar18,(iVar11 - (iVar1 + iVar12) / 2) + iVar13,
               (iVar14 - (iVar2 + iVar15) / 2) + iVar16);
  }
  cVar4 = UIWidget::isInState((UIWidget *)this,4);
  if ((cVar4 != '\0') || (cVar4 = FUN_04430f48(*(undefined4 *)(this + 400)), cVar4 != '\0')) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar17,*(int *)(param_2 + 0x138),*(int *)(param_2 + 0x13c),
               (TRect *)(param_2 + 0x128));
  }
LAB_04434880:
  drawPlantFavoriteIcon(this,param_1,(Image *)0x0,param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::GetPlantTypeOrImitater() */

void SeedPacket::GetPlantTypeOrImitater(void)

{
  char cVar1;
  long in_x0;
  string *psVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04430f38(*(undefined4 *)(in_x0 + 400));
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x168));
  }
  else {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"imitater");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::SetPlantAvatarAndLevel(int, int) */

void __thiscall SeedPacket::SetPlantAvatarAndLevel(SeedPacket *this,int param_1,int param_2)

{
  string *psVar1;
  RtWeakPtr *this_00;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  string *psVar5;
  SeedPacketUtils *pSVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  PlantType *pPVar9;
  RtMixedPtr<Sexy::Image> aRStack_38 [12];
  undefined4 local_2c;
  long local_8;
  
  psVar1 = (string *)(this + 0x188);
  *(int *)(this + 0x1cc) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1d0) = param_2;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetIdForName(this_03,psVar1);
  if (this_02 != (PlayerInfo *)0x0) {
    iVar4 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    cVar2 = TrialCardManager::IsTrialingPlant(iVar4);
    if ((cVar2 != '\0') && (this[0x1f8] != (SeedPacket)0x0)) {
      iVar4 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      TrialCardManager::GetConfigForBestTrialStatus(iVar4);
      *(undefined4 *)(this + 0x1cc) = local_2c;
      TrialCardConfig::~TrialCardConfig((TrialCardConfig *)aRStack_38);
      cVar2 = RiftUtils::IsRiftTimedLevel();
      goto joined_r0x04434fd0;
    }
  }
  cVar2 = RiftUtils::IsRiftTimedLevel();
joined_r0x04434fd0:
  if (cVar2 != '\0') {
    this_00 = (RtWeakPtr *)(this + 0x168);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar3) &&
       (iVar4 = PlayerInfo::GetPlantStarLevel(this_02,psVar1,false), iVar4 < *(int *)(this + 0x1cc))
       ) {
      *(int *)(this + 0x1cc) = iVar4;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar3) {
      iVar4 = *(int *)(this + 0x1cc);
      pPVar9 = (PlantType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar7 = PlantType::GetProps(pPVar9);
      if (*(int *)(lVar7 + 0x2c) < iVar4) {
        pPVar9 = (PlantType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar7 = PlantType::GetProps(pPVar9);
        *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(lVar7 + 0x2c);
      }
    }
  }
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (cVar2 == '\0') {
    pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar7 = SeedPacketUtils::GetPlantPacketRenderData
                      (pSVar6,psVar1,*(int *)(this + 0x1cc),*(int *)(this + 0x1d0),-1);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x170));
  }
  else {
    pSVar6 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar7 = SeedPacketUtils::GetToolPacketRenderData(pSVar6,psVar1);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x170));
  }
  Sexy::Insets::Insets((Insets *)aRStack_38,0,0,1,1);
  UIWidget::SetAtlasImageData((UIWidget *)this,pRVar8,aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket::CopyFrom(SeedPacket *this,SeedPacket *param_1)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (SeedPacket *)0x0) {
    (**(code **)(*(long *)param_1 + 0x1b8))(aRStack_10,param_1);
    SetSeedType(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((*(int *)(this + 0x1cc) != -1) && (*(int *)(this + 0x1d0) == -1)) {
      iVar1 = FUN_0443096c(*(undefined4 *)(param_1 + 0x1cc));
      SetPlantAvatarAndLevel(this,iVar1,-1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::StaticClassInit() */

void SeedPacket::StaticClassInit(void)

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
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_AFFORDABLE",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_DISABLED",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_ALWAYS_PLANTABLE",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x10;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_ON_DISPLAY",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x20;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_FREE_PLANT",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x400;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PACKETFLAG_FAVORITE",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"SeedPacketFlags");
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
    std::string::string((string *)avStack_20,"SeedPacket");
    (*pcVar3)(plVar2,avStack_20,FUN_044353f8,0x200,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket::StaticGetClass() */

long * SeedPacket::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket::GetClass() const */

long * SeedPacket::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket::GetHitRect() */

void SeedPacket::GetHitRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  int *in_x8;
  
  UIWidget::GetHitRect();
  iVar1 = *(int *)(in_x0 + 0x1b8);
  iVar2 = *(int *)(in_x0 + 0x1c0);
  iVar3 = *(int *)(in_x0 + 0x1bc);
  iVar4 = *(int *)(in_x0 + 0x1c4);
  *in_x8 = *in_x8 + iVar1;
  in_x8[1] = in_x8[1] + iVar3;
  in_x8[2] = in_x8[2] + (iVar2 - iVar1);
  in_x8[3] = in_x8[3] + (iVar4 - iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket::Draw(SeedPacket *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  SeedPacketUtils *pSVar5;
  PacketRenderData *pPVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar7;
  ResourceInfo *pRVar8;
  Image *pIVar9;
  PlantNameMapperServerID *pPVar10;
  GraphicsAutoState aGStack_48 [8];
  MatrixPusher aMStack_40 [8];
  RtWeakPtr aRStack_38 [12];
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x218))();
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar3 = FUN_04430c68(0xfffffff9);
  iVar4 = FUN_04430c68(0xfffffffc);
  Sexy::Graphics::Translate(param_1,iVar3,iVar4);
  MatrixPusher::MatrixPusher
            (aMStack_40,param_1,*(float *)(this + 0x1fc),*(float *)(param_1 + 0x10),
             *(float *)(param_1 + 0x14));
  GetPlantType();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (!bVar1) {
    PowerupUI::GetPowerupDownImage();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    if (bVar1) {
      pPVar6 = (PacketRenderData *)(**(code **)(*(long *)this + 0x1b0))(this);
      DrawRenderData(this,param_1,pPVar6);
    }
    else {
      PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      if (bVar1) {
        pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        pPVar6 = (PacketRenderData *)
                 SeedPacketUtils::GetGridItemPacketRenderData(pSVar5,(string *)(this + 0x188),-1,-1)
        ;
        DrawRenderData(this,param_1,pPVar6);
      }
    }
    goto LAB_04435fb0;
  }
  iVar3 = *(int *)(this + 0x1cc);
  cVar2 = IsShowExpHit(this);
  if (cVar2 == '\0') {
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 != '\0') goto LAB_04435f50;
LAB_044360ec:
    cVar2 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
    if ((cVar2 != '\0') &&
       (iVar4 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar4 == 0))
    goto LAB_04435f50;
    Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
    cVar2 = PennyClassroomManager::IsPennyClassroomLevel();
    if (cVar2 == '\0') {
      cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
      if (cVar2 != '\0') {
        iVar3 = *(int *)(this + 0x180);
        cVar2 = IsShowExpHit(this);
        if (cVar2 != '\0') {
          pPVar10 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)(this + 0x168));
          PlantNameMapperServerID::GetIdForType(pPVar10,aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          iVar3 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
          TrialCardManager::GetConfigForBestTrialStatus(iVar3);
          TrialCardConfig::~TrialCardConfig((TrialCardConfig *)aRStack_38);
          iVar3 = local_2c;
        }
      }
    }
    else {
      iVar3 = *(int *)(this + 0x180);
    }
  }
  else {
    pPVar10 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)(this + 0x168));
    PlantNameMapperServerID::GetIdForType(pPVar10,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar3 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    TrialCardManager::GetConfigForBestTrialStatus(iVar3);
    iVar3 = local_2c;
    TrialCardConfig::~TrialCardConfig((TrialCardConfig *)aRStack_38);
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 == '\0') goto LAB_044360ec;
LAB_04435f50:
    iVar3 = 1;
  }
  pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  pPVar6 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData
                     (pSVar5,(string *)(this + 0x188),iVar3,*(int *)(this + 0x1d0),-1);
  DrawRenderData(this,param_1,pPVar6);
  cVar2 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar2 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(this + 0x188),false);
    if (((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
        (lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar7 == 0)) ||
       (lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar7 + 0x111) == '\0')) {
      iVar4 = *(int *)(this + 0x1cc);
      if (*(int *)(this + 0x1cc) == -1) {
        iVar4 = iVar3;
      }
LAB_0443615c:
      if (0 < iVar4) {
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar6 + 0x170));
        Sexy::Insets::Insets
                  ((Insets *)aRStack_38,*(int *)(pPVar6 + 0x150),*(int *)(pPVar6 + 0x154),
                   *(int *)(pPVar6 + 0x148),*(int *)(pPVar6 + 0x14c));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar8,(TRect *)aRStack_38,(TRect *)(pPVar6 + 0x140));
      }
    }
    else {
      iVar4 = *(int *)(this + 0x1cc);
      if (*(int *)(this + 0x1cc) != -1) goto LAB_0443615c;
    }
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
    if (-1 < *(int *)(lVar7 + 0xd4)) {
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar6 + 0x170));
      Sexy::Insets::Insets
                ((Insets *)aRStack_38,*(int *)(pPVar6 + 0x168),*(int *)(pPVar6 + 0x16c),
                 *(int *)(pPVar6 + 0x160),*(int *)(pPVar6 + 0x164));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar8,(TRect *)aRStack_38,(TRect *)(pPVar6 + 0x158));
    }
  }
  cVar2 = IsShowExpHit(this);
  if (cVar2 != '\0') {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar6 + 0x170));
    Sexy::Insets::Insets
              ((Insets *)aRStack_38,*(int *)(pPVar6 + 0x150),*(int *)(pPVar6 + 0x154),
               *(int *)(pPVar6 + 0x148),*(int *)(pPVar6 + 0x14c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aRStack_38,(TRect *)(pPVar6 + 0x140))
    ;
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07d70);
    iVar3 = FUN_04430c68(0);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3,iVar3);
  }
LAB_04435fb0:
  if (*(StandaloneEffect **)(this + 0x1f0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1f0),param_1);
  }
  MatrixPusher::~MatrixPusher(aMStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to SeedPacket::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket::Draw(SeedPacket *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* SeedPacket::SetContentsTypeName(std::string const&) */

void SeedPacket::SetContentsTypeName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x188);
  return;
}

