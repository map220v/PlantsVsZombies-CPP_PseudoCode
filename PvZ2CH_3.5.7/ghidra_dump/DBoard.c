// Class: DBoard


/* DBoard::~DBoard() */

void __thiscall DBoard::~DBoard(DBoard *this)

{
  *(undefined ***)this = &PTR__DBoard_0665c080;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c430;
  *(undefined ***)(this + 0x150) = &PTR__DBoard_0665c468;
  DMenu::~DMenu((DMenu *)this);
  return;
}


/* non-virtual thunk to DBoard::~DBoard() */

void __thiscall DBoard::~DBoard(DBoard *this)

{
  ~DBoard(this + -0x150);
  return;
}


/* DBoard::~DBoard() */

void __thiscall DBoard::~DBoard(DBoard *this)

{
  ~DBoard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DBoard::~DBoard() */

void __thiscall DBoard::~DBoard(DBoard *this)

{
  ~DBoard(this + -0x150);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBoard::DBoard() */

void __thiscall DBoard::DBoard(DBoard *this)

{
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DMenu::DMenu((DMenu *)this);
  this[0x198] = (DBoard)0x0;
  *(undefined ***)this = &PTR__DBoard_0665c080;
  *(undefined ***)(this + 0x10) = &PTR_setColor_0665c430;
  *(undefined ***)(this + 0x150) = &PTR__DBoard_0665c468;
  FUN_03578c3c(afStack_28,this);
  UIWidget::OnConsumedTouch(afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBoard::handleTouchBegan(Sexy::Touch const&) */

void __thiscall DBoard::handleTouchBegan(DBoard *this,Touch *param_1)

{
  CardBoardMgr *this_00;
  Touch aTStack_40 [56];
  long local_8;
  
  *(undefined4 *)(this + 0x188) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::ConvertToBoardTouch(this_00,aTStack_40);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x250))(*(long **)(gLawnApp + 0x9f0),aTStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBoard::handleTouchMoved(Sexy::Touch const&) */

void __thiscall DBoard::handleTouchMoved(DBoard *this,Touch *param_1)

{
  CardBoardMgr *this_00;
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  this_00 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::ConvertToBoardTouch(this_00,aTStack_40);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 600))(*(long **)(gLawnApp + 0x9f0),aTStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DBoard::handleTouchEnded(Sexy::Touch const&) */

void __thiscall DBoard::handleTouchEnded(DBoard *this,Touch *param_1)

{
  CardBoardMgr *pCVar1;
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::ConvertToBoardTouch(pCVar1,aTStack_40);
  this[0x198] = (DBoard)0x1;
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x260))(*(long **)(gLawnApp + 0x9f0),aTStack_40);
  if (this[0x198] != (DBoard)0x0) {
    this[0x198] = (DBoard)0x0;
    pCVar1 = (CardBoardMgr *)Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    CardBoardMgr::TryHideCards(pCVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

