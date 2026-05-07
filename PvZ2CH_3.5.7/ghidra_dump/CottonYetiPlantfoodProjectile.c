// Class: CottonYetiPlantfoodProjectile


/* CottonYetiPlantfoodProjectile::OnCollideRoof() */

undefined1 __thiscall
CottonYetiPlantfoodProjectile::OnCollideRoof(CottonYetiPlantfoodProjectile *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (this[0x1ec] == (CottonYetiPlantfoodProjectile)0x0) {
    this[0x1ec] = (CottonYetiPlantfoodProjectile)0x1;
    uVar1 = (**(code **)(*(long *)this + 0x118))();
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::StaticClassInit() */

void CottonYetiPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CottonYetiPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04916a00,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CottonYetiPlantfoodProjectile::StaticGetClass() */

long * CottonYetiPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CottonYetiPlantfoodProjectile::GetClass() const */

long * CottonYetiPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CottonYetiPlantfoodProjectile::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
CottonYetiPlantfoodProjectile::SetOwner(CottonYetiPlantfoodProjectile *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  long extraout_x0;
  long extraout_x0_00;
  Plant *this_01;
  long extraout_x0_01;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1d0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar2 = (float)FUN_04915a38(*(undefined4 *)(extraout_x0 + 0xf4),
                                *(undefined4 *)(extraout_x0 + 0x100),
                                *(undefined4 *)(extraout_x0 + 0x104),
                                *(undefined4 *)(extraout_x0 + 0x3b8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar3 = (float)FUN_04915a48(*(undefined4 *)(extraout_x0_00 + 0x3bc));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar4 = (float)Plant::GetExtraDPSmodifier(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    fVar5 = (float)FUN_04915a4c(*(undefined4 *)(extraout_x0_01 + 0x424));
    *(float *)(this + 0x1d8) = fVar3 * fVar2 * fVar4 * fVar5;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::onProjectileInitialized() */

void __thiscall
CottonYetiPlantfoodProjectile::onProjectileInitialized(CottonYetiPlantfoodProjectile *this)

{
  int iVar1;
  ProfileMgr *this_00;
  string *psVar2;
  PopAnimRig *this_01;
  bool bVar3;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1d8) = 0x3f800000;
  this[0x1dc] = (CottonYetiPlantfoodProjectile)0x0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1e0) = 0;
  this[0x1ec] = (CottonYetiPlantfoodProjectile)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar2 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  if (psVar2 != (string *)0x0) {
    std::string::string(asStack_10,"cottonyeti");
    iVar1 = PlayerInfo::GetPlantAvatar(psVar2,SUB81(asStack_10,0));
    std::string::~string(asStack_10);
    nop();
    if (iVar1 == 0) {
      this_01 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_10,"custom_02");
      bVar3 = true;
      goto LAB_04916060;
    }
  }
  this_01 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_02");
  bVar3 = false;
LAB_04916060:
  PopAnimRig::SetLayerVisibility(this_01,asStack_10,bVar3);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CottonYetiPlantfoodProjectile::CottonYetiPlantfoodProjectile() */

void __thiscall
CottonYetiPlantfoodProjectile::CottonYetiPlantfoodProjectile(CottonYetiPlantfoodProjectile *this)

{
  CottonYetiProjectile::CottonYetiProjectile((CottonYetiProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690f490;
  *(undefined ***)(this + 0x10) = &PTR__CottonYetiPlantfoodProjectile_0690f688;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e4));
  return;
}


/* CottonYetiPlantfoodProjectile::StaticNew() */

CottonYetiPlantfoodProjectile * CottonYetiPlantfoodProjectile::StaticNew(void)

{
  CottonYetiPlantfoodProjectile *this;
  
  this = ::operator_new(0x1f0);
  CottonYetiPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::onAnimStopped(std::string const&) */

void __thiscall
CottonYetiPlantfoodProjectile::onAnimStopped(CottonYetiPlantfoodProjectile *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"d");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"e");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"f");
      if (bVar1) {
        if (this[0x1dc] == (CottonYetiPlantfoodProjectile)0x0) {
          pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          std::string::string(asStack_58,"d");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_60,"onAnimStopped");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_68,asStack_60);
          PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_60);
        }
        else {
          pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
          std::string::string(asStack_58,"e");
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
          std::string::string(asStack_60,"onAnimStopped");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_68,asStack_60);
          PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_60);
        }
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
        nop();
      }
      goto LAB_04916290;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_04916290:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::OnCollideGround() */

void __thiscall CottonYetiPlantfoodProjectile::OnCollideGround(CottonYetiPlantfoodProjectile *this)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,0.0,0.0,0.0);
  Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)&local_60);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,0.0,0.0,0.0);
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_60);
  DVec3::DVec3((DVec3 *)&local_60);
  iVar1 = BoardTransforms::GridToBoardSpaceX((int)*(float *)(this + 0x1e4));
  local_60 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY((int)*(float *)(this + 0x1e8));
  iVar2 = FUN_04915bd0();
  local_5c = (float)(iVar1 - iVar2);
  local_58 = 0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    local_58 = Board::calculateRoofOffsetZ(local_60);
  }
  (**(code **)(*(long *)this + 0x78))(this,(Vec3 *)&local_60);
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_68,"f");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             asStack_70);
  PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile() */

void __thiscall
CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile(CottonYetiPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690f490;
  *(undefined ***)(this + 0x10) = &PTR__CottonYetiPlantfoodProjectile_0690f688;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  CottonYetiProjectile::~CottonYetiProjectile((CottonYetiProjectile *)this);
  return;
}


/* non-virtual thunk to CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile() */

void __thiscall
CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile(CottonYetiPlantfoodProjectile *this)

{
  ~CottonYetiPlantfoodProjectile(this + -0x10);
  return;
}


/* CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile() */

void __thiscall
CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile(CottonYetiPlantfoodProjectile *this)

{
  ~CottonYetiPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile() */

void __thiscall
CottonYetiPlantfoodProjectile::~CottonYetiPlantfoodProjectile(CottonYetiPlantfoodProjectile *this)

{
  ~CottonYetiPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::dealAreaDamage() */

void __thiscall CottonYetiPlantfoodProjectile::dealAreaDamage(CottonYetiPlantfoodProjectile *this)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  string *psVar7;
  PlantType *this_00;
  long extraout_x0;
  long lVar8;
  undefined8 *puVar9;
  GridItem *this_01;
  Zombie *this_02;
  ResourceInfo *pRVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  DamageInfo *pDVar21;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Plant_Squash_Impact_Nitro");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"cottonyeti");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  std::string::~string(asStack_68);
  nop();
  this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
  PlantType::GetProps(this_00);
  nop();
  lVar8 = FUN_04915a58(*(undefined8 *)(extraout_x0 + 0x70),1);
  iVar4 = *(int *)(this + 0x1e0);
  pDVar21._0_4_ = (DamageInfo *)((float)*(int *)(lVar8 + 0x2c) * *(float *)(this + 0x1d8));
  if (0 < iVar4) {
    uVar1 = (iVar4 - 4U >> 2) + 1;
    iVar5 = uVar1 * 4;
    if (iVar4 - 1U < 0xc) {
      iVar13 = 1;
    }
    else {
      auVar18 = NEON_fmov(0x3f800000,4);
      uVar14 = 0;
      auVar20 = NEON_fmov(0x3f000000,4);
      do {
        uVar14 = uVar14 + 1;
        auVar19._0_4_ = auVar18._0_4_ * auVar20._0_4_;
        auVar19._4_4_ = auVar18._4_4_ * auVar20._4_4_;
        auVar19._8_4_ = auVar18._8_4_ * auVar20._8_4_;
        auVar19._12_4_ = auVar18._12_4_ * auVar20._12_4_;
        auVar18 = auVar19;
      } while (uVar14 < uVar1);
      iVar13 = iVar5 + 1;
      pDVar21._0_4_ =
           (DamageInfo *)
           (auVar19._0_4_ * auVar19._4_4_ * (float)pDVar21._0_4_ * auVar19._8_4_ * auVar19._12_4_);
      if (iVar5 == iVar4) goto LAB_0491746c;
    }
    pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5);
    if (((((iVar13 + 1 <= iVar4) &&
          (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 2 <= iVar4)) &&
         (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 3 <= iVar4)) &&
        ((((pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 4 <= iVar4 &&
           (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 5 <= iVar4)) &&
          ((pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 6 <= iVar4 &&
           ((pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 7 <= iVar4 &&
            (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 8 <= iVar4))))))
         && (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 9 <= iVar4)))) &&
       ((pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 10 <= iVar4 &&
        (pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5), iVar13 + 0xb <= iVar4)))) {
      pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 0.5);
    }
  }
LAB_0491746c:
  uVar16 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0x18));
  iVar5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0x1c));
  uVar6 = operator|(2,4);
  Sexy::Insets::Insets((Insets *)asStack_68,iVar4 + -1,iVar5 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar6,
             asStack_68);
  uVar17 = local_80;
  lVar8 = FUN_04915a68(local_80,local_78);
  if (lVar8 != 0) {
    do {
      FUN_04915a74(uVar17,uVar16);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      puVar9 = (undefined8 *)FUN_04915a74(local_80,uVar16);
      this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
      puVar9 = (undefined8 *)FUN_04915a74(local_80,uVar16);
      this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar10);
      if (((cVar2 == '\0') ||
          (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98), cVar2 == '\0')) ||
         ((this_01 != (GridItem *)0x0 &&
          (bVar3 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_01), bVar3)))) {
LAB_049175c0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        if (this_02 != (Zombie *)0x0) {
          cVar2 = (**(code **)(*(long *)this_02 + 0x328))(this_02);
          if (((cVar2 == '\0') &&
              (cVar2 = (**(code **)(*(long *)this_02 + 0x330))(this_02), cVar2 == '\0')) &&
             (cVar2 = Zombie::IsControlled(this_02), cVar2 == '\0')) {
            cVar2 = Zombie::IsInvisible(this_02);
            if (cVar2 == '\0') {
              plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
              pcVar15 = *(code **)(*plVar12 + 0x110);
              pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1d0))
              ;
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        (pDVar21._0_4_,local_88,local_84,asStack_68,0x1000000000000,pRVar10,
                         aPStack_90,0);
              (*pcVar15)(plVar12,asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
              Zombie::ApplyCondition(this_02,1,1);
              if (this[0x1dc] != (CottonYetiPlantfoodProjectile)0x0) {
                Zombie::ApplyCondition(this_02,0,1);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
                goto LAB_049175cc;
              }
            }
          }
          goto LAB_049175c0;
        }
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        pcVar15 = *(code **)(*plVar12 + 0x110);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1d0));
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar21._0_4_,local_88,local_84,asStack_68,0x1000000000000,pRVar10,aPStack_90,0);
        (*pcVar15)(plVar12,asStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
LAB_049175cc:
      uVar17 = local_80;
      uVar16 = uVar16 + 1;
      uVar11 = FUN_04915a68(local_80,local_78);
    } while (uVar16 < uVar11);
  }
  *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + 1;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiPlantfoodProjectile::onUpdate(float) */

void CottonYetiPlantfoodProjectile::onUpdate(float param_1)

{
  char cVar1;
  Projectile *in_x0;
  PopAnimRig *pPVar2;
  float *pfVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
  std::string::string(asStack_10,"d");
  cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,asStack_10);
  if (((cVar1 == '\0') || (0 < *(int *)(in_x0 + 0x1e0))) || (in_x0[0x1dc] != (Projectile)0x0)) {
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    std::string::string(asStack_10,"e");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,asStack_10);
    if (((cVar1 == '\0') || (2 < *(int *)(in_x0 + 0x1e0))) || (in_x0[0x1dc] == (Projectile)0x0)) {
      std::string::~string(asStack_10);
      nop();
      goto LAB_049178a8;
    }
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    fVar4 = (float)PopAnimRig::GetCurrentFrameInAnimation(pPVar2);
    pfVar3 = (float *)FUN_04915a84(DAT_06b6f8d0,(long)*(int *)(in_x0 + 0x1e0));
    if (fVar4 <= *pfVar3) goto LAB_049178a8;
  }
  else {
    std::string::~string(asStack_10);
    nop();
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig(in_x0);
    fVar4 = (float)PopAnimRig::GetCurrentFrameInAnimation(pPVar2);
    if (fVar4 <= 11.0) goto LAB_049178a8;
  }
  dealAreaDamage((CottonYetiPlantfoodProjectile *)in_x0);
LAB_049178a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

