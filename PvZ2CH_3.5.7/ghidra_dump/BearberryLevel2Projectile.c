// Class: BearberryLevel2Projectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryLevel2Projectile::moveThroughTime(float) */

void __thiscall
BearberryLevel2Projectile::moveThroughTime(BearberryLevel2Projectile *this,float param_1)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_18;
  float fStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  lVar2 = Projectile::GetProps((Projectile *)this);
  if (*(char *)(lVar2 + 0x6e) == '\0') {
    fVar4 = (float)FUN_0434ada8(*(undefined4 *)(this + 0xc4));
    fVar5 = (float)FUN_0434adac(*(undefined4 *)(this + 0xcc));
    FUN_0434adb0(fVar4 + param_1 * fVar5,this + 0xc4);
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),0x10);
  }
  else {
    pfVar3 = (float *)Projectile::GetVelocity((Projectile *)this);
    fVar4 = atan2f(pfVar3[2],*pfVar3);
    FUN_0434adb0(fVar4 + *(float *)(this + 200),this + 0xc4);
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x100),0x10);
  }
  if (bVar1) {
    (**(code **)(*(long *)this + 0xa8))(this,0);
  }
  if ((this[0x189] != (BearberryLevel2Projectile)0x0) &&
     (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    uStack_18 = *(undefined8 *)pfVar3;
    fStack_10 = pfVar3[2];
    fStack_10 = (float)Board::calculateRoofOffsetZ(*pfVar3);
    fStack_10 = fStack_10 + *(float *)(this + 0x18c);
    (**(code **)(*(long *)this + 0x78))(this,&uStack_18);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BearberryLevel2Projectile::OnCollideGround() */

void __thiscall BearberryLevel2Projectile::OnCollideGround(BearberryLevel2Projectile *this)

{
  Projectile::SetVelocity((Projectile *)this,200.0,0.0,0.0);
  Projectile::SetAcceleration((Projectile *)this,0.0,0.0,0.0);
  Projectile::OnCollideGround((Projectile *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryLevel2Projectile::StaticClassInit() */

void BearberryLevel2Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BearberryLevel2Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04254d1c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BearberryLevel2Projectile::StaticGetClass() */

long * BearberryLevel2Projectile::StaticGetClass(void)

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
  uVar2 = BearberryBasicProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BearberryLevel2Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryLevel2Projectile::GetClass() const */

long * BearberryLevel2Projectile::GetClass(void)

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
  uVar2 = BearberryBasicProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BearberryLevel2Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryLevel2Projectile::BearberryLevel2Projectile() */

void __thiscall
BearberryLevel2Projectile::BearberryLevel2Projectile(BearberryLevel2Projectile *this)

{
  BearberryBasicProjectile::BearberryBasicProjectile((BearberryBasicProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06819d60;
  *(undefined ***)(this + 0x10) = &PTR__BearberryLevel2Projectile_06819f50;
  return;
}


/* BearberryLevel2Projectile::StaticNew() */

BearberryLevel2Projectile * BearberryLevel2Projectile::StaticNew(void)

{
  BearberryLevel2Projectile *this;
  
  this = ::operator_new(0x1c0);
  BearberryLevel2Projectile(this);
  return this;
}


/* BearberryLevel2Projectile::~BearberryLevel2Projectile() */

void __thiscall
BearberryLevel2Projectile::~BearberryLevel2Projectile(BearberryLevel2Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06819d60;
  *(undefined ***)(this + 0x10) = &PTR__BearberryLevel2Projectile_06819f50;
  BearberryBasicProjectile::~BearberryBasicProjectile((BearberryBasicProjectile *)this);
  return;
}


/* non-virtual thunk to BearberryLevel2Projectile::~BearberryLevel2Projectile() */

void __thiscall
BearberryLevel2Projectile::~BearberryLevel2Projectile(BearberryLevel2Projectile *this)

{
  ~BearberryLevel2Projectile(this + -0x10);
  return;
}


/* BearberryLevel2Projectile::~BearberryLevel2Projectile() */

void __thiscall
BearberryLevel2Projectile::~BearberryLevel2Projectile(BearberryLevel2Projectile *this)

{
  ~BearberryLevel2Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BearberryLevel2Projectile::~BearberryLevel2Projectile() */

void __thiscall
BearberryLevel2Projectile::~BearberryLevel2Projectile(BearberryLevel2Projectile *this)

{
  ~BearberryLevel2Projectile(this + -0x10);
  return;
}

