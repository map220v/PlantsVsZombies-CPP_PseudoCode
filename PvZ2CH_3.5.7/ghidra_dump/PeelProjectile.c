// Class: PeelProjectile


/* PeelProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PeelProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  float fVar1;
  
  Projectile::fillDamageInfo(param_1,param_2);
  fVar1 = 1.5;
  if (param_1[0x200] == (DamageInfo)0x0) {
    fVar1 = 1.0;
  }
  *(float *)(param_2 + 8) = fVar1 * *(float *)(param_2 + 8);
  return;
}


/* PeelProjectile::onInitialized() */

void __thiscall PeelProjectile::onInitialized(PeelProjectile *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  this[0x1a5] = (PeelProjectile)0x0;
  *(undefined4 *)(this + 0x1e8) = 0x3e800000;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  std::string::append((string *)(this + 0x1f8),"",in_x2);
  this[0x200] = (PeelProjectile)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x204) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::StaticClassInit() */

void PeelProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeelProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d39fd0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeelProjectile::StaticGetClass() */

long * PeelProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PeelProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeelProjectile::GetClass() const */

long * PeelProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PeelProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeelProjectile::SetUpElectrification(float, float, float, std::string) */

void PeelProjectile::SetUpElectrification
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x1ec) = param_1;
  *(undefined4 *)(param_4 + 0x1f0) = param_2;
  *(undefined4 *)(param_4 + 500) = param_3;
  thunk_FUN_05475e00(param_4 + 0x1f8);
  return;
}


/* PeelProjectile::SetBoundaryPosition(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall
PeelProjectile::SetBoundaryPosition(PeelProjectile *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1c0) = *(undefined8 *)param_2;
  return;
}


/* PeelProjectile::SetBaseVelocity(Sexy::SexyVector3 const&) */

void __thiscall PeelProjectile::SetBaseVelocity(PeelProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1d0),param_1);
  return;
}


/* PeelProjectile::SetSlowdown(float, float) */

void __thiscall PeelProjectile::SetSlowdown(PeelProjectile *this,float param_1,float param_2)

{
  *(float *)(this + 0x1e0) = param_1;
  *(float *)(this + 0x1e4) = param_2;
  return;
}


/* PeelProjectile::SetPauseDuration(float) */

void __thiscall PeelProjectile::SetPauseDuration(PeelProjectile *this,float param_1)

{
  *(float *)(this + 0x1e8) = param_1;
  return;
}


/* PeelProjectile::isValidTarget(Zombie*) */

undefined8 __thiscall PeelProjectile::isValidTarget(PeelProjectile *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  
  if (param_1 != (Zombie *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ZombieBeachSnorkel>((RtObject *)param_1);
    if (bVar1) {
      nop();
      cVar2 = FUN_04d36264(*(undefined1 *)(extraout_x0 + 0x800));
      if (cVar2 != '\0') {
        return 0;
      }
    }
    bVar1 = Sexy::RtObject::IsA<ZombieCavalry>((RtObject *)param_1);
    if (((((!bVar1) && (bVar1 = Sexy::RtObject::IsA<ZombieGentleman>((RtObject *)param_1), !bVar1))
         && (iVar3 = Zombie::GetSizeType(param_1), iVar3 < 2)) &&
        ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
         (cVar2 = Zombie::HasCondition(param_1,0x8b), cVar2 == '\0')))) &&
       ((cVar2 = Zombie::IsFlying(param_1), cVar2 == '\0' &&
        ((cVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(this + 0x208),param_1),
         cVar2 == '\0' && (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0'))
        )))) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::onDestroy() */

void __thiscall PeelProjectile::onDestroy(PeelProjectile *this)

{
  char cVar1;
  long extraout_x0;
  PlantElectricPeel *this_00;
  PopAnimRig *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetInstigator((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    nop();
    this_01 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this_00 + 0x10));
    std::string::string(asStack_10,"attack2");
    cVar1 = PopAnimRig::IsAnimStringActive(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      PlantElectricPeel::OnProjectileReturned(this_00,this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::ShouldForceCollision(BoardEntity*) */

void __thiscall PeelProjectile::ShouldForceCollision(PeelProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  PlantGroup *pPVar2;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
  bVar1 = false;
  if (pPVar2 != (PlantGroup *)0x0) {
    std::string::string(asStack_18,"PlantElectricPeel");
    PlantGroup::GetPlantOfClass(aRStack_10,pPVar2,asStack_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PeelProjectile::PeelProjectile() */

void __thiscall PeelProjectile::PeelProjectile(PeelProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069adcc0;
  *(undefined ***)(this + 0x10) = &PTR__PeelProjectile_069adeb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c8));
  DVec3::DVec3((DVec3 *)(this + 0x1d0));
  Set8BytesTo0(this + 0x1f8);
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x208));
  return;
}


/* PeelProjectile::StaticNew() */

PeelProjectile * PeelProjectile::StaticNew(void)

{
  PeelProjectile *this;
  
  this = ::operator_new(0x230);
  PeelProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::electrifyWaterTiles() */

void __thiscall PeelProjectile::electrifyWaterTiles(PeelProjectile *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  SexyVector3 *pSVar4;
  undefined8 *puVar5;
  GridItemElectricTile *this_00;
  RtObject *this_01;
  GridItemElectricTile *this_02;
  Board *this_03;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = RealObject::IsOnWaterTile((RealObject *)this,pSVar4);
  if (cVar1 != '\0') {
    bVar3 = false;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar7 = *(undefined4 *)(this + 0x1c);
    uVar6 = FUN_04d36338(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
    local_28 = CONCAT44(uVar7,uVar6);
    EntityFinder::GetEntitiesTouchingPoint
              (avStack_20,4,(__normal_iterator *)&local_28,0xffffffff,0xffffffff);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<GridItemElectricTile>((RtObject *)*puVar5), bVar2)) {
        bVar3 = true;
        nop();
        GridItemElectricTile::ResetTimer(this_00,*(float *)(this + 0x1ec));
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    if (!bVar3) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      RealObject::CalcGridPosition();
      if ((((this_03 != (Board *)0x0) &&
           (cVar1 = FUN_04d361f8(this_03 + 0xf8,this_03 + 0xfc,(__normal_iterator *)&local_28),
           cVar1 != '\0')) &&
          (this_01 = (RtObject *)
                     Board::AddGridItem(this_03,(string *)(this + 0x1f8),(int)local_28,
                                        local_28._4_4_,1), this_01 != (RtObject *)0x0)) &&
         (bVar3 = Sexy::RtObject::IsA<GridItemElectricTile>(this_01), bVar3)) {
        nop();
        GridItemElectricTile::InitializeProperties
                  (this_02,*(float *)(this + 0x1ec),*(float *)(this + 500),*(float *)(this + 0x1f0))
        ;
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::onUpdate(float) */

void PeelProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float local_4c [3];
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetInstigator(in_x0);
  if (lVar1 == 0) {
    (**(code **)(*(long *)in_x0 + 0x48))();
    goto LAB_04d39c5c;
  }
  if (in_x0[0x200] == (Projectile)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)in_x0);
    fVar4 = pfVar2[1];
    Sexy::FastCurve::SetOutRange(aFStack_40,*pfVar2,fVar4);
    local_38 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)aFStack_40,(SexyVector2 *)(in_x0 + 0x1c0));
    local_34 = fVar4;
    local_30 = Sexy::SexyVector2::operator-
                         ((SexyVector2 *)aFStack_40,(SexyVector2 *)(in_x0 + 0x1c8));
    local_2c = fVar4;
    fVar4 = (float)DVec2::getLength((DVec2 *)&local_38);
    if (in_x0[0x1a5] == (Projectile)0x0) {
      fVar3 = (float)DVec2::dot((DVec2 *)&local_38,(DVec2 *)&local_30);
      if ((fVar3 < 0.0) && (fVar3 = 1.0, 1.0 < fVar4)) goto LAB_04d39ce8;
      in_x0[0x1a5] = (Projectile)0x1;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
                ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  *)(in_x0 + 0x1a8));
      if (in_x0[0x1a5] != (Projectile)0x0) goto LAB_04d39ce4;
      fVar5 = *(float *)(in_x0 + 0x1e0);
      fVar3 = 1.0;
      if (fVar5 < fVar4) goto LAB_04d39dbc;
LAB_04d39cf4:
      local_4c[0] = fVar4 / fVar5;
      fVar4 = 1.0 - local_4c[0];
    }
    else {
LAB_04d39ce4:
      fVar3 = -1.0;
LAB_04d39ce8:
      fVar5 = *(float *)(in_x0 + 0x1e0);
      if (fVar4 <= fVar5) goto LAB_04d39cf4;
LAB_04d39dbc:
      fVar4 = 0.0;
      local_4c[0] = 1.0;
    }
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x1d0),fVar3);
    uVar6 = 0x3f800000;
    local_4c[1] = 1.0;
    local_24 = fVar5;
    local_4c[2] = CurveLerp<float>(local_4c + 1,in_x0 + 0x1e4,1);
    pfVar2 = eastl::max_alt<float>(local_4c,local_4c + 2);
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,*pfVar2);
    local_14 = uVar6;
    local_10 = fVar4;
    Projectile::SetVelocity(in_x0,(SexyVector3 *)&local_18);
  }
  electrifyWaterTiles((PeelProjectile *)in_x0);
LAB_04d39c5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeelProjectile::SetInLevel5Boost(float, ZombieRestrictionSet) */

void __thiscall
PeelProjectile::SetInLevel5Boost
          (undefined4 param_1,PeelProjectile *this,ZombieRestrictionSet *param_3)

{
  *(undefined4 *)(this + 0x204) = param_1;
  this[0x200] = (PeelProjectile)0x1;
  ZombieRestrictionSet::operator=((ZombieRestrictionSet *)(this + 0x208),param_3);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d3b660 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PeelProjectile::doEntangle(BoardEntity*) */

void __thiscall PeelProjectile::doEntangle(PeelProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  ComponentRunner *pCVar2;
  string *psVar3;
  RtObject *this_01;
  PowerPropsDamageRadius *pPVar4;
  long lVar5;
  ComponentDamageRadius *this_02;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_170 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_168 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_160 [8];
  string asStack_158 [8];
  DamageInfo aDStack_150 [8];
  float local_148;
  undefined8 local_140;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [160];
  PlantPhatBeetTossSystem aPStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  cVar1 = isValidTarget(this,this_00);
  if (cVar1 != '\0') {
    DamageInfo::DamageInfo(aDStack_150);
    local_148 = (float)Projectile::GetDamageAmount((Projectile *)this);
    local_148 = local_148 * 1.5;
    local_140 = FUN_04d361d0(*(undefined8 *)(this + 0xe0));
                    /* WARNING: Load size is inaccurate */
    DamageInfo::AddCondition(*(DamageInfo **)(this + 0x204),aDStack_150,0x8b);
    (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_150);
    pCVar2 = (ComponentRunner *)BoardEntity::GetComponentRunner((BoardEntity *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_160,(RtWeakPtrBase *)aRStack_168);
    std::string::string(asStack_158,"EelEntangleRadius");
    ComponentRunner::Add<ComponentLightingDamageRadius>(pCVar2,aRStack_160,asStack_158,pCVar2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_170,(RtWeakPtrBase *)aRStack_f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
    std::string::~string(asStack_158);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_160);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_168);
    psVar3 = (string *)
             Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::GetInstancePtr();
    std::string::string((string *)aRStack_160,"ElectricPeelDamageLvl1");
    ObjectTypeDirectory<PowerPropertySheet>::GetTypeFromTypeName(psVar3);
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_158)
    ;
    pPVar4 = Sexy::RtObject::Cast<PowerPropsDamageRadius>(this_01);
    ComponentDamageRadiusProps::ComponentDamageRadiusProps
              ((ComponentDamageRadiusProps *)aRStack_f0,
               (ComponentDamageRadiusProps *)(pPVar4 + 0x18));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_158);
    std::string::~string((string *)aRStack_160);
    nop();
    fVar6 = (float)Projectile::GetDamageAmount((Projectile *)this);
    PlantPhatBeetTossSystem::setStunTime(aPStack_50,fVar6);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_170);
    FUN_04d361e8(*(undefined4 *)(this + 0x204),lVar5 + 0x208);
    this_02 = (ComponentDamageRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_170)
    ;
    ComponentDamageRadius::SetRadiusProps(this_02,(ComponentDamageRadiusProps *)aRStack_f0);
    ComponentDamageRadiusProps::~ComponentDamageRadiusProps
              ((ComponentDamageRadiusProps *)aRStack_f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_170);
    DamageInfo::~DamageInfo(aDStack_150);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeelProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall PeelProjectile::OnCollideEntity(PeelProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantGroup *this_01;
  PlantElectricPeel *this_02;
  ZombieChicken *this_03;
  BoardEntity *pBVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Effect_PopAnim *this_04;
  PopAnim *pPVar8;
  RtObject *this_05;
  Plant *pPVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    cVar2 = '\0';
    goto LAB_04d3b82c;
  }
  this_01 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
  if (this_01 != (PlantGroup *)0x0) {
    if (this[0x1a5] == (PeelProjectile)0x0) {
LAB_04d3b7d0:
      std::string::string((string *)&local_18,"PlantElectricPeel");
      PlantGroup::GetPlantOfClass(&local_20,this_01,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
LAB_04d3b810:
      cVar2 = false;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
      if (!bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        goto LAB_04d3b90c;
      }
    }
    else {
      pBVar4 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
      cVar2 = PlantGroup::HasPlant(this_01,pBVar4);
      if (cVar2 == '\0') goto LAB_04d3b7d0;
      std::string::string((string *)&local_18,"PlantElectricPeel");
      PlantGroup::GetPlantOfClass((RtWeakPtr *)&local_20,this_01,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      cVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
      if (!(bool)cVar2) goto LAB_04d3b810;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      nop();
      PlantElectricPeel::OnProjectileReturned(this_02,this,true);
      (**(code **)(*(long *)this + 0x48))(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    goto LAB_04d3b82c;
  }
LAB_04d3b90c:
  this_03 = Sexy::RtObject::Cast<ZombieChicken>((RtObject *)param_1);
  if (this_03 != (ZombieChicken *)0x0) {
    cVar2 = '\0';
    pBVar4 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
    Zombie::TakeFatalDamage((Zombie *)this_03,pBVar4);
    goto LAB_04d3b82c;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar5,uVar6,aRStack_30);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  cVar2 = '\0';
  if (bVar1) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_30);
    if (this[0x200] != (PeelProjectile)0x0) {
      cVar2 = doEntangle(this,param_1);
      if (cVar2 != '\0') {
        this_05 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
        pPVar9 = Sexy::RtObject::Cast<Plant>(this_05);
        if (pPVar9 != (Plant *)0x0) {
          (**(code **)(*(long *)this + 0x48))(this);
        }
        goto LAB_04d3b9b0;
      }
    }
    Projectile::playSound((Projectile *)this,param_1);
    cVar2 = '\0';
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    (**(code **)(*(long *)this + 0x168))(this,param_1);
    puVar7 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_10 = *(undefined4 *)(puVar7 + 1);
    local_18._4_4_ = (float)((ulong)*puVar7 >> 0x20);
    local_18 = CONCAT44(local_18._4_4_ - 30.0,(int)*puVar7);
    this_04 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    iVar3 = (**(code **)(*(long *)this + 200))(this);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_04,(SexyVector3 *)&local_18,iVar3 + -1);
    std::string::string(asStack_28,"POPANIM_EFFECTS_ELECTRICPEEL_FX");
    GetPAMByName(asStack_28);
    pPVar8 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Effect_PopAnim::CreatePopAnimRig(this_04,pPVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::string::~string(asStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_04,true);
    std::string::string((string *)&local_20,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_04,(__normal_iterator *)&local_20,0);
    std::string::~string((string *)&local_20);
    nop();
  }
LAB_04d3b9b0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
LAB_04d3b82c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PeelProjectile::~PeelProjectile() */

void __thiscall PeelProjectile::~PeelProjectile(PeelProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069adcc0;
  *(undefined ***)(this + 0x10) = &PTR__PeelProjectile_069adeb0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x208));
  std::string::~string((string *)(this + 0x1f8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PeelProjectile::~PeelProjectile() */

void __thiscall PeelProjectile::~PeelProjectile(PeelProjectile *this)

{
  ~PeelProjectile(this + -0x10);
  return;
}


/* PeelProjectile::~PeelProjectile() */

void __thiscall PeelProjectile::~PeelProjectile(PeelProjectile *this)

{
  ~PeelProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PeelProjectile::~PeelProjectile() */

void __thiscall PeelProjectile::~PeelProjectile(PeelProjectile *this)

{
  ~PeelProjectile(this + -0x10);
  return;
}

