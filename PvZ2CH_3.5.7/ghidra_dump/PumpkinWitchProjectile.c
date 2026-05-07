// Class: PumpkinWitchProjectile


/* PumpkinWitchProjectile::~PumpkinWitchProjectile() */

void __thiscall PumpkinWitchProjectile::~PumpkinWitchProjectile(PumpkinWitchProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690f040;
  *(undefined ***)(this + 0x10) = &PTR__PumpkinWitchProjectile_0690f230;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PumpkinWitchProjectile::~PumpkinWitchProjectile() */

void __thiscall PumpkinWitchProjectile::~PumpkinWitchProjectile(PumpkinWitchProjectile *this)

{
  ~PumpkinWitchProjectile(this + -0x10);
  return;
}


/* PumpkinWitchProjectile::~PumpkinWitchProjectile() */

void __thiscall PumpkinWitchProjectile::~PumpkinWitchProjectile(PumpkinWitchProjectile *this)

{
  ~PumpkinWitchProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PumpkinWitchProjectile::~PumpkinWitchProjectile() */

void __thiscall PumpkinWitchProjectile::~PumpkinWitchProjectile(PumpkinWitchProjectile *this)

{
  ~PumpkinWitchProjectile(this + -0x10);
  return;
}


/* PumpkinWitchProjectile::PumpkinWitchProjectile() */

void __thiscall PumpkinWitchProjectile::PumpkinWitchProjectile(PumpkinWitchProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690f040;
  *(undefined ***)(this + 0x10) = &PTR__PumpkinWitchProjectile_0690f230;
  return;
}


/* PumpkinWitchProjectile::StaticNew() */

PumpkinWitchProjectile * PumpkinWitchProjectile::StaticNew(void)

{
  PumpkinWitchProjectile *this;
  
  this = ::operator_new(0x1b0);
  PumpkinWitchProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::StaticClassInit() */

void PumpkinWitchProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PumpkinWitchProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04914c80,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PumpkinWitchProjectile::StaticGetClass() */

long * PumpkinWitchProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PumpkinWitchProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PumpkinWitchProjectile::GetClass() const */

long * PumpkinWitchProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PumpkinWitchProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04914f94 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PumpkinWitchProjectile::onUpdate(float) */

void PumpkinWitchProjectile::onUpdate(float param_1)

{
  long in_x0;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar2 = *(undefined4 *)(in_x0 + 0x1ac);
  local_8 = ___stack_chk_guard;
  auVar1 = PVZ_T();
  local_10 = 0x3f800000;
  local_c = 0x40000000;
  CurveLerp<float>(auVar1,uVar2,auVar1._0_4_,&local_10,&local_c,1);
  FUN_04914ac0(in_x0 + 0xc0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::updateAnimLayerVisibility(std::string const&) */

void __thiscall
PumpkinWitchProjectile::updateAnimLayerVisibility(PumpkinWitchProjectile *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  PopAnimRig *this_00;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    std::string::string(asStack_20,"fx_blue");
    std::string::string(asStack_18,"fx_green");
    std::string::string(asStack_10,"fx_yellow");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_38,asStack_20,3,asStack_40)
    ;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    nop();
    nop();
    local_50 = FUN_04914fc4(local_38);
    local_48 = FUN_04915014(local_30);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      FUN_031f5e7c(asStack_40,&DAT_0566b8a8,param_1);
      bVar2 = (bool)std::operator==(psVar3,asStack_40);
      this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      PopAnimRig::SetLayerVisibility(this_00,psVar3,bVar2);
      std::string::~string(asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::onProjectileInitialized() */

void __thiscall PumpkinWitchProjectile::onProjectileInitialized(PumpkinWitchProjectile *this)

{
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  this[0x1a6] = (PumpkinWitchProjectile)0x0;
  this[0x1a5] = (PumpkinWitchProjectile)0x0;
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar1;
  *(float *)(this + 0x1ac) = fVar1 + 1.2;
  std::string::string(asStack_10,"yellow");
  updateAnimLayerVisibility(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::setPlantFoodAttack(bool) */

void __thiscall
PumpkinWitchProjectile::setPlantFoodAttack(PumpkinWitchProjectile *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  this[0x1a5] = (PumpkinWitchProjectile)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"blue");
  updateAnimLayerVisibility(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::setAvatarAttack(bool) */

void __thiscall PumpkinWitchProjectile::setAvatarAttack(PumpkinWitchProjectile *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  this[0x1a6] = (PumpkinWitchProjectile)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"green");
  updateAnimLayerVisibility(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProjectile::SpawnPumpkinZombie(Zombie*) */

void __thiscall
PumpkinWitchProjectile::SpawnPumpkinZombie(PumpkinWitchProjectile *this,Zombie *param_1)

{
  int iVar1;
  string *psVar2;
  PlantType *this_00;
  long extraout_x0;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar3;
  RtObject *this_03;
  Plant *pPVar4;
  undefined4 *puVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  ZombieType *this_05;
  SexyVector3 *this_06;
  undefined8 uVar6;
  ZombiePumpkin *pZVar7;
  ZombiePumpkin *extraout_x0_00;
  char *__s;
  size_t __n;
  code *pcVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  string asStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"pumpkinwitch");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_68);
  nop();
  this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
  PlantType::GetProps(this_00);
  nop();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_68,"pumpkinwitch");
  iVar1 = PlayerInfo::GetPlantStarLevel(this_02,asStack_68,false);
  iVar1 = iVar1 + -1;
  std::string::~string(asStack_68);
  nop();
  lVar3 = Projectile::GetInstigator((Projectile *)this);
  if (lVar3 != 0) {
    this_03 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar4 = Sexy::RtObject::Cast<Plant>(this_03);
    if (pPVar4 != (Plant *)0x0) {
      iVar1 = FUN_04914a6c(*(undefined4 *)(pPVar4 + 0x50));
      iVar1 = iVar1 + -1;
    }
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (this[0x1a5] == (PumpkinWitchProjectile)0x0) {
    puVar5 = (undefined4 *)FUN_04914ad4(*(undefined8 *)(extraout_x0 + 0x2b8),0);
    uVar11 = *puVar5;
    fVar12 = (float)puVar5[1];
  }
  else if (this[0x1a6] == (PumpkinWitchProjectile)0x0) {
    puVar5 = (undefined4 *)FUN_04914ad4(*(undefined8 *)(extraout_x0 + 0x2b8),1);
    uVar11 = *puVar5;
    fVar12 = (float)puVar5[1];
  }
  else {
    puVar5 = (undefined4 *)FUN_04914ad4(*(undefined8 *)(extraout_x0 + 0x2b8),2);
    uVar11 = *puVar5;
    fVar12 = (float)puVar5[1];
  }
  Set8BytesTo0(asStack_c0);
  this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
  FUN_05475d88(asStack_b8,lVar3 + 8);
  __n = 0;
  lVar3 = FUN_05474374(asStack_b8,&DAT_0566b8b0);
  if (lVar3 == -1) {
    __s = "zombie_pumpkin";
  }
  else {
    __s = "zombie_pumpkin_imp";
  }
  std::string::append(asStack_c0,__s,__n);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  this_05 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
  ZombieType::EnsureResourceGroupsLoaded(this_05);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_90);
  local_8c = 0;
  local_90 = iVar1 + 1;
  local_8b = 1;
  plVar9 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar9 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)aRStack_b0);
  this_06 = (SexyVector3 *)(*pcVar8)(plVar9,asStack_68,0xfffffffb,(SpawnZombieParams *)&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  RealObject::JoinTeam((RealObject *)this_06,1);
  Zombie::SetFacing((Zombie *)this_06,1);
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  (**(code **)(*(long *)this_06 + 0x78))(this_06,uVar6);
  BoardEntity::PlaceOnBoard(this_06);
  fVar10 = (float)FUN_04914ac8(*(undefined4 *)(this_06 + 0x280));
  Zombie::SetHitpoints((Zombie *)this_06,fVar10 * fVar12);
  if (iVar1 != 0) {
    Zombie::SetZombieScale((Zombie *)this_06,1.2);
  }
  psVar2 = asStack_68;
  std::string::string(asStack_a8,"yellow");
  nop();
  if (this[0x1a5] != (PumpkinWitchProjectile)0x0) {
    std::string::append(asStack_a8,"blue",(size_t)psVar2);
  }
  if (this[0x1a6] != (PumpkinWitchProjectile)0x0) {
    std::string::append(asStack_a8,"green",(size_t)psVar2);
  }
  if (lVar3 == -1) {
    pZVar7 = Sexy::RtObject::Cast<ZombiePumpkin>((RtObject *)this_06);
  }
  else {
    nop();
    pZVar7 = extraout_x0_00;
  }
  (**(code **)(*(long *)pZVar7 + 0xa18))(pZVar7,this[0x1a5]);
  (**(code **)(*(long *)pZVar7 + 0xa10))(pZVar7,asStack_b8);
  FUN_04914ac8(*(undefined4 *)(param_1 + 0x280));
  (**(code **)(*(long *)pZVar7 + 0xa20))(pZVar7);
  (**(code **)(*(long *)pZVar7 + 0xa28))(uVar11,pZVar7);
  uVar11 = FUN_04914a6c(*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(long *)pZVar7 + 0xa30))(pZVar7,uVar11);
  (**(code **)(*(long *)pZVar7 + 0xa38))(pZVar7,asStack_a8);
  pcVar8 = *(code **)(*(long *)param_1 + 0x120);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,asStack_68,4,aPStack_a0,0);
  (*pcVar8)(param_1,asStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  std::string::~string(asStack_a8);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PumpkinWitchProjectile::OnCollideEntity(BoardEntity*) */

bool __thiscall
PumpkinWitchProjectile::OnCollideEntity(PumpkinWitchProjectile *this,BoardEntity *param_1)

{
  Zombie *extraout_x0;
  long lVar1;
  Zombie *extraout_x0_00;
  
  FUN_04914adc(this + 0xc4);
  nop();
  lVar1 = (**(code **)(*(long *)this + 0x1a0))(this);
  if (lVar1 != 0) {
    nop();
    if (extraout_x0 == extraout_x0_00) {
      SpawnPumpkinZombie(this,extraout_x0);
      (**(code **)(*(long *)this + 0x48))(this);
    }
    return extraout_x0 == extraout_x0_00;
  }
  return false;
}

