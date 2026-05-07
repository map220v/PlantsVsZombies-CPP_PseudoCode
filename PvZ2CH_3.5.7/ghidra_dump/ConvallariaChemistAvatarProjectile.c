// Class: ConvallariaChemistAvatarProjectile


/* ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile() */

void __thiscall
ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile
          (ConvallariaChemistAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067456a0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistAvatarProjectile_06745890;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile() */

void __thiscall
ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile
          (ConvallariaChemistAvatarProjectile *this)

{
  ~ConvallariaChemistAvatarProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile() */

void __thiscall
ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile
          (ConvallariaChemistAvatarProjectile *this)

{
  ~ConvallariaChemistAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile() */

void __thiscall
ConvallariaChemistAvatarProjectile::~ConvallariaChemistAvatarProjectile
          (ConvallariaChemistAvatarProjectile *this)

{
  ~ConvallariaChemistAvatarProjectile(this + -0x10);
  return;
}


/* ConvallariaChemistAvatarProjectile::ConvallariaChemistAvatarProjectile() */

void __thiscall
ConvallariaChemistAvatarProjectile::ConvallariaChemistAvatarProjectile
          (ConvallariaChemistAvatarProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067456a0;
  *(undefined ***)(this + 0x10) = &PTR__ConvallariaChemistAvatarProjectile_06745890;
  return;
}


/* ConvallariaChemistAvatarProjectile::StaticNew() */

ConvallariaChemistAvatarProjectile * ConvallariaChemistAvatarProjectile::StaticNew(void)

{
  ConvallariaChemistAvatarProjectile *this;
  
  this = ::operator_new(0x1a8);
  ConvallariaChemistAvatarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistAvatarProjectile::StaticClassInit() */

void ConvallariaChemistAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConvallariaChemistAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c06d00,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistAvatarProjectile::StaticGetClass() */

long * ConvallariaChemistAvatarProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ConvallariaChemistAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistAvatarProjectile::GetClass() const */

long * ConvallariaChemistAvatarProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ConvallariaChemistAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistAvatarProjectile::handleImpact(BoardEntity*) */

void __thiscall
ConvallariaChemistAvatarProjectile::handleImpact
          (ConvallariaChemistAvatarProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar5;
  Effect_PopAnim *this_01;
  PopAnim *pPVar6;
  long extraout_x0;
  undefined8 *puVar7;
  Zombie *extraout_x0_00;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  Insets aIStack_a8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined8 local_80 [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar9 = pfVar5[1];
    fVar8 = *pfVar5;
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_80,"POPANIM_EFFECTS_CONVALLARIACHEMIST_EXPLODE_AVATAR");
    GetPAMByName((string *)local_80);
    pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,pPVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string((string *)local_80);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar8,fVar9 - 20.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_68,-1);
    FUN_03c05b74(this_01 + 0x1c);
    Effect_PopAnim::SetCentered(this_01,true);
    std::string::string((string *)aRStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_68,0);
    std::string::~string((string *)aRStack_68);
    nop();
    Projectile::GetProps((Projectile *)this);
    nop();
    Sexy::Insets::Insets(aIStack_a8,iVar3 + -1,iVar4 + -1,3,3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
    local_60 = *(undefined4 *)(extraout_x0 + 0x218);
    fVar8 = *(float *)(extraout_x0 + 0x1e0);
    EntityFinder::GetEntitiesInGridSquares(avStack_98,2,aIStack_a8);
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_98);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8)
      ;
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar7,(RealObject *)this);
      if ((((cVar2 != '\0') && (nop(), extraout_x0_00 != (Zombie *)0x0)) &&
          (cVar2 = (**(code **)(*(long *)extraout_x0_00 + 0x330))(), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(long *)extraout_x0_00 + 0x328))(extraout_x0_00), cVar2 == '\0')) {
        cVar2 = Zombie::HasCondition(extraout_x0_00,0x4c);
        if (cVar2 != '\0') {
          Zombie::EndCondition(extraout_x0_00,0x4c);
          (**(code **)(*(long *)extraout_x0_00 + 0x110))(extraout_x0_00,aRStack_68);
        }
        std::vector<PoisonInfo,std::allocator<PoisonInfo>>::vector
                  ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)local_80,
                   (vector *)(extraout_x0 + 0x1f0));
        puVar7 = (undefined8 *)FUN_03c05a20(local_80[0],(long)((int)fVar8 + -1));
        fVar9 = *(float *)(extraout_x0 + 0x1e0);
        uVar10 = *(undefined4 *)((long)puVar7 + 4);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*puVar7,0,extraout_x0_00,0x4c,1);
        Zombie::SetExtraConditionTracker(0x3f800000,extraout_x0_00,0x4c);
        Zombie::SetExtraConditionTracker2(fVar9 - 1.0,extraout_x0_00,0x4c);
        Zombie::SetConditionTracker(uVar10,extraout_x0_00,0x4c);
        std::vector<PoisonInfo,std::allocator<PoisonInfo>>::~vector
                  ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)local_80);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
    }
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

