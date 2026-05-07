// Class: PlantCoconutShooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutShooter::StaticClassInit() */

void PlantCoconutShooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCoconutShooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03bebd08,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCoconutShooter::StaticGetClass() */

long * PlantCoconutShooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoconutShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCoconutShooter::GetClass() const */

long * PlantCoconutShooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoconutShooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCoconutShooter::PlantCoconutShooter() */

void __thiscall PlantCoconutShooter::PlantCoconutShooter(PlantCoconutShooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673f760;
  return;
}


/* PlantCoconutShooter::StaticNew() */

PlantCoconutShooter * PlantCoconutShooter::StaticNew(void)

{
  PlantCoconutShooter *this;
  
  this = ::operator_new(0x28);
  PlantCoconutShooter(this);
  return this;
}


/* PlantCoconutShooter::~PlantCoconutShooter() */

void __thiscall PlantCoconutShooter::~PlantCoconutShooter(PlantCoconutShooter *this)

{
  *(undefined ***)this = &PTR_GetClass_0673f760;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCoconutShooter::~PlantCoconutShooter() */

void __thiscall PlantCoconutShooter::~PlantCoconutShooter(PlantCoconutShooter *this)

{
  ~PlantCoconutShooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutShooter::FindClosetTarget(PlantWeapon, bool) */

void PlantCoconutShooter::FindClosetTarget
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  RealObject *this;
  ulong uVar8;
  Insets *pIVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  RtObject *this_00;
  int iVar13;
  float fVar14;
  undefined4 local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Insets aIStack_40 [16];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  local_4c = 0;
  if (param_4 == '\0') {
    operator|=(&local_4c,4);
  }
  else {
    operator|=(&local_4c,2);
  }
  if (*(code **)(*param_2 + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*param_2 + 400))(param_2,param_3);
  }
  uVar11 = 0;
  iVar13 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2[2]);
  iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar5);
  Sexy::Insets::Insets
            (aIStack_40,*(int *)(param_2[2] + 0x114),*(int *)(param_2[2] + 0x110) + -1,0x12 - iVar4,
             3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,local_4c,
             aIStack_40);
  uVar12 = local_20;
  lVar6 = FUN_03bebbc0(local_20,local_18);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_03bebbcc(uVar12,uVar11);
      this_00 = (RtObject *)*puVar7;
      nop();
      if (this == (RealObject *)0x0) {
LAB_03bec198:
        bVar2 = Sexy::RtObject::IsA<GridItem>(this_00);
        if (bVar2) {
          puVar7 = (undefined8 *)FUN_03bebbcc(local_20,uVar11);
          pIVar9 = (Insets *)(**(code **)(*(long *)*puVar7 + 0x178))((long *)*puVar7);
          Sexy::Insets::Insets((Insets *)local_30,pIVar9);
          iVar4 = -local_30[0];
          cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_1);
          if ((cVar1 != '\0') || (iVar13 < iVar4)) {
            FUN_03bebbcc(local_20,uVar11);
            goto LAB_03bec20c;
          }
        }
      }
      else {
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        if (cVar1 == '\0') {
          puVar7 = (undefined8 *)FUN_03bebbcc(local_20,uVar11);
          this_00 = (RtObject *)*puVar7;
          goto LAB_03bec198;
        }
        cVar1 = (**(code **)(*(long *)this + 0x328))(this);
        if ((cVar1 == '\0') &&
           (cVar1 = RealObject::IsOnOpposingTeam(this,(RealObject *)param_2[2]), cVar1 != '\0')) {
          pcVar10 = *(code **)(*param_2 + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_48);
          cVar1 = (*pcVar10)(param_2,(RtMixedPtrBase *)local_30,param_3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          if (cVar1 == '\0') goto LAB_03bebfdc;
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          fVar14 = *pfVar5;
          lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if (*(float *)(lVar6 + 0x10) < fVar14) goto LAB_03bebfdc;
          pcVar10 = *(code **)(*(long *)this + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_48);
          cVar1 = (*pcVar10)(this,(RtMixedPtrBase *)local_30,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          if ((cVar1 == '\0') ||
             (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar3), cVar1 == '\0'))
          goto LAB_03bebfdc;
          pIVar9 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
          Sexy::Insets::Insets((Insets *)local_30,pIVar9);
          iVar4 = -local_30[0];
          cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_1);
          if ((cVar1 == '\0') && (iVar4 <= iVar13)) goto LAB_03bebfdc;
LAB_03bec20c:
          iVar13 = iVar4;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        }
      }
LAB_03bebfdc:
      uVar12 = local_20;
      uVar11 = uVar11 + 1;
      uVar8 = FUN_03bebbc0(local_20,local_18);
    } while (uVar11 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutShooter::FindTargetAndFire(PlantWeapon) */

void PlantCoconutShooter::FindTargetAndFire(long *param_1)

{
  long extraout_x0;
  undefined8 uVar1;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindClosetTarget(aRStack_10,param_1,0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 == 0) {
    FindClosetTarget(aRStack_10,param_1,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0_00 == 0) {
      uVar1 = 0;
      goto LAB_03bec2b0;
    }
  }
  (**(code **)(*param_1 + 0x1a0))(param_1);
  uVar1 = 1;
LAB_03bec2b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutShooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantCoconutShooter::Fire(long *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Projectile *this;
  long *extraout_x0;
  SexyTransform2D *pSVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  Board *pBVar12;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined8 local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (cVar1 != '\0') goto LAB_03bec354;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  lVar2 = FUN_03bebbb0(*(undefined8 *)(lVar2 + 0x70),(long)*(int *)(param_1[2] + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
  if (cVar1 != '\0') {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1[2]);
    fVar10 = *pfVar3;
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar6 = param_1[2];
    lVar2 = FUN_03bebbb0(*(undefined8 *)(lVar2 + 0x70),(long)*(int *)(lVar6 + 0x150));
    pBVar12._0_4_ = (Board *)(fVar10 + *(float *)(lVar2 + 0x68) * *(float *)(lVar6 + 0xc4));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1[2]);
    fVar11 = *(float *)(lVar2 + 4);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar6 = param_1[2];
    lVar2 = FUN_03bebbb0(*(undefined8 *)(lVar2 + 0x70),(long)*(int *)(lVar6 + 0x150));
    fVar9 = -(*(float *)(lVar2 + 0x6c) * *(float *)(lVar6 + 0xc4));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
    fVar10 = fVar11;
    this = (Projectile *)
           Board::AddProjectile
                     (pBVar12._0_4_,uVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1[2],0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (this != (Projectile *)0x0) {
      Sexy::SexyTransform2D::SexyTransform2D(local_30);
      FindClosetTarget((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1,0,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (extraout_x0 == (long *)0x0) {
        FindClosetTarget((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        if (this_00 ==
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) goto LAB_03bec3d8;
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        uVar7 = *puVar5;
        local_40._4_4_ = (float)((ulong)uVar7 >> 0x20);
        local_38 = *(float *)(puVar5 + 1);
        local_40._0_4_ = (float)uVar7;
        fVar11 = local_40._4_4_ - fVar11;
        fVar10 = (float)local_40 - (float)pBVar12._0_4_;
        local_40 = uVar7;
        fVar10 = atan2f(fVar11,fVar10);
        pSVar4 = (SexyTransform2D *)FUN_03bebba8(-fVar10,this + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar4,-fVar10);
      }
      else {
        fVar8 = (float)(**(code **)(*extraout_x0 + 0x3b0))(0x3f000000,extraout_x0);
        local_40 = CONCAT44(fVar10,fVar8);
        local_38 = fVar9;
        fVar10 = atan2f(fVar10 - fVar11,fVar8 - (float)pBVar12._0_4_);
        pSVar4 = (SexyTransform2D *)FUN_03bebba8(-fVar10,this + 0xc4);
        Sexy::SexyTransform2D::CreateRotation(pSVar4,-fVar10);
      }
      Projectile::ApplyRotationToVelocity((SexyTransform2D *)this);
      Projectile::LaunchAt(this,(SexyVector3 *)&local_40,0.0,0.5);
    }
  }
LAB_03bec3d8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
LAB_03bec354:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutShooter::Initialize() */

void __thiscall PlantCoconutShooter::Initialize(PlantCoconutShooter *this)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  Board *pBVar4;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"oakshooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Board::LoadResourceGroupForGameplay(pBVar4,(string *)(lVar3 + 0x10));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Board::LoadResourceGroupsForGameplay(pBVar4,(vector *)(lVar3 + 0x80));
  }
  PlantFramework::Initialize((PlantFramework *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

