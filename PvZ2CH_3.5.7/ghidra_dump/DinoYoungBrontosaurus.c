// Class: DinoYoungBrontosaurus


/* DinoYoungBrontosaurus::~DinoYoungBrontosaurus() */

void __thiscall DinoYoungBrontosaurus::~DinoYoungBrontosaurus(DinoYoungBrontosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_069060c0;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungBrontosaurus_069064a0;
  DinosaurYounger::~DinosaurYounger((DinosaurYounger *)this);
  return;
}


/* non-virtual thunk to DinoYoungBrontosaurus::~DinoYoungBrontosaurus() */

void __thiscall DinoYoungBrontosaurus::~DinoYoungBrontosaurus(DinoYoungBrontosaurus *this)

{
  ~DinoYoungBrontosaurus(this + -0x10);
  return;
}


/* DinoYoungBrontosaurus::~DinoYoungBrontosaurus() */

void __thiscall DinoYoungBrontosaurus::~DinoYoungBrontosaurus(DinoYoungBrontosaurus *this)

{
  ~DinoYoungBrontosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinoYoungBrontosaurus::~DinoYoungBrontosaurus() */

void __thiscall DinoYoungBrontosaurus::~DinoYoungBrontosaurus(DinoYoungBrontosaurus *this)

{
  ~DinoYoungBrontosaurus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungBrontosaurus::StaticClassInit() */

void DinoYoungBrontosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoYoungBrontosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_048312d8,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoYoungBrontosaurus::StaticGetClass() */

long * DinoYoungBrontosaurus::StaticGetClass(void)

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
  uVar2 = DinosaurYounger::StaticGetClass();
  (*pcVar3)(plVar1,"DinoYoungBrontosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungBrontosaurus::GetClass() const */

long * DinoYoungBrontosaurus::GetClass(void)

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
  uVar2 = DinosaurYounger::StaticGetClass();
  (*pcVar3)(plVar1,"DinoYoungBrontosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungBrontosaurus::DinoYoungBrontosaurus() */

void __thiscall DinoYoungBrontosaurus::DinoYoungBrontosaurus(DinoYoungBrontosaurus *this)

{
  DinosaurYounger::DinosaurYounger((DinosaurYounger *)this);
  *(undefined ***)this = &PTR_GetClass_069060c0;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungBrontosaurus_069064a0;
  return;
}


/* DinoYoungBrontosaurus::StaticNew() */

DinoYoungBrontosaurus * DinoYoungBrontosaurus::StaticNew(void)

{
  DinoYoungBrontosaurus *this;
  
  this = ::operator_new(0x230);
  DinoYoungBrontosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungBrontosaurus::caughtAnimDoneHandler() */

void __thiscall DinoYoungBrontosaurus::caughtAnimDoneHandler(DinoYoungBrontosaurus *this)

{
  int iVar1;
  int iVar2;
  Effect_DinoFootShadow *this_00;
  float fVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  Vec3 aVStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar3 = (float)(iVar1 * iVar2 + 200);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(local_24);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar3,(float)iVar1,0.0);
  local_14 = local_14 - 26.0;
  this_00 = Board::AddEffect<Effect_DinoFootShadow>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar3,local_14);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)&local_20,1000000);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar1,local_14);
  Effect_DinoFootShadow::SetMoveEndPos(local_20,local_1c,this_00);
  Effect_DinoFootShadow::StartMove(this_00);
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoYoungBrontosaurus::updateState_Cry() */

void __thiscall DinoYoungBrontosaurus::updateState_Cry(DinoYoungBrontosaurus *this)

{
  DinosaurYoungerPropertySheet *pDVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x224);
  pDVar1 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  if (fVar2 - fVar4 < *(float *)(pDVar1 + 0xb4)) {
    return;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x224) = uVar3;
  Creature::setState((Creature *)this,10,0);
  return;
}

