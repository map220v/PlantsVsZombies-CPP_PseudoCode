// Class: AquaVineGroundedProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineGroundedProjectile::StaticClassInit() */

void AquaVineGroundedProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AquaVineGroundedProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4c248,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineGroundedProjectile::StaticGetClass() */

long * AquaVineGroundedProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineGroundedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineGroundedProjectile::GetClass() const */

long * AquaVineGroundedProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AquaVineGroundedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AquaVineGroundedProjectile::canKnockBackZombie(Zombie const*) */

byte __thiscall
AquaVineGroundedProjectile::canKnockBackZombie(AquaVineGroundedProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  RtObject *this_00;
  AquaVineProjectileProps *pAVar6;
  
  lVar5 = Projectile::GetProps((Projectile *)this);
  if ((lVar5 != 0) && (param_1 != (Zombie *)0x0)) {
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pAVar6 = Sexy::RtObject::Cast<AquaVineProjectileProps>(this_00);
    if (pAVar6 != (AquaVineProjectileProps *)0x0) {
      uVar4 = FUN_03f4b2f4(*(undefined4 *)(this + 0x24));
      cVar1 = RealObject::IsOnTeam(param_1,uVar4);
      if ((((cVar1 == '\0') &&
           (cVar1 = (**(code **)(*(long *)param_1 + 0x380))(param_1), cVar1 != '\0')) &&
          (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2)) &&
         (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)) {
        bVar3 = ClassRestrictionSet::IsExcluded
                          ((ClassRestrictionSet *)(this + 0x1b0),(GameObject *)param_1);
        return bVar3 ^ 1;
      }
    }
  }
  return 0;
}


/* AquaVineGroundedProjectile::AquaVineGroundedProjectile() */

void __thiscall
AquaVineGroundedProjectile::AquaVineGroundedProjectile(AquaVineGroundedProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06799480;
  *(undefined ***)(this + 0x10) = &PTR__AquaVineGroundedProjectile_06799670;
  *(undefined4 *)(this + 0x1a8) = 0;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1b0));
  this[0x1d8] = (AquaVineGroundedProjectile)0x0;
  return;
}


/* AquaVineGroundedProjectile::StaticNew() */

AquaVineGroundedProjectile * AquaVineGroundedProjectile::StaticNew(void)

{
  AquaVineGroundedProjectile *this;
  
  this = ::operator_new(0x1e0);
  AquaVineGroundedProjectile(this);
  return this;
}


/* AquaVineGroundedProjectile::damageEntity(BoardEntity*) */

void __thiscall
AquaVineGroundedProjectile::damageEntity(AquaVineGroundedProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
      (nop(), extraout_x0 != (Zombie *)0x0)) &&
     ((cVar2 = AquaVineWateredProjectile::wouldKillZombie
                         ((AquaVineWateredProjectile *)this,extraout_x0), cVar2 != '\0' &&
      (cVar2 = canKnockBackZombie(this,extraout_x0), cVar2 != '\0')))) {
    AquaVineWateredProjectile::flickZombieOffTheBoard((AquaVineWateredProjectile *)this,extraout_x0)
    ;
    return;
  }
  Projectile::damageEntity((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AquaVineGroundedProjectile::knockbackZombie(Zombie*) */

void __thiscall
AquaVineGroundedProjectile::knockbackZombie(AquaVineGroundedProjectile *this,Zombie *param_1)

{
  int iVar1;
  SexyVector3 *this_00;
  ZombieTosserSubSystem *pZVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  int local_a8;
  int local_a0;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) &&
     (this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_1), *(float *)this_00 < 800.0)) {
    DVec3::DVec3((DVec3 *)local_c8);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar3 = (float)iVar1;
    fVar4 = *(float *)(this + 0x1a8);
    local_c8[0] = local_c8[0] + fVar4 * fVar3;
    local_b8 = (float)Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)local_c8);
    fVar5 = *(float *)(this_00 + 8);
    local_b4 = fVar3;
    local_b0 = fVar4;
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_98);
    if ((gLawnApp != 0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
      Board::GetGridBoundingRect();
      if ((float)(local_a8 + local_a0) < local_b8) {
        local_b8 = (float)(local_a8 + local_a0);
      }
      pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                (aRStack_50,(RtReflectionDelegate *)aRStack_98);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)(fVar5 + 100.0),0x3fa00000,pZVar2,param_1,&local_b8,
                 aRStack_50,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AquaVineGroundedProjectile::InitializeValues(float, ClassRestrictionSet, bool) */

void __thiscall
AquaVineGroundedProjectile::InitializeValues
          (undefined4 param_1,AquaVineGroundedProjectile *this,ZombieRestrictionSet *param_3,
          AquaVineGroundedProjectile param_4)

{
  *(undefined4 *)(this + 0x1a8) = param_1;
  ZombieRestrictionSet::operator=((ZombieRestrictionSet *)(this + 0x1b0),param_3);
  this[0x1d8] = param_4;
  return;
}


/* AquaVineGroundedProjectile::~AquaVineGroundedProjectile() */

void __thiscall
AquaVineGroundedProjectile::~AquaVineGroundedProjectile(AquaVineGroundedProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06799480;
  *(undefined ***)(this + 0x10) = &PTR__AquaVineGroundedProjectile_06799670;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AquaVineGroundedProjectile::~AquaVineGroundedProjectile() */

void __thiscall
AquaVineGroundedProjectile::~AquaVineGroundedProjectile(AquaVineGroundedProjectile *this)

{
  ~AquaVineGroundedProjectile(this + -0x10);
  return;
}


/* AquaVineGroundedProjectile::~AquaVineGroundedProjectile() */

void __thiscall
AquaVineGroundedProjectile::~AquaVineGroundedProjectile(AquaVineGroundedProjectile *this)

{
  ~AquaVineGroundedProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AquaVineGroundedProjectile::~AquaVineGroundedProjectile() */

void __thiscall
AquaVineGroundedProjectile::~AquaVineGroundedProjectile(AquaVineGroundedProjectile *this)

{
  ~AquaVineGroundedProjectile(this + -0x10);
  return;
}


/* AquaVineGroundedProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
AquaVineGroundedProjectile::OnCollideEntity(AquaVineGroundedProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
      (nop(), extraout_x0 != (Zombie *)0x0)) &&
     ((cVar2 = canKnockBackZombie(this,extraout_x0), cVar2 != '\0' &&
      (this[0x1d8] != (AquaVineGroundedProjectile)0x0)))) {
    knockbackZombie(this,extraout_x0);
  }
  return 1;
}

