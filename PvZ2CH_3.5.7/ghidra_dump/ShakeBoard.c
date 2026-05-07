// Class: ShakeBoard


/* ShakeBoard::Init(float, int, int) */

ShakeBoard * __thiscall ShakeBoard::Init(ShakeBoard *this,float param_1,int param_2,int param_3)

{
  AnimationController::Init((AnimationController *)this,param_1,false);
  *(int *)(this + 0x28) = param_2;
  *(int *)(this + 0x2c) = param_3;
  return this;
}


/* ShakeBoard::~ShakeBoard() */

void __thiscall ShakeBoard::~ShakeBoard(ShakeBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06611230;
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* ShakeBoard::~ShakeBoard() */

void __thiscall ShakeBoard::~ShakeBoard(ShakeBoard *this)

{
  ~ShakeBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShakeBoard::StaticClassInit() */

void ShakeBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShakeBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_032a17ec,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShakeBoard::StaticGetClass() */

long * ShakeBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShakeBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShakeBoard::GetClass() const */

long * ShakeBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"ShakeBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShakeBoard::ShakeBoard() */

void __thiscall ShakeBoard::ShakeBoard(ShakeBoard *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_06611230;
  return;
}


/* ShakeBoard::StaticNew() */

ShakeBoard * ShakeBoard::StaticNew(void)

{
  ShakeBoard *this;
  
  this = ::operator_new(0x30);
  ShakeBoard(this);
  return this;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShakeBoard::Update(float) */

void __thiscall ShakeBoard::Update(ShakeBoard *this,float param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = FUN_0329b404(*(undefined4 *)(this + 0x10));
  uVar8 = FUN_0329b400(*(undefined4 *)(this + 0x14));
  iVar2 = Sexy::Rand(2);
  if (iVar2 == 0) {
    *(int *)(this + 0x28) = -*(int *)(this + 0x28);
  }
  if ((((Board *)gLawnApp[0x13e] == (Board *)0x0) ||
      (lVar5 = Board::GetLevelDefinition((Board *)gLawnApp[0x13e]), lVar5 == 0)) ||
     ((lVar5 = Board::GetLevelDefinition((Board *)gLawnApp[0x13e]), *(char *)(lVar5 + 0x114) == '\0'
      && (lVar5 = Board::GetLevelDefinition((Board *)gLawnApp[0x13e]),
         *(char *)(lVar5 + 0x115) == '\0')))) {
    iVar2 = 0;
    cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  }
  else {
    iVar2 = FUN_0329fc34(0x50);
    iVar2 = -iVar2;
    cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  }
  iVar4 = 0;
  if (cVar1 != '\0') {
    iVar4 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  pcVar6 = *(code **)(*(long *)gLawnApp[0x13e] + 0x1a8);
  local_18[0] = iVar2;
  iVar2 = CurveLerp<int>(uVar7,uVar8,param_1,local_18,this + 0x28,8);
  lVar5 = gLawnApp[0x13e];
  Board::GetBoardBaseOffset();
  local_18[1] = 0;
  iVar3 = CurveLerp<int>(uVar7,uVar8,param_1,local_18 + 1,this + 0x2c,8);
  (*pcVar6)(lVar5,(iVar2 + local_18[2]) - iVar4,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShakeBoard::Create() */

void ShakeBoard::Create(void)

{
  GameObject::Create<ShakeBoard>();
  return;
}

