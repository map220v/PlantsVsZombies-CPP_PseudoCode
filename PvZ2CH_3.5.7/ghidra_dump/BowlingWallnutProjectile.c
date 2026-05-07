// Class: BowlingWallnutProjectile


/* BowlingWallnutProjectile::handleImpact(BoardEntity*) */

undefined8 __thiscall
BowlingWallnutProjectile::handleImpact(BowlingWallnutProjectile *this,BoardEntity *param_1)

{
  Projectile::handleImpact((Projectile *)this,param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutProjectile::StaticClassInit() */

void BowlingWallnutProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingWallnutProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0b064,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingWallnutProjectile::StaticGetClass() */

long * BowlingWallnutProjectile::StaticGetClass(void)

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
  uVar2 = BowlingBulbProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingWallnutProjectile::GetClass() const */

long * BowlingWallnutProjectile::GetClass(void)

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
  uVar2 = BowlingBulbProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingWallnutProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingWallnutProjectile::BowlingWallnutProjectile() */

void __thiscall BowlingWallnutProjectile::BowlingWallnutProjectile(BowlingWallnutProjectile *this)

{
  BowlingBulbProjectile::BowlingBulbProjectile((BowlingBulbProjectile *)this);
  *(undefined4 *)(this + 0x1b4) = 1;
  this[0x1b8] = (BowlingWallnutProjectile)0x1;
  *(undefined ***)this = &PTR_GetClass_069d3580;
  *(undefined ***)(this + 0x10) = &PTR__BowlingWallnutProjectile_069d3778;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  return;
}


/* BowlingWallnutProjectile::StaticNew() */

BowlingWallnutProjectile * BowlingWallnutProjectile::StaticNew(void)

{
  BowlingWallnutProjectile *this;
  
  this = ::operator_new(0x1f0);
  BowlingWallnutProjectile(this);
  return this;
}


/* BowlingWallnutProjectile::~BowlingWallnutProjectile() */

void __thiscall BowlingWallnutProjectile::~BowlingWallnutProjectile(BowlingWallnutProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d3580;
  *(undefined ***)(this + 0x10) = &PTR__BowlingWallnutProjectile_069d3778;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1d8));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1c0));
  BowlingBulbProjectile::~BowlingBulbProjectile((BowlingBulbProjectile *)this);
  return;
}


/* non-virtual thunk to BowlingWallnutProjectile::~BowlingWallnutProjectile() */

void __thiscall BowlingWallnutProjectile::~BowlingWallnutProjectile(BowlingWallnutProjectile *this)

{
  ~BowlingWallnutProjectile(this + -0x10);
  return;
}


/* BowlingWallnutProjectile::~BowlingWallnutProjectile() */

void __thiscall BowlingWallnutProjectile::~BowlingWallnutProjectile(BowlingWallnutProjectile *this)

{
  ~BowlingWallnutProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingWallnutProjectile::~BowlingWallnutProjectile() */

void __thiscall BowlingWallnutProjectile::~BowlingWallnutProjectile(BowlingWallnutProjectile *this)

{
  ~BowlingWallnutProjectile(this + -0x10);
  return;
}


/* BowlingWallnutProjectile::onProjectileInitialized() */

void __thiscall BowlingWallnutProjectile::onProjectileInitialized(BowlingWallnutProjectile *this)

{
  char *pcVar1;
  
  BowlingBulbProjectile::onProjectileInitialized((BowlingBulbProjectile *)this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Bowling_bowling");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutProjectile::dropLoot(BoardEntity*) */

void __thiscall
BowlingWallnutProjectile::dropLoot(BowlingWallnutProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtObject *this_01;
  BowlingWallnutProjectileProps *pBVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  BoardEntity *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar2 = Sexy::RtObject::Cast<BowlingWallnutProjectileProps>(this_01);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar3,uVar4,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    iVar5 = *(int *)(this + 0x1b4);
    if (0 < iVar5) {
      iVar6 = 0;
      uVar3 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      do {
        iVar6 = iVar6 + 1;
        LootHelpers::Drop(*(undefined4 *)(pBVar2 + 0x1f0),uVar3);
        iVar5 = *(int *)(this + 0x1b4);
      } while (iVar6 < iVar5);
    }
    *(int *)(this + 0x1b4) = iVar5 + *(int *)(pBVar2 + 500);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutProjectile::damageEntity(BoardEntity*) */

void __thiscall
BowlingWallnutProjectile::damageEntity(BowlingWallnutProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Zombie *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  DamageInfo *pDVar10;
  BoardEntity *local_98 [2];
  undefined8 local_88;
  string asStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_98[0] = param_1;
  if (param_1 == (BoardEntity *)0x0) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x1d8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    local_88 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar5,uVar6,local_98);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
    goto LAB_04e0ebb8;
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0x1d8);
  this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(pvVar1);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(pvVar1);
  local_88 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar5,uVar6,local_98);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar1);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
  if ((this_00 == (Zombie *)0x0) || (!bVar2)) goto LAB_04e0ebb8;
  cVar3 = CustomLevelUtils::IsCustomLevel();
  if (cVar3 == '\0') {
    uVar5 = Zombie::GetTypeName(this_00);
    FUN_05475d88(asStack_80,uVar5);
    bVar2 = std::operator==(asStack_80,"bowling_tutorial");
    if ((bVar2) ||
       (((bVar2 = std::operator==(asStack_80,"bowling_lostcity_excavator"), bVar2 &&
         (this[0x1b8] == (BowlingWallnutProjectile)0x0)) ||
        (bVar2 = std::operator==(asStack_80,"bowling_future_jetpack_disco"), bVar2)))) {
LAB_04e0eb64:
      Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
      goto LAB_04e0eb70;
    }
    bVar2 = std::operator==(asStack_80,"bowling_tutorial_armor1");
    if (((bVar2) || (bVar2 = std::operator==(asStack_80,"bowling_disco_mech"), bVar2)) ||
       ((bVar2 = std::operator==(asStack_80,"bowling_modern_allstar"), bVar2 &&
        ((iVar4 = Zombie::getZombieStateSerialization(this_00), iVar4 == 1 ||
         (iVar4 = Zombie::getZombieStateSerialization(this_00), iVar4 == 2)))))) {
      fVar8 = (float)FUN_04e0abe8(*(undefined4 *)(this_00 + 0x284));
      fVar9 = (float)FUN_04e0abec(*(undefined4 *)(this_00 + 0x2a8));
      pcVar7 = *(code **)(*(long *)this_00 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      pDVar10._0_4_ = (DamageInfo *)((fVar9 + fVar8) * 0.5 + 10.0);
LAB_04e0ecdc:
      DamageInfo::DamageInfo(pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,aPStack_78,0);
      (*pcVar7)(this_00,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    else {
      bVar2 = std::operator==(asStack_80,"bowling_tutorial_armor2");
      if (bVar2) {
        fVar8 = (float)FUN_04e0abe8(*(undefined4 *)(this_00 + 0x284));
        fVar9 = (float)FUN_04e0abec(*(undefined4 *)(this_00 + 0x2a8));
        pcVar7 = *(code **)(*(long *)this_00 + 0x110);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        pDVar10._0_4_ = (DamageInfo *)((fVar9 + fVar8) * 0.33333334 + 10.0);
        goto LAB_04e0ecdc;
      }
      bVar2 = std::operator==(asStack_80,"bowling_modern_allstar");
      if (bVar2) {
        (**(code **)(*(long *)this_00 + 0x260))(this_00);
      }
      else {
        bVar2 = std::operator==(asStack_80,"bowling_modern_newspaper");
        if (((bVar2) || (bVar2 = std::operator==(asStack_80,"bowling_camel_onehump"), bVar2)) ||
           (bVar2 = std::operator==(asStack_80,"bowling_camel_segment"), bVar2)) {
          fVar8 = (float)Zombie::GetArmorHitpoints(this_00);
          if (fVar8 == 0.0) {
            pDVar10._0_4_ = (DamageInfo *)FUN_04e0abe8(*(undefined4 *)(this_00 + 0x284));
          }
          else {
            pDVar10._0_4_ = (DamageInfo *)Zombie::GetMaxArmorHitpoints(this_00);
          }
          pcVar7 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          goto LAB_04e0ecdc;
        }
        bVar2 = std::operator!=(asStack_80,"bowling_lostcity_excavator");
        if (bVar2) goto LAB_04e0eb64;
      }
    }
LAB_04e0eb70:
    std::string::~string(asStack_80);
  }
  else {
    Projectile::damageEntity((Projectile *)this,local_98[0]);
  }
  this[0x1b8] = (BowlingWallnutProjectile)0x0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)pvVar1,local_98);
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
LAB_04e0ebb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

