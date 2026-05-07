// Class: BassSpeakerProjectile


/* BassSpeakerProjectile::~BassSpeakerProjectile() */

void __thiscall BassSpeakerProjectile::~BassSpeakerProjectile(BassSpeakerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06789dd0;
  *(undefined ***)(this + 0x10) = &PTR__BassSpeakerProjectile_06789fc0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BassSpeakerProjectile::~BassSpeakerProjectile() */

void __thiscall BassSpeakerProjectile::~BassSpeakerProjectile(BassSpeakerProjectile *this)

{
  ~BassSpeakerProjectile(this + -0x10);
  return;
}


/* BassSpeakerProjectile::~BassSpeakerProjectile() */

void __thiscall BassSpeakerProjectile::~BassSpeakerProjectile(BassSpeakerProjectile *this)

{
  ~BassSpeakerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BassSpeakerProjectile::~BassSpeakerProjectile() */

void __thiscall BassSpeakerProjectile::~BassSpeakerProjectile(BassSpeakerProjectile *this)

{
  ~BassSpeakerProjectile(this + -0x10);
  return;
}


/* BassSpeakerProjectile::BassSpeakerProjectile() */

void __thiscall BassSpeakerProjectile::BassSpeakerProjectile(BassSpeakerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06789dd0;
  *(undefined ***)(this + 0x10) = &PTR__BassSpeakerProjectile_06789fc0;
  return;
}


/* BassSpeakerProjectile::StaticNew() */

BassSpeakerProjectile * BassSpeakerProjectile::StaticNew(void)

{
  BassSpeakerProjectile *this;
  
  this = ::operator_new(0x1a8);
  BassSpeakerProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BassSpeakerProjectile::StaticClassInit() */

void BassSpeakerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BassSpeakerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e32f4c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BassSpeakerProjectile::StaticGetClass() */

long * BassSpeakerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BassSpeakerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BassSpeakerProjectile::GetClass() const */

long * BassSpeakerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BassSpeakerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BassSpeakerProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BassSpeakerProjectile::OnCollideEntity(BassSpeakerProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 extraout_x0;
  long lVar3;
  undefined8 extraout_x0_00;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (uVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1), !(bool)uVar1)) {
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    goto LAB_03e35a44;
  }
  nop();
  PlantGroup::GetPlantAtLayer(aRStack_18);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator!=((string *)(lVar3 + 8),"morningglory");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (!bVar2) goto LAB_03e35aac;
LAB_03e35b04:
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  else {
LAB_03e35aac:
    PlantGroup::GetPlantAtLayer(aRStack_10,extraout_x0,1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_18,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator!=((string *)(lVar3 + 8),"morningglory");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar2) goto LAB_03e35b04;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    nop();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    PlantMorningGlory::AbsorbSoundWave(extraout_x0_00,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_03e35a44:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

