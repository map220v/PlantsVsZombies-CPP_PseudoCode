// Class: ElectricBall


/* ElectricBall::~ElectricBall() */

void __thiscall ElectricBall::~ElectricBall(ElectricBall *this)

{
  *(undefined ***)this = &PTR_GetClass_067489e0;
  *(undefined ***)(this + 0x10) = &PTR__ElectricBall_06748bd0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElectricBall::~ElectricBall() */

void __thiscall ElectricBall::~ElectricBall(ElectricBall *this)

{
  ~ElectricBall(this + -0x10);
  return;
}


/* ElectricBall::~ElectricBall() */

void __thiscall ElectricBall::~ElectricBall(ElectricBall *this)

{
  ~ElectricBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricBall::~ElectricBall() */

void __thiscall ElectricBall::~ElectricBall(ElectricBall *this)

{
  ~ElectricBall(this + -0x10);
  return;
}


/* ElectricBall::ElectricBall() */

void __thiscall ElectricBall::ElectricBall(ElectricBall *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067489e0;
  *(undefined ***)(this + 0x10) = &PTR__ElectricBall_06748bd0;
  return;
}


/* ElectricBall::StaticNew() */

ElectricBall * ElectricBall::StaticNew(void)

{
  ElectricBall *this;
  
  this = ::operator_new(0x1a8);
  ElectricBall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBall::StaticClassInit() */

void ElectricBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricBall");
    (*pcVar2)(plVar1,asStack_10,FUN_03c122b8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricBall::StaticGetClass() */

long * ElectricBall::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBall::GetClass() const */

long * ElectricBall::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBall::handleImpact(BoardEntity*) */

void __thiscall ElectricBall::handleImpact(ElectricBall *this,BoardEntity *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  ElectricBallProps *pEVar6;
  BoardTransforms *this_00;
  long lVar7;
  GridItemElectricStrom *pGVar8;
  float fVar9;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  iVar3 = FUN_03c0fd70(*(undefined4 *)(this + 0x70));
  fVar9 = (float)Sexy::Rand(1.0);
  pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pEVar6 = Sexy::RtObject::Cast<ElectricBallProps>(pRVar5);
  if (fVar9 < *(float *)(pEVar6 + 0x1e0)) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    if (((local_10 != -1) && (local_c != -1)) && (lVar7 = FUN_03c142cc(), lVar7 == 0)) {
      pGVar8 = (GridItemElectricStrom *)FUN_03c13fc0(local_10,local_c);
      lVar7 = FUN_03c143b0(local_10,local_c);
      if (pGVar8 == (GridItemElectricStrom *)0x0) {
        if (lVar7 == 0) {
          pRVar5 = (RtObject *)
                   Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pEVar6 + 0x1e8),
                                      local_10,local_c,iVar3);
          pGVar8 = Sexy::RtObject::Cast<GridItemElectricStrom>(pRVar5);
          uVar4 = FUN_02fd3d40(*(undefined4 *)(this + 0x24));
          FUN_02fd3d44(pGVar8 + 0x24,uVar4);
          GridItemElectricStrom::SetIdle(pGVar8);
        }
      }
      else {
        GridItemElectricStrom::ResetTimer(pGVar8);
        (**(code **)(*(long *)pGVar8 + 0x198))(pGVar8,iVar3);
      }
    }
  }
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

