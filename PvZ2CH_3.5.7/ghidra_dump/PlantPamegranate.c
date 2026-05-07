// Class: PlantPamegranate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::StaticClassInit() */

void PlantPamegranate::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPamegranate");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff67ec,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPamegranate::StaticGetClass() */

long * PlantPamegranate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPamegranate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPamegranate::GetClass() const */

long * PlantPamegranate::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPamegranate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPamegranate::GridSquareIsInBoard(int, int) */

bool __thiscall
PlantPamegranate::GridSquareIsInBoard(PlantPamegranate *this,int param_1,int param_2)

{
  return (int)(~param_1 & (param_2 ^ 0xffffffffU)) < 0 &&
         (param_1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) &&
         param_2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
}


/* PlantPamegranate::GetTotalFireTime(PlantWeapon) */

undefined4 __thiscall PlantPamegranate::GetTotalFireTime(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f000000;
  if (param_2 != 0) {
    uVar1 = 0x3fc00000;
  }
  return uVar1;
}


/* PlantPamegranate::GetFireCountEachTarget(PlantWeapon) */

undefined4 __thiscall PlantPamegranate::GetFireCountEachTarget(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::PlayFireSound(PlantWeapon) */

void __thiscall PlantPamegranate::PlayFireSound(PlantPamegranate *this,undefined4 param_2)

{
  long lVar1;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03ff535c(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = FUN_03ff53c8(*(undefined8 *)(lVar1 + 0x70),param_2);
  FUN_05475d88(asStack_18,lVar1 + 0x50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_18,0.0);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::FireProjectileAt(PlantWeapon, Sexy::SexyVector3) */

void PlantPamegranate::FireProjectileAt(float param_1,float param_2,long param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  SexyTransform2D *this;
  SexyTransform2D *this_00;
  SexyVector3 *pSVar6;
  long lVar7;
  undefined8 uVar8;
  SexyTransform2D *pSVar9;
  float __x;
  float fVar10;
  Board *pBVar12;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined4 local_40;
  float local_3c;
  float local_38;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_4 == 1) || (param_4 == 0)) || (param_4 == 2)) {
    *(int *)(*(long *)(param_3 + 0x10) + 0x150) = param_4;
  }
  else {
    *(undefined4 *)(*(long *)(param_3 + 0x10) + 0x150) = 0;
  }
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  lVar4 = FUN_03ff53c8(*(undefined8 *)(lVar4 + 0x70),
                       (long)*(int *)(*(long *)(param_3 + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
  if (cVar1 == '\0') {
    pSVar9 = (SexyTransform2D *)0x0;
  }
  else {
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_3 + 0x10));
    fVar10 = *pfVar5;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar4 = FUN_03ff53c8(*(undefined8 *)(lVar4 + 0x70),
                         (long)*(int *)(*(long *)(param_3 + 0x10) + 0x150));
    pBVar12._0_4_ = (Board *)(fVar10 + *(float *)(lVar4 + 0x68));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(param_3 + 0x10));
    fVar11 = *(float *)(lVar4 + 4);
    fVar10 = *(float *)(lVar4 + 8);
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar7 = *(long *)(param_3 + 0x10);
    lVar4 = FUN_03ff53c8(*(undefined8 *)(lVar4 + 0x70),(long)*(int *)(lVar7 + 0x150));
    fVar10 = fVar10 - *(float *)(lVar4 + 0x6c) * *(float *)(lVar7 + 0xc4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded((int)param_1);
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded((int)param_2);
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
    Board::AddProjectile
              (pBVar12._0_4_,fVar11,uVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,
               *(undefined8 *)(param_3 + 0x10),0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pSVar9 = this;
    if (this != (SexyTransform2D *)0x0) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)iVar2,(float)iVar3);
      FUN_03ff5380(this + 0x1a8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      __x = (float)iVar2 - (float)pBVar12._0_4_;
      fVar11 = atan2f((float)iVar3 - fVar11,__x);
      this_00 = (SexyTransform2D *)FUN_03ff5340(-fVar11,this + 0xc4);
      Sexy::SexyTransform2D::CreateRotation(this_00,-fVar11);
      Projectile::ApplyRotationToVelocity(this);
      pSVar6 = (SexyVector3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
      local_40 = Sexy::SexyMatrix3::operator*(aSStack_30,pSVar6);
      local_3c = __x;
      local_38 = fVar10;
      Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)&local_40);
    }
  }
  *(undefined4 *)(*(long *)(param_3 + 0x10) + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::UpdatePushZombie() */

void __thiscall PlantPamegranate::UpdatePushZombie(PlantPamegranate *this)

{
  char cVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0x40);
    uVar2 = FUN_03ff53a0(uVar8,*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar7) break;
    pRVar3 = (RtWeakPtrBase *)FUN_03ff53d8(uVar8,uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 != '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      fVar9 = (float)PVZ_Dt();
      local_24 = 800.0;
      local_18._0_4_ = (float)local_18 + fVar9 * 180.0;
      pfVar5 = eastl::min_alt<float>((float *)&local_18,&local_24);
      local_18 = CONCAT44(local_18._4_4_,*pfVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      (**(code **)(*plVar6 + 0x78))(plVar6,&local_18);
    }
    uVar7 = uVar7 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPamegranate::PlantPamegranate() */

void __thiscall PlantPamegranate::PlantPamegranate(PlantPamegranate *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b1d20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* PlantPamegranate::StaticNew() */

PlantPamegranate * PlantPamegranate::StaticNew(void)

{
  PlantPamegranate *this;
  
  this = ::operator_new(0x70);
  PlantPamegranate(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::LaunchProjectile(PlantWeapon, Sexy::SexyVector3 const&) */

void __thiscall
PlantPamegranate::LaunchProjectile(PlantPamegranate *this,undefined4 param_2,SexyVector3 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  Projectile *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  Board *pBVar8;
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"PeaDefault");
  nop();
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_48);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_40,uVar2,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((wstring *)&local_28);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar1 != '\0') {
    FUN_03ff535c((RtName *)&local_18,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    lVar3 = FUN_03ff53c8(*(undefined8 *)(lVar3 + 0x70),param_2);
    fVar6 = *(float *)(lVar3 + 0x6c);
    fVar7 = *(float *)(lVar3 + 0x68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar5 = *(float *)(this_01 + 0xc4);
    pBVar8._0_4_ = (Board *)(*pfVar4 + fVar5 * fVar7);
    fVar6 = pfVar4[2] - fVar5 * fVar6;
    fVar5 = pfVar4[1];
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_40);
    this_00 = (Projectile *)
              Board::AddProjectile
                        (pBVar8._0_4_,fVar5,fVar6,uVar2,(RtName *)&local_18,
                         *(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)pBVar8._0_4_,fVar5,fVar6);
    local_38 = Sexy::SexyVector3::operator-(param_3,(SexyVector3 *)&local_18);
    local_34 = fVar5;
    local_30 = fVar6;
    local_18 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
    local_14 = fVar5;
    local_10 = fVar6;
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_18,300.0);
    local_24 = fVar5;
    local_20 = fVar6;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::FindTargetInGridSquare(PlantWeapon, int, int) */

void __thiscall
PlantPamegranate::FindTargetInGridSquare
          (PlantPamegranate *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Zombie *this_00;
  GridItem *this_01;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  RtObject *this_02;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 400))();
  }
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             param_3,param_4);
  uVar9 = local_20;
  lVar4 = FUN_03ff53b4(local_20,local_18);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03ff53c0(uVar9,uVar8);
      this_02 = (RtObject *)*puVar5;
      cVar1 = (**(code **)(*(long *)this_02 + 0xb8))(this_02,uVar2);
      if (cVar1 != '\0') {
        this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
        if (this_00 == (Zombie *)0x0) {
          nop();
          if (this_01 != (GridItem *)0x0) {
            if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
              fVar10 = (float)GridItem::GetHitpoints(this_01);
            }
            else {
              fVar10 = (float)(**(code **)(*(long *)this_01 + 0x1d8))();
            }
            if (((fVar10 <= 0.0) ||
                (cVar1 = (**(code **)(*(long *)this_01 + 0x200))(this_01), cVar1 == '\0')) ||
               (cVar1 = (**(code **)(*(long *)this_01 + 0x210))
                                  (this_01,*(undefined8 *)(this + 0x10)), cVar1 == '\0'))
            goto LAB_03ff64d4;
          }
LAB_03ff6610:
          uVar9 = 1;
          goto LAB_03ff64f0;
        }
        cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
        if ((cVar1 == '\0') &&
           (cVar1 = RealObject::IsOnOpposingTeam
                              ((RealObject *)this_00,*(RealObject **)(this + 0x10)), cVar1 != '\0'))
        {
          pcVar7 = *(code **)(*(long *)this + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
          cVar1 = (*pcVar7)(this,aRStack_28,param_2);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          if (cVar1 != '\0') {
            pcVar7 = *(code **)(*(long *)this_00 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
            cVar1 = (*pcVar7)(this_00,aRStack_28,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            if (cVar1 != '\0') goto LAB_03ff6610;
          }
        }
      }
LAB_03ff64d4:
      uVar9 = local_20;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_03ff53b4(local_20,local_18);
    } while (uVar8 < uVar6);
  }
  uVar9 = 0;
LAB_03ff64f0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* PlantPamegranate::~PlantPamegranate() */

void __thiscall PlantPamegranate::~PlantPamegranate(PlantPamegranate *this)

{
  *(undefined ***)this = &PTR_GetClass_067b1d20;
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPamegranate::~PlantPamegranate() */

void __thiscall PlantPamegranate::~PlantPamegranate(PlantPamegranate *this)

{
  ~PlantPamegranate(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::EndPushZombie() */

void __thiscall PlantPamegranate::EndPushZombie(PlantPamegranate *this)

{
  char cVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar5;
  ResourceInfo *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0x40);
    uVar2 = FUN_03ff53a0(uVar8,*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar7) break;
    pRVar3 = (RtWeakPtrBase *)FUN_03ff53d8(uVar8,uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      Zombie::SetIsControlled(pZVar4,false);
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(pZVar4);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
      EntityConditionTracker<Zombie,ZombieConditions>::EndCondition(pEVar5,pRVar6,0x18);
    }
    uVar7 = uVar7 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::PrivateFire(PlantWeapon) */

void __thiscall PlantPamegranate::PrivateFire(PlantPamegranate *this,undefined4 param_2)

{
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::empty(this_00);
  if (cVar1 == '\0') {
    iVar2 = FUN_03ff5394(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    iVar3 = PlantFramework::Rand((PlantFramework *)this,iVar2);
    pfVar4 = (float *)FUN_03ff53ac(*(undefined8 *)(this + 0x58),(long)iVar3);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,(float)*(int *)(*(long *)(this + 0x10) + 0x114) + *pfVar4,
               (float)*(int *)(*(long *)(this + 0x10) + 0x110) + pfVar4[1],0.0);
    FireProjectileAt(local_18,uStack_14,local_10,this,param_2);
    iVar2 = *(int *)(this + 0x2c);
    *(int *)(this + 0x2c) = iVar2 + 1;
    if (*(int *)(this + 0x28) <= iVar2 + 1) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      local_20 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_28,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_20);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::erase
                (this_00,CONCAT44(uStack_14,local_18));
      *(undefined4 *)(this + 0x2c) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPamegranate::UpdateActions() */

void __thiscall PlantPamegranate::UpdateActions(PlantPamegranate *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_03ff5394(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
  if (lVar2 != 0) {
    fVar3 = (float)PVZ_Dt();
    fVar3 = fVar3 + *(float *)(this + 0x34);
    *(float *)(this + 0x34) = fVar3;
    while (*(float *)(this + 0x30) < fVar3) {
      *(float *)(this + 0x34) = fVar3 - *(float *)(this + 0x30);
      PrivateFire(this,*(undefined4 *)(this + 0x38));
      cVar1 = std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::empty
                        ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)
                         (this + 0x58));
      if (cVar1 != '\0') break;
      fVar3 = *(float *)(this + 0x34);
    }
  }
  lVar2 = FUN_03ff53a0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
  if (lVar2 == 0) {
    return;
  }
  UpdatePushZombie(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::BeginPushZombie() */

void __thiscall PlantPamegranate::BeginPushZombie(PlantPamegranate *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,aIStack_30
            );
  uVar8 = local_20;
  lVar4 = FUN_03ff53b4(local_20,local_18);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03ff53c0(uVar8,uVar12);
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_01 != (Zombie *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        if (*pfVar6 - *pfVar7 <= 80.0) {
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_40 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                               (uVar8,uVar9,aRStack_48);
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
          if ((((!bVar1) && (cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar2 == '\0')) &&
             (((cVar2 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar2 == '\0' &&
               (cVar2 = RealObject::IsOnOpposingTeam
                                  ((RealObject *)this_01,*(RealObject **)(this + 0x10)),
               cVar2 != '\0')) && (iVar3 = Zombie::GetSizeType(this_01), iVar3 != 2)))) {
            pcVar11 = *(code **)(*(long *)this_01 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_40);
            cVar2 = (*pcVar11)(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)&local_38,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            if (cVar2 != '\0') {
              Zombie::SetIsControlled(this_01,true);
              Zombie::ApplyCondition((Zombie *)0x41200000,0,this_01,0x18,1);
              std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
              push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                        this_00,(RtWeakPtr *)aRStack_48);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
              goto LAB_03ff6fa8;
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
LAB_03ff6fa8:
      uVar8 = local_20;
      uVar12 = uVar12 + 1;
      uVar10 = FUN_03ff53b4(local_20,local_18);
    } while (uVar12 < uVar10);
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
/* PlantPamegranate::ApplyPlantfood() */

void __thiscall PlantPamegranate::ApplyPlantfood(PlantPamegranate *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  undefined4 uVar3;
  Plant *pPVar4;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar2 == 2) {
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear
              ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x58));
  }
  BeginPushZombie(this);
  pPVar4 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodStartedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar4,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar3 = 2;
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  PlayFireSound(this,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::GetAttackRectInGridSquare(PlantWeapon, std::vector<Sexy::SexyVector2,
   std::allocator<Sexy::SexyVector2> >&) */

void __thiscall
PlantPamegranate::GetAttackRectInGridSquare
          (PlantPamegranate *this,int param_2,
          vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *param_3)

{
  int iVar1;
  float fVar2;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    iVar1 = FUN_03ff5354(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    if (4 < iVar1 - 1U) goto LAB_03ff73d0;
    switch(iVar1) {
    case 1:
      Sexy::FastCurve::SetOutRange(aFStack_10,1.0,0.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,2.0,0.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,2.0,-1.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      fVar2 = 2.0;
      break;
    case 2:
      Sexy::FastCurve::SetOutRange(aFStack_10,1.0,0.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,2.0,0.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,2.0,-1.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,2.0,1.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,3.0,0.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      Sexy::FastCurve::SetOutRange(aFStack_10,3.0,-1.0);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                (param_3,(SexyVector2 *)aFStack_10);
      fVar2 = 3.0;
      break;
    default:
      goto switchD_03ff7414_caseD_3;
    }
  }
  else {
switchD_03ff7414_caseD_3:
    Sexy::FastCurve::SetOutRange(aFStack_10,1.0,0.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,2.0,0.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,2.0,-1.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,2.0,1.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,3.0,0.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,3.0,-1.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,3.0,1.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,4.0,0.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    Sexy::FastCurve::SetOutRange(aFStack_10,4.0,-1.0);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (param_3,(SexyVector2 *)aFStack_10);
    fVar2 = 4.0;
  }
  Sexy::FastCurve::SetOutRange(aFStack_10,fVar2,1.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (param_3,(SexyVector2 *)aFStack_10);
LAB_03ff73d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPamegranate::BeginFire(PlantWeapon) */

void __thiscall PlantPamegranate::BeginFire(PlantPamegranate *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  *(undefined4 *)(this + 0x38) = param_2;
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x58));
  GetAttackRectInGridSquare
            (this,param_2,
             (vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x58));
  iVar1 = GetFireCountEachTarget(this,param_2);
  *(int *)(this + 0x28) = iVar1;
  lVar2 = FUN_03ff5394(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
  fVar3 = (float)GetTotalFireTime(this,param_2);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(float *)(this + 0x30) = fVar3 / (float)(ulong)(iVar1 * lVar2);
  PrivateFire(this,*(undefined4 *)(this + 0x38));
  return;
}


/* PlantPamegranate::OnAnimCommand(std::string const&, std::string const&) */

bool PlantPamegranate::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"begin_fire");
  if (bVar1) {
    BeginFire((PlantPamegranate *)param_1,0);
    PlayFireSound((PlantPamegranate *)param_1,0);
    return true;
  }
  bVar1 = std::operator==(param_2,"push_end");
  if (!bVar1) {
    return bVar1;
  }
  EndPushZombie((PlantPamegranate *)param_1);
  return bVar1;
}


/* PlantPamegranate::onPlantfoodStarted() */

void __thiscall PlantPamegranate::onPlantfoodStarted(PlantPamegranate *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  BeginFire(this,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::FindTarget() */

void __thiscall PlantPamegranate::FindTarget(PlantPamegranate *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  FastCurve aFStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetAttackRectInGridSquare
            (this,0,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::FastCurve::SetOutRange(aFStack_28,0.0,0.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)&local_20,
             (SexyVector2 *)aFStack_28);
  uVar6 = local_20;
  lVar2 = FUN_03ff5394(local_20,local_18);
  if (lVar2 != 0) {
    do {
      pfVar3 = (float *)FUN_03ff53ac(uVar6,uVar8);
      iVar7 = (int)((float)*(int *)(*(long *)(this + 0x10) + 0x114) + *pfVar3);
      iVar5 = (int)((float)*(int *)(*(long *)(this + 0x10) + 0x110) + pfVar3[1]);
      cVar1 = GridSquareIsInBoard(this,iVar7,iVar5);
      if ((cVar1 != '\0') && (cVar1 = FindTargetInGridSquare(this,0,iVar7,iVar5), cVar1 != '\0')) {
        uVar6 = 1;
        goto LAB_03ff78b0;
      }
      uVar6 = local_20;
      uVar8 = uVar8 + 1;
      uVar4 = FUN_03ff5394(local_20,local_18);
    } while (uVar8 < uVar4);
  }
  uVar6 = 0;
LAB_03ff78b0:
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPamegranate::FindTargetAndFire(PlantWeapon) */

void PlantPamegranate::FindTargetAndFire(PlantPamegranate *param_1)

{
  char cVar1;
  int iVar2;
  PlantAnimRig_Pamegranate *pPVar3;
  code *pcVar4;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FindTarget(param_1);
  if (cVar1 != '\0') {
    pPVar3 = (PlantAnimRig_Pamegranate *)FUN_03ff6070(*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_03ff5354(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
    if (iVar2 < 2) {
      pcVar4 = *(code **)(*(long *)pPVar3 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar4)(pPVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    else {
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_Pamegranate::PlayAdvancedAttack(pPVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

