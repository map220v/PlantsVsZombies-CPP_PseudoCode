// Class: ArtifactSwarmProjectile


/* ArtifactSwarmProjectile::~ArtifactSwarmProjectile() */

void __thiscall ArtifactSwarmProjectile::~ArtifactSwarmProjectile(ArtifactSwarmProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c960;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSwarmProjectile_0669cb50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactSwarmProjectile::~ArtifactSwarmProjectile() */

void __thiscall ArtifactSwarmProjectile::~ArtifactSwarmProjectile(ArtifactSwarmProjectile *this)

{
  ~ArtifactSwarmProjectile(this + -0x10);
  return;
}


/* ArtifactSwarmProjectile::~ArtifactSwarmProjectile() */

void __thiscall ArtifactSwarmProjectile::~ArtifactSwarmProjectile(ArtifactSwarmProjectile *this)

{
  ~ArtifactSwarmProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactSwarmProjectile::~ArtifactSwarmProjectile() */

void __thiscall ArtifactSwarmProjectile::~ArtifactSwarmProjectile(ArtifactSwarmProjectile *this)

{
  ~ArtifactSwarmProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProjectile::StaticClassInit() */

void ArtifactSwarmProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSwarmProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037f1710,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarmProjectile::StaticGetClass() */

long * ArtifactSwarmProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProjectile::GetClass() const */

long * ArtifactSwarmProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmProjectile::ArtifactSwarmProjectile() */

void __thiscall ArtifactSwarmProjectile::ArtifactSwarmProjectile(ArtifactSwarmProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0669c960;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSwarmProjectile_0669cb50;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* ArtifactSwarmProjectile::StaticNew() */

ArtifactSwarmProjectile * ArtifactSwarmProjectile::StaticNew(void)

{
  ArtifactSwarmProjectile *this;
  
  this = ::operator_new(0x1b0);
  ArtifactSwarmProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProjectile::knockbackZombie(BoardEntity*) */

void __thiscall
ArtifactSwarmProjectile::knockbackZombie(ArtifactSwarmProjectile *this,BoardEntity *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long extraout_x0;
  float *pfVar1;
  ZombieTosserSubSystem *pZVar2;
  Board *this_01;
  float fVar3;
  ZombieTosserSubSystem *pZVar7;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_60;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Projectile::GetProps((Projectile *)this);
  nop();
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (this_01[0x119] == (Board)0x0) {
    fVar4 = *(float *)(this + 0x1a8);
    fVar6 = *(float *)(extraout_x0 + 0x1e0);
    fVar3 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                             ((Zombie *)this_00,(fVar4 + 1.0) * fVar6);
    local_60 = CONCAT44(fVar4,fVar3);
    local_58 = fVar6;
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    if (*pfVar1 < fVar3) {
      pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
      pZVar7._0_4_ = *(ZombieTosserSubSystem **)(extraout_x0 + 0x1e8);
      uVar5 = *(undefined4 *)(extraout_x0 + 0x1e4);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie(pZVar7._0_4_,uVar5,pZVar2,this_00,&local_60,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  else {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    if (*pfVar1 < 800.0) {
      local_58 = pfVar1[2];
      local_60._0_4_ = (float)*(undefined8 *)pfVar1;
      local_60 = CONCAT44((int)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                          (float)local_60 +
                          *(float *)(extraout_x0 + 0x1e0) * (*(float *)(this + 0x1a8) + 1.0));
      pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(this_01);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x42480000,0x3f800000,pZVar2,this_00,&local_60,aRStack_50,
                 1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmProjectile::shouldKnockback(BoardEntity*) */

void __thiscall
ArtifactSwarmProjectile::shouldKnockback(ArtifactSwarmProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *this_00;
  byte bVar2;
  TitleStatus aTStack_70 [24];
  byte local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  if ((this_00 == (Zombie *)0x0) || (iVar1 = Zombie::GetSizeType(this_00), iVar1 == 2)) {
    bVar2 = 0;
  }
  else {
    Zombie::GetCurrentTitleStatus();
    bVar2 = local_58 ^ 1;
    TitleStatus::~TitleStatus(aTStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* ArtifactSwarmProjectile::OnCollideEntity(BoardEntity*) */

undefined4 __thiscall
ArtifactSwarmProjectile::OnCollideEntity(ArtifactSwarmProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  cVar1 = shouldKnockback(this,param_1);
  if (cVar1 != '\0') {
    knockbackZombie(this,param_1);
  }
  return uVar2;
}

