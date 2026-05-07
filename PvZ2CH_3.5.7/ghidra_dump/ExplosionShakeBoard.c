// Class: ExplosionShakeBoard


/* ExplosionShakeBoard::Init(float, int, int) */

ExplosionShakeBoard * __thiscall
ExplosionShakeBoard::Init(ExplosionShakeBoard *this,float param_1,int param_2,int param_3)

{
  AnimationController::Init((AnimationController *)this,param_1,true);
  *(int *)(this + 0x28) = param_2;
  *(int *)(this + 0x2c) = param_3;
  return this;
}


/* ExplosionShakeBoard::~ExplosionShakeBoard() */

void __thiscall ExplosionShakeBoard::~ExplosionShakeBoard(ExplosionShakeBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_066112e0;
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* ExplosionShakeBoard::~ExplosionShakeBoard() */

void __thiscall ExplosionShakeBoard::~ExplosionShakeBoard(ExplosionShakeBoard *this)

{
  ~ExplosionShakeBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExplosionShakeBoard::StaticClassInit() */

void ExplosionShakeBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"ExplosionShakeBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_032a1af8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExplosionShakeBoard::StaticGetClass() */

long * ExplosionShakeBoard::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"ExplosionShakeBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ExplosionShakeBoard::GetClass() const */

long * ExplosionShakeBoard::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"ExplosionShakeBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExplosionShakeBoard::Update(float) */

void __thiscall ExplosionShakeBoard::Update(ExplosionShakeBoard *this,float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_10;
  
  lVar3 = ___stack_chk_guard;
  iVar5 = 0;
  fVar8 = (float)FUN_0329b400(*(undefined4 *)(this + 0x14));
  fVar9 = (float)FUN_0329b408(*(undefined4 *)(this + 0x18));
  fVar9 = (fVar8 - param_1) / fVar9;
  fVar8 = (float)Sexy::Rand(2.0);
  iVar1 = *(int *)(this + 0x28);
  fVar10 = (float)Sexy::Rand(2.0);
  iVar2 = *(int *)(this + 0x2c);
  cVar4 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar4 != '\0') {
    iVar5 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  plVar6 = (long *)gLawnApp[0x13e];
  pcVar7 = *(code **)(*plVar6 + 0x1a8);
  Board::GetBoardBaseOffset();
  (*pcVar7)(plVar6,((int)((fVar8 + -1.0) * (float)iVar1 * fVar9) + local_10) - iVar5,
            (int)((fVar10 + -1.0) * (float)iVar2 * fVar9));
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExplosionShakeBoard::ExplosionShakeBoard() */

void __thiscall ExplosionShakeBoard::ExplosionShakeBoard(ExplosionShakeBoard *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_066112e0;
  return;
}


/* ExplosionShakeBoard::StaticNew() */

ExplosionShakeBoard * ExplosionShakeBoard::StaticNew(void)

{
  ExplosionShakeBoard *this;
  
  this = ::operator_new(0x30);
  ExplosionShakeBoard(this);
  return this;
}


/* ExplosionShakeBoard::Create() */

void ExplosionShakeBoard::Create(void)

{
  GameObject::Create<ExplosionShakeBoard>();
  return;
}

