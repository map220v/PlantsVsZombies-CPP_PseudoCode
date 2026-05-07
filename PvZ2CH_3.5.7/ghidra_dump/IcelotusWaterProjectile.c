// Class: IcelotusWaterProjectile


/* IcelotusWaterProjectile::~IcelotusWaterProjectile() */

void __thiscall IcelotusWaterProjectile::~IcelotusWaterProjectile(IcelotusWaterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a23c0;
  *(undefined ***)(this + 0x10) = &PTR__IcelotusWaterProjectile_069a25b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to IcelotusWaterProjectile::~IcelotusWaterProjectile() */

void __thiscall IcelotusWaterProjectile::~IcelotusWaterProjectile(IcelotusWaterProjectile *this)

{
  ~IcelotusWaterProjectile(this + -0x10);
  return;
}


/* IcelotusWaterProjectile::~IcelotusWaterProjectile() */

void __thiscall IcelotusWaterProjectile::~IcelotusWaterProjectile(IcelotusWaterProjectile *this)

{
  ~IcelotusWaterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IcelotusWaterProjectile::~IcelotusWaterProjectile() */

void __thiscall IcelotusWaterProjectile::~IcelotusWaterProjectile(IcelotusWaterProjectile *this)

{
  ~IcelotusWaterProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcelotusWaterProjectile::StaticClassInit() */

void IcelotusWaterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"IcelotusWaterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce8484,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IcelotusWaterProjectile::StaticGetClass() */

long * IcelotusWaterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IcelotusWaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcelotusWaterProjectile::GetClass() const */

long * IcelotusWaterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"IcelotusWaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IcelotusWaterProjectile::IcelotusWaterProjectile() */

void __thiscall IcelotusWaterProjectile::IcelotusWaterProjectile(IcelotusWaterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069a23c0;
  *(undefined ***)(this + 0x10) = &PTR__IcelotusWaterProjectile_069a25b0;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  this[0x1a5] = (IcelotusWaterProjectile)0x0;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* IcelotusWaterProjectile::StaticNew() */

IcelotusWaterProjectile * IcelotusWaterProjectile::StaticNew(void)

{
  IcelotusWaterProjectile *this;
  
  this = ::operator_new(0x1b8);
  IcelotusWaterProjectile(this);
  return this;
}


/* IcelotusWaterProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
IcelotusWaterProjectile::onSetInstigator(IcelotusWaterProjectile *this,BoardEntity *param_1)

{
  IcelotusWaterProjectile IVar1;
  Plant *this_00;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), this_00 != (Plant *)0x0)) {
    IVar1 = (IcelotusWaterProjectile)Plant::GetAvatarEnable(this_00);
    this[0x1a5] = IVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcelotusWaterProjectile::CreateIcelotusDropwater(Sexy::Point) */

void __thiscall
IcelotusWaterProjectile::CreateIcelotusDropwater(IcelotusWaterProjectile *this,int *param_2)

{
  bool bVar1;
  GridIcelotusDropwater *this_00;
  RtObject *this_01;
  Plant *this_02;
  GridIcelotusDropwater *this_03;
  Board *this_04;
  float fVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GridIcelotusDropwater *)FUN_04ce9690(*param_2,param_2[1]);
  if (this_00 == (GridIcelotusDropwater *)0x0) {
    this_04 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aRStack_10,"icelotus_dropwater");
    Board::AddGridItem(this_04,(string *)aRStack_10,*param_2,param_2[1],1);
    nop();
    std::string::~string((string *)aRStack_10);
    nop();
    GridIcelotusDropwater::InitParam(this_03,(bool)this[0x1a5]);
    this_00 = this_03;
  }
  else {
    GridIcelotusDropwater::Resume(this_00,(bool)this[0x1a5]);
  }
  PVPSeedBankModule::GetPVPSkillEnergyUI();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (bVar1) {
    this_01 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    this_02 = Sexy::RtObject::Cast<Plant>(this_01);
    if (this_02 != (Plant *)0x0) {
      fVar2 = (float)Plant::GetGeneSkillBoost(this_02);
      GridIcelotusDropwater::ExtensionDuration(this_00,fVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IcelotusWaterProjectile::OnCollideGround() */

void __thiscall IcelotusWaterProjectile::OnCollideGround(IcelotusWaterProjectile *this)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x1ac));
  CreateIcelotusDropwater(this,aPStack_10);
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

