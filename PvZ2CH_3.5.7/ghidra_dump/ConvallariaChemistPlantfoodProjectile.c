// Class: ConvallariaChemistPlantfoodProjectile


/* ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile() */

void __thiscall
ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile
          (ConvallariaChemistPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06745480;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistPlantfoodProjectile_06745670;
  ConvallariaChemistProjectile::~ConvallariaChemistProjectile((ConvallariaChemistProjectile *)this);
  return;
}


/* non-virtual thunk to
   ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile() */

void __thiscall
ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile
          (ConvallariaChemistPlantfoodProjectile *this)

{
  ~ConvallariaChemistPlantfoodProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile() */

void __thiscall
ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile
          (ConvallariaChemistPlantfoodProjectile *this)

{
  ~ConvallariaChemistPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile() */

void __thiscall
ConvallariaChemistPlantfoodProjectile::~ConvallariaChemistPlantfoodProjectile
          (ConvallariaChemistPlantfoodProjectile *this)

{
  ~ConvallariaChemistPlantfoodProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistPlantfoodProjectile::ConvallariaChemistPlantfoodProjectile() */

void __thiscall
ConvallariaChemistPlantfoodProjectile::ConvallariaChemistPlantfoodProjectile
          (ConvallariaChemistPlantfoodProjectile *this)

{
  ConvallariaChemistProjectile::ConvallariaChemistProjectile((ConvallariaChemistProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06745480;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistPlantfoodProjectile_06745670;
  return;
}


/* ConvallariaChemistPlantfoodProjectile::StaticNew() */

ConvallariaChemistPlantfoodProjectile * ConvallariaChemistPlantfoodProjectile::StaticNew(void)

{
  ConvallariaChemistPlantfoodProjectile *this;
  
  this = ::operator_new(0x1b8);
  ConvallariaChemistPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistPlantfoodProjectile::StaticClassInit() */

void ConvallariaChemistPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConvallariaChemistPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c06a88,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistPlantfoodProjectile::StaticGetClass() */

long * ConvallariaChemistPlantfoodProjectile::StaticGetClass(void)

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
  uVar2 = ConvallariaChemistProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistPlantfoodProjectile::GetClass() const */

long * ConvallariaChemistPlantfoodProjectile::GetClass(void)

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
  uVar2 = ConvallariaChemistProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistPlantfoodProjectile::damageEntity(BoardEntity*) */

void __thiscall
ConvallariaChemistPlantfoodProjectile::damageEntity
          (ConvallariaChemistPlantfoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long extraout_x0;
  Zombie *this_00;
  undefined8 *puVar2;
  float *pfVar3;
  Effect_PopAnim *this_01;
  PopAnim *pPVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_88 [8];
  undefined8 local_80 [3];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar5 = *(float *)(extraout_x0 + 0x218);
  if (param_1 == (BoardEntity *)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
    if (this_00 != (Zombie *)0x0) {
      cVar1 = Zombie::HasCondition(this_00,0x4c);
      if (cVar1 != '\0') {
        Zombie::EndCondition(this_00,0x4c);
        local_60 = local_60 + fVar5;
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar7 = pfVar3[1];
        fVar5 = *pfVar3;
        this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_88,"POPANIM_EFFECTS_CONVALLARIACHEMIST_EXPLODE");
        GetPAMByName(asStack_88);
        pPVar4 = (PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_80)
        ;
        Effect_PopAnim::CreatePopAnimRig(this_01,pPVar4,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
        std::string::~string(asStack_88);
        nop();
        EATextSquish::Vec3::Vec3((Vec3 *)local_80,fVar5,fVar7 - 20.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_01,(SexyVector3 *)local_80,-1);
        FUN_03c05b74(this_01 + 0x1c);
        Effect_PopAnim::SetCentered(this_01,true);
        std::string::string((string *)local_80,"anim3");
        Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)local_80,0);
        std::string::~string((string *)local_80);
        nop();
      }
      std::vector<PoisonInfo,std::allocator<PoisonInfo>>::vector
                ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)local_80,
                 (vector *)(extraout_x0 + 0x1f0));
      puVar2 = (undefined8 *)FUN_03c05a20(local_80[0],0);
      uVar6 = *(undefined4 *)((long)puVar2 + 4);
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*puVar2,0,this_00,0x4c,1);
      Zombie::SetExtraConditionTracker(0x3f800000,this_00,0x4c);
      Zombie::SetExtraConditionTracker2(0,this_00,0x4c);
      Zombie::SetConditionTracker(uVar6,this_00,0x4c);
      std::vector<PoisonInfo,std::allocator<PoisonInfo>>::~vector
                ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)local_80);
    }
  }
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

