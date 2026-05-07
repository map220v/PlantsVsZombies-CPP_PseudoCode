// Class: RafflesiaAvatarProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaAvatarProjectile::StaticClassInit() */

void RafflesiaAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RafflesiaAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040bbda8,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaAvatarProjectile::StaticGetClass() */

long * RafflesiaAvatarProjectile::StaticGetClass(void)

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
  uVar2 = RafflesiaSpecialProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"RafflesiaAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaAvatarProjectile::GetClass() const */

long * RafflesiaAvatarProjectile::GetClass(void)

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
  uVar2 = RafflesiaSpecialProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"RafflesiaAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaAvatarProjectile::RafflesiaAvatarProjectile() */

void __thiscall
RafflesiaAvatarProjectile::RafflesiaAvatarProjectile(RafflesiaAvatarProjectile *this)

{
  RafflesiaSpecialProjectile::RafflesiaSpecialProjectile((RafflesiaSpecialProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d6b90;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaAvatarProjectile_067d6d80;
  return;
}


/* RafflesiaAvatarProjectile::StaticNew() */

RafflesiaAvatarProjectile * RafflesiaAvatarProjectile::StaticNew(void)

{
  RafflesiaAvatarProjectile *this;
  
  this = ::operator_new(0x1c8);
  RafflesiaAvatarProjectile(this);
  return this;
}


/* RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile() */

void __thiscall
RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile(RafflesiaAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d6b90;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaAvatarProjectile_067d6d80;
  RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile((RafflesiaSpecialProjectile *)this);
  return;
}


/* non-virtual thunk to RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile() */

void __thiscall
RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile(RafflesiaAvatarProjectile *this)

{
  ~RafflesiaAvatarProjectile(this + -0x10);
  return;
}


/* RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile() */

void __thiscall
RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile(RafflesiaAvatarProjectile *this)

{
  ~RafflesiaAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile() */

void __thiscall
RafflesiaAvatarProjectile::~RafflesiaAvatarProjectile(RafflesiaAvatarProjectile *this)

{
  ~RafflesiaAvatarProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaAvatarProjectile::OnCollideGround() */

void __thiscall RafflesiaAvatarProjectile::OnCollideGround(RafflesiaAvatarProjectile *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Zombie *this_00;
  int in_w4;
  ulong uVar10;
  undefined8 uVar11;
  FastCurve aFStack_38 [4];
  float local_34;
  int local_2c;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar7 = Projectile::getProps((Projectile *)this);
  if ((0.0 < *(float *)(lVar7 + 0x38)) && (0.0 < *(float *)(lVar7 + 0x60))) {
    uVar10 = 0;
    iVar4 = FUN_040bb944(*(undefined4 *)(this + 0xa8));
    Sexy::FastCurve::SetOutRange(aFStack_38,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar4,1,1,in_w4);
    local_34 = (float)(local_2c + local_24 / 2);
    iVar1 = (int)*(float *)(lVar7 + 0x60) / 2;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aFStack_38,iVar4 - iVar1,iVar4 + iVar1);
    uVar11 = local_20;
    lVar7 = FUN_040bb96c(local_20,local_18);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_040bb978(uVar11,uVar10);
        uVar6 = FUN_040bb8f0(*(undefined4 *)(this + 0x24));
        cVar2 = RealObject::IsOnOpposingTeam(*puVar8,uVar6);
        if (cVar2 != '\0') {
          puVar8 = (undefined8 *)FUN_040bb978(local_20,uVar10);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if ((((((this_00 == (Zombie *)0x0) ||
                 (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0')) &&
                (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
               ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
                (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) &&
              ((bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar3 &&
               ((bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar3 &&
                (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))))) &&
             (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')) {
            Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,2,1);
          }
        }
        uVar11 = local_20;
        uVar10 = uVar10 + 1;
        uVar9 = FUN_040bb96c(local_20,local_18);
      } while (uVar10 < uVar9);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

