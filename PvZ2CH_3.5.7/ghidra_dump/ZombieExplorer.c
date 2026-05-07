// Class: ZombieExplorer


/* ZombieExplorer::onZombieInitialize() */

void __thiscall ZombieExplorer::onZombieInitialize(ZombieExplorer *this)

{
  Zombie::setHasTorch((Zombie *)this,true);
  Zombie::setIsTorchBurningFlag((Zombie *)this,true);
  return;
}


/* ZombieExplorer::onLostHead() */

void __thiscall ZombieExplorer::onLostHead(ZombieExplorer *this)

{
  char cVar1;
  
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if (cVar1 == '\0') {
    return;
  }
  ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)this,false);
  return;
}


/* ZombieExplorer::~ZombieExplorer() */

void __thiscall ZombieExplorer::~ZombieExplorer(ZombieExplorer *this)

{
  *(undefined ***)this = &PTR_GetClass_068a1e40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplorer_068a2858;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieExplorer::~ZombieExplorer() */

void __thiscall ZombieExplorer::~ZombieExplorer(ZombieExplorer *this)

{
  ~ZombieExplorer(this + -0x10);
  return;
}


/* ZombieExplorer::~ZombieExplorer() */

void __thiscall ZombieExplorer::~ZombieExplorer(ZombieExplorer *this)

{
  ~ZombieExplorer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieExplorer::~ZombieExplorer() */

void __thiscall ZombieExplorer::~ZombieExplorer(ZombieExplorer *this)

{
  ~ZombieExplorer(this + -0x10);
  return;
}


/* ZombieExplorer::ZombieExplorer() */

void __thiscall ZombieExplorer::ZombieExplorer(ZombieExplorer *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068a1e40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplorer_068a2858;
  return;
}


/* ZombieExplorer::StaticNew() */

ZombieExplorer * ZombieExplorer::StaticNew(void)

{
  ZombieExplorer *this;
  
  this = ::operator_new(0x800);
  ZombieExplorer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplorer::StaticClassInit() */

void ZombieExplorer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieExplorer");
    (*pcVar2)(plVar1,asStack_10,FUN_04691458,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplorer::StaticGetClass() */

long * ZombieExplorer::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExplorer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExplorer::GetClass() const */

long * ZombieExplorer::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExplorer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplorer::onExitState_Walk(ZombieState) */

void ZombieExplorer::onExitState_Walk(Zombie *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  bVar1 = std::operator==((string *)(lVar2 + 8),"kongfu_monk_torch");
  if (bVar1) {
    std::string::string(asStack_10,"Stop_Zomb_Kongfu_Monk_Torch_Attack");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplorer::onApplyCondition(ZombieConditions) */

void __thiscall ZombieExplorer::onApplyCondition(ZombieExplorer *this,uint param_2)

{
  char cVar1;
  
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if ((cVar1 != '\0') &&
     ((((param_2 < 2 || (param_2 == 0x10)) || (param_2 == 0x55)) || (param_2 == 0x74)))) {
    ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)this,false);
    MessageRouter::Post<Zombie*,ZombieExplorer*>
              ((MessageRouter *)gMessageRouter,Message::ExplorerTorchExtinguished,this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplorer::onEnterState_Walk(ZombieState) */

void ZombieExplorer::onEnterState_Walk(Zombie *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onEnterState_Walk();
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  bVar1 = std::operator==((string *)(lVar2 + 8),"kongfu_monk_torch");
  if (bVar1) {
    std::string::string(asStack_10,"Play_Zomb_Kongfu_Monk_Torch_Attack");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplorer::onUpdate() */

void __thiscall ZombieExplorer::onUpdate(ZombieExplorer *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  RtObject *this_00;
  
  Zombie::onUpdate((Zombie *)this);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar2 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),uVar1,2);
  lVar3 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 != 0) {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
  }
  if (lVar2 != 0) {
    ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)this,false);
    return;
  }
  return;
}


/* ZombieExplorer::updateState_Walk() */

void __thiscall ZombieExplorer::updateState_Walk(ZombieExplorer *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (this_00 != (RtObject *)0x0) {
    pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if (pPVar3 != (PlantGroup *)0x0) {
      pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00);
      ZombieHanabi::burnPlantGroup((ZombieHanabi *)this,pPVar3);
      return;
    }
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (pZVar4 != (Zombie *)0x0) {
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
      cVar1 = Zombie::CanTakeFatalDamage(pZVar4);
      if (cVar1 != '\0') {
        pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
        ZombieHanabi::burnZombie((ZombieHanabi *)this,pZVar4);
        return;
      }
    }
    cVar1 = RealObject::IsOnTeam(this,2);
    if ((cVar1 != '\0') &&
       (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 != (GridItem *)0x0)) {
      uVar2 = FUN_0469129c(*(undefined4 *)(this + 0x24));
      cVar1 = RealObject::IsOnOpposingTeam(pGVar5,uVar2);
      if (cVar1 != '\0') {
        Zombie::setZombieState((Zombie *)this,2,0);
        return;
      }
    }
  }
  return;
}


/* ZombieExplorer::updateState_Die() */

void __thiscall ZombieExplorer::updateState_Die(ZombieExplorer *this)

{
  char cVar1;
  RtObject *this_00;
  PlantGroup *pPVar2;
  
  Zombie::updateState_Die((Zombie *)this);
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if (((cVar1 != '\0') &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && (pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar2 != (PlantGroup *)0x0)) {
    pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    ZombieHanabi::burnPlantGroup((ZombieHanabi *)this,pPVar2);
    return;
  }
  return;
}


/* ZombieExplorer::updateState_Eat() */

void __thiscall ZombieExplorer::updateState_Eat(ZombieExplorer *this)

{
  char cVar1;
  RtObject *this_00;
  PlantGroup *pPVar2;
  
  Zombie::updateState_Eat((Zombie *)this);
  cVar1 = Zombie::HasTorch((Zombie *)this);
  if (((cVar1 != '\0') &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && (pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar2 != (PlantGroup *)0x0)) {
    pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    ZombieHanabi::burnPlantGroup((ZombieHanabi *)this,pPVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplorer::CalcZombieAttackRect() */

void ZombieExplorer::CalcZombieAttackRect(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar3;
  ZombieExplorerProps *pZVar4;
  float *pfVar5;
  long lVar6;
  Plant *this;
  ulong uVar7;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  Insets *in_x8;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_48 [2];
  float local_40 [2];
  float local_38;
  int local_34;
  int local_30 [4];
  float local_20;
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
    std::string::string((string *)&local_20,"zombie_expl_foot_inner_heel");
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
        fVar15 = 1.0;
        fVar13 = (float)Zombie::GetFacingMultiplier(in_x0);
        local_38 = local_40[0] - local_48[0];
        pZVar4 = Zombie::GetProps<ZombieExplorerProps>(in_x0);
        local_20 = -*(float *)(pZVar4 + 0x210);
        pfVar5 = eastl::max_alt<float>(&local_38,&local_20);
        fVar14 = *pfVar5;
        cVar1 = Zombie::HasCondition();
        if (cVar1 != '\0') {
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          if (this_01 != (PlayerInfo *)0x0) {
            std::string::string((string *)&local_20,"shrinkingviolet");
            iVar2 = PlayerInfo::GetEquipAvatarID(this_01,(string *)&local_20);
            std::string::~string((string *)&local_20);
            nop();
            if (iVar2 != -1) {
              pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
              fVar15 = *(float *)(lVar6 + 0x1c8);
              goto LAB_04692270;
            }
          }
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          fVar15 = *(float *)(lVar6 + 0x1c4);
        }
LAB_04692270:
        cVar1 = Zombie::HasCondition();
        if (cVar1 != '\0') {
          pEVar8 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(in_x0);
          lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar8,0x60);
          fVar15 = fVar15 * *(float *)(lVar6 + 0xc);
        }
        uVar10 = 0;
        local_30[0] = (int)((float)local_30[0] + fVar15 * fVar13 * fVar14);
        iVar2 = SharkMinion::getRow((SharkMinion *)in_x0);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        (**(code **)(*(long *)in_x0 + 0xd0))(&local_38);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((string *)&local_20,1,(Insets *)local_30,iVar2,iVar2 + local_34 + -1);
        uVar11 = CONCAT44(uStack_1c,local_20);
        lVar6 = FUN_046912ac(uVar11,local_18);
        if (lVar6 != 0) {
          do {
            FUN_046912b8(uVar11,uVar10);
            nop();
            cVar1 = Plant::CanBeTargeted(this);
            if (cVar1 != '\0') {
              pcVar12 = *(code **)(*(long *)in_x0 + 0x940);
              (**(code **)(*(long *)this + 0x180))(this);
              cVar1 = (*pcVar12)();
              if ((cVar1 != '\0') && (cVar1 = FUN_046912a8(this[400]), cVar1 != '\0')) {
                Zombie::CalcZombieAttackRect();
                goto LAB_0469234c;
              }
            }
            uVar11 = CONCAT44(uStack_1c,local_20);
            uVar10 = uVar10 + 1;
            uVar7 = FUN_046912ac(uVar11,local_18);
          } while (uVar10 < uVar7);
        }
        Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_0469234c:
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        goto LAB_04692364;
      }
    }
  }
  Sexy::Insets::Insets(in_x8,(Insets *)local_30);
LAB_04692364:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplorer::onTakeFatalDamage(DamageInfo const&) */

void ZombieExplorer::onTakeFatalDamage(DamageInfo *param_1)

{
  Zombie::onTakeFatalDamage(param_1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)param_1,false);
  return;
}

