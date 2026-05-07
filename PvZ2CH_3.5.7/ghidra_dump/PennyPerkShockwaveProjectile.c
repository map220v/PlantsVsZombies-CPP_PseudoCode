// Class: PennyPerkShockwaveProjectile


/* PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile() */

void __thiscall
PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile(PennyPerkShockwaveProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06682080;
  *(undefined ***)(this + 0x10) = &PTR__PennyPerkShockwaveProjectile_06682270;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile() */

void __thiscall
PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile(PennyPerkShockwaveProjectile *this)

{
  ~PennyPerkShockwaveProjectile(this + -0x10);
  return;
}


/* PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile() */

void __thiscall
PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile(PennyPerkShockwaveProjectile *this)

{
  ~PennyPerkShockwaveProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile() */

void __thiscall
PennyPerkShockwaveProjectile::~PennyPerkShockwaveProjectile(PennyPerkShockwaveProjectile *this)

{
  ~PennyPerkShockwaveProjectile(this + -0x10);
  return;
}


/* PennyPerkShockwaveProjectile::PennyPerkShockwaveProjectile() */

void __thiscall
PennyPerkShockwaveProjectile::PennyPerkShockwaveProjectile(PennyPerkShockwaveProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06682080;
  *(undefined ***)(this + 0x10) = &PTR__PennyPerkShockwaveProjectile_06682270;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* PennyPerkShockwaveProjectile::StaticNew() */

PennyPerkShockwaveProjectile * PennyPerkShockwaveProjectile::StaticNew(void)

{
  PennyPerkShockwaveProjectile *this;
  
  this = ::operator_new(0x1b0);
  PennyPerkShockwaveProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProjectile::StaticClassInit() */

void PennyPerkShockwaveProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkShockwaveProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_036c861c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkShockwaveProjectile::StaticGetClass() */

long * PennyPerkShockwaveProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkShockwaveProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkShockwaveProjectile::GetClass() const */

long * PennyPerkShockwaveProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkShockwaveProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkShockwaveProjectile::knockbackZombie(BoardEntity*, float, float, float) */

void __thiscall
PennyPerkShockwaveProjectile::knockbackZombie
          (PennyPerkShockwaveProjectile *this,BoardEntity *param_1,float param_2,float param_3,
          float param_4)

{
  Zombie *this_00;
  float *pfVar1;
  ZombieTosserSubSystem *pZVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_60;
  float local_5c;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = param_3;
  fVar5 = param_4;
  nop();
  fVar3 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen(this_00,param_2);
  local_60 = fVar3;
  local_5c = fVar4;
  local_58 = fVar5;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
  if (*pfVar1 < fVar3) {
    pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie
              ((ZombieTosserSubSystem *)param_4,param_3,pZVar2,this_00,&local_60,aRStack_50,1);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkShockwaveProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PennyPerkShockwaveProjectile::OnCollideEntity
          (PennyPerkShockwaveProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  ZombieTosserSubSystem *pZVar4;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = ZombieTosserSubSystem::IsTossed((Zombie *)pZVar4);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)pZVar3 + 0x380))(pZVar3), cVar2 != '\0'))
    {
      knockbackZombie(this,param_1,*(float *)(this + 0x1a8),0.5,1.0);
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

