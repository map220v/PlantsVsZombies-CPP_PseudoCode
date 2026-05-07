// Class: PfDracaenaSwordProjectile


/* PfDracaenaSwordProjectile::onProjectileInitialized() */

void __thiscall PfDracaenaSwordProjectile::onProjectileInitialized(PfDracaenaSwordProjectile *this)

{
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile() */

void __thiscall
PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile(PfDracaenaSwordProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd560;
  *(undefined ***)(this + 0x10) = &PTR__PfDracaenaSwordProjectile_069dd750;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile() */

void __thiscall
PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile(PfDracaenaSwordProjectile *this)

{
  ~PfDracaenaSwordProjectile(this + -0x10);
  return;
}


/* PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile() */

void __thiscall
PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile(PfDracaenaSwordProjectile *this)

{
  ~PfDracaenaSwordProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile() */

void __thiscall
PfDracaenaSwordProjectile::~PfDracaenaSwordProjectile(PfDracaenaSwordProjectile *this)

{
  ~PfDracaenaSwordProjectile(this + -0x10);
  return;
}


/* PfDracaenaSwordProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
PfDracaenaSwordProjectile::onSetInstigator(PfDracaenaSwordProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (BoardEntity *)0x0) {
    uVar1 = FUN_04e3975c(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(this + 0x1a8) = uVar1;
  }
  return;
}


/* PfDracaenaSwordProjectile::PfDracaenaSwordProjectile() */

void __thiscall
PfDracaenaSwordProjectile::PfDracaenaSwordProjectile(PfDracaenaSwordProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_069dd560;
  *(undefined ***)(this + 0x10) = &PTR__PfDracaenaSwordProjectile_069dd750;
  return;
}


/* PfDracaenaSwordProjectile::StaticNew() */

PfDracaenaSwordProjectile * PfDracaenaSwordProjectile::StaticNew(void)

{
  PfDracaenaSwordProjectile *this;
  
  this = ::operator_new(0x1b0);
  PfDracaenaSwordProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PfDracaenaSwordProjectile::StaticClassInit() */

void PfDracaenaSwordProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PfDracaenaSwordProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3a880,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PfDracaenaSwordProjectile::StaticGetClass() */

long * PfDracaenaSwordProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PfDracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PfDracaenaSwordProjectile::GetClass() const */

long * PfDracaenaSwordProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PfDracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PfDracaenaSwordProjectile::damageEntity(BoardEntity*) */

void __thiscall
PfDracaenaSwordProjectile::damageEntity(PfDracaenaSwordProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  float *pfVar5;
  long lVar6;
  ZombieTosserSubSystem *pZVar7;
  undefined8 local_b8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  DamageInfo aDStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (PfDracaenaSwordProjectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,param_1);
    iVar3 = BoardEntity::CalcColumnPosition(param_1);
    iVar4 = FUN_04e39758(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_b8,iVar3,iVar4);
    local_50 = local_b8;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
        (iVar3 = Zombie::GetSizeType(this_00), iVar3 < 2)) &&
       (pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1), *pfVar5 < 800.0)) {
      lVar6 = Projectile::getProps((Projectile *)this);
      bVar2 = std::operator==((string *)(lVar6 + 0x100),"animation01");
      if (bVar2) {
        pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
        ZombieTosserSubSystem::LaunchZombieHorizontal
                  ((ZombieTosserSubSystem *)((float)iVar3 * 0.5),0x41200000,0x3f000000,pZVar7,
                   this_00,aRStack_b0,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
        DamageInfo::~DamageInfo(aDStack_68);
        goto LAB_04e3cf30;
      }
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_04e3cf30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PfDracaenaSwordProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PfDracaenaSwordProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  int *piVar7;
  RtObject *this_00;
  Plant *this_01;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ValueRange *this_02;
  float fVar11;
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Projectile::getProps((Projectile *)param_1);
  iVar3 = *(int *)(param_1 + 0x174);
  fVar11 = *(float *)(param_1 + 0x17c) * *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0x180) *
           *(float *)(param_1 + 0x184) * (float)(*(int *)(param_1 + 0x1a8) + 1);
  *(float *)(param_2 + 8) = fVar11;
  if ((0 < iVar3) && (*(int *)(param_1 + 0x4c) < iVar3)) {
    *(float *)(param_2 + 8) = fVar11 * 0.5;
  }
  if (0.0 < *(float *)(param_1 + 0xdc)) {
    DamageInfo::AddCondition((DamageInfo *)param_2,2);
  }
  if (param_1[0x34] != (DamageInfo)0x0) {
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 3.0;
  }
  this = (RtWeakPtr *)(param_1 + 0x68);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  *(ResourceInfo **)param_2 = pRVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0x168);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xe0);
  local_48[0] = FUN_04e3b714(uVar6);
  local_28[0] = FUN_04e3b764(*(undefined8 *)(lVar4 + 0x170));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_28),
        bVar1) {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
    this_02 = (ValueRange *)(piVar7 + 1);
    iVar3 = *piVar7;
    ValueRange::GetRandomValue(this_02);
    DamageInfo::AddCondition((DamageInfo *)param_2,iVar3);
    iVar3 = *piVar7;
    if (iVar3 == 0) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,4);
    }
    else if (iVar3 == 1) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,5);
    }
    else if (iVar3 == 0x10) {
      ValueRange::GetRandomValue(this_02);
      DamageInfo::AddCondition((DamageInfo *)param_2,6);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)local_48);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      if ((this_01 != (Plant *)0x0) &&
         (lVar8 = FUN_04e39a5c(*(undefined8 *)(lVar4 + 0x180),*(undefined8 *)(lVar4 + 0x188)),
         lVar8 != 0)) {
        iVar3 = FUN_04e3975c(*(undefined4 *)(this_01 + 0x50));
        iVar3 = iVar3 + -1;
        fVar11 = (float)Sexy::Rand(1.0);
        if (-1 < iVar3) {
          uVar6 = *(undefined8 *)(lVar4 + 0x180);
          uVar9 = FUN_04e39a5c(uVar6,*(undefined8 *)(lVar4 + 0x188));
          if ((ulong)(long)iVar3 < uVar9) {
            puVar10 = (undefined4 *)FUN_04e39a70(uVar6,(long)iVar3);
            cVar2 = Plant::IsSkillCheat(this_01);
            if (((cVar2 != '\0') && (cVar2 = Plant::IsSkillActivate(this_01), cVar2 != '\0')) ||
               ((cVar2 = Plant::IsSkillCheat(this_01), cVar2 == '\0' && (fVar11 < (float)puVar10[2])
                ))) {
              TriRepGenerator::SpanSet::SpanSet((SpanSet *)local_48);
              local_30 = *puVar10;
              std::vector<std::string,std::allocator<std::string>>::operator=
                        ((vector<std::string,std::allocator<std::string>> *)local_48,
                         (vector *)(puVar10 + 4));
              ZombieConditionInfo::ZombieConditionInfo
                        ((ZombieConditionInfo *)local_28,(ZombieConditionInfo *)local_48);
                    /* WARNING: Load size is inaccurate */
              DamageInfo::AddCondition
                        (*(DamageInfo **)(puVar10 + 1),param_2,(ZombieConditionInfo *)local_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_28);
              PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)local_48);
            }
          }
        }
      }
      fVar11 = (float)Plant::GetDamageConstValue(this_01);
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar11;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

