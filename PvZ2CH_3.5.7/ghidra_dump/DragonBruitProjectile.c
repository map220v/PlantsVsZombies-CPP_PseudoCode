// Class: DragonBruitProjectile


/* DragonBruitProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void DragonBruitProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  Projectile::fillDamageInfo(param_1,param_2);
  if (param_1[0x1c0] != (DamageInfo)0x0) {
    *(float *)(param_2 + 8) = (float)(*(int *)(param_1 + 0x1bc) + 1) * *(float *)(param_1 + 0x1a8);
  }
  return;
}


/* DragonBruitProjectile::~DragonBruitProjectile() */

void __thiscall DragonBruitProjectile::~DragonBruitProjectile(DragonBruitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b72b0;
  *(undefined ***)(this + 0x10) = &PTR__DragonBruitProjectile_069b74a0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DragonBruitProjectile::~DragonBruitProjectile() */

void __thiscall DragonBruitProjectile::~DragonBruitProjectile(DragonBruitProjectile *this)

{
  ~DragonBruitProjectile(this + -0x10);
  return;
}


/* DragonBruitProjectile::~DragonBruitProjectile() */

void __thiscall DragonBruitProjectile::~DragonBruitProjectile(DragonBruitProjectile *this)

{
  ~DragonBruitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonBruitProjectile::~DragonBruitProjectile() */

void __thiscall DragonBruitProjectile::~DragonBruitProjectile(DragonBruitProjectile *this)

{
  ~DragonBruitProjectile(this + -0x10);
  return;
}


/* DragonBruitProjectile::DragonBruitProjectile() */

void __thiscall DragonBruitProjectile::DragonBruitProjectile(DragonBruitProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (DragonBruitProjectile)0x0;
  this[0x1b8] = (DragonBruitProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_069b72b0;
  *(undefined ***)(this + 0x10) = &PTR__DragonBruitProjectile_069b74a0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* DragonBruitProjectile::StaticNew() */

DragonBruitProjectile * DragonBruitProjectile::StaticNew(void)

{
  DragonBruitProjectile *this;
  
  this = ::operator_new(0x1c8);
  DragonBruitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitProjectile::StaticClassInit() */

void DragonBruitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonBruitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d77220,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBruitProjectile::StaticGetClass() */

long * DragonBruitProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitProjectile::GetClass() const */

long * DragonBruitProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitProjectile::SetData(bool, float, float, float, bool, int, bool) */

void __thiscall
DragonBruitProjectile::SetData
          (DragonBruitProjectile *this,bool param_1,float param_2,float param_3,float param_4,
          bool param_5,int param_6,bool param_7)

{
  this[0x1a5] = (DragonBruitProjectile)param_1;
  this[0x1b8] = (DragonBruitProjectile)param_5;
  *(int *)(this + 0x1bc) = param_6;
  this[0x1c0] = (DragonBruitProjectile)param_7;
  *(float *)(this + 0x1a8) = param_2;
  *(float *)(this + 0x1ac) = param_3;
  *(float *)(this + 0x1b0) = param_4;
  if (!param_1) {
    return;
  }
  FUN_04d76c08(this + 0x1b4);
  FUN_04d76bb8(*(undefined4 *)(this + 0x1a8),this + 0x178);
  return;
}


/* DragonBruitProjectile::poisonZombie(Zombie*) */

void __thiscall DragonBruitProjectile::poisonZombie(DragonBruitProjectile *this,Zombie *param_1)

{
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(this + 0x1b0),0,param_1,0x30,1);
  Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1ac),param_1,0x30);
  return;
}


/* DragonBruitProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
DragonBruitProjectile::OnCollideEntity(DragonBruitProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  Zombie *extraout_x0;
  
  if (((this[0x1a5] != (DragonBruitProjectile)0x0) && (param_1 != (BoardEntity *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    nop();
    poisonZombie(this,extraout_x0);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitProjectile::radiateSplashDamage(BoardEntity*) */

void DragonBruitProjectile::radiateSplashDamage(BoardEntity *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Zombie *pZVar8;
  long *plVar9;
  long *in_x1;
  int in_w4;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
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
  if (param_1[0x1b8] == (BoardEntity)0x0) {
    Projectile::radiateSplashDamage(param_1);
  }
  else {
    if (in_x1 != (long *)0x0) {
      if (*(code **)(*in_x1 + 0x128) == BoardEntity::NeutralizeSplashDamage) {
        cVar1 = BoardEntity::NeutralizeSplashDamage();
      }
      else {
        cVar1 = (**(code **)(*in_x1 + 0x128))();
      }
      if (cVar1 != '\0') goto LAB_04d7d3cc;
    }
    lVar5 = Projectile::getProps((Projectile *)param_1);
    if ((0.0 < *(float *)(lVar5 + 0x38)) && (0.0 < *(float *)(lVar5 + 0x60))) {
      DamageInfo::DamageInfo(aDStack_68);
      (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,0);
      fVar13 = *(float *)(param_1 + 0x178);
      local_60 = 1.0;
      if (*(char *)(lVar5 + 0x3c) == '\0') {
        local_60 = (float)FUN_04d76bc0(*(undefined4 *)(param_1 + 0x170),
                                       *(undefined4 *)(param_1 + 0x17c),
                                       *(undefined4 *)(param_1 + 0x180),
                                       *(undefined4 *)(param_1 + 0x184));
      }
      local_60 = local_60 * fVar13;
                    /* WARNING: Load size is inaccurate */
      DamageInfo::AddCondition(*(DamageInfo **)(param_1 + 0xdc),aDStack_68,2);
      SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
      SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
      Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c))
      ;
      BoardTransforms::GridToBoardSpaceRect
                ((BoardTransforms *)0x0,*(int *)(param_1 + 0xa8),1,1,in_w4);
      uVar4 = *(undefined4 *)(param_1 + 0xa8);
      local_94 = (float)(local_8c + local_84 / 2);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar2 = operator|(2,4);
      local_9c = uVar2;
      iVar3 = FUN_04d76b08(*(undefined4 *)(param_1 + 0x24));
      if (iVar3 == 2) {
        operator|=(&local_9c,1);
        uVar2 = local_9c;
      }
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      uVar10 = 0;
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar3,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
                 aFStack_98,uVar4,uVar4);
      uVar11 = local_80;
      lVar5 = FUN_04d76c50(local_80,local_78);
      if (lVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_04d76c74(uVar11,uVar10);
          uVar4 = FUN_04d76b08(*(undefined4 *)(param_1 + 0x24));
          cVar1 = RealObject::IsOnOpposingTeam(*puVar6,uVar4);
          uVar11 = local_80;
          if (cVar1 != '\0') {
            puVar6 = (undefined8 *)FUN_04d76c74(local_80,uVar10);
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
            if ((pZVar8 == (Zombie *)0x0) ||
               (cVar1 = (**(code **)(*(long *)pZVar8 + 0xb8))(pZVar8,7), uVar11 = local_80,
               cVar1 != '\0')) {
              uVar11 = local_80;
              puVar6 = (undefined8 *)FUN_04d76c74(local_80,uVar10);
              plVar9 = (long *)*puVar6;
              if (in_x1 != plVar9) {
                (**(code **)(*plVar9 + 0x110))(plVar9,aDStack_68);
                uVar11 = local_80;
                pcVar12 = *(code **)(*(long *)param_1 + 0x1c8);
                puVar6 = (undefined8 *)FUN_04d76c74(local_80,uVar10);
                if (pcVar12 != Projectile::onSplashDamageHitEntity) {
                  (*pcVar12)(param_1,*puVar6);
                  uVar11 = local_80;
                }
              }
            }
          }
          uVar10 = uVar10 + 1;
          uVar7 = FUN_04d76c50(uVar11,local_78);
        } while (uVar10 < uVar7);
      }
      lVar5 = Projectile::getProps((Projectile *)param_1);
      if (*(char *)(lVar5 + 100) != '\0') {
        Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
LAB_04d7d3cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

