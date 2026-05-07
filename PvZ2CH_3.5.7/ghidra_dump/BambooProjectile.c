// Class: BambooProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooProjectile::StaticClassInit() */

void BambooProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BambooProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0491402c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BambooProjectile::StaticGetClass() */

long * BambooProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BambooProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BambooProjectile::GetClass() const */

long * BambooProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BambooProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooProjectile::onDestroy() */

void __thiscall BambooProjectile::onDestroy(BambooProjectile *this)

{
  long lVar1;
  RtObject *this_00;
  Plant *pPVar2;
  string *extraout_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1c1] != (BambooProjectile)0x0) &&
     (lVar1 = Projectile::GetInstigator((Projectile *)this), lVar1 != 0)) {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar2 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar2 != (Plant *)0x0) {
      nop();
      std::string::string(asStack_10,"");
      PlantBamboo::onAttackFinished(extraout_x0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooProjectile::tossZombie(Zombie*) */

void __thiscall BambooProjectile::tossZombie(BambooProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  ZombieTosserSubSystem *pZVar4;
  uint uVar5;
  Point *extraout_x1;
  TPoint *pTVar6;
  Board *this_00;
  ZombieTosserSubSystem *pZVar9;
  float fVar7;
  float fVar8;
  TPoint<int> aTStack_88 [8];
  int local_80 [2];
  int local_78;
  int local_74;
  float local_70 [4];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar7 = pfVar3[1];
  fVar8 = *pfVar3;
  EATextSquish::Vec3::Vec3((Vec3 *)local_70,fVar8 + 80.0,fVar7,0.0);
  cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
  if (cVar1 == '\0') {
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
  }
  else {
    uVar5 = (uint)DAT_06b6f760 & 1;
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if (((DAT_06b6f760 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b6f760), iVar2 != 0)) {
      Sexy::Point::Point((Point *)&DAT_06b6f708,uVar5,-1);
      Sexy::Point::Point((Point *)&DAT_06b6f710,uVar5,1);
      Sexy::Point::Point((Point *)&DAT_06b6f718,1,-1);
      Sexy::Point::Point((Point *)&DAT_06b6f720,1,1);
      __cxa_guard_release(&DAT_06b6f760);
    }
    iVar2 = 0;
    pTVar6 = (TPoint *)&DAT_06b6f708;
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)&DAT_06b6f000,fVar8,fVar7);
    do {
      Sexy::TPoint<int>::operator+(aTStack_88,pTVar6);
      Sexy::Point::Point((Point *)local_80,(TPoint *)aVStack_60);
      cVar1 = Board::IsPitOfDoom(this_00,(Point *)local_80);
      if (cVar1 != '\0') {
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)local_80,extraout_x1);
        EATextSquish::Vec3::Vec3(aVStack_60,(float)local_78,(float)local_74,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)local_70,(SexyVector3 *)aVStack_60);
        if ((int)(&DAT_06b6f70c)[(long)iVar2 * 2] < 1) {
          pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
        }
        else {
          pZVar9._0_4_ = (ZombieTosserSubSystem *)0x44228000;
        }
        if (((&DAT_06b6f708)[(long)iVar2 * 2] == 0) && (local_80[0] < *(int *)(this_00 + 0xf8))) {
          local_70[0] = local_70[0] + 40.0;
        }
        goto LAB_04913ca8;
      }
      iVar2 = iVar2 + 1;
      pTVar6 = pTVar6 + 8;
    } while (iVar2 != 4);
    pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43020000;
  }
LAB_04913ca8:
  local_70[0] = (float)NEON_fminnm(local_70[0],0x44480000);
  pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar9._0_4_,0x3f000000,pZVar4,param_1,(Vec3 *)local_70,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BambooProjectile::BambooProjectile() */

void __thiscall BambooProjectile::BambooProjectile(BambooProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690ec00;
  *(undefined ***)(this + 0x10) = &PTR__BambooProjectile_0690edf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  this[0x1c1] = (BambooProjectile)0x0;
  this[0x1c0] = (BambooProjectile)0x0;
  return;
}


/* BambooProjectile::StaticNew() */

BambooProjectile * BambooProjectile::StaticNew(void)

{
  BambooProjectile *this;
  
  this = ::operator_new(0x1c8);
  BambooProjectile(this);
  return this;
}


/* BambooProjectile::~BambooProjectile() */

void __thiscall BambooProjectile::~BambooProjectile(BambooProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690ec00;
  *(undefined ***)(this + 0x10) = &PTR__BambooProjectile_0690edf0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BambooProjectile::~BambooProjectile() */

void __thiscall BambooProjectile::~BambooProjectile(BambooProjectile *this)

{
  ~BambooProjectile(this + -0x10);
  return;
}


/* BambooProjectile::~BambooProjectile() */

void __thiscall BambooProjectile::~BambooProjectile(BambooProjectile *this)

{
  ~BambooProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BambooProjectile::~BambooProjectile() */

void __thiscall BambooProjectile::~BambooProjectile(BambooProjectile *this)

{
  ~BambooProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BambooProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall BambooProjectile::OnCollideEntity(BambooProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  BambooProjectile BVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  Plant *pPVar5;
  Zombie *this_01;
  undefined8 uVar6;
  undefined8 uVar7;
  RealObject *this_02;
  long lVar8;
  RtObject *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BVar1 = this[0x1c0];
  if (param_1 == (BoardEntity *)0x0) {
LAB_049144cc:
    this_01 = (Zombie *)0x0;
  }
  else {
    pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    if (pPVar5 != (Plant *)0x0) {
LAB_04914494:
      cVar2 = '\0';
      goto LAB_04914498;
    }
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_01 == (Zombie *)0x0) goto LAB_049144cc;
    cVar2 = (**(code **)(*(long *)this_01 + 0x328))();
    if (cVar2 != '\0') goto LAB_04914494;
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
  if (cVar2 == '\0') {
LAB_04914508:
    cVar2 = '\0';
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1a8);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                         (uVar6,uVar7,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar3) goto LAB_04914508;
    this_02 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::string((string *)&local_10,"Play_Plant_Bloomerange_Impact");
    RealObject::PlayPositionalSound(this_02,(string *)&local_10,0.0);
    std::string::~string((string *)&local_10);
    nop();
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_20);
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    (**(code **)(*(long *)this + 0x168))(this,param_1);
    lVar8 = Projectile::GetInstigator((Projectile *)this);
    if (lVar8 == 0) {
LAB_049146dc:
      if (this_01 != (Zombie *)0x0) {
LAB_049146e0:
        bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01);
        if ((((((!bVar3) &&
               (cVar2 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar2 == '\0')) &&
             ((bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar3 &&
              (bVar3 = Sexy::RtObject::IsA<ZombiePirateSeagull>((RtObject *)this_01), !bVar3)))) &&
            ((bVar3 = Sexy::RtObject::IsA<ZombieDarkKing>((RtObject *)this_01), !bVar3 &&
             ((cVar2 = Zombie::CanBeLaunchedByPlants(this_01), cVar2 != '\0' &&
              (cVar2 = Zombie::IsControlled(this_01), cVar2 == '\0')))))) &&
           (BVar1 != (BambooProjectile)0x0)) {
          cVar2 = Zombie::HasCondition(this_01,0xe);
          if (cVar2 == '\0') {
            tossZombie(this,this_01);
            cVar2 = '\0';
            goto LAB_0491450c;
          }
        }
      }
      goto LAB_04914508;
    }
    this_03 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar5 = Sexy::RtObject::Cast<Plant>(this_03);
    if ((pPVar5 == (Plant *)0x0) || (this_01 == (Zombie *)0x0)) goto LAB_049146dc;
    this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
    bVar3 = std::operator==((string *)(lVar8 + 8),"piano");
    if (!bVar3) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
      bVar3 = std::operator==((string *)(lVar8 + 8),"pirate_barrel");
      if (bVar3) goto LAB_04914670;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
      bVar3 = std::operator==((string *)(lVar8 + 8),"catapult");
      if (bVar3) goto LAB_04914670;
      goto LAB_049146e0;
    }
LAB_04914670:
    cVar4 = Zombie::CanTakeFatalDamage(this_01);
    if (cVar4 == '\0') goto LAB_049146e0;
    Zombie::TakeFatalDamage(this_01,(BoardEntity *)pPVar5);
    cVar2 = Plant::IsInvincible(pPVar5,false);
    if (cVar2 == '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      Plant::TakeSmashAttack(pPVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      cVar2 = cVar4;
    }
  }
LAB_0491450c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
LAB_04914498:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}

