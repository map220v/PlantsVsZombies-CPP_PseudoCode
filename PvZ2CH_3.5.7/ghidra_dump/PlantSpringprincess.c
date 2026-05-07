// Class: PlantSpringprincess


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::StaticClassInit() */

void PlantSpringprincess::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSpringprincess");
    (*pcVar2)(plVar1,asStack_10,FUN_0400216c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpringprincess::StaticGetClass() */

long * PlantSpringprincess::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpringprincess",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpringprincess::GetClass() const */

long * PlantSpringprincess::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpringprincess",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpringprincess::~PlantSpringprincess() */

void __thiscall PlantSpringprincess::~PlantSpringprincess(PlantSpringprincess *this)

{
  *(undefined ***)this = &PTR_GetClass_067b3b50;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSpringprincess::~PlantSpringprincess() */

void __thiscall PlantSpringprincess::~PlantSpringprincess(PlantSpringprincess *this)

{
  ~PlantSpringprincess(this);
  AK::FreeHook(this);
  return;
}


/* PlantSpringprincess::FindTargetAndFire(PlantWeapon) */

undefined8 __thiscall
PlantSpringprincess::FindTargetAndFire(PlantSpringprincess *this,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x28);
  if (fVar4 == 0.0) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x28) = uVar2;
    cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2);
  }
  else {
    fVar3 = (float)PVZ_T();
    if (fVar3 - *(float *)(this + 0x2c) < fVar4) {
      return 0;
    }
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x28) = uVar2;
    cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*(long *)this + 0x1a0))(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::LaunchProjectileAt(SpringprincessProjectile*, Sexy::SexyVector3 const&,
   float, float) */

void __thiscall
PlantSpringprincess::LaunchProjectileAt
          (PlantSpringprincess *this,SpringprincessProjectile *param_1,SexyVector3 *param_2,
          float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = FUN_04003334(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar2 + 0x2c0);
  lVar2 = FUN_04003334(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar2 + 0x2c0));
  fVar3 = fVar3 + fVar5;
  lVar2 = FUN_04003334(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar2 + 700);
  lVar2 = FUN_04003334(*(undefined8 *)(this + 0x10));
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar2 + 700));
  fVar5 = fVar5 + fVar4;
  BoardEntity::CalcGridPosition();
  SpringprincessProjectile::SetInitialLaunchValues(param_1,fVar3,fVar5,local_c);
  Projectile::LaunchAt((Projectile *)param_1,param_2,fVar3,fVar5);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::FissionProjectile() */

void __thiscall PlantSpringprincess::FissionProjectile(PlantSpringprincess *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  Board *pBVar4;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04001e94(aRStack_18,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"SpringprincessProjectileDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName((RtName *)aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName((RtName *)aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pBVar4._0_4_ = *puVar2;
  uVar3 = *(undefined4 *)((long)puVar2 + 4);
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  uVar1 = Board::AddProjectile
                    (pBVar4._0_4_,uVar3,0x42200000,uVar1,aRStack_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::findLeftmostTargetType(BoardEntityTypeFlag, int) */

void __thiscall
PlantSpringprincess::findLeftmostTargetType
          (PlantSpringprincess *this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  code *pcVar10;
  RealObject *this_00;
  RealObject *pRVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  pRVar11 = (RealObject *)0x0;
  Sexy::Insets::Insets(aIStack_30,0,param_3,iVar4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar13 = 1e+06;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar11);
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_00 = (RealObject *)*puVar7;
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar12 = (float)FUN_04001f04(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                   *(undefined4 *)(this_00 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar12);
      if (iVar5 < iVar4) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
        if (pZVar8 == (Zombie *)0x0) {
LAB_04003b80:
          pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_00);
          if ((((pGVar9 == (GridItem *)0x0) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar9,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar9 + 0x208))(pGVar9), cVar2 != '\0')))) ||
              ((cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)pGVar9 + 0x200))(pGVar9), cVar2 != '\0')))) &&
             (fVar12 = (float)FUN_04001f04(*(undefined4 *)(this_00 + 0x18),
                                           *(undefined4 *)(this_00 + 0x1c),
                                           *(undefined4 *)(this_00 + 0x20)), fVar12 < fVar13)) {
            pRVar11 = this_00;
            fVar13 = fVar12;
          }
        }
        else {
          uVar6 = operator|(1,8);
          cVar3 = Zombie::MatchesAny(pZVar8,uVar6);
          if (cVar3 == '\0') {
            pcVar10 = *(code **)(*(long *)pZVar8 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar3 = (*pcVar10)(pZVar8,aRStack_38,0);
            if ((cVar3 != '\0') && (cVar3 = Zombie::HasCondition(pZVar8,0x27), cVar3 == '\0')) {
              cVar2 = Zombie::HasCondition(pZVar8,0x25);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar2 == '\0') goto LAB_04003b80;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::findBestTargetInRow(int) */

void PlantSpringprincess::findBestTargetInRow(int param_1)

{
  long lVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findLeftmostTargetType((PlantSpringprincess *)param_1,2,in_w1);
  if ((lVar1 == 0) &&
     (lVar1 = findLeftmostTargetType((PlantSpringprincess *)param_1,4,in_w1), lVar1 == 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::DoSpecial(int) */

void PlantSpringprincess::DoSpecial(int param_1)

{
  char cVar1;
  int iVar2;
  PlantSpringprincess *this;
  undefined8 *puVar3;
  long *extraout_x0;
  SpringprincessProjectile *this_00;
  long extraout_x0_00;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  RealObject *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  DVec3 aDStack_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (PlantSpringprincess *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar4 = 0;
  Sexy::Insets::Insets
            (aIStack_30,0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  iVar2 = FUN_04001ed0(local_20,local_18);
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string((string *)&local_40,"Play_Plant_SpringBean_Impact_Nitro");
  RealObject::PlayPositionalSound(this_02,(string *)&local_40,0.0);
  std::string::~string((string *)&local_40);
  nop();
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)FUN_04001edc(local_20,lVar4);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar3;
      if ((((this_01 !=
             (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0) && (cVar1 = RealObject::IsOnTeam(this_01,2), cVar1 != '\0')) &&
          (nop(), extraout_x0 != (long *)0x0)) &&
         (cVar1 = (**(code **)(*extraout_x0 + 0x328))(), cVar1 == '\0')) {
        DVec3::DVec3(aDStack_50);
        FissionProjectile(this);
        nop();
        puVar3 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_01);
        local_40 = *puVar3;
        local_38 = *(undefined4 *)(puVar3 + 1);
        FUN_04001e94(aRStack_58,*(undefined8 *)(this + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        PlantFramework::Rand((PlantFramework *)this,*(float *)(extraout_x0_00 + 0x1f8));
        PlantFramework::Rand((PlantFramework *)this,*(float *)(extraout_x0_00 + 500) * 0.15);
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar1 != '\0') {
          this_00[0x1d4] = (SpringprincessProjectile)0x1;
        }
        this_00[0x1d5] = (SpringprincessProjectile)0x1;
        SpringprincessProjectile::SetInitialLaunchValues(this_00,400.0,1.0,0);
        Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)&local_40,400.0,1.0);
        this_00[0x1ac] = (SpringprincessProjectile)0x1;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this_00 + 0x1c0),
                   (RtWeakPtrBase *)aRStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        this_00[0x1af] = (SpringprincessProjectile)0x1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::PlantSpringprincess() */

void __thiscall PlantSpringprincess::PlantSpringprincess(PlantSpringprincess *this)

{
  string *psVar1;
  PlantType *pPVar2;
  RtObject *pRVar3;
  SpringprincessProps *pSVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_067b3b50;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0x40a00000;
  *(undefined4 *)(this + 0x34) = 0x40a00000;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"springprincess");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pRVar3 = (RtObject *)PlantType::GetProps(pPVar2);
  pSVar4 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar3);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pSVar4 + 0x2d0);
  pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pRVar3 = (RtObject *)PlantType::GetProps(pPVar2);
  pSVar4 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar3);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(pSVar4 + 0x2c8);
  pPVar2 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pRVar3 = (RtObject *)PlantType::GetProps(pPVar2);
  pSVar4 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar3);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(pSVar4 + 0x2c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpringprincess::StaticNew() */

PlantSpringprincess * PlantSpringprincess::StaticNew(void)

{
  PlantSpringprincess *this;
  
  this = ::operator_new(0x38);
  PlantSpringprincess(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantSpringprincess::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantSpringprincess *param_4,RtWeakPtrBase *param_5,undefined4 param_6,
               undefined4 param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  SpringprincessProjectile *extraout_x0;
  SpringprincessProjectile *extraout_x0_00;
  long *plVar9;
  SpringprincessProjectile *extraout_x0_01;
  float *pfVar10;
  SpringprincessProjectile *pSVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  Plant *pPVar12;
  code *pcVar13;
  undefined4 uVar14;
  RtMixedPtrBase aRStack_68 [8];
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  vector<int,std::allocator<int>> avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pSVar11 = (SpringprincessProjectile *)0x0;
    goto LAB_040069d8;
  }
  iVar3 = FUN_04001eb8(*(undefined8 *)(param_4 + 0x10));
  if (2 < iVar3) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)avStack_38);
    lVar7 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
    ProbabilitySet<bool>::AddItem((ProbabilitySet<bool> *)avStack_38,true,*(int *)(lVar7 + 0x2b8));
    lVar7 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
    ProbabilitySet<bool>::AddItem
              ((ProbabilitySet<bool> *)avStack_38,false,100 - *(int *)(lVar7 + 0x2b8));
    cVar2 = ProbabilitySet<bool>::PickItem((ProbabilitySet<bool> *)avStack_38);
    if (cVar2 != '\0') {
      *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 3;
    }
    ProbabilitySet<bool>::~ProbabilitySet((ProbabilitySet<bool> *)avStack_38);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_38);
  local_48._0_4_ = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back(avStack_38,(int *)&local_48);
    local_48._0_4_ = (int)local_48 + 1;
  } while ((int)local_48 < 5);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar4,uVar5);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
  if (*piVar6 == 1) {
    lVar7 = *(long *)(param_4 + 0x10);
    iVar3 = FUN_04001eb8(lVar7);
    if (iVar3 != 5) goto LAB_040068c4;
    *(undefined4 *)(lVar7 + 0x150) = 1;
    bVar1 = true;
  }
  else {
    lVar7 = *(long *)(param_4 + 0x10);
LAB_040068c4:
    *(undefined4 *)(lVar7 + 0x150) = 0;
    bVar1 = false;
    param_7 = 1;
  }
  PlantFramework::FindTargetZombie(aRStack_68,param_4,param_7);
  (**(code **)(*(long *)param_4 + 0xf8))((exception_ptr *)&local_48,param_4,param_7);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  DVec3::DVec3((DVec3 *)&local_58);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  if (cVar2 == '\0') {
    if (pRVar8 == (ResourceInfo *)0x0) {
      pPVar12 = *(Plant **)(param_4 + 0x10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,param_5);
      Plant::Fire(pPVar12,(exception_ptr *)&local_48,param_6,param_7);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_4 + 0x10);
      *(undefined4 *)(this + 0x150) = 0xffffffff;
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this);
      local_54 = pfVar10[1];
      local_58 = *pfVar10 + 600.0;
      local_50 = 0;
      pSVar11 = extraout_x0_01;
    }
    else {
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_48);
      pPVar12 = *(Plant **)(param_4 + 0x10);
      *(undefined4 *)(pPVar12 + 0x150) = 0;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,param_5);
      Plant::Fire(pPVar12,(exception_ptr *)&local_48,param_6,param_7);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      local_58 = (float)local_60;
      local_54 = (float)local_5c;
      *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
      local_50 = 0x41c80000;
      pSVar11 = extraout_x0;
    }
  }
  else {
    pPVar12 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,param_5);
    Plant::Fire(pPVar12,(exception_ptr *)&local_48,param_6,param_7);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
    if (bVar1) {
      *(undefined4 *)(extraout_x0_00 + 0x1a8) = 4;
      extraout_x0_00[0x1ac] = (SpringprincessProjectile)0x1;
      extraout_x0_00[0x1ae] = (SpringprincessProjectile)0x1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(extraout_x0_00 + 0x1c0),
                 (RtWeakPtrBase *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      extraout_x0_00[0x1af] = (SpringprincessProjectile)0x1;
    }
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pcVar13 = *(code **)(*plVar9 + 0x3b0);
    lVar7 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
    uVar14 = (*pcVar13)(*(undefined4 *)(lVar7 + 700),plVar9);
    local_48 = CONCAT44(param_2,uVar14);
    local_40 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
    pSVar11 = extraout_x0_00;
  }
  LaunchProjectileAt(param_4,pSVar11,(SexyVector3 *)&local_58,0.1,0.1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
LAB_040069d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pSVar11);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpringprincess::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&, int) */

void PlantSpringprincess::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6,int param_7)

{
  char cVar1;
  SpringprincessProjectile *this;
  undefined8 uVar2;
  long lVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar4 = *(Plant **)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(pPVar4 + 0x150) = 1;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  Plant::Fire(pPVar4,aRStack_10,param_7,1);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = FUN_04001e58(*(undefined8 *)(this + 0xe0));
  uVar2 = operator|(uVar2,0x2000);
  FUN_04001e5c(this + 0xe0,uVar2);
  lVar3 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
  fVar7 = *(float *)(lVar3 + 0x2c0);
  lVar3 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
  fVar5 = (float)PlantFramework::Rand(param_4,*(float *)(lVar3 + 0x2c0));
  fVar5 = fVar5 + fVar7;
  lVar3 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
  fVar6 = *(float *)(lVar3 + 700);
  lVar3 = FUN_04003334(*(undefined8 *)(param_4 + 0x10));
  fVar7 = (float)PlantFramework::Rand(param_4,*(float *)(lVar3 + 700) * 0.15);
  fVar7 = fVar7 + fVar6;
  SpringprincessProjectile::SetInitialLaunchValues(this,fVar5,fVar7,param_7);
  Projectile::LaunchAt((Projectile *)this,(SexyVector3 *)&local_20,fVar5,fVar7);
  Projectile::SetTarget((Projectile *)this,param_6);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  if (cVar1 != '\0') {
    SpringprincessProjectile::RollProjectileStyle(this);
  }
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

