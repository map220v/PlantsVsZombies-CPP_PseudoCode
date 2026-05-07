// Class: BoardArtifactButtonWithSwarm


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithSwarm::StaticClassInit() */

void BoardArtifactButtonWithSwarm::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithSwarm");
    (*pcVar2)(plVar1,asStack_10,FUN_04dcd3bc,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithSwarm::StaticGetClass() */

long * BoardArtifactButtonWithSwarm::StaticGetClass(void)

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
  uVar2 = BoardArtifactButton::StaticGetClass();
  (*pcVar3)(plVar1,"BoardArtifactButtonWithSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithSwarm::GetClass() const */

long * BoardArtifactButtonWithSwarm::GetClass(void)

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
  uVar2 = BoardArtifactButton::StaticGetClass();
  (*pcVar3)(plVar1,"BoardArtifactButtonWithSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm() */

void __thiscall
BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm(BoardArtifactButtonWithSwarm *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4490;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithSwarm_069c4650;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm() */

void __thiscall
BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm(BoardArtifactButtonWithSwarm *this)

{
  ~BoardArtifactButtonWithSwarm(this + -0x10);
  return;
}


/* BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm() */

void __thiscall
BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm(BoardArtifactButtonWithSwarm *this)

{
  ~BoardArtifactButtonWithSwarm(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm() */

void __thiscall
BoardArtifactButtonWithSwarm::~BoardArtifactButtonWithSwarm(BoardArtifactButtonWithSwarm *this)

{
  ~BoardArtifactButtonWithSwarm(this + -0x10);
  return;
}


/* BoardArtifactButtonWithSwarm::BoardArtifactButtonWithSwarm() */

void __thiscall
BoardArtifactButtonWithSwarm::BoardArtifactButtonWithSwarm(BoardArtifactButtonWithSwarm *this)

{
  undefined4 uVar1;
  
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_069c4490;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithSwarm_069c4650;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  uVar1 = PVZ_EOT();
  this[500] = (BoardArtifactButtonWithSwarm)0x0;
  *(undefined4 *)(this + 0x1f0) = uVar1;
  return;
}


/* BoardArtifactButtonWithSwarm::StaticNew() */

BoardArtifactButtonWithSwarm * BoardArtifactButtonWithSwarm::StaticNew(void)

{
  BoardArtifactButtonWithSwarm *this;
  
  this = ::operator_new(0x1f8);
  BoardArtifactButtonWithSwarm(this);
  return this;
}


/* BoardArtifactButtonWithSwarm::DestroyProgressEffect() */

void __thiscall
BoardArtifactButtonWithSwarm::DestroyProgressEffect(BoardArtifactButtonWithSwarm *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e8);
  this[500] = (BoardArtifactButtonWithSwarm)0x0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* BoardArtifactButtonWithSwarm::OnMouseUp(int, int) */

void BoardArtifactButtonWithSwarm::OnMouseUp(int param_1,int param_2)

{
  WorldMap_LevelofDay::OnMouseUp(param_1,param_2);
  DestroyProgressEffect((BoardArtifactButtonWithSwarm *)(ulong)(uint)param_1);
  return;
}


/* BoardArtifactButtonWithSwarm::OnMouseMove(int, int) */

void __thiscall
BoardArtifactButtonWithSwarm::OnMouseMove
          (BoardArtifactButtonWithSwarm *this,int param_1,int param_2)

{
  char cVar1;
  
  WorldMap_LevelofDay::OnMouseMove((int)this,param_1);
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  DestroyProgressEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithSwarm::OnMouseDown(int, int) */

void __thiscall
BoardArtifactButtonWithSwarm::OnMouseDown
          (BoardArtifactButtonWithSwarm *this,int param_1,int param_2)

{
  char cVar1;
  ArtifactSwarm *this_00;
  undefined4 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMap_LevelofDay::OnMouseMove((int)this,param_1);
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = ArtifactMgr::CanTriggerActivatedArtifact();
    if (cVar1 != '\0') {
      this_00 = (ArtifactSwarm *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar1 = ArtifactSwarm::CanShootState(this_00);
      if (cVar1 != '\0') {
        uVar2 = PVZ_T();
        this[500] = (BoardArtifactButtonWithSwarm)0x1;
        *(undefined4 *)(this + 0x1f0) = uVar2;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithSwarm::OnClick() */

void __thiscall BoardArtifactButtonWithSwarm::OnClick(BoardArtifactButtonWithSwarm *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ArtifactMgr *this_00;
  ArtifactSwarm *this_01;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DestroyProgressEffect(this);
  this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (this_00 != (ArtifactMgr *)0x0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    iVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = ArtifactMgr::CanTriggerActivatedArtifact();
    if ((iVar3 < iVar4) && (cVar2 != '\0')) {
      this_01 = (ArtifactSwarm *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar2 = ArtifactSwarm::CanShootState(this_01);
      puVar1 = gMessageRouter;
      if (cVar2 != '\0') {
        fVar5 = (float)PVZ_T();
        MessageRouter::Post<float,float>
                  ((_func_void_float *)puVar1,fVar5 - *(float *)(this + 0x1f0));
        MessageRouter::Post<int,ArtifactSwarm::_unnamed_type_1_>
                  ((MessageRouter *)gMessageRouter,Message::NotifySwarmSwitchState,2);
        ArtifactMgr::RequestTriggerArtifact(this_00);
        fVar5 = (float)PVZ_T();
        Sexy::OutputDebugStrF
                  ((wchar_t *)"artifact swarm OnClick real time delta = %f",
                   (double)(fVar5 - *(float *)(this + 0x1f0)));
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithSwarm::PlayProgressEffect() */

void __thiscall BoardArtifactButtonWithSwarm::PlayProgressEffect(BoardArtifactButtonWithSwarm *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  int local_40;
  int local_3c;
  int local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [4];
  int local_2c;
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this[500] = (BoardArtifactButtonWithSwarm)0x0;
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Point::Point((Point *)&local_40,local_18 + local_10 / 2,local_14);
  Board::TranslateUIWidgetPositionToBoardPosition((Board *)gLawnApp[0x13e],(Point *)&local_40);
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar4 = EA::Text::PolygonFont::GetFontType();
    if (iVar3 == iVar4) {
      local_40 = iVar2 + local_40;
    }
  }
  iVar2 = local_40;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1e8);
  Board::GetBoardBaseOffset();
  iVar2 = FUN_04dc7e84(iVar2 - local_38[0]);
  Board::GetBoardBaseOffset();
  iVar3 = FUN_04dc7e84(local_3c - local_2c);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar2,(float)iVar3 - 10.0,0.0);
  Board::AddEffect<Effect_PopAnim>((Board *)gLawnApp[0x13e]);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)local_38,"POPANIM_EFFECTS_ARTIFACT_SWARM_PROGRESS");
  GetPAMByName((string *)local_38);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string((string *)local_38);
  nop();
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)aVStack_28,700000);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar5,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar7,true);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_30,"start");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,aRStack_30,0);
  std::string::~string((string *)aRStack_30);
  nop();
  MessageRouter::Post<int,ArtifactSwarm::_unnamed_type_1_>
            ((MessageRouter *)gMessageRouter,Message::NotifySwarmSwitchState,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithSwarm::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithSwarm::Draw(BoardArtifactButtonWithSwarm *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar12;
  float fVar13;
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  float local_30 [2];
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    iVar4 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar6 = FUN_04dc7e98(0xfffffffb);
    cVar3 = FUN_04dc7aec(this[0x160]);
    if (cVar3 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(iVar4 - iVar5) / 2,iVar6);
  }
  lVar9 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar9 != 0) {
    iVar4 = ArtifactMgr::GetActivatedArtifactUsedTime();
    iVar5 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    if (iVar4 < iVar5) {
      fVar13 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
      local_28[0] = (float)ArtifactMgr::GetActivatedArtifactLeftTime();
      local_28[0] = local_28[0] / fVar13;
      local_18[0] = 0x3f800000;
      local_30[0] = 0.0;
      pfVar11 = eastl::max_alt<float>(local_30,local_28);
      pfVar11 = eastl::min_alt<float>((float *)local_18,pfVar11);
      fVar13 = 1.0 - *pfVar11;
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar4 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar4 = iVar4 - (iVar4 >> 0x1f);
      iVar6 = FUN_04dc7e98(0x14);
      iVar6 = iVar5 - iVar6;
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
    }
    else {
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar4 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar4 = iVar4 - (iVar4 >> 0x1f);
      iVar6 = FUN_04dc7e98(0x14);
      iVar6 = iVar5 - iVar6;
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      fVar13 = 0.0;
    }
    DrawRadialCooldown(fVar13,(float)iVar5,(float)(iVar4 >> 1),(float)iVar6,param_1,
                       (Insets *)local_28,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    iVar4 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_04dc7e98(0x1e);
    iVar6 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets((Insets *)local_28,0,iVar4 - iVar5,iVar6,iVar5);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar7 = FUN_04dc7b90(*(undefined4 *)(lVar9 + 0x44));
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar8 = FUN_04dc7b94(*(undefined4 *)(lVar9 + 0x48));
    uVar1 = uVar8;
    if ((int)uVar7 < (int)uVar8) {
      uVar1 = uVar7;
    }
    Sexy::StrFormat(L"%d  /  %d",local_30,(ulong)uVar1,(ulong)uVar8);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,local_30,(Insets *)local_28,uVar10,
                    (RtWeakPtr<Sexy::ResourceInfo> *)local_18,5,1);
    FUN_05476c50(local_30);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    fVar13 = (float)FUN_04dc7b98(*(undefined4 *)(lVar9 + 0x5c));
    cVar3 = TimeUtil::CheckTimeEclapse(fVar13,*(float *)(this + 0x1f0));
    if (((cVar3 != '\0') && (this[500] != (BoardArtifactButtonWithSwarm)0x0)) &&
       (cVar3 = FUN_04dc7aec(this[0x160]), cVar3 != '\0')) {
      PlayProgressEffect(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButtonWithSwarm::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithSwarm::Draw(BoardArtifactButtonWithSwarm *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

