// Class: ZombiePVPShadowImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPShadowImp::StaticClassInit() */

void ZombiePVPShadowImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPShadowImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04995394,0x830,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPShadowImp::StaticGetClass() */

long * ZombiePVPShadowImp::StaticGetClass(void)

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
  uVar2 = ZombiePVPImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPShadowImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPShadowImp::GetClass() const */

long * ZombiePVPShadowImp::GetClass(void)

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
  uVar2 = ZombiePVPImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPShadowImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPShadowImp::~ZombiePVPShadowImp() */

void __thiscall ZombiePVPShadowImp::~ZombiePVPShadowImp(ZombiePVPShadowImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0691b910;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPShadowImp_0691c3d0;
  ZombiePVPImp::~ZombiePVPImp((ZombiePVPImp *)this);
  return;
}


/* non-virtual thunk to ZombiePVPShadowImp::~ZombiePVPShadowImp() */

void __thiscall ZombiePVPShadowImp::~ZombiePVPShadowImp(ZombiePVPShadowImp *this)

{
  ~ZombiePVPShadowImp(this + -0x10);
  return;
}


/* ZombiePVPShadowImp::~ZombiePVPShadowImp() */

void __thiscall ZombiePVPShadowImp::~ZombiePVPShadowImp(ZombiePVPShadowImp *this)

{
  ~ZombiePVPShadowImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPShadowImp::~ZombiePVPShadowImp() */

void __thiscall ZombiePVPShadowImp::~ZombiePVPShadowImp(ZombiePVPShadowImp *this)

{
  ~ZombiePVPShadowImp(this + -0x10);
  return;
}


/* ZombiePVPShadowImp::ZombiePVPShadowImp() */

void __thiscall ZombiePVPShadowImp::ZombiePVPShadowImp(ZombiePVPShadowImp *this)

{
  undefined4 uVar1;
  
  ZombiePVPImp::ZombiePVPImp((ZombiePVPImp *)this);
  *(undefined ***)this = &PTR_GetClass_0691b910;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPShadowImp_0691c3d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x828) = uVar1;
  return;
}


/* ZombiePVPShadowImp::StaticNew() */

ZombiePVPShadowImp * ZombiePVPShadowImp::StaticNew(void)

{
  ZombiePVPShadowImp *this;
  
  this = ::operator_new(0x830);
  ZombiePVPShadowImp(this);
  return this;
}


/* ZombiePVPShadowImp::onUpdate() */

void __thiscall ZombiePVPShadowImp::onUpdate(ZombiePVPShadowImp *this)

{
  float fVar1;
  
  ZombiePVPImp::onUpdate((ZombiePVPImp *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x828) < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPShadowImp::onZombieInitialize() */

void __thiscall ZombiePVPShadowImp::onZombieInitialize(ZombiePVPShadowImp *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  ZombiePVPShadowImpProps *pZVar2;
  float fVar3;
  Color aCStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  FUN_04994a90(this + 0x59b);
  Sexy::Color::Color(aCStack_18,1);
  local_c = 0xb2;
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  fVar3 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombiePVPShadowImpProps>((Zombie *)this);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x828) = fVar3 + *(float *)(pZVar2 + 0x210);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

