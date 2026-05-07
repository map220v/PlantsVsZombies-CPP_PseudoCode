// Class: GoldCabbageProjectile


/* GoldCabbageProjectile::~GoldCabbageProjectile() */

void __thiscall GoldCabbageProjectile::~GoldCabbageProjectile(GoldCabbageProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069104b0;
  *(undefined ***)(this + 0x10) = &PTR__GoldCabbageProjectile_069106a0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GoldCabbageProjectile::~GoldCabbageProjectile() */

void __thiscall GoldCabbageProjectile::~GoldCabbageProjectile(GoldCabbageProjectile *this)

{
  ~GoldCabbageProjectile(this + -0x10);
  return;
}


/* GoldCabbageProjectile::~GoldCabbageProjectile() */

void __thiscall GoldCabbageProjectile::~GoldCabbageProjectile(GoldCabbageProjectile *this)

{
  ~GoldCabbageProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GoldCabbageProjectile::~GoldCabbageProjectile() */

void __thiscall GoldCabbageProjectile::~GoldCabbageProjectile(GoldCabbageProjectile *this)

{
  ~GoldCabbageProjectile(this + -0x10);
  return;
}


/* GoldCabbageProjectile::GoldCabbageProjectile() */

void __thiscall GoldCabbageProjectile::GoldCabbageProjectile(GoldCabbageProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069104b0;
  *(undefined ***)(this + 0x10) = &PTR__GoldCabbageProjectile_069106a0;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  this[0x1bc] = (GoldCabbageProjectile)0x0;
  this[0x1bd] = (GoldCabbageProjectile)0x0;
  this[0x1be] = (GoldCabbageProjectile)0x0;
  this[0x1bf] = (GoldCabbageProjectile)0x0;
  return;
}


/* GoldCabbageProjectile::StaticNew() */

GoldCabbageProjectile * GoldCabbageProjectile::StaticNew(void)

{
  GoldCabbageProjectile *this;
  
  this = ::operator_new(0x1c0);
  GoldCabbageProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldCabbageProjectile::StaticClassInit() */

void GoldCabbageProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldCabbageProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0491d9fc,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldCabbageProjectile::StaticGetClass() */

long * GoldCabbageProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GoldCabbageProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldCabbageProjectile::GetClass() const */

long * GoldCabbageProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GoldCabbageProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldCabbageProjectile::onAnimStopped(std::string const&) */

void __thiscall GoldCabbageProjectile::onAnimStopped(GoldCabbageProjectile *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"effects");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldCabbageProjectile::doSplit() */

void __thiscall GoldCabbageProjectile::doSplit(GoldCabbageProjectile *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Projectile *pPVar5;
  float *pfVar6;
  SexyVector3 *pSVar7;
  char *__s;
  undefined8 uVar8;
  Board *pBVar11;
  undefined4 uVar9;
  undefined4 uVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1bf] = (GoldCabbageProjectile)0x1;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_60,"effects");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar2,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_60);
  nop();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_80);
  if (this[0x1bc] == (GoldCabbageProjectile)0x0) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "GoldCabbageDefault";
  }
  else if (this[0x1bd] == (GoldCabbageProjectile)0x0) {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "GoldFoodCabbageDefault";
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "GoldFoodLightingCabbageDefault";
  }
  std::string::string((string *)aRStack_78,__s);
  Sexy::ToWString((string *)aRStack_78);
  Sexy::RtName::RtName((RtName *)asStack_60,(wstring *)aRStack_70);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_68,uVar3,0xc,asStack_60);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  Sexy::RtName::~RtName((RtName *)asStack_60);
  FUN_05476c50(aRStack_70);
  std::string::~string((string *)aRStack_78);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_80);
  if (cVar1 != '\0') {
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar11._0_4_ = *puVar4;
    uVar9 = *(undefined4 *)((long)puVar4 + 4);
    uVar10 = *(undefined4 *)(puVar4 + 1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)a_Stack_80);
    uVar3 = Projectile::GetInstigator((Projectile *)this);
    pPVar5 = (Projectile *)Board::AddProjectile(pBVar11._0_4_,uVar9,uVar10,uVar8,asStack_60,uVar3,0)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    pfVar6 = (float *)Projectile::GetVelocity((Projectile *)this);
    Projectile::SetVelocity(pPVar5,*pfVar6 * 0.8,pfVar6[1],pfVar6[2]);
    pSVar7 = (SexyVector3 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)this);
    Projectile::SetAcceleration(pPVar5,pSVar7);
    FUN_0491d72c(*(undefined4 *)(this + 0xcc));
    FUN_0491d738(pPVar5 + 0xcc);
    FUN_0491d728(*(undefined4 *)(this + 0xc4));
    FUN_0491d730(pPVar5 + 0xc4);
    FUN_0491d74c(pPVar5 + 0xc0);
                    /* WARNING: Load size is inaccurate */
    pBVar11._0_4_ = *puVar4;
    uVar9 = *(undefined4 *)((long)puVar4 + 4);
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)a_Stack_80);
    uVar3 = Projectile::GetInstigator((Projectile *)this);
    pPVar5 = (Projectile *)Board::AddProjectile(pBVar11._0_4_,uVar9,uVar10,uVar8,asStack_60,uVar3,0)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    Projectile::SetVelocity(pPVar5,*pfVar6 * 1.2,pfVar6[1],pfVar6[2]);
    Projectile::SetAcceleration(pPVar5,pSVar7);
    FUN_0491d72c(*(undefined4 *)(this + 0xcc));
    FUN_0491d738(pPVar5 + 0xcc);
    FUN_0491d728(*(undefined4 *)(this + 0xc4));
    FUN_0491d730(pPVar5 + 0xc4);
    FUN_0491d74c(pPVar5 + 0xc0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldCabbageProjectile::onUpdate(float) */

void __thiscall GoldCabbageProjectile::onUpdate(GoldCabbageProjectile *this,float param_1)

{
  float fVar1;
  
  if (((this[0x1be] != (GoldCabbageProjectile)0x0) && (this[0x1bf] == (GoldCabbageProjectile)0x0))
     && (fVar1 = *(float *)(this + 0x1b8), *(float *)(this + 0x1b8) = param_1 + fVar1,
        *(float *)(this + 0x1b4) * 0.5 <= param_1 + fVar1)) {
    doSplit(this);
    return;
  }
  return;
}

