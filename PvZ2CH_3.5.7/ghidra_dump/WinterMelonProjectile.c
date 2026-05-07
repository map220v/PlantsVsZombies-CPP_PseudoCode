// Class: WinterMelonProjectile


/* WinterMelonProjectile::~WinterMelonProjectile() */

void __thiscall WinterMelonProjectile::~WinterMelonProjectile(WinterMelonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ca7b0;
  *(undefined ***)(this + 0x10) = &PTR__WinterMelonProjectile_067ca9a0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WinterMelonProjectile::~WinterMelonProjectile() */

void __thiscall WinterMelonProjectile::~WinterMelonProjectile(WinterMelonProjectile *this)

{
  ~WinterMelonProjectile(this + -0x10);
  return;
}


/* WinterMelonProjectile::~WinterMelonProjectile() */

void __thiscall WinterMelonProjectile::~WinterMelonProjectile(WinterMelonProjectile *this)

{
  ~WinterMelonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WinterMelonProjectile::~WinterMelonProjectile() */

void __thiscall WinterMelonProjectile::~WinterMelonProjectile(WinterMelonProjectile *this)

{
  ~WinterMelonProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WinterMelonProjectile::StaticClassInit() */

void WinterMelonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WinterMelonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0407f178,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WinterMelonProjectile::StaticGetClass() */

long * WinterMelonProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"WinterMelonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WinterMelonProjectile::GetClass() const */

long * WinterMelonProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"WinterMelonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WinterMelonProjectile::WinterMelonProjectile() */

void __thiscall WinterMelonProjectile::WinterMelonProjectile(WinterMelonProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ca7b0;
  *(undefined ***)(this + 0x10) = &PTR__WinterMelonProjectile_067ca9a0;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* WinterMelonProjectile::StaticNew() */

WinterMelonProjectile * WinterMelonProjectile::StaticNew(void)

{
  WinterMelonProjectile *this;
  
  this = ::operator_new(0x1b0);
  WinterMelonProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WinterMelonProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
WinterMelonProjectile::fillDamageInfo
          (WinterMelonProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  RtObject *this_00;
  undefined8 uVar8;
  Zombie *pZVar9;
  Plant *this_01;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  Plant *this_02;
  float fVar13;
  float fVar14;
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = Projectile::getProps((Projectile *)this);
  fVar13 = (float)FUN_0407e5e8(*(undefined4 *)(this + 0xd8));
  fVar14 = (float)FUN_0407e5ec(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                               *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
  uVar1 = *(undefined4 *)(this + 0x174);
  *(float *)(param_1 + 8) = fVar14 * fVar13;
  iVar5 = FUN_0407e5e4(uVar1);
  if ((0 < iVar5) && (iVar6 = FUN_0407e5e0(*(undefined4 *)(this + 0x4c)), iVar6 < iVar5)) {
    *(float *)(param_1 + 8) = fVar14 * fVar13 * 0.5;
  }
  if (this[0x34] != (WinterMelonProjectile)0x0) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * 3.0;
  }
  this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
  uVar8 = *(undefined8 *)(this + 0xe0);
  *(RtObject **)param_1 = this_00;
  uVar8 = FUN_0407e5d4(uVar8);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  local_48[0] = FUN_0407f620(*(undefined8 *)(lVar7 + 0x168));
  local_28[0] = FUN_0407f670(*(undefined8 *)(lVar7 + 0x170));
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_28),
        bVar2) {
    puVar12 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
    uVar1 = *puVar12;
    ValueRange::GetRandomValue((ValueRange *)(puVar12 + 1));
    DamageInfo::AddCondition(param_1,uVar1);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)local_48);
  }
  if ((((this_00 != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<Plant>(this_00), bVar2)) &&
      (nop(), this_01 != (Plant *)0x0)) &&
     (lVar10 = FUN_0407e650(*(undefined8 *)(lVar7 + 0x180),*(undefined8 *)(lVar7 + 0x188)),
     lVar10 != 0)) {
    iVar5 = FUN_0407e5fc(*(undefined4 *)(this_01 + 0x50));
    iVar5 = iVar5 + -1;
    fVar13 = (float)Sexy::Rand(1.0);
    if (-1 < iVar5) {
      uVar8 = *(undefined8 *)(lVar7 + 0x180);
      uVar11 = FUN_0407e650(uVar8,*(undefined8 *)(lVar7 + 0x188));
      if ((ulong)(long)iVar5 < uVar11) {
        puVar12 = (undefined4 *)FUN_0407e664(uVar8,(long)iVar5);
        fVar14 = (float)puVar12[2];
        if (iVar5 != 0) {
          fVar14 = fVar14 + *(float *)(this + 0x1a8);
        }
        cVar3 = Plant::IsSkillCheat(this_01);
        if (((cVar3 != '\0') && (cVar3 = Plant::IsSkillActivate(this_01), cVar3 != '\0')) ||
           (bVar4 = Plant::IsSkillCheat(this_01), bVar4 < (fVar13 < fVar14))) {
          TriRepGenerator::SpanSet::SpanSet((SpanSet *)local_48);
          local_30 = *puVar12;
          std::vector<std::string,std::allocator<std::string>>::operator=
                    ((vector<std::string,std::allocator<std::string>> *)local_48,
                     (vector *)(puVar12 + 4));
          ZombieConditionInfo::ZombieConditionInfo
                    ((ZombieConditionInfo *)local_28,(ZombieConditionInfo *)local_48);
                    /* WARNING: Load size is inaccurate */
          DamageInfo::AddCondition
                    (*(DamageInfo **)(puVar12 + 1),param_1,(ZombieConditionInfo *)local_28);
          PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_28);
          PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_48);
        }
      }
    }
  }
  if (((this_00 != (RtObject *)0x0) && (param_2 != (BoardEntity *)0x0)) &&
     ((pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar9 != (Zombie *)0x0 &&
      ((cVar3 = Zombie::HasCondition(pZVar9,0), cVar3 != '\0' &&
       (this_02 = Sexy::RtObject::Cast<Plant>(this_00), this_02 != (Plant *)0x0)))))) {
    fVar13 = (float)Sexy::Rand(1.0);
    fVar14 = (float)Plant::GetGeneSkillBoost(this_02);
    if (fVar13 < fVar14) {
      DamageInfo::AddCondition((DamageInfo *)0x3f800000,param_1,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

