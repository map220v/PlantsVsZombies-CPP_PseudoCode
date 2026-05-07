// Class: SummonZombieEffect


/* SummonZombieEffect::SummonZombieEffect() */

void __thiscall SummonZombieEffect::SummonZombieEffect(SummonZombieEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_066675e0;
  return;
}


/* SummonZombieEffect::StaticNew() */

SummonZombieEffect * SummonZombieEffect::StaticNew(void)

{
  SummonZombieEffect *this;
  
  this = ::operator_new(0x28);
  SummonZombieEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffect::StaticClassInit() */

void SummonZombieEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"SummonZombieEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360c530,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SummonZombieEffect::StaticGetClass() */

long * SummonZombieEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"SummonZombieEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SummonZombieEffect::~SummonZombieEffect() */

void __thiscall SummonZombieEffect::~SummonZombieEffect(SummonZombieEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_066675e0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* SummonZombieEffect::~SummonZombieEffect() */

void __thiscall SummonZombieEffect::~SummonZombieEffect(SummonZombieEffect *this)

{
  ~SummonZombieEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffect::SpawnZombie(ZombieSummonPacket&, Sexy::SexyVector3 const&) */

void SummonZombieEffect::SpawnZombie(ZombieSummonPacket *param_1,SexyVector3 *param_2)

{
  SexyVector3 *pSVar1;
  SexyVector3 *in_x2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3 aVStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = 1;
  local_29 = 1;
  local_2c = 0;
  local_2b = 1;
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)param_2);
  pSVar1 = (SexyVector3 *)
           (*pcVar3)(plVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xfffffffb,
                     (SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  (**(code **)(*(long *)pSVar1 + 0x198))(pSVar1,1);
  RealObject::JoinTeam((RealObject *)pSVar1,1);
  Zombie::SetFacing((Zombie *)pSVar1,1);
  fVar4 = (float)RandRangeFloat(*(float *)(param_2 + 0xc),*(float *)(param_2 + 0x10));
  uVar5 = 0;
  uVar6 = 0;
  EATextSquish::Vec3::Vec3(aVStack_50,fVar4,0.0,0.0);
  local_40 = Sexy::SexyVector3::operator+(in_x2,(SexyVector3 *)aVStack_50);
  local_3c = uVar5;
  local_38 = uVar6;
  BoardEntity::PlaceOnBoard(pSVar1);
  CardUtils::CheckZombieCardSettingProperty((Zombie *)pSVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffect::GetZombieSpawnRate() */

void SummonZombieEffect::GetZombieSpawnRate(void)

{
  char cVar1;
  undefined4 uVar2;
  CardSystemManager *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 local_20 [3];
  long local_8;
  
  uVar2 = 1;
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  InfluenceAuraManager::GetTypeAuraList<DoubledSummonZombieAura>();
  cVar1 = std::
          vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
          ::empty((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
                   *)local_20);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360bff0(local_20[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar2 = open_vcdiff::VCDiffAddressCache::FirstNearMode();
  }
  std::
  vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
  ::~vector((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
             *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffect::SummonEffectFinish() */

void SummonZombieEffect::SummonEffectFinish(void)

{
  char cVar1;
  CardSystemManager *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  DoubledSummonZombieAura *this_01;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  InfluenceAuraManager::GetTypeAuraList<DoubledSummonZombieAura>();
  cVar1 = std::
          vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
          ::empty((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
                   *)local_20);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360bff0(local_20[0]);
    this_01 = (DoubledSummonZombieAura *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    DoubledSummonZombieAura::ConsumeTimes(this_01);
    std::
    vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
    ::~vector((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
               *)local_20);
  }
  else {
    std::
    vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
    ::~vector((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
               *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SummonZombieEffect::DoEffect() */

void __thiscall SummonZombieEffect::DoEffect(SummonZombieEffect *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  SummonZombieEffectProperty *pSVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  ZombieType *this_01;
  GridTargetAdaptor *this_02;
  ZombieTargetAdaptor *pZVar6;
  long lVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  *(undefined4 *)(this + 0x20) = 2;
  iVar1 = GetZombieSpawnRate();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  pSVar3 = Sexy::RtObject::Cast<SummonZombieEffectProperty>(this_00);
  uVar11 = *(undefined8 *)(pSVar3 + 0x10);
  lVar4 = FUN_0360be18(uVar11,*(undefined8 *)(pSVar3 + 0x18));
  if (lVar4 != 0) {
    do {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360be48(uVar11,uVar10);
      this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      ZombieType::EnsureResourceGroupsLoaded(this_01);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      this_02 = Sexy::RtObject::Cast<GridTargetAdaptor>(*(RtObject **)(lVar4 + 0x18));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      pZVar6 = Sexy::RtObject::Cast<ZombieTargetAdaptor>(*(RtObject **)(lVar4 + 0x18));
      if (this_02 == (GridTargetAdaptor *)0x0) {
        uVar8 = 0;
        if (pZVar6 == (ZombieTargetAdaptor *)0x0) {
          while( true ) {
            uVar11 = *(undefined8 *)(pSVar3 + 0x10);
            lVar4 = FUN_0360be48(uVar11,uVar10);
            if ((ulong)(long)(iVar1 * *(int *)(lVar4 + 8)) <= uVar8) break;
            uVar8 = uVar8 + 1;
            pcVar12 = *(code **)(*(long *)this + 0x90);
            EATextSquish::Vec3::Vec3((Vec3 *)&local_20,0.0,0.0,0.0);
            (*pcVar12)(aRStack_28,this,lVar4,(Vec3 *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          }
        }
        else {
          ZombieTargetAdaptor::GetTargetList();
          uVar11 = CONCAT44(fStack_1c,local_20);
          lVar4 = FUN_0360be54(uVar11,local_18);
          uVar8 = 0;
          if (lVar4 != 0) {
            do {
              for (uVar9 = 0; lVar4 = FUN_0360be48(*(undefined8 *)(pSVar3 + 0x10),uVar10),
                  uVar9 < (ulong)(long)(iVar1 * *(int *)(lVar4 + 8)); uVar9 = uVar9 + 1) {
                pcVar12 = *(code **)(*(long *)this + 0x90);
                pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360be60(uVar11,uVar8);
                this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
                uVar11 = std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this_03);
                (*pcVar12)(aRStack_28,this,lVar4,uVar11);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                uVar11 = CONCAT44(fStack_1c,local_20);
              }
              uVar8 = uVar8 + 1;
              uVar9 = FUN_0360be54(uVar11,local_18);
            } while (uVar8 < uVar9);
          }
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     &local_20);
          uVar11 = *(undefined8 *)(pSVar3 + 0x10);
        }
      }
      else {
        uVar11 = *(undefined8 *)(pSVar3 + 0x10);
        if ((long)iVar1 != 0) {
          lVar4 = 0;
          lVar7 = FUN_0360be48(uVar11,uVar10);
          uVar8 = (ulong)*(int *)(lVar7 + 8);
          do {
            for (uVar9 = 0; uVar9 < uVar8; uVar9 = uVar9 + 1) {
              if (*(char *)(lVar7 + 0x14) == '\0') {
                GridTargetAdaptor::GetRandomGrid(this_02);
              }
              else {
                GridTargetAdaptor::GetRegularGrid((int)this_02);
              }
              EATextSquish::Vec3::Vec3((Vec3 *)&local_20,0.0,0.0,0.0);
              iVar2 = BoardTransforms::GridToBoardSpaceX(local_30);
              local_20 = (float)iVar2;
              iVar2 = BoardTransforms::GridToBoardSpaceY(local_2c);
              fStack_1c = (float)iVar2;
              uVar11 = FUN_0360be48(*(undefined8 *)(pSVar3 + 0x10),uVar10);
              (**(code **)(*(long *)this + 0x90))(aRStack_28,this,uVar11,(Vec3 *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              uVar11 = *(undefined8 *)(pSVar3 + 0x10);
              lVar7 = FUN_0360be48(uVar11,uVar10);
              uVar8 = (ulong)*(int *)(lVar7 + 8);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 != iVar1);
        }
      }
      uVar10 = uVar10 + 1;
      uVar8 = FUN_0360be18(uVar11,*(undefined8 *)(pSVar3 + 0x18));
    } while (uVar10 < uVar8);
  }
  SummonEffectFinish();
  *(undefined4 *)(this + 0x20) = 3;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

