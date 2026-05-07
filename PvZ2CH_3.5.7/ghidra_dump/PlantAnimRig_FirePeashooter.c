// Class: PlantAnimRig_FirePeashooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirePeashooter::StaticClassInit() */

void PlantAnimRig_FirePeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_FirePeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_040aef98,0x3d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_FirePeashooter::StaticGetClass() */

long * PlantAnimRig_FirePeashooter::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_FirePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_FirePeashooter::GetClass() const */

long * PlantAnimRig_FirePeashooter::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_FirePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirePeashooter::setFlamethrowerEmissionLocation(Sexy::Point const&) */

void __thiscall
PlantAnimRig_FirePeashooter::setFlamethrowerEmissionLocation
          (PlantAnimRig_FirePeashooter *this,Point *param_1)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  StandaloneEffect *this_00;
  Effect_PopAnim *this_01;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aebb38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06aebb38), iVar1 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06aebb40,0.0,-30.0,0.0);
    __cxa_guard_release(&DAT_06aebb38);
  }
  for (uVar4 = 0; uVar3 = FUN_040ac1c0(*(undefined8 *)(this + 0x3c0),*(undefined8 *)(this + 0x3c8)),
      uVar4 < uVar3; uVar4 = uVar4 + 1) {
    Sexy::Point::Point(aPStack_18,*(int *)param_1 + (int)uVar4,*(int *)(param_1 + 4));
    BoardTransforms::GridToBoardSpace(aPStack_18);
    uVar6 = 0;
    fVar5 = (float)local_2c;
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,fVar5,0.0);
    local_28 = (float)Sexy::SexyVector3::operator+
                                ((SexyVector3 *)&DAT_06aebb40,(SexyVector3 *)aPStack_18);
    local_20 = 0;
    local_24 = fVar5;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      local_20 = uVar6;
      local_20 = Board::calculateRoofOffsetZ(local_28);
    }
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040ac1cc(*(undefined8 *)(this + 0x3c0),uVar4);
    this_00 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_28,0x64960);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040ac1cc(*(undefined8 *)(this + 0x3c0),uVar4);
    this_01 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    Effect_PopAnim::SetCentered(this_01,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirePeashooter::PlantAnimRig_FirePeashooter() */

void __thiscall
PlantAnimRig_FirePeashooter::PlantAnimRig_FirePeashooter(PlantAnimRig_FirePeashooter *this)

{
  undefined4 uVar1;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FirePeashooter_067d3488;
  uVar1 = _FUN_040ad9ec;
  *(undefined ***)this = &PTR_GetClass_067d3220;
  *(undefined4 *)(this + 0x3b8) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3c0));
  return;
}


/* PlantAnimRig_FirePeashooter::StaticNew() */

PlantAnimRig_FirePeashooter * PlantAnimRig_FirePeashooter::StaticNew(void)

{
  PlantAnimRig_FirePeashooter *this;
  
  this = ::operator_new(0x3d8);
  PlantAnimRig_FirePeashooter(this);
  return this;
}


/* PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter() */

void __thiscall
PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter(PlantAnimRig_FirePeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067d3220;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_FirePeashooter_067d3488;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter() */

void __thiscall
PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter(PlantAnimRig_FirePeashooter *this)

{
  ~PlantAnimRig_FirePeashooter(this + -0x10);
  return;
}


/* PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter() */

void __thiscall
PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter(PlantAnimRig_FirePeashooter *this)

{
  ~PlantAnimRig_FirePeashooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter() */

void __thiscall
PlantAnimRig_FirePeashooter::~PlantAnimRig_FirePeashooter(PlantAnimRig_FirePeashooter *this)

{
  ~PlantAnimRig_FirePeashooter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirePeashooter::initializeFlameEffects(int) */

void __thiscall
PlantAnimRig_FirePeashooter::initializeFlameEffects(PlantAnimRig_FirePeashooter *this,int param_1)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  EffectAnimRig_LavaGuavaCrackSquare *this_02;
  int iVar3;
  float fVar4;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_FIREPEASHOOTER_FIRE");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (0 < param_1) {
    iVar3 = 0;
    do {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
      push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x3c0),(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      pRVar2 = (RtClass *)EffectAnimRig_FirePeashooterFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,pRVar2);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,this_00);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      fVar4 = (float)iVar3;
      iVar3 = iVar3 + 1;
      EffectAnimRig_LavaGuavaCrackSquare::StartPlayingCrackEffect
                (this_02,fVar4 * *(float *)(this + 0x3b8));
    } while (iVar3 != param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_FirePeashooter::PlayFlamethrowerEffect(int, Sexy::Point const&) */

void __thiscall
PlantAnimRig_FirePeashooter::PlayFlamethrowerEffect
          (PlantAnimRig_FirePeashooter *this,int param_1,Point *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  local_c = BoardConstants::NUMBER_OF_COLUMNS();
  local_c = local_c - *(int *)param_2;
  piVar2 = eastl::min_alt<int>(local_14,&local_c);
  iVar1 = *piVar2;
  iVar4 = iVar1;
  local_14[0] = iVar1;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar3 = FUN_040ac168(uVar5);
    if (lVar3 != 0) {
      lVar3 = FUN_040ad778(uVar5);
      iVar4 = iVar1 + 2;
      if (lVar3 == 0) {
        iVar4 = iVar1;
      }
    }
  }
  initializeFlameEffects(this,iVar4);
  setFlamethrowerEmissionLocation(this,param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_FirePeashooter::playPlantFoodOff() */

void __thiscall PlantAnimRig_FirePeashooter::playPlantFoodOff(PlantAnimRig_FirePeashooter *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *this_01;
  RtObject *this_02;
  EffectAnimRig_FirePeashooterFireSquare *this_03;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x3c0);
    uVar1 = FUN_040ac1c0(uVar3,*(undefined8 *)(this + 0x3c8));
    if (uVar1 <= uVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_040ac1cc(uVar3,uVar2);
    this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    this_02 = (RtObject *)UIWidget::GetAtlasImage(this_01);
    this_03 = Sexy::RtObject::Cast<EffectAnimRig_FirePeashooterFireSquare>(this_02);
    EffectAnimRig_LavaGuavaCrackSquare::StopPlayingCrackEffect
              ((EffectAnimRig_LavaGuavaCrackSquare *)this_03,
               (float)(int)uVar2 * *(float *)(this + 0x3b8));
    uVar2 = uVar2 + 1;
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x3c0));
  PlantAnimRig::playPlantFoodOff((PlantAnimRig *)this);
  return;
}

