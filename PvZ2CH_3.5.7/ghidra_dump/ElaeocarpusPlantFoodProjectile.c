// Class: ElaeocarpusPlantFoodProjectile


/* ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile() */

void __thiscall
ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile
          (ElaeocarpusPlantFoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681bc70;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusPlantFoodProjectile_0681be60;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile() */

void __thiscall
ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile
          (ElaeocarpusPlantFoodProjectile *this)

{
  ~ElaeocarpusPlantFoodProjectile(this + -0x10);
  return;
}


/* ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile() */

void __thiscall
ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile
          (ElaeocarpusPlantFoodProjectile *this)

{
  ~ElaeocarpusPlantFoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile() */

void __thiscall
ElaeocarpusPlantFoodProjectile::~ElaeocarpusPlantFoodProjectile
          (ElaeocarpusPlantFoodProjectile *this)

{
  ~ElaeocarpusPlantFoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusPlantFoodProjectile::StaticClassInit() */

void ElaeocarpusPlantFoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElaeocarpusPlantFoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0425a214,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElaeocarpusPlantFoodProjectile::StaticGetClass() */

long * ElaeocarpusPlantFoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusPlantFoodProjectile::GetClass() const */

long * ElaeocarpusPlantFoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElaeocarpusPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusPlantFoodProjectile::ElaeocarpusPlantFoodProjectile() */

void __thiscall
ElaeocarpusPlantFoodProjectile::ElaeocarpusPlantFoodProjectile(ElaeocarpusPlantFoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ElaeocarpusPlantFoodProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0681bc70;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusPlantFoodProjectile_0681be60;
  *(undefined4 *)(this + 0x1a8) = 0x42480000;
  return;
}


/* ElaeocarpusPlantFoodProjectile::StaticNew() */

ElaeocarpusPlantFoodProjectile * ElaeocarpusPlantFoodProjectile::StaticNew(void)

{
  ElaeocarpusPlantFoodProjectile *this;
  
  this = ::operator_new(0x1b0);
  ElaeocarpusPlantFoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusPlantFoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ElaeocarpusPlantFoodProjectile::OnCollideEntity
          (ElaeocarpusPlantFoodProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  float *pfVar2;
  ElaeocarpusWind *this_00;
  code *pcVar3;
  float fVar4;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  if (*pfVar2 < 800.0) {
    iVar1 = 10;
    this_00 = GameObject::Create<ElaeocarpusWind>();
    if (this[0x1a5] == (ElaeocarpusPlantFoodProjectile)0x0) {
      iVar1 = BoardEntity::CalcColumnPosition(param_1);
      iVar1 = iVar1 + 2;
    }
    fVar4 = (float)FUN_04258f58(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    ElaeocarpusWind::initialize(this_00,iVar1,fVar4 * *(float *)(this + 0x1a8));
    pcVar3 = *(code **)(*(long *)this_00 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],0.0);
    (*pcVar3)(this_00,aVStack_18);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

