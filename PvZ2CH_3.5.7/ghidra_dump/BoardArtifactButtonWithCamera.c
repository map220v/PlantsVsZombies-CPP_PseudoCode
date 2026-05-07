// Class: BoardArtifactButtonWithCamera


/* BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera() */

void __thiscall
BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera(BoardArtifactButtonWithCamera *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c060;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithCamera_0669c220;
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera() */

void __thiscall
BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera(BoardArtifactButtonWithCamera *this)

{
  ~BoardArtifactButtonWithCamera(this + -0x10);
  return;
}


/* BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera() */

void __thiscall
BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera(BoardArtifactButtonWithCamera *this)

{
  ~BoardArtifactButtonWithCamera(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera() */

void __thiscall
BoardArtifactButtonWithCamera::~BoardArtifactButtonWithCamera(BoardArtifactButtonWithCamera *this)

{
  ~BoardArtifactButtonWithCamera(this + -0x10);
  return;
}


/* BoardArtifactButtonWithCamera::BoardArtifactButtonWithCamera() */

void __thiscall
BoardArtifactButtonWithCamera::BoardArtifactButtonWithCamera(BoardArtifactButtonWithCamera *this)

{
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_0669c060;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithCamera_0669c220;
  return;
}


/* BoardArtifactButtonWithCamera::StaticNew() */

BoardArtifactButtonWithCamera * BoardArtifactButtonWithCamera::StaticNew(void)

{
  BoardArtifactButtonWithCamera *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButtonWithCamera(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithCamera::StaticClassInit() */

void BoardArtifactButtonWithCamera::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithCamera");
    (*pcVar2)(plVar1,asStack_10,FUN_037ecc34,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithCamera::StaticGetClass() */

long * BoardArtifactButtonWithCamera::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithCamera",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithCamera::GetClass() const */

long * BoardArtifactButtonWithCamera::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithCamera",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithCamera::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithCamera::Draw(BoardArtifactButtonWithCamera *this,Graphics *param_1)

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
  undefined8 uVar9;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar10;
  GraphicsAutoState aGStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    iVar3 = FUN_037ec6ec(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar6 = FUN_037eca40(0xfffffffb);
    cVar2 = FUN_037ec6f4(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(iVar3 - iVar5) / 2,iVar6);
  }
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar8 != 0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    uVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    iVar5 = FUN_037ec6f0(*(undefined4 *)(this + 0x3c));
    iVar6 = FUN_037eca40(0x1e);
    iVar7 = FUN_037ec6ec(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets(aIStack_28,0,iVar5 - iVar6,iVar7,iVar6);
    Sexy::StrFormat(L"%d  /  %d",auStack_30,(ulong)(uVar4 - iVar3),(ulong)uVar4);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButtonWithCamera::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithCamera::Draw(BoardArtifactButtonWithCamera *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithCamera::OnClick() */

void BoardArtifactButtonWithCamera::OnClick(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ArtifactCameraSubSystem *this;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar3 != 0) {
    ArtifactMgr::GetActivatedArtifact();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      ArtifactMgr::GetActivatedArtifact();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = FUN_037ec6f8(*(undefined1 *)(lVar3 + 0x3d));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (cVar2 == '\0') goto LAB_037f0a4c;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  this = Board::FindGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this != (ArtifactCameraSubSystem *)0x0) {
    ArtifactCameraSubSystem::SelectAction(this);
  }
LAB_037f0a4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

