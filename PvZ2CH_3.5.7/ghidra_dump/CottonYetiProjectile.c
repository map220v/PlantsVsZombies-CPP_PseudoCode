// Class: CottonYetiProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiProjectile::StaticClassInit() */

void CottonYetiProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CottonYetiProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04916680,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CottonYetiProjectile::StaticGetClass() */

long * CottonYetiProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CottonYetiProjectile::GetClass() const */

long * CottonYetiProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CottonYetiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CottonYetiProjectile::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall CottonYetiProjectile::SetOwner(CottonYetiProjectile *this,RtWeakPtr *param_2)

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
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8);
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
    *(float *)(this + 0x1b0) = fVar3 * fVar2 * fVar4 * fVar5;
  }
  return;
}


/* CottonYetiProjectile::CottonYetiProjectile() */

void __thiscall CottonYetiProjectile::CottonYetiProjectile(CottonYetiProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690f260;
  *(undefined ***)(this + 0x10) = &PTR__CottonYetiProjectile_0690f458;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* CottonYetiProjectile::StaticNew() */

CottonYetiProjectile * CottonYetiProjectile::StaticNew(void)

{
  CottonYetiProjectile *this;
  
  this = ::operator_new(0x1d0);
  CottonYetiProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiProjectile::onProjectileInitialized() */

void __thiscall CottonYetiProjectile::onProjectileInitialized(CottonYetiProjectile *this)

{
  int iVar1;
  ProfileMgr *this_00;
  string *psVar2;
  PopAnimRig *pPVar3;
  bool bVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  *(undefined4 *)(this + 0x1b0) = 0x3f800000;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar2 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  if (psVar2 != (string *)0x0) {
    std::string::string(asStack_58,"cottonyeti");
    iVar1 = PlayerInfo::GetPlantAvatar(psVar2,SUB81(asStack_58,0));
    std::string::~string(asStack_58);
    nop();
    if (iVar1 == 0) {
      pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string(asStack_58,"custom_02");
      bVar4 = true;
      goto LAB_04917038;
    }
  }
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"custom_02");
  bVar4 = false;
LAB_04917038:
  PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,bVar4);
  std::string::~string(asStack_58);
  nop();
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"a");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CottonYetiProjectile::~CottonYetiProjectile() */

void __thiscall CottonYetiProjectile::~CottonYetiProjectile(CottonYetiProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690f260;
  *(undefined ***)(this + 0x10) = &PTR__CottonYetiProjectile_0690f458;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CottonYetiProjectile::~CottonYetiProjectile() */

void __thiscall CottonYetiProjectile::~CottonYetiProjectile(CottonYetiProjectile *this)

{
  ~CottonYetiProjectile(this + -0x10);
  return;
}


/* CottonYetiProjectile::~CottonYetiProjectile() */

void __thiscall CottonYetiProjectile::~CottonYetiProjectile(CottonYetiProjectile *this)

{
  ~CottonYetiProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CottonYetiProjectile::~CottonYetiProjectile() */

void __thiscall CottonYetiProjectile::~CottonYetiProjectile(CottonYetiProjectile *this)

{
  ~CottonYetiProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiProjectile::dealAreaDamage(float) */

void __thiscall CottonYetiProjectile::dealAreaDamage(CottonYetiProjectile *this,float param_1)

{
  RtWeakPtr *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string *psVar7;
  PlantType *this_04;
  long extraout_x0;
  long lVar8;
  undefined8 *puVar9;
  GridItem *this_05;
  Zombie *this_06;
  ResourceInfo *pRVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  RtObject *this_07;
  Plant *pPVar15;
  code *pcVar16;
  ulong uVar17;
  float fVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  Point aPStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [12];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_68,"Play_Plant_Squash_Impact");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)local_68,0.0);
  std::string::~string((string *)local_68);
  nop();
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  std::string::string((string *)local_68,"cottonyeti");
  iVar3 = PlayerInfo::GetPlantStarLevel(this_03,(string *)local_68,false);
  iVar3 = iVar3 + -1;
  std::string::~string((string *)local_68);
  nop();
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)local_68,"cottonyeti");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  std::string::~string((string *)local_68);
  nop();
  this_04 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
  PlantType::GetProps(this_04);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_07 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pPVar15 = Sexy::RtObject::Cast<Plant>(this_07);
    if (pPVar15 != (Plant *)0x0) {
      iVar3 = FUN_0491599c(*(undefined4 *)(pPVar15 + 0x50));
      iVar3 = iVar3 + -1;
    }
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar17 = 0;
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0x18));
  uVar5 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0x1c));
  uVar6 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar6,uVar4,
             uVar5);
  uVar12 = local_80;
  lVar8 = FUN_04915a68(local_80,local_78);
  if (lVar8 != 0) {
    do {
      FUN_04915a74(uVar12,uVar17);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      puVar9 = (undefined8 *)FUN_04915a74(local_80,uVar17);
      this_05 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
      puVar9 = (undefined8 *)FUN_04915a74(local_80,uVar17);
      this_06 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
      cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar10);
      if ((cVar2 == '\0') ||
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98), cVar2 == '\0')) {
LAB_04917bac:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      else {
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_01);
        uVar13 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_01);
        local_88 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                             (uVar12,uVar13,aRStack_98);
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_01);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
        if ((bVar1) ||
           ((this_05 != (GridItem *)0x0 &&
            (bVar1 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_05), bVar1))))
        goto LAB_04917bac;
        if (this_06 == (Zombie *)0x0) {
          plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          pcVar16 = *(code **)(*plVar14 + 0x110);
          pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)param_1,(undefined4)local_88,local_88._4_4_,(string *)local_68,
                     0x1000000000000,pRVar10,aPStack_90,0);
          (*pcVar16)(plVar14,(string *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        else {
          cVar2 = (**(code **)(*(long *)this_06 + 0x328))(this_06);
          if ((((cVar2 != '\0') ||
               (cVar2 = (**(code **)(*(long *)this_06 + 0x330))(this_06), cVar2 != '\0')) ||
              (cVar2 = Zombie::IsControlled(this_06), cVar2 != '\0')) ||
             (cVar2 = Zombie::IsInvisible(this_06), cVar2 != '\0')) goto LAB_04917bac;
          plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          pcVar16 = *(code **)(*plVar14 + 0x110);
          pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)param_1,(undefined4)local_88,local_88._4_4_,(string *)local_68,
                     0x1000000000000,pRVar10,aPStack_90,0);
          (*pcVar16)(plVar14,(string *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
          if (((iVar3 != 0) &&
              (Zombie::ApplyCondition((Zombie *)0x41200000,0,this_06,0,1), iVar3 != 1)) &&
             (fVar18 = (float)Sexy::Rand(1.0), fVar18 <= *(float *)(extraout_x0 + 0x2c4))) {
            Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_06,1,1);
          }
        }
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)this_01,(RtWeakPtr *)aRStack_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
      }
      uVar12 = local_80;
      uVar17 = uVar17 + 1;
      uVar11 = FUN_04915a68(local_80,local_78);
    } while (uVar17 < uVar11);
  }
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
/* CottonYetiProjectile::GroundTouched() */

void __thiscall CottonYetiProjectile::GroundTouched(CottonYetiProjectile *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  string *psVar6;
  PlantType *this_00;
  long extraout_x0;
  long lVar7;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  float local_28;
  float local_24;
  float local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar5);
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar5[1]);
  DVec3::DVec3((DVec3 *)&local_28);
  local_28 = *pfVar5;
  iVar3 = BoardTransforms::GridToBoardSpaceY(iVar2);
  local_20 = pfVar5[2];
  local_24 = (float)iVar3;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_28);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"cottonyeti");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_18);
  nop();
  this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  PlantType::GetProps(this_00);
  nop();
  Sexy::Rand(*(float *)(extraout_x0 + 700) * 0.1);
  fVar11 = *(float *)(extraout_x0 + 0x2b8);
  fVar9 = (float)Sexy::Rand(fVar11 * 0.1);
  lVar7 = FUN_04915a58(*(undefined8 *)(extraout_x0 + 0x70),0);
  iVar3 = *(int *)(lVar7 + 0x2c);
  fVar10 = *(float *)(this + 0x1b0);
  if (((900.0 < *(float *)(this + 0x18)) || (iVar1 == -1)) || (9 < iVar1)) {
    (**(code **)(*(long *)this + 0x48))(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  else {
    iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar1 + 2);
    local_28 = (float)iVar4;
    Projectile::LaunchAt((Projectile *)this,(SexyVector3 *)&local_28,10.0,fVar9 + fVar11);
    dealAreaDamage(this,(float)iVar3 * fVar10);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_COTTONYETI_PROJECTILE");
    GetPAMByName(asStack_30);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar8,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_30);
    nop();
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar1);
    iVar1 = BoardTransforms::GridToBoardSpaceY(iVar2);
    iVar2 = FUN_04915bd0();
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iVar3,(float)(iVar1 - iVar2),pfVar5[2]);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)asStack_18,-1);
    Effect_PopAnim::SetCentered(this_01,true);
    FUN_04915ae0(this_01 + 0x1c);
    std::string::string(asStack_18,"b");
    Effect_PopAnim::PlaySingleAnimation(this_01,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CottonYetiProjectile::onAnimStopped(std::string const&) */

void __thiscall CottonYetiProjectile::onAnimStopped(CottonYetiProjectile *this,string *param_1)

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
  bVar1 = std::operator==(param_1,"a");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_58,"a");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    GroundTouched(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

