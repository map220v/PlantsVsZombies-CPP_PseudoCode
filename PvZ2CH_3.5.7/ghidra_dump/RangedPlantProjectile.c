// Class: RangedPlantProjectile


/* RangedPlantProjectile::onPostUpdate() */

void __thiscall RangedPlantProjectile::onPostUpdate(RangedPlantProjectile *this)

{
  if ((*(int *)(this + 0x1a8) != -1) && ((float)*(int *)(this + 0x1a8) <= *(float *)(this + 0x1ac)))
  {
    (**(code **)(*(long *)this + 0x48))();
    return;
  }
  return;
}


/* RangedPlantProjectile::~RangedPlantProjectile() */

void __thiscall RangedPlantProjectile::~RangedPlantProjectile(RangedPlantProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06833d70;
  *(undefined ***)(this + 0x10) = &PTR__RangedPlantProjectile_06833f60;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RangedPlantProjectile::~RangedPlantProjectile() */

void __thiscall RangedPlantProjectile::~RangedPlantProjectile(RangedPlantProjectile *this)

{
  ~RangedPlantProjectile(this + -0x10);
  return;
}


/* RangedPlantProjectile::~RangedPlantProjectile() */

void __thiscall RangedPlantProjectile::~RangedPlantProjectile(RangedPlantProjectile *this)

{
  ~RangedPlantProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RangedPlantProjectile::~RangedPlantProjectile() */

void __thiscall RangedPlantProjectile::~RangedPlantProjectile(RangedPlantProjectile *this)

{
  ~RangedPlantProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RangedPlantProjectile::StaticClassInit() */

void RangedPlantProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RangedPlantProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_043508ac,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RangedPlantProjectile::StaticGetClass() */

long * RangedPlantProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RangedPlantProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RangedPlantProjectile::GetClass() const */

long * RangedPlantProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RangedPlantProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RangedPlantProjectile::RangedPlantProjectile() */

void __thiscall RangedPlantProjectile::RangedPlantProjectile(RangedPlantProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06833d70;
  *(undefined ***)(this + 0x10) = &PTR__RangedPlantProjectile_06833f60;
  *(undefined4 *)(this + 0x1ac) = 0;
  return;
}


/* RangedPlantProjectile::StaticNew() */

RangedPlantProjectile * RangedPlantProjectile::StaticNew(void)

{
  RangedPlantProjectile *this;
  
  this = ::operator_new(0x1b0);
  RangedPlantProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RangedPlantProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
RangedPlantProjectile::onSetInstigator(RangedPlantProjectile *this,BoardEntity *param_1)

{
  Plant *pPVar1;
  Plant aPStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (pPVar1 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), pPVar1 != (Plant *)0x0)) {
    Plant::GetPlantAttackRect(aPStack_18,pPVar1,0);
    *(undefined4 *)(this + 0x1a8) = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RangedPlantProjectile::moveThroughTime(float) */

void __thiscall RangedPlantProjectile::moveThroughTime(RangedPlantProjectile *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar2 = *pfVar1;
  Projectile::moveThroughTime((Projectile *)this,param_1);
  *(float *)(this + 0x1ac) = (*(float *)(this + 0x1ac) + *pfVar1) - fVar2;
  return;
}

