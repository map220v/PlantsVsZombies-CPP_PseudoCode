// Class: Creature


/* Creature::setStateMachineTimeScale(float) */

void __thiscall Creature::setStateMachineTimeScale(Creature *this,float param_1)

{
  *(float *)(this + 0x168) = param_1;
  return;
}


/* Creature::ShouldDrawShadow() const */

byte __thiscall Creature::ShouldDrawShadow(Creature *this)

{
  char cVar1;
  byte bVar2;
  SexyVector3 *pSVar3;
  
  cVar1 = FUN_03b80664(*(undefined4 *)(this + 0x28));
  bVar2 = 0;
  if (cVar1 == '\0') {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    bVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::IsOnBoard() const */

void Creature::IsOnBoard(void)

{
  long lVar1;
  int iVar2;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((uint)((int)local_10 < iVar2) & ~local_10 >> 0x1f);
}


/* Creature::getWalkSpeed() const */

undefined4 __thiscall Creature::getWalkSpeed(Creature *this)

{
  return *(undefined4 *)(this + 0x174);
}


/* Creature::onCreatureInitialize() */

void Creature::onCreatureInitialize(void)

{
  return;
}


/* Creature::onSetIsFlying(bool) */

undefined1 Creature::onSetIsFlying(bool param_1)

{
  return param_1;
}


/* Creature::onApplyCondition(CreatureConditions) */

void Creature::onApplyCondition(void)

{
  return;
}


/* Creature::onEndCondition(CreatureConditions) */

void Creature::onEndCondition(void)

{
  return;
}


/* Creature::CalcBaseCreatureRenderLayer() const */

undefined8 Creature::CalcBaseCreatureRenderLayer(void)

{
  return 0x631f0;
}


/* Creature::CalcRenderOrder() const */

void __thiscall Creature::CalcRenderOrder(Creature *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  fVar7 = *(float *)(lVar4 + 4);
  if ((iVar1 == -1) && (iVar3 = BoardTransforms::GridToBoardSpaceY(3), (float)iVar3 < fVar7)) {
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  }
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar1);
  iVar3 = *(int *)(this + 0x184);
  fVar6 = (float)(int)((float)iVar2 - 10.0);
  if (fVar7 < fVar6) {
    Board::MakeRenderOrder(0x61e68,iVar1,iVar3 - (int)(fVar6 - fVar7));
    return;
  }
  uVar5 = (**(code **)(*(long *)this + 0x200))(this);
  Board::MakeRenderOrder(uVar5,iVar1,(int)(fVar7 - fVar6) + iVar3);
  return;
}


/* non-virtual thunk to Creature::CalcRenderOrder() const */

void __thiscall Creature::CalcRenderOrder(Creature *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* Creature::getState() const */

void __thiscall Creature::getState(Creature *this)

{
  FUN_0480fc10(*(undefined4 *)(this + 0xc0));
  return;
}


/* Creature::GetFacing() const */

undefined4 __thiscall Creature::GetFacing(Creature *this)

{
  return *(undefined4 *)(this + 0x170);
}


/* Creature::shouldDestroyWhenOffScreen() */

bool __thiscall Creature::shouldDestroyWhenOffScreen(Creature *this)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  bVar1 = true;
  if (-100.0 <= *pfVar3) {
    iVar2 = GetFacing(this);
    bVar1 = false;
    if (iVar2 == 1) {
      return 1000.0 < *pfVar3;
    }
  }
  return bVar1;
}


/* Creature::GetFacingMultiplier() const */

undefined4 __thiscall Creature::GetFacingMultiplier(Creature *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (*(int *)(this + 0x170) != 0) {
    uVar1 = 0xbf800000;
  }
  return uVar1;
}


/* Creature::SetTranslationMultiplier(float) */

void __thiscall Creature::SetTranslationMultiplier(Creature *this,float param_1)

{
  *(float *)(this + 0x178) = param_1;
  return;
}


/* Creature::SetWaveToLeave(int) */

void __thiscall Creature::SetWaveToLeave(Creature *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if ((0 < param_1) && (lVar2 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    iVar1 = FUN_0480fbe4(*(undefined4 *)(lVar2 + 0x28));
    *(int *)(this + 0x188) = iVar1 + param_1;
  }
  return;
}


/* Creature::IsWaveToLeave() */

bool __thiscall Creature::IsWaveToLeave(Creature *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  bVar2 = false;
  if (lVar4 != 0) {
    iVar1 = *(int *)(this + 0x188);
    if (iVar1 < 1) {
      return false;
    }
    iVar3 = FUN_0480fbe4(*(undefined4 *)(lVar4 + 0x28));
    bVar2 = iVar1 <= iVar3;
  }
  return bVar2;
}


/* Creature::getStateMachineTimeScale() const */

undefined4 __thiscall Creature::getStateMachineTimeScale(Creature *this)

{
  return *(undefined4 *)(this + 0x168);
}


/* Creature::isInState(unsigned int) const */

bool __thiscall Creature::isInState(Creature *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = getState(this);
  return uVar1 == param_1;
}


/* Creature::CalcPositionInTime(float) */

float __thiscall Creature::CalcPositionInTime(Creature *this,float param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_10;
  
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = (float)*puVar3;
  }
  else {
    if (*(code **)(*(long *)this + 0x210) == getWalkSpeed) {
      fVar5 = (float)getWalkSpeed(this);
    }
    else {
      fVar5 = (float)(**(code **)(*(long *)this + 0x210))();
    }
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_10 = *pfVar4;
    fVar6 = (float)GetFacingMultiplier(this);
    local_10 = local_10 - (float)iVar2 * fVar5 * fVar6 * param_1;
  }
  return local_10;
}


/* Creature::getTimeInState() const */

float __thiscall Creature::getTimeInState(Creature *this)

{
  return (float)*(double *)(this + 0x160);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall Creature::DrawCollisionInfo(Creature *this,Graphics *param_1)

{
  int iVar1;
  Insets *pIVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)this + 0x178))();
  Sexy::Insets::Insets((Insets *)&local_38,pIVar2);
  Sexy::Color::Color(aCStack_18,0,0xff,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar4 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_0480ffb8(local_38);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x24);
  local_38 = (int)((float)(int)(((float)iVar1 - fVar4) * fVar5) + fVar4);
  iVar1 = FUN_0480ffb8(local_34);
  fVar4 = *(float *)(param_1 + 0x1c);
  local_34 = (int)((float)(int)(((float)iVar1 - fVar6) * fVar4) + fVar6);
  iVar1 = FUN_0480ffb8(local_30);
  local_30 = (int)((float)iVar1 * fVar5);
  iVar1 = FUN_0480ffb8(local_2c);
  local_2c = (int)((float)iVar1 * fVar4);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_38);
  (**(code **)(*(long *)this + 0x1f8))((TRect *)&local_28,this);
  Sexy::Color::Color(aCStack_18,0xff,0,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar4 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_0480ffb8(local_28);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x24);
  local_28 = (int)((float)(int)(((float)iVar1 - fVar4) * fVar5) + fVar4);
  iVar1 = FUN_0480ffb8(local_24);
  fVar4 = *(float *)(param_1 + 0x1c);
  local_24 = (int)((float)(int)(((float)iVar1 - fVar6) * fVar4) + fVar6);
  iVar1 = FUN_0480ffb8(local_20);
  local_20 = (int)((float)iVar1 * fVar5);
  iVar1 = FUN_0480ffb8(local_1c);
  local_1c = (int)((float)iVar1 * fVar4);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_28);
  Sexy::Color::Color(aCStack_18,0xff,0,0xff);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar4 = (float)FUN_0480ffcc(*puVar3);
  fVar5 = (float)FUN_0480ffcc((float)puVar3[1] - (float)puVar3[2]);
  Sexy::Graphics::FillRect(param_1,(int)(fVar4 - 4.0),(int)(fVar5 - 4.0),8,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::GetClassType() const */

void Creature::GetClassType(void)

{
  long in_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
  FUN_05475d88();
  return;
}


/* Creature::GetProps() const */

void Creature::GetProps(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar1 + 0x70));
  return;
}


/* Creature::GetLastDistanceWalked() const */

float __thiscall Creature::GetLastDistanceWalked(Creature *this)

{
  CreatureAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (CreatureAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  fVar1 = (float)CreatureAnimRig::GetGroundTrackTranslation(this_00);
  fVar2 = (float)GetFacingMultiplier(this);
  return fVar2 * fVar1;
}


/* Creature::GetDrawFacingMultiplier() const */

undefined4 __thiscall Creature::GetDrawFacingMultiplier(Creature *this)

{
  char cVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  cVar1 = PopAnimRig::GetMirrorX(this_00);
  uVar2 = 0x3f800000;
  if (cVar1 != '\0') {
    uVar2 = 0xbf800000;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onEnterState_Melee(CreatureState) */

void Creature::onEnterState_Melee(long param_1)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
  pcVar2 = *(code **)(*plVar1 + 0x120);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::GetAnimRig() const */

void __thiscall Creature::GetAnimRig(Creature *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  nop();
  return;
}


/* Creature::SetIsFlying(bool) */

void __thiscall Creature::SetIsFlying(Creature *this,bool param_1)

{
  if (*(code **)(*(long *)this + 0x270) != onSetIsFlying) {
    (**(code **)(*(long *)this + 0x270))(this,param_1);
  }
  SetFlag<DebugLogFlags>(this + 0x16c,2,param_1);
  return;
}


/* Creature::setUseAnimTranslation(bool) */

void __thiscall Creature::setUseAnimTranslation(Creature *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x16c,1,param_1);
  return;
}


/* Creature::onExitState_Walk(CreatureState) */

void Creature::onExitState_Walk(long param_1)

{
  SetFlag<DebugLogFlags>(param_1 + 0x16c,1,0);
  return;
}


/* Creature::SetFacing(ZombieFacing) */

void __thiscall Creature::SetFacing(Creature *this,int param_2)

{
  bool bVar1;
  PopAnimRig *this_00;
  
  *(int *)(this + 0x170) = param_2;
  bVar1 = TestFlag<VaseFlags>(4,*(undefined4 *)(this + 0x16c));
  if (bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  PopAnimRig::SetMirrorX(this_00,param_2 == 1);
  return;
}


/* Creature::IsFlying() const */

bool __thiscall Creature::IsFlying(Creature *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x16c),2);
  return bVar1;
}


/* Creature::IsOnGround() const */

byte __thiscall Creature::IsOnGround(Creature *this)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  if (0.0 < *(float *)(lVar2 + 8)) {
    return 0;
  }
  bVar1 = IsFlying(this);
  return bVar1 ^ 1;
}


/* Creature::updateCheckForPitOfDoomDeath() */

void __thiscall Creature::updateCheckForPitOfDoomDeath(Creature *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  
  cVar1 = IsOnGround(this);
  if (cVar1 != '\0') {
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar2);
    if (cVar1 != '\0') {
      Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)this);
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::getBaseWalkSpeed() */

void Creature::getBaseWalkSpeed(void)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = *(float *)(lVar1 + 0x10);
  RandRangeFloat(fVar2 - fVar2 * *(float *)(lVar1 + 0x14),fVar2 + fVar2 * *(float *)(lVar1 + 0x14));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::startWalk() */

void __thiscall Creature::startWalk(Creature *this)

{
  CreatureAnimRig *this_00;
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = getBaseWalkSpeed();
  *(undefined4 *)(this + 0x174) = uVar1;
  this_00 = (CreatureAnimRig *)GetAnimRig(this);
  if (*(code **)(*(long *)this + 0x210) == getWalkSpeed) {
    fVar2 = (float)getWalkSpeed(this);
    CreatureAnimRig::SetDesiredWalkVelocity(this_00,fVar2);
    return;
  }
  fVar2 = (float)(**(code **)(*(long *)this + 0x210))();
  CreatureAnimRig::SetDesiredWalkVelocity(this_00,fVar2);
  return;
}


/* Creature::HasCondition(CreatureConditions) const */

void Creature::HasCondition(long param_1)

{
  EntityConditionTracker<Creature,CreatureConditions>::HasCondition
            ((EntityConditionTracker<Creature,CreatureConditions> *)(param_1 + 400));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::GetShadowScaling() const */

void Creature::GetShadowScaling(void)

{
  long lVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)uVar2,(int)((ulong)uVar2 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::GetGridExtents() const */

void __thiscall Creature::GetGridExtents(Creature *this)

{
  long lVar1;
  Point *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Point::Point(in_x8,(TPoint *)(lVar1 + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::calcCollisionRect() */

void Creature::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Creature *in_x0;
  long lVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar4 + 0x44));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar7 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_0480fd7c(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar6 = (float)GetFacingMultiplier(in_x0);
  bVar3 = local_8 == ___stack_chk_guard;
  *(int *)in_x8 = (int)((fVar5 - (float)(iVar1 / 2)) + (float)iVar2 * fVar6);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar7) - (float)*(int *)(in_x8 + 0xc));
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::CalcAttackRect() const */

void Creature::CalcAttackRect(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Creature *in_x0;
  long lVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar4 + 0x54));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar7 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_0480fd7c(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar6 = (float)GetFacingMultiplier(in_x0);
  bVar3 = local_8 == ___stack_chk_guard;
  *(int *)in_x8 = (int)((fVar5 - (float)(iVar1 / 2)) + (float)iVar2 * fVar6);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar7) - (float)*(int *)(in_x8 + 0xc));
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::playIdleSound() */

void __thiscall Creature::playIdleSound(Creature *this)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_05474178(lVar1 + 0x98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar1 != 0) {
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar1 + 0x98),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onIdleAnimationCycle(std::string const&, std::string const&, int) */

void Creature::onIdleAnimationCycle(string *param_1,string *param_2,int param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_05474178(lVar1 + 0x98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar1 != 0) {
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(lVar1 + 0x98),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::playWalkSound() */

void __thiscall Creature::playWalkSound(Creature *this)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_05474178(lVar1 + 0x90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar1 != 0) {
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(lVar1 + 0x90),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onWalkAnimationCycle(std::string const&, std::string const&, int) */

void Creature::onWalkAnimationCycle(string *param_1,string *param_2,int param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_05474178(lVar1 + 0x90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar1 != 0) {
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(lVar1 + 0x90),0.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::getStateDefinition() const */

void Creature::getStateDefinition(void)

{
  nop();
  return;
}


/* Creature::updateStateMachine() */

void __thiscall Creature::updateStateMachine(Creature *this)

{
  float fVar1;
  float fVar2;
  
  if (*(float *)(this + 0x168) != 0.0) {
    StateMachine<CreatureState>::UpdateState((StateMachine<CreatureState> *)(this + 0xc0));
    fVar2 = *(float *)(this + 0x168);
    fVar1 = (float)PVZ_Dt();
    *(double *)(this + 0x160) = *(double *)(this + 0x160) + (double)(fVar1 * fVar2);
  }
  return;
}


/* Creature::updateSpeed() */

void __thiscall Creature::updateSpeed(Creature *this)

{
  CreatureAnimRig *this_00;
  float fVar1;
  
  fVar1 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                           ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400));
  this_00 = (CreatureAnimRig *)GetAnimRig(this);
  CreatureAnimRig::SetAnimRateModifier(this_00,fVar1);
  setStateMachineTimeScale(this,fVar1);
  return;
}


/* Creature::forceApplyConditionEffects() */

void Creature::forceApplyConditionEffects(void)

{
  CreatureAnimRig *this;
  Creature *in_x0;
  float fVar1;
  
  fVar1 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                           ((EntityConditionTracker<Creature,CreatureConditions> *)(in_x0 + 400));
  this = (CreatureAnimRig *)GetAnimRig(in_x0);
  CreatureAnimRig::SetAnimRateModifier(this,fVar1);
  setStateMachineTimeScale(in_x0,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::initializeAnimRigForType(Sexy::RtWeakPtr<CreatureType const>) */

void __thiscall
Creature::initializeAnimRigForType(Creature *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  CreatureType *this_01;
  long *plVar2;
  TimeChallengeEndLevelUI *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtMixedPtrBase *)(this + 0xb0);
  this_01 = (CreatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  this_02 = (TimeChallengeEndLevelUI *)CreatureType::CreateAnimRig(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x268);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<Creature,void(Creature::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
  CreatureType::GetProps(this_01);
  CreatureAnimRig::SetGroundTrackName((string *)this_02);
  CreatureAnimRig::HideGroundTrack((CreatureAnimRig *)this_02);
  PopAnimRig::SetMirrorX((PopAnimRig *)this_02,*(int *)(this + 0x170) == 1);
  startWalk(this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_58);
  PopAnimRig::SetAudioObject((PopAnimRig *)this_02,aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  forceApplyConditionEffects();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::initializeAnimRig() */

void __thiscall Creature::initializeAnimRig(Creature *this)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0xa8));
  initializeAnimRigForType(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::CreatureInitialize(Sexy::RtWeakPtr<CreatureType const>) */

void __thiscall Creature::CreatureInitialize(Creature *this,RtWeakPtr *param_2)

{
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x178) = 0x3f800000;
  *(undefined4 *)(this + 0x168) = 0x3f800000;
  *(undefined8 *)(this + 0x160) = 0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),param_2);
  *(undefined4 *)(this + 0x170) = 0;
  initializeAnimRig(this);
  if (*(code **)(*(long *)this + 0x260) != onCreatureInitialize) {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* Creature::NotifyApplyCondition(CreatureConditions) */

void __thiscall Creature::NotifyApplyCondition(Creature *this,undefined8 param_2)

{
  forceApplyConditionEffects();
  if (*(code **)(*(long *)this + 0x278) != onApplyCondition) {
    (**(code **)(*(long *)this + 0x278))(this,param_2);
  }
  return;
}


/* Creature::StartRushOnScreen() */

void __thiscall Creature::StartRushOnScreen(Creature *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::ApplyCondition
            ((EntityConditionTracker<Creature,CreatureConditions> *)0x7f7fffff,0,this + 400,this,0);
  return;
}


/* Creature::ApplyCondition(CreatureConditions, float) */

void __thiscall
Creature::ApplyCondition
          (EntityConditionTracker<Creature,CreatureConditions> *param_1,Creature *this,
          undefined4 param_3)

{
  EntityConditionTracker<Creature,CreatureConditions>::ApplyCondition
            (_param_1,0,this + 400,this,param_3);
  return;
}


/* Creature::NotifyEndCondition(CreatureConditions) */

void Creature::NotifyEndCondition(Creature *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x280) != onEndCondition) {
    (**(code **)(*(long *)param_1 + 0x280))();
  }
  updateSpeed(param_1);
  return;
}


/* Creature::endRushOnScreen() */

void __thiscall Creature::endRushOnScreen(Creature *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::EndCondition
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this,0);
  return;
}


/* Creature::updateRushCondition() */

void __thiscall Creature::updateRushCondition(Creature *this)

{
  char cVar1;
  float *pfVar2;
  
  cVar1 = EntityConditionTracker<Creature,CreatureConditions>::HasCondition
                    ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),0);
  if ((cVar1 != '\0') &&
     ((pfVar2 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this), *pfVar2 <= 792.0 || (this[0xa1] != (Creature)0x0)))
     ) {
    endRushOnScreen(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onUpdate() */

void __thiscall Creature::onUpdate(Creature *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CreatureAnimRig *pCVar4;
  SexyVector3 *this_00;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateRushCondition(this);
  updateStateMachine(this);
  EntityConditionTracker<Creature,CreatureConditions>::Update
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x16c),1);
  pCVar4 = (CreatureAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  CreatureAnimRig::CreatureUpdateAnim(pCVar4,bVar1);
  if (bVar1) {
    pCVar4 = (CreatureAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    fVar6 = (float)CreatureAnimRig::GetGroundTrackTranslation(pCVar4);
    fVar7 = (float)GetFacingMultiplier(this);
    uVar3 = 0;
    uVar8 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,-(fVar6 * fVar7 * *(float *)(this + 0x178)),0.0,0.0);
    pcVar5 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
    local_14 = uVar3;
    local_10 = uVar8;
    (*pcVar5)(this,&local_18);
  }
  uVar3 = IsFlying(this);
  (**(code **)(*(long *)this + 0xa8))(this,uVar3);
  (**(code **)(*(long *)this + 0xa8))(this,uVar3);
  updateCheckForPitOfDoomDeath(this);
  nop();
  cVar2 = (**(code **)(*(long *)this + 0x298))(this);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::EndCondition(CreatureConditions) */

void __thiscall Creature::EndCondition(Creature *this,undefined4 param_2)

{
  EntityConditionTracker<Creature,CreatureConditions>::EndCondition
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::EndConditions(std::vector<CreatureConditions, std::allocator<CreatureConditions> >) */

void __thiscall
Creature::EndConditions
          (Creature *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    EntityConditionTracker<Creature,CreatureConditions>::EndCondition
              ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this,*puVar2);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::ClearConditions() */

void __thiscall Creature::ClearConditions(Creature *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::ClearConditions
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this);
  return;
}


/* Creature::onDestroy() */

void __thiscall Creature::onDestroy(Creature *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::ClearConditions
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::ApplyExitSpeedup() */

void __thiscall Creature::ApplyExitSpeedup(Creature *this)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ_EOT();
  ApplyCondition(this,3);
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
                    /* WARNING: Load size is inaccurate */
  CreatureConditionTracker::SetAdditionalValue
            (*(CreatureConditionTracker **)(lVar1 + 0x18),
             (EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  EntityConditionTracker<Creature,CreatureConditions>::SetDirty
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400));
  updateSpeed(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::updateConditionColors() */

void __thiscall Creature::updateConditionColors(Creature *this)

{
  EntityConditionTracker<Creature,CreatureConditions> *pEVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  Color aCStack_18 [16];
  long local_8;
  
  pEVar1 = (EntityConditionTracker<Creature,CreatureConditions> *)(this + 400);
  local_8 = ___stack_chk_guard;
  cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(pEVar1,8);
  if (cVar2 == '\0') {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::ClearShaderOverrideColor(pPVar3);
    cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(pEVar1,0x10);
  }
  else {
    EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::SetShaderOverrideColor(pPVar3,aCStack_18);
    cVar2 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(pEVar1,0x10);
  }
  if (cVar2 == '\0') {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar3);
  }
  else {
    EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::SetMultiplicativeOverlayColor(pPVar3,aCStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onDraw(Sexy::Graphics*) */

void __thiscall Creature::onDraw(Creature *this,Graphics *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  float fVar4;
  undefined4 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  GraphicsAutoState aGStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  if (*(float *)(this + 0x17c) == 0.0) {
    fVar7 = *(float *)(param_1 + 0x18);
    fVar4 = (float)GetDrawFacingMultiplier(this);
    uVar5 = FUN_0480ffcc(-(*(float *)(lVar1 + 100) * fVar7) * fVar4);
    fVar4 = (float)FUN_0480ffcc(*(float *)(lVar1 + 0x68) * *(float *)(param_1 + 0x1c));
    FUN_0480fa78(uVar5,-fVar4,auStack_28,auStack_1c);
  }
  else {
    Sexy::Insets::Insets((Insets *)&local_40);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    (**(code **)(*plVar3 + 0x90))(plVar3,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    fVar7 = (float)local_40 + (float)local_38 * 0.5;
    fVar4 = (float)local_3c + (float)local_34 * 0.5;
    FUN_0480fa78(-fVar7,-fVar4,auStack_28,auStack_1c);
    Sexy::SexyTransform2D::RotateDeg(aSStack_30,*(float *)(this + 0x17c));
    FUN_0480fa78(fVar7,fVar4,auStack_28,auStack_1c);
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    fVar4 = (float)FUN_0480ffcc(*(undefined4 *)(lVar1 + 100));
    GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_48);
    fVar7 = (float)FUN_0480ffcc(*(undefined4 *)(lVar1 + 0x68));
    FUN_0480fa78(-fVar4,-fVar7,auStack_28,auStack_1c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  Sexy::Color::Color((Color *)&local_40,1);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_40);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  uVar6 = (ulong)*(uint *)(this + 0x1c);
  uVar5 = FUN_0480fd7c(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
  fVar7 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_0480ffcc(uVar5);
  fVar8 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar7 +
       (float)(int)((fVar4 - fVar7) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_0480ffcc(uVar6 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar8 +
       (float)(int)((fVar4 - fVar8) * *(float *)(param_1 + 0x1c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::GetPAMColor();
  EntityConditionTracker<Creature,CreatureConditions>::SetDirty
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400));
  updateConditionColors(this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale((CreatureConditionTracker *)(this + 400));
  Sexy::SexyTransform2D::Scale
            (aSStack_30,fVar4 * *(float *)(this + 0x180),fVar4 * *(float *)(this + 0x180));
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::Draw(pPVar2,param_1,aSStack_30);
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PopAnimRig::SetPAMColor(pPVar2,(Color *)&local_40);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::reenterState() */

void __thiscall Creature::reenterState(Creature *this)

{
  StateMachine<CreatureState>::ReenterState((StateMachine<CreatureState> *)(this + 0xc0));
  *(undefined8 *)(this + 0x160) = 0;
  return;
}


/* Creature::setState(StateDefinition<CreatureState> const&, bool) */

void __thiscall Creature::setState(Creature *this,StateDefinition *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2) {
    iVar2 = FUN_0480fc10(*(undefined4 *)(this + 0xc0));
    if (iVar2 == *(int *)param_1) {
      cVar1 = StateMachine<CreatureState>::ReenterState
                        ((StateMachine<CreatureState> *)(this + 0xc0));
      goto LAB_048122e4;
    }
  }
  cVar1 = StateMachine<CreatureState>::SetState
                    ((StateMachine<CreatureState> *)(this + 0xc0),param_1);
LAB_048122e4:
  if (cVar1 != '\0') {
    *(undefined8 *)(this + 0x160) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onDrawShadow(Sexy::Graphics*) */

void __thiscall Creature::onDrawShadow(Creature *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,*pfVar2,pfVar2[1]);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_38,*(float *)(lVar1 + 0x6c),*(float *)(lVar1 + 0x70));
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)aRStack_38);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_0480ffcc(local_40);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar4 - fVar5) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_0480ffcc(local_3c);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar6 +
       (float)(int)((fVar4 - fVar6) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  fVar4 = *(float *)(lVar1 + 0x74);
  Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
  fVar5 = (float)(**(code **)(*(long *)this + 0x208))(this);
  (**(code **)(*(long *)this + 0x208))(this);
  Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar4);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(this + 0x180),*(float *)(this + 0x180));
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b29b88);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar3,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onEnterState_Idle(CreatureState) */

void Creature::onEnterState_Idle(Creature *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
  pcVar2 = *(code **)(*plVar1 + 0x110);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleAnimationCycle");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  playIdleSound(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onEnterState_Walk(CreatureState) */

void Creature::onEnterState_Walk(Creature *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetFlag<DebugLogFlags>(param_1 + 0x16c,1,1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
  pcVar2 = *(code **)(*plVar1 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimationCycle");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  playWalkSound(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::Creature() */

void __thiscall Creature::Creature(Creature *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06902dc0;
  *(undefined ***)(this + 0x10) = &PTR__Creature_06903070;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  StateMachine<CreatureState>::StateMachine((StateMachine<CreatureState> *)(this + 0xc0));
  CreatureConditionTracker::CreatureConditionTracker((CreatureConditionTracker *)(this + 400));
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  this[0xa1] = (Creature)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0x3f800000;
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* Creature::StaticNew() */

Creature * Creature::StaticNew(void)

{
  Creature *this;
  
  this = ::operator_new(0x210);
  Creature(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::StaticClassInit() */

void Creature::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<CreatureState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CreatureState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"Creature");
      (*pcVar5)(plVar2,asStack_150,FUN_0481342c,0x210,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"CreatureConditionTracker");
    (*pcVar5)(plVar2,asStack_150,FUN_048127b0,0x80,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<CreatureState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate0::Delegate0<Creature,void(Creature::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CRS_Idle");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04812edc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate0::Delegate0<Creature,void(Creature::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CRS_Walk");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04812edc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate0::Delegate0<Creature,void(Creature::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate1<CreatureState>::Delegate1<Creature,void(Creature::*)(CreatureState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CRS_Melee");
  StateDefinition<CreatureState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04812edc(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Creature::StaticGetClass() */

long * Creature::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Creature",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Creature::GetClass() const */

long * Creature::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"Creature",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::setStateSerialization(int) */

void __thiscall Creature::setStateSerialization(Creature *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CreatureState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CreatureState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CreatureState>::GetStateDefinition
                     ((StateMachineTable<CreatureState> *)pSVar2,param_1);
  StateDefinition<CreatureState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CreatureState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xc0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::setState(CreatureState, bool) */

void __thiscall Creature::setState(Creature *this,undefined4 param_2,bool param_3)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<CreatureState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<CreatureState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<CreatureState>::GetStateDefinition
                     ((StateMachineTable<CreatureState> *)pSVar2,param_2);
  StateDefinition<CreatureState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<CreatureState>::SetContext(aSStack_a8,this);
  setState(this,(StateDefinition *)aSStack_a8,param_3);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::PlaceOnStreet(int) */

void __thiscall Creature::PlaceOnStreet(Creature *this,int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  PopAnimRig *this_00;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  iVar1 = FUN_0480ffdc(param_1);
  local_18 = CONCAT44(local_18._4_4_,(float)(iVar1 + 800));
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  this[0xa1] = (Creature)0x1;
  setState(this,0,0);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  PopAnimRig::RandomizeCurrentAnimFrame(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::SpawnOnStreet(int) */

void __thiscall Creature::SpawnOnStreet(Creature *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0480ffb8(100);
  (**(code **)(*(long *)this + 0x1d8))(this,iVar1 + param_1);
  this[0xa1] = (Creature)0x1;
  iVar1 = FUN_0480ffdc(param_1);
  *(int *)(this + 0xa4) = iVar1 + 800;
  setState(this,1,0);
  return;
}


/* Creature::updateState_Walk() */

void __thiscall Creature::updateState_Walk(Creature *this)

{
  float *pfVar1;
  
  if ((this[0xa1] != (Creature)0x0) &&
     (pfVar1 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this), *pfVar1 <= (float)*(int *)(this + 0xa4))) {
    setState(this,0,0);
    return;
  }
  return;
}


/* Creature::~Creature() */

void __thiscall Creature::~Creature(Creature *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_06902dc0;
  *(undefined ***)(this + 0x10) = &PTR__Creature_06903070;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  CreatureConditionTracker::~CreatureConditionTracker((CreatureConditionTracker *)(this + 400));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Creature::~Creature() */

void __thiscall Creature::~Creature(Creature *this)

{
  ~Creature(this + -0x10);
  return;
}


/* Creature::~Creature() */

void __thiscall Creature::~Creature(Creature *this)

{
  ~Creature(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Creature::~Creature() */

void __thiscall Creature::~Creature(Creature *this)

{
  ~Creature(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Creature::onPostLoad() */

void __thiscall Creature::onPostLoad(Creature *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onPostLoad((BoardEntity *)this);
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x268);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<Creature,void(Creature::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Runner* Creature::GetAnimRig<DinosaurAnimRig_Runner>() const */

DinosaurAnimRig_Runner * __thiscall Creature::GetAnimRig<DinosaurAnimRig_Runner>(Creature *this)

{
  DinosaurAnimRig_Runner *extraout_x0;
  
  GetAnimRig(this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPropertySheet const* Creature::GetProps<DinosaurPropertySheet>() const */

DinosaurPropertySheet * Creature::GetProps<DinosaurPropertySheet>(void)

{
  RtObject *this;
  DinosaurPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactylPropertySheet const* Creature::GetProps<DinosaurPterodactylPropertySheet>()
   const */

DinosaurPterodactylPropertySheet * Creature::GetProps<DinosaurPterodactylPropertySheet>(void)

{
  RtObject *this;
  DinosaurPterodactylPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurPterodactylPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnkylosaurusPropertySheet const* Creature::GetProps<DinosaurAnkylosaurusPropertySheet>()
   const */

DinosaurAnkylosaurusPropertySheet * Creature::GetProps<DinosaurAnkylosaurusPropertySheet>(void)

{
  RtObject *this;
  DinosaurAnkylosaurusPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurAnkylosaurusPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRaptorPropertySheet const* Creature::GetProps<DinosaurRaptorPropertySheet>() const */

DinosaurRaptorPropertySheet * Creature::GetProps<DinosaurRaptorPropertySheet>(void)

{
  RtObject *this;
  DinosaurRaptorPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurRaptorPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurusPropertySheet const* Creature::GetProps<DinosaurStegosaurusPropertySheet>()
   const */

DinosaurStegosaurusPropertySheet * Creature::GetProps<DinosaurStegosaurusPropertySheet>(void)

{
  RtObject *this;
  DinosaurStegosaurusPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurStegosaurusPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurusPropertySheet const*
   Creature::GetProps<DinosaurTyrannosaurusPropertySheet>() const */

DinosaurTyrannosaurusPropertySheet * Creature::GetProps<DinosaurTyrannosaurusPropertySheet>(void)

{
  RtObject *this;
  DinosaurTyrannosaurusPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurTyrannosaurusPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurYoungerPropertySheet const* Creature::GetProps<DinosaurYoungerPropertySheet>() const */

DinosaurYoungerPropertySheet * Creature::GetProps<DinosaurYoungerPropertySheet>(void)

{
  RtObject *this;
  DinosaurYoungerPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurYoungerPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Creature::SetDrawIgnoreFacing(bool) */

void __thiscall Creature::SetDrawIgnoreFacing(Creature *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x16c,4,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurRunnerPropertySheet const* Creature::GetProps<DinosaurRunnerPropertySheet>() const */

DinosaurRunnerPropertySheet * Creature::GetProps<DinosaurRunnerPropertySheet>(void)

{
  RtObject *this;
  DinosaurRunnerPropertySheet *pDVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pDVar1 = Sexy::RtObject::Cast<DinosaurRunnerPropertySheet_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

