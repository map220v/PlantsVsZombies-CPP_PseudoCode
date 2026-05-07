// Class: PlantImpPear


/* PlantImpPear::PlantImpPear() */

void __thiscall PlantImpPear::PlantImpPear(PlantImpPear *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06829960;
  return;
}


/* PlantImpPear::StaticNew() */

PlantImpPear * PlantImpPear::StaticNew(void)

{
  PlantImpPear *this;
  
  this = ::operator_new(0x28);
  PlantImpPear(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpPear::StaticClassInit() */

void PlantImpPear::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantImpPear");
    (*pcVar2)(plVar1,asStack_10,FUN_042a3ebc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImpPear::StaticGetClass() */

long * PlantImpPear::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantImpPear",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImpPear::GetClass() const */

long * PlantImpPear::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantImpPear",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantImpPear::~PlantImpPear() */

void __thiscall PlantImpPear::~PlantImpPear(PlantImpPear *this)

{
  *(undefined ***)this = &PTR_GetClass_06829960;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantImpPear::~PlantImpPear() */

void __thiscall PlantImpPear::~PlantImpPear(PlantImpPear *this)

{
  ~PlantImpPear(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpPear::TriggerAdvancedAttack() */

void __thiscall PlantImpPear::TriggerAdvancedAttack(PlantImpPear *this)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  ImpPearProps *pIVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_042a3b0c(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pIVar3 = Sexy::RtObject::Cast<ImpPearProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pIVar3 == (ImpPearProps *)0x0) {
    bVar1 = false;
  }
  else {
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar5 = *(float *)(pIVar3 + 0x2f8);
    iVar2 = FUN_042a3b30(*(undefined8 *)(this + 0x10));
    if (2 < iVar2) {
      fVar5 = *(float *)(pIVar3 + 0x2fc) * fVar5 + fVar5;
    }
    bVar1 = fVar4 < fVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantImpPear::canTarget(Zombie*) */

bool __thiscall PlantImpPear::canTarget(PlantImpPear *this,Zombie *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_042a4638(*(undefined8 *)(this + 0x10));
  cVar1 = ClassRestrictionSet::IsIncluded
                    ((ClassRestrictionSet *)(lVar3 + 0x2c0),(GameObject *)param_1);
  if (cVar1 == '\0') {
    uVar4 = operator|(0x200,0x10000);
    uVar2 = operator|(uVar4,0x2d);
    cVar1 = Zombie::MatchesAny(param_1,uVar2,*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') {
      cVar1 = Zombie::IsIgnoringAllDamage(param_1);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = Zombie::HasCondition(param_1,0x2e);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = Zombie::HasCondition(param_1,0x5a);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = Zombie::HasFogImmune(param_1);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = Zombie::IsBerserk(param_1);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
      if (cVar1 != '\0') {
        return false;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
      return cVar1 == '\0';
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpPear::spawnImp(Sexy::SexyVector3, int) */

void PlantImpPear::spawnImp(PlantImpPear *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  ZombieType *this;
  SexyVector3 *pSVar5;
  PlantChilibeanSubSystem *this_00;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [10];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_042a4638(*(undefined8 *)(param_1 + 0x10));
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  this = (ZombieType *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  ZombieType::EnsureResourceGroupsLoaded(this);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_90);
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  local_90[0] = param_2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_a8);
  pSVar5 = (SexyVector3 *)(*pcVar7)(plVar6,aRStack_68,0,(SpawnZombieParams *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  fVar9 = (float)FUN_042a3b38(*(undefined4 *)(pSVar5 + 0x284));
  iVar2 = *(int *)(lVar3 + 700);
  BoardEntity::PlaceOnBoard(pSVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  pcVar7 = *(code **)(*(long *)pSVar5 + 0x110);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * (float)iVar2 * 0.01),local_98,local_94,aRStack_68,uVar8,
             aPStack_a0,0);
  (*pcVar7)(pSVar5,aRStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  iVar2 = FUN_042a3b30(*(undefined8 *)(param_1 + 0x10));
  if ((1 < iVar2) && (cVar1 = TriggerAdvancedAttack(param_1), cVar1 != '\0')) {
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar3 = FUN_042a3bf4(*(undefined8 *)(lVar3 + 0x70));
    fVar9 = *(float *)(lVar3 + 0x44);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar3 = FUN_042a3bf4(*(undefined8 *)(lVar3 + 0x70));
    iVar2 = *(int *)(lVar3 + 0x2c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    this_00 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    PlantChilibeanSubSystem::CauseZombieFlatulence
              (this_00,*(Plant **)(param_1 + 0x10),(Zombie *)pSVar5,fVar9,(float)iVar2);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpPear::spawnImpOrFart(Zombie*) */

void PlantImpPear::spawnImpOrFart(Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  Effect_PopAnim *this;
  PopAnim *pPVar7;
  long lVar8;
  PlantChilibeanSubSystem *this_00;
  undefined8 uVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  code *pcVar10;
  undefined8 uVar11;
  float fVar12;
  ZombieConditionsStruct *pZVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar6 = (ulong *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x1);
  local_a0 = *puVar6;
  local_98 = (undefined4)puVar6[1];
  local_90[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_a0,(SexyVector3 *)&DAT_06af59a8);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_80,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  GetPAMByName((string *)&local_80);
  pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::string::~string((string *)&local_80);
  nop();
  std::string::string((string *)aRStack_68,"fumeshroom_appear");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_68,0);
  std::string::~string((string *)aRStack_68);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_90,-1);
  uVar3 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_a0._4_4_);
  uVar3 = Board::MakeRenderOrder(0x65130,uVar3,0);
  FUN_042a3afc(this + 0x1c,uVar3);
  if ((in_x1 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) ||
     ((bVar1 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)in_x1), !bVar1 &&
      (bVar1 = Sexy::RtObject::IsA<ZombieImpPorter>((RtObject *)in_x1), !bVar1)))) {
    iVar4 = FUN_042a3b04(*(undefined4 *)(in_x1 + 0x50));
    iVar5 = (**(code **)(*(long *)param_1 + 0x428))(param_1);
    if ((iVar5 < iVar4) || (cVar2 = Zombie::CanTakeFatalDamage((Zombie *)in_x1), cVar2 == '\0')) {
      lVar8 = FUN_042a4638(*(undefined8 *)(param_1 + 0x10));
      DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
      local_60 = *(undefined4 *)(lVar8 + 0x2f0);
      (**(code **)(*(long *)in_x1 + 0x110))();
                    /* WARNING: Load size is inaccurate */
      pZVar13._0_4_ = *(ZombieConditionsStruct **)(lVar8 + 0x2f4);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_b0);
      ZombieConditionsStruct::ZombieConditionsStruct
                (pZVar13._0_4_,(string *)&local_80,0x18,aRStack_a8);
      Zombie::ApplyCondition((Zombie *)in_x1,(ZombieConditionsStruct *)&local_80);
      PVPZoneData::~PVPZoneData((PVPZoneData *)&local_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    else {
      pcVar10 = *(code **)(*(long *)in_x1 + 0x120);
      uVar9 = operator|(4,0x4000000);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      Sexy::Point::Point((Point *)aRStack_a8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_80,local_7c,aRStack_68,uVar9,uVar11,aRStack_a8,0);
      (*pcVar10)();
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      spawnImp(local_a0 & 0xffffffff,local_a0._4_4_,local_98,param_1,iVar4);
    }
  }
  else {
    Plant::GetProps();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar8 = FUN_042a3bf4(*(undefined8 *)(lVar8 + 0x70));
    fVar12 = *(float *)(lVar8 + 0x44);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Plant::GetProps();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar8 = FUN_042a3bf4(*(undefined8 *)(lVar8 + 0x70));
    iVar4 = *(int *)(lVar8 + 0x2c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    this_00 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    PlantChilibeanSubSystem::CauseZombieFlatulence
              (this_00,*(Plant **)(param_1 + 0x10),(Zombie *)in_x1,fVar12,(float)iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantImpPear::TakeDamage(DamageInfo const&) */

void PlantImpPear::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  RtObject *this;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  uVar3 = operator|(0x40000,0x100000);
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),uVar3);
  if (((bVar1) && (*(RtObject **)in_x1 != (RtObject *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), bVar1)) {
    nop();
    cVar2 = canTarget((PlantImpPear *)param_1,(Zombie *)this);
    if (cVar2 != '\0') {
      bVar1 = Sexy::RtObject::IsA<ZombieChicken>(this);
      if ((bVar1) && (cVar2 = Zombie::CanTakeFatalDamage((Zombie *)this), cVar2 != '\0')) {
        Zombie::TakeFatalDamage((Zombie *)this,*(BoardEntity **)(param_1 + 0x10));
      }
      if ((0.0 <= *(float *)(*(long *)(param_1 + 0x10) + 0xd8)) &&
         (*(float *)(*(long *)(param_1 + 0x10) + 0xd8) - *(float *)(in_x1 + 8) <= 0.0)) {
        spawnImpOrFart((Zombie *)param_1);
      }
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantImpPear::OnAnimCommand(std::string const&, std::string const&) */

void PlantImpPear::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtObject *this;
  int iVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    lVar3 = FUN_042a4638(*(undefined8 *)(param_1 + 0x10));
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar2 == '\0') {
      iVar7 = *(int *)(lVar3 + 0x2b8);
    }
    else {
      iVar7 = *(int *)(lVar3 + 0x300);
    }
    iVar6 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
    BoardEntity::CalcGridPosition();
    EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
              ((BoardEntitySorter_Closest *)local_30,
               (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_Closest>
              (uVar4,uVar5,(__normal_iterator *)local_30);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    while ((bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar1
           && (std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38),
              iVar6 != iVar7))) {
      nop();
      if ((this == (RtObject *)0x0) ||
         ((cVar2 = canTarget((PlantImpPear *)param_1,(Zombie *)this), cVar2 != '\0' &&
          (bVar1 = Sexy::RtObject::IsA<ZombieChicken>(this), !bVar1)))) {
        iVar6 = iVar6 + 1;
        spawnImpOrFart((Zombie *)param_1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

