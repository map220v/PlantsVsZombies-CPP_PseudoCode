// Class: PassionFlowerLV5SmallProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerLV5SmallProjectile::StaticClassInit() */

void PassionFlowerLV5SmallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PassionFlowerLV5SmallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0396b71c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassionFlowerLV5SmallProjectile::StaticGetClass() */

long * PassionFlowerLV5SmallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerLV5SmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerLV5SmallProjectile::GetClass() const */

long * PassionFlowerLV5SmallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerLV5SmallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerLV5SmallProjectile::PassionFlowerLV5SmallProjectile() */

void __thiscall
PassionFlowerLV5SmallProjectile::PassionFlowerLV5SmallProjectile
          (PassionFlowerLV5SmallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066d60d0;
  *(undefined ***)(this + 0x10) = &PTR__PassionFlowerLV5SmallProjectile_066d62c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* PassionFlowerLV5SmallProjectile::StaticNew() */

PassionFlowerLV5SmallProjectile * PassionFlowerLV5SmallProjectile::StaticNew(void)

{
  PassionFlowerLV5SmallProjectile *this;
  
  this = ::operator_new(0x1b0);
  PassionFlowerLV5SmallProjectile(this);
  return this;
}


/* PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile() */

void __thiscall
PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile
          (PassionFlowerLV5SmallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066d60d0;
  *(undefined ***)(this + 0x10) = &PTR__PassionFlowerLV5SmallProjectile_066d62c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile() */

void __thiscall
PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile
          (PassionFlowerLV5SmallProjectile *this)

{
  ~PassionFlowerLV5SmallProjectile(this + -0x10);
  return;
}


/* PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile() */

void __thiscall
PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile
          (PassionFlowerLV5SmallProjectile *this)

{
  ~PassionFlowerLV5SmallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile() */

void __thiscall
PassionFlowerLV5SmallProjectile::~PassionFlowerLV5SmallProjectile
          (PassionFlowerLV5SmallProjectile *this)

{
  ~PassionFlowerLV5SmallProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerLV5SmallProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PassionFlowerLV5SmallProjectile::OnCollideEntity
          (PassionFlowerLV5SmallProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  ResourceInfo *pRVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1a8));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    ToolPacketData::GetProps();
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (param_1 == (BoardEntity *)pRVar3) {
      uVar2 = 0;
      goto LAB_0396beec;
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_0396beec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

