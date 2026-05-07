// Class: GridItemCardGameZombieAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieAction::GetDescription() */

void GridItemCardGameZombieAction::GetDescription(void)

{
  long in_x0;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(in_x0 + 0x28));
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieAction::IsShowIntention() */

GridItemCardGameZombieAction __thiscall
GridItemCardGameZombieAction::IsShowIntention(GridItemCardGameZombieAction *this)

{
  return this[0x30];
}


/* GridItemCardGameZombieAction::IsDone() */

GridItemCardGameZombieAction __thiscall
GridItemCardGameZombieAction::IsDone(GridItemCardGameZombieAction *this)

{
  return this[0x68];
}


/* GridItemCardGameZombieAction::EndAction() */

void __thiscall GridItemCardGameZombieAction::EndAction(GridItemCardGameZombieAction *this)

{
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x24);
  this[0x68] = (GridItemCardGameZombieAction)0x1;
  return;
}


/* GridItemCardGameZombieAction::StartAction() */

void __thiscall GridItemCardGameZombieAction::StartAction(GridItemCardGameZombieAction *this)

{
  int iVar1;
  
  iVar1 = FUN_04e1438c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x38));
  return;
}


/* GridItemCardGameZombieAction::RoundResume() */

void __thiscall GridItemCardGameZombieAction::RoundResume(GridItemCardGameZombieAction *this)

{
  undefined4 uVar1;
  
  uVar1 = ClampInt(*(int *)(this + 0x10) + -1,0,*(int *)(this + 0x24));
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* GridItemCardGameZombieAction::WaitIntention() */

void __thiscall GridItemCardGameZombieAction::WaitIntention(GridItemCardGameZombieAction *this)

{
  undefined4 uVar1;
  
  uVar1 = ClampInt(*(int *)(this + 0xc) + -1,1,*(int *)(this + 0x20));
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieAction::GridItemCardGameZombieAction() */

void __thiscall
GridItemCardGameZombieAction::GridItemCardGameZombieAction(GridItemCardGameZombieAction *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_Init_069d65b0;
  GridItemCardGameZombieActionData::GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)(this + 0x18));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x38),(DummyInit *)0x0);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)aDStack_38);
  this[0x68] = (GridItemCardGameZombieAction)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieAction::Init(int, GridItemCardGameZombieActionData) */

void __thiscall
GridItemCardGameZombieAction::Init
          (GridItemCardGameZombieAction *this,undefined4 param_1,
          GridItemCardGameZombieActionData *param_3)

{
  GridItemCardGameZombieActionData::operator=
            ((GridItemCardGameZombieActionData *)(this + 0x18),param_3);
  *(undefined4 *)(this + 8) = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x20);
  this[0x68] = (GridItemCardGameZombieAction)0x0;
  return;
}


/* GridItemCardGameZombieAction::Reset() */

void __thiscall GridItemCardGameZombieAction::Reset(GridItemCardGameZombieAction *this)

{
  this[0x68] = (GridItemCardGameZombieAction)0x0;
  return;
}


/* GridItemCardGameZombieAction::IsReady() */

bool __thiscall GridItemCardGameZombieAction::IsReady(GridItemCardGameZombieAction *this)

{
  return *(int *)(this + 0xc) == 1 && *(int *)(this + 0x10) == 0;
}


/* GridItemCardGameZombieAction::IsIntention() */

bool __thiscall GridItemCardGameZombieAction::IsIntention(GridItemCardGameZombieAction *this)

{
  return 1 < *(int *)(this + 0xc);
}


/* GridItemCardGameZombieAction::IsCooldown() */

bool __thiscall GridItemCardGameZombieAction::IsCooldown(GridItemCardGameZombieAction *this)

{
  return 0 < *(int *)(this + 0x10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieAction::GetIntentionImage() */

void __thiscall GridItemCardGameZombieAction::GetIntentionImage(GridItemCardGameZombieAction *this)

{
  int iVar1;
  char *__s;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    __s = "IMAGE_UI_CARD_GAME_INTENTION_SUMMON";
LAB_04e14e88:
    std::string::string(asStack_10,__s);
  }
  else {
    if (iVar1 != 1) {
      uVar2 = 0;
      if (iVar1 != 2) goto LAB_04e14eac;
      __s = "IMAGE_UI_CARD_GAME_INTENTION_SPECIAL";
      goto LAB_04e14e88;
    }
    std::string::string(asStack_10,"IMAGE_UI_CARD_GAME_INTENTION_ATTACK");
  }
  uVar2 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
LAB_04e14eac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* GridItemCardGameZombieAction::SetCallbackFunc(Sexy::Delegate0) */

void __thiscall
GridItemCardGameZombieAction::SetCallbackFunc(GridItemCardGameZombieAction *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),param_2);
  return;
}


/* GridItemCardGameZombieAction::~GridItemCardGameZombieAction() */

void __thiscall
GridItemCardGameZombieAction::~GridItemCardGameZombieAction(GridItemCardGameZombieAction *this)

{
  *(undefined ***)this = &PTR_Init_069d65b0;
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)(this + 0x18));
  return;
}

