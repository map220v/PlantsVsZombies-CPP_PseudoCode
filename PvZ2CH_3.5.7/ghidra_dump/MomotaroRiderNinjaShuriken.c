// Class: MomotaroRiderNinjaShuriken


/* MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken() */

void __thiscall
MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken(MomotaroRiderNinjaShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_069300c0;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroRiderNinjaShuriken_069302c0;
  EggplantShuriken::~EggplantShuriken((EggplantShuriken *)this);
  return;
}


/* non-virtual thunk to MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken() */

void __thiscall
MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken(MomotaroRiderNinjaShuriken *this)

{
  ~MomotaroRiderNinjaShuriken(this + -0x10);
  return;
}


/* MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken() */

void __thiscall
MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken(MomotaroRiderNinjaShuriken *this)

{
  ~MomotaroRiderNinjaShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken() */

void __thiscall
MomotaroRiderNinjaShuriken::~MomotaroRiderNinjaShuriken(MomotaroRiderNinjaShuriken *this)

{
  ~MomotaroRiderNinjaShuriken(this + -0x10);
  return;
}


/* MomotaroRiderNinjaShuriken::MomotaroRiderNinjaShuriken() */

void __thiscall
MomotaroRiderNinjaShuriken::MomotaroRiderNinjaShuriken(MomotaroRiderNinjaShuriken *this)

{
  EggplantShuriken::EggplantShuriken((EggplantShuriken *)this);
  *(undefined ***)this = &PTR_GetClass_069300c0;
  *(undefined ***)(this + 0x10) = &PTR__MomotaroRiderNinjaShuriken_069302c0;
  return;
}


/* MomotaroRiderNinjaShuriken::StaticNew() */

MomotaroRiderNinjaShuriken * MomotaroRiderNinjaShuriken::StaticNew(void)

{
  MomotaroRiderNinjaShuriken *this;
  
  this = ::operator_new(0x1f0);
  MomotaroRiderNinjaShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinjaShuriken::StaticClassInit() */

void MomotaroRiderNinjaShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroRiderNinjaShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_04a29b24,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderNinjaShuriken::StaticGetClass() */

long * MomotaroRiderNinjaShuriken::StaticGetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinjaShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderNinjaShuriken::GetClass() const */

long * MomotaroRiderNinjaShuriken::GetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinjaShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinjaShuriken::OnCollideEntity(BoardEntity*) */

void __thiscall
MomotaroRiderNinjaShuriken::OnCollideEntity(MomotaroRiderNinjaShuriken *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  MomotaroRider *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = Sexy::RtObject::IsA<MomotaroRider>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if ((this_01 != (MomotaroRider *)0x0) &&
         (cVar2 = MomotaroRider::IsDying(this_01), cVar2 == '\0')) {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

