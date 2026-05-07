// Class: GridSquareCoveringPoison


/* GridSquareCoveringPoison::getPamName() */

char * GridSquareCoveringPoison::getPamName(void)

{
  return "POPANIM_EFFECTS_ZOMBOSS_HYDRA_EFFECT";
}


/* GridSquareCoveringPoison::getImpactAnimName() */

undefined * GridSquareCoveringPoison::getImpactAnimName(void)

{
  return &DAT_05606438;
}


/* GridSquareCoveringPoison::getRenderOrder() */

void __thiscall GridSquareCoveringPoison::getRenderOrder(GridSquareCoveringPoison *this)

{
  Board::MakeGroundRenderOrder(*(int *)(this + 0xb8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringPoison::StaticClassInit() */

void GridSquareCoveringPoison::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareCoveringPoison");
    (*pcVar2)(plVar1,asStack_10,FUN_03e82398,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareCoveringPoison::StaticGetClass() */

long * GridSquareCoveringPoison::StaticGetClass(void)

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
  uVar2 = GridSquareCoveringFlame::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareCoveringPoison",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareCoveringPoison::GetClass() const */

long * GridSquareCoveringPoison::GetClass(void)

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
  uVar2 = GridSquareCoveringFlame::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareCoveringPoison",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareCoveringPoison::~GridSquareCoveringPoison() */

void __thiscall GridSquareCoveringPoison::~GridSquareCoveringPoison(GridSquareCoveringPoison *this)

{
  *(undefined ***)this = &PTR_GetClass_0678e640;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareCoveringPoison_0678e880;
  GridSquareCoveringFlame::~GridSquareCoveringFlame((GridSquareCoveringFlame *)this);
  return;
}


/* non-virtual thunk to GridSquareCoveringPoison::~GridSquareCoveringPoison() */

void __thiscall GridSquareCoveringPoison::~GridSquareCoveringPoison(GridSquareCoveringPoison *this)

{
  ~GridSquareCoveringPoison(this + -0x10);
  return;
}


/* GridSquareCoveringPoison::~GridSquareCoveringPoison() */

void __thiscall GridSquareCoveringPoison::~GridSquareCoveringPoison(GridSquareCoveringPoison *this)

{
  ~GridSquareCoveringPoison(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareCoveringPoison::~GridSquareCoveringPoison() */

void __thiscall GridSquareCoveringPoison::~GridSquareCoveringPoison(GridSquareCoveringPoison *this)

{
  ~GridSquareCoveringPoison(this + -0x10);
  return;
}


/* GridSquareCoveringPoison::GridSquareCoveringPoison() */

void __thiscall GridSquareCoveringPoison::GridSquareCoveringPoison(GridSquareCoveringPoison *this)

{
  GridSquareCoveringFlame::GridSquareCoveringFlame((GridSquareCoveringFlame *)this);
  *(undefined ***)this = &PTR_GetClass_0678e640;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareCoveringPoison_0678e880;
  return;
}


/* GridSquareCoveringPoison::StaticNew() */

GridSquareCoveringPoison * GridSquareCoveringPoison::StaticNew(void)

{
  GridSquareCoveringPoison *this;
  
  this = ::operator_new(0xd8);
  GridSquareCoveringPoison(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringPoison::addStartingAnimationSequence(Effect_PopAnim*) */

void __thiscall
GridSquareCoveringPoison::addStartingAnimationSequence
          (GridSquareCoveringPoison *this,Effect_PopAnim *param_1)

{
  char *__s;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  if (*(code **)(*(long *)this + 0x200) == getImpactAnimName) {
    __s = (char *)getImpactAnimName();
  }
  else {
    __s = (char *)(**(code **)(*(long *)this + 0x200))(this);
  }
  std::string::string(asStack_28,__s);
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"dy04");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"dy03");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(param_1,(AnimationSequence *)aPStack_20);
  std::string::string(asStack_28,"Play_Zomboss_Hydra_Poison_Loop");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_28,0.0);
  std::string::~string(asStack_28);
  nop();
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareCoveringPoison::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GridSquareCoveringPoison::onGatherPlantingRestrictions
          (GridSquareCoveringPoison *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)(this + 0xb4));
  if (cVar1 != '\0') {
    local_c = 4;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

