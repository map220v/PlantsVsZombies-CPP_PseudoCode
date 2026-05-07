// Class: PlantPineapple


/* PlantPineapple::CanEndPlantfood() */

bool __thiscall PlantPineapple::CanEndPlantfood(PlantPineapple *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(*(long *)(this + 0x10) + 0x130) < fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::StaticClassInit() */

void PlantPineapple::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PineappleProjectileTimer");
    (*pcVar3)(plVar2,asStack_10,FUN_0410c944,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPineapple");
    (*pcVar3)(plVar2,asStack_10,FUN_0410d6a4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPineapple::StaticGetClass() */

long * PlantPineapple::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPineapple",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPineapple::GetClass() const */

long * PlantPineapple::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPineapple",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::SetNewProjectileProp(Sexy::RtWeakPtr<Projectile>) */

void __thiscall
PlantPineapple::SetNewProjectileProp(PlantPineapple *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  long lVar2;
  Projectile *pPVar3;
  DangerRoomManager *this_00;
  undefined8 uVar4;
  RealObject *pRVar5;
  BoardEntity *pBVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  FUN_0410b260(lVar2 + 0xd4);
  pPVar3 = (Projectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Projectile::SetTarget(pPVar3,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this_00 = (DangerRoomManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar4 = operator|(0x40,0x80);
  uVar4 = operator|(uVar4,7);
  uVar4 = operator|(uVar4,0x100);
  iVar1 = operator|(uVar4,8);
  DangerRoomManager::SetMaxLevel(this_00,iVar1);
  pRVar5 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  RealObject::JoinTeam(pRVar5,1);
  pPVar3 = (Projectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Projectile::SetInstigator(pPVar3,*(BoardEntity **)(this + 0x10));
  pBVar6 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Projectile::NotifyDeflection(pBVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::Initialize() */

void __thiscall PlantPineapple::Initialize(PlantPineapple *this)

{
  RtObject *this_00;
  PlantAnimRig_Pineapple *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Pineapple>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPineapple::IsSleeping() */

void __thiscall PlantPineapple::IsSleeping(PlantPineapple *this)

{
  RtObject *this_00;
  PlantAnimRig_Pineapple *this_01;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Pineapple>(this_00);
  PlantAnimRig_Pineapple::IsSleeping(this_01);
  return;
}


/* PlantPineapple::IsAttacking() */

void __thiscall PlantPineapple::IsAttacking(PlantPineapple *this)

{
  RtObject *this_00;
  PlantAnimRig_Pineapple *this_01;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Pineapple>(this_00);
  PlantAnimRig_Pineapple::IsAttacking(this_01);
  return;
}


/* PlantPineapple::DoEventCall(RealObject*) */

PlantPineapple * __thiscall PlantPineapple::DoEventCall(PlantPineapple *this,RealObject *param_1)

{
  Projectile *pPVar1;
  
  if (param_1 != (RealObject *)0x0) {
    pPVar1 = Sexy::RtObject::Cast<Projectile>((RtObject *)param_1);
    this = (PlantPineapple *)(**(code **)(*(long *)pPVar1 + 0x80))(pPVar1,1);
  }
  return this;
}


/* PlantPineapple::PlantPineapple() */

void __thiscall PlantPineapple::PlantPineapple(PlantPineapple *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e4790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantPineapple::StaticNew() */

PlantPineapple * PlantPineapple::StaticNew(void)

{
  PlantPineapple *this;
  
  this = ::operator_new(0x58);
  PlantPineapple(this);
  return this;
}


/* PlantPineapple::GetMyProps() */

void __thiscall PlantPineapple::GetMyProps(PlantPineapple *this)

{
  FUN_0410c1b4(*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::LaunchAvatarProjectile(Sexy::RtWeakPtr<Projectile>) */

void __thiscall PlantPineapple::LaunchAvatarProjectile(PlantPineapple *this,RtMixedPtrBase *param_2)

{
  float *pfVar1;
  char cVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  Projectile *this_01;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Board *pBVar11;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_40 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    lVar5 = 0;
    local_40[0] = 60.0;
    local_40[1] = -60.0;
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"BattlePlaneDefault");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,(wstring *)aVStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(aVStack_28);
    std::string::~string(asStack_30);
    nop();
    do {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *puVar4;
      uVar9 = *(undefined4 *)((long)puVar4 + 4);
      uVar10 = *(undefined4 *)(puVar4 + 1);
      uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      this_01 = (Projectile *)
                Board::AddProjectile
                          (pBVar11._0_4_,uVar9,uVar10,uVar3,aRStack_18,*(undefined8 *)(this + 0x10),
                           0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pfVar1 = (float *)((long)local_40 + lVar5);
      lVar5 = lVar5 + 4;
      Sexy::SexyMath::DegToRad(*pfVar1);
      FUN_0410b1b8(this_01 + 0xc4);
      EATextSquish::Vec3::Vec3(aVStack_28,200.0,100.0,0.0);
      fVar6 = (float)FUN_0410b1b4(*(undefined4 *)(this_01 + 0xc4));
      fVar7 = cosf(fVar6);
      fVar8 = (float)DVec3::getLength((DVec3 *)aVStack_28);
      fVar6 = sinf(fVar6);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar8 * fVar7,-(fVar6 * fVar8),0.0);
      Projectile::SetVelocity(this_01,(SexyVector3 *)aRStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_30);
      SetNewProjectileProp(this,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    } while (lVar5 != 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::LaunchProjectile(Sexy::RtWeakPtr<Projectile>) */

void PlantPineapple::LaunchProjectile
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantPineapple *param_4,RtMixedPtrBase *param_5)

{
  char cVar1;
  Projectile *pPVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 != '\0') {
    pPVar2 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    puVar3 = (undefined8 *)Projectile::GetVelocity(pPVar2);
    local_28 = *puVar3;
    local_20 = *(undefined4 *)(puVar3 + 1);
    pPVar2 = (Projectile *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,-1.0);
    local_14 = param_2;
    local_10 = param_3;
    Projectile::SetVelocity(pPVar2,(SexyVector3 *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_5);
    SetNewProjectileProp(param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    cVar1 = (**(code **)(*(long *)param_4 + 0x180))(param_4);
    if ((cVar1 != '\0') &&
       (cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10)), cVar1 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_5);
      LaunchAvatarProjectile(param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::CheckInTimer(Sexy::RtWeakPtr<Projectile>) */

void __thiscall PlantPineapple::CheckInTimer(PlantPineapple *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
  local_18 = FUN_0410cdc0(uVar2,uVar3,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantPineapple::ClearStore() */

void __thiscall PlantPineapple::ClearStore(PlantPineapple *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_0410bf60(uVar1,uVar2,this);
  std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::clear
            ((vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *)this_00);
  return;
}


/* PlantPineapple::ApplyPlantfood() */

void __thiscall PlantPineapple::ApplyPlantfood(PlantPineapple *this)

{
  ClearStore(this);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantPineapple::CancelPlantfood() */

void __thiscall PlantPineapple::CancelPlantfood(PlantPineapple *this)

{
  ClearStore(this);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* PlantPineapple::~PlantPineapple() */

void __thiscall PlantPineapple::~PlantPineapple(PlantPineapple *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4790;
  std::
  vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
             *)(this + 0x40));
  std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::~vector
            ((vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPineapple::~PlantPineapple() */

void __thiscall PlantPineapple::~PlantPineapple(PlantPineapple *this)

{
  ~PlantPineapple(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::InInterceptVector(Projectile*) */

void PlantPineapple::InInterceptVector(Projectile *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0410c1b4(*(undefined8 *)(param_1 + 0x10));
  PVPSeedBankModule::GetZombieSeedBank();
  uVar3 = FUN_0410bfc4(*(undefined8 *)(lVar2 + 0x2c8));
  uVar4 = FUN_0410c014(*(undefined8 *)(lVar2 + 0x2d0));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ProjectilePropertySheet>const*,std::vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>>,Sexy::RtWeakPtr<ProjectilePropertySheet>>
                       (uVar3,uVar4,aRStack_20);
  local_10 = FUN_0410c014(*(undefined8 *)(lVar2 + 0x2d0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantPineapple::CanIntercept(Projectile*) */

undefined8 __thiscall PlantPineapple::CanIntercept(PlantPineapple *this,Projectile *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((((param_1 != (Projectile *)0x0) &&
       (cVar1 = InInterceptVector((Projectile *)this), cVar1 != '\0')) &&
      (cVar1 = IsSleeping(this), cVar1 == '\0')) &&
     (cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar1 == '\0')) {
    lVar4 = *(long *)(this + 0x10);
    cVar1 = FUN_0410b788(*(undefined4 *)(lVar4 + 0x70));
    if (cVar1 == '\0') {
      uVar2 = FUN_0410b184(*(undefined4 *)(param_1 + 0x24));
      uVar3 = RealObject::IsOnOpposingTeam(lVar4,uVar2);
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::UpdateActions() */

void __thiscall PlantPineapple::UpdateActions(PlantPineapple *this)

{
  vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *this_00;
  char cVar1;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  Projectile *this_01;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *)
            (this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::empty
                    (this_00);
  if (cVar1 == '\0') {
    fVar5 = (float)PVZ_T();
    lVar2 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                      ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)this_00);
    if (*(float *)(lVar2 + 8) < fVar5) {
      pRVar3 = (RtWeakPtrBase *)
               std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
               front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                     this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar4 + 0x80))(plVar4,0);
        this_01 = (Projectile *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        Projectile::SetPaused(this_01,false);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
        LaunchProjectile(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::erase
                (this_00,local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::StoreProjectile(Projectile*) */

void __thiscall PlantPineapple::StoreProjectile(PlantPineapple *this,Projectile *param_1)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  Projectile::SetPaused(param_1,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_0410c1b4(*(undefined8 *)(this + 0x10));
  PineappleProjectileTimer::PineappleProjectileTimer
            ((PineappleProjectileTimer *)(fVar2 + *(float *)(lVar1 + 0x2b8)),aRStack_18,aRStack_20);
  std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::push_back
            ((vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *)
             (this + 0x28),(PineappleProjectileTimer *)aRStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::PlantFoodStoreProjectile(Projectile*, int) */

void __thiscall
PlantPineapple::PlantFoodStoreProjectile(PlantPineapple *this,Projectile *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  ActionSubSystem *pAVar3;
  SexyVector3 *this_00;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_70);
  cVar1 = CheckInTimer(this,(RtWeakPtr<Sexy::SoundResource> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    Projectile::SetPaused(param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_78);
    fVar4 = (float)PVZ_T();
    lVar2 = FUN_0410c1b4(*(undefined8 *)(this + 0x10));
    PineappleProjectileTimer::PineappleProjectileTimer
              ((PineappleProjectileTimer *)
               (*(float *)(lVar2 + 0x2b8) * (float)(param_2 + 1) + 1.0 + fVar4),
               (RtWeakPtr<Sexy::SoundResource> *)&local_60,aRStack_70);
    std::vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>>::push_back
              ((vector<PineappleProjectileTimer,std::allocator<PineappleProjectileTimer>> *)
               (this + 0x28),(PineappleProjectileTimer *)&local_60);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    pAVar3 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,(RtWeakPtrBase *)aRStack_98);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(this + 0x10));
    uVar6 = 0;
    uVar5 = 0xc1200000;
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_70,10.0,-10.0,0.0);
    local_60 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aRStack_70);
    local_5c = uVar5;
    local_58 = uVar6;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string(asStack_80,"OnEventCall");
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
              (aRStack_50,aRStack_88,asStack_80);
    ActionSubSystem::AddActionMoveTo
              ((ActionSubSystem *)0x3f800000,pAVar3,aRStack_78,
               (RtWeakPtr<Sexy::SoundResource> *)&local_60,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::CollectProjectile() */

void __thiscall PlantPineapple::CollectProjectile(PlantPineapple *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Projectile *extraout_x0;
  int extraout_w1;
  int extraout_w1_00;
  int iVar6;
  int local_50;
  int local_4c;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_50,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&local_40);
      Sexy::RtId::~RtId((RtId *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      nop();
      if ((extraout_x0 == (Projectile *)0x0) ||
         (cVar2 = CanIntercept(this,extraout_x0), cVar2 == '\0')) {
LAB_0410e470:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      }
      else {
        Projectile::CalcSweptCollisionRectBoardSpace();
        iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_38);
        iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(local_34);
        Sexy::Point::Point((Point *)&local_40,iVar3,iVar4);
        if ((local_40 < local_50) || (local_50 + 2 < local_40)) goto LAB_0410e470;
        if ((local_3c < local_4c + -1) || (local_4c + 1 < local_3c)) goto LAB_0410e470;
        PlantFoodStoreProjectile(this,extraout_x0,iVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
        iVar6 = iVar6 + 1;
      }
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPineapple::UpdatePlantfood() */

void __thiscall PlantPineapple::UpdatePlantfood(PlantPineapple *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Projectile *extraout_x0;
  int extraout_w1;
  int extraout_w1_00;
  int iVar6;
  int iStack_50;
  int iStack_4c;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  Iterator aIStack_28 [32];
  long lStack_8;
  
  iVar6 = 0;
  lStack_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&iStack_50,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&iStack_40);
      Sexy::RtId::~RtId((RtId *)&iStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      nop();
      if ((extraout_x0 == (Projectile *)0x0) ||
         (cVar2 = CanIntercept(this,extraout_x0), cVar2 == '\0')) {
LAB_0410e470:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      }
      else {
        Projectile::CalcSweptCollisionRectBoardSpace();
        iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(iStack_38);
        iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(iStack_34);
        Sexy::Point::Point((Point *)&iStack_40,iVar3,iVar4);
        if ((iStack_40 < iStack_50) || (iStack_50 + 2 < iStack_40)) goto LAB_0410e470;
        if ((iStack_3c < iStack_4c + -1) || (iStack_4c + 1 < iStack_3c)) goto LAB_0410e470;
        PlantFoodStoreProjectile(this,extraout_x0,iVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
        iVar6 = iVar6 + 1;
      }
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPineapple::OverrideProjectileCollision(Projectile*) */

ulong __thiscall
PlantPineapple::OverrideProjectileCollision(PlantPineapple *this,Projectile *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  RtObject *this_00;
  PlantAnimRig_Pineapple *this_01;
  
  uVar2 = CanIntercept(this,param_1);
  if ((uVar2 & 0xff) == 0) {
    uVar4 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
    return uVar4;
  }
  uVar3 = (**(code **)(*(long *)this + 0x180))(this);
  if ((uVar3 & 0xff) == 0) {
    cVar1 = IsAttacking(this);
    if (cVar1 == '\0') {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_Pineapple>(this_00);
      PlantAnimRig_Pineapple::PlayAttackBegin(this_01);
    }
    StoreProjectile(this,param_1);
    return (ulong)(uVar2 & 0xff);
  }
  PlantFoodStoreProjectile(this,param_1,0);
  return (ulong)(uVar3 & 0xff);
}

