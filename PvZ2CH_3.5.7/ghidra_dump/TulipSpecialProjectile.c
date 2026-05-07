// Class: TulipSpecialProjectile


/* TulipSpecialProjectile::~TulipSpecialProjectile() */

void __thiscall TulipSpecialProjectile::~TulipSpecialProjectile(TulipSpecialProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06814be0;
  *(undefined ***)(this + 0x10) = &PTR__TulipSpecialProjectile_06814dd0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TulipSpecialProjectile::~TulipSpecialProjectile() */

void __thiscall TulipSpecialProjectile::~TulipSpecialProjectile(TulipSpecialProjectile *this)

{
  ~TulipSpecialProjectile(this + -0x10);
  return;
}


/* TulipSpecialProjectile::~TulipSpecialProjectile() */

void __thiscall TulipSpecialProjectile::~TulipSpecialProjectile(TulipSpecialProjectile *this)

{
  ~TulipSpecialProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TulipSpecialProjectile::~TulipSpecialProjectile() */

void __thiscall TulipSpecialProjectile::~TulipSpecialProjectile(TulipSpecialProjectile *this)

{
  ~TulipSpecialProjectile(this + -0x10);
  return;
}


/* TulipSpecialProjectile::TulipSpecialProjectile() */

void __thiscall TulipSpecialProjectile::TulipSpecialProjectile(TulipSpecialProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06814be0;
  *(undefined ***)(this + 0x10) = &PTR__TulipSpecialProjectile_06814dd0;
  return;
}


/* TulipSpecialProjectile::StaticNew() */

TulipSpecialProjectile * TulipSpecialProjectile::StaticNew(void)

{
  TulipSpecialProjectile *this;
  
  this = ::operator_new(0x1a8);
  TulipSpecialProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TulipSpecialProjectile::StaticClassInit() */

void TulipSpecialProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"TulipSpecialProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0423f238,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TulipSpecialProjectile::StaticGetClass() */

long * TulipSpecialProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TulipSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TulipSpecialProjectile::GetClass() const */

long * TulipSpecialProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"TulipSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TulipSpecialProjectile::ChangeZombieTeam(Zombie*) const */

void __thiscall
TulipSpecialProjectile::ChangeZombieTeam(TulipSpecialProjectile *this,Zombie *param_1)

{
  undefined1 auVar1 [16];
  
  Zombie::SetFacing(param_1,1);
  auVar1 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar1,0,param_1,0x19,1);
  (**(code **)(*(long *)param_1 + 0x2f0))(param_1);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieHypnotized,param_1);
  RealObject::JoinTeam((RealObject *)param_1,1);
  return;
}


/* TulipSpecialProjectile::handleImpact(BoardEntity*) */

void __thiscall
TulipSpecialProjectile::handleImpact(TulipSpecialProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Zombie *this_00;
  ZombieSkyCityTwinsPlane *pZVar4;
  ZombieCavalry *pZVar5;
  ZombieModernSolarTruck *pZVar6;
  ZombieSkycityBattlePlane *pZVar7;
  int iVar8;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    iVar2 = FUN_0423e368(*(undefined4 *)(this + 0x70));
    iVar8 = 5;
    if (iVar2 * 2 < 5) {
      iVar8 = 2;
    }
    iVar2 = FUN_0423e36c(*(undefined4 *)(this_00 + 0x50));
    cVar1 = Zombie::IsBoss(this_00);
    if ((((((cVar1 == '\0') && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) &&
          (pZVar4 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)this_00),
          pZVar4 == (ZombieSkyCityTwinsPlane *)0x0)) &&
         ((pZVar5 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)this_00),
          pZVar5 == (ZombieCavalry *)0x0 &&
          (pZVar6 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)this_00),
          pZVar6 == (ZombieModernSolarTruck *)0x0)))) &&
        ((pZVar7 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)this_00),
         pZVar7 == (ZombieSkycityBattlePlane *)0x0 &&
         ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))) &&
       ((cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0' && (iVar2 <= iVar8)))) {
      ChangeZombieTeam(this,this_00);
      Projectile::handleImpact((Projectile *)this,param_1);
      return;
    }
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

