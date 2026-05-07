// Class: ZombieTowerDefendBasic


/* ZombieTowerDefendBasic::CheckIsTurnToUp() */

bool __thiscall ZombieTowerDefendBasic::CheckIsTurnToUp(ZombieTowerDefendBasic *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar3[1]);
  if ((1 < iVar2 + 1U) && (iVar1 != -1)) {
    iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar1,iVar2 + -1);
    return iVar1 == 7;
  }
  return false;
}


/* ZombieTowerDefendBasic::CheckIsTurnToDown() */

bool __thiscall ZombieTowerDefendBasic::CheckIsTurnToDown(ZombieTowerDefendBasic *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar4[1]);
  if (((iVar2 != -1) && (iVar1 != -1)) &&
     (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 + -1 != iVar2)) {
    iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar1,iVar2 + 1);
    return iVar1 == 7;
  }
  return false;
}


/* ZombieTowerDefendBasic::onPlaceOnBoard() */

void __thiscall ZombieTowerDefendBasic::onPlaceOnBoard(ZombieTowerDefendBasic *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieTowerDefendBasic::GetTrackOffset() const */

undefined4 ZombieTowerDefendBasic::GetTrackOffset(void)

{
  return 0x3e99999a;
}


/* ZombieTowerDefendBasic::~ZombieTowerDefendBasic() */

void __thiscall ZombieTowerDefendBasic::~ZombieTowerDefendBasic(ZombieTowerDefendBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0688d110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTowerDefendBasic_0688db98;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieTowerDefendBasic::~ZombieTowerDefendBasic() */

void __thiscall ZombieTowerDefendBasic::~ZombieTowerDefendBasic(ZombieTowerDefendBasic *this)

{
  ~ZombieTowerDefendBasic(this + -0x10);
  return;
}


/* ZombieTowerDefendBasic::~ZombieTowerDefendBasic() */

void __thiscall ZombieTowerDefendBasic::~ZombieTowerDefendBasic(ZombieTowerDefendBasic *this)

{
  ~ZombieTowerDefendBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTowerDefendBasic::~ZombieTowerDefendBasic() */

void __thiscall ZombieTowerDefendBasic::~ZombieTowerDefendBasic(ZombieTowerDefendBasic *this)

{
  ~ZombieTowerDefendBasic(this + -0x10);
  return;
}


/* ZombieTowerDefendBasic::onEnterState_TowerDefendDown(ZombieState) */

void ZombieTowerDefendBasic::onEnterState_TowerDefendDown(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  FUN_0465d830(*(undefined4 *)(param_1 + 0x18),uVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x800) = uVar1;
  return;
}


/* ZombieTowerDefendBasic::onEnterState_TowerDefendLeft(ZombieState) */

void __thiscall
ZombieTowerDefendBasic::onEnterState_TowerDefendLeft
          (ZombieTowerDefendBasic *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  Zombie::SetFacing((Zombie *)this,0);
  Zombie::onEnterState_Walk(this,param_2);
  uVar1 = FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieTowerDefendBasic::onEnterState_TowerDefendRight(ZombieState) */

void __thiscall
ZombieTowerDefendBasic::onEnterState_TowerDefendRight
          (ZombieTowerDefendBasic *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  Zombie::SetFacing((Zombie *)this,1);
  Zombie::onEnterState_Walk(this,param_2);
  uVar1 = FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieTowerDefendBasic::updateState_Walk() */

void __thiscall ZombieTowerDefendBasic::updateState_Walk(ZombieTowerDefendBasic *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((float)iVar2 * ((float)iVar1 + 0.7) + 200.0 <= fVar4) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieTowerDefendBasic::ZombieTowerDefendBasic() */

void __thiscall ZombieTowerDefendBasic::ZombieTowerDefendBasic(ZombieTowerDefendBasic *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0688d110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTowerDefendBasic_0688db98;
  return;
}


/* ZombieTowerDefendBasic::StaticNew() */

ZombieTowerDefendBasic * ZombieTowerDefendBasic::StaticNew(void)

{
  ZombieTowerDefendBasic *this;
  
  this = ::operator_new(0x810);
  ZombieTowerDefendBasic(this);
  return this;
}


/* ZombieTowerDefendBasic::CheckIsTurnToLeft() */

bool __thiscall ZombieTowerDefendBasic::CheckIsTurnToLeft(ZombieTowerDefendBasic *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar3[1]);
  if ((1 < iVar1 + 1U) && (iVar2 != -1)) {
    iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar1 + -1,iVar2);
    return iVar1 == 7;
  }
  return false;
}


/* ZombieTowerDefendBasic::CheckIsTurnToRight() */

bool __thiscall ZombieTowerDefendBasic::CheckIsTurnToRight(ZombieTowerDefendBasic *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar4[1]);
  if ((iVar2 != -1) && (iVar1 != -1)) {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar3 + -1 != iVar1) {
      iVar1 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar1 + 1,iVar2);
      return iVar1 == 7;
    }
  }
  return false;
}


/* ZombieTowerDefendBasic::CheckTurnToDirection() */

char __thiscall ZombieTowerDefendBasic::CheckTurnToDirection(ZombieTowerDefendBasic *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar1 == '\0') {
      cVar1 = Zombie::isInState((Zombie *)this,0x21);
      if (cVar1 == '\0') {
        cVar1 = Zombie::isInState((Zombie *)this,0x1f);
        if (cVar1 == '\0') {
          cVar1 = Zombie::isInState((Zombie *)this,0x20);
          if (cVar1 == '\0') {
            cVar1 = Zombie::isInState((Zombie *)this,0x22);
            if (cVar1 == '\0') {
              return '\0';
            }
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
            iVar4 = BoardTransforms::BoardSpaceToGridY(pfVar6[1]);
            if (iVar4 == -1) {
              return '\0';
            }
            if (iVar3 == -1) {
              return '\0';
            }
            iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
            if (iVar3 == iVar5 + -1) {
              cVar2 = (**(code **)(*(long *)this + 0xa08))(this,0x20);
              if (cVar2 == '\0') {
                Zombie::setZombieState((Zombie *)this,0x20,0);
                return cVar1;
              }
            }
            else {
              iVar3 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar3 + 1,iVar4);
              if (iVar3 == 7) {
                lVar8 = *(long *)this;
                uVar7 = 0x22;
                goto LAB_0465dfa8;
              }
              if (iVar3 != 8) {
                return '\0';
              }
              cVar2 = CheckIsTurnToDown(this);
              if (cVar2 == '\0') {
                cVar2 = (**(code **)(*(long *)this + 0xa08))(this,0x1f);
                if (cVar2 == '\0') {
                  Zombie::setZombieState((Zombie *)this,0x1f,0);
                  return cVar1;
                }
              }
              else {
                cVar1 = (**(code **)(*(long *)this + 0xa08))(this,0x20);
                if (cVar1 == '\0') {
                  Zombie::setZombieState((Zombie *)this,0x20);
                  return cVar2;
                }
              }
            }
          }
          else {
            cVar1 = CheckIsTurnToLeft(this);
            if (cVar1 == '\0') {
              cVar1 = CheckIsTurnToRight(this);
              lVar8 = *(long *)this;
              if (cVar1 == '\0') {
                uVar7 = 0x20;
                goto LAB_0465df7c;
              }
              cVar2 = (**(code **)(lVar8 + 0xa08))(this,0x22);
              if (cVar2 == '\0') {
                Zombie::setZombieState((Zombie *)this,0x22);
                return cVar1;
              }
            }
            else {
              cVar2 = (**(code **)(*(long *)this + 0xa08))(this,0x21);
              if (cVar2 == '\0') {
                Zombie::setZombieState((Zombie *)this,0x21);
                return cVar1;
              }
            }
          }
        }
        else {
          cVar2 = CheckIsTurnToLeft(this);
          if (cVar2 == '\0') {
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
            iVar4 = BoardTransforms::BoardSpaceToGridY(pfVar6[1]);
            if (iVar4 + 1U < 2 || iVar3 == -1) {
              return '\0';
            }
            iVar3 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar3,iVar4 + -1);
            lVar8 = *(long *)this;
            uVar7 = 0x1f;
            if (iVar3 == 7) {
LAB_0465df7c:
              (**(code **)(lVar8 + 0xa08))(this,uVar7);
              uVar9 = *(undefined4 *)(this + 0x1c);
              FUN_0465d830(*(undefined4 *)(this + 0x18),uVar9,*(undefined4 *)(this + 0x20));
              *(undefined4 *)(this + 0x800) = uVar9;
              return '\0';
            }
            cVar2 = (**(code **)(lVar8 + 0xa08))(this,0x22);
            if (cVar2 == '\0') {
              Zombie::setZombieState((Zombie *)this,0x22,0);
              return cVar1;
            }
          }
          else {
            cVar1 = (**(code **)(*(long *)this + 0xa08))(this,0x21);
            if (cVar1 == '\0') {
              Zombie::setZombieState((Zombie *)this,0x21,0);
              return cVar2;
            }
          }
        }
      }
      else {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
        iVar4 = BoardTransforms::BoardSpaceToGridY(pfVar6[1]);
        if (iVar3 + 1U < 2) {
          return '\0';
        }
        if (iVar4 == -1) {
          return '\0';
        }
        iVar3 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar3 + -1,iVar4);
        if (iVar3 == 7) {
          lVar8 = *(long *)this;
          uVar7 = 0x21;
LAB_0465dfa8:
          (**(code **)(lVar8 + 0xa08))(this,uVar7);
          uVar9 = FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                               *(undefined4 *)(this + 0x20));
          *(undefined4 *)(this + 0x800) = uVar9;
          return cVar1;
        }
        if (iVar3 != 8) {
          return '\0';
        }
        cVar2 = CheckIsTurnToUp(this);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*(long *)this + 0xa08))(this,0x20);
          if (cVar2 == '\0') {
            Zombie::setZombieState((Zombie *)this,0x20,0);
            return cVar1;
          }
        }
        else {
          cVar1 = (**(code **)(*(long *)this + 0xa08))(this,0x1f);
          if (cVar1 == '\0') {
            Zombie::setZombieState((Zombie *)this,0x1f);
            return cVar2;
          }
        }
      }
      return '\x01';
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTowerDefendBasic::updateState_TowerDefendUp() */

void __thiscall ZombieTowerDefendBasic::updateState_TowerDefendUp(ZombieTowerDefendBasic *this)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  FUN_0465d830(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  fVar6 = *(float *)(this + 0x800);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  if ((float)iVar1 < ABS(fVar5 - fVar6)) {
    CheckTurnToDirection(this);
  }
  lVar3 = *(long *)this;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar7 = *pfVar2;
  pcVar4 = *(code **)(lVar3 + 0x78);
  fVar8 = pfVar2[1];
  fVar5 = (float)(**(code **)(lVar3 + 0xa10))(this);
  fVar6 = (float)Zombie::GetTranslationMultiplier((Zombie *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar7,fVar8 - fVar5 * fVar6,pfVar2[2]);
  (*pcVar4)(this,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTowerDefendBasic::updateState_TowerDefendDown() */

void __thiscall ZombieTowerDefendBasic::updateState_TowerDefendDown(ZombieTowerDefendBasic *this)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  FUN_0465d830(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  fVar6 = *(float *)(this + 0x800);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  if ((float)iVar1 < ABS(fVar5 - fVar6)) {
    CheckTurnToDirection(this);
  }
  lVar3 = *(long *)this;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar7 = *pfVar2;
  pcVar4 = *(code **)(lVar3 + 0x78);
  fVar8 = pfVar2[1];
  fVar5 = (float)(**(code **)(lVar3 + 0xa10))(this);
  fVar6 = (float)Zombie::GetTranslationMultiplier((Zombie *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar7,fVar8 + fVar5 * fVar6,pfVar2[2]);
  (*pcVar4)(this,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTowerDefendBasic::updateState_TowerDefendRight() */

void __thiscall ZombieTowerDefendBasic::updateState_TowerDefendRight(ZombieTowerDefendBasic *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar3 = (float)FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(this + 0x800);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (((float)iVar2 < ABS(fVar3 - fVar5)) && (cVar1 = CheckTurnToDirection(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0xa08))(this,0x22);
    uVar4 = FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                         *(undefined4 *)(this + 0x20));
    *(undefined4 *)(this + 0x800) = uVar4;
    return;
  }
  return;
}


/* ZombieTowerDefendBasic::onHelmDropped(HelmType, int) */

undefined8 ZombieTowerDefendBasic::onHelmDropped(Zombie *param_1,undefined4 param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,0);
    uVar2 = (**(code **)(*(long *)pZVar1 + 0x288))(pZVar1,param_2,param_1);
    (**(code **)(*(long *)pZVar1 + 0x1f8))(pZVar1);
    return uVar2;
  default:
    return 0;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTowerDefendBasic::onTakeHelmDamage(DamageInfo const&) */

void __thiscall
ZombieTowerDefendBasic::onTakeHelmDamage(ZombieTowerDefendBasic *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x10000);
  if ((!bVar1) &&
     ((*(RtObject **)param_1 == (RtObject *)0x0 ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), !bVar1)))) {
    iVar4 = FUN_0465d820(*(undefined4 *)(this + 0xb0));
    if ((iVar4 == 2) || (iVar4 == 3)) {
      std::string::string(asStack_10,"Play_impact_shieldhit");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_0465e5f4);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
    else if (iVar4 == 1) {
      std::string::string(asStack_10,"Play_impact_plastic");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_0465e5f4);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
  }
  iVar4 = *(int *)(this + 0x80c);
  iVar2 = (**(code **)(*(long *)this + 0x208))(this);
  if (iVar2 != iVar4) {
    uVar3 = FUN_0465d820(*(undefined4 *)(this + 0xb0));
    switch(uVar3) {
    case 1:
    case 2:
    case 3:
    case 10:
    case 0xd:
      pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      (**(code **)(*(long *)pZVar5 + 0x270))(pZVar5,iVar2);
      (**(code **)(*(long *)pZVar5 + 0x1f8))(pZVar5);
    }
    *(int *)(this + 0x80c) = iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTowerDefendBasic::SetWalkUpValue(bool, float, float) */

void __thiscall
ZombieTowerDefendBasic::SetWalkUpValue
          (ZombieTowerDefendBasic *this,bool param_1,float param_2,float param_3)

{
  ZombieAnimRig *pZVar1;
  ZombiePropertySheet *pZVar2;
  undefined4 uVar3;
  float fVar4;
  
  this[0x808] = (ZombieTowerDefendBasic)param_1;
  if (!param_1) {
    Zombie::DestroySpeedUpEffect((Zombie *)this);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x804) = uVar3;
    pZVar1 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pZVar2 = Zombie::GetProps<ZombiePropertySheet>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(pZVar1,*(float *)(pZVar2 + 0x10));
    Zombie::SetTranslationMultiplier((Zombie *)this,1.0);
    return;
  }
  Zombie::CreateSpeedUpEffect((Zombie *)this);
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x804) = fVar4 + param_2;
  pZVar1 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombiePropertySheet>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar1,param_3 * *(float *)(pZVar2 + 0x10));
  Zombie::SetTranslationMultiplier((Zombie *)this,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTowerDefendBasic::updateState_TowerDefendLeft() */

void __thiscall ZombieTowerDefendBasic::updateState_TowerDefendLeft(ZombieTowerDefendBasic *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  GridItemHouse *pGVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  DamageInfo *pDVar10;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar9 = *(float *)(this + 0x800);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if (((float)iVar2 < ABS(fVar7 - fVar9)) && (cVar1 = CheckTurnToDirection(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0xa08))(this,0x21);
    uVar8 = FUN_0465d830(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                         *(undefined4 *)(this + 0x20));
    *(undefined4 *)(this + 0x800) = uVar8;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if ((this_00 != (RtObject *)0x0) &&
     (pGVar3 = Sexy::RtObject::Cast<GridItemHouse>(this_00), pGVar3 != (GridItemHouse *)0x0)) {
    pcVar6 = *(code **)(*(long *)pGVar3 + 0x110);
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
                    /* WARNING: Load size is inaccurate */
    pDVar10._0_4_ = *(DamageInfo **)(lVar4 + 0x24);
    if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
      uVar5 = Zombie::getEatingDamageType();
    }
    else {
      uVar5 = (**(code **)(*(long *)this + 0x910))(this);
    }
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar10._0_4_,local_70,local_6c,aDStack_68,uVar5,this,aPStack_78,0);
    (*pcVar6)(pGVar3,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTowerDefendBasic::StaticClassInit() */

void ZombieTowerDefendBasic::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieTowerDefendBasic");
      (*pcVar4)(plVar1,asStack_150,FUN_0465edcc,0x810,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TOWERDEFENDBASIC_TowerDefendUp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465e964(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TOWERDEFENDBASIC_TowerDefendDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465e964(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TOWERDEFENDBASIC_TowerDefendLeft");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465e964(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate0::Delegate0<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieTowerDefendBasic,void(ZombieTowerDefendBasic::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TOWERDEFENDBASIC_TowerDefendRight");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0465e964(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTowerDefendBasic::StaticGetClass() */

long * ZombieTowerDefendBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTowerDefendBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTowerDefendBasic::GetClass() const */

long * ZombieTowerDefendBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTowerDefendBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTowerDefendBasic::onZombieInitialize() */

void __thiscall ZombieTowerDefendBasic::onZombieInitialize(ZombieTowerDefendBasic *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar2;
  this[0x808] = (ZombieTowerDefendBasic)0x0;
  *(undefined4 *)(this + 0x80c) = 0;
  uVar2 = FUN_0465d820(*(undefined4 *)(this + 0xb0));
  switch(uVar2) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,uVar2);
    (**(code **)(*(long *)pZVar1 + 0x270))(pZVar1,*(undefined4 *)(this + 0x80c));
    (**(code **)(*(long *)pZVar1 + 0x1f8))(pZVar1);
  }
  return;
}


/* ZombieTowerDefendBasic::onUpdate() */

void __thiscall ZombieTowerDefendBasic::onUpdate(ZombieTowerDefendBasic *this)

{
  ZombieAnimRig *this_00;
  ZombiePropertySheet *pZVar1;
  float fVar2;
  undefined4 uVar3;
  
  Zombie::onUpdate((Zombie *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x804) < fVar2) {
    Zombie::DestroySpeedUpEffect((Zombie *)this);
    this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pZVar1 = Zombie::GetProps<ZombiePropertySheet>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar1 + 0x10));
    Zombie::SetTranslationMultiplier((Zombie *)this,1.0);
    this[0x808] = (ZombieTowerDefendBasic)0x0;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x804) = uVar3;
  }
  return;
}


/* ZombieTowerDefendBasic::onEnterState_BleedingOut(ZombieState) */

void ZombieTowerDefendBasic::onEnterState_BleedingOut(Zombie *param_1)

{
  Zombie::onEnterState_BleedingOut();
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  return;
}

