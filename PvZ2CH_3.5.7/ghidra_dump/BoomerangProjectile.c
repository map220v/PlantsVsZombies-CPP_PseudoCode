// Class: BoomerangProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangProjectile::StaticClassInit() */

void BoomerangProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomerangProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0415b054,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomerangProjectile::StaticGetClass() */

long * BoomerangProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoomerangProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangProjectile::GetClass() const */

long * BoomerangProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BoomerangProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomerangProjectile::SetLargeFlag(bool) */

void BoomerangProjectile::SetLargeFlag(bool param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = (undefined4 *)((ulong)param_1 + 0xc0);
  fVar2 = (float)FUN_04159bd0(*puVar1);
  FUN_04159bc8(fVar2 + fVar2,puVar1);
  puVar1 = (undefined4 *)((ulong)param_1 + 0xd8);
  fVar2 = (float)FUN_04159bbc(*puVar1);
  FUN_04159bc0(fVar2 + fVar2,puVar1);
  return;
}


/* BoomerangProjectile::BoomerangProjectile() */

void __thiscall BoomerangProjectile::BoomerangProjectile(BoomerangProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f1da0;
  *(undefined ***)(this + 0x10) = &PTR__BoomerangProjectile_067f1f90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BoomerangProjectile::StaticNew() */

BoomerangProjectile * BoomerangProjectile::StaticNew(void)

{
  BoomerangProjectile *this;
  
  this = ::operator_new(0x1c0);
  BoomerangProjectile(this);
  return this;
}


/* BoomerangProjectile::~BoomerangProjectile() */

void __thiscall BoomerangProjectile::~BoomerangProjectile(BoomerangProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f1da0;
  *(undefined ***)(this + 0x10) = &PTR__BoomerangProjectile_067f1f90;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BoomerangProjectile::~BoomerangProjectile() */

void __thiscall BoomerangProjectile::~BoomerangProjectile(BoomerangProjectile *this)

{
  ~BoomerangProjectile(this + -0x10);
  return;
}


/* BoomerangProjectile::~BoomerangProjectile() */

void __thiscall BoomerangProjectile::~BoomerangProjectile(BoomerangProjectile *this)

{
  ~BoomerangProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomerangProjectile::~BoomerangProjectile() */

void __thiscall BoomerangProjectile::~BoomerangProjectile(BoomerangProjectile *this)

{
  ~BoomerangProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomerangProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall BoomerangProjectile::OnCollideEntity(BoomerangProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar3,uVar4,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar2 = 0;
  if (bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

