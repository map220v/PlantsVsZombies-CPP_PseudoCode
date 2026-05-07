// Class: CannonFireProjectile


/* CannonFireProjectile::~CannonFireProjectile() */

void __thiscall CannonFireProjectile::~CannonFireProjectile(CannonFireProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06762210;
  *(undefined ***)(this + 0x10) = &PTR__CannonFireProjectile_06762400;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CannonFireProjectile::~CannonFireProjectile() */

void __thiscall CannonFireProjectile::~CannonFireProjectile(CannonFireProjectile *this)

{
  ~CannonFireProjectile(this + -0x10);
  return;
}


/* CannonFireProjectile::~CannonFireProjectile() */

void __thiscall CannonFireProjectile::~CannonFireProjectile(CannonFireProjectile *this)

{
  ~CannonFireProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CannonFireProjectile::~CannonFireProjectile() */

void __thiscall CannonFireProjectile::~CannonFireProjectile(CannonFireProjectile *this)

{
  ~CannonFireProjectile(this + -0x10);
  return;
}


/* CannonFireProjectile::CannonFireProjectile() */

void __thiscall CannonFireProjectile::CannonFireProjectile(CannonFireProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06762210;
  *(undefined ***)(this + 0x10) = &PTR__CannonFireProjectile_06762400;
  return;
}


/* CannonFireProjectile::StaticNew() */

CannonFireProjectile * CannonFireProjectile::StaticNew(void)

{
  CannonFireProjectile *this;
  
  this = ::operator_new(0x1a8);
  CannonFireProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonFireProjectile::StaticClassInit() */

void CannonFireProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CannonFireProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03cf9048,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonFireProjectile::StaticGetClass() */

long * CannonFireProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CannonFireProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CannonFireProjectile::GetClass() const */

long * CannonFireProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CannonFireProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonFireProjectile::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, Sexy::TRect<int> const&) const */

void __thiscall
CannonFireProjectile::getCollisionEntities
          (CannonFireProjectile *this,vector *param_1,TRect *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,8);
  if (cVar1 != '\0') {
    operator|=(&local_c,4);
  }
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,7);
  if (cVar1 != '\0') {
    operator|=(&local_c,2);
  }
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
  if (cVar1 != '\0') {
    operator|=(&local_c,1);
  }
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid(param_1,local_c,param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
            (uVar2,uVar3,BoardEntity::BoardEntityLeftToRightSortFunc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

