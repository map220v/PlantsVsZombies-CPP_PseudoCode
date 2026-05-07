// Class: LotusProjectile


/* LotusProjectile::~LotusProjectile() */

void __thiscall LotusProjectile::~LotusProjectile(LotusProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067441c0;
  *(undefined ***)(this + 0x10) = &PTR__LotusProjectile_067443b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LotusProjectile::~LotusProjectile() */

void __thiscall LotusProjectile::~LotusProjectile(LotusProjectile *this)

{
  ~LotusProjectile(this + -0x10);
  return;
}


/* LotusProjectile::~LotusProjectile() */

void __thiscall LotusProjectile::~LotusProjectile(LotusProjectile *this)

{
  ~LotusProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotusProjectile::~LotusProjectile() */

void __thiscall LotusProjectile::~LotusProjectile(LotusProjectile *this)

{
  ~LotusProjectile(this + -0x10);
  return;
}


/* LotusProjectile::LotusProjectile() */

void __thiscall LotusProjectile::LotusProjectile(LotusProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067441c0;
  *(undefined ***)(this + 0x10) = &PTR__LotusProjectile_067443b0;
  return;
}


/* LotusProjectile::StaticNew() */

LotusProjectile * LotusProjectile::StaticNew(void)

{
  LotusProjectile *this;
  
  this = ::operator_new(0x1a8);
  LotusProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusProjectile::StaticClassInit() */

void LotusProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotusProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c00d90,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotusProjectile::StaticGetClass() */

long * LotusProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LotusProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusProjectile::GetClass() const */

long * LotusProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LotusProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusProjectile::handleImpact(BoardEntity*) */

void __thiscall LotusProjectile::handleImpact(LotusProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Zombie *this_00;
  long lVar4;
  ZombieTosserSubSystem *pZVar5;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((this[0x1a5] != (LotusProjectile)0x0) && (param_1 != (BoardEntity *)0x0)) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (cVar1 = Zombie::CanBeLaunchedByPlants(this_00), cVar1 != '\0')) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 < iVar3) {
      iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + 1);
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
      EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar2,*(float *)(lVar4 + 4),*(float *)(lVar4 + 8));
      pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x42480000,0x3ecccccd,pZVar5,this_00,aVStack_60,aRStack_50
                 ,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

