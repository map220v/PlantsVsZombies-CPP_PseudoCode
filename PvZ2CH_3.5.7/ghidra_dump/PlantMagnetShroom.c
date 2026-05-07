// Class: PlantMagnetShroom


/* PlantMagnetShroom::HandleSuperFSMAction_MagnetShroomState(MagnetShroomState, StateAction) */

void PlantMagnetShroom::HandleSuperFSMAction_MagnetShroomState(void)

{
  return;
}


/* PlantMagnetShroom::UpdateActions() */

void __thiscall PlantMagnetShroom::UpdateActions(PlantMagnetShroom *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_042032dc(*(undefined4 *)(this + 0x6c));
  (**(code **)(*(long *)this + 0x528))(this,uVar1,2);
  return;
}


/* PlantMagnetShroom::GetPlantFoodPlayCount() */

void __thiscall PlantMagnetShroom::GetPlantFoodPlayCount(PlantMagnetShroom *this)

{
  FUN_0420332c(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  return;
}


/* PlantMagnetShroom::setState_MagnetShroomState(MagnetShroomState) */

void __thiscall PlantMagnetShroom::setState_MagnetShroomState(PlantMagnetShroom *this,int param_2)

{
  if (*(int *)(this + 0x6c) != -1) {
    (**(code **)(*(long *)this + 0x528))(this,*(int *)(this + 0x6c),3);
  }
  *(int *)(this + 0x6c) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x528))(this,param_2,1);
  }
  return;
}


/* PlantMagnetShroom::Initialize() */

void __thiscall PlantMagnetShroom::Initialize(PlantMagnetShroom *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  this[0x30] = (PlantMagnetShroom)0x0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  setState_MagnetShroomState(this,0);
  return;
}


/* PlantMagnetShroom::ApplyPlantfood() */

void __thiscall PlantMagnetShroom::ApplyPlantfood(PlantMagnetShroom *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState_MagnetShroomState(this,3);
  return;
}


/* PlantMagnetShroom::CancelPlantfood() */

void __thiscall PlantMagnetShroom::CancelPlantfood(PlantMagnetShroom *this)

{
  setState_MagnetShroomState(this,0);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::StaticClassInit() */

void PlantMagnetShroom::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MagnetShroomPulledEntity");
    (*pcVar3)(plVar2,asStack_10,FUN_04205a24,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantMagnetShroom");
    (*pcVar3)(plVar2,asStack_10,FUN_04204708,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnetShroom::StaticGetClass() */

long * PlantMagnetShroom::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagnetShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagnetShroom::GetClass() const */

long * PlantMagnetShroom::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagnetShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagnetShroom::tryPullZombie(Zombie*) */

Zombie * PlantMagnetShroom::tryPullZombie(Zombie *param_1)

{
  char cVar1;
  Zombie *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar2 [16];
  
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,(wchar16 *)in_x1,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    auVar2 = PVZ_EOT();
    Zombie::ApplyCondition((Zombie *)auVar2,0);
    Zombie::SetIsControlled(in_x1,true);
    return in_x1;
  }
  return (Zombie *)0x0;
}


/* PlantMagnetShroom::canThrowEntity(BoardEntity*) */

undefined8 __thiscall
PlantMagnetShroom::canThrowEntity(PlantMagnetShroom *this,BoardEntity *param_1)

{
  char cVar1;
  ZombieParticle *pZVar2;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar2 = Sexy::RtObject::Cast<ZombieParticle>((RtObject *)param_1),
      pZVar2 != (ZombieParticle *)0x0)) &&
     (cVar1 = ZombieParticle::HasAttribute(pZVar2,1), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}


/* PlantMagnetShroom::canPullHelmFrom(Zombie*) const */

undefined1 __thiscall PlantMagnetShroom::canPullHelmFrom(PlantMagnetShroom *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar6;
  
  if (param_1 != (Zombie *)0x0) {
    iVar3 = FUN_042032d0(*(undefined8 *)(this + 0x10));
    iVar4 = FUN_042032a4(*(undefined4 *)(param_1 + 0x50));
    if (iVar4 <= iVar3) {
      uVar5 = FUN_0420331c(*(undefined4 *)(param_1 + 0xb0));
      cVar1 = NarcissusBasicProjectile::canCarryHelmType((NarcissusBasicProjectile *)this,uVar5);
      if (((cVar1 != '\0') &&
          (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)param_1), cVar1 != '\0')) &&
         (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) {
        pEVar6 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(param_1);
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar6,0x19);
        if (cVar1 == '\0') {
          pEVar6 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                   Zombie::GetConditionTracker(param_1);
          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar6,0x77);
          if (cVar1 == '\0') {
            pEVar6 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                     Zombie::GetConditionTracker(param_1);
            cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar6,0x3f);
            if (cVar1 == '\0') {
              uVar2 = (**(code **)(*(long *)param_1 + 0x398))(param_1);
              return uVar2;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* PlantMagnetShroom::tryPullHelmFrom(Zombie*) */

undefined8 __thiscall PlantMagnetShroom::tryPullHelmFrom(PlantMagnetShroom *this,Zombie *param_1)

{
  char cVar1;
  ZombieParticle *pZVar2;
  undefined8 uVar3;
  
  cVar1 = canPullHelmFrom(this,param_1);
  if (cVar1 != '\0') {
    pZVar2 = (ZombieParticle *)(**(code **)(*(long *)param_1 + 0x248))(param_1);
    uVar3 = NarcissusBasicProjectile::tryCarryZombieParticle
                      ((NarcissusBasicProjectile *)this,pZVar2);
    return uVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::pullPulledEntity(MagnetShroomPulledEntity&, Sexy::SexyVector3 const&, float,
   float, float) */

void __thiscall
PlantMagnetShroom::pullPulledEntity
          (PlantMagnetShroom *this,MagnetShroomPulledEntity *param_1,SexyVector3 *param_2,
          float param_3,float param_4,float param_5)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  SexyVector3 *pSVar3;
  long *plVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = param_4;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1);
  if (bVar1) {
    fVar9 = param_4 + param_5 * param_3;
    fVar6 = (float)PVZ_Dt();
    fVar6 = fVar6 * fVar9;
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    local_38 = Sexy::SexyVector3::operator-(param_2,pSVar3);
    local_34 = fVar8;
    local_30 = param_5;
    fVar7 = (float)DVec3::getLength((DVec3 *)&local_38);
    if (fVar7 < fVar6) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_2);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      local_18 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
      local_14 = fVar8;
      local_10 = param_5;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1)
      ;
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var2);
      local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar6);
      local_14 = fVar8;
      local_10 = param_5;
      local_28 = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)&local_18);
      local_24 = fVar8;
      local_20 = param_5;
      local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,fVar9);
      local_14 = fVar8;
      local_10 = param_5;
      Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 8),(SexyVector3 *)&local_18);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_28);
    }
  }
  else {
    uVar5 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantMagnetShroom::resetSearchTimer() */

void __thiscall PlantMagnetShroom::resetSearchTimer(PlantMagnetShroom *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar1 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::calcPullTarget() const */

void __thiscall PlantMagnetShroom::calcPullTarget(PlantMagnetShroom *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long lVar2;
  undefined8 *puVar3;
  SexyVector3 *pSVar4;
  float fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string((string *)&local_18,"Magnet_Item");
  cVar1 = PopAnimRig::CalcLayerTranslation(this_00,(string *)&local_18,(SexyVector2 *)&local_30);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 == '\0') {
    fVar5 = (float)PVZ_T();
    fVar5 = (float)SampleSinWave(3.0,45.0,55.0,fVar5);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar4);
    local_20 = fVar5 + local_20;
  }
  else {
    FUN_042032ac((string *)&local_18,*(undefined8 *)(this + 0x10));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::SexyVector2::operator-=((SexyVector2 *)&local_30,(SexyVector2 *)(lVar2 + 0x9c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_18._0_4_ = (float)*puVar3;
    local_10 = *(float *)(puVar3 + 1) - local_2c;
    local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),local_30 + (float)local_18);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x22);
    if (cVar1 != '\0') {
      local_28 = local_28 - 20.0;
      fStack_24 = fStack_24 - 20.0;
    }
  }
  local_18 = CONCAT44(fStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,local_20);
}


/* PlantMagnetShroom::PlantMagnetShroom() */

void __thiscall PlantMagnetShroom::PlantMagnetShroom(PlantMagnetShroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06808f60;
  BuffedProjectileData::BuffedProjectileData((BuffedProjectileData *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* PlantMagnetShroom::StaticNew() */

PlantMagnetShroom * PlantMagnetShroom::StaticNew(void)

{
  PlantMagnetShroom *this;
  
  this = ::operator_new(0x70);
  PlantMagnetShroom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::GetPlantAttackRect(PlantWeapon) */

void __thiscall PlantMagnetShroom::GetPlantAttackRect(undefined8 param_1,PlantMagnetShroom *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar3 = FUN_042051b4(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar3 + 700);
  lVar3 = FUN_042051b4(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(lVar3 + 0x2b8);
  Sexy::Point::Point((Point *)&local_18);
  local_18 = local_20 - iVar2 / 2;
  local_14 = local_1c - iVar1 / 2;
  Sexy::Point::Point((Point *)&local_10);
  local_10 = iVar2;
  local_c = iVar1;
  BoardTransforms::GridToBoardSpaceRect((Point *)&local_18,(Point *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::doEntityOrbit(MagnetShroomPulledEntity&, int) */

void __thiscall
PlantMagnetShroom::doEntityOrbit
          (PlantMagnetShroom *this,MagnetShroomPulledEntity *param_1,int param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  uVar4 = 0;
  uVar5 = 0xc1a00000;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,-20.0);
  local_18 = calcPullTarget(this);
  local_14 = (float)uVar4;
  local_10 = uVar5;
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_18,(SexyVector3 *)aVStack_48);
  local_34 = uVar4;
  local_30 = uVar5;
  fVar2 = (float)Sexy::SexyMath::DegToRad(240.0);
  fVar3 = (float)PVZ_T();
  fVar2 = fVar3 * fVar2 + (float)param_2 * 3.8832223;
  DVec3::DVec3((DVec3 *)&local_28);
  local_28 = sinf(fVar2);
  local_28 = local_28 * 35.59675;
  local_20 = cosf(fVar2);
  local_20 = local_20 * 22.0;
  fVar2 = -(local_20 * 0.1);
  local_24 = fVar2;
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
  local_14 = fVar2;
  local_10 = uVar5;
  lVar1 = FUN_042051b4(*(undefined8 *)(this + 0x10));
  fVar3 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_042051b4(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar1 + 0x2c4);
  fVar2 = (float)PVZ_T();
  pullPulledEntity(this,param_1,(SexyVector3 *)&local_18,fVar2 - *(float *)(this + 0x68),fVar3,fVar6
                  );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::canPullZombieHead(Zombie*) const */

void __thiscall PlantMagnetShroom::canPullZombieHead(PlantMagnetShroom *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar5;
  long lVar6;
  string *psVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)param_1), cVar1 != '\0')) &&
     (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) {
    pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)Zombie::GetConditionTracker(param_1)
    ;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x19);
    if (cVar1 == '\0') {
      pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x77);
      if (((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) &&
         ((cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0' &&
          (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')))) {
        uVar8 = *(undefined8 *)(this + 0x10);
        iVar3 = FUN_042032d0(uVar8);
        iVar4 = FUN_042032a4(*(undefined4 *)(param_1 + 0x50));
        cVar1 = '\0';
        if (iVar4 <= iVar3) {
          lVar6 = FUN_042051b4(uVar8);
          local_18 = FUN_04204c0c(*(undefined8 *)(lVar6 + 0x2f8));
          local_10 = FUN_04204c5c(*(undefined8 *)(lVar6 + 0x300));
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
                cVar1 = '\0', bVar2) {
            psVar7 = (string *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            cVar1 = std::operator==((string *)(lVar6 + 8),psVar7);
            if (cVar1 != '\0') break;
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
          }
        }
        goto LAB_042054b4;
      }
    }
  }
  cVar1 = '\0';
LAB_042054b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* PlantMagnetShroom::tryPullZombieHead(Zombie*) */

long __thiscall PlantMagnetShroom::tryPullZombieHead(PlantMagnetShroom *this,Zombie *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = canPullZombieHead(this,param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar2 = (**(code **)(*(long *)param_1 + 0x240))(param_1);
  if ((lVar2 != 0) && (cVar1 = ZombieParticle::HasAttribute(lVar2,1), cVar1 != '\0')) {
    Zombie::TakeFatalDamage(param_1,*(BoardEntity **)(this + 0x10));
    return lVar2;
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMagnetShroom::onAnimStoppedCallback(PlantMagnetShroom *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  PlantAnimRig_Magnetshroom *this_00;
  PlantAnimRig_Magnetshroom *this_01;
  PopAnimRig *pPVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_042032dc(*(undefined4 *)(this + 0x6c));
  if (iVar2 == 2) {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_Magnetshroom::PlayMagnetHolding(this_00);
  }
  else if (iVar2 == 3) {
    bVar1 = std::operator==(param_1,"plantfood_on");
    if (bVar1) {
      fVar5 = (float)PVZ_T();
      lVar3 = FUN_042051b4(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x2c) = fVar5 + *(float *)(lVar3 + 0x2d0);
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      PlantAnimRig_Magnetshroom::PlayMagnetPlantfoodCollect(this_01);
    }
    else {
      bVar1 = std::operator==(param_1,"plantfood");
      if (bVar1) {
        lVar3 = FUN_0420332c(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
        if (lVar3 == 0) {
          this[0x30] = (PlantMagnetShroom)0x1;
        }
        else {
          pPVar4 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_68,"plantfood");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PopAnimRig::PlayAndStop(pPVar4,asStack_68,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          std::string::~string(asStack_68);
          nop();
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnetShroom::tryPull(BoardEntity*) */

BoardEntity * __thiscall PlantMagnetShroom::tryPull(PlantMagnetShroom *this,BoardEntity *param_1)

{
  Zombie *pZVar1;
  BoardEntity *pBVar2;
  ZombieParticle *pZVar3;
  
  if (param_1 == (BoardEntity *)0x0) {
    pBVar2 = (BoardEntity *)tryPullHelmFrom(this,(Zombie *)0x0);
    if (pBVar2 == (BoardEntity *)0x0) {
      pBVar2 = (BoardEntity *)tryPullZombieHead(this,(Zombie *)0x0);
      if (pBVar2 != (BoardEntity *)0x0) {
        return pBVar2;
      }
      pBVar2 = (BoardEntity *)tryPullZombie((Zombie *)this);
      pZVar3 = (ZombieParticle *)0x0;
      if (pBVar2 != (BoardEntity *)0x0) {
        return pBVar2;
      }
      goto LAB_04205ef0;
    }
  }
  else {
    pZVar1 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pBVar2 = (BoardEntity *)tryPullHelmFrom(this,pZVar1);
    if (pBVar2 == (BoardEntity *)0x0) {
      pZVar1 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      pBVar2 = (BoardEntity *)tryPullZombieHead(this,pZVar1);
      if (pBVar2 != (BoardEntity *)0x0) {
        return pBVar2;
      }
      Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      pBVar2 = (BoardEntity *)tryPullZombie((Zombie *)this);
      if (pBVar2 != (BoardEntity *)0x0) {
        return pBVar2;
      }
      pZVar3 = Sexy::RtObject::Cast<ZombieParticle>((RtObject *)param_1);
LAB_04205ef0:
      pBVar2 = (BoardEntity *)
               NarcissusBasicProjectile::tryCarryZombieParticle
                         ((NarcissusBasicProjectile *)this,pZVar3);
      return pBVar2;
    }
  }
  MessageRouter::Post<Plant*,BoardEntity*,Plant*,BoardEntity*>
            ((MessageRouter *)gMessageRouter,Message::MagnetShroomPullHelm,*(Plant **)(this + 0x10),
             pBVar2);
  return pBVar2;
}


/* PlantMagnetShroom::~PlantMagnetShroom() */

void __thiscall PlantMagnetShroom::~PlantMagnetShroom(PlantMagnetShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06808f60;
  std::vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>>::~vector
            ((vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>> *)
             (this + 0x50));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMagnetShroom::~PlantMagnetShroom() */

void __thiscall PlantMagnetShroom::~PlantMagnetShroom(PlantMagnetShroom *this)

{
  ~PlantMagnetShroom(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::dropPulledEntity(MagnetShroomPulledEntity&) */

void __thiscall
PlantMagnetShroom::dropPulledEntity(PlantMagnetShroom *this,MagnetShroomPulledEntity *param_1)

{
  bool bVar1;
  ResourceInfo *this_00;
  MagnetShroomSubSystem *this_01;
  ZombieParticle *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  float *pfVar2;
  ZombieTosserSubSystem *pZVar3;
  Point *extraout_x1;
  float fVar4;
  BoardTransforms aBStack_c8 [12];
  int local_bc;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_1);
  if (this_00 != (ResourceInfo *)0x0) {
    this_01 = Board::GetGameSubSystem<MagnetShroomSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    MagnetShroomSubSystem::ReleaseEntity(this_01,(BoardEntity *)this_00);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_1);
    bVar1 = Sexy::RtObject::IsA<ZombieParticle>((RtObject *)this_00);
    if (bVar1) {
      nop();
      ZombieParticle::SetBounceMotionWithVelocity
                (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10));
      ZombieParticle::SetScale(this_02,1.0);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)this_00);
      if (bVar1) {
        nop();
        Zombie::GetCurrentTitleStatus();
        TitleStatus::~TitleStatus(aTStack_70);
        if (local_58 == '\0') {
          pfVar2 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_03);
          fVar4 = *pfVar2;
          BoardEntity::CalcGridPosition();
          BoardTransforms::GridToBoardSpaceUnbounded(aBStack_c8,extraout_x1);
          EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,fVar4,(float)local_bc,0.0);
          pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          fVar4 = pfVar2[2];
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)(fVar4 + 70.0),0x3f19999a,pZVar3,this_03,aTStack_70,
                     aRStack_b8,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b8);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::DropAllPulledEntities() */

void __thiscall PlantMagnetShroom::DropAllPulledEntities(PlantMagnetShroom *this)

{
  bool bVar1;
  MagnetShroomPulledEntity *pMVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  dropPulledEntity(this,(MagnetShroomPulledEntity *)(this + 0x38));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pMVar2 = (MagnetShroomPulledEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    dropPulledEntity(this,pMVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnetShroom::NotifySetHidden(bool, bool) */

void __thiscall
PlantMagnetShroom::NotifySetHidden(PlantMagnetShroom *this,bool param_1,bool param_2)

{
  if ((param_1 != param_2) && (param_1)) {
    DropAllPulledEntities(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::onKilled(bool) */

void PlantMagnetShroom::onKilled(bool param_1)

{
  bool bVar1;
  MagnetShroomPulledEntity *pMVar2;
  PlantMagnetShroom *this;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  this = (PlantMagnetShroom *)(ulong)param_1;
  lStack_8 = ___stack_chk_guard;
  dropPulledEntity(this,(MagnetShroomPulledEntity *)(this + 0x38));
  uStack_18 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x50));
  uStack_10 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    pMVar2 = (MagnetShroomPulledEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
    dropPulledEntity(this,pMVar2);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::throwPulledEntity(MagnetShroomPulledEntity&) */

void __thiscall
PlantMagnetShroom::throwPulledEntity(PlantMagnetShroom *this,MagnetShroomPulledEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  ulong *puVar5;
  long lVar6;
  ZombieParticleProjectile *this_00;
  ZombieParticle *extraout_x0;
  char *pcVar7;
  RealObject *this_01;
  ulong uVar8;
  undefined8 *puVar9;
  SexyVector3 *this_02;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  Board *pBVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1);
  if (bVar1) {
    p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    puVar5 = (ulong *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var4);
    local_68 = *puVar5;
    local_60 = (uint)puVar5[1];
    pBVar15 = (Board *)(local_68 & 0xffffffff);
    uVar17 = local_68 >> 0x20;
    uVar19 = (ulong)local_60;
    uVar12 = *(undefined8 *)(gLawnApp + 0x9f0);
    lVar6 = FUN_042051b4(*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(lVar6 + 0x2d8));
    Board::AddProjectile
              (pBVar15,uVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_20,
               *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    nop();
    ZombieParticleProjectile::SetControlledParticle(this_00,extraout_x0);
    uVar12 = FUN_04203298(*(undefined8 *)(this_00 + 0xe0));
    uVar12 = operator|(uVar12,0x2000);
    FUN_0420329c(this_00 + 0xe0,uVar12);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_DarkAges_MagnetShroom_Throw");
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') {
      uVar10 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      uVar11 = 0;
      Sexy::Insets::Insets
                ((Insets *)&local_48,0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
                 *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      EntityFinder::GetEntitiesInGridSquares
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,2,(Insets *)&local_48);
      uVar12 = local_20;
      lVar6 = FUN_04203360(local_20,local_18);
      uVar18 = (undefined4)uVar19;
      uVar16 = (undefined4)uVar17;
      if (lVar6 != 0) {
        do {
          FUN_0420336c(uVar12,uVar11);
          nop();
          cVar2 = (**(code **)(*(long *)this_01 + 0x328))();
          if (((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0')) &&
             (cVar2 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10)),
             cVar2 != '\0')) {
            local_48 = this_01;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                       (BoardEntity **)&local_48);
          }
          uVar12 = local_20;
          uVar10 = uVar10 + 1;
          uVar11 = (ulong)uVar10;
          uVar8 = FUN_04203360(local_20,local_18);
          uVar18 = (undefined4)uVar19;
          uVar16 = (undefined4)uVar17;
        } while (uVar11 < uVar8);
      }
      cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      if (cVar2 == '\0') {
        iVar3 = FUN_04203360(local_38,local_30);
        iVar3 = PlantFramework::Rand((PlantFramework *)this,iVar3);
        puVar9 = (undefined8 *)FUN_0420336c(local_38,(long)iVar3);
        p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)*puVar9;
        puVar9 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
        local_58 = *puVar9;
        local_50 = *(undefined4 *)(puVar9 + 1);
        fVar13 = (float)DVec3::getLength((DVec3 *)&local_58);
        this_02 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var4);
        uVar14 = Sexy::SexyVector3::operator-(this_02,(SexyVector3 *)&local_68);
        local_48 = (RealObject *)CONCAT44(uVar16,uVar14);
        local_40 = uVar18;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
        local_50 = 0;
        uVar14 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_58);
        local_48 = (RealObject *)CONCAT44(uVar16,uVar14);
        local_40 = uVar18;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
        EATextSquish::Vec3::operator*=((Vec3 *)&local_58,fVar13);
        Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_58);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMagnetShroom::OnAnimCommand(std::string const&, std::string const&) */

int PlantMagnetShroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr *this;
  long *plVar4;
  BoardEntity *pBVar5;
  int iVar6;
  
  bVar1 = std::operator==(param_2,"throw_object");
  iVar6 = 0;
  if (bVar1) {
LAB_04207904:
    lVar3 = FUN_0420332c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    if (lVar3 != 0) {
      do {
        if (iVar6 != 0) {
          return iVar6;
        }
        this = (RtWeakPtr *)
               std::
               vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                       *)(param_1 + 0x50));
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        if (bVar1) {
          iVar6 = 1;
          pBVar5 = (BoardEntity *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          cVar2 = canThrowEntity((PlantMagnetShroom *)param_1,pBVar5);
          if (cVar2 != '\0') {
            throwPulledEntity((PlantMagnetShroom *)param_1,(MagnetShroomPulledEntity *)this);
            FUN_04203f04(param_1 + 0x58);
            goto LAB_04207904;
          }
        }
        FUN_04203f04(param_1 + 0x58);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        iVar6 = 0;
        if (!bVar1) goto LAB_04207904;
        iVar6 = 0;
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        (**(code **)(*plVar4 + 0x48))();
        lVar3 = FUN_0420332c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
        if (lVar3 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return iVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::gatherValidTargets(Sexy::TRect<int>&, bool, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) const */

void PlantMagnetShroom::gatherValidTargets(TRect *param_1,bool param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  MagnetShroomSubSystem *this;
  undefined8 *puVar3;
  Zombie *extraout_x0;
  ZombieParticle *pZVar4;
  LineBreakCategory *pLVar5;
  vector<BoardEntity*,std::allocator<BoardEntity*>> *in_x3;
  vector<BoardEntity*,std::allocator<BoardEntity*>> *pvVar6;
  LineBreakCategory *in_x4;
  RtObject *this_00;
  BoardEntity *local_38;
  undefined8 local_30;
  ZombieParticle *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar6 = in_x3;
  this = Board::GetGameSubSystem<MagnetShroomSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pLVar5 = (LineBreakCategory *)(ulong)param_2;
  EntityFinder::GetEntitiesInRectangle(avStack_20,2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = (ZombieParticle *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (BoardEntity *)*puVar3;
    cVar2 = MagnetShroomSubSystem::IsEntityOwned(this,local_38);
    if (cVar2 == '\0') {
      nop();
      cVar2 = canPullHelmFrom((PlantMagnetShroom *)param_1,extraout_x0);
      if (((cVar2 != '\0') ||
          (cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                             ((wchar16 *)param_1,(wchar16 *)extraout_x0,pLVar5,
                              (LineBreakCategory *)pvVar6,in_x4), cVar2 != '\0')) ||
         (cVar2 = canPullZombieHead((PlantMagnetShroom *)param_1,extraout_x0), cVar2 != '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back(in_x3,&local_38);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  if (((ulong)param_3 & 0xff) != 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    EntityFinder::GetEntitiesInRectangle(avStack_20,0x20,(LineBreakCategory *)(ulong)param_2);
    local_38 = (BoardEntity *)
               std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      this_00 = (RtObject *)*puVar3;
      cVar2 = MagnetShroomSubSystem::IsEntityOwned(this,(BoardEntity *)this_00);
      if (((cVar2 == '\0') &&
          (pZVar4 = Sexy::RtObject::Cast<ZombieParticle>(this_00), pZVar4 != (ZombieParticle *)0x0))
         && (cVar2 = ZombieParticle::HasAttribute(pZVar4,4), cVar2 != '\0')) {
        local_28 = pZVar4;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (in_x3,(BoardEntity **)&local_28);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::sortTargetList(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
   const */

void __thiscall PlantMagnetShroom::sortTargetList(PlantMagnetShroom *this,vector *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  uVar5 = *puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  local_28 = (undefined4)uVar5;
  uStack_24 = (undefined4)((ulong)uVar5 >> 0x20);
  __gnu_cxx::__ops::_Iter_comp_val<DistFromSorter>::_Iter_comp_val
            (local_28,uStack_24,uVar1,&local_18);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,DistFromSorter>
            (local_18,local_14,local_10,uVar3,uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnetShroom::HandleStateMachine_MagnetShroomState(MagnetShroomState, StateAction) */

void PlantMagnetShroom::HandleStateMachine_MagnetShroomState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ReceivedDataCallback *param_4,uint param_5,int param_6,undefined8 param_7,int param_8
               )

{
  RtMixedPtr<Sexy::Image> *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  PlantAnimRig_Magnetshroom *extraout_x0;
  MagnetShroomPulledEntity *pMVar8;
  ulong uVar9;
  BuffedProjectileData *pBVar10;
  PlantAnimRig_Magnetshroom *extraout_x0_00;
  MagnetShroomSubSystem *pMVar11;
  char *pcVar12;
  RtObject *this_01;
  ZombieParticle *this_02;
  BoardEntity *pBVar13;
  PopAnimRig *pPVar14;
  code *pcVar15;
  Plant *this_03;
  ulong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  RtMixedPtr aRStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  Delegate2<MagnetShroomState,StateAction> aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_4,HandleSuperFSMAction_MagnetShroomState);
  Sexy::Delegate2<MagnetShroomState,StateAction>::
  Delegate2<PlantMagnetShroom,void(PlantMagnetShroom::*)(MagnetShroomState,StateAction)>
            (aDStack_80,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  switch(param_5) {
  case 0:
    if (param_6 == 1) {
      resetSearchTimer((PlantMagnetShroom *)param_4);
      plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      (**(code **)(*plVar6 + 0x118))();
    }
    else if (param_6 != 0) {
      if (param_6 == 2) {
        fVar20 = (float)PVZ_T();
        if (*(float *)(param_4 + 0x28) < fVar20) {
          resetSearchTimer((PlantMagnetShroom *)param_4);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
          (**(code **)(*(long *)param_4 + 0x2b8))(&local_b0,param_4,0);
          gatherValidTargets((TRect *)param_4,SUB81(&local_b0,0),(vector *)0x0);
          sortTargetList((PlantMagnetShroom *)param_4,(vector *)&local_98);
          local_d8[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_98);
          local_c8 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_98);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)local_d8,(__normal_iterator *)&local_c8),
                bVar3) {
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_d8);
            pBVar13 = (BoardEntity *)tryPull((PlantMagnetShroom *)param_4,(BoardEntity *)*puVar7);
            if (pBVar13 != (BoardEntity *)0x0) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_4 + 0x38),
                         (RtWeakPtrBase *)&local_c8);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
              pMVar11 = Board::GetGameSubSystem<MagnetShroomSubSystem>
                                  (*(Board **)(gLawnApp + 0x9f0));
              MagnetShroomSubSystem::ClaimEntity(pMVar11,*(Plant **)(param_4 + 0x10),pBVar13);
              pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
              AudioMgr::SendEvent(pcVar12,"Play_Plant_DarkAges_MagnetShroom_Attract");
              setState_MagnetShroomState((PlantMagnetShroom *)param_4,1);
              break;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_d8);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x0);
      }
    }
    break;
  case 1:
    switch(param_6) {
    case 0:
      break;
    case 1:
      uVar18 = PVZ_T();
      *(undefined4 *)(param_4 + 0x68) = uVar18;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      nop();
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_Magnetshroom::PlayMagnetpull(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 2:
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(param_4 + 0x38));
      if (cVar2 == '\0') {
        uVar18 = calcPullTarget((PlantMagnetShroom *)param_4);
        local_98 = CONCAT44(param_2,uVar18);
        local_90 = param_3;
        lVar5 = FUN_042051b4(*(undefined8 *)(param_4 + 0x10));
        fVar17 = *(float *)(lVar5 + 0x2c0);
        lVar5 = FUN_042051b4(*(undefined8 *)(param_4 + 0x10));
        fVar19 = *(float *)(lVar5 + 0x2c4);
        fVar20 = (float)PVZ_T();
        cVar2 = pullPulledEntity((PlantMagnetShroom *)param_4,
                                 (MagnetShroomPulledEntity *)(param_4 + 0x38),
                                 (SexyVector3 *)&local_98,fVar20 - *(float *)(param_4 + 0x68),fVar17
                                 ,fVar19);
        if (cVar2 != '\0') {
          setState_MagnetShroomState((PlantMagnetShroom *)param_4,2);
        }
      }
      else {
        plVar6 = (long *)UIEasyButtonWidget::GetImageNormal
                                   (*(UIEasyButtonWidget **)(param_4 + 0x10));
        (**(code **)(*plVar6 + 0x118))();
        setState_MagnetShroomState((PlantMagnetShroom *)param_4,0);
      }
      break;
    case 3:
      DVec3::DVec3((DVec3 *)&local_98);
      Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x40),(SexyVector3 *)&local_98);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x1);
    }
    break;
  case 2:
    if (param_6 == 1) {
      uVar18 = PVZ_T();
      *(undefined4 *)(param_4 + 0x68) = uVar18;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_c8);
      std::string::string((string *)&local_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtId *)&local_b0,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
      PlantAnimRig_Magnetshroom::PlayMagnetCatch
                (extraout_x0_00,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string((string *)&local_98);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_b0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
    }
    else if (param_6 != 0) {
      if (param_6 == 2) {
        this = (RtMixedPtr<Sexy::Image> *)(param_4 + 0x38);
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this);
        if (cVar2 == '\0') {
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
          cVar2 = '\0';
          if (bVar3) {
            pBVar13 = (BoardEntity *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
            cVar2 = canThrowEntity((PlantMagnetShroom *)param_4,pBVar13);
          }
          lVar5 = FUN_042051b4(*(undefined8 *)(param_4 + 0x10));
          this_03 = *(Plant **)(param_4 + 0x10);
          fVar20 = *(float *)(lVar5 + 0x2c8);
          iVar4 = FUN_042032d0(this_03);
          if (iVar4 == 2) {
            fVar17 = (float)Plant::GetGeneSkillBoost(this_03);
            fVar20 = (0.85 - fVar17) * fVar20;
          }
          else if (iVar4 < 3) {
            fVar17 = (float)Plant::GetGeneSkillBoost(this_03);
            fVar20 = (1.0 - fVar17) * fVar20;
          }
          else {
            fVar17 = (float)Plant::GetGeneSkillBoost(this_03);
            fVar20 = (0.7 - fVar17) * fVar20;
          }
          fVar17 = (float)PVZ_T();
          fVar19 = *(float *)(param_4 + 0x68);
          fVar20 = (fVar17 - fVar19) / fVar20;
          if (fVar20 < 1.0) {
            if (cVar2 == '\0') {
              doEntityOrbit((PlantMagnetShroom *)param_4,(MagnetShroomPulledEntity *)this,0);
            }
            else {
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this);
              pcVar15 = *(code **)(*plVar6 + 0x78);
              uVar18 = calcPullTarget((PlantMagnetShroom *)param_4);
              local_98 = CONCAT44(fVar19,uVar18);
              local_90 = param_3;
              (*pcVar15)(plVar6,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                                &local_98);
              this_01 = (RtObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
              this_02 = Sexy::RtObject::Cast<ZombieParticle>(this_01);
              if (this_02 != (ZombieParticle *)0x0) {
                ZombieParticle::SetScale(this_02,1.0 - fVar20);
              }
            }
            break;
          }
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this);
          (**(code **)(*plVar6 + 0x48))();
        }
        setState_MagnetShroomState((PlantMagnetShroom *)param_4,0);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x2);
      }
    }
    break;
  case 3:
    switch(param_6) {
    case 0:
      break;
    case 1:
      uVar18 = PVZ_T();
      *(undefined4 *)(param_4 + 0x68) = uVar18;
      uVar18 = PVZ_EOT();
      param_4[0x30] = (ReceivedDataCallback)0x0;
      *(undefined4 *)(param_4 + 0x2c) = uVar18;
      DropAllPulledEntities((PlantMagnetShroom *)param_4);
      uVar16 = 0;
      std::vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>>::clear
                ((vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>> *)
                 (param_4 + 0x50));
      BoardTransforms::GridToBoardSpaceRect
                ((BoardTransforms *)0x0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
                 *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),param_8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8);
      gatherValidTargets((TRect *)param_4,SUB81(local_d8,0),(vector *)0x1);
      sortTargetList((PlantMagnetShroom *)param_4,(vector *)&local_c8);
      lVar5 = FUN_042051b4(*(undefined8 *)(param_4 + 0x10));
      iVar4 = *(int *)(lVar5 + 0x2cc);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b0);
      while ((uVar1 = local_c8, uVar9 = FUN_04203360(local_c8,local_c0), uVar16 < uVar9 &&
             (uVar9 = FUN_04203360(local_b0,local_a8), uVar9 < (ulong)(long)iVar4))) {
        puVar7 = (undefined8 *)FUN_0420336c(uVar1,uVar16);
        local_98 = tryPull((PlantMagnetShroom *)param_4,(BoardEntity *)*puVar7);
        if (local_98 != 0) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_b0,
                     (BoardEntity **)&local_98);
        }
        uVar16 = uVar16 + 1;
      }
      local_e8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_b0);
      local_e0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_b0);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0),
            bVar3) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
        pBVar13 = (BoardEntity *)*puVar7;
        MagnetShroomPulledEntity::MagnetShroomPulledEntity
                  ((MagnetShroomPulledEntity *)&local_98,pBVar13);
        std::vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>>::push_back
                  ((vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>> *)
                   (param_4 + 0x50),(MagnetShroomPulledEntity *)&local_98);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_98);
        pMVar11 = Board::GetGameSubSystem<MagnetShroomSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        MagnetShroomSubSystem::ClaimEntity(pMVar11,*(Plant **)(param_4 + 0x10),pBVar13);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_Plant_DarkAges_MagnetShroom_Attract");
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
      }
      pPVar14 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      std::string::string((string *)&local_e8,"plantfood_on");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f0);
      std::string::string((string *)&local_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,(RtId *)&local_e0,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
      PopAnimRig::PlayAndStop
                (pPVar14,(exception_ptr *)&local_e8,0,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string((string *)&local_98);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f0);
      std::string::~string((string *)&local_e8);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_b0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_c8);
      break;
    case 2:
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_4 + 0x50));
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_4 + 0x50));
      iVar4 = 0;
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_98),
            bVar3) {
        pMVar8 = (MagnetShroomPulledEntity *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        doEntityOrbit((PlantMagnetShroom *)param_4,pMVar8,iVar4);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_b0);
        iVar4 = iVar4 + 1;
      }
      fVar20 = (float)PVZ_T();
      if (*(float *)(param_4 + 0x2c) < fVar20) {
        uVar18 = PVZ_EOT();
        *(undefined4 *)(param_4 + 0x2c) = uVar18;
        lVar5 = FUN_0420332c(*(undefined8 *)(param_4 + 0x50),*(undefined8 *)(param_4 + 0x58));
        if (lVar5 == 0) {
          param_4[0x30] = (ReceivedDataCallback)0x1;
        }
        else {
          pPVar14 = (PopAnimRig *)
                    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
          std::string::string((string *)&local_c8,"plantfood");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_d8);
          std::string::string((string *)&local_98,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50,(exception_ptr *)&local_b0,
                     (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
          PopAnimRig::PlayAndStop
                    (pPVar14,(string *)&local_c8,0,
                     (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string((string *)&local_98);
          nop();
          Sexy::RtId::~RtId((RtId *)&local_b0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d8)
          ;
          std::string::~string((string *)&local_c8);
          nop();
        }
      }
      break;
    case 3:
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(param_4 + 0x50);
      local_c8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_b0),
            bVar3) {
        pBVar10 = (BuffedProjectileData *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        BuffedProjectileData::BuffedProjectileData((BuffedProjectileData *)&local_98,pBVar10);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_98);
        if (bVar3) {
          pBVar13 = (BoardEntity *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          cVar2 = canThrowEntity((PlantMagnetShroom *)param_4,pBVar13);
          if (cVar2 == '\0') {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x38));
            (**(code **)(*plVar6 + 0x48))();
          }
          else {
            throwPulledEntity((PlantMagnetShroom *)param_4,(MagnetShroomPulledEntity *)&local_98);
          }
        }
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_98);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_c8);
      }
      std::vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>>::clear
                ((vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>> *)
                 this_00);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x3);
    }
    break;
  case 0xffffffff:
    if (param_6 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)(ulong)param_5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

