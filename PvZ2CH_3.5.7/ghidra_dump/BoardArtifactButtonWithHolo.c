// Class: BoardArtifactButtonWithHolo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithHolo::StaticClassInit() */

void BoardArtifactButtonWithHolo::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithHolo");
    (*pcVar2)(plVar1,asStack_10,FUN_04dc8c74,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithHolo::StaticGetClass() */

long * BoardArtifactButtonWithHolo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithHolo::GetClass() const */

long * BoardArtifactButtonWithHolo::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithHolo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo() */

void __thiscall
BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo(BoardArtifactButtonWithHolo *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4760;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithHolo_069c4920;
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo() */

void __thiscall
BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo(BoardArtifactButtonWithHolo *this)

{
  ~BoardArtifactButtonWithHolo(this + -0x10);
  return;
}


/* BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo() */

void __thiscall
BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo(BoardArtifactButtonWithHolo *this)

{
  ~BoardArtifactButtonWithHolo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo() */

void __thiscall
BoardArtifactButtonWithHolo::~BoardArtifactButtonWithHolo(BoardArtifactButtonWithHolo *this)

{
  ~BoardArtifactButtonWithHolo(this + -0x10);
  return;
}


/* BoardArtifactButtonWithHolo::BoardArtifactButtonWithHolo() */

void __thiscall
BoardArtifactButtonWithHolo::BoardArtifactButtonWithHolo(BoardArtifactButtonWithHolo *this)

{
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_069c4760;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithHolo_069c4920;
  return;
}


/* BoardArtifactButtonWithHolo::StaticNew() */

BoardArtifactButtonWithHolo * BoardArtifactButtonWithHolo::StaticNew(void)

{
  BoardArtifactButtonWithHolo *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButtonWithHolo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithHolo::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithHolo::Draw(BoardArtifactButtonWithHolo *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar11;
  float fVar12;
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
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    iVar3 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar5 = FUN_04dc7e98(0xfffffffb);
    cVar2 = FUN_04dc7aec(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(iVar3 - iVar6) / 2,iVar5);
  }
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  ArtifactMgr::GetActivatedArtifact();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  if (lVar8 != 0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    uVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    if (iVar3 < (int)uVar4) {
      fVar12 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
      fVar13 = (float)ArtifactMgr::GetActivatedArtifactLeftTime();
      local_28[0] = fVar13 / fVar12;
      local_30[0] = 0.0;
      local_18[0] = 0x3f800000;
      pfVar9 = eastl::max_alt<float>(local_30,local_28);
      pfVar9 = eastl::min_alt<float>((float *)local_18,pfVar9);
      fVar12 = 1.0 - *pfVar9;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar2 = FUN_04dc7b9c(*(undefined1 *)(lVar8 + 0x60));
      if ((cVar2 != '\0') && (ABS(fVar13) < 0.001)) {
        fVar12 = 0.0;
      }
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar6 = iVar6 - (iVar6 >> 0x1f);
      iVar7 = FUN_04dc7e98(0x14);
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      iVar7 = iVar5 - iVar7;
    }
    else {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 8))
      ;
      bVar1 = std::operator==((string *)(lVar8 + 0x10),"artifact_acid");
      fVar12 = 0.0;
      if (bVar1) {
        fVar12 = 100.0;
      }
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar6 = iVar6 - (iVar6 >> 0x1f);
      iVar7 = FUN_04dc7e98(0x14);
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      iVar7 = iVar5 - iVar7;
    }
    DrawRadialCooldown(fVar12,(float)iVar5,(float)(iVar6 >> 1),(float)iVar7,param_1,
                       (Insets *)local_28,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_04dc7e98(0x1e);
    iVar7 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets((Insets *)local_28,0,iVar6 - iVar5,iVar7,iVar5);
    Sexy::StrFormat(L"%d  /  %d",local_30,(ulong)(uVar4 - iVar3),(ulong)uVar4);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,local_30,(Insets *)local_28,uVar10,
                    (RtWeakPtr<Sexy::ResourceInfo> *)local_18,5,1);
    FUN_05476c50(local_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButtonWithHolo::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithHolo::Draw(BoardArtifactButtonWithHolo *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

