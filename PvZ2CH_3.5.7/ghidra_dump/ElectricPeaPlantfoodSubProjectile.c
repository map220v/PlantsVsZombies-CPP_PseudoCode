// Class: ElectricPeaPlantfoodSubProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodSubProjectile::StaticClassInit() */

void ElectricPeaPlantfoodSubProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaPlantfoodSubProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c163a0,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaPlantfoodSubProjectile::StaticGetClass() */

long * ElectricPeaPlantfoodSubProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaPlantfoodSubProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaPlantfoodSubProjectile::GetClass() const */

long * ElectricPeaPlantfoodSubProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaPlantfoodSubProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodSubProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ElectricPeaPlantfoodSubProjectile::OnCollideEntity
          (ElectricPeaPlantfoodSubProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ElectricPeaPlantfoodSubProjectile::ElectricPeaPlantfoodSubProjectile() */

void __thiscall
ElectricPeaPlantfoodSubProjectile::ElectricPeaPlantfoodSubProjectile
          (ElectricPeaPlantfoodSubProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06747dd0;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaPlantfoodSubProjectile_06747fc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  DVec3::DVec3((DVec3 *)(this + 0x1bc));
  return;
}


/* ElectricPeaPlantfoodSubProjectile::StaticNew() */

ElectricPeaPlantfoodSubProjectile * ElectricPeaPlantfoodSubProjectile::StaticNew(void)

{
  ElectricPeaPlantfoodSubProjectile *this;
  
  this = ::operator_new(0x1d0);
  ElectricPeaPlantfoodSubProjectile(this);
  return this;
}


/* ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile() */

void __thiscall
ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile
          (ElectricPeaPlantfoodSubProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06747dd0;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaPlantfoodSubProjectile_06747fc0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile() */

void __thiscall
ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile
          (ElectricPeaPlantfoodSubProjectile *this)

{
  ~ElectricPeaPlantfoodSubProjectile(this + -0x10);
  return;
}


/* ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile() */

void __thiscall
ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile
          (ElectricPeaPlantfoodSubProjectile *this)

{
  ~ElectricPeaPlantfoodSubProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile() */

void __thiscall
ElectricPeaPlantfoodSubProjectile::~ElectricPeaPlantfoodSubProjectile
          (ElectricPeaPlantfoodSubProjectile *this)

{
  ~ElectricPeaPlantfoodSubProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodSubProjectile::onUpdate(float) */

void ElectricPeaPlantfoodSubProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  RtObject *this;
  ElectricPeaPlantfoodSubProps *pEVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)Projectile::GetProps(in_x0);
  pEVar1 = Sexy::RtObject::Cast<ElectricPeaPlantfoodSubProps>(this);
  fVar3 = *(float *)(pEVar1 + 0x1e4);
  if (*(float *)(in_x0 + 0x1c8) < fVar3) {
    fVar2 = param_1 + *(float *)(in_x0 + 0x1c8);
    if (fVar3 < fVar2) {
      fVar2 = 1.0;
      *(float *)(in_x0 + 0x1c8) = fVar3;
    }
    else {
      *(float *)(in_x0 + 0x1c8) = fVar2;
      fVar2 = fVar2 / fVar3;
    }
    local_18 = Sexy::SexyMath::Lerp<Sexy::SexyVector3>
                         ((SexyVector3 *)(in_x0 + 0x1b0),(SexyVector3 *)(in_x0 + 0x1bc),fVar2);
    local_14 = fVar3;
    Projectile::SetVelocity(in_x0,(SexyVector3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaPlantfoodSubProjectile::SetProjectileData(Sexy::RtWeakPtr<BoardEntity>) */

void ElectricPeaPlantfoodSubProjectile::SetProjectileData
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,Projectile *param_4,
               RtWeakPtr *param_5)

{
  bool bVar1;
  SexyVector3 *pSVar2;
  RtObject *this;
  ElectricPeaPlantfoodSubProps *pEVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_4 + 0x1a8),param_5);
  pSVar2 = (SexyVector3 *)Projectile::GetVelocity(param_4);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1b0),pSVar2);
  this = (RtObject *)Projectile::GetProps(param_4);
  pEVar3 = Sexy::RtObject::Cast<ElectricPeaPlantfoodSubProps>(this);
  local_18 = Sexy::SexyVector3::operator*
                       ((SexyVector3 *)(param_4 + 0x1b0),*(float *)(pEVar3 + 0x1e0));
  local_14 = param_2;
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1bc),(SexyVector3 *)&local_18);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(param_4 + 0x1c8) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

