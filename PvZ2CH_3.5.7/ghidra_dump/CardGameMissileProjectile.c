// Class: CardGameMissileProjectile


/* CardGameMissileProjectile::~CardGameMissileProjectile() */

void __thiscall
CardGameMissileProjectile::~CardGameMissileProjectile(CardGameMissileProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06668670;
  *(undefined ***)(this + 0x10) = &PTR__CardGameMissileProjectile_06668860;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CardGameMissileProjectile::~CardGameMissileProjectile() */

void __thiscall
CardGameMissileProjectile::~CardGameMissileProjectile(CardGameMissileProjectile *this)

{
  ~CardGameMissileProjectile(this + -0x10);
  return;
}


/* CardGameMissileProjectile::~CardGameMissileProjectile() */

void __thiscall
CardGameMissileProjectile::~CardGameMissileProjectile(CardGameMissileProjectile *this)

{
  ~CardGameMissileProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameMissileProjectile::~CardGameMissileProjectile() */

void __thiscall
CardGameMissileProjectile::~CardGameMissileProjectile(CardGameMissileProjectile *this)

{
  ~CardGameMissileProjectile(this + -0x10);
  return;
}


/* CardGameMissileProjectile::CardGameMissileProjectile() */

void __thiscall
CardGameMissileProjectile::CardGameMissileProjectile(CardGameMissileProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06668670;
  *(undefined ***)(this + 0x10) = &PTR__CardGameMissileProjectile_06668860;
  return;
}


/* CardGameMissileProjectile::StaticNew() */

CardGameMissileProjectile * CardGameMissileProjectile::StaticNew(void)

{
  CardGameMissileProjectile *this;
  
  this = ::operator_new(0x1a8);
  CardGameMissileProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameMissileProjectile::StaticClassInit() */

void CardGameMissileProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameMissileProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03612bb4,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameMissileProjectile::StaticGetClass() */

long * CardGameMissileProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameMissileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameMissileProjectile::GetClass() const */

long * CardGameMissileProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameMissileProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameMissileProjectile::radiateSplashDamage(BoardEntity*) */

void CardGameMissileProjectile::radiateSplashDamage(BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  Zombie *pZVar11;
  long *in_x1;
  int in_w4;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  float fVar15;
  uint local_9c;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (long *)0x0) {
    if (*(code **)(*in_x1 + 0x128) == BoardEntity::NeutralizeSplashDamage) {
      cVar1 = BoardEntity::NeutralizeSplashDamage();
    }
    else {
      cVar1 = (**(code **)(*in_x1 + 0x128))();
    }
    if (cVar1 != '\0') goto LAB_03614314;
  }
  lVar7 = Projectile::getProps((Projectile *)param_1);
  if ((0.0 < *(float *)(lVar7 + 0x38)) && (0.0 < *(float *)(lVar7 + 0x60))) {
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    iVar2 = FUN_036120f4(*(undefined4 *)(param_1 + 0xa8));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar2,1,1,in_w4);
    local_94 = (float)(local_8c + local_84 / 2);
    iVar2 = (int)*(float *)(lVar7 + 0x60) / 2;
    iVar3 = FUN_036120f4(*(undefined4 *)(param_1 + 0xa8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    local_9c = uVar4;
    iVar5 = FUN_036120a0(*(undefined4 *)(param_1 + 0x24));
    if (iVar5 == 2) {
      operator|=(&local_9c,1);
      uVar4 = local_9c;
    }
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar12 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aFStack_98,iVar3 - iVar2,iVar2 + iVar3);
    uVar13 = local_80;
    lVar8 = FUN_03612130(local_80,local_78);
    if (lVar8 != 0) {
      do {
        puVar9 = (undefined8 *)FUN_0361213c(uVar13,uVar12);
        uVar6 = FUN_036120a0(*(undefined4 *)(param_1 + 0x24));
        cVar1 = RealObject::IsOnOpposingTeam(*puVar9,uVar6);
        uVar13 = local_80;
        if (cVar1 != '\0') {
          puVar9 = (undefined8 *)FUN_0361213c(local_80,uVar12);
          pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
          if (((pZVar11 == (Zombie *)0x0) ||
              (cVar1 = (**(code **)(*(long *)pZVar11 + 0xb8))(pZVar11,7), uVar13 = local_80,
              cVar1 != '\0')) &&
             (uVar13 = local_80, puVar9 = (undefined8 *)FUN_0361213c(local_80,uVar12),
             in_x1 != (long *)*puVar9)) {
            DamageInfo::DamageInfo(aDStack_68);
            puVar9 = (undefined8 *)FUN_0361213c(local_80,uVar12);
            (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,*puVar9);
            fVar15 = (float)FUN_036120f8(*(undefined4 *)(param_1 + 0x178));
            local_60 = (float)FUN_036120fc(*(undefined4 *)(param_1 + 0x170),
                                           *(undefined4 *)(param_1 + 0x17c),
                                           *(undefined4 *)(param_1 + 0x180),
                                           *(undefined4 *)(param_1 + 0x184));
            local_60 = local_60 * fVar15;
                    /* WARNING: Load size is inaccurate */
            DamageInfo::AddCondition(*(DamageInfo **)(lVar7 + 0x40),aDStack_68,2);
            SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
            SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
            puVar9 = (undefined8 *)FUN_0361213c(local_80,uVar12);
            (**(code **)(*(long *)*puVar9 + 0x110))((long *)*puVar9,aDStack_68);
            pcVar14 = *(code **)(*(long *)param_1 + 0x1c8);
            puVar9 = (undefined8 *)FUN_0361213c(local_80,uVar12);
            if (pcVar14 != Projectile::onSplashDamageHitEntity) {
              (*pcVar14)(param_1,*puVar9);
            }
            DamageInfo::~DamageInfo(aDStack_68);
            uVar13 = local_80;
          }
        }
        uVar12 = uVar12 + 1;
        uVar10 = FUN_03612130(uVar13,local_78);
      } while (uVar12 < uVar10);
    }
    lVar7 = Projectile::getProps((Projectile *)param_1);
    if (*(char *)(lVar7 + 100) != '\0') {
      Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
LAB_03614314:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameMissileProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
CardGameMissileProjectile::fillDamageInfo
          (CardGameMissileProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  GridItemCardGameZombie *pGVar1;
  RtObject *this_00;
  CardGameMissileProjectileProperty *pCVar2;
  
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  if ((param_2 != (BoardEntity *)0x0) &&
     (pGVar1 = Sexy::RtObject::Cast<GridItemCardGameZombie>((RtObject *)param_2),
     pGVar1 != (GridItemCardGameZombie *)0x0)) {
    this_00 = (RtObject *)Projectile::getProps((Projectile *)this);
    pCVar2 = Sexy::RtObject::Cast<CardGameMissileProjectileProperty>(this_00);
    if (pCVar2 != (CardGameMissileProjectileProperty *)0x0) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * *(float *)(pCVar2 + 0x1e0);
    }
  }
  return;
}

