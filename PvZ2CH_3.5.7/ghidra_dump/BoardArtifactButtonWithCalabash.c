// Class: BoardArtifactButtonWithCalabash


/* BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash() */

void __thiscall
BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash
          (BoardArtifactButtonWithCalabash *this)

{
  *(undefined ***)this = &PTR_GetClass_0669bc10;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithCalabash_0669bdd0;
  BoardArtifactButton::~BoardArtifactButton((BoardArtifactButton *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash() */

void __thiscall
BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash
          (BoardArtifactButtonWithCalabash *this)

{
  ~BoardArtifactButtonWithCalabash(this + -0x10);
  return;
}


/* BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash() */

void __thiscall
BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash
          (BoardArtifactButtonWithCalabash *this)

{
  ~BoardArtifactButtonWithCalabash(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash() */

void __thiscall
BoardArtifactButtonWithCalabash::~BoardArtifactButtonWithCalabash
          (BoardArtifactButtonWithCalabash *this)

{
  ~BoardArtifactButtonWithCalabash(this + -0x10);
  return;
}


/* BoardArtifactButtonWithCalabash::BoardArtifactButtonWithCalabash() */

void __thiscall
BoardArtifactButtonWithCalabash::BoardArtifactButtonWithCalabash
          (BoardArtifactButtonWithCalabash *this)

{
  BoardArtifactButton::BoardArtifactButton((BoardArtifactButton *)this);
  *(undefined ***)this = &PTR_GetClass_0669bc10;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButtonWithCalabash_0669bdd0;
  return;
}


/* BoardArtifactButtonWithCalabash::StaticNew() */

BoardArtifactButtonWithCalabash * BoardArtifactButtonWithCalabash::StaticNew(void)

{
  BoardArtifactButtonWithCalabash *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButtonWithCalabash(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithCalabash::StaticClassInit() */

void BoardArtifactButtonWithCalabash::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButtonWithCalabash");
    (*pcVar2)(plVar1,asStack_10,FUN_037e547c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButtonWithCalabash::StaticGetClass() */

long * BoardArtifactButtonWithCalabash::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithCalabash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButtonWithCalabash::GetClass() const */

long * BoardArtifactButtonWithCalabash::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardArtifactButtonWithCalabash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButtonWithCalabash::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithCalabash::Draw(BoardArtifactButtonWithCalabash *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ArtifactCalabash *pAVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar12;
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    iVar4 = FUN_037e4d1c(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar6 = FUN_037e52d0(0xfffffffb);
    cVar2 = FUN_037e4d24(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(iVar4 - iVar5) / 2,iVar6);
  }
  lVar7 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar7 != 0) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pAVar8 = (ArtifactCalabash *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar3 = ArtifactCalabash::GetUsedCapacity(pAVar8);
    pAVar8 = (ArtifactCalabash *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar9 = ArtifactCalabash::GetMaxCapacity(pAVar8);
    plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    cVar2 = (**(code **)(*plVar10 + 0x88))();
    if (cVar2 == '\0') {
      iVar4 = FUN_037e4d1c(*(undefined4 *)(this + 0x38));
      iVar5 = FUN_037e4d20(*(undefined4 *)(this + 0x3c));
      iVar6 = FUN_037e52d0(0x14);
      Sexy::Insets::Insets(aIStack_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)aRStack_18,0xff,0xff,0xff,0);
      DrawRadialCooldown(0,(float)(iVar4 / 2),(float)(iVar5 / 2),(float)(iVar4 / 2 - iVar6),param_1,
                         aIStack_28,aRStack_18);
    }
    iVar4 = FUN_037e4d20(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_037e52d0(0x1e);
    iVar6 = FUN_037e4d1c(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets(aIStack_28,0,iVar4 - iVar5,iVar6,iVar5);
    Sexy::StrFormat(L"%d  /  %d",auStack_30,(ulong)uVar3,uVar9 & 0xffffffff);
    uVar11 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)aRStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aRStack_18,5,1);
    FUN_05476c50(auStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to BoardArtifactButtonWithCalabash::Draw(Sexy::Graphics*) */

void __thiscall
BoardArtifactButtonWithCalabash::Draw(BoardArtifactButtonWithCalabash *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

