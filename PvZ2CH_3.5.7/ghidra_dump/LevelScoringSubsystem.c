// Class: LevelScoringSubsystem


/* LevelScoringSubsystem::onLastStandInit() */

void __thiscall LevelScoringSubsystem::onLastStandInit(LevelScoringSubsystem *this)

{
  this[0x40] = (LevelScoringSubsystem)0x1;
  return;
}


/* LevelScoringSubsystem::isMultiplierLocked() */

bool __thiscall LevelScoringSubsystem::isMultiplierLocked(LevelScoringSubsystem *this)

{
  return *(int *)(this + 0x2c) - 1U < 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::calculateGridFootprint(Sexy::SexyVector3&, Sexy::Point&) */

void LevelScoringSubsystem::calculateGridFootprint(SexyVector3 *param_1,Point *param_2)

{
  int *in_x2;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  fVar1 = (float)BoardTransforms::BoardSpaceToGridXUnboundedFloat(*(float *)param_2);
  fVar2 = (float)BoardTransforms::BoardSpaceToGridYUnboundedFloat(*(float *)(param_2 + 4));
  Sexy::Insets::Insets
            (in_x8,(int)(fVar1 - 0.3),(int)fVar2,((int)(fVar1 + 0.3) - (int)(fVar1 - 0.3)) + *in_x2,
             1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::SetUIVisible(bool) */

void __thiscall LevelScoringSubsystem::SetUIVisible(LevelScoringSubsystem *this,bool param_1)

{
  UIWidget *this_00;
  
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  UIWidget::SetVisible(this_00,param_1);
  return;
}


/* LevelScoringSubsystem::~LevelScoringSubsystem() */

void __thiscall LevelScoringSubsystem::~LevelScoringSubsystem(LevelScoringSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7b80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* LevelScoringSubsystem::~LevelScoringSubsystem() */

void __thiscall LevelScoringSubsystem::~LevelScoringSubsystem(LevelScoringSubsystem *this)

{
  ~LevelScoringSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* LevelScoringSubsystem::calculateZombieValue(Zombie*) */

int __thiscall
LevelScoringSubsystem::calculateZombieValue(LevelScoringSubsystem *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (0.0 < *(float *)(lVar1 + 0xa4)) {
    return (int)*(float *)(lVar1 + 0xa4);
  }
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  fVar3 = *(float *)(lVar1 + 0x50);
  fVar2 = (float)FUN_0384ddf0(*(undefined4 *)(param_1 + 0x284));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return (int)((float)(int)fVar3 + *(float *)(lVar1 + 0x54) * (float)((int)fVar2 / 300));
}


/* LevelScoringSubsystem::calculateZombieArmorValue(Zombie*) */

int __thiscall
LevelScoringSubsystem::calculateZombieArmorValue(LevelScoringSubsystem *this,Zombie *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  fVar2 = *(float *)(lVar1 + 0x34);
  fVar3 = (float)Zombie::GetMaxArmorHitpoints(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return (int)((float)(int)fVar2 + *(float *)(lVar1 + 0x38) * (float)((int)fVar3 / 300));
}


/* LevelScoringSubsystem::updateUI() */

void __thiscall LevelScoringSubsystem::updateUI(LevelScoringSubsystem *this)

{
  bool bVar1;
  long extraout_x0;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    nop();
    FUN_0384ddc8(extraout_x0 + 0x1b0,(long)*(int *)(this + 0x14));
    FUN_0384ddb8(*(undefined4 *)(this + 0x20),extraout_x0 + 0x1ac);
    FUN_0384ddd0(extraout_x0 + 0x1b8,*(undefined4 *)(this + 0x18));
    FUN_0384ddd8(extraout_x0 + 0x1bc,*(int *)(this + 0x2c) - 1U < 2);
    if (this[0x24] == (LevelScoringSubsystem)0x0) {
      if (*(int *)(this + 0x2c) == 2) {
        fVar5 = *(float *)(this + 0x28);
        fVar4 = (float)PVZ_T();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
        fVar3 = 1.0;
        FUN_0384ddb8((fVar5 - fVar4) / *(float *)(lVar2 + 0x8c) + 1.0,extraout_x0 + 0x1ac);
      }
      else {
        if (*(int *)(this + 0x2c) != 1) {
          fVar4 = *(float *)(this + 0x10);
          fVar3 = (float)PVZ_T();
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
          if (fVar4 - fVar3 < *(float *)(lVar2 + 0x20)) {
            lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
            fVar3 = (fVar4 - fVar3) / *(float *)(lVar2 + 0x20);
            goto LAB_0384edf0;
          }
        }
        fVar3 = 1.0;
      }
LAB_0384edf0:
      FUN_0384ddc0(fVar3,extraout_x0 + 0x1a8);
      return;
    }
  }
  return;
}


/* LevelScoringSubsystem::setDecayDelayToNext() */

void __thiscall LevelScoringSubsystem::setDecayDelayToNext(LevelScoringSubsystem *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = *(float *)(lVar1 + 0x18);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = fVar3 - *(float *)(lVar1 + 0x1c) * (float)(*(int *)(this + 0x18) + -1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (fVar3 < *(float *)(lVar1 + 0x24)) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar3 = *(float *)(lVar1 + 0x24);
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x10) = fVar2 + fVar3;
  return;
}


/* LevelScoringSubsystem::doMultiplierPenalty(float, int) */

void __thiscall
LevelScoringSubsystem::doMultiplierPenalty(LevelScoringSubsystem *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = isMultiplierLocked(this);
  if ((cVar3 == '\0') &&
     (((param_1 != 0.0 || (param_2 != 0)) && (iVar2 = *(int *)(this + 0x18), 1 < iVar2)))) {
    iVar1 = (int)(param_1 * (float)iVar2);
    if ((int)(param_1 * (float)iVar2) < param_2) {
      iVar1 = param_2;
    }
    if (iVar2 - iVar1 < 1) {
      *(undefined4 *)(this + 0x18) = 1;
    }
    else {
      *(int *)(this + 0x18) = iVar2 - iVar1;
    }
    setDecayDelayToNext(this);
    return;
  }
  return;
}


/* LevelScoringSubsystem::onPlantDamageTaken(Plant*, DamageInfo&) */

void __thiscall
LevelScoringSubsystem::onPlantDamageTaken
          (LevelScoringSubsystem *this,Plant *param_1,DamageInfo *param_2)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)FUN_0384ddb0(*(undefined4 *)(param_1 + 0xd8));
  if ((fVar3 <= *(float *)(param_2 + 8)) &&
     (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 == '\0')) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
    ;
    fVar3 = *(float *)(lVar2 + 0x78);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
    ;
    doMultiplierPenalty(this,fVar3,*(int *)(lVar2 + 0x7c));
    return;
  }
  return;
}


/* LevelScoringSubsystem::onPlantSmashedToDeath(Plant*) */

void LevelScoringSubsystem::onPlantSmashedToDeath(Plant *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
  fVar2 = *(float *)(lVar1 + 0x78);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
  doMultiplierPenalty((LevelScoringSubsystem *)param_1,fVar2,*(int *)(lVar1 + 0x7c));
  return;
}


/* LevelScoringSubsystem::doMultiplierDecay() */

void __thiscall LevelScoringSubsystem::doMultiplierDecay(LevelScoringSubsystem *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x10) <= fVar1) {
    if (1 < *(int *)(this + 0x18)) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
      setDecayDelayToNext(this);
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  return;
}


/* LevelScoringSubsystem::setDecayDelayToBase() */

void __thiscall LevelScoringSubsystem::setDecayDelayToBase(LevelScoringSubsystem *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = *(float *)(lVar1 + 0x10);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar3 = fVar3 - *(float *)(lVar1 + 0x14) * (float)(*(int *)(this + 0x18) + -1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (fVar3 < *(float *)(lVar1 + 0x24)) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar3 = *(float *)(lVar1 + 0x24);
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x10) = fVar2 + fVar3;
  return;
}


/* LevelScoringSubsystem::updateFrenzy() */

void __thiscall LevelScoringSubsystem::updateFrenzy(LevelScoringSubsystem *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x28);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  if (*(float *)(lVar1 + 0x88) < fVar2 - fVar4) {
    *(undefined4 *)(this + 0x2c) = 2;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x18) = 1;
    *(undefined4 *)(this + 0x28) = uVar3;
  }
  return;
}


/* LevelScoringSubsystem::updateFrenzyCooldown() */

void __thiscall LevelScoringSubsystem::updateFrenzyCooldown(LevelScoringSubsystem *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x28);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  if (*(float *)(lVar1 + 0x8c) < fVar2 - fVar4) {
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x18) = 1;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x10) = uVar3;
  }
  return;
}


/* LevelScoringSubsystem::Update() */

void __thiscall LevelScoringSubsystem::Update(LevelScoringSubsystem *this)

{
  if (*(int *)(this + 0x2c) == 1) {
    updateFrenzy(this);
    updateUI(this);
    return;
  }
  if (*(int *)(this + 0x2c) != 2) {
    doMultiplierDecay(this);
    updateUI(this);
    return;
  }
  updateFrenzyCooldown(this);
  updateUI(this);
  return;
}


/* LevelScoringSubsystem::startFrenzy() */

void __thiscall LevelScoringSubsystem::startFrenzy(LevelScoringSubsystem *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  if (0.0 < *(float *)(lVar1 + 0x84)) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
    ;
    *(int *)(this + 0x18) = (int)*(float *)(lVar1 + 0x84);
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x28) = uVar2;
  return;
}


/* LevelScoringSubsystem::addToMultiplier(float, bool) */

void __thiscall
LevelScoringSubsystem::addToMultiplier(LevelScoringSubsystem *this,float param_1,bool param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = isMultiplierLocked(this);
  if ((cVar2 == '\0') && (param_1 != 0.0)) {
    if (param_1 <= 1.0) {
      if (param_1 + *(float *)(this + 0x20) < 1.0) {
        *(float *)(this + 0x20) = param_1 + *(float *)(this + 0x20);
      }
      else {
        *(undefined4 *)(this + 0x20) = 0;
        param_2 = true;
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      }
    }
    else {
      param_2 = true;
      *(undefined4 *)(this + 0x20) = 0;
      *(int *)(this + 0x18) = (int)(param_1 + (float)*(int *)(this + 0x18));
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if ((0.0 < *(float *)(lVar3 + 0x28)) &&
       (iVar1 = *(int *)(this + 0x18), lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00),
       *(float *)(lVar3 + 0x28) < (float)iVar1)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      *(int *)(this + 0x18) = (int)*(float *)(lVar3 + 0x28);
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if ((0.0 < *(float *)(lVar3 + 0x80)) &&
       (iVar1 = *(int *)(this + 0x18), lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00),
       *(float *)(lVar3 + 0x80) <= (float)iVar1)) {
      startFrenzy(this);
      return;
    }
    if (param_2 != false) {
      setDecayDelayToBase(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::LevelScoringSubsystem() */

void __thiscall LevelScoringSubsystem::LevelScoringSubsystem(LevelScoringSubsystem *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  CBMemberTranslatorX aCStack_110 [24];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_066a7b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_120 = local_e8;
  local_130 = local_f8;
  uStack_128 = uStack_f0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBleedingOut);
  local_130 = local_e0;
  uStack_128 = uStack_d8;
  local_120 = local_d0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieBleedingOut,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDropArmor);
  local_140 = local_b8;
  local_150 = local_c8;
  uStack_148 = uStack_c0;
  MessageRouter::
  Subscribe<Zombie*,long,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,long)>>
            ((MessageRouter *)puVar1,Message::ZombieDropArmor,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantSmashedToDeath);
  local_170 = local_b0;
  uStack_168 = uStack_a8;
  local_160 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantSmashedToDeath,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDamageTaken);
  local_180 = local_88;
  local_190 = local_98;
  uStack_188 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,DamageInfo&,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Plant*,DamageInfo&)>>
            ((MessageRouter *)puVar1,Message::PlantDamageTaken,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGravestoneDestroyed);
  local_1b0 = local_80;
  uStack_1a8 = uStack_78;
  local_1a0 = local_70;
  MessageRouter::
  Subscribe<GridItemGravestone*,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(GridItemGravestone*)>>
            ((MessageRouter *)puVar1,Message::GravestoneDestroyed,&local_1b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombossStageEnded);
  local_1c0 = local_58;
  local_1d0 = local_68;
  uStack_1c8 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombossStageEnding,&local_1d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieHypnotized);
  local_1f0 = local_50;
  uStack_1e8 = uStack_48;
  local_1e0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieHypnotized,&local_1f0);
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x14) = 0;
  this[0x24] = (LevelScoringSubsystem)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x40] = (LevelScoringSubsystem)0x0;
  *(undefined4 *)(this + 0x10) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>
            (aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>
            (aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandInit);
  Sexy::Delegate0::Delegate0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>
            (aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelInitializing,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<LevelScoringSubsystem,void(LevelScoringSubsystem::*)()>
            (aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::StaticNew() */

LevelScoringSubsystem * LevelScoringSubsystem::StaticNew(void)

{
  LevelScoringSubsystem *this;
  
  this = ::operator_new(0x48);
  LevelScoringSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onGameplayEnded() */

void __thiscall LevelScoringSubsystem::onGameplayEnded(LevelScoringSubsystem *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  puVar2 = gMessageRouter;
  uVar1 = *(undefined4 *)(this + 0x14);
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  FUN_05475d88(asStack_10,lVar3 + 8);
                    /* WARNING: Load size is inaccurate */
  MessageRouter::Broadcast<int,std::string_const&,float,int,std::string,float>
            (*(MessageRouter **)(this + 0x1c),puVar2,Message::ScoreCalculated,uVar1,asStack_10);
  std::string::~string(asStack_10);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::ClearCurrentScore() */

void __thiscall LevelScoringSubsystem::ClearCurrentScore(LevelScoringSubsystem *this)

{
  *(undefined4 *)(this + 0x14) = 0;
  MessageRouter::Broadcast<int,float,int,float>
            ((MessageRouter *)gMessageRouter,Message::ScoreUpdated,0,*(float *)(this + 0x1c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::addScore(int, std::string const&) */

void LevelScoringSubsystem::addScore(int param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  PennyPerkMoreScore *this;
  int extraout_w1;
  code *pcVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  lVar8 = 0;
  local_8 = ___stack_chk_guard;
  fVar9 = (float)FUN_0384dde0(*(undefined4 *)(uVar3 + 0x1c),*(undefined4 *)(uVar3 + 0x18));
  iVar7 = (int)(fVar9 * (float)(int)param_2);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x74);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    pcVar6 = *(code **)(*plVar5 + 0x20);
    uVar4 = PennyPerkMoreScore::StaticGetClass();
    cVar2 = (*pcVar6)(plVar5,uVar4);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      nop();
      fVar9 = (float)PennyPerkMoreScore::GetBonusScorePercentage(this);
      lVar8 = (long)(fVar9 * (float)iVar7);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  iVar7 = iVar7 + *(int *)(uVar3 + 0x14) + (int)lVar8;
  *(int *)(uVar3 + 0x14) = iVar7;
  MessageRouter::Broadcast<int,float,int,float>
            ((MessageRouter *)gMessageRouter,Message::ScoreUpdated,iVar7,*(float *)(uVar3 + 0x1c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::CheatAddScore(int) */

void __thiscall LevelScoringSubsystem::CheatAddScore(LevelScoringSubsystem *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"CheatAddScore");
  addScore((int)this,(string *)(ulong)(uint)param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::getBonusModifier(Sexy::TRect<int>) */

void __thiscall LevelScoringSubsystem::getBonusModifier(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  RtObject *this;
  GridItemScoreTile *pGVar3;
  float fVar4;
  float fVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pGVar3 = (GridItemScoreTile *)0x0;
  fVar5 = 1.0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,4,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this = (RtObject *)*puVar2;
    bVar1 = Sexy::RtObject::IsA<GridItemScoreTile>(this);
    if (bVar1) {
      Sexy::RtObject::Cast<GridItemScoreTile>(this);
      fVar4 = (float)GridItemScoreTile::GetBonusModifier();
      if (fVar5 < fVar4) {
        pGVar3 = Sexy::RtObject::Cast<GridItemScoreTile>(this);
        fVar5 = fVar4;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (pGVar3 != (GridItemScoreTile *)0x0) {
    GridItemScoreTile::ShowBonusEffect();
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::getZombieBonusModifier(Zombie*) */

void __thiscall
LevelScoringSubsystem::getZombieBonusModifier(LevelScoringSubsystem *this,Zombie *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  (**(code **)(*(long *)param_1 + 0xd0))(auStack_40,param_1);
  calculateGridFootprint((SexyVector3 *)this,(Point *)&local_38);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  getBonusModifier(this,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onZombieDropArmor(Zombie*, long) */

void __thiscall
LevelScoringSubsystem::onZombieDropArmor(LevelScoringSubsystem *this,Zombie *param_1,long param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(param_2,0x8000000000);
  if (!bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38);
    iVar2 = calculateZombieArmorValue(this,param_1);
    fVar4 = (float)FUN_0384dde0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x18));
    fVar4 = (float)iVar2 * fVar4;
    bVar1 = TestFlag<DamageTypeFlags>(param_2,0x4000);
    if (bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar4 = fVar4 * *(float *)(lVar3 + 0x5c);
      if (fVar4 == 0.0) goto LAB_03850d0c;
    }
    Set8BytesTo0(asStack_18);
    fVar5 = (float)getZombieBonusModifier(this,param_1);
    fVar4 = fVar5 * fVar4;
    iVar2 = FUN_0384ddac(*(undefined4 *)(param_1 + 0x50));
    if (iVar2 < 2) {
      Sexy::StrFormat("Armor (%.0f) [%.0f bonus]",asStack_10,(double)fVar4,(double)fVar5);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::StrFormat("Armor (%.0f x lv%d x %d%%) [%.0f bonus]",asStack_10,(double)fVar4,
                      (double)fVar5,(ulong)(iVar2 - 1U),
                      (ulong)(uint)(int)(*(float *)(lVar3 + 0x3c) * 100.0));
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar4 = fVar4 * (*(float *)(lVar3 + 0x3c) * (float)(int)(iVar2 - 1U) + 1.0);
    }
    addScore((int)this,(string *)(ulong)(uint)(int)fVar4);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    addToMultiplier(this,*(float *)(lVar3 + 0x30),false);
    std::string::~string(asStack_18);
  }
LAB_03850d0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::calculateTotalLevelBonusFactor() */

void __thiscall LevelScoringSubsystem::calculateTotalLevelBonusFactor(LevelScoringSubsystem *this)

{
  int iVar1;
  LevelModuleManager *this_00;
  LevelScoringModule *this_01;
  undefined4 uVar2;
  
  this_00 = (LevelModuleManager *)FUN_0384ddb4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<LevelScoringModule>(this_00);
  iVar1 = LevelScoringModule::GetTotalBonusScoringFactor(this_01);
  uVar2 = LevelScoringModule::ConvertBonusFactorToMultiplier(this_01,iVar1);
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}


/* LevelScoringSubsystem::startScoringSystem() */

void __thiscall LevelScoringSubsystem::startScoringSystem(LevelScoringSubsystem *this)

{
  long lVar1;
  UIWidget *this_00;
  float fVar2;
  
  if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
      (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0)) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar1 + 0x117) != '\0')) {
    return;
  }
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  UIWidget::SetVisible(this_00,true);
  updateUI(this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  fVar2 = *(float *)(lVar1 + 0x2c);
  *(int *)(this + 0x18) = (int)fVar2;
  if (1 < (int)fVar2) {
    setDecayDelayToBase(this);
  }
  calculateTotalLevelBonusFactor(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onGameplayStarted() */

void __thiscall LevelScoringSubsystem::onGameplayStarted(LevelScoringSubsystem *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  ChallengeScoringUI *this_01;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UIChallengeScoringSubsystem");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  this_01 = (ChallengeScoringUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ChallengeScoringUI::SetShowScoreValue(this_01,true,true);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_0384e02c(lVar1 + 0x1c0);
  SetUIVisible(this,false);
  if (this[0x40] == (LevelScoringSubsystem)0x0) {
    startScoringSystem(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::onLastStandStart() */

void __thiscall LevelScoringSubsystem::onLastStandStart(LevelScoringSubsystem *this)

{
  this[0x40] = (LevelScoringSubsystem)0x0;
  startScoringSystem(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::Initialize(std::string const&) */

void LevelScoringSubsystem::Initialize(string *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::GetInstancePtr();
  ObjectTypeDirectory<LevelScoringRules>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x38),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::StaticClassInit() */

void LevelScoringSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"STATE_SCORING_NORMAL",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"STATE_SCORING_FRENZY",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"STATE_SCORING_FRENZY_COOLDOWN",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ScoringState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelScoringSubsystem");
    (*pcVar3)(plVar2,avStack_20,FUN_03852b4c,0x48,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::StaticGetClass() */

long * LevelScoringSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelScoringSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringSubsystem::GetClass() const */

long * LevelScoringSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelScoringSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::showFloatingScoreIncrease(int, Sexy::SexyVector3, float) */

void LevelScoringSubsystem::showFloatingScoreIncrease
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  ScoreDisplayModifier *pSVar3;
  Effect_FloatingText *this;
  float fVar4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined1 auStack_b0 [8];
  Vec3 aVStack_a8 [16];
  Vec3 aVStack_98 [16];
  undefined8 local_88 [2];
  undefined8 local_78 [2];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c0 = param_1;
  local_bc = param_2;
  local_b8 = param_3;
  Sexy::StrFormat(L"%d",auStack_b0);
  fVar4 = 0.0;
  ScoreDisplayModifier::ScoreDisplayModifier((ScoreDisplayModifier *)local_68);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_5 + 0x38));
  local_88[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar2 + 0x60));
  local_78[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(lVar2 + 0x60));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_88,(__normal_iterator *)local_78);
    if (!bVar1) break;
    pSVar3 = (ScoreDisplayModifier *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_88);
    ScoreDisplayModifier::ScoreDisplayModifier((ScoreDisplayModifier *)&local_38,pSVar3);
    if ((fVar4 < local_38) && (local_38 <= param_4)) {
      local_68 = (undefined1  [8])CONCAT44(uStack_34,local_38);
      local_48 = local_18;
      local_40 = local_10;
      local_60 = uStack_30;
      local_58 = local_28;
      local_50 = uStack_20;
      fVar4 = local_38;
    }
    std::
    move_iterator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece*>
    ::operator++((move_iterator<Sexy::BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>::TextureDataPiece*>
                  *)local_88);
  }
  local_b8 = local_58._4_4_ + local_b8;
  this = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  FUN_0384e038(this + 0x1c);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_c0,-1);
  Effect_FloatingText::SetText((wstring *)this);
  Effect_FloatingText::SetStyle(this,0xb);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  EATextSquish::Vec3::Vec3(aVStack_a8,local_60._4_4_,local_60._4_4_,local_60._4_4_);
  EATextSquish::Vec3::Vec3(aVStack_98,(float)local_58,(float)local_58,(float)local_58);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_38);
  fVar4 = (float)PVZ_T();
  CurveSequence<Sexy::SexyVector3>::StartSequence
            ((CurveSequence<Sexy::SexyVector3> *)&local_38,fVar4,(SexyVector3 *)aVStack_a8);
  CurveSequence<Sexy::SexyVector3>::AddCurve
            ((CurveSequence<Sexy::SexyVector3> *)local_68._4_4_,(ScoreDisplayModifier *)&local_38,
             aVStack_a8,aVStack_98,1);
  Effect_FloatingText::SetScaleCurve(this,(CurveSequence *)&local_38);
  (**(code **)(*(long *)this + 0x78))(this,(long)&local_50 + 4);
  Effect_FloatingText::SetDuration(this,(float)local_68._4_4_);
  PresentDisplayRect::SetPAMScale((PresentDisplayRect *)this,(float)local_60);
  EATextSquish::Vec3::Vec3((Vec3 *)local_88,0.0,(float)local_50,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_78,0.0,0.0,0.0);
  Effect_FloatingText::SetMotion(this,(SexyVector3 *)local_88,(SexyVector3 *)local_78);
  CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)&local_38);
  FUN_05476c50(auStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onGravestoneDestroyed(GridItemGravestone*) */

void __thiscall
LevelScoringSubsystem::onGravestoneDestroyed
          (LevelScoringSubsystem *this,GridItemGravestone *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  float fVar4;
  string asStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  uVar3 = (uint)*(float *)(lVar1 + 0x44);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  Sexy::StrFormat("Grave (base %d)",asStack_20,(ulong)uVar3);
  addScore((int)this,(string *)(ulong)uVar3);
  fVar4 = (float)FUN_0384dde0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x18));
  showFloatingScoreIncrease
            ((undefined4)local_18,local_18._4_4_,local_10,0x3f800000,this,
             (int)(fVar4 * (float)(int)uVar3));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  addToMultiplier(this,*(float *)(lVar1 + 0x40),true);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::applyZombieScore(Zombie*, float, std::string const&) */

void __thiscall
LevelScoringSubsystem::applyZombieScore
          (LevelScoringSubsystem *this,Zombie *param_1,float param_2,string *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  string asStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)getZombieBonusModifier(this,param_1);
  puVar1 = (ulong *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_18 = *puVar1;
  local_10 = (undefined4)puVar1[1];
  uVar2 = FUN_0547429c(param_3);
  Sexy::StrFormat("%s (tile x%.1f)",asStack_20,(double)fVar3,uVar2);
  addScore((int)this,(string *)(ulong)(uint)(int)(fVar3 * param_2));
  std::string::~string(asStack_20);
  fVar4 = (float)FUN_0384dde0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x18));
  showFloatingScoreIncrease
            (local_18 & 0xffffffff,local_18._4_4_,local_10,fVar3,this,(int)(fVar3 * param_2 * fVar4)
            );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::applyZombieDeath(Zombie*, DamageInfo const*) */

void __thiscall
LevelScoringSubsystem::applyZombieDeath
          (LevelScoringSubsystem *this,Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ZombieZombossMech *pZVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0384dda8(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 != 1) {
    iVar2 = calculateZombieValue(this,param_1);
    fVar5 = (float)iVar2;
    if ((param_2 != (DamageInfo *)0x0) &&
       (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),0x4000), bVar1)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      fVar5 = fVar5 * *(float *)(lVar3 + 0x5c);
      if (fVar5 == 0.0) goto LAB_03853740;
    }
    iVar2 = FUN_0384ddac(*(undefined4 *)(param_1 + 0x50));
    Set8BytesTo0(asStack_18);
    if (iVar2 < 2) {
      Sexy::StrFormat("Zombie (base %.0f)",asStack_10,(double)fVar5);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      Sexy::StrFormat("Zombie (base %.0f x lv%d x%d%%)",asStack_10,(double)fVar5,(ulong)(iVar2 - 1U)
                      ,(ulong)(uint)(int)(*(float *)(lVar3 + 0x58) * 100.0));
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      fVar5 = fVar5 * (*(float *)(lVar3 + 0x58) * (float)(int)(iVar2 - 1U) + 1.0);
    }
    if (0.0 < fVar5) {
      applyZombieScore(this,param_1,fVar5,asStack_18);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      addToMultiplier(this,*(float *)(lVar3 + 0x48),true);
    }
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    if (pZVar4 != (ZombieZombossMech *)0x0) {
      this[0x24] = (LevelScoringSubsystem)0x1;
    }
    std::string::~string(asStack_18);
  }
LAB_03853740:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onZombieBleedingOut(Zombie*, DamageInfo const*) */

void __thiscall
LevelScoringSubsystem::onZombieBleedingOut
          (LevelScoringSubsystem *this,Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ZombieZombossMech *pZVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = FUN_0384dda8(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 != 1) {
    iVar2 = calculateZombieValue(this,param_1);
    fVar5 = (float)iVar2;
    if ((param_2 != (DamageInfo *)0x0) &&
       (bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_2 + 0x10),0x4000), bVar1)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      fVar5 = fVar5 * *(float *)(lVar3 + 0x5c);
      if (fVar5 == 0.0) goto LAB_03853740;
    }
    iVar2 = FUN_0384ddac(*(undefined4 *)(param_1 + 0x50));
    Set8BytesTo0(asStack_18);
    if (iVar2 < 2) {
      Sexy::StrFormat("Zombie (base %.0f)",asStack_10,(double)fVar5);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      Sexy::StrFormat("Zombie (base %.0f x lv%d x%d%%)",asStack_10,(double)fVar5,(ulong)(iVar2 - 1U)
                      ,(ulong)(uint)(int)(*(float *)(lVar3 + 0x58) * 100.0));
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      fVar5 = fVar5 * (*(float *)(lVar3 + 0x58) * (float)(int)(iVar2 - 1U) + 1.0);
    }
    if (0.0 < fVar5) {
      applyZombieScore(this,param_1,fVar5,asStack_18);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      addToMultiplier(this,*(float *)(lVar3 + 0x48),true);
    }
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    if (pZVar4 != (ZombieZombossMech *)0x0) {
      this[0x24] = (LevelScoringSubsystem)0x1;
    }
    std::string::~string(asStack_18);
  }
LAB_03853740:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringSubsystem::onZombieHypnotized(Zombie*) */

void __thiscall
LevelScoringSubsystem::onZombieHypnotized(LevelScoringSubsystem *this,Zombie *param_1)

{
  applyZombieDeath(this,param_1,(DamageInfo *)0x0);
  return;
}


/* LevelScoringSubsystem::onZombieDied(Zombie*, DamageInfo const*) */

void __thiscall
LevelScoringSubsystem::onZombieDied(LevelScoringSubsystem *this,Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if (cVar1 != '\0') {
    return;
  }
  applyZombieDeath(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringSubsystem::onZombossStageEnded(Zombie*, int) */

void __thiscall
LevelScoringSubsystem::onZombossStageEnded(LevelScoringSubsystem *this,Zombie *param_1,int param_2)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((float)param_2 != 0.0) {
    Sexy::StrFormat("Zomboss Stage (base %.0f)",asStack_10,(double)param_2);
    applyZombieScore(this,param_1,(float)param_2,asStack_10);
    std::string::~string(asStack_10);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
    ;
    addToMultiplier(this,*(float *)(lVar1 + 0x4c),true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

