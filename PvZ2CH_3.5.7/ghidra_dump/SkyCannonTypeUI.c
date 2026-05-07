// Class: SkyCannonTypeUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::initLoadingResourcesGroupList() */

void __thiscall SkyCannonTypeUI::initLoadingResourcesGroupList(SkyCannonTypeUI *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Fishing");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::StaticClassInit() */

void SkyCannonTypeUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkyCannonTypeUI");
    (*pcVar2)(plVar1,asStack_10,FUN_047c0fb0,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCannonTypeUI::StaticGetClass() */

long * SkyCannonTypeUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkyCannonTypeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCannonTypeUI::GetClass() const */

long * SkyCannonTypeUI::GetClass(void)

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
  (*pcVar3)(plVar1,"SkyCannonTypeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCannonTypeUI::onGameplayEnded() */

void __thiscall SkyCannonTypeUI::onGameplayEnded(SkyCannonTypeUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* SkyCannonTypeUI::~SkyCannonTypeUI() */

void __thiscall SkyCannonTypeUI::~SkyCannonTypeUI(SkyCannonTypeUI *this)

{
  *(undefined ***)this = &PTR_GetClass_068e3d00;
  *(undefined ***)(this + 0x10) = &PTR__SkyCannonTypeUI_068e3ea0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to SkyCannonTypeUI::~SkyCannonTypeUI() */

void __thiscall SkyCannonTypeUI::~SkyCannonTypeUI(SkyCannonTypeUI *this)

{
  ~SkyCannonTypeUI(this + -0x10);
  return;
}


/* SkyCannonTypeUI::~SkyCannonTypeUI() */

void __thiscall SkyCannonTypeUI::~SkyCannonTypeUI(SkyCannonTypeUI *this)

{
  ~SkyCannonTypeUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkyCannonTypeUI::~SkyCannonTypeUI() */

void __thiscall SkyCannonTypeUI::~SkyCannonTypeUI(SkyCannonTypeUI *this)

{
  ~SkyCannonTypeUI(this + -0x10);
  return;
}


/* SkyCannonTypeUI::SkyCannonTypeUI() */

void __thiscall SkyCannonTypeUI::SkyCannonTypeUI(SkyCannonTypeUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_068e3d00;
  *(undefined ***)(this + 0x10) = &PTR__SkyCannonTypeUI_068e3ea0;
  this[0x16c] = (SkyCannonTypeUI)0x0;
  *(undefined4 *)(this + 0x170) = 100;
  this[0x16d] = (SkyCannonTypeUI)0x0;
  *(undefined4 *)(this + 0x164) = 0x40400000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 400));
  return;
}


/* SkyCannonTypeUI::StaticNew() */

SkyCannonTypeUI * SkyCannonTypeUI::StaticNew(void)

{
  SkyCannonTypeUI *this;
  
  this = ::operator_new(0x198);
  SkyCannonTypeUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::SetCrazy(bool) */

void __thiscall SkyCannonTypeUI::SetCrazy(SkyCannonTypeUI *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  StandaloneEffect *pSVar2;
  Effect_PopAnim *pEVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 400);
  this[0x16d] = (SkyCannonTypeUI)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pSVar2 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar2,true);
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pSVar2 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar2,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCannonTypeUI::onUpdate() */

void __thiscall SkyCannonTypeUI::onUpdate(SkyCannonTypeUI *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = UIWidget::isInState((UIWidget *)this,3);
  if (cVar1 != '\0') {
    fVar2 = (float)FUN_047c065c(*(undefined4 *)(this + 0x6c));
    fVar4 = *(float *)(this + 0x164);
    fVar3 = (float)PVZ_T();
    if (fVar2 + fVar4 <= fVar3) {
      (**(code **)(*(long *)this + 0xe8))(this,2);
      return;
    }
  }
  return;
}


/* SkyCannonTypeUI::IsCoolDown() */

bool __thiscall SkyCannonTypeUI::IsCoolDown(SkyCannonTypeUI *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((0.0 < *(float *)(this + 0x164)) &&
     (cVar1 = UIWidget::isInState((UIWidget *)this,3), cVar1 != '\0')) {
    fVar2 = (float)FUN_047c065c(*(undefined4 *)(this + 0x6c));
    fVar4 = *(float *)(this + 0x164);
    fVar3 = (float)PVZ_T();
    return fVar3 < fVar2 + fVar4;
  }
  return false;
}


/* SkyCannonTypeUI::onEnterState_NotReady(WidgetState) */

void SkyCannonTypeUI::onEnterState_NotReady(long param_1)

{
  PVZ_T();
  FUN_047c0660(param_1 + 0x6c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::registerForEvents() */

void __thiscall SkyCannonTypeUI::registerForEvents(SkyCannonTypeUI *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<SkyCannonTypeUI,void(SkyCannonTypeUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::RefreshImages() */

void __thiscall SkyCannonTypeUI::RefreshImages(SkyCannonTypeUI *this)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  size_t in_x2;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = UIWidget::IsLoadComplete((UIWidget *)this);
  if (cVar2 != '\0') {
    Set8BytesTo0(asStack_20);
    cVar2 = FUN_047c0668(this[0x16c]);
    if (cVar2 == '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b262f0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b262c8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::append(asStack_20,"N",in_x2);
    }
    else {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b26398);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b26370);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::append(asStack_20,"S",in_x2);
    }
    uVar1 = *(uint *)(this + 0x168);
    if (0 < (int)uVar1) {
      uVar3 = FUN_0547429c(asStack_20);
      Sexy::StrFormat("IMAGE_UI_FISHING_CANNON%d_%s",asStack_18,(ulong)uVar1,uVar3);
      lVar4 = StringHelper::ToImage(asStack_18,false);
      if (lVar4 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x180));
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x180),(RtId *)aRStack_10);
        Sexy::RtId::~RtId((RtId *)aRStack_10);
      }
      std::string::~string(asStack_18);
    }
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCannonTypeUI::SetTypeID(int) */

void __thiscall SkyCannonTypeUI::SetTypeID(SkyCannonTypeUI *this,int param_1)

{
  *(int *)(this + 0x168) = param_1;
  RefreshImages(this);
  return;
}


/* SkyCannonTypeUI::SetSelect(bool) */

void __thiscall SkyCannonTypeUI::SetSelect(SkyCannonTypeUI *this,bool param_1)

{
  this[0x16c] = (SkyCannonTypeUI)param_1;
  RefreshImages(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::onEnterState_Initializing(WidgetState) */

void SkyCannonTypeUI::onEnterState_Initializing(SkyCannonTypeUI *param_1)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RefreshImages(param_1);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_CANNON_ANIM_SKYCITY_CRAZY_UI");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,63.0,31.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_047c06ec(this + 0x1c);
  StandaloneEffect::SetManuallyDrawn((StandaloneEffect *)this,true);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 400),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCannonTypeUI::OnTouch(Sexy::Touch const&) */

char __thiscall SkyCannonTypeUI::OnTouch(SkyCannonTypeUI *this,Touch *param_1)

{
  char cVar1;
  
  cVar1 = IsCoolDown(this);
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x30) == 0)) {
    cVar1 = FUN_047c0668(this[0x16c]);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0xe8))(this,3);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::SkyCannonTypeSelected,
                 *(int *)(this + 0x168));
      return '\x01';
    }
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonTypeUI::Draw(Sexy::Graphics*) */

void __thiscall SkyCannonTypeUI::Draw(SkyCannonTypeUI *this,Graphics *param_1)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  ResourceInfo *pRVar10;
  Image *pIVar11;
  ulong uVar12;
  undefined8 uVar13;
  float *pfVar14;
  StandaloneEffect *this_00;
  int iVar15;
  float fVar16;
  float fVar17;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 local_28 [4];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 400));
  if (cVar2 != '\0') {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
    StandaloneEffect::Draw(this_00,param_1);
  }
  cVar2 = FUN_047c08b4(*(undefined4 *)(this + 0x68));
  if (cVar2 == '\0') {
    Sexy::Color::Color((Color *)local_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x178);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar2 != '\0') {
    iVar3 = FUN_047c0654(*(undefined4 *)(this + 0x38));
    pLVar8 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b26398);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar15 = SalesProgressBar::GetCurrentLevel(pSVar9);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(iVar3 - iVar4) / 2,iVar5 - iVar15);
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x180);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar2 != '\0') {
    iVar3 = FUN_047c0654(*(undefined4 *)(this + 0x38));
    pLVar8 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar3 = (iVar3 - iVar4) / 2;
    iVar4 = FUN_047c0764(0xc);
    cVar2 = FUN_047c0668(this[0x16c]);
    if (cVar2 == '\0') {
      iVar5 = FUN_047c0764(2);
      iVar3 = iVar3 + iVar5;
      iVar5 = FUN_047c0764(0x19);
      iVar4 = iVar5 - iVar4;
    }
    else {
      iVar4 = -iVar4;
    }
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,iVar3,iVar4);
    cVar2 = IsCoolDown(this);
    if (cVar2 != '\0') {
      local_28[0] = 0x3f800000;
      fVar16 = (float)PVZ_T();
      fVar17 = (float)FUN_047c065c(*(undefined4 *)(this + 0x6c));
      local_18[0] = (fVar16 - fVar17) / *(float *)(this + 0x164);
      pfVar14 = eastl::min_alt<float>((float *)local_28,local_18);
      fVar16 = *pfVar14;
      pLVar8 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      pSVar9 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar15 = SalesProgressBar::GetCurrentLevel(pSVar9);
      pLVar8 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      iVar7 = FUN_047c0764(8);
      Sexy::Insets::Insets((Insets *)local_28,0xff,0x91,0xfa,200);
      Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
      DrawRadialCooldown(fVar16,(float)(iVar3 + iVar5 / 2),(float)(iVar4 + iVar15 / 2),
                         (float)(iVar6 / 2 - iVar7),param_1,(Insets *)local_28,(Insets *)local_18);
    }
  }
  pRVar1 = (RtMixedPtrBase *)(this + 0x188);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
  if (cVar2 != '\0') {
    iVar3 = FUN_047c0654(*(undefined4 *)(this + 0x38));
    pLVar8 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar3 = (iVar3 - iVar4) / 2;
    iVar4 = FUN_047c0658(*(undefined4 *)(this + 0x3c));
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    iVar4 = iVar4 - iVar5;
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)pRVar1);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,iVar3,iVar4);
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    iVar15 = (int)((float)iVar5 * 0.8);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b262a0);
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,iVar3,(int)((float)iVar4 + (float)iVar5 * 0.1),iVar15,iVar15);
    uVar12 = 0;
    if (this[0x16d] == (SkyCannonTypeUI)0x0) {
      uVar12 = (ulong)*(uint *)(this + 0x170);
    }
    Sexy::StrFormat(L"%d",auStack_30,uVar12);
    pLVar8 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    pSVar9 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
    Sexy::Insets::Insets((Insets *)local_28,iVar3 + iVar15,iVar4,iVar5,iVar6);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    Sexy::Color::Color((Color *)local_18,0);
    WriteWordInRect(param_1,auStack_30,(Insets *)local_28,uVar13,(Color *)local_18,3,1);
    FUN_05476c50(auStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SkyCannonTypeUI::Draw(Sexy::Graphics*) */

void __thiscall SkyCannonTypeUI::Draw(SkyCannonTypeUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

