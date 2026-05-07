// Class: ElaeocarpusSmashProjectile


/* ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile() */

void __thiscall
ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile(ElaeocarpusSmashProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681ba50;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusSmashProjectile_0681bc40;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile() */

void __thiscall
ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile(ElaeocarpusSmashProjectile *this)

{
  ~ElaeocarpusSmashProjectile(this + -0x10);
  return;
}


/* ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile() */

void __thiscall
ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile(ElaeocarpusSmashProjectile *this)

{
  ~ElaeocarpusSmashProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile() */

void __thiscall
ElaeocarpusSmashProjectile::~ElaeocarpusSmashProjectile(ElaeocarpusSmashProjectile *this)

{
  ~ElaeocarpusSmashProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusSmashProjectile::StaticClassInit() */

void ElaeocarpusSmashProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElaeocarpusSmashProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04259ea0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElaeocarpusSmashProjectile::StaticGetClass() */

long * ElaeocarpusSmashProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusSmashProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusSmashProjectile::GetClass() const */

long * ElaeocarpusSmashProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusSmashProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusSmashProjectile::ElaeocarpusSmashProjectile() */

void __thiscall
ElaeocarpusSmashProjectile::ElaeocarpusSmashProjectile(ElaeocarpusSmashProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ElaeocarpusSmashProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0681ba50;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusSmashProjectile_0681bc40;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* ElaeocarpusSmashProjectile::StaticNew() */

ElaeocarpusSmashProjectile * ElaeocarpusSmashProjectile::StaticNew(void)

{
  ElaeocarpusSmashProjectile *this;
  
  this = ::operator_new(0x1b0);
  ElaeocarpusSmashProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusSmashProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ElaeocarpusSmashProjectile::OnCollideEntity(ElaeocarpusSmashProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  BoardEntity *local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_98 = param_1;
  Projectile::playSound((Projectile *)this,param_1);
  if (local_98 != (BoardEntity *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    if (this[0x1a5] == (ElaeocarpusSmashProjectile)0x0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,&local_98);
    }
    else {
      iVar2 = BoardEntity::CalcColumnPosition(local_98);
      iVar3 = SharkMinion::getRow((SharkMinion *)local_98);
      Sexy::Insets::Insets((Insets *)aDStack_68,iVar2,iVar3,1,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,
                 (Insets *)aDStack_68);
    }
    uVar7 = local_80;
    uVar6 = 0;
    uVar4 = FUN_04258fb0(local_80,local_78);
    if (uVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_04258fbc(uVar7,uVar6);
        if ((RtObject *)*puVar5 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
          if (((((this_00 != (Zombie *)0x0) &&
                (cVar1 = RealObject::IsOnOpposingTeam(this_00,1), cVar1 != '\0')) &&
               (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
              ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
               (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')))) &&
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')) {
            fVar9 = (float)Zombie::getLeftHitPer(this_00,true);
            if (((*(float *)(this + 0x1a8) <= fVar9) ||
                (cVar1 = Zombie::IsBoss(this_00), cVar1 != '\0')) ||
               ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 != '\0' ||
                ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 != '\0' ||
                 (cVar1 = Zombie::CanTakeFatalDamage(this_00), cVar1 == '\0')))))) {
              (**(code **)(*(long *)this + 0x1b0))(this,this_00);
            }
            else {
              cVar1 = (**(code **)(*(long *)this_00 + 0x378))(this_00);
              if (cVar1 != '\0') {
                (**(code **)(*(long *)this_00 + 0x240))(this_00);
              }
              pcVar8 = *(code **)(*(long *)this_00 + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,4,0,aPStack_90,0);
              (*pcVar8)(this_00,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
            }
          }
          uVar7 = local_80;
          uVar4 = FUN_04258fb0(local_80,local_78);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  (**(code **)(*(long *)this + 0x168))(this,local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

