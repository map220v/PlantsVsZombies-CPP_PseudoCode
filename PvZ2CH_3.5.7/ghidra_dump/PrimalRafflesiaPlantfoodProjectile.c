// Class: PrimalRafflesiaPlantfoodProjectile


/* PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile() */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile
          (PrimalRafflesiaPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067fb880;
  *(undefined ***)(this + 0x10) = &PTR__PrimalRafflesiaPlantfoodProjectile_067fba88;
  PrimalRafflesiaProjectile::~PrimalRafflesiaProjectile((PrimalRafflesiaProjectile *)this);
  return;
}


/* non-virtual thunk to PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile() */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile
          (PrimalRafflesiaPlantfoodProjectile *this)

{
  ~PrimalRafflesiaPlantfoodProjectile(this + -0x10);
  return;
}


/* PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile() */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile
          (PrimalRafflesiaPlantfoodProjectile *this)

{
  ~PrimalRafflesiaPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile() */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::~PrimalRafflesiaPlantfoodProjectile
          (PrimalRafflesiaPlantfoodProjectile *this)

{
  ~PrimalRafflesiaPlantfoodProjectile(this + -0x10);
  return;
}


/* PrimalRafflesiaPlantfoodProjectile::PrimalRafflesiaPlantfoodProjectile() */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::PrimalRafflesiaPlantfoodProjectile
          (PrimalRafflesiaPlantfoodProjectile *this)

{
  PrimalRafflesiaProjectile::PrimalRafflesiaProjectile((PrimalRafflesiaProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067fb880;
  *(undefined ***)(this + 0x10) = &PTR__PrimalRafflesiaPlantfoodProjectile_067fba88;
  return;
}


/* PrimalRafflesiaPlantfoodProjectile::StaticNew() */

PrimalRafflesiaPlantfoodProjectile * PrimalRafflesiaPlantfoodProjectile::StaticNew(void)

{
  PrimalRafflesiaPlantfoodProjectile *this;
  
  this = ::operator_new(0x1b8);
  PrimalRafflesiaPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaPlantfoodProjectile::StaticClassInit() */

void PrimalRafflesiaPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalRafflesiaPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0418dfb0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalRafflesiaPlantfoodProjectile::StaticGetClass() */

long * PrimalRafflesiaPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalRafflesiaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaPlantfoodProjectile::GetClass() const */

long * PrimalRafflesiaPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalRafflesiaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaPlantfoodProjectile::DoInstantExplosion(Sexy::SexyVector2 const&) */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::DoInstantExplosion
          (PrimalRafflesiaPlantfoodProjectile *this,SexyVector2 *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  string *psVar6;
  long extraout_x0;
  undefined8 *puVar7;
  Zombie *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar8;
  long *extraout_x0_00;
  RtObject *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"primalrafflesia");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  DamageInfo::DamageInfo((DamageInfo *)asStack_68);
  local_60 = (float)*(int *)(extraout_x0 + 0x31c);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar1 = *(int *)(extraout_x0 + 800);
  uVar4 = BoardTransforms::BoardSpaceToGridY(*(float *)(param_1 + 4));
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingCircle2D((float)iVar1,avStack_80,uVar5,param_1,uVar4,uVar4);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90);
    if (!bVar2) break;
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    this_02 = (RtObject *)*puVar7;
    cVar3 = RealObject::IsOnOpposingTeam(this_02,1);
    if (cVar3 != '\0') {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (this_00 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0_00 != (long *)0x0) &&
            (cVar3 = (**(code **)(*extraout_x0_00 + 0xb8))(), cVar3 != '\0')) &&
           (cVar3 = (**(code **)(*extraout_x0_00 + 0x200))(extraout_x0_00), cVar3 != '\0')) {
          (**(code **)(*extraout_x0_00 + 0x110))(extraout_x0_00,asStack_68);
        }
      }
      else {
        uVar4 = operator|(1,8);
        cVar3 = Zombie::MatchesAny(this_00,uVar4);
        if (((cVar3 == '\0') &&
            (cVar3 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar3 != '\0')) &&
           (cVar3 = Zombie::IsFlying(this_00), cVar3 == '\0')) {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_98,"POPANIM_EFFECTS_PRIMAL_RAFFLESIA_EXPLODE");
  GetPAMByName((string *)&local_98);
  pPVar8 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar8,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_90);
  std::string::~string((string *)&local_98);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)local_90,*(float *)param_1,*(float *)(param_1 + 4) - 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_90,-1);
  FUN_0418d668(this_01 + 0x1c);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string((string *)local_90,"anim3");
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)local_90,0);
  std::string::~string((string *)local_90);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PrimalRafflesiaPlantfoodProjectile::OnCollideEntity
          (PrimalRafflesiaPlantfoodProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Zombie *extraout_x0;
  PrimalRafflesiaSubsystem *pPVar3;
  undefined4 uVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1e8))();
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (cVar1 != '\0') {
    nop();
    cVar1 = (**(code **)(*(long *)this + 0x1f0))(this,extraout_x0);
    if (cVar1 != '\0') {
      pPVar3 = Board::GetGameSubSystem<PrimalRafflesiaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      PrimalRafflesiaSubsystem::MarkZombieExplode(pPVar3,extraout_x0,(bool)this[0x1b4]);
      pPVar3 = Board::GetGameSubSystem<PrimalRafflesiaSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      PrimalRafflesiaSubsystem::ExplodeInstantly(pPVar3,extraout_x0);
    }
  }
  if (this[0x1b4] != (PrimalRafflesiaPlantfoodProjectile)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    local_10 = FUN_0418d678(*(undefined4 *)(param_1 + 0x18),uVar4,*(undefined4 *)(param_1 + 0x20));
    local_c = uVar4;
    DoInstantExplosion(this,(SexyVector2 *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

