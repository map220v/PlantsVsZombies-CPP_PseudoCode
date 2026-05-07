// Class: BoardArtifactButtonWithPrismTower


/* BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower() */

void __thiscall
BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower
          (BoardArtifactButtonWithPrismTower *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a120;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithPrismTower_0669a2e0;
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower() */

void __thiscall
BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower
          (BoardArtifactButtonWithPrismTower *this)

{
  ~BoardArtifactButtonWithPrismTower(this + -0x10);
  return;
}


/* BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower() */

void __thiscall
BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower
          (BoardArtifactButtonWithPrismTower *this)

{
  ~BoardArtifactButtonWithPrismTower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower() */

void __thiscall
BoardArtifactButtonWithPrismTower::~BoardArtifactButtonWithPrismTower
          (BoardArtifactButtonWithPrismTower *this)

{
  ~BoardArtifactButtonWithPrismTower(this + -0x10);
  return;
}


/* BoardArtifactButtonWithPrismTower::BoardArtifactButtonWithPrismTower() */

void __thiscall
BoardArtifactButtonWithPrismTower::BoardArtifactButtonWithPrismTower
          (BoardArtifactButtonWithPrismTower *this)

{
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_0669a120;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithPrismTower_0669a2e0;
  return;
}


/* BoardArtifactButtonWithPrismTower::StaticNew() */

BoardArtifactButtonWithPrismTower * BoardArtifactButtonWithPrismTower::StaticNew(void)

{
  BoardArtifactButtonWithPrismTower *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButtonWithPrismTower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithPrismTower::StaticClassInit() */

void BoardArtifactButtonWithPrismTower::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithPrismTower");
    (*pcVar2)(plVar1,asStack_10,FUN_037d1efc,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithPrismTower::StaticGetClass() */

long * BoardArtifactButtonWithPrismTower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithPrismTower::GetClass() const */

long * BoardArtifactButtonWithPrismTower::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithPrismTower::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithPrismTower::Draw(BoardArtifactButtonWithPrismTower *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar9;
  float fVar10;
  float fVar11;
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
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    iVar3 = FUN_037d1970(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar5 = FUN_037d1af0(0xfffffffb);
    cVar2 = FUN_037d1978(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,(iVar3 - iVar4) / 2,iVar5);
  }
  lVar6 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar6 != 0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    iVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    if (iVar3 < iVar4) {
      fVar10 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
      local_28[0] = (float)ArtifactMgr::GetActivatedArtifactLeftTime();
      local_28[0] = local_28[0] / fVar10;
      local_18[0] = 0x3f800000;
      local_30[0] = 0.0;
      pfVar8 = eastl::max_alt<float>(local_30,local_28);
      pfVar8 = eastl::min_alt<float>((float *)local_18,pfVar8);
      fVar10 = 1.0 - *pfVar8;
      iVar4 = FUN_037d1970(*(undefined4 *)(this + 0x38));
      iVar4 = iVar4 / 2;
      iVar3 = FUN_037d1974(*(undefined4 *)(this + 0x3c));
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      iVar5 = FUN_037d1af0(0x14);
      iVar5 = iVar4 - iVar5;
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
    }
    else {
      iVar4 = FUN_037d1970(*(undefined4 *)(this + 0x38));
      iVar4 = iVar4 / 2;
      iVar3 = FUN_037d1974(*(undefined4 *)(this + 0x3c));
      iVar3 = iVar3 - (iVar3 >> 0x1f);
      iVar5 = FUN_037d1af0(0x14);
      iVar5 = iVar4 - iVar5;
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      fVar10 = 0.0;
    }
    DrawRadialCooldown(fVar10,(float)iVar4,(float)(iVar3 >> 1),(float)iVar5,param_1,
                       (Insets *)local_28,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    iVar3 = FUN_037d1974(*(undefined4 *)(this + 0x3c));
    iVar4 = FUN_037d1af0(0x1e);
    iVar5 = FUN_037d1970(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets((Insets *)local_28,0,iVar3 - iVar4,iVar5,iVar4);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    fVar10 = (float)FUN_037d1984(*(undefined4 *)(lVar6 + 0x48));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    fVar11 = (float)FUN_037d1988(*(undefined4 *)(lVar6 + 0x88));
    Sexy::StrFormat(L"%d  /  %d",local_30,(ulong)(uint)(int)fVar10,(ulong)(uint)(int)fVar11);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,local_30,(Insets *)local_28,uVar7,
                    (RtWeakPtr<Sexy::ResourceInfo> *)local_18,5,1);
    FUN_05476c50(local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButtonWithPrismTower::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithPrismTower::Draw(BoardArtifactButtonWithPrismTower *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

