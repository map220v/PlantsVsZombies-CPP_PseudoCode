// Class: MeteorSuperProjectile


/* MeteorSuperProjectile::~MeteorSuperProjectile() */

void __thiscall MeteorSuperProjectile::~MeteorSuperProjectile(MeteorSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1990;
  *(undefined ***)(this + 0x10) = &PTR__MeteorSuperProjectile_069b1b80;
  MeteorAdvancedProjectile::~MeteorAdvancedProjectile((MeteorAdvancedProjectile *)this);
  return;
}


/* non-virtual thunk to MeteorSuperProjectile::~MeteorSuperProjectile() */

void __thiscall MeteorSuperProjectile::~MeteorSuperProjectile(MeteorSuperProjectile *this)

{
  ~MeteorSuperProjectile(this + -0x10);
  return;
}


/* MeteorSuperProjectile::~MeteorSuperProjectile() */

void __thiscall MeteorSuperProjectile::~MeteorSuperProjectile(MeteorSuperProjectile *this)

{
  ~MeteorSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MeteorSuperProjectile::~MeteorSuperProjectile() */

void __thiscall MeteorSuperProjectile::~MeteorSuperProjectile(MeteorSuperProjectile *this)

{
  ~MeteorSuperProjectile(this + -0x10);
  return;
}


/* MeteorSuperProjectile::MeteorSuperProjectile() */

void __thiscall MeteorSuperProjectile::MeteorSuperProjectile(MeteorSuperProjectile *this)

{
  MeteorAdvancedProjectile::MeteorAdvancedProjectile((MeteorAdvancedProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b1990;
  *(undefined ***)(this + 0x10) = &PTR__MeteorSuperProjectile_069b1b80;
  return;
}


/* MeteorSuperProjectile::StaticNew() */

MeteorSuperProjectile * MeteorSuperProjectile::StaticNew(void)

{
  MeteorSuperProjectile *this;
  
  this = ::operator_new(0x1b0);
  MeteorSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorSuperProjectile::StaticClassInit() */

void MeteorSuperProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MeteorSuperProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d49a78,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorSuperProjectile::StaticGetClass() */

long * MeteorSuperProjectile::StaticGetClass(void)

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
  uVar2 = MeteorAdvancedProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MeteorSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorSuperProjectile::GetClass() const */

long * MeteorSuperProjectile::GetClass(void)

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
  uVar2 = MeteorAdvancedProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"MeteorSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MeteorSuperProjectile::canCreatePlanetMeteor(Sexy::SexyVector3 const&) */

undefined8 __thiscall
MeteorSuperProjectile::canCreatePlanetMeteor(MeteorSuperProjectile *this,SexyVector3 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1);
  if (((cVar1 == '\0') &&
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorSuperProjectile::createPlanetMeteor(Sexy::SexyVector3 const&) */

void __thiscall
MeteorSuperProjectile::createPlanetMeteor(MeteorSuperProjectile *this,SexyVector3 *param_1)

{
  int iVar1;
  long extraout_x0;
  undefined8 uVar2;
  ulong uVar3;
  RtObject *this_00;
  PlanetMeteorProjectile *this_01;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  Board *pBVar8;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  FUN_05475d88(asStack_30,extraout_x0 + 0x1e8);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  uVar3 = FUN_04d48314(*(undefined8 *)(extraout_x0 + 0x1f0),*(undefined8 *)(extraout_x0 + 0x1f8));
  iVar1 = FUN_04d482ac(*(undefined4 *)(this + 0x70));
  if ((ulong)(long)(iVar1 + -1) < uVar3) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    iVar1 = FUN_04d482ac(*(undefined4 *)(this + 0x70));
    puVar5 = (undefined4 *)FUN_04d4836c(*(undefined8 *)(extraout_x0 + 0x1f0),(long)(iVar1 + -1));
    *(undefined4 *)(lVar4 + 0x38) = *puVar5;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    *(undefined1 *)(lVar4 + 0x3c) = 1;
  }
                    /* WARNING: Load size is inaccurate */
  pBVar8._0_4_ = *(Board **)param_1;
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  uVar2 = Projectile::GetInstigator((Projectile *)this);
  this_00 = (RtObject *)Board::AddProjectile(pBVar8._0_4_,uVar7,0,uVar6,aRStack_18,uVar2,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  this_01 = Sexy::RtObject::Cast<PlanetMeteorProjectile>(this_00);
  if (this_01 != (PlanetMeteorProjectile *)0x0) {
    FUN_04d482ec(*(undefined4 *)(this + 0x1a8),*(undefined4 *)(this + 0x1ac),this_01 + 0x1c4,
                 this_01 + 0x1c8);
    iVar1 = BoardTransforms::BoardSpaceToGridX((float)pBVar8._0_4_);
    PlanetMeteorProjectile::SetEndCol(this_01,iVar1 + *(int *)(extraout_x0 + 0x1e4));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MeteorSuperProjectile::handleImpact(BoardEntity*) */

void __thiscall
MeteorSuperProjectile::handleImpact(MeteorSuperProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  SexyVector3 *pSVar2;
  
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = canCreatePlanetMeteor(this,pSVar2);
  if (cVar1 != '\0') {
    createPlanetMeteor(this,pSVar2);
  }
  MeteorAdvancedProjectile::handleImpact((MeteorAdvancedProjectile *)this,param_1);
  return;
}

