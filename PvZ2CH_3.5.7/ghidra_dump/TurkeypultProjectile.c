// Class: TurkeypultProjectile


/* TurkeypultProjectile::~TurkeypultProjectile() */

void __thiscall TurkeypultProjectile::~TurkeypultProjectile(TurkeypultProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067298e0;
  *(undefined ***)(this + 0x10) = &PTR__TurkeypultProjectile_06729ad0;
  std::string::~string((string *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TurkeypultProjectile::~TurkeypultProjectile() */

void __thiscall TurkeypultProjectile::~TurkeypultProjectile(TurkeypultProjectile *this)

{
  ~TurkeypultProjectile(this + -0x10);
  return;
}


/* TurkeypultProjectile::~TurkeypultProjectile() */

void __thiscall TurkeypultProjectile::~TurkeypultProjectile(TurkeypultProjectile *this)

{
  ~TurkeypultProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TurkeypultProjectile::~TurkeypultProjectile() */

void __thiscall TurkeypultProjectile::~TurkeypultProjectile(TurkeypultProjectile *this)

{
  ~TurkeypultProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProjectile::TurkeypultProjectile() */

void __thiscall TurkeypultProjectile::TurkeypultProjectile(TurkeypultProjectile *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067298e0;
  *(undefined ***)(this + 0x10) = &PTR__TurkeypultProjectile_06729ad0;
  std::string::string((string *)(this + 0x1a8),"turkeypult_basic");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b0) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TurkeypultProjectile::StaticNew() */

TurkeypultProjectile * TurkeypultProjectile::StaticNew(void)

{
  TurkeypultProjectile *this;
  
  this = ::operator_new(0x1b8);
  TurkeypultProjectile(this);
  return this;
}


/* TurkeypultProjectile::InitializeProjectileValues(std::string, int) */

void __thiscall
TurkeypultProjectile::InitializeProjectileValues
          (TurkeypultProjectile *this,undefined8 param_2,undefined4 param_3)

{
  thunk_FUN_05475e00(this + 0x1a8);
  *(undefined4 *)(this + 0x1b0) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProjectile::StaticClassInit() */

void TurkeypultProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TurkeypultProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b03b6c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TurkeypultProjectile::StaticGetClass() */

long * TurkeypultProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TurkeypultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TurkeypultProjectile::GetClass() const */

long * TurkeypultProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"TurkeypultProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProjectile::spawnTurkey() */

void __thiscall TurkeypultProjectile::spawnTurkey(TurkeypultProjectile *this)

{
  string *psVar1;
  float *pfVar2;
  RtObject *this_00;
  ZombieTurkeypultBasic *this_01;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3(aVStack_40,*pfVar2 - 20.0,pfVar2[1],pfVar2[2]);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(this + 0x1b0);
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
  this_00 = (RtObject *)(*pcVar4)(plVar3,aRStack_48,0,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,aVStack_40);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,*(undefined4 *)(this + 0x1b0));
  this_01 = Sexy::RtObject::Cast<ZombieTurkeypultBasic>(this_00);
  ZombieTurkeypultBasic::TurkeyRefreshStats(this_01);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  RealObject::JoinTeam((RealObject *)this_00,1);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProjectile::handleImpact(BoardEntity*) */

void __thiscall TurkeypultProjectile::handleImpact(TurkeypultProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  Zombie *pZVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Projectile::handleImpact((Projectile *)this,param_1);
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
     (bVar1 = std::operator==((string *)(this + 0x1a8),"turkeypult_turkzilla_lv5"), bVar1)) {
    (**(code **)(*(long *)pZVar3 + 0x298))(0x3f800000,pZVar3);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetCurrentWorldName(this_01);
  bVar1 = std::operator!=(asStack_10,"skycity");
  std::string::~string(asStack_10);
  if (bVar1) {
    spawnTurkey(this);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

