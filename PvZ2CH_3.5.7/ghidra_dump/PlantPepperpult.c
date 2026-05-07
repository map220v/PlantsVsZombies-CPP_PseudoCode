// Class: PlantPepperpult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPepperpult::StaticClassInit() */

void PlantPepperpult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPepperpult");
    (*pcVar2)(plVar1,asStack_10,FUN_040b32c8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPepperpult::StaticGetClass() */

long * PlantPepperpult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPepperpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPepperpult::GetClass() const */

long * PlantPepperpult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPepperpult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPepperpult::InGhostFireState() */

bool __thiscall PlantPepperpult::InGhostFireState(PlantPepperpult *this)

{
  int iVar1;
  
  iVar1 = FUN_040b1664(*(undefined8 *)(this + 0x10));
  return 2 < iVar1;
}


/* PlantPepperpult::PlantPepperpult() */

void __thiscall PlantPepperpult::PlantPepperpult(PlantPepperpult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d47b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* PlantPepperpult::StaticNew() */

PlantPepperpult * PlantPepperpult::StaticNew(void)

{
  PlantPepperpult *this;
  
  this = ::operator_new(0x50);
  PlantPepperpult(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x040b2760 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPepperpult::Initialize() */

void __thiscall PlantPepperpult::Initialize(PlantPepperpult *this)

{
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar1 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar1 + 0x2c8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPepperpult::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantPepperpult::launchProjectileAt
          (PlantPepperpult *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPepperpult::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantPepperpult::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantPepperpult *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6)

{
  char cVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  cVar1 = InGhostFireState(param_4);
  uVar3 = 2;
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  *(undefined4 *)(lVar4 + 0x150) = uVar3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  this = (Projectile *)
         Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_10,
                     *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = FUN_040b1640(*(undefined8 *)(this + 0xe0));
  uVar2 = operator|(uVar2,0x2000);
  FUN_040b1644(this + 0xe0,uVar2);
  launchProjectileAt(param_4,this,(SexyVector3 *)&local_20,1.0,0.15);
  Projectile::SetTarget(this,param_6);
  lVar4 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPepperpult::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPepperpult::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantPepperpult *param_4,RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7
               )

{
  float fVar1;
  char cVar2;
  Projectile *pPVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  float *pfVar6;
  undefined4 uVar7;
  RealObject *this;
  long lVar8;
  Plant *pPVar9;
  code *pcVar10;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    lVar8 = *(long *)(param_4 + 0x10);
    cVar2 = InGhostFireState(param_4);
    uVar7 = 3;
    if (cVar2 == '\0') {
      uVar7 = 0;
    }
    pPVar9 = *(Plant **)(param_4 + 0x10);
    *(undefined4 *)(lVar8 + 0x150) = uVar7;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar3 = (Projectile *)
             Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar2 == '\0') {
      if (pRVar4 == (ResourceInfo *)0x0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar6[1];
        local_20 = 0;
        local_28 = *pfVar6 + 600.0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
        local_28 = (float)local_30;
      }
    }
    else {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar10 = *(code **)(*plVar5 + 0x3b0);
      lVar8 = FUN_040b2664(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar10)(*(undefined4 *)(lVar8 + 0x2b8),plVar5);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      fVar1 = local_28;
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      if (fVar1 < *pfVar6) {
        local_28 = *pfVar6;
      }
    }
    launchProjectileAt(param_4,pPVar3,(SexyVector3 *)&local_28,0.1,0.1);
    this = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_Pepperpult_Throw");
    RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pPVar3 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar3);
}


/* PlantPepperpult::CancelPlantfood() */

void __thiscall PlantPepperpult::CancelPlantfood(PlantPepperpult *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar2 = FUN_040b2664(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c8));
  return;
}


/* PlantPepperpult::ApplyPlantfood() */

void __thiscall PlantPepperpult::ApplyPlantfood(PlantPepperpult *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantPepperpult::~PlantPepperpult() */

void __thiscall PlantPepperpult::~PlantPepperpult(PlantPepperpult *this)

{
  *(undefined ***)this = &PTR_GetClass_067d47b0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPepperpult::~PlantPepperpult() */

void __thiscall PlantPepperpult::~PlantPepperpult(PlantPepperpult *this)

{
  ~PlantPepperpult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPepperpult::DoSpecial(int) */

void PlantPepperpult::DoSpecial(int param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar7;
  ComponentWarmingRadius *this_00;
  float *pfVar8;
  int iVar9;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *pvVar10;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_50 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(uVar3 + 0x28));
  if (bVar2) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(uVar3 + 0x28));
    lVar4 = FUN_040b2664(*(undefined8 *)(uVar3 + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar4 + 0x3e0));
  }
  pvVar10 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (uVar3 + 0x30);
  lVar4 = FUN_040b1674(*(undefined8 *)(uVar3 + 0x30),*(undefined8 *)(uVar3 + 0x38));
  lVar5 = FUN_040b2664(*(undefined8 *)(uVar3 + 0x10));
  iVar1 = *(int *)(lVar5 + 0x2c0);
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  iVar9 = iVar9 >> 2;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20,(vector *)pvVar10);
  PlantFramework::FindTargets
            (avStack_50,uVar3,iVar9,
             (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_50);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,pRVar6);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back(pvVar10,(RtWeakPtr *)&local_68);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    puVar7 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    local_20 = *puVar7;
    local_18 = *(undefined4 *)(puVar7 + 1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_68);
    launchSpecialProjectile
              ((undefined4)local_20,local_20._4_4_,local_18,uVar3,aRStack_38,
               (RtWeakPtr<Sexy::SoundResource> *)&local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  lVar5 = FUN_040b1674(*(undefined8 *)(uVar3 + 0x30),*(undefined8 *)(uVar3 + 0x38));
  if (lVar4 == lVar5) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20,(vector *)pvVar10);
    pvVar10 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              &local_20;
    PlantFramework::FindTargetsGrid((PlantFramework *)aRStack_38,uVar3,iVar9);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_38);
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_38);
    while( true ) {
      iVar9 = (int)pvVar10;
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      if (!bVar2) break;
      pfVar8 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      BoardTransforms::GridToBoardSpacePos
                ((BoardTransforms *)(ulong)(uint)(int)*pfVar8,(int)pfVar8[1],iVar9);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_20,(float)local_68,(float)local_64,0.0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_60);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
      pvVar10 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_58;
      launchSpecialProjectile
                ((undefined4)local_20,local_20._4_4_,local_18,uVar3,(exception_ptr *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_78);
    }
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)aRStack_38);
  }
  *(int *)(uVar3 + 0x48) = *(int *)(uVar3 + 0x48) + 1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

