// Class: DracaenaSwordProjectile


/* DracaenaSwordProjectile::~DracaenaSwordProjectile() */

void __thiscall DracaenaSwordProjectile::~DracaenaSwordProjectile(DracaenaSwordProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069dd090;
  *(undefined ***)(this + 0x10) = &PTR__DracaenaSwordProjectile_069dd280;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DracaenaSwordProjectile::~DracaenaSwordProjectile() */

void __thiscall DracaenaSwordProjectile::~DracaenaSwordProjectile(DracaenaSwordProjectile *this)

{
  ~DracaenaSwordProjectile(this + -0x10);
  return;
}


/* DracaenaSwordProjectile::~DracaenaSwordProjectile() */

void __thiscall DracaenaSwordProjectile::~DracaenaSwordProjectile(DracaenaSwordProjectile *this)

{
  ~DracaenaSwordProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DracaenaSwordProjectile::~DracaenaSwordProjectile() */

void __thiscall DracaenaSwordProjectile::~DracaenaSwordProjectile(DracaenaSwordProjectile *this)

{
  ~DracaenaSwordProjectile(this + -0x10);
  return;
}


/* DracaenaSwordProjectile::DracaenaSwordProjectile() */

void __thiscall DracaenaSwordProjectile::DracaenaSwordProjectile(DracaenaSwordProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (DracaenaSwordProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_069dd090;
  *(undefined ***)(this + 0x10) = &PTR__DracaenaSwordProjectile_069dd280;
  return;
}


/* DracaenaSwordProjectile::StaticNew() */

DracaenaSwordProjectile * DracaenaSwordProjectile::StaticNew(void)

{
  DracaenaSwordProjectile *this;
  
  this = ::operator_new(0x1a8);
  DracaenaSwordProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DracaenaSwordProjectile::StaticClassInit() */

void DracaenaSwordProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DracaenaSwordProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3a2f0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DracaenaSwordProjectile::StaticGetClass() */

long * DracaenaSwordProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DracaenaSwordProjectile::GetClass() const */

long * DracaenaSwordProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DracaenaSwordProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DracaenaSwordProjectile::damageEntity(BoardEntity*) */

void __thiscall
DracaenaSwordProjectile::damageEntity(DracaenaSwordProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  PlantDracaena *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
  if (cVar1 != '\0') {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    Sexy::RtObject::Cast<Plant>(this_00);
    nop();
    if ((extraout_x0 != (PlantDracaena *)0x0) &&
       (iVar2 = FUN_04e39798(*(undefined4 *)(extraout_x0 + 0x38)), iVar2 != 0x11)) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      PlantDracaena::SetTargetZombie(extraout_x0,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      PlantDracaena::setState(extraout_x0,0xe);
      this[0x1a5] = (DracaenaSwordProjectile)0x1;
    }
  }
  Projectile::damageEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DracaenaSwordProjectile::onDestroy() */

void __thiscall DracaenaSwordProjectile::onDestroy(DracaenaSwordProjectile *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  long extraout_x0;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1a5] == (DracaenaSwordProjectile)0x0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68)), cVar1 != '\0')) {
    this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    Sexy::RtObject::Cast<Plant>(this_00);
    nop();
    if ((extraout_x0 != 0) &&
       (iVar2 = FUN_04e39798(*(undefined4 *)(extraout_x0 + 0x38)), iVar2 != 0x11)) {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(extraout_x0 + 0x10));
      std::string::string(asStack_68,"over");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

