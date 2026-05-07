// Class: OakProjectile


/* OakProjectile::~OakProjectile() */

void __thiscall OakProjectile::~OakProjectile(OakProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0680b620;
  *(undefined ***)(this + 0x10) = &PTR__OakProjectile_0680b810;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to OakProjectile::~OakProjectile() */

void __thiscall OakProjectile::~OakProjectile(OakProjectile *this)

{
  ~OakProjectile(this + -0x10);
  return;
}


/* OakProjectile::~OakProjectile() */

void __thiscall OakProjectile::~OakProjectile(OakProjectile *this)

{
  ~OakProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OakProjectile::~OakProjectile() */

void __thiscall OakProjectile::~OakProjectile(OakProjectile *this)

{
  ~OakProjectile(this + -0x10);
  return;
}


/* OakProjectile::OakProjectile() */

void __thiscall OakProjectile::OakProjectile(OakProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (OakProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0680b620;
  *(undefined ***)(this + 0x10) = &PTR__OakProjectile_0680b810;
  return;
}


/* OakProjectile::StaticNew() */

OakProjectile * OakProjectile::StaticNew(void)

{
  OakProjectile *this;
  
  this = ::operator_new(0x1a8);
  OakProjectile(this);
  return this;
}


/* OakProjectile::onDestroy() */

void __thiscall OakProjectile::onDestroy(OakProjectile *this)

{
  if (this[0x1a5] != (OakProjectile)0x0) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakProjectile::StaticClassInit() */

void OakProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04210480,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakProjectile::StaticGetClass() */

long * OakProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakProjectile::GetClass() const */

long * OakProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"OakProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakProjectile::OnHeadShot(BoardEntity*) */

void OakProjectile::OnHeadShot(BoardEntity *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = gMessageRouter;
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  MessageRouter::Post<Sexy::SexyVector3_const&,Sexy::SexyVector3>
            (*puVar2,puVar2[1],puVar2[2],puVar1,Message::OakHeadShoot);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall OakProjectile::OnCollideEntity(OakProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  RtWeakPtr aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (bVar1 = Sexy::RtObject::IsA<ZombieTarget>((RtObject *)param_1), !bVar1)) {
    ToolPacketData::GetProps();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
LAB_0421265c:
      uVar3 = 1;
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (cVar2 != '\0') {
        uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      }
      goto LAB_04212604;
    }
  }
  else {
    this[0x1a5] = (OakProjectile)0x1;
    ToolPacketData::GetProps();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) goto LAB_0421265c;
  }
  uVar3 = 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_04212604:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

