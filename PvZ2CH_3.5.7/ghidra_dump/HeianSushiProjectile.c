// Class: HeianSushiProjectile


/* HeianSushiProjectile::~HeianSushiProjectile() */

void __thiscall HeianSushiProjectile::~HeianSushiProjectile(HeianSushiProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06887960;
  *(undefined ***)(this + 0x10) = &PTR__HeianSushiProjectile_06887b50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HeianSushiProjectile::~HeianSushiProjectile() */

void __thiscall HeianSushiProjectile::~HeianSushiProjectile(HeianSushiProjectile *this)

{
  ~HeianSushiProjectile(this + -0x10);
  return;
}


/* HeianSushiProjectile::~HeianSushiProjectile() */

void __thiscall HeianSushiProjectile::~HeianSushiProjectile(HeianSushiProjectile *this)

{
  ~HeianSushiProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeianSushiProjectile::~HeianSushiProjectile() */

void __thiscall HeianSushiProjectile::~HeianSushiProjectile(HeianSushiProjectile *this)

{
  ~HeianSushiProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSushiProjectile::StaticClassInit() */

void HeianSushiProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianSushiProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04650e18,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianSushiProjectile::StaticGetClass() */

long * HeianSushiProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianSushiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSushiProjectile::GetClass() const */

long * HeianSushiProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianSushiProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSushiProjectile::HeianSushiProjectile() */

void __thiscall HeianSushiProjectile::HeianSushiProjectile(HeianSushiProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06887960;
  *(undefined ***)(this + 0x10) = &PTR__HeianSushiProjectile_06887b50;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  this[0x1b0] = (HeianSushiProjectile)0x0;
  return;
}


/* HeianSushiProjectile::StaticNew() */

HeianSushiProjectile * HeianSushiProjectile::StaticNew(void)

{
  HeianSushiProjectile *this;
  
  this = ::operator_new(0x1b8);
  HeianSushiProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSushiProjectile::OnCollideGround() */

void __thiscall HeianSushiProjectile::OnCollideGround(HeianSushiProjectile *this)

{
  char cVar1;
  char *pcVar2;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canSpawnSushiAt(*(int *)(this + 0x1a8),*(int *)(this + 0x1ac));
  if (cVar1 != '\0') {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"gridItem_sushi");
    Board::AddGridItem(this_00,asStack_10,*(int *)(this + 0x1a8),*(int *)(this + 0x1ac),1);
    std::string::~string(asStack_10);
    nop();
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Zomb_Egypt_TombRaiser_Grave_Rise");
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

