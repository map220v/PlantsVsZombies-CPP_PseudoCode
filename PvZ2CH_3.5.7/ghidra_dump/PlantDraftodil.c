// Class: PlantDraftodil


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::StaticClassInit() */

void PlantDraftodil::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDraftodil");
    (*pcVar2)(plVar1,asStack_10,FUN_04018610,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodil::StaticGetClass() */

long * PlantDraftodil::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDraftodil::GetClass() const */

long * PlantDraftodil::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDraftodil::canBeMovedByDratodil(Zombie*) */

byte __thiscall PlantDraftodil::canBeMovedByDratodil(PlantDraftodil *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  if (param_1 != (Zombie *)0x0) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')
       ) {
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = Zombie::IsOnGround(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = Zombie::IsIgnoringAllDamage(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = Zombie::CanTakeFatalDamage(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1,0);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = Zombie::IsControlled(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = Zombie::HasCondition(param_1,0x7a);
    }
    else {
      iVar3 = (**(code **)(*(long *)param_1 + 0x4e8))(param_1);
      if (iVar3 != 1) {
        return 0;
      }
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = Zombie::IsOnGround(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = Zombie::IsIgnoringAllDamage(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = Zombie::IsControlled(param_1);
    }
    if (cVar1 == '\0') {
      bVar2 = Zombie::IsBoss(param_1);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* PlantDraftodil::canBeSlowedByDraftodil(Zombie*) */

byte __thiscall PlantDraftodil::canBeSlowedByDraftodil(PlantDraftodil *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 == '\0') || (cVar1 = Zombie::IsOnGround(param_1), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
     (((cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::DoesIgnoresCollisions(param_1), cVar1 != '\0')) ||
      (cVar1 = Zombie::HasCondition(param_1,0x7a), cVar1 != '\0')))) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsBoss(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PlantDraftodil::CanApplyPowerUpFlags() */

byte __thiscall PlantDraftodil::CanApplyPowerUpFlags(PlantDraftodil *this)

{
  byte bVar1;
  
  bVar1 = FUN_04016a84(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::FireProjectile(PlantWeapon) */

void __thiscall PlantDraftodil::FireProjectile(PlantDraftodil *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  lVar3 = *(long *)this;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = param_2;
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(lVar3 + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  lVar2 = (*pcVar4)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  iVar1 = FUN_04015670(*(undefined8 *)(this + 0x10));
  FUN_04015650((float)iVar1,lVar2 + 0x170);
  lVar3 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* PlantDraftodil::startPlantfoodAirProjectileLoop() */

void __thiscall PlantDraftodil::startPlantfoodAirProjectileLoop(PlantDraftodil *this)

{
  undefined4 uVar1;
  
  this[0x31] = (PlantDraftodil)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* PlantDraftodil::startBlowingZombiesBack() */

void __thiscall PlantDraftodil::startBlowingZombiesBack(PlantDraftodil *this)

{
  undefined4 uVar1;
  
  this[0x30] = (PlantDraftodil)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* PlantDraftodil::OnAnimCommand(std::string const&, std::string const&) */

void PlantDraftodil::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    startBlowingZombiesBack((PlantDraftodil *)param_1);
    startPlantfoodAirProjectileLoop((PlantDraftodil *)param_1);
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantDraftodil::PlantDraftodil() */

void __thiscall PlantDraftodil::PlantDraftodil(PlantDraftodil *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (PlantDraftodil)0x0;
  *(undefined ***)this = &PTR_GetClass_067b5c60;
  this[0x31] = (PlantDraftodil)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantDraftodil::StaticNew() */

PlantDraftodil * PlantDraftodil::StaticNew(void)

{
  PlantDraftodil *this;
  
  this = ::operator_new(0x58);
  PlantDraftodil(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::getTargetableZombies() */

void PlantDraftodil::getTargetableZombies(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(in_x0 + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_18,-2,iVar1,iVar2 + 3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntitiesInGridSquares();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::giveWindBoost() */

void __thiscall PlantDraftodil::giveWindBoost(PlantDraftodil *this)

{
  int iVar1;
  long lVar2;
  Plant *pPVar3;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_18,0,local_1c,iVar1,1);
  pPVar3 = *(Plant **)(this + 0x10);
  lVar2 = FUN_0401781c(pPVar3);
  Plant::SendHelpToPlants(pPVar3,0,aIStack_18,*(undefined4 *)(lVar2 + 0x2cc));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodil::Initialize() */

void __thiscall PlantDraftodil::Initialize(PlantDraftodil *this)

{
  char cVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_04015678(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 != '\0')) {
    giveWindBoost(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::firePlantfoodProjectile(Zombie*) */

void PlantDraftodil::firePlantfoodProjectile(Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  RtObject *this;
  PlantDraftodilProjectile *this_00;
  SexyTransform2D *pSVar5;
  SexyTransform2D *pSVar6;
  SexyVector3 *this_01;
  undefined8 *puVar7;
  long in_x1;
  undefined8 uVar8;
  code *pcVar9;
  Plant *pPVar10;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_s2;
  undefined4 uVar15;
  float fVar16;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  SexyTransform2D local_58 [40];
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0401781c(*(undefined8 *)(param_1 + 0x10));
  lVar3 = FUN_04015688(*(undefined8 *)(lVar3 + 0x70));
  fVar11 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0xa8) + 0x110))
                            (0x3f800000,*(long **)(*(long *)(param_1 + 0x10) + 0xa8),lVar3);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  fVar12 = *pfVar4;
  in_s1 = in_s1 + pfVar4[1];
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)(lVar3 + 8));
  this = (RtObject *)
         Board::AddProjectile
                   ((Board *)(fVar11 + fVar12),uVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_68,
                    *(undefined8 *)(param_1 + 0x10),0);
  this_00 = Sexy::RtObject::Cast<PlantDraftodilProjectile>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  if (*(int *)(lVar3 + 0x2c) != 0) {
    FUN_04015658((float)*(int *)(lVar3 + 0x2c),this_00 + 0xd8);
  }
  if (*(float *)(lVar3 + 0x44) != 0.0) {
    FUN_04015660(this_00 + 0xdc);
  }
  fVar11 = *(float *)(lVar3 + 0x30);
  if (fVar11 != 0.0) {
    puVar7 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
    local_78 = *puVar7;
    local_70 = *(undefined4 *)(puVar7 + 1);
    fVar12 = (float)DVec3::getLength((DVec3 *)&local_78);
    local_68 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,fVar11 / fVar12);
    local_64 = in_s1;
    local_60 = in_s2;
    Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_68);
  }
  if (in_x1 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)&local_78);
    Projectile::SetTarget((Projectile *)this_00,(RtWeakPtr *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  }
  fVar11 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
  lVar3 = FUN_0401781c(*(undefined8 *)(param_1 + 0x10));
  fVar16 = *(float *)(lVar3 + 0x2e8);
  lVar3 = FUN_0401781c(*(undefined8 *)(param_1 + 0x10));
  fVar13 = *(float *)(lVar3 + 0x2dc);
  lVar3 = FUN_0401781c(*(undefined8 *)(param_1 + 0x10));
  fVar12 = *(float *)(lVar3 + 0x2e0);
  lVar3 = FUN_0401781c(*(undefined8 *)(param_1 + 0x10));
  StickybombRiceProjectile::Initialize
            ((StickybombRiceProjectile *)this_00,fVar16,fVar11 + fVar13,fVar11 + fVar12,
             *(float *)(lVar3 + 0x2e4));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    Sexy::SexyTransform2D::SexyTransform2D(local_58);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 2;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_78);
    pPVar10 = *(Plant **)(param_1 + 0x10);
    uVar14 = *(undefined4 *)(pPVar10 + 0x110);
    std::string::string((string *)&local_68,"DraftodilPlantfoodDefault");
    pSVar5 = (SexyTransform2D *)
             Plant::SpecialFire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                         *)&local_78,uVar14,
                                (RtWeakPtr<Sexy::SoundResource> *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    iVar2 = FUN_04015670(*(undefined8 *)(param_1 + 0x10));
    FUN_04015650((float)iVar2,this_00 + 0x170);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
    pSVar6 = (SexyTransform2D *)Sexy::SexyMath::DegToRad(-15.0);
    Sexy::SexyTransform2D::CreateRotation(pSVar6,extraout_s0);
    FUN_04015644(extraout_s0,pSVar5 + 0xc4);
    Projectile::ApplyRotationToVelocity(pSVar5);
    pcVar9 = *(code **)(*(long *)pSVar5 + 0x78);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    uVar14 = 0x41200000;
    uVar15 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_78,0.0,10.0,0.0);
    local_68 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_78);
    local_64 = (float)uVar14;
    local_60 = uVar15;
    (*pcVar9)(pSVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 2;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_78);
    pPVar10 = *(Plant **)(param_1 + 0x10);
    uVar14 = *(undefined4 *)(pPVar10 + 0x110);
    std::string::string((string *)&local_68,"DraftodilPlantfoodDefault");
    pSVar5 = (SexyTransform2D *)
             Plant::SpecialFire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                         *)&local_78,uVar14,
                                (RtWeakPtr<Sexy::SoundResource> *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    iVar2 = FUN_04015670(*(undefined8 *)(param_1 + 0x10));
    FUN_04015650((float)iVar2,this_00 + 0x170);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
    pSVar6 = (SexyTransform2D *)Sexy::SexyMath::DegToRad(15.0);
    Sexy::SexyTransform2D::CreateRotation(pSVar6,extraout_s0_00);
    FUN_04015644(extraout_s0_00,pSVar5 + 0xc4);
    Projectile::ApplyRotationToVelocity(pSVar5);
    fVar11 = 10.0;
    pcVar9 = *(code **)(*(long *)pSVar5 + 0x78);
    uVar14 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_78,0.0,10.0,0.0);
    local_68 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_78);
    local_64 = fVar11;
    local_60 = uVar14;
    (*pcVar9)(pSVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::slowZombies() */

void __thiscall PlantDraftodil::slowZombies(PlantDraftodil *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Zombie *extraout_x0;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getTargetableZombies();
  lVar3 = FUN_0401781c(*(undefined8 *)(this + 0x10));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = canBeSlowedByDraftodil(this,extraout_x0);
    if ((cVar2 != '\0') && (cVar2 = Zombie::HasCondition(extraout_x0,0x67), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition
                (*(Zombie **)(lVar3 + 0x2c4),*(undefined4 *)(lVar3 + 0x2c0),extraout_x0,0x67,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::blowZombiesToBack() */

void __thiscall PlantDraftodil::blowZombiesToBack(PlantDraftodil *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Zombie *extraout_x0;
  ZombieBlowerSubSystem *pZVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ZombieBlowerSubSystem *pZVar7;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0401781c(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pZVar7._0_4_ = *(ZombieBlowerSubSystem **)(lVar3 + 0x2b8);
  lVar3 = FUN_0401781c(*(undefined8 *)(this + 0x10));
  uVar6 = *(undefined4 *)(lVar3 + 700);
  getTargetableZombies();
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_68);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    nop();
    cVar2 = canBeMovedByDratodil(this,extraout_x0);
    if (cVar2 != '\0') {
      if (*(code **)(*(long *)extraout_x0 + 0x340) != Zombie::OnBeforeBlown) {
        (**(code **)(*(long *)extraout_x0 + 0x340))(extraout_x0,*(undefined8 *)(this + 0x10));
      }
      pZVar4 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      uVar5 = *(undefined8 *)(this + 0x10);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieBlowerSubSystem::BlowZombie(pZVar7._0_4_,uVar6,pZVar4,uVar5,extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodil::~PlantDraftodil() */

void __thiscall PlantDraftodil::~PlantDraftodil(PlantDraftodil *this)

{
  *(undefined ***)this = &PTR_GetClass_067b5c60;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDraftodil::~PlantDraftodil() */

void __thiscall PlantDraftodil::~PlantDraftodil(PlantDraftodil *this)

{
  ~PlantDraftodil(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantDraftodil::Fire
          (PlantDraftodil *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  PlantDraftodilProjectile2 *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  RtObject *pRVar6;
  long lVar7;
  Plant *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  this_00 = (PlantDraftodilProjectile2 *)0x0;
  if ((cVar1 == '\0') && (this[0x31] == (PlantDraftodil)0x0)) {
    fVar9 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    iVar2 = FUN_04015670(*(undefined8 *)(this + 0x10));
    if (4 < iVar2) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_28._0_4_ = 1;
      do {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_20,(int *)&local_28);
        local_28._0_4_ = (int)local_28 + 1;
      } while ((int)local_28 < 0x65);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar3,uVar4);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      if (*piVar5 < 0x10) {
        pPVar8 = *(Plant **)(this + 0x10);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_2);
        std::string::string((string *)&local_28,"DraftodilDefault2");
        pRVar6 = (RtObject *)
                 Plant::SpecialFire(pPVar8,aRStack_30,param_3,(exception_ptr *)&local_28);
        this_00 = Sexy::RtObject::Cast<PlantDraftodilProjectile2>(pRVar6);
        std::string::~string((string *)&local_28);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        iVar2 = FUN_04015670(*(undefined8 *)(this + 0x10));
        FUN_04015650((float)iVar2,this_00 + 0x170);
        if (this_00 != (PlantDraftodilProjectile2 *)0x0) {
          lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
          fVar10 = *(float *)(lVar7 + 0x2d8);
          lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
          fVar11 = *(float *)(lVar7 + 0x2dc);
          lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
          fVar12 = *(float *)(lVar7 + 0x2e0);
          lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
          GridItemWizardCrucible::setValues
                    ((GridItemWizardCrucible *)this_00,fVar9 + fVar10,fVar9 + fVar11,fVar9 + fVar12,
                     *(float *)(lVar7 + 0x2e4));
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)avStack_20);
          goto LAB_04018a0c;
        }
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,param_2);
    pRVar6 = (RtObject *)PlantFramework::Fire((PlantFramework *)this,avStack_20,param_3,param_4);
    this_00 = (PlantDraftodilProjectile2 *)Sexy::RtObject::Cast<PlantDraftodilProjectile>(pRVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
    iVar2 = FUN_04015670(*(undefined8 *)(this + 0x10));
    FUN_04015650((float)iVar2,(PlantDraftodilProjectile *)(this_00 + 0x170));
    if (this_00 != (PlantDraftodilProjectile2 *)0x0) {
      lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
      fVar10 = *(float *)(lVar7 + 0x2d8);
      lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
      fVar11 = *(float *)(lVar7 + 0x2dc);
      lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
      fVar12 = *(float *)(lVar7 + 0x2e0);
      lVar7 = FUN_0401781c(*(undefined8 *)(this + 0x10));
      StickybombRiceProjectile::Initialize
                ((StickybombRiceProjectile *)this_00,fVar9 + fVar10,fVar9 + fVar11,fVar9 + fVar12,
                 *(float *)(lVar7 + 0x2e4));
    }
  }
LAB_04018a0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodil::shootPlantfoodAirProjectiles() */

void __thiscall PlantDraftodil::shootPlantfoodAirProjectiles(PlantDraftodil *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0401781c(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar4 + 0x2d0);
  FUN_0401781c(*(undefined8 *)(this + 0x10));
  fVar7 = (float)PVZ_T();
  iVar3 = *(int *)(this + 0x28);
  if (fVar7 - *(float *)(this + 0x38) < _FUN_04019768) {
LAB_040196d0:
    this[0x31] = (PlantDraftodil)(iVar3 < iVar1);
    if (iVar3 < iVar1) goto LAB_040196e4;
  }
  else {
    if (iVar3 < iVar1) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x40);
      getTargetableZombies();
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_20);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_20);
      Sexy::Point::Point((Point *)&local_38,0,0);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)&local_38);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar5,uVar6,(RtWeakPtr<Sexy::SoundResource> *)local_30);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        nop();
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        ToolPacketData::GetProps();
        local_38 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar5,uVar6,aRStack_40);
        local_30[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        if (bVar2) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     this_00,(RtWeakPtr *)local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      }
      firePlantfoodProjectile((Zombie *)this);
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      uVar8 = PVZ_T();
      *(undefined4 *)(this + 0x38) = uVar8;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      iVar3 = *(int *)(this + 0x28);
      goto LAB_040196d0;
    }
    this[0x31] = (PlantDraftodil)0x0;
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
LAB_040196e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodil::UpdateActions() */

void __thiscall PlantDraftodil::UpdateActions(PlantDraftodil *this)

{
  PlantDraftodil PVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  slowZombies(this);
  if (this[0x30] != (PlantDraftodil)0x0) {
    fVar3 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x34);
    lVar2 = FUN_0401781c(*(undefined8 *)(this + 0x10));
    if (fVar3 - fVar4 < *(float *)(lVar2 + 0x2c8)) {
      blowZombiesToBack(this);
      PVar1 = this[0x31];
      goto joined_r0x040197d4;
    }
  }
  PVar1 = this[0x31];
  this[0x30] = (PlantDraftodil)0x0;
joined_r0x040197d4:
  if (PVar1 == (PlantDraftodil)0x0) {
    return;
  }
  shootPlantfoodAirProjectiles(this);
  return;
}

