// Class: ZombieWolfFire


/* ZombieWolfFire::~ZombieWolfFire() */

void __thiscall ZombieWolfFire::~ZombieWolfFire(ZombieWolfFire *this)

{
  *(undefined ***)this = &PTR_GetClass_0688dbd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfFire_0688e658;
  ZombieTowerDefendBasic::~ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  return;
}


/* non-virtual thunk to ZombieWolfFire::~ZombieWolfFire() */

void __thiscall ZombieWolfFire::~ZombieWolfFire(ZombieWolfFire *this)

{
  ~ZombieWolfFire(this + -0x10);
  return;
}


/* ZombieWolfFire::~ZombieWolfFire() */

void __thiscall ZombieWolfFire::~ZombieWolfFire(ZombieWolfFire *this)

{
  ~ZombieWolfFire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWolfFire::~ZombieWolfFire() */

void __thiscall ZombieWolfFire::~ZombieWolfFire(ZombieWolfFire *this)

{
  ~ZombieWolfFire(this + -0x10);
  return;
}


/* ZombieWolfFire::ZombieWolfFire() */

void __thiscall ZombieWolfFire::ZombieWolfFire(ZombieWolfFire *this)

{
  ZombieTowerDefendBasic::ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0688dbd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfFire_0688e658;
  return;
}


/* ZombieWolfFire::StaticNew() */

ZombieWolfFire * ZombieWolfFire::StaticNew(void)

{
  ZombieWolfFire *this;
  
  this = ::operator_new(0x810);
  ZombieWolfFire(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfFire::StaticClassInit() */

void ZombieWolfFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWolfFire");
    (*pcVar2)(plVar1,asStack_10,FUN_0465f478,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWolfFire::StaticGetClass() */

long * ZombieWolfFire::StaticGetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWolfFire::GetClass() const */

long * ZombieWolfFire::GetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfFire::burnPlant(Plant*) */

void __thiscall ZombieWolfFire::burnPlant(ZombieWolfFire *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  Point *extraout_x1;
  BoardTransforms aBStack_40 [8];
  int local_38;
  int local_34;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Plant *)0x0) && (cVar1 = Zombie::isInState((Zombie *)this,4), cVar1 == '\0'))
      && ((cVar1 = FUN_0465f278(param_1[400]), cVar1 == '\0' ||
          (iVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1), iVar2 < 2)))) &&
     ((cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0' &&
      (iVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1), 1 < iVar2)))) {
    BoardEntity::CalcGridPosition();
    BoardTransforms::GridToBoardSpaceRect(aBStack_40,extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_38,(TPoint *)aRStack_28);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_PLANT_BE_FIRED");
    GetPAMByName(asStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    std::string::~string(asStack_30);
    nop();
    std::string::string((string *)aRStack_28,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_28,0);
    std::string::~string((string *)aRStack_28);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,(float)local_38,(float)local_34,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_28,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)aRStack_28,"Play_Zomb_Egypt_Explorer_Mvmt_Burn");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_28,0.0);
    std::string::~string((string *)aRStack_28);
    nop();
    Plant::KillPlant(param_1,0,1,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieWolfFire::onUpdate() */

void __thiscall ZombieWolfFire::onUpdate(ZombieWolfFire *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *pPVar2;
  
  ZombieTowerDefendBasic::onUpdate((ZombieTowerDefendBasic *)this);
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if (((cVar1 != '\0') &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && (pPVar2 = Sexy::RtObject::Cast<Plant>(this_00), pPVar2 != (Plant *)0x0)) {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    burnPlant(this,pPVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfFire::setIsTorchBurning(bool) */

void __thiscall ZombieWolfFire::setIsTorchBurning(ZombieWolfFire *this,bool param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Zombie::setHasTorch((Zombie *)this,true);
    Zombie::setIsTorchBurningFlag((Zombie *)this,true);
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_WolfFire::SetTorchLayers((ZombieAnimRig_WolfFire *)pZVar1,true);
  }
  else {
    std::string::string(asStack_10,"Stop_Zomb_Kongfu_Monk_Torch_Attack");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    Zombie::setHasTorch((Zombie *)this,false);
    Zombie::setIsTorchBurningFlag((Zombie *)this,false);
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_WolfFire::SetTorchLayers((ZombieAnimRig_WolfFire *)pZVar1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWolfFire::onApplyCondition(ZombieConditions) */

void __thiscall ZombieWolfFire::onApplyCondition(ZombieWolfFire *this,uint param_2)

{
  char cVar1;
  
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if ((cVar1 != '\0') && ((param_2 == 0x74 || param_2 == 0x10 || (param_2 < 2)))) {
    setIsTorchBurning(this,false);
    return;
  }
  return;
}


/* ZombieWolfFire::onTakeFatalDamage(DamageInfo const&) */

void ZombieWolfFire::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  setIsTorchBurning((ZombieWolfFire *)param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfFire::CalcZombieAttackRect() */

void ZombieWolfFire::CalcZombieAttackRect(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar3;
  float *pfVar4;
  long lVar5;
  Plant *this;
  ulong uVar6;
  Insets *in_x8;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  float fVar10;
  float local_48 [2];
  float local_40 [2];
  float local_38;
  int local_34;
  int local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::CalcZombieAttackRect();
  cVar1 = Zombie::HasTorch(in_x0);
  if (cVar1 != '\0') {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)local_48);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
    std::string::string((string *)&local_20,"zombie_foot_inner_heel");
    cVar1 = PopAnimRig::CalcLayerTranslation
                      ((PopAnimRig *)pZVar3,(string *)&local_20,(SexyVector2 *)local_48);
    std::string::~string((string *)&local_20);
    nop();
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)local_40);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
      std::string::string((string *)&local_20,"torch_end_lit");
      cVar1 = PopAnimRig::CalcLayerTranslation
                        ((PopAnimRig *)pZVar3,(string *)&local_20,(SexyVector2 *)local_40);
      std::string::~string((string *)&local_20);
      nop();
      if (cVar1 != '\0') {
        uVar7 = 0;
        fVar10 = (float)Zombie::GetFacingMultiplier(in_x0);
        local_38 = local_40[0] - local_48[0];
        local_20 = 0xc2200000;
        pfVar4 = eastl::max_alt<float>(&local_38,(float *)&local_20);
        local_30[0] = (int)((float)local_30[0] + fVar10 * *pfVar4);
        iVar2 = SharkMinion::getRow((SharkMinion *)in_x0);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((string *)&local_20,1,(Insets *)local_30,iVar2,iVar2 + local_34 + -1);
        uVar8 = CONCAT44(uStack_1c,local_20);
        lVar5 = FUN_0465f27c(uVar8,local_18);
        if (lVar5 != 0) {
          do {
            FUN_0465f288(uVar8,uVar7);
            nop();
            cVar1 = Plant::CanBeTargeted(this);
            if (cVar1 != '\0') {
              pcVar9 = *(code **)(*(long *)in_x0 + 0x940);
              (**(code **)(*(long *)this + 0x180))(this);
              cVar1 = (*pcVar9)();
              if ((cVar1 != '\0') && (cVar1 = FUN_0465f278(this[400]), cVar1 != '\0')) {
                Zombie::CalcZombieAttackRect();
                goto LAB_0465fe64;
              }
            }
            uVar8 = CONCAT44(uStack_1c,local_20);
            uVar7 = uVar7 + 1;
            uVar6 = FUN_0465f27c(uVar8,local_18);
          } while (uVar7 < uVar6);
        }
        Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_0465fe64:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        goto LAB_0465fe7c;
      }
    }
  }
  Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_0465fe7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

