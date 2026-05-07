// Class: ZombieLostCityJane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityJane::getElectrocutePAMName() const */

void __thiscall ZombieLostCityJane::getElectrocutePAMName(ZombieLostCityJane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_LOSTCITY_JANE_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityJane::getAshPAMName() const */

void __thiscall ZombieLostCityJane::getAshPAMName(ZombieLostCityJane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_LOSTCITY_JANE_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieLostCityJane::~ZombieLostCityJane() */

void __thiscall ZombieLostCityJane::~ZombieLostCityJane(ZombieLostCityJane *this)

{
  *(undefined ***)this = &PTR_GetClass_068e8050;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityJane_068e8a68;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityJane::~ZombieLostCityJane() */

void __thiscall ZombieLostCityJane::~ZombieLostCityJane(ZombieLostCityJane *this)

{
  ~ZombieLostCityJane(this + -0x10);
  return;
}


/* ZombieLostCityJane::~ZombieLostCityJane() */

void __thiscall ZombieLostCityJane::~ZombieLostCityJane(ZombieLostCityJane *this)

{
  ~ZombieLostCityJane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityJane::~ZombieLostCityJane() */

void __thiscall ZombieLostCityJane::~ZombieLostCityJane(ZombieLostCityJane *this)

{
  ~ZombieLostCityJane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityJane::StaticClassInit() */

void ZombieLostCityJane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLostCityJane");
    (*pcVar2)(plVar1,asStack_10,FUN_047d5030,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityJane::StaticGetClass() */

long * ZombieLostCityJane::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityJane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityJane::GetClass() const */

long * ZombieLostCityJane::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityJane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityJane::ZombieLostCityJane() */

void __thiscall ZombieLostCityJane::ZombieLostCityJane(ZombieLostCityJane *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068e8050;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityJane_068e8a68;
  return;
}


/* ZombieLostCityJane::StaticNew() */

ZombieLostCityJane * ZombieLostCityJane::StaticNew(void)

{
  ZombieLostCityJane *this;
  
  this = ::operator_new(0x800);
  ZombieLostCityJane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityJane::OverrideProjectileCollision(Projectile*) */

void __thiscall
ZombieLostCityJane::OverrideProjectileCollision(ZombieLostCityJane *this,Projectile *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  ZombieLostCityJaneProps *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar10 = *(code **)(*(long *)this + 0xb8);
  if (*(code **)(*(long *)param_1 + 0xc0) == RealObject::GetCollisionFlags) {
    uVar3 = RealObject::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0xc0))(param_1);
  }
  (*pcVar10)(this,uVar3);
  pZVar5 = Zombie::GetProps<ZombieLostCityJaneProps>((Zombie *)this);
  local_20 = Projectile::GetProps(param_1);
  local_28 = FUN_047d51c4(*(undefined8 *)(pZVar5 + 0x228));
  uVar6 = FUN_047d5174(*(undefined8 *)(pZVar5 + 0x220));
  uVar7 = FUN_047d51c4(*(undefined8 *)(pZVar5 + 0x228));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ProjectilePropertySheet>const*,std::vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>>,ProjectilePropertySheet_const*>
                       (uVar6,uVar7,&local_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
  if (bVar1) {
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)param_1,0);
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_18 = *puVar8;
    local_10 = *(undefined4 *)(puVar8 + 1);
    pZVar5 = Zombie::GetProps<ZombieLostCityJaneProps>((Zombie *)this);
    iVar4 = FUN_047d4c84(*(undefined4 *)(pZVar5 + 0x218));
    local_18 = CONCAT44(local_18._4_4_,(float)iVar4 + (float)local_18);
    pZVar5 = Zombie::GetProps<ZombieLostCityJaneProps>((Zombie *)this);
    iVar4 = FUN_047d4c84(*(undefined4 *)(pZVar5 + 0x210));
    pZVar5 = Zombie::GetProps<ZombieLostCityJaneProps>((Zombie *)this);
    Projectile::LaunchAt(param_1,(SexyVector3 *)&local_18,(float)iVar4,*(float *)(pZVar5 + 0x214));
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_Zomb_LostCity_Jane_Impact_Bounce");
    uVar2 = 1;
  }
  else {
    uVar2 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

