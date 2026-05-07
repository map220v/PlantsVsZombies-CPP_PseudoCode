// Class: PlantWinterMelon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::playFireSound() */

void __thiscall PlantWinterMelon::playFireSound(PlantWinterMelon *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Plant_WinterMelon_Attack");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::playPlantfoodLaunchSound() */

void __thiscall PlantWinterMelon::playPlantfoodLaunchSound(PlantWinterMelon *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(RealObject **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Plant_WinterMelon_Nitro");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::StaticClassInit() */

void PlantWinterMelon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWinterMelon");
    (*pcVar2)(plVar1,asStack_10,FUN_0407e864,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterMelon::StaticGetClass() */

long * PlantWinterMelon::StaticGetClass(void)

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
  uVar2 = PlantMelonpult::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWinterMelon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWinterMelon::GetClass() const */

long * PlantWinterMelon::GetClass(void)

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
  uVar2 = PlantMelonpult::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWinterMelon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::Initialize() */

void __thiscall PlantWinterMelon::Initialize(PlantWinterMelon *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  WinterMelonBoostFreeze *pWVar4;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantMelonpult::Initialize((PlantMelonpult *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"wintermelon_new_avatar_1");
  iVar3 = NameMapperBase::GetIdForName(this_02,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar2) {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      pWVar4 = Sexy::RtObject::Cast<WinterMelonBoostFreeze>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pWVar4 != (WinterMelonBoostFreeze *)0x0) {
        *(undefined4 *)(this + 0x58) = *(undefined4 *)(pWVar4 + 100);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterMelon::PlantWinterMelon() */

void __thiscall PlantWinterMelon::PlantWinterMelon(PlantWinterMelon *this)

{
  PlantMelonpult::PlantMelonpult((PlantMelonpult *)this);
  this[0x54] = (PlantWinterMelon)0x0;
  *(undefined ***)this = &PTR_GetClass_067c9d90;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* PlantWinterMelon::StaticNew() */

PlantWinterMelon * PlantWinterMelon::StaticNew(void)

{
  PlantWinterMelon *this;
  
  this = ::operator_new(0x60);
  PlantWinterMelon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantWinterMelon::FindTargetAndFire(PlantWinterMelon *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  RtObject *this_00;
  PlantAnimRig_WinterMelon *pPVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0407e604(*(undefined8 *)(this + 0x10));
  if (4 < iVar1) {
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar2 = FUN_0407f728(*(undefined8 *)(this + 0x10));
    if (fVar4 < *(float *)(lVar2 + 0x2c8)) {
      this[0x54] = (PlantWinterMelon)0x1;
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_WinterMelon>(this_00);
      std::string::string(asStack_10,"attack5");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
      std::string::~string(asStack_10);
      nop();
    }
  }
  PlantFramework::FindTargetAndFire(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWinterMelon::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, PlantWeapon) */

void __thiscall
PlantWinterMelon::LaunchProjectileAt
          (PlantWinterMelon *this,Projectile *param_1,SexyVector3 *param_2,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_0407f728(*(undefined8 *)(this + 0x10));
  if (param_4 == 1) {
    fVar3 = *(float *)(lVar1 + 0x2c4);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.1);
    fVar2 = *(float *)(lVar1 + 0x2c0);
    fVar4 = fVar4 + fVar3;
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.1);
    fVar3 = fVar3 + fVar2;
  }
  else if (param_4 == 2) {
    fVar3 = *(float *)(lVar1 + 0x2c4);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,fVar3 * 0.2);
    fVar2 = *(float *)(lVar1 + 0x2c0);
    fVar4 = fVar4 + fVar3;
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,fVar2 * 0.1);
    fVar3 = fVar3 + fVar2;
  }
  else if (param_4 == 3) {
    fVar5 = *(float *)(lVar1 + 700);
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,*(float *)(lVar1 + 0x2c4) * 0.1);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,30.0);
    fVar3 = *(float *)(lVar1 + 0x2b8);
    fVar4 = fVar5 + -15.0 + fVar2 + fVar4;
  }
  else {
    fVar4 = *(float *)(lVar1 + 700);
    fVar3 = *(float *)(lVar1 + 0x2b8);
  }
  Projectile::LaunchAt(param_1,param_2,fVar4,fVar3);
  return;
}


/* PlantWinterMelon::~PlantWinterMelon() */

void __thiscall PlantWinterMelon::~PlantWinterMelon(PlantWinterMelon *this)

{
  *(undefined ***)this = &PTR_GetClass_067c9d90;
  PlantMelonpult::~PlantMelonpult((PlantMelonpult *)this);
  return;
}


/* PlantWinterMelon::~PlantWinterMelon() */

void __thiscall PlantWinterMelon::~PlantWinterMelon(PlantWinterMelon *this)

{
  ~PlantWinterMelon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::RemoveUndamageableEntitiesFromList(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantWinterMelon::RemoveUndamageableEntitiesFromList(PlantWinterMelon *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  GridItem *pGVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
LAB_0407fa2c:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RtObject *)*puVar3;
    if (this_00 == (RtObject *)0x0) {
LAB_0407fb20:
      FUN_0407f4d8((__normal_iterator *)&local_18);
      goto LAB_0407fa2c;
    }
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((pZVar4 == (Zombie *)0x0) ||
       (((cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) &&
        (cVar2 = RealObject::IsOnTeam(pZVar4,1), cVar2 == '\0')))) {
      bVar1 = Sexy::RtObject::IsA<GridItem>(this_00);
      if ((!bVar1) || (pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00), pGVar5 == (GridItem *)0x0))
      goto LAB_0407fb20;
      cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))();
      if (cVar2 != '\0') break;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  FUN_0407f4d8((__normal_iterator *)&local_18);
  goto LAB_0407fa2c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::DoSpecial(int) */

void PlantWinterMelon::DoSpecial(int param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  PlantFramework *this;
  undefined8 uVar10;
  RtObject *pRVar11;
  long lVar12;
  RtWeakPtrBase *pRVar13;
  GridItemFlame *this_00;
  long lVar14;
  SharkMinion *pSVar15;
  Projectile *pPVar16;
  undefined8 uVar17;
  long *plVar18;
  Zombie *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var19;
  float *pfVar20;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  Plant *pPVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  ulong in_d1;
  undefined4 in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (PlantFramework *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) == 0) {
    (**(code **)(*(long *)this + 0x530))();
  }
  iVar22 = 0;
  iVar4 = Board::CountZombiesOnScreen(*(Board **)(gLawnApp + 0x9f0),false);
  iVar5 = Board::CountDamagableGridItemsOnScreen();
  iVar6 = FUN_0407e63c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  iVar9 = *(int *)(this + 0x40);
  uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
  iVar8 = 0;
  if (4 - iVar9 != 0) {
    iVar8 = ((iVar4 + iVar5) - iVar6) / (4 - iVar9);
  }
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar10,0x2f);
  while ((bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), iVar22 < iVar8 &&
         (bVar2))) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_58);
    if (bVar2) {
      pRVar11 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      bVar2 = Sexy::RtObject::IsA<GridItemFlame>(pRVar11);
      if (bVar2) {
        uVar10 = *(undefined8 *)(this + 0x28);
        lVar12 = FUN_0407e63c(uVar10,*(undefined8 *)(this + 0x30));
        lVar14 = 0;
        do {
          fVar23 = (float)in_d1;
          if (lVar14 == lVar12) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
            nop();
            lVar14 = FUN_0407f728(*(undefined8 *)(this + 0x10));
            local_48 = (float)GridItemFlame::CalcProjectileTargetLocation
                                        (this_00,*(float *)(lVar14 + 0x2c0));
            local_44 = fVar23;
            local_40 = in_s2;
            cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
            if (cVar3 == '\0') {
              uVar7 = 1;
              uVar10 = 1;
            }
            else {
              uVar7 = 2;
              uVar10 = 2;
            }
            iVar22 = iVar22 + 1;
            in_d1 = (ulong)(uint)local_44;
            *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar7;
            in_s2 = 0x42480000;
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,local_48,local_44,50.0);
            pPVar21 = *(Plant **)(this + 0x10);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
            pSVar15 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
            uVar7 = SharkMinion::getRow(pSVar15);
            pPVar16 = (Projectile *)Plant::Fire(pPVar21,aRStack_50,uVar7,uVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            uVar17 = FUN_0407e5d4(*(undefined8 *)(pPVar16 + 0xe0));
            uVar17 = operator|(uVar17,0x2000);
            FUN_0407e5d8(pPVar16 + 0xe0,uVar17);
            LaunchProjectileAt((PlantWinterMelon *)this,pPVar16,aRStack_38,uVar10);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
            Projectile::SetTarget(pPVar16,(RtWeakPtr *)aRStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)(this + 0x28),(RtWeakPtr *)aRStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            break;
          }
          pRVar13 = (RtWeakPtrBase *)FUN_0407e648(uVar10,lVar14);
          cVar3 = Sexy::RtWeakPtrBase::operator==(pRVar13,(RtWeakPtrBase *)aRStack_58);
          lVar14 = lVar14 + 1;
        } while (cVar3 == '\0');
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar10,0x29);
  while ((bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), iVar22 < iVar8 &&
         (bVar2))) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar18 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    cVar3 = (**(code **)(*plVar18 + 0x328))();
    if (cVar3 == '\0') {
      plVar18 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      cVar3 = (**(code **)(*plVar18 + 0x330))();
      if (cVar3 == '\0') {
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        cVar3 = Zombie::IsInvisible(this_01);
        if (cVar3 == '\0') {
          uVar10 = *(undefined8 *)(this + 0x28);
          lVar12 = FUN_0407e63c(uVar10,*(undefined8 *)(this + 0x30));
          lVar14 = 0;
          do {
            if (lVar14 == lVar12) {
              p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              pfVar20 = (float *)std::
                                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::_M_leftmost(p_Var19);
              fVar23 = *pfVar20;
              fVar24 = pfVar20[1];
              if (fVar23 <= 800.0) {
                cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                if (cVar3 == '\0') {
                  uVar7 = 1;
                  uVar10 = 1;
                }
                else {
                  uVar7 = 2;
                  uVar10 = 2;
                }
                iVar22 = iVar22 + 1;
                *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar7;
                EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar23,fVar24,50.0);
                pPVar21 = *(Plant **)(this + 0x10);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
                pSVar15 = (SharkMinion *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
                uVar7 = SharkMinion::getRow(pSVar15);
                pPVar16 = (Projectile *)
                          Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_48,uVar7,
                                      uVar10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                uVar17 = FUN_0407e5d4(*(undefined8 *)(pPVar16 + 0xe0));
                uVar17 = operator|(uVar17,0x2000);
                FUN_0407e5d8(pPVar16 + 0xe0,uVar17);
                LaunchProjectileAt((PlantWinterMelon *)this,pPVar16,aRStack_38,uVar10);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
                Projectile::SetTarget(pPVar16,(RtWeakPtr *)&local_48);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x28),(RtWeakPtr *)&local_48);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
                iVar9 = extraout_w1_01;
                goto LAB_0407fe30;
              }
              break;
            }
            pRVar13 = (RtWeakPtrBase *)FUN_0407e648(uVar10,lVar14);
            cVar3 = Sexy::RtWeakPtrBase::operator==(pRVar13,(RtWeakPtrBase *)aRStack_50);
            lVar14 = lVar14 + 1;
          } while (cVar3 == '\0');
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    iVar9 = extraout_w1_00;
LAB_0407fe30:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar9);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar10,0x2f);
  bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  do {
    if ((iVar8 <= iVar22) || (bVar2 == false)) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      lVar14 = FUN_0407e63c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar14 == iVar6) {
        cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar3 == '\0') {
          uVar7 = 1;
          uVar10 = 1;
        }
        else {
          uVar7 = 2;
          uVar10 = 2;
        }
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar7;
        iVar8 = PlantFramework::Rand(this);
        iVar22 = (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) -
                 *(int *)(*(long *)(this + 0x10) + 0x114)) + 1;
        iVar9 = 0;
        if (iVar22 != 0) {
          iVar9 = iVar8 / iVar22;
        }
        uVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + (iVar8 - iVar9 * iVar22);
        iVar9 = PlantFramework::Rand(this);
        iVar22 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
        if (-1 < (int)uVar1) {
          iVar8 = 0;
          if (iVar22 != 0) {
            iVar8 = iVar9 / iVar22;
          }
          BoardTransforms::GridToBoardSpacePos
                    ((BoardTransforms *)(ulong)uVar1,iVar9 - iVar8 * iVar22,iVar22);
          EATextSquish::Vec3::Vec3((Vec3 *)aIStack_28,(float)(int)local_48,(float)(int)local_44,0.0)
          ;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_38);
          lVar14 = Plant::Fire(*(Plant **)(this + 0x10),
                               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                               aRStack_38,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),uVar10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          uVar17 = FUN_0407e5d4(*(undefined8 *)(lVar14 + 0xe0));
          uVar17 = operator|(uVar17,0x2000);
          FUN_0407e5d8((undefined8 *)(lVar14 + 0xe0),uVar17);
          LaunchProjectileAt((PlantWinterMelon *)this,lVar14,aIStack_28,uVar10);
        }
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      }
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar18 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    cVar3 = (**(code **)(*plVar18 + 0x200))();
    if (cVar3 != '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
      if (bVar2) {
        pRVar11 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        bVar2 = Sexy::RtObject::IsA<GridItemFlame>(pRVar11);
        if (bVar2) goto LAB_040802a4;
      }
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar12 = FUN_0407e63c(uVar10,*(undefined8 *)(this + 0x30));
      lVar14 = 0;
      do {
        if (lVar14 == lVar12) {
          p_Var19 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          pfVar20 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(p_Var19);
          fVar24 = *pfVar20;
          fVar23 = pfVar20[1];
          cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (cVar3 == '\0') {
            uVar7 = 1;
            uVar10 = 1;
          }
          else {
            uVar7 = 2;
            uVar10 = 2;
          }
          iVar22 = iVar22 + 1;
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar7;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_38,fVar24,fVar23,50.0);
          pPVar21 = *(Plant **)(this + 0x10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
          pSVar15 = (SharkMinion *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          uVar7 = SharkMinion::getRow(pSVar15);
          pPVar16 = (Projectile *)
                    Plant::Fire(pPVar21,(RtWeakPtr<Sexy::SoundResource> *)&local_48,uVar7,uVar10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          uVar17 = FUN_0407e5d4(*(undefined8 *)(pPVar16 + 0xe0));
          uVar17 = operator|(uVar17,0x2000);
          FUN_0407e5d8(pPVar16 + 0xe0,uVar17);
          LaunchProjectileAt((PlantWinterMelon *)this,pPVar16,aRStack_38,uVar10);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
          Projectile::SetTarget(pPVar16,(RtWeakPtr *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)aRStack_50);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x28),(RtWeakPtr *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          iVar9 = extraout_w1_02;
          goto LAB_04080208;
        }
        pRVar13 = (RtWeakPtrBase *)FUN_0407e648(uVar10,lVar14);
        cVar3 = Sexy::RtWeakPtrBase::operator==(pRVar13,(RtWeakPtrBase *)aRStack_50);
        lVar14 = lVar14 + 1;
      } while (cVar3 == '\0');
    }
LAB_040802a4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    iVar9 = extraout_w1_03;
LAB_04080208:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar9);
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWinterMelon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantWinterMelon::Fire
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantWinterMelon *param_4,
               RtWeakPtrBase *param_5,undefined4 param_6,undefined4 param_7)

{
  ulong uVar1;
  LawnApp *this;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  RtObject *pRVar7;
  WinterMelonProjectile *this_00;
  long lVar8;
  ResourceInfo *pRVar9;
  GridItemFlame *this_01;
  float *pfVar10;
  long *plVar11;
  PlantAnimRig_WinterMelon *pPVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  BoardEntity **ppBVar16;
  long lVar17;
  undefined8 *puVar18;
  Zombie *pZVar19;
  GridItem *this_02;
  GridItemFlame *this_03;
  undefined8 uVar20;
  int iVar21;
  Plant *pPVar22;
  code *pcVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  DVec2 aDStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  int local_70;
  float local_6c;
  undefined4 local_68;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  float local_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  float local_20;
  float fStack_1c;
  undefined4 local_18;
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"PlantIceburg");
  LawnApp::LoadGroup(this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))(param_4);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    lVar6 = 0;
    goto LAB_04080620;
  }
  if (param_4[0x54] != (PlantWinterMelon)0x0) {
    DVec2::DVec2(aDStack_a0,25.0,45.0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    lVar6 = FUN_0407f728(*(undefined8 *)(param_4 + 0x10));
    lVar6 = FUN_0407e71c(*(undefined8 *)(lVar6 + 0x70));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)(lVar6 + 8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    iVar21 = *(int *)(*(long *)(param_4 + 0x10) + 0x110);
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Insets::Insets
              ((Insets *)aRStack_60,*(int *)(*(long *)(param_4 + 0x10) + 0x114),iVar21,
               (iVar4 - *(int *)(*(long *)(param_4 + 0x10) + 0x114)) + 1,1);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,uVar5,
               (Insets *)aRStack_60);
    RemoveUndamageableEntitiesFromList(param_4,(vector *)&local_50);
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    if (cVar2 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      for (local_70 = 0; iVar21 = local_70,
          uVar13 = FUN_0407e628(CONCAT44(iStack_4c,local_50),local_48), (ulong)(long)iVar21 < uVar13
          ; local_70 = local_70 + 1) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_38,&local_70);
      }
      uVar20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
      uVar14 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar20,uVar14);
      uVar13 = 0;
      do {
        uVar15 = FUN_0407e614(CONCAT44(fStack_34,local_38),CONCAT44(uStack_2c,local_30));
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = uVar13 / uVar15;
        }
        lVar6 = uVar13 - uVar1 * uVar15;
        uVar13 = uVar13 + 1;
        ppBVar16 = (BoardEntity **)FUN_0407e634(CONCAT44(iStack_4c,local_50),lVar6);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,ppBVar16);
      } while (uVar13 != 3);
      lVar6 = 0;
      do {
        uVar20 = *(undefined8 *)(gLawnApp + 0x9f0);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_4 + 0x10));
        fVar26 = *pfVar10;
        fVar25 = pfVar10[1];
        fVar24 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_a0);
        fVar25 = fVar25 - fVar24;
        lVar8 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                **)(param_4 + 0x10));
        uVar5 = *(undefined4 *)(lVar8 + 8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        lVar8 = Board::AddProjectile
                          ((Board *)(fVar26 + 45.0),uVar20,
                           (RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar9,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        if (*(long *)(gLawnApp + 0x9f0) != 0) {
          uVar20 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
          lVar17 = FUN_0407e60c(uVar20);
          if ((lVar17 != 0) && (lVar17 = FUN_0407f9ac(uVar20), lVar17 != 0)) {
            FUN_0407e724(lVar8 + 0x184);
          }
        }
        puVar18 = (undefined8 *)FUN_0407e634(CONCAT44(fStack_1c,local_20),lVar6);
        if ((RtObject *)*puVar18 == (RtObject *)0x0) {
          pZVar19 = (Zombie *)0x0;
LAB_04080c5c:
          DVec3::DVec3((DVec3 *)&local_80);
LAB_04080c64:
          if (pZVar19 == (Zombie *)0x0) {
            pfVar10 = (float *)std::
                               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               **)(param_4 + 0x10));
            local_80 = *pfVar10 + 600.0;
            local_7c = pfVar10[1];
            local_78 = 0;
          }
          else {
LAB_04080c30:
            pcVar23 = *(code **)(*(long *)pZVar19 + 0x3b0);
            lVar17 = FUN_0407f728(*(undefined8 *)(param_4 + 0x10));
            local_70 = (*pcVar23)(*(undefined4 *)(lVar17 + 0x2c0),pZVar19);
LAB_04080b80:
            local_6c = fVar25;
            local_68 = uVar5;
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_80,(SexyVector3 *)&local_70);
          }
        }
        else {
          pZVar19 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar18);
          puVar18 = (undefined8 *)FUN_0407e634(CONCAT44(fStack_1c,local_20),lVar6);
          if ((RtObject *)*puVar18 == (RtObject *)0x0) goto LAB_04080c5c;
          this_02 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar18);
          DVec3::DVec3((DVec3 *)&local_80);
          if (this_02 == (GridItem *)0x0) goto LAB_04080c64;
          bVar3 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this_02);
          if (bVar3) {
            nop();
            lVar17 = FUN_0407f728(*(undefined8 *)(param_4 + 0x10));
            local_70 = GridItemFlame::CalcProjectileTargetLocation
                                 (this_03,*(float *)(lVar17 + 0x2c0));
            goto LAB_04080b80;
          }
          if (pZVar19 != (Zombie *)0x0) goto LAB_04080c30;
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)&local_70);
          local_80 = (float)local_88;
          local_7c = (float)local_84;
          local_78 = 0x41c80000;
        }
        lVar6 = lVar6 + 1;
        (**(code **)(*(long *)param_4 + 0x528))(param_4);
        LaunchProjectileAt(param_4,lVar8,(DVec3 *)&local_80,3);
      } while (lVar6 != 3);
      param_4[0x54] = (PlantWinterMelon)0x0;
      pRVar7 = (RtObject *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      pPVar12 = Sexy::RtObject::Cast<PlantAnimRig_WinterMelon>(pRVar7);
      std::string::string((string *)&local_70,"attack");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar12);
      std::string::~string((string *)&local_70);
      nop();
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
    }
    else {
      iVar21 = 3;
      do {
        uVar20 = *(undefined8 *)(gLawnApp + 0x9f0);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_4 + 0x10));
        fVar26 = *pfVar10;
        fVar25 = pfVar10[1];
        fVar24 = (float)ValueRange::GetRandomValue((ValueRange *)aDStack_a0);
        lVar6 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                **)(param_4 + 0x10));
        uVar5 = *(undefined4 *)(lVar6 + 8);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_90);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
        uVar20 = Board::AddProjectile
                           ((Board *)(fVar26 + 45.0),fVar25 - fVar24,uVar5,uVar20,
                            (string *)&local_20,pRVar9,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        DVec3::DVec3((DVec3 *)&local_20);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           **)(param_4 + 0x10));
        local_20 = *pfVar10 + 600.0;
        fStack_1c = pfVar10[1];
        local_18 = 0;
        (**(code **)(*(long *)param_4 + 0x528))(param_4);
        LaunchProjectileAt(param_4,uVar20,(string *)&local_20,3);
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      param_4[0x54] = (PlantWinterMelon)0x0;
      pRVar7 = (RtObject *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
      pPVar12 = Sexy::RtObject::Cast<PlantAnimRig_WinterMelon>(pRVar7);
      std::string::string((string *)&local_20,"attack");
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar12);
      std::string::~string((string *)&local_20);
      nop();
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    lVar6 = 0;
    goto LAB_04080620;
  }
  pPVar22 = *(Plant **)(param_4 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,param_5);
  lVar6 = Plant::Fire(pPVar22,(string *)&local_20,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  ToolPacketData::GetProps();
  pRVar7 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  this_00 = Sexy::RtObject::Cast<WinterMelonProjectile>(pRVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  if (this_00 != (WinterMelonProjectile *)0x0) {
    EgretflowerPlantFoodBomb::SetDamageRate
              ((EgretflowerPlantFoodBomb *)this_00,*(float *)(param_4 + 0x58));
  }
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar20 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar8 = FUN_0407e60c(uVar20);
    if ((lVar8 != 0) && (lVar8 = FUN_0407f9ac(uVar20), lVar8 != 0)) {
      FUN_0407e724(lVar6 + 0x184);
    }
  }
  PlantFramework::FindTargetZombie(aRStack_60,param_4,0);
  (**(code **)(*(long *)param_4 + 0xf8))((string *)&local_20,param_4,param_7);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  DVec3::DVec3((DVec3 *)&local_38);
  if (pRVar9 == (ResourceInfo *)0x0) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_60);
    if (cVar2 == '\0') {
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         **)(param_4 + 0x10));
      local_38 = *pfVar10 + 600.0;
      fStack_34 = pfVar10[1];
      local_30 = 0;
    }
    else {
LAB_040806e8:
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      pcVar23 = *(code **)(*plVar11 + 0x3b0);
      lVar8 = FUN_0407f728(*(undefined8 *)(param_4 + 0x10));
      local_20 = (float)(*pcVar23)(*(undefined4 *)(lVar8 + 0x2c0),plVar11);
      fStack_1c = param_2;
      local_18 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_20);
    }
  }
  else {
    bVar3 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)pRVar9);
    if (bVar3) {
      nop();
      lVar8 = FUN_0407f728(*(undefined8 *)(param_4 + 0x10));
      local_20 = (float)GridItemFlame::CalcProjectileTargetLocation
                                  (this_01,*(float *)(lVar8 + 0x2c0));
      fStack_1c = param_2;
      local_18 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_20);
    }
    else {
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_60);
      if (cVar2 != '\0') goto LAB_040806e8;
      GridItem::GetGridLocation();
      BoardTransforms::GridToBoardSpace((Point *)&local_20);
      local_38 = (float)local_50;
      local_30 = 0x41c80000;
      fStack_34 = (float)iStack_4c;
    }
  }
  (**(code **)(*(long *)param_4 + 0x528))(param_4);
  LaunchProjectileAt(param_4,lVar6,(DVec3 *)&local_38,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
LAB_04080620:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}

