// Class: MoveBoard


/* MoveBoard::~MoveBoard() */

void __thiscall MoveBoard::~MoveBoard(MoveBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_066110d0;
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* MoveBoard::~MoveBoard() */

void __thiscall MoveBoard::~MoveBoard(MoveBoard *this)

{
  ~MoveBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoveBoard::StaticClassInit() */

void MoveBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"MoveBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_032a1108,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoveBoard::StaticGetClass() */

long * MoveBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MoveBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoveBoard::GetClass() const */

long * MoveBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"MoveBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoveBoard::MoveBoard() */

void __thiscall MoveBoard::MoveBoard(MoveBoard *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_066110d0;
  return;
}


/* MoveBoard::StaticNew() */

MoveBoard * MoveBoard::StaticNew(void)

{
  MoveBoard *this;
  
  this = ::operator_new(0x40);
  MoveBoard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoveBoard::Update(float) */

void __thiscall MoveBoard::Update(MoveBoard *this,float param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0329b404(*(undefined4 *)(this + 0x10));
  uVar4 = FUN_0329b400(*(undefined4 *)(this + 0x14));
  local_10 = FUN_0329fc34(*(undefined4 *)(this + 0x28));
  local_c = FUN_0329fc34(*(undefined4 *)(this + 0x2c));
  iVar1 = CurveLerp<int>(uVar3,uVar4,param_1,&local_10,&local_c,*(undefined4 *)(this + 0x38));
  local_10 = FUN_0329fc34(*(undefined4 *)(this + 0x30));
  local_c = FUN_0329fc34(*(undefined4 *)(this + 0x34));
  iVar2 = CurveLerp<int>(uVar3,uVar4,param_1,&local_10,&local_c,*(undefined4 *)(this + 0x38));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x1a8))(*(long **)(gLawnApp + 0x9f0),iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoveBoard::Init(float, int, int, int, int, CurveType) */

MoveBoard * __thiscall
MoveBoard::Init(float param_1,MoveBoard *this,undefined4 param_2,undefined4 param_3,
               undefined4 param_4,undefined4 param_5,undefined4 param_7)

{
  AnimationController::Init((AnimationController *)this,param_1,true);
  *(undefined4 *)(this + 0x38) = param_7;
  *(undefined4 *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x2c) = param_3;
  *(undefined4 *)(this + 0x34) = param_5;
  return this;
}


/* MoveBoard::Create() */

void MoveBoard::Create(void)

{
  GameObject::Create<MoveBoard>();
  return;
}


/* MoveBoard::Create(float, int, int, int, int, CurveType) */

void MoveBoard::Create(MoveBoard *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = Create();
  Init(param_1,uVar1,param_2,param_3,param_4,param_5,param_6);
  return;
}

