// Class: FlameladyProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlameladyProjectile::UpdateFadeOut() */

void __thiscall FlameladyProjectile::UpdateFadeOut(FlameladyProjectile *this)

{
  int iVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  undefined4 local_1c;
  undefined4 local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  local_18[0] = 0;
  fVar3 = *(float *)(this + 0x1a8);
  local_1c = 0xff;
  iVar1 = CurveLerp<int>(0,0x3f000000,fVar2 - fVar3,&local_1c,(Color *)local_18,1);
  Sexy::Color::Color((Color *)local_18,1);
  local_c = iVar1;
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::SetPAMColor(this_00,(Color *)local_18);
  if (0.5 < fVar2 - fVar3) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlameladyProjectile::~FlameladyProjectile() */

void __thiscall FlameladyProjectile::~FlameladyProjectile(FlameladyProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ebd90;
  *(undefined ***)(this + 0x10) = &PTR__FlameladyProjectile_067ebf80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FlameladyProjectile::~FlameladyProjectile() */

void __thiscall FlameladyProjectile::~FlameladyProjectile(FlameladyProjectile *this)

{
  ~FlameladyProjectile(this + -0x10);
  return;
}


/* FlameladyProjectile::~FlameladyProjectile() */

void __thiscall FlameladyProjectile::~FlameladyProjectile(FlameladyProjectile *this)

{
  ~FlameladyProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FlameladyProjectile::~FlameladyProjectile() */

void __thiscall FlameladyProjectile::~FlameladyProjectile(FlameladyProjectile *this)

{
  ~FlameladyProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlameladyProjectile::StaticClassInit() */

void FlameladyProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlameladyProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041304d8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlameladyProjectile::StaticGetClass() */

long * FlameladyProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FlameladyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlameladyProjectile::GetClass() const */

long * FlameladyProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"FlameladyProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlameladyProjectile::FlameladyProjectile() */

void __thiscall FlameladyProjectile::FlameladyProjectile(FlameladyProjectile *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ebd90;
  *(undefined ***)(this + 0x10) = &PTR__FlameladyProjectile_067ebf80;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* FlameladyProjectile::StaticNew() */

FlameladyProjectile * FlameladyProjectile::StaticNew(void)

{
  FlameladyProjectile *this;
  
  this = ::operator_new(0x1b0);
  FlameladyProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlameladyProjectile::onPostUpdate() */

void __thiscall FlameladyProjectile::onPostUpdate(FlameladyProjectile *this)

{
  char cVar1;
  undefined8 *puVar2;
  Board *this_00;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x1a8) == fVar3) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    if ((this_00 != (Board *)0x0) &&
       (((cVar1 = Board::IsPitOfDoom(this_00,(SexyVector3 *)&local_18), cVar1 != '\0' ||
         (cVar1 = Board::IsSky(this_00,(SexyVector3 *)&local_18), cVar1 != '\0')) ||
        (cVar1 = Board::IsShallowWater(this_00,(SexyVector3 *)&local_18), cVar1 != '\0')))) {
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x1a8) = uVar4;
    }
  }
  else {
    UpdateFadeOut(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

