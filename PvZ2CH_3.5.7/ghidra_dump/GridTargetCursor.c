// Class: GridTargetCursor


/* GridTargetCursor::StaticGetClass() */

long * GridTargetCursor::StaticGetClass(void)

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
  uVar2 = CardTargetCursor::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* GridTargetCursor::GetClass() const */

long * GridTargetCursor::GetClass(void)

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
  uVar2 = CardTargetCursor::StaticGetClass();
  (*pcVar3)(plVar1,"GridTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetCursor::GetCurrentGridPosition() */

void __thiscall GridTargetCursor::GetCurrentGridPosition(GridTargetCursor *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Point *in_x8;
  float fVar4;
  float fVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar5 = (float)local_c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar4 = (float)Board::calculateRoofOffsetZ((float)local_10);
    fVar5 = fVar5 + fVar4;
  }
  iVar2 = BoardTransforms::BoardSpaceToGridX((float)local_10);
  iVar3 = BoardTransforms::BoardSpaceToGridY(fVar5);
  Sexy::Point::Point(in_x8,iVar2,iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetCursor::InitializaTargetCursor(Sexy::Touch const&, Sexy::RtWeakPtr<CardObject>) */

void __thiscall
GridTargetCursor::InitializaTargetCursor
          (GridTargetCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  CardTargetCursor::InitializaTargetCursor((CardTargetCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetCursor::tryToUse() */

void __thiscall GridTargetCursor::tryToUse(GridTargetCursor *this)

{
  undefined8 uVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  BaseCursor::GetBoardPosition();
  CardObject::SetTargetPosition(uVar1,auStack_10);
  CardTargetCursor::tryToUse((CardTargetCursor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridTargetCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall GridTargetCursor::onTouchEvent(GridTargetCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  CardTargetCursorEffectMgr *pCVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  int iStack_30;
  int iStack_2c;
  uint auStack_28 [2];
  undefined1 auStack_20 [4];
  int iStack_1c;
  Insets aIStack_18 [16];
  code *pcStack_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  pcStack_8 = ___stack_chk_guard;
  pcVar7 = ___stack_chk_guard;
  if (iVar1 == 4) {
    pcVar7 = *(code **)(*(long *)this + 0xa0);
    (*pcVar7)();
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x90))(this);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
      (**(code **)(*(long *)this + 0xa0))(this);
      BaseCursor::Destroy((BaseCursor *)this);
    }
    else {
      (**(code **)(*(long *)this + 0x98))();
      BaseCursor::Destroy((BaseCursor *)this);
    }
  }
  else {
    iVar5 = (int)pcVar7;
    if (iVar1 == 1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      plVar6 = *(long **)(lVar3 + 0x18);
      if (plVar6 != (long *)0x0) {
        Sexy::Insets::Insets(aIStack_18);
        CardTargetCursor::GetValidRange((CardTargetCursor *)this,(TRect *)aIStack_18);
        BaseCursor::GetBoardPosition();
        BaseCursor::GetBoardPosition();
        BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)auStack_28[0],iStack_1c,iVar5);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,iStack_30,iStack_2c);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*plVar6 + 0x58);
          BaseCursor::GetBoardPosition();
          (*pcVar7)((Point *)auStack_28,plVar6,auStack_20);
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetPositionFromBoardSpace(pCVar4,(Point *)auStack_28);
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetVisible(pCVar4,true);
          FUN_03603bc0(this + 0x38,0);
        }
        else {
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetVisible(pCVar4,false);
          FUN_03603bc0(this + 0x38,1);
        }
      }
    }
    cVar2 = '\0';
  }
  if (pcStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* GridTargetCursor::GridTargetCursor() */

void __thiscall GridTargetCursor::GridTargetCursor(GridTargetCursor *this)

{
  CardTargetCursor::CardTargetCursor((CardTargetCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06666fc0;
  return;
}


/* GridTargetCursor::StaticNew() */

GridTargetCursor * GridTargetCursor::StaticNew(void)

{
  GridTargetCursor *this;
  
  this = ::operator_new(0x68);
  GridTargetCursor(this);
  return this;
}


/* GridTargetCursor::~GridTargetCursor() */

void __thiscall GridTargetCursor::~GridTargetCursor(GridTargetCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06666fc0;
  CardTargetCursor::~CardTargetCursor((CardTargetCursor *)this);
  return;
}


/* GridTargetCursor::~GridTargetCursor() */

void __thiscall GridTargetCursor::~GridTargetCursor(GridTargetCursor *this)

{
  ~GridTargetCursor(this);
  AK::FreeHook(this);
  return;
}

