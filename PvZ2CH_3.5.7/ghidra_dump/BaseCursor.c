// Class: BaseCursor


/* BaseCursor::GetBoardPosition() const */

Point * BaseCursor::GetBoardPosition(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 8));
  return in_x8;
}


/* BaseCursor::onUpdate() */

void BaseCursor::onUpdate(void)

{
  return;
}


/* BaseCursor::onDraw(Sexy::Graphics*) */

void BaseCursor::onDraw(Graphics *param_1)

{
  return;
}


/* BaseCursor::onDestroy() */

void BaseCursor::onDestroy(void)

{
  return;
}


/* BaseCursor::StaticNew() */

undefined8 BaseCursor::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::getCursorAnimOffset() const */

void BaseCursor::getCursorAnimOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,0.0,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* BaseCursor::StaticGetClass() */

long * BaseCursor::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BaseCursor",uVar2,StaticNew);
  return sClass;
}


/* BaseCursor::GetClass() const */

long * BaseCursor::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BaseCursor",uVar2,StaticNew);
  return sClass;
}


/* BaseCursor::~BaseCursor() */

void __thiscall BaseCursor::~BaseCursor(BaseCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06733f70;
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x18))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  nop();
  return;
}


/* BaseCursor::~BaseCursor() */

void __thiscall BaseCursor::~BaseCursor(BaseCursor *this)

{
  ~BaseCursor(this);
  AK::FreeHook(this);
  return;
}


/* BaseCursor::SetPositionFromBoardSpace(Sexy::Point const&) */

void __thiscall BaseCursor::SetPositionFromBoardSpace(BaseCursor *this,Point *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03b74504(*(undefined4 *)param_1);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = FUN_03b74504(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* BaseCursor::setAnimRig(PopAnimRig*) */

void __thiscall BaseCursor::setAnimRig(BaseCursor *this,PopAnimRig *param_1)

{
  *(PopAnimRig **)(this + 0x28) = param_1;
  if (*(float *)(this + 0x3c) == 1.0) {
    return;
  }
  PopAnimRig::SetDrawScale(param_1,*(float *)(this + 0x3c));
  return;
}


/* BaseCursor::SetMovedOutsideOriginRect() */

void __thiscall BaseCursor::SetMovedOutsideOriginRect(BaseCursor *this)

{
  this[0x23] = (BaseCursor)0x1;
  return;
}


/* BaseCursor::handleTouchEvent(Sexy::Touch const&) */

byte __thiscall BaseCursor::handleTouchEvent(BaseCursor *this,Touch *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  if ((*(long *)(this + 0x30) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    bVar3 = 1;
    *(undefined8 *)(this + 0x30) = *(undefined8 *)param_1;
    SetPositionFromBoardSpace(this,(Point *)(param_1 + 0x10));
    Board::MakeCachedCursorRealCursor(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    if (*(long *)(this + 0x30) != *(long *)param_1) {
      return 0;
    }
    SetPositionFromBoardSpace(this,(Point *)(param_1 + 0x10));
    cVar2 = FUN_03b74408(this[0x23]);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(long *)this + 0x48))(this);
      if (cVar2 == '\0') {
        SetMovedOutsideOriginRect(this);
        bVar3 = 0;
        goto LAB_03b746f4;
      }
    }
    bVar3 = 0;
  }
LAB_03b746f4:
  bVar1 = (**(code **)(*(long *)this + 0x50))(this,param_1);
  return bVar1 | bVar3;
}


/* BaseCursor::IsCachedCursor() const */

void __thiscall BaseCursor::IsCachedCursor(BaseCursor *this)

{
  Board::IsCachedCursor(*(Board **)(gLawnApp + 0x9f0),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::GetUIWidgetPosition() const */

void __thiscall BaseCursor::GetUIWidgetPosition(BaseCursor *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Point *in_x8;
  undefined4 local_18;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GetBoardPosition();
  iVar3 = FUN_03b744e0(local_18);
  GetBoardPosition();
  iVar4 = FUN_03b744e0(local_c);
  Sexy::Point::Point(in_x8,iVar3,iVar4);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),in_x8);
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  bVar2 = lVar1 == ___stack_chk_guard;
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar3;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseCursor::BaseCursor() */

void __thiscall BaseCursor::BaseCursor(BaseCursor *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06733f70;
  Sexy::Point::Point((Point *)(this + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x10));
  this[0x20] = (BaseCursor)0x0;
  this[0x21] = (BaseCursor)0x0;
  this[0x22] = (BaseCursor)0x0;
  this[0x23] = (BaseCursor)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (BaseCursor)0x1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::setCursorBoardOrigin(Sexy::TRect<int> const&) */

void __thiscall BaseCursor::setCursorBoardOrigin(BaseCursor *this,TRect *param_1)

{
  bool bVar1;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,(Insets *)param_1);
  FUN_03b748d4(&local_18,aIStack_28);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_18;
  *(undefined8 *)(this + 0x18) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::IsInsideOriginRect() const */

void BaseCursor::IsInsideOriginRect(void)

{
  TPoint aTStack_20 [8];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PrismBeamTracker::GetColor();
  GetBoardPosition();
  Sexy::TRect<int>::Contains(aTStack_18,aTStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseCursor::Update() */

void __thiscall BaseCursor::Update(BaseCursor *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  if (this[0x38] != (BaseCursor)0x0) {
    this_00 = *(PopAnimRig **)(this + 0x28);
    if (this_00 != (PopAnimRig *)0x0) {
      fVar1 = (float)PVZ_T();
      fVar2 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    }
    if (*(code **)(*(long *)this + 0x58) != onUpdate) {
      (**(code **)(*(long *)this + 0x58))(this);
      return;
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03b74bc0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* BaseCursor::Draw(Sexy::Graphics*) */

void __thiscall BaseCursor::Draw(BaseCursor *this,Graphics *param_1)

{
  char cVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  FastCurve aFStack_50 [8];
  undefined4 local_48 [2];
  undefined4 local_40;
  float local_3c;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] != (BaseCursor)0x0) {
    if (*(long *)(this + 0x28) != 0) {
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_60,(TPoint *)&local_40);
      GetBoardPosition();
      Sexy::FastCurve::SetOutRange(aFStack_50,(float)local_58,(float)local_54);
      fVar5 = (float)local_5c;
      Sexy::FastCurve::SetOutRange((FastCurve *)local_48,(float)local_60,fVar5);
      local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_50,(SexyVector2 *)local_48);
      local_3c = fVar5;
      auVar4 = DVec2::getLength((DVec2 *)&local_40);
      local_40 = 0x3f800000;
      local_48[0] = 0x3dcccccd;
      fVar5 = CurveLerp<float>(auVar4,0x42c80000,auVar4._0_4_,(FastCurve *)local_48,
                               (DVec2 *)&local_40,4);
      uVar6 = 0x437f0000;
      this_00 = *(PopAnimRig **)(this + 0x28);
      Sexy::Insets::Insets((Insets *)&local_40,0xff,0xff,0xff,(int)(fVar5 * 255.0));
      PopAnimRig::SetPAMColor(this_00,(Color *)&local_40);
      uVar2 = (**(code **)(*(long *)this + 0x70))(this);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      if (this[0x20] == (BaseCursor)0x0) {
        fVar5 = (float)FUN_03b744f4(uVar2);
        fVar3 = (float)FUN_03b744f4(uVar6);
        FUN_03b743dc(-fVar5,-fVar3,auStack_28,auStack_1c);
      }
      else {
        uVar2 = FUN_03b744f4(uVar2);
        fVar5 = (float)FUN_03b744f4(uVar6);
        FUN_03b743dc(uVar2,-fVar5,auStack_28,auStack_1c);
      }
      cVar1 = CardGameUtils::IsPlayingCardGame();
      if ((cVar1 == '\0') && (*(float *)(this + 0x3c) == 1.0)) {
        Sexy::SexyTransform2D::Scale
                  (aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
      }
      else {
        fVar5 = (float)PopAnimRig::GetDrawScale(*(PopAnimRig **)(this + 0x28));
        Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar5);
      }
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0x28),param_1,aSStack_30);
    }
    if (*(code **)(*(long *)this + 0x60) != onDraw) {
      (**(code **)(*(long *)this + 0x60))(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseCursor::updateScale() */

void __thiscall BaseCursor::updateScale(BaseCursor *this)

{
  LevelModuleManager *this_00;
  ScaledBoardModule *this_01;
  float fVar1;
  undefined4 uVar2;
  
  if ((((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (this_00 = (LevelModuleManager *)
                  FUN_03b7440c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
       this_00 != (LevelModuleManager *)0x0)) &&
      (this_01 = LevelModuleManager::GetModuleByClass<ScaledBoardModule>(this_00),
      this_01 != (ScaledBoardModule *)0x0)) &&
     (fVar1 = (float)LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this_01), fVar1 != 1.0
     )) {
    uVar2 = LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this_01);
    *(undefined4 *)(this + 0x3c) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::DelayConstruct(Sexy::Touch const&) */

void __thiscall BaseCursor::DelayConstruct(BaseCursor *this,Touch *param_1)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)param_1 == 0) {
    FUN_03b743fc(this + 0x30);
  }
  else {
    *(long *)(this + 0x30) = *(long *)param_1;
    SetPositionFromBoardSpace(this,(Point *)(param_1 + 0x10));
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  }
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<BaseCursor,bool(BaseCursor::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_88);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,5,a_Stack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BaseCursor::BaseCursor(Sexy::Touch const&) */

void __thiscall BaseCursor::BaseCursor(BaseCursor *this,Touch *param_1)

{
  long lVar1;
  Board *pBVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06733f70;
  Sexy::Point::Point((Point *)(this + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x10));
  lVar1 = *(long *)param_1;
  this[0x20] = (BaseCursor)0x0;
  this[0x21] = (BaseCursor)0x0;
  this[0x22] = (BaseCursor)0x0;
  this[0x23] = (BaseCursor)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (BaseCursor)0x1;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  if (lVar1 == 0) {
    FUN_03b743fc(this + 0x30);
  }
  else {
    *(long *)(this + 0x30) = lVar1;
    SetPositionFromBoardSpace(this,(Point *)(param_1 + 0x10));
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  }
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<BaseCursor,bool(BaseCursor::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_88);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,5,a_Stack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88);
  updateScale(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BaseCursor::Destroy() */

void __thiscall BaseCursor::Destroy(BaseCursor *this)

{
  char cVar1;
  
  if (this[0x21] == (BaseCursor)0x0) {
    this[0x21] = (BaseCursor)0x1;
    MessageRouter::Broadcast<BaseCursor*,BaseCursor*>
              ((MessageRouter *)gMessageRouter,Message::CursorDestroyed,this);
    if (*(code **)(*(long *)this + 0x68) != onDestroy) {
      (**(code **)(*(long *)this + 0x68))(this);
    }
    cVar1 = IsCachedCursor(this);
    if (cVar1 != '\0') {
      Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
      return;
    }
  }
  return;
}


/* BaseCursor::cacheOrDestroyCursor() */

void __thiscall BaseCursor::cacheOrDestroyCursor(BaseCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_03b74408(this[0x23]);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 != '\0')) {
    Destroy(this);
    return;
  }
  cVar1 = FUN_03b74404(this[0x22]);
  if (cVar1 == '\0') {
    this_00 = (Projectile *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = Projectile::GetAnimRig(this_00);
    if (lVar2 == 0) {
      Board::SetCachedCursor(*(Board **)(gLawnApp + 0x9f0),this);
      return;
    }
  }
  Destroy(this);
  return;
}

