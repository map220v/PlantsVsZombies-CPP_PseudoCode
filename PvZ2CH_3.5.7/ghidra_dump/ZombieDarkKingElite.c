// Class: ZombieDarkKingElite


/* ZombieDarkKingElite::onPlaceOnBoard() */

void __thiscall ZombieDarkKingElite::onPlaceOnBoard(ZombieDarkKingElite *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElite::StaticClassInit() */

void ZombieDarkKingElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDarkKingElite");
    (*pcVar2)(plVar1,asStack_10,FUN_04671040,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkKingElite::~ZombieDarkKingElite() */

void __thiscall ZombieDarkKingElite::~ZombieDarkKingElite(ZombieDarkKingElite *this)

{
  *(undefined ***)this = &PTR_GetClass_06893aa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkKingElite_06894520;
  ZombieDarkKing::~ZombieDarkKing((ZombieDarkKing *)this);
  return;
}


/* non-virtual thunk to ZombieDarkKingElite::~ZombieDarkKingElite() */

void __thiscall ZombieDarkKingElite::~ZombieDarkKingElite(ZombieDarkKingElite *this)

{
  ~ZombieDarkKingElite(this + -0x10);
  return;
}


/* ZombieDarkKingElite::~ZombieDarkKingElite() */

void __thiscall ZombieDarkKingElite::~ZombieDarkKingElite(ZombieDarkKingElite *this)

{
  ~ZombieDarkKingElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDarkKingElite::~ZombieDarkKingElite() */

void __thiscall ZombieDarkKingElite::~ZombieDarkKingElite(ZombieDarkKingElite *this)

{
  ~ZombieDarkKingElite(this + -0x10);
  return;
}


/* ZombieDarkKingElite::ZombieDarkKingElite() */

void __thiscall ZombieDarkKingElite::ZombieDarkKingElite(ZombieDarkKingElite *this)

{
  ZombieDarkKing::ZombieDarkKing((ZombieDarkKing *)this);
  *(undefined ***)this = &PTR_GetClass_06893aa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkKingElite_06894520;
  return;
}


/* ZombieDarkKingElite::StaticNew() */

ZombieDarkKingElite * ZombieDarkKingElite::StaticNew(void)

{
  ZombieDarkKingElite *this;
  
  this = ::operator_new(0x810);
  ZombieDarkKingElite(this);
  return this;
}


/* ZombieDarkKingElite::onZombieInitialize() */

void __thiscall ZombieDarkKingElite::onZombieInitialize(ZombieDarkKingElite *this)

{
  float fVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x808) = 0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x80c) = fVar1 + 10.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElite::isValidKnightingTarget(Zombie*) const */

void __thiscall
ZombieDarkKingElite::isValidKnightingTarget(ZombieDarkKingElite *this,Zombie *param_1)

{
  char cVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  ZombieDarkKingProps *pZVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)Zombie::GetConditionTracker(param_1)
    ;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar2,0x1b);
    if (((cVar1 == '\0') &&
        (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this),
        cVar1 == '\0')) && (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0')) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pZVar4 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
      local_18 = FUN_0466eab4(*(undefined8 *)(pZVar4 + 0x228));
      local_10 = FUN_0466eb04(*(undefined8 *)(pZVar4 + 0x230));
      while( true ) {
        cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!(bool)cVar1) break;
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        FUN_05475d88(asStack_20,uVar5);
        cVar1 = std::operator==((string *)(lVar3 + 8),asStack_20);
        if (cVar1 != '\0') {
          std::string::~string(asStack_20);
          break;
        }
        std::string::~string(asStack_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      goto LAB_0466f0e4;
    }
  }
  cVar1 = '\0';
LAB_0466f0e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElite::SummonZombie(std::string const&, int) */

void __thiscall
ZombieDarkKingElite::SummonZombie(ZombieDarkKingElite *this,string *param_1,int param_2)

{
  string *psVar1;
  ZombieType *this_00;
  SexyVector3 *pSVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = FUN_0466d9c8(*(undefined4 *)(this + 0x50));
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_58);
  pSVar2 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_40,0,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point((Point *)aRStack_40,local_50,param_2 + local_4c);
  BoardTransforms::GridToBoardSpace((Point *)aRStack_40);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)local_48,(float)local_44,0.0);
  BoardEntity::PlaceOnBoard(pSVar2);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkKingElite::onUpdate() */

void __thiscall ZombieDarkKingElite::onUpdate(ZombieDarkKingElite *this)

{
  ZombieDarkKingElitePropertySheet *pZVar1;
  ulong uVar2;
  string *psVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  
  Zombie::onUpdate((Zombie *)this);
  fVar6 = (float)PVZ_T();
  if (fVar6 <= *(float *)(this + 0x80c)) {
    return;
  }
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x80c) = fVar6 + 10.0;
  pZVar1 = Zombie::GetProps<ZombieDarkKingElitePropertySheet>((Zombie *)this);
  iVar4 = *(int *)(this + 0x808);
  uVar5 = *(undefined8 *)(pZVar1 + 600);
  uVar2 = FUN_0466d9dc(uVar5,*(undefined8 *)(pZVar1 + 0x260));
  if ((ulong)(long)iVar4 < uVar2) {
    psVar3 = (string *)FUN_0466d9e8(uVar5,(long)iVar4);
    SummonZombie(this,psVar3,-1);
    iVar4 = *(int *)(this + 0x808);
    uVar5 = *(undefined8 *)(pZVar1 + 600);
    uVar2 = FUN_0466d9dc(uVar5,*(undefined8 *)(pZVar1 + 0x260));
    if ((ulong)(long)(iVar4 + 1) < uVar2) {
      psVar3 = (string *)FUN_0466d9e8(uVar5,(long)(iVar4 + 1));
      SummonZombie(this,psVar3,1);
      iVar4 = *(int *)(this + 0x808);
      uVar2 = FUN_0466d9dc(*(undefined8 *)(pZVar1 + 600),*(undefined8 *)(pZVar1 + 0x260));
    }
  }
  iVar4 = iVar4 + 2;
  if (uVar2 <= (ulong)(long)iVar4) {
    iVar4 = iVar4 - (int)uVar2;
  }
  *(int *)(this + 0x808) = iVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElite::UpgradeZombie(Zombie*, std::string const&) */

void __thiscall
ZombieDarkKingElite::UpgradeZombie(ZombieDarkKingElite *this,Zombie *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  ZombieType *this_00;
  SexyVector3 *this_01;
  undefined8 uVar4;
  ZombieDarkWizard *pZVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  RtObject *this_02;
  PlantGroup *this_03;
  undefined8 *puVar8;
  RtWeakPtr *this_04;
  Plant *this_05;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [10];
  undefined8 local_68;
  undefined8 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_90);
  local_90[0] = FUN_0466d9c8(*(undefined4 *)(param_1 + 0x50));
  plVar10 = *(long **)(gLawnApp + 0x9f0);
  pcVar11 = *(code **)(*plVar10 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_a8);
  this_01 = (SexyVector3 *)
            (*pcVar11)(plVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,0,
                       (SpawnZombieParams *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_1);
  BoardEntity::PlaceOnBoard(this_01);
  Zombie::CopyTitleStatus((Zombie *)this_01,param_1);
  bVar1 = std::operator==(param_2,"dark_archmage");
  if ((bVar1) &&
     (pZVar5 = Sexy::RtObject::Cast<ZombieDarkWizard>((RtObject *)param_1),
     pZVar5 != (ZombieDarkWizard *)0x0)) {
    uVar12 = 0;
    ZombieDarkWizard::GetSheepGroup();
    uVar4 = local_68;
    lVar6 = FUN_0466da04(local_68,local_60);
    if (lVar6 != 0) {
      do {
        uVar9 = 0;
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0466da10(uVar4,uVar12);
        this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        this_03 = Sexy::RtObject::Cast<PlantGroup>(this_02);
        if ((this_03 != (PlantGroup *)0x0) && (iVar2 = PlantGroup::Count(this_03), iVar2 != 0)) {
          do {
            puVar8 = (undefined8 *)PlantGroup::Plants();
            this_04 = (RtWeakPtr *)FUN_0466da18(*puVar8,uVar9);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_04);
            if (bVar1) {
              pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0466da18(*puVar8,uVar9);
              this_05 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
              Plant::SetIsSleepping(this_05,true,-1.0);
            }
            uVar9 = uVar9 + 1;
            iVar2 = PlantGroup::Count(this_03);
          } while (uVar9 < (ulong)(long)iVar2);
        }
        uVar4 = local_68;
        uVar12 = uVar12 + 1;
        uVar9 = FUN_0466da04(local_68,local_60);
      } while (uVar12 < uVar9);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_68);
  }
  plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x248))(param_1);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x80))(plVar10,1);
  }
  pcVar11 = *(code **)(*(long *)param_1 + 0x120);
  uVar4 = operator|(4,0x4000000);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)0x0,local_98,local_94,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,uVar4,0,
             aPStack_a0,0);
  (*pcVar11)(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElite::findKnightingTargetList() */

void ZombieDarkKingElite::findKnightingTargetList(void)

{
  char cVar1;
  bool bVar2;
  Zombie *in_x0;
  ZombieDarkKingProps *pZVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)&local_30);
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>(in_x0);
  local_30 = (local_50 - *(int *)(pZVar3 + 0x214)) + 1;
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>(in_x0);
  local_28 = *(undefined4 *)(pZVar3 + 0x214);
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>(in_x0);
  local_2c = local_4c - *(int *)(pZVar3 + 0x218) / 2;
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>(in_x0);
  local_24 = *(undefined4 *)(pZVar3 + 0x218);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)&local_30);
  local_40 = FUN_05473038();
  local_38 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
  uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::
  linear_congruential_engine
            ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)&local_38,
             uVar4 & 0xffffffff);
  std::
  shuffle<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>>
            (uVar5,uVar6,(exception_ptr *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    local_38 = extraout_x0;
    cVar1 = (**(code **)(*(long *)in_x0 + 0xa50))();
    if (cVar1 != '\0') {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)in_x8,(Zombie **)&local_38);
      uVar4 = FUN_0466d9f0(*(undefined8 *)in_x8,*(undefined8 *)(in_x8 + 8));
      if (2 < uVar4) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
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
/* ZombieDarkKingElite::KnightAction() */

void __thiscall ZombieDarkKingElite::KnightAction(ZombieDarkKingElite *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ZombieDarkKingProps *pZVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  Effect_PopAnim *this_00;
  PopAnim *pPVar8;
  RtObject *this_01;
  ZombieAnimRig_Basic *this_02;
  char *__s;
  Zombie *this_03;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findKnightingTargetList();
  uVar9 = 0;
  do {
    uVar7 = local_20;
    uVar5 = FUN_0466d9f0(local_20,local_18);
    if (uVar5 <= uVar9) {
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)FUN_0466d9fc(uVar7,uVar9);
    this_03 = (Zombie *)*puVar6;
    uVar7 = Zombie::GetTypeName(this_03);
    FUN_05475d88(asStack_60,uVar7);
    bVar2 = std::operator==(asStack_60,"dark");
    if (((((bVar2) || (bVar2 = std::operator==(asStack_60,"dark_armor1"), bVar2)) ||
         (bVar2 = std::operator==(asStack_60,"dark_armor2"), bVar2)) ||
        ((bVar2 = std::operator==(asStack_60,"dark_armor3"), bVar2 ||
         (bVar2 = std::operator==(asStack_60,"dark_replica"), bVar2)))) ||
       (bVar2 = std::operator==(asStack_60,"dark_armor3_replica"), bVar2)) {
      iVar3 = FUN_0466d9cc(*(undefined4 *)(this_03 + 0xb0));
      pZVar4 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
      if (iVar3 == *(int *)(pZVar4 + 0x21c)) {
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_03);
        uVar11 = 0xc2fa0000;
        uVar12 = 0;
        local_50 = *puVar6;
        local_48 = *(undefined4 *)(puVar6 + 1);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,-100.0,-125.0,0.0);
        local_40 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_50,(SexyVector3 *)asStack_30);
        local_3c = uVar11;
        local_38 = uVar12;
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string(asStack_58,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
        GetPAMByName(asStack_58);
        pPVar8 = (PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
        Effect_PopAnim::CreatePopAnimRig(this_00,pPVar8,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        std::string::~string(asStack_58);
        nop();
        std::string::string(asStack_30,"fumeshroom_appear");
        Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)asStack_30,0);
        std::string::~string(asStack_30);
        nop();
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_00,(SexyVector3 *)&local_40,-1);
        uVar11 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_50._4_4_);
        uVar11 = Board::MakeRenderOrder(0x65130,uVar11,0);
        FUN_0466d9c0(this_00 + 0x1c,uVar11);
        __s = "dark_cavalry";
      }
      else {
        fVar10 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
        __s = "dark_wizard";
        if (0.5 < fVar10) {
          cVar1 = (**(code **)(*(long *)this + 0xa50))(this,this_03);
          if (cVar1 != '\0') {
            Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_03,0x1d,1);
            pZVar4 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
            uVar11 = *(undefined4 *)(pZVar4 + 0x21c);
            pZVar4 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
            Zombie::setHelm(*(Zombie **)(pZVar4 + 0x220),this_03,uVar11);
            this_01 = (RtObject *)Zombie::GetAnimRig(this_03);
            this_02 = Sexy::RtObject::Cast<ZombieAnimRig_Basic>(this_01);
            if (this_02 != (ZombieAnimRig_Basic *)0x0) {
              ZombieAnimRig_Basic::FlashHelm(this_02);
            }
          }
          goto LAB_046701ec;
        }
      }
LAB_04670300:
      std::string::string(asStack_30,__s);
      UpgradeZombie(this,this_03,asStack_30);
      std::string::~string(asStack_30);
      nop();
    }
    else {
      bVar2 = std::operator==(asStack_60,"dark_wizard");
      if ((bVar2) || (bVar2 = std::operator==(asStack_60,"dark_wizard_replica"), bVar2)) {
        __s = "dark_archmage";
        goto LAB_04670300;
      }
    }
LAB_046701ec:
    uVar9 = uVar9 + 1;
    std::string::~string(asStack_60);
  } while( true );
}


/* ZombieDarkKingElite::StaticGetClass() */

long * ZombieDarkKingElite::StaticGetClass(void)

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
  uVar2 = ZombieDarkKing::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkKingElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkKingElite::GetClass() const */

long * ZombieDarkKingElite::GetClass(void)

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
  uVar2 = ZombieDarkKing::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkKingElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

