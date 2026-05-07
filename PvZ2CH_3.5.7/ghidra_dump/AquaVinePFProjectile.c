// Class: AquaVinePFProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectile::StaticClassInit() */

void AquaVinePFProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVinePFProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4c928,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVinePFProjectile::StaticGetClass() */

long * AquaVinePFProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AquaVinePFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVinePFProjectile::GetClass() const */

long * AquaVinePFProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AquaVinePFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVinePFProjectile::canTargetEntity(BoardEntity const*) */

ulong __thiscall
AquaVinePFProjectile::canTargetEntity(AquaVinePFProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  RealObject *this_00;
  undefined8 uVar5;
  GridItem *pGVar6;
  ulong uVar7;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if ((bVar1) && (nop(), this_00 != (RealObject *)0x0)) {
      uVar5 = operator|(1,0x200);
      uVar5 = operator|(uVar5,0x20);
      uVar5 = operator|(uVar5,0x10000);
      uVar4 = operator|(uVar5,8);
      cVar2 = Zombie::MatchesAny((Zombie *)this_00,uVar4);
      if (cVar2 == '\0') {
        uVar7 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this);
        return uVar7;
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar1) &&
         (pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar6 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar6 + 0x200))();
        if (bVar3 != 0) {
          return (ulong)bVar3;
        }
      }
    }
  }
  return 0;
}


/* AquaVinePFProjectile::getProps() */

void __thiscall AquaVinePFProjectile::getProps(AquaVinePFProjectile *this)

{
  RtObject *this_00;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  if (this_00 != (RtObject *)0x0) {
    Sexy::RtObject::Cast<AquaVinePFProjectileProps>(this_00);
    return;
  }
  return;
}


/* AquaVinePFProjectile::canPushZombie(Zombie const*) */

byte __thiscall AquaVinePFProjectile::canPushZombie(AquaVinePFProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = getProps(this);
  if ((lVar5 != 0) && (param_1 != (Zombie *)0x0)) {
    uVar4 = FUN_03f4b2f4(*(undefined4 *)(this + 0x24));
    cVar1 = RealObject::IsOnTeam(param_1,uVar4);
    if ((cVar1 == '\0') &&
       (((cVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1), cVar1 != '\0' &&
         (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2)) &&
        (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)))) {
      bVar3 = ClassRestrictionSet::IsExcluded
                        ((ClassRestrictionSet *)(this + 0x1d8),(GameObject *)param_1);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* AquaVinePFProjectile::AquaVinePFProjectile() */

void __thiscall AquaVinePFProjectile::AquaVinePFProjectile(AquaVinePFProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06799950;
  *(undefined ***)(this + 0x10) = &PTR__AquaVinePFProjectile_06799b40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1d8));
  this[0x200] = (AquaVinePFProjectile)0x0;
  this[0x201] = (AquaVinePFProjectile)0x0;
  this[0x202] = (AquaVinePFProjectile)0x0;
  return;
}


/* AquaVinePFProjectile::StaticNew() */

AquaVinePFProjectile * AquaVinePFProjectile::StaticNew(void)

{
  AquaVinePFProjectile *this;
  
  this = ::operator_new(0x208);
  AquaVinePFProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectile::whirlpoolDamage(BoardEntity*) */

void __thiscall
AquaVinePFProjectile::whirlpoolDamage(AquaVinePFProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  long lVar2;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = getProps(this);
  uVar1 = *(undefined4 *)(lVar2 + 0x1e4);
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = uVar1;
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectile::pushZombie(BoardEntity*) */

void __thiscall AquaVinePFProjectile::pushZombie(AquaVinePFProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  Zombie *this_02;
  float *pfVar3;
  float *pfVar4;
  GridItem *pGVar5;
  float fVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c0));
  do {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c0));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (param_1 == (BoardEntity *)this_01) {
      this_02 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (this_02 != (Zombie *)0x0) {
        cVar2 = canPushZombie(this,this_02);
        if (cVar2 != '\0') {
          pfVar3 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_02);
          fVar6 = *pfVar3;
          pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          if (fVar6 < *pfVar4) {
            if (*(float *)(this_00 + 8) < fVar6) goto LAB_03f4f468;
            local_10 = pfVar3[2];
            local_18 = CONCAT44((int)((ulong)*(undefined8 *)pfVar3 >> 0x20),*pfVar4);
            (**(code **)(*(long *)this_02 + 0x78))(this_02,(__normal_iterator *)&local_18);
          }
        }
        fVar7 = *(float *)(this_00 + 0xc);
        fVar6 = (float)PVZ_T();
        if (fVar7 <= fVar6) {
          *(float *)(this_00 + 0xc) = *(float *)(this_00 + 0xc) + 1.0;
          whirlpoolDamage(this,(BoardEntity *)this_02);
        }
      }
LAB_03f4f468:
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      if ((pGVar5 != (GridItem *)0x0) &&
         (fVar7 = *(float *)(this_00 + 0xc), fVar6 = (float)PVZ_T(), fVar7 <= fVar6)) {
        *(float *)(this_00 + 0xc) = *(float *)(this_00 + 0xc) + 1.0;
        whirlpoolDamage(this,(BoardEntity *)pGVar5);
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  } while( true );
}


/* AquaVinePFProjectile::InitializeValues(ClassRestrictionSet, bool, bool, bool) */

void __thiscall
AquaVinePFProjectile::InitializeValues
          (AquaVinePFProjectile *this,ZombieRestrictionSet *param_2,AquaVinePFProjectile param_3,
          AquaVinePFProjectile param_4,AquaVinePFProjectile param_5)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  std::vector<targetData,std::allocator<targetData>>::clear
            ((vector<targetData,std::allocator<targetData>> *)(this + 0x1c0));
  ZombieRestrictionSet::operator=((ZombieRestrictionSet *)(this + 0x1d8),param_2);
  this[0x200] = param_3;
  this[0x201] = param_4;
  this[0x202] = param_5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectile::moveThroughTime(float) */

void __thiscall AquaVinePFProjectile::moveThroughTime(AquaVinePFProjectile *this,float param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  PopAnimRig *this_00;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  undefined8 *puVar10;
  long *plVar11;
  RtWeakPtrBase *pRVar12;
  RtObject *pRVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  Zombie *pZVar20;
  float fVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = getProps(this);
                    /* WARNING: Load size is inaccurate */
  pZVar20._0_4_ = *(Zombie **)(lVar5 + 0x1e0);
  if (this[0x200] == (AquaVinePFProjectile)0x0) {
    if ((this[0x202] != (AquaVinePFProjectile)0x0) && (this[0x201] == (AquaVinePFProjectile)0x0)) {
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1a8));
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1a8));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar3) {
        pRVar12 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar12);
        pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar13);
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
          if (cVar2 != '\0') {
            pRVar13 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            bVar3 = Sexy::RtObject::IsA<Zomboss>(pRVar13);
            if (!bVar3) {
              pRVar13 = (RtObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>(pRVar13);
              if (!bVar3) {
                uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                Zombie::ApplyCondition(pZVar20._0_4_,0,uVar14,2,1);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                goto LAB_03f4fea8;
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        }
LAB_03f4fea8:
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      }
    }
  }
  else if (this[0x201] == (AquaVinePFProjectile)0x0) {
    this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string((string *)&local_18,"projectile_plantfood");
    fVar18 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar19 = *pfVar6;
    pfVar7 = (float *)Projectile::GetVelocity((Projectile *)this);
    pfVar8 = (float *)Projectile::GetVelocityScale((Projectile *)this);
    if (fVar19 + fVar18 * *pfVar8 * *pfVar7 < (float)((iVar4 + 0x19) * 8)) {
      ProjectileHelpers::Integrate((Projectile *)this,param_1);
      uVar14 = *(undefined8 *)(this + 0x1a8);
      fVar18 = *pfVar6;
      iVar4 = FUN_03f4b398(uVar14,*(undefined8 *)(this + 0x1b0));
      uVar1 = iVar4 - 1;
      if (-1 < (int)uVar1) {
        lVar15 = (long)(int)uVar1 + -1;
        lVar5 = lVar15;
        lVar17 = (long)(int)uVar1;
        while( true ) {
          lVar16 = lVar5;
          this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03f4b3a4(uVar14,lVar17);
          pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
          bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar13);
          if (bVar3) {
            pRVar12 = (RtWeakPtrBase *)FUN_03f4b3a4(*(undefined8 *)(this + 0x1a8),lVar17);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar12);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
            if (cVar2 == '\0') {
              local_28 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(this + 0x1a8));
              local_20 = __gnu_cxx::
                         __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                      *)&local_28,lVar17);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_18,(__normal_iterator *)&local_20);
              std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
              ::erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)(this + 0x1a8),local_18);
            }
            else {
              pZVar20 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              cVar2 = canPushZombie(this,pZVar20);
              if (cVar2 != '\0') {
                p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                pfVar6 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var9);
                if (*pfVar6 < 744.0) {
                  p_Var9 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  puVar10 = (undefined8 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var9);
                  local_18._0_4_ = (float)*puVar10;
                  local_10 = *(undefined4 *)(puVar10 + 1);
                  local_18 = CONCAT44((int)((ulong)*puVar10 >> 0x20),
                                      (fVar18 - fVar19) + (float)local_18);
                  plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                  (**(code **)(*plVar11 + 0x78))(plVar11,(string *)&local_18);
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          if (lVar16 == lVar15 - (ulong)uVar1) break;
          uVar14 = *(undefined8 *)(this + 0x1a8);
          lVar5 = lVar16 + -1;
          lVar17 = lVar16;
        }
      }
    }
    else {
      if (this[0x202] != (AquaVinePFProjectile)0x0) {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1a8));
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1a8));
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
              bVar3) {
          pRVar12 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar12);
          pRVar13 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar13);
          if (bVar3) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
            if (cVar2 != '\0') {
              pRVar13 = (RtObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              bVar3 = Sexy::RtObject::IsA<Zomboss>(pRVar13);
              if (!bVar3) {
                pRVar13 = (RtObject *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>(pRVar13);
                if (!bVar3) {
                  uVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                  Zombie::ApplyCondition(pZVar20._0_4_,0,uVar14,2,1);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
                  goto LAB_03f501bc;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          else {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
LAB_03f501bc:
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
        }
      }
      (**(code **)(*(long *)this + 0x48))(this);
    }
    goto LAB_03f4fe04;
  }
  Projectile::moveThroughTime((Projectile *)this,param_1);
LAB_03f4fe04:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVinePFProjectile::~AquaVinePFProjectile() */

void __thiscall AquaVinePFProjectile::~AquaVinePFProjectile(AquaVinePFProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06799950;
  *(undefined ***)(this + 0x10) = &PTR__AquaVinePFProjectile_06799b40;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1d8));
  std::vector<targetData,std::allocator<targetData>>::~vector
            ((vector<targetData,std::allocator<targetData>> *)(this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AquaVinePFProjectile::~AquaVinePFProjectile() */

void __thiscall AquaVinePFProjectile::~AquaVinePFProjectile(AquaVinePFProjectile *this)

{
  ~AquaVinePFProjectile(this + -0x10);
  return;
}


/* AquaVinePFProjectile::~AquaVinePFProjectile() */

void __thiscall AquaVinePFProjectile::~AquaVinePFProjectile(AquaVinePFProjectile *this)

{
  ~AquaVinePFProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AquaVinePFProjectile::~AquaVinePFProjectile() */

void __thiscall AquaVinePFProjectile::~AquaVinePFProjectile(AquaVinePFProjectile *this)

{
  ~AquaVinePFProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVinePFProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
AquaVinePFProjectile::OnCollideEntity(AquaVinePFProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  float local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
LAB_03f513d0:
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  else {
    cVar1 = canTargetEntity(this,param_1);
    if (cVar1 != '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x1a8);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      ToolPacketData::GetProps();
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar5,uVar6,aRStack_20);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar2) {
        FishingZombieInitData::FishingZombieInitData((FishingZombieInitData *)&local_18);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_18,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar8 = *pfVar7;
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_10 = (float)(iVar4 << 1) + fVar8;
        local_c = PVZ_T();
        std::vector<targetData,std::allocator<targetData>>::push_back
                  ((vector<targetData,std::allocator<targetData>> *)(this + 0x1c0),
                   (targetData *)&local_18);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)&local_28);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)this_00,(RtWeakPtr *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        if (this[0x201] != (AquaVinePFProjectile)0x0) {
          pushZombie(this,param_1);
        }
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_18);
        goto LAB_03f513d0;
      }
      if (this[0x201] != (AquaVinePFProjectile)0x0) {
        pushZombie(this,param_1);
        uVar3 = 0;
        goto LAB_03f51274;
      }
    }
    uVar3 = 0;
  }
LAB_03f51274:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

