// Class: BowlingWallnutBoomProjectile


/* BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile() */

void __thiscall
BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile(BowlingWallnutBoomProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069d39d0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingWallnutBoomProjectile_069d3bc0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile() */

void __thiscall
BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile(BowlingWallnutBoomProjectile *this)

{
  ~BowlingWallnutBoomProjectile(this + -0x10);
  return;
}


/* BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile() */

void __thiscall
BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile(BowlingWallnutBoomProjectile *this)

{
  ~BowlingWallnutBoomProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile() */

void __thiscall
BowlingWallnutBoomProjectile::~BowlingWallnutBoomProjectile(BowlingWallnutBoomProjectile *this)

{
  ~BowlingWallnutBoomProjectile(this + -0x10);
  return;
}


/* BowlingWallnutBoomProjectile::BowlingWallnutBoomProjectile() */

void __thiscall
BowlingWallnutBoomProjectile::BowlingWallnutBoomProjectile(BowlingWallnutBoomProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069d39d0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingWallnutBoomProjectile_069d3bc0;
  return;
}


/* BowlingWallnutBoomProjectile::StaticNew() */

BowlingWallnutBoomProjectile * BowlingWallnutBoomProjectile::StaticNew(void)

{
  BowlingWallnutBoomProjectile *this;
  
  this = ::operator_new(0x1a8);
  BowlingWallnutBoomProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutBoomProjectile::StaticClassInit() */

void BowlingWallnutBoomProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingWallnutBoomProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0b4f0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingWallnutBoomProjectile::StaticGetClass() */

long * BowlingWallnutBoomProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingWallnutBoomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingWallnutBoomProjectile::GetClass() const */

long * BowlingWallnutBoomProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingWallnutBoomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingWallnutBoomProjectile::damageEntity(BoardEntity*) */

void BowlingWallnutBoomProjectile::damageEntity(BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  BoardEntity *pBVar8;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  uVar5 = operator|(0x20,0x400);
  local_58 = operator|(uVar5,0x1000);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
  iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
  Sexy::Insets::Insets(aIStack_90,iVar3 + -1,iVar4 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,aIStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    pBVar8 = (BoardEntity *)*puVar7;
    cVar2 = CustomLevelUtils::IsCustomLevel();
    if (cVar2 == '\0') {
      (**(code **)(*(long *)pBVar8 + 0x120))(pBVar8,aDStack_68);
    }
    else {
      local_58 = 1;
      Projectile::damageEntity((Projectile *)param_1,pBVar8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

