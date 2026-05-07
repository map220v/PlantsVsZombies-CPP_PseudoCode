// Class: PlantSpikerock


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikerock::playAttackSound() */

void __thiscall PlantSpikerock::playAttackSound(PlantSpikerock *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Plant_Spikerock_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikerock::stopAttackSound() */

void __thiscall PlantSpikerock::stopAttackSound(PlantSpikerock *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Stop_Plant_Spikerock_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpikerock::~PlantSpikerock() */

void __thiscall PlantSpikerock::~PlantSpikerock(PlantSpikerock *this)

{
  *(undefined ***)this = &PTR_GetClass_067c4850;
  PlantSpikeweed::~PlantSpikeweed((PlantSpikeweed *)this);
  return;
}


/* PlantSpikerock::~PlantSpikerock() */

void __thiscall PlantSpikerock::~PlantSpikerock(PlantSpikerock *this)

{
  ~PlantSpikerock(this);
  AK::FreeHook(this);
  return;
}


/* PlantSpikerock::StaticGetClass() */

long * PlantSpikerock::StaticGetClass(void)

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
  uVar2 = PlantSpikeweed::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSpikerock",uVar2,StaticNew);
  return sClass;
}


/* PlantSpikerock::GetClass() const */

long * PlantSpikerock::GetClass(void)

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
  uVar2 = PlantSpikeweed::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSpikerock",uVar2,StaticNew);
  return sClass;
}


/* PlantSpikerock::PlantSpikerock() */

void __thiscall PlantSpikerock::PlantSpikerock(PlantSpikerock *this)

{
  PlantSpikeweed::PlantSpikeweed((PlantSpikeweed *)this);
  *(undefined ***)this = &PTR_GetClass_067c4850;
  return;
}


/* PlantSpikerock::StaticNew() */

PlantSpikerock * PlantSpikerock::StaticNew(void)

{
  PlantSpikerock *this;
  
  this = ::operator_new(0x58);
  PlantSpikerock(this);
  return this;
}


/* PlantSpikerock::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantSpikerock::TakeSmashAttack(PlantSpikerock *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  PlantAnimRig_Spikerock *this_00;
  RtObject *pRVar3;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
    if (cVar1 != '\0') {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<Zomboss>(pRVar3);
      if (bVar2) goto LAB_04064c2c;
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar3);
      if (bVar2) goto LAB_04064c2c;
    }
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_Spikerock::SetLostHornCount(this_00,3 - *(int *)(this + 0x4c));
    if (*(int *)(this + 0x4c) < 1) {
LAB_04064c2c:
      Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
      return;
    }
  }
  return;
}


/* PlantSpikerock::TakeGridItemSmashAttack(Sexy::RtWeakPtr<GridItem>) */

void __thiscall
PlantSpikerock::TakeGridItemSmashAttack(PlantSpikerock *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  PlantAnimRig_Spikerock *this_00;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
    if (cVar1 == '\0') {
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      PlantAnimRig_Spikerock::SetLostHornCount(this_00,3 - *(int *)(this + 0x4c));
      if (*(int *)(this + 0x4c) < 1) {
        Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikerock::createPlantfoodSawEffect() */

void PlantSpikerock::createPlantfoodSawEffect(void)

{
  ResourceInfo *pRVar1;
  EffectAnimRig_SpikeweedSpikes *this;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_SPIKEROCK_PLANTFOOD_SPIKES");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  this = PopAnimRig::CreateRig<EffectAnimRig_SpikeweedSpikes>((PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  EffectAnimRig_SpikeweedSpikes::PlayEffectLooped(this);
  PopAnimRig::RandomizeCurrentAnimFrame((PopAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PlantSpikerock::Initialize() */

void __thiscall PlantSpikerock::Initialize(PlantSpikerock *this)

{
  PlantSpikeweed::Initialize((PlantSpikeweed *)this);
  this[0x54] = (PlantSpikerock)0x0;
  *(undefined4 *)(this + 0x4c) = 3;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpikerock::UpdateActions() */

void __thiscall PlantSpikerock::UpdateActions(PlantSpikerock *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) != 10) goto LAB_04064e60;
  PlantFramework::FindTargetZombie(aRStack_10,this,0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar1 = Zombie::HasCondition(uVar3,0x18);
    if ((cVar1 == '\0') && (this[0x54] == (PlantSpikerock)0x0)) {
      fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      cVar1 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') {
        iVar2 = FUN_04064ad4(*(undefined8 *)(this + 0x10));
        if (((iVar2 == 2) && (fVar4 <= 0.2)) || ((2 < iVar2 && (fVar4 <= 0.4)))) {
LAB_04064f40:
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,uVar3,0x18,1);
          this[0x54] = (PlantSpikerock)0x1;
          uVar5 = PVZ_T();
          *(undefined4 *)(this + 0x50) = uVar5;
        }
      }
      else {
        cVar1 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
        if (cVar1 != '\0') goto LAB_04064f40;
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04064e60:
  PlantSpikeweed::UpdateActions((PlantSpikeweed *)this);
  if ((this[0x54] != (PlantSpikerock)0x0) &&
     (fVar4 = (float)PVZ_T(), 4.0 <= fVar4 - *(float *)(this + 0x50))) {
    this[0x54] = (PlantSpikerock)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

