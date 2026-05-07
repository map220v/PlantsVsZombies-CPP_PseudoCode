// Class: ZombieVan


/* ZombieVan::onExitState_StartSpin(ZombieState) */

void ZombieVan::onExitState_StartSpin(long *param_1)

{
  (**(code **)(*param_1 + 0x580))();
  return;
}


/* ZombieVan::onResilienceRecoverAnimStopped(std::string const&) */

void ZombieVan::onResilienceRecoverAnimStopped(string *param_1)

{
  int iVar1;
  
  iVar1 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  if (iVar1 != 1) {
    Zombie::setZombieState((Zombie *)param_1,0x2c,0);
    return;
  }
  return;
}


/* ZombieVan::prepareBumping() */

void __thiscall ZombieVan::prepareBumping(ZombieVan *this)

{
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieVan::prepareSpawn() */

void __thiscall ZombieVan::prepareSpawn(ZombieVan *this)

{
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return;
}


/* ZombieVan::setImmuneControl(bool, float) */

void __thiscall ZombieVan::setImmuneControl(ZombieVan *this,bool param_1,float param_2)

{
  if (!param_1) {
    Zombie::EndCondition((Zombie *)this,0x82);
    return;
  }
  Zombie::ApplyCondition((Zombie *)param_2,0,this,0x82,1);
  return;
}


/* ZombieVan::onWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombieVan::onWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  param_1[0x80c] = (string)0x1;
  return;
}


/* ZombieVan::onBumpChargeStopAnimDone(std::string const&) */

void ZombieVan::onBumpChargeStopAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x22,0);
  return;
}


/* ZombieVan::onSpinStopAnimDone(std::string const&) */

void ZombieVan::onSpinStopAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x27,0);
  return;
}


/* ZombieVan::onBumpingBackStopAnimDone(std::string const&) */

void ZombieVan::onBumpingBackStopAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::SetFacing((Zombie *)param_1,0);
      Zombie::setZombieState((Zombie *)param_1,0x2a,0);
      return;
    }
  }
  return;
}


/* ZombieVan::onSpawnStopAnimDone(std::string const&) */

void ZombieVan::onSpawnStopAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::SetFacing((Zombie *)param_1,0);
      Zombie::setZombieState((Zombie *)param_1,0x2a,0);
      return;
    }
  }
  return;
}


/* ZombieVan::onSpinFinishAnimDone(std::string const&) */

void ZombieVan::onSpinFinishAnimDone(string *param_1)

{
  Zombie::SetFacing((Zombie *)param_1,1);
  Zombie::setZombieState((Zombie *)param_1,0x28,0);
  return;
}


/* ZombieVan::~ZombieVan() */

void __thiscall ZombieVan::~ZombieVan(ZombieVan *this)

{
  *(undefined ***)this = &PTR_GetClass_06a17690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieVan_06a181f8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieVan::~ZombieVan() */

void __thiscall ZombieVan::~ZombieVan(ZombieVan *this)

{
  ~ZombieVan(this + -0x10);
  return;
}


/* ZombieVan::~ZombieVan() */

void __thiscall ZombieVan::~ZombieVan(ZombieVan *this)

{
  ~ZombieVan(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieVan::~ZombieVan() */

void __thiscall ZombieVan::~ZombieVan(ZombieVan *this)

{
  ~ZombieVan(this + -0x10);
  return;
}


/* ZombieVan::updateState_Entering() */

void __thiscall ZombieVan::updateState_Entering(ZombieVan *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((*pfVar3 <= (float)((iVar1 + -1) * iVar2 + 200)) && (this[0x80c] != (ZombieVan)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x2a,0);
  }
  this[0x80c] = (ZombieVan)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onBumpTurnStopAnimDone(std::string const&) */

void __thiscall ZombieVan::onBumpTurnStopAnimDone(ZombieVan *this,string *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
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
  lVar3 = FUN_05474374(param_1,"turn_up",0);
  if (lVar3 == -1) {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_18 = CONCAT44((float)(iVar1 << 1) + local_18._4_4_,(undefined4)local_18);
  }
  else {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_18 = CONCAT44(local_18._4_4_ - (float)(iVar1 << 1),(undefined4)local_18);
  }
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  Zombie::setZombieState((Zombie *)this,0x24,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::PickNextSkill(VanSkillSet) */

void __thiscall ZombieVan::PickNextSkill(ZombieVan *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x818) = param_2;
  Zombie::setZombieState((Zombie *)this,0x2b,0);
  return;
}


/* ZombieVan::prepareSpin() */

void __thiscall ZombieVan::prepareSpin(ZombieVan *this)

{
  Zombie::setZombieState((Zombie *)this,0x25,0);
  return;
}


/* ZombieVan::Trigger(VanSkillSet) */

void __thiscall ZombieVan::Trigger(ZombieVan *this,int param_2)

{
  if (param_2 == 1) {
    prepareSpawn(this);
    *(int *)(this + 0x814) = *(int *)(this + 0x814) + 1;
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 0) {
      *(int *)(this + 0x814) = *(int *)(this + 0x814) + 1;
      return;
    }
    prepareBumping(this);
    *(int *)(this + 0x814) = *(int *)(this + 0x814) + 1;
    return;
  }
  prepareSpin(this);
  *(int *)(this + 0x814) = *(int *)(this + 0x814) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::CheckVanMistExist() */

void ZombieVan::CheckVanMistExist(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  Board *this;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  iVar5 = 5;
  local_8 = ___stack_chk_guard;
  do {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar1 <= iVar5) {
      uVar4 = 0;
LAB_04f3c4d8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    for (iVar1 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      this = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"van_mist");
      lVar3 = Board::GetGridItemAt(this,asStack_10,iVar5,iVar1);
      std::string::~string(asStack_10);
      nop();
      if (lVar3 != 0) {
        uVar4 = 1;
        goto LAB_04f3c4d8;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


/* ZombieVan::CheckHalfHitpoints() */

bool __thiscall ZombieVan::CheckHalfHitpoints(ZombieVan *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_04f3b9d0(*(undefined4 *)(this + 0x280));
  fVar2 = (float)FUN_04f3b9d4(*(undefined4 *)(this + 0x284));
  return fVar1 < fVar2 * 0.5;
}


/* ZombieVan::CheckFirstBumpLaunch() */

byte __thiscall ZombieVan::CheckFirstBumpLaunch(ZombieVan *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = CheckHalfHitpoints(this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (byte)this[0x80d] ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::updateBumpingBack(float) */

void ZombieVan::updateBumpingBack(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x800),param_1);
  local_28 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::checkBumpingEdge(bool) */

bool __thiscall ZombieVan::checkBumpingEdge(ZombieVan *this,bool param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (!param_1) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    return *pfVar3 < 200.0;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  return (float)((iVar1 + -1) * iVar2 + 200) < *pfVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::resetBumping() */

void __thiscall ZombieVan::resetBumping(ZombieVan *this)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::onExitState_EndSpin(ZombieState) */

void __thiscall ZombieVan::onExitState_EndSpin(ZombieVan *this,undefined8 param_2)

{
  resetBumping(this);
  (**(code **)(*(long *)this + 0x580))(this,param_2);
  return;
}


/* ZombieVan::onExitState_Spinning(ZombieState) */

void ZombieVan::onExitState_Spinning(ZombieVan *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  setImmuneControl(param_1,false,fVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,false);
  return;
}


/* ZombieVan::onExitState_ReturnNormal(ZombieState) */

void ZombieVan::onExitState_ReturnNormal(ZombieVan *param_1)

{
  float fVar1;
  
  resetBumping(param_1);
  fVar1 = (float)PVZ_EOT();
  setImmuneControl(param_1,false,fVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::CalcSpinLayerCollisionPoint() */

void __thiscall ZombieVan::CalcSpinLayerCollisionPoint(ZombieVan *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PopAnimRig *this_00;
  float *pfVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)&local_28,"jipinfeiche_chetou_kd");
  PopAnimRig::CalcSymbolRect(this_00,(string *)&local_28,(TRect *)aIStack_18);
  std::string::~string((string *)&local_28);
  nop();
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_40,(TPoint *)&local_28);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar10 = pfVar6[2];
  fVar11 = pfVar6[1];
  iVar4 = FUN_04f3c044(local_40);
  fVar12 = *pfVar6;
  pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
  fVar9 = *(float *)(lVar8 + 0xc4);
  iVar5 = FUN_04f3c044(local_3c);
  pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_38,(float)(int)(((float)iVar4 + fVar12) - fVar9),
             (float)(int)((fVar11 + (float)iVar5) - *(float *)(lVar8 + 200)),fVar10);
  local_28 = local_38;
  uVar2 = local_28;
  local_20 = local_30;
  local_28._0_4_ = (undefined4)local_38;
  uVar1 = (undefined4)local_28;
  local_28._4_4_ = (undefined4)((ulong)local_38 >> 0x20);
  uVar3 = local_28._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_28 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::bumpingBack() */

void ZombieVan::bumpingBack(void)

{
  Zombie *in_x0;
  ZombieAnimRig_Van *this;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x800));
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x800),(SexyVector3 *)local_18);
  Zombie::SetFacing();
  Zombie::GetAnimRig(in_x0);
  nop();
  if (this != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayBumpingBack(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_BumpBack(ZombieState) */

void ZombieVan::onEnterState_BumpBack
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,Zombie *param_4)

{
  ZombieAnimRig_Van *this;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = Sexy::SexyVector3::operator-((SexyVector3 *)(param_4 + 0x800));
  uStack_14 = param_2;
  uStack_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x800),(SexyVector3 *)&uStack_18);
  Zombie::SetFacing(param_4,1);
  Zombie::GetAnimRig(param_4);
  nop();
  if (this != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayBumpingBack(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::onEnterState_ReturnNormal(ZombieState) */

void ZombieVan::onEnterState_ReturnNormal(ZombieVan *param_1)

{
  float fVar1;
  
  bumpingBack();
  fVar1 = (float)PVZ_EOT();
  setImmuneControl(param_1,true,fVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::spinBack() */

void ZombieVan::spinBack(void)

{
  Zombie *in_x0;
  ZombieAnimRig_Van *this;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(in_x0,true);
  local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x800));
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x800),(SexyVector3 *)local_18);
  Zombie::SetFacing();
  Zombie::GetAnimRig(in_x0);
  nop();
  if (this != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayNormal(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::CheckBumpLaunch() */

bool __thiscall ZombieVan::CheckBumpLaunch(ZombieVan *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x81c);
  fVar1 = (float)PVZ_T();
  return fVar2 < fVar1;
}


/* ZombieVan::PickRandomSkill() */

void __thiscall ZombieVan::PickRandomSkill(ZombieVan *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = CheckHalfHitpoints(this);
  if (cVar1 == '\0') {
    cVar1 = CheckVanMistExist();
    if (cVar1 == '\0') {
      if ((*(int *)(this + 0x818) + 1U & 0xfffffffd) != 0) {
        PickNextSkill(this);
        return;
      }
      goto LAB_04f3e2fc;
    }
  }
  else if ((*(uint *)(this + 0x818) & 0xfffffffd) != 0) {
    cVar1 = CheckVanMistExist();
    if (cVar1 != '\0') {
      bVar2 = CheckBumpLaunch(this);
      PickNextSkill(this,bVar2 ^ 1);
      return;
    }
    cVar1 = CheckBumpLaunch(this);
    if (cVar1 == '\0') {
LAB_04f3e2fc:
      PickNextSkill(this,2);
      return;
    }
    iVar3 = (**(code **)(*(long *)this + 0x300))(this,2);
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        Trigger(this,0);
      }
      goto LAB_04f3e2fc;
    }
    Trigger(this,2);
    uVar4 = 2;
    goto LAB_04f3e2c4;
  }
  uVar4 = 1;
LAB_04f3e2c4:
  PickNextSkill(this,uVar4);
  return;
}


/* ZombieVan::updateState_TriggerSkill() */

void __thiscall ZombieVan::updateState_TriggerSkill(ZombieVan *this)

{
  char cVar1;
  ZombieLaneChangingSubsystem *pZVar2;
  
  pZVar2 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = ZombieLaneChangingSubsystem::IsZombieChangingLanes((Zombie *)pZVar2);
  if (cVar1 != '\0') {
    return;
  }
  Trigger(this,*(undefined4 *)(this + 0x818));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::ZombieVan() */

void __thiscall ZombieVan::ZombieVan(ZombieVan *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a17690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieVan_06a181f8;
  DVec3::DVec3((DVec3 *)(this + 0x800));
  Sexy::Point::Point((Point *)(this + 0x828));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),(SexyVector3 *)&local_20);
  this[0x80c] = (ZombieVan)0x0;
  this[0x80d] = (ZombieVan)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x814) = 0;
  *(undefined4 *)(this + 0x818) = 0xffffffff;
  *(undefined4 *)(this + 0x810) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x820) = 0;
  *(undefined4 *)(this + 0x824) = 0;
  *(undefined4 *)(this + 0x81c) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGatherPlantingRestrictions);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombieVan,void(ZombieVan::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::StaticNew() */

ZombieVan * ZombieVan::StaticNew(void)

{
  ZombieVan *this;
  
  this = ::operator_new(0x830);
  ZombieVan(this);
  return this;
}


/* ZombieVan::updateState_Normal() */

void __thiscall ZombieVan::updateState_Normal(ZombieVan *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ZombieLaneChangingSubsystem *pZVar4;
  ZombieVanProps *pZVar5;
  float fVar6;
  
  pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = ZombieLaneChangingSubsystem::IsZombieChangingLanes((Zombie *)pZVar4);
  if (cVar1 == '\0') {
    cVar1 = CheckFirstBumpLaunch(this);
    if (cVar1 == '\0') {
      fVar6 = (float)PVZ_T();
      if (fVar6 < *(float *)(this + 0x810)) goto LAB_04f3ec5c;
      PickRandomSkill(this);
    }
    else {
      PickNextSkill(this,0);
      this[0x80d] = (ZombieVan)0x1;
    }
    fVar6 = (float)PVZ_T();
    pZVar5 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
    *(float *)(this + 0x810) = fVar6 + *(float *)(pZVar5 + 0x25c);
  }
LAB_04f3ec5c:
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 + -1 == iVar2) {
      iVar3 = iVar3 + -2;
    }
    else {
      fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      iVar3 = iVar2 + -1;
      if (fVar6 < 0.5) {
        iVar3 = iVar2 + 1;
      }
    }
  }
  pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar5 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  ZombieLaneChangingSubsystem::ForceLaneChange
            ((ZombieLaneChangingSubsystem *)0x3f4ccccd,*(undefined4 *)(pZVar5 + 0x264),pZVar4,this,
             iVar3,4);
  return;
}


/* ZombieVan::enterNormal() */

void __thiscall ZombieVan::enterNormal(ZombieVan *this)

{
  ZombieAnimRig_Van *this_00;
  ZombieVanProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayNormal(this_00);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  *(float *)(this + 0x810) = fVar2 + *(float *)(pZVar1 + 0x25c);
  return;
}


/* ZombieVan::onEnterState_Normal(ZombieState) */

void ZombieVan::onEnterState_Normal(Zombie *param_1)

{
  ZombieAnimRig_Van *this;
  ZombieVanProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig(param_1);
  nop();
  if (this != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayNormal(this);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieVanProps>(param_1);
  *(float *)(param_1 + 0x810) = fVar2 + *(float *)(pZVar1 + 0x25c);
  return;
}


/* ZombieVan::onEnterState_RecoveryResilienceHorizon(ZombieState) */

void ZombieVan::onEnterState_RecoveryResilienceHorizon(Zombie *param_1)

{
  ZombieVanProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieVanProps>(param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x800),(SexyVector3 *)(pZVar1 + 0x238));
  bumpingBack();
  return;
}


/* ZombieVan::startSpin() */

void __thiscall ZombieVan::startSpin(ZombieVan *this)

{
  ZombieVanProps *pZVar1;
  ZombieAnimRig_Van *this_00;
  ZombieAnimRig *this_01;
  
  Zombie::SetIsUsingAnimTranslation((Zombie *)this,true);
  pZVar1 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),(SexyVector3 *)(pZVar1 + 0x238));
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_Van *)0x0) {
    this_01 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pZVar1 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_01,*(float *)(pZVar1 + 0x234));
    ZombieAnimRig_Van::PlayNormal(this_00);
    return;
  }
  return;
}


/* ZombieVan::onEnterState_StartSpin(ZombieState) */

void ZombieVan::onEnterState_StartSpin(ZombieVan *param_1)

{
  undefined4 uVar1;
  
  startSpin(param_1);
  *(undefined4 *)(param_1 + 0x820) = 0;
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  *(undefined4 *)(param_1 + 0x824) = uVar1;
  return;
}


/* ZombieVan::bump() */

void __thiscall ZombieVan::bump(ZombieVan *this)

{
  ZombieVanProps *pZVar1;
  ZombieAnimRig_Van *this_00;
  
  pZVar1 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),(SexyVector3 *)(pZVar1 + 0x244));
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayBumping(this_00);
    return;
  }
  return;
}


/* ZombieVan::onEnterState_Bumping(ZombieState) */

void ZombieVan::onEnterState_Bumping(Zombie *param_1)

{
  ZombieVanProps *pZVar1;
  ZombieAnimRig_Van *this;
  
  pZVar1 = Zombie::GetProps<ZombieVanProps>(param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x800),(SexyVector3 *)(pZVar1 + 0x244));
  Zombie::GetAnimRig(param_1);
  nop();
  if (this != (ZombieAnimRig_Van *)0x0) {
    ZombieAnimRig_Van::PlayBumping(this);
    return;
  }
  return;
}


/* ZombieVan::calcHitRect() */

void ZombieVan::calcHitRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieVanProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieVanProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x268));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_04f3bcc0(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_Entering(ZombieState) */

void ZombieVan::onEnterState_Entering(Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  ZombieAnimRig *this;
  ZombieVanProps *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
    pZVar3 = Zombie::GetProps<ZombieVanProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar3 + 0x230));
  }
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Ready");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_Spawn(ZombieState) */

void ZombieVan::onEnterState_Spawn(Zombie *param_1)

{
  char cVar1;
  ZombieAnimRig_Van *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    Zombie::GetAnimRig(param_1);
    nop();
    if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onSpawnStopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Van::PlaySpawn(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_BumpCharge(ZombieState) */

void ZombieVan::onEnterState_BumpCharge(Zombie *param_1)

{
  ZombieAnimRig_Van *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBumpChargeStopAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Van::PlayBumpCharge(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_Spinning(ZombieState) */

void ZombieVan::onEnterState_Spinning(Zombie *param_1)

{
  ZombieAnimRig_Van *extraout_x0;
  float fVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onEndSpinAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Van::PlaySpin(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  *(int *)(param_1 + 0x820) = *(int *)(param_1 + 0x820) + 1;
  fVar1 = (float)PVZ_EOT();
  setImmuneControl((ZombieVan *)param_1,true,fVar1);
  Zombie::SetIgnoresAllDamage(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::updateBumpingBackEdge() */

void __thiscall ZombieVan::updateBumpingBackEdge(ZombieVan *this)

{
  char cVar1;
  ZombieAnimRig_Van *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = checkBumpingEdge(this,true);
  if (cVar1 != '\0') {
    resetBumping(this);
    Zombie::GetAnimRig((Zombie *)this);
    nop();
    if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onBumpingBackStopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Van::PlayStop(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    std::string::string(asStack_58,"Play_Bump_End");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieVan::updateState_RecoveryResilienceHorizon() */

void __thiscall ZombieVan::updateState_RecoveryResilienceHorizon(ZombieVan *this)

{
  float fVar1;
  
  if (*(float *)(this + 0x800) == 0.0) {
    return;
  }
  updateBumpingBackEdge(this);
  fVar1 = (float)PVZ_Dt();
  updateBumpingBack(fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEndSpinAnimDone(std::string const&) */

void ZombieVan::onEndSpinAnimDone(string *param_1)

{
  int iVar1;
  ZombieAnimRig_Van *extraout_x0;
  ZombieAnimRig_Van *extraout_x0_00;
  VanMistSubsystem *this;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  SharkMinion::getRow((SharkMinion *)param_1);
  BoardConstants::NUMBER_OF_COLUMNS();
  BoardConstants::NUMBER_OF_ROWS();
  if (*(int *)(param_1 + 0x820) == 3) {
    Zombie::GetAnimRig((Zombie *)param_1);
    nop();
    if (extraout_x0_00 != (ZombieAnimRig_Van *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onSpinFinishAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Van::PlaySpinFinish(extraout_x0_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    std::string::string(asStack_58,"Play_Drift_End");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    if (*(int *)(param_1 + 0x820) == 1) {
      this = Board::GetGameSubSystem<VanMistSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      VanMistSubsystem::LaunchVanMist(this,3,iVar1 + -1,0.2);
    }
    Zombie::GetAnimRig((Zombie *)param_1);
    nop();
    if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onEndSpinAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Van::PlaySpin(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    *(int *)(param_1 + 0x820) = *(int *)(param_1 + 0x820) + 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_SpinStop(ZombieState) */

void ZombieVan::onEnterState_SpinStop(Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ZombieAnimRig_Van *extraout_x0;
  long *extraout_x0_00;
  code *pcVar4;
  undefined8 local_e8;
  undefined8 local_e0;
  Point aPStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  RtId aRStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_d0);
    std::string::string(asStack_68,"onSpinStopAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,aRStack_c8,
               asStack_68);
    ZombieAnimRig_Van::PlaySpinStop(extraout_x0,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_b0);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
  }
  std::string::string(asStack_68,"Play_Drift");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_c8);
  Sexy::Insets::Insets((Insets *)asStack_68,iVar2,iVar3,1,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_c8,1,
             asStack_68);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_c8);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
    nop();
    if (extraout_x0_00 != (long *)0x0) {
      pcVar4 = *(code **)(*extraout_x0_00 + 0x120);
      Sexy::Point::Point(aPStack_d8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_d0,local_cc,asStack_68,param_1,aPStack_d8,0);
      (*pcVar4)(extraout_x0_00,asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::KillPlants(int, int) */

void __thiscall ZombieVan::KillPlants(ZombieVan *this,int param_1,int param_2)

{
  bool bVar1;
  long *extraout_x0;
  code *pcVar2;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,1,param_1,param_2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    nop();
    if (extraout_x0 != (long *)0x0) {
      pcVar2 = *(code **)(*extraout_x0 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
      (*pcVar2)(extraout_x0,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::updateState_StartSpin() */

void __thiscall ZombieVan::updateState_StartSpin(ZombieVan *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = *(int *)(this + 0x824);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar2 != iVar1) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    *(int *)(this + 0x824) = iVar2;
    iVar1 = SharkMinion::getRow((SharkMinion *)this);
    KillPlants(this,iVar2,iVar1);
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)(int)((float)(iVar2 * 3 + 200) + 10.0) <= *pfVar3) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x26,0);
  return;
}


/* ZombieVan::onEnterState_EndSpin(ZombieState) */

void ZombieVan::onEnterState_EndSpin(BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  
  spinBack();
  iVar1 = BoardEntity::CalcColumnPosition(param_1);
  *(int *)(param_1 + 0x824) = iVar1;
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  KillPlants((ZombieVan *)param_1,iVar1,iVar2);
  return;
}


/* ZombieVan::updateState_EndSpin() */

void __thiscall ZombieVan::updateState_EndSpin(ZombieVan *this)

{
  int iVar1;
  int iVar2;
  
  if (*(float *)(this + 0x800) != 0.0) {
    updateBumpingBackEdge(this);
  }
  iVar2 = *(int *)(this + 0x824);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar2 != iVar1) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    *(int *)(this + 0x824) = iVar2;
    iVar1 = SharkMinion::getRow((SharkMinion *)this);
    KillPlants(this,iVar2,iVar1);
    return;
  }
  return;
}


/* ZombieVan::updateState_ReturnNormal() */

void __thiscall ZombieVan::updateState_ReturnNormal(ZombieVan *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(float *)(this + 0x800) != 0.0) {
    updateBumpingBackEdge(this);
    fVar3 = (float)PVZ_Dt();
    updateBumpingBack(fVar3);
    iVar2 = *(int *)(this + 0x824);
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    if (iVar2 != iVar1) {
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      *(int *)(this + 0x824) = iVar2;
      iVar1 = SharkMinion::getRow((SharkMinion *)this);
      KillPlants(this,iVar2,iVar1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::UpdateCollisionPlants() */

void __thiscall ZombieVan::UpdateCollisionPlants(ZombieVan *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  RealObject *this_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  calcHitRect();
  SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,auStack_90
            );
  uVar6 = local_80;
  lVar3 = FUN_04f3ba44(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_04f3ba50(uVar6,uVar5);
      nop();
      iVar2 = (**(code **)(*(long *)this_00 + 0x180))();
      if ((((1 < iVar2) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0')) &&
          (cVar1 = Plant::CanBeTargeted((Plant *)this_00), cVar1 != '\0')) &&
         (cVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00), cVar1 != '\0')) {
        pcVar7 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,this,aPStack_a0,0);
        (*pcVar7)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      uVar6 = local_80;
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04f3ba44(local_80,local_78);
    } while (uVar5 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieVan::updateState_Bumping() */

void __thiscall ZombieVan::updateState_Bumping(ZombieVan *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  UpdateCollisionPlants(this);
  if (*(float *)(this + 0x800) != 0.0) {
    fVar3 = (float)PVZ_Dt();
    updateBumpingBack(fVar3);
  }
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)(int)((float)iVar1 * 0.5 + 200.0) <= *pfVar2) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* ZombieVan::updateState_BumpBack() */

void __thiscall ZombieVan::updateState_BumpBack(ZombieVan *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ZombieVanProps *pZVar4;
  float fVar5;
  
  UpdateCollisionPlants(this);
  if (*(float *)(this + 0x800) != 0.0) {
    updateBumpingBackEdge(this);
    fVar5 = (float)PVZ_Dt();
    updateBumpingBack(fVar5);
  }
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)((iVar1 + -1) * iVar2 + 200) <= *pfVar3) {
    fVar5 = (float)PVZ_T();
    pZVar4 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
    *(float *)(this + 0x81c) = fVar5 + *(float *)(pZVar4 + 0x260);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::OnGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieVan::OnGatherPlantingRestrictions
          (ZombieVan *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_18,local_20 + -1,local_1c,2,1);
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(TPoint *)param_1);
  if (cVar1 != '\0') {
    local_24 = 0x4e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_24);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::StaticClassInit() */

void ZombieVan::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieVan");
      (*pcVar4)(plVar1,asStack_150,FUN_04f418e8,0x830,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_ENTERING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_SPAWN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_BUMP_CHARGE");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_BUMPING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_BUMPING_TURN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_BUMP_BACK");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_START_SPIN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_SPIN_STOP");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_SPINNING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae8);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_END_SPIN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb00);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_RETURN_NORMAL");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_NORMAL");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_TRIGGER_SKILL");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate0::Delegate0<ZombieVan,void(ZombieVan::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieVan,void(ZombieVan::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_VAN_RECOVERY_RESILIENCE_HORIZON");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f40c78(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieVan::StaticGetClass() */

long * ZombieVan::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieVan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieVan::GetClass() const */

long * ZombieVan::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieVan",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::SpawnZombies() */

void __thiscall ZombieVan::SpawnZombies(ZombieVan *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ZombieVanProps *pZVar5;
  long lVar6;
  string *psVar7;
  ZombieType *this_00;
  RealObject *pRVar8;
  long lVar9;
  Board *pBVar10;
  undefined8 uVar11;
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_59;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Play_Spawn");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_38,0.0);
  std::string::~string(asStack_38);
  nop();
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_70 = *puVar4;
  local_68 = *(undefined4 *)(puVar4 + 1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_70 = CONCAT44(local_70._4_4_,(float)local_70 - (float)(iVar1 << 1));
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  pZVar5 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  iVar1 = FUN_04f3b9ec(*(undefined4 *)(pZVar5 + 0x210),*(int *)(pZVar5 + 0x214) + 1);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)asStack_38);
  uVar11 = *(undefined8 *)(pZVar5 + 0x218);
  iVar3 = FUN_04f3ba14(uVar11,*(undefined8 *)(pZVar5 + 0x220));
  if (0 < iVar3) {
    lVar9 = 0;
    while( true ) {
      uVar11 = FUN_04f3ba3c(uVar11,lVar9);
      FUN_05475d88((string *)&local_60,uVar11);
      lVar6 = FUN_04f3ba3c(*(undefined8 *)(pZVar5 + 0x218),lVar9);
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)asStack_38,(string *)&local_60,
                 (int)*(float *)(lVar6 + 8));
      std::string::~string((string *)&local_60);
      if (iVar3 <= (int)(lVar9 + 1)) break;
      uVar11 = *(undefined8 *)(pZVar5 + 0x218);
      lVar9 = lVar9 + 1;
    }
  }
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      ProbabilitySet<std::string>::PickItem();
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
      this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      ZombieType::EnsureResourceGroupsLoaded(this_00);
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_60);
      local_60 = FUN_04f3b9cc(*(undefined4 *)(this + 0x50));
      local_5c = 0;
      local_5b = 0;
      local_59 = 1;
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_80);
      pRVar8 = (RealObject *)
               Board::AddZombieInRow(pBVar10,aRStack_78,uVar2,0xfffffffb,(string *)&local_60,1,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      RealObject::JoinTeam(pRVar8,2);
      (**(code **)(*(long *)pRVar8 + 0x78))(pRVar8,&local_70);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      std::string::~string(asStack_88);
    } while (iVar3 != iVar1);
  }
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::CalcBumpTurnDirection() */

void __thiscall ZombieVan::CalcBumpTurnDirection(ZombieVan *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  TRect aTStack_100 [16];
  TRect aTStack_f0 [16];
  EntitySearch_InGridSquares aEStack_e0 [16];
  EntitySearch_InGridSquares aEStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  CBMemberTranslatorX aCStack_90 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_78 [32];
  Event1wRet<3,bool,BoardEntity*> aEStack_58 [32];
  Delegate1wRet<bool,BoardEntity*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  if (uVar1 < 2) {
    bVar6 = true;
  }
  else if (uVar1 - 3 < 2) {
    bVar6 = false;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a8);
    Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_78);
    Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_58);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar5 = (int)aTStack_100;
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,0,iVar2,2,iVar5);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,3,iVar2,2,iVar5);
    EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_e0,aTStack_100);
    EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_d0,aTStack_f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)aEStack_e0,EntitySearch_TouchingRectangle::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
              (aDStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)aEStack_d0,EntitySearch_TouchingRectangle::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
              (aDStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_58,(Delegate1wRet *)aDStack_38);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c0,1,
               aEStack_78);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a8,1,
               aEStack_58);
    uVar3 = FUN_04f3ba44(local_c0,local_b8);
    uVar4 = FUN_04f3ba44(local_a8,local_a0);
    bVar6 = uVar3 <= uVar4;
    Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_58);
    Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_78);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_a8);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_BumpTurn(ZombieState) */

void ZombieVan::onEnterState_BumpTurn(ZombieVan *param_1)

{
  int iVar1;
  ZombieAnimRig_Van *extraout_x0;
  char *__s;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = CalcBumpTurnDirection(param_1);
  Zombie::GetAnimRig((Zombie *)param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_Van *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBumpTurnStopAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Van::PlayBumpTurn(extraout_x0,iVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (iVar1 == 0) {
    __s = "Play_Bump_Turn_Up";
  }
  else {
    __s = "Play_Bump_Turn_Down";
  }
  std::string::string(asStack_58,__s);
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::PickSpinRow() */

void ZombieVan::PickSpinRow(void)

{
  undefined4 uVar1;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,0,1);
  ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,1,1);
  ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,2,1);
  ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,3,1);
  ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,4,1);
  uVar1 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieVan::onEnterState_TriggerSkill(ZombieState) */

void ZombieVan::onEnterState_TriggerSkill(SharkMinion *param_1)

{
  undefined4 uVar1;
  ZombieLaneChangingSubsystem *pZVar2;
  ZombieVanProps *pZVar3;
  
  SharkMinion::getRow(param_1);
  if (*(int *)(param_1 + 0x818) == 0) {
    uVar1 = PickSpinRow();
  }
  else {
    if (*(int *)(param_1 + 0x818) != 2) {
      return;
    }
    uVar1 = PickSpinRow();
  }
  pZVar2 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar3 = Zombie::GetProps<ZombieVanProps>((Zombie *)param_1);
  ZombieLaneChangingSubsystem::ForceLaneChange
            ((ZombieLaneChangingSubsystem *)0x3f4ccccd,*(undefined4 *)(pZVar3 + 0x264),pZVar2,
             param_1,uVar1,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onPlaceOnBoard() */

void __thiscall ZombieVan::onPlaceOnBoard(ZombieVan *this)

{
  long lVar1;
  code *pcVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  pcVar2 = *(code **)(*(long *)this + 0x78);
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,800.0,*(float *)(lVar1 + 4),*(float *)(lVar1 + 8));
  (*pcVar2)(this,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVan::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&) */

void ZombieVan::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"spawn");
  if (bVar1) {
    SpawnZombies((ZombieVan *)param_1);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}


/* ZombieVan::TakeDamage(DamageInfo const&) */

void __thiscall ZombieVan::TakeDamage(ZombieVan *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x24), cVar1 == '\0')) &&
      (cVar1 = Zombie::isInState((Zombie *)this,0x25), cVar1 == '\0')) &&
     ((cVar1 = Zombie::isInState((Zombie *)this,0x28), cVar1 == '\0' &&
      (cVar1 = Zombie::isInState((Zombie *)this,0x2c), cVar1 == '\0')))) {
    Zombie::TakeDamage((Zombie *)this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVan::onEnterState_Die(ZombieState) */

void __thiscall ZombieVan::onEnterState_Die(ZombieVan *this,undefined4 param_2)

{
  ZombieAnimRig *this_00;
  ZombieVanProps *pZVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Die");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::onEnterState_Die(this,param_2);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieVanProps>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar1 + 0x230));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

