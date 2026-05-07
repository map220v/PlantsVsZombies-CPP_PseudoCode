// Class: BoardArtifactButtonWithBeehive


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithBeehive::StaticClassInit() */

void BoardArtifactButtonWithBeehive::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithBeehive");
    (*pcVar2)(plVar1,asStack_10,FUN_04dc8394,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithBeehive::StaticGetClass() */

long * BoardArtifactButtonWithBeehive::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithBeehive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithBeehive::GetClass() const */

long * BoardArtifactButtonWithBeehive::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithBeehive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive() */

void __thiscall
BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive
          (BoardArtifactButtonWithBeehive *this)

{
  *(undefined ***)this = &PTR_GetClass_069c41c0;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithBeehive_069c4380;
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive() */

void __thiscall
BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive
          (BoardArtifactButtonWithBeehive *this)

{
  ~BoardArtifactButtonWithBeehive(this + -0x10);
  return;
}


/* BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive() */

void __thiscall
BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive
          (BoardArtifactButtonWithBeehive *this)

{
  ~BoardArtifactButtonWithBeehive(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive() */

void __thiscall
BoardArtifactButtonWithBeehive::~BoardArtifactButtonWithBeehive
          (BoardArtifactButtonWithBeehive *this)

{
  ~BoardArtifactButtonWithBeehive(this + -0x10);
  return;
}


/* BoardArtifactButtonWithBeehive::BoardArtifactButtonWithBeehive() */

void __thiscall
BoardArtifactButtonWithBeehive::BoardArtifactButtonWithBeehive(BoardArtifactButtonWithBeehive *this)

{
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_069c41c0;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithBeehive_069c4380;
  return;
}


/* BoardArtifactButtonWithBeehive::StaticNew() */

BoardArtifactButtonWithBeehive * BoardArtifactButtonWithBeehive::StaticNew(void)

{
  BoardArtifactButtonWithBeehive *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButtonWithBeehive(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithBeehive::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithBeehive::Draw(BoardArtifactButtonWithBeehive *this,Graphics *param_1)

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
    uVar7 = FUN_04dc7b88(*(undefined4 *)(lVar9 + 0x40));
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar8 = FUN_04dc7b8c(*(undefined4 *)(lVar9 + 0x44));
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
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButtonWithBeehive::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithBeehive::Draw(BoardArtifactButtonWithBeehive *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

