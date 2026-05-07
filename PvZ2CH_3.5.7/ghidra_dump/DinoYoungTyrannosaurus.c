// Class: DinoYoungTyrannosaurus


/* DinoYoungTyrannosaurus::wakeAnimDoneHandler() */

void __thiscall DinoYoungTyrannosaurus::wakeAnimDoneHandler(DinoYoungTyrannosaurus *this)

{
  Creature::setState((Creature *)this,1,0);
  return;
}


/* DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus() */

void __thiscall DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus(DinoYoungTyrannosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06906c40;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungTyrannosaurus_06907020;
  DinosaurYounger::~DinosaurYounger((DinosaurYounger *)this);
  return;
}


/* non-virtual thunk to DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus() */

void __thiscall DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus(DinoYoungTyrannosaurus *this)

{
  ~DinoYoungTyrannosaurus(this + -0x10);
  return;
}


/* DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus() */

void __thiscall DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus(DinoYoungTyrannosaurus *this)

{
  ~DinoYoungTyrannosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus() */

void __thiscall DinoYoungTyrannosaurus::~DinoYoungTyrannosaurus(DinoYoungTyrannosaurus *this)

{
  ~DinoYoungTyrannosaurus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungTyrannosaurus::StaticClassInit() */

void DinoYoungTyrannosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoYoungTyrannosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_0483266c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoYoungTyrannosaurus::StaticGetClass() */

long * DinoYoungTyrannosaurus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoYoungTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungTyrannosaurus::GetClass() const */

long * DinoYoungTyrannosaurus::GetClass(void)

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
  (*pcVar3)(plVar1,"DinoYoungTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoYoungTyrannosaurus::DinoYoungTyrannosaurus() */

void __thiscall DinoYoungTyrannosaurus::DinoYoungTyrannosaurus(DinoYoungTyrannosaurus *this)

{
  DinosaurYounger::DinosaurYounger((DinosaurYounger *)this);
  *(undefined ***)this = &PTR_GetClass_06906c40;
  *(undefined ***)(this + 0x10) = &PTR__DinoYoungTyrannosaurus_06907020;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  return;
}


/* DinoYoungTyrannosaurus::StaticNew() */

DinoYoungTyrannosaurus * DinoYoungTyrannosaurus::StaticNew(void)

{
  DinoYoungTyrannosaurus *this;
  
  this = ::operator_new(0x248);
  DinoYoungTyrannosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungTyrannosaurus::onEnterState_Walk(CreatureState) */

void DinoYoungTyrannosaurus::onEnterState_Walk(Creature *param_1)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Creature::setUseAnimTranslation(param_1,false);
  plVar2 = (long *)Creature::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar2 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x23c) = fVar4 + 0.25;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungTyrannosaurus::updateState_Walk() */

void __thiscall DinoYoungTyrannosaurus::updateState_Walk(DinoYoungTyrannosaurus *this)

{
  int iVar1;
  int iVar2;
  DinosaurYoungerPropertySheet *pDVar3;
  SexyVector3 *this_00;
  Effect_DinoRun *this_01;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  int local_2c;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar3 = Creature::GetProps<DinosaurYoungerPropertySheet>();
  if (pDVar3 != (DinosaurYoungerPropertySheet *)0x0) {
    fVar9 = *(float *)(pDVar3 + 0xa8);
    fVar5 = (float)Creature::GetFacingMultiplier((Creature *)this);
    fVar6 = (float)PVZ_Dt();
    fVar7 = 0.0;
    uVar8 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,fVar5 * fVar6 * -fVar9,0.0,0.0);
    pcVar4 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
    local_14 = fVar7;
    local_10 = uVar8;
    (*pcVar4)(this,&local_18);
  }
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar6 = (float)(iVar1 * iVar2 + 200);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(local_2c);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar6,(float)iVar1,0.0);
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x23c) <= fVar5) {
    this_01 = Board::AddEffect<Effect_DinoRun>(*(Board **)(gLawnApp + 0x9f0));
    Effect_DinoRun::SetKeyRow(this_01,local_2c);
    Sexy::FastCurve::SetOutRange((FastCurve *)aVStack_28,fVar6,local_14);
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this_01,(SexyVector2 *)aVStack_28,1000000);
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x23c) = uVar8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoYoungTyrannosaurus::onEnterState_Wake(DinoYoungerState) */

void DinoYoungTyrannosaurus::onEnterState_Wake(RealObject *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurYounger::onEnterState_Wake();
  std::string::string(asStack_10,"Play_Plant_DragonRoar_PlantFood_Roar");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

