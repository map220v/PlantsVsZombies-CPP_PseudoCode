// Class: ZombieEightiesGargantuar


/* ZombieEightiesGargantuar::StopJamming() */

void __thiscall ZombieEightiesGargantuar::StopJamming(ZombieEightiesGargantuar *this)

{
  this[0x808] = (ZombieEightiesGargantuar)0x0;
  return;
}


/* ZombieEightiesGargantuar::~ZombieEightiesGargantuar() */

void __thiscall ZombieEightiesGargantuar::~ZombieEightiesGargantuar(ZombieEightiesGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068f2070;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesGargantuar_068f2ac8;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesGargantuar::~ZombieEightiesGargantuar() */

void __thiscall ZombieEightiesGargantuar::~ZombieEightiesGargantuar(ZombieEightiesGargantuar *this)

{
  ~ZombieEightiesGargantuar(this + -0x10);
  return;
}


/* ZombieEightiesGargantuar::~ZombieEightiesGargantuar() */

void __thiscall ZombieEightiesGargantuar::~ZombieEightiesGargantuar(ZombieEightiesGargantuar *this)

{
  ~ZombieEightiesGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesGargantuar::~ZombieEightiesGargantuar() */

void __thiscall ZombieEightiesGargantuar::~ZombieEightiesGargantuar(ZombieEightiesGargantuar *this)

{
  ~ZombieEightiesGargantuar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGargantuar::StaticClassInit() */

void ZombieEightiesGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_047e7944,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGargantuar::StaticGetClass() */

long * ZombieEightiesGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGargantuar::GetClass() const */

long * ZombieEightiesGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGargantuar::ZombieEightiesGargantuar() */

void __thiscall ZombieEightiesGargantuar::ZombieEightiesGargantuar(ZombieEightiesGargantuar *this)

{
  undefined4 uVar1;
  
  memset(this,0,0x808);
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  this[0x808] = (ZombieEightiesGargantuar)0x0;
  *(undefined ***)this = &PTR_GetClass_068f2070;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesGargantuar_068f2ac8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x80c) = uVar1;
  return;
}


/* ZombieEightiesGargantuar::StaticNew() */

ZombieEightiesGargantuar * ZombieEightiesGargantuar::StaticNew(void)

{
  ZombieEightiesGargantuar *this;
  
  this = ::operator_new(0x810);
  ZombieEightiesGargantuar(this);
  return this;
}


/* ZombieEightiesGargantuar::onUpdate() */

void __thiscall ZombieEightiesGargantuar::onUpdate(ZombieEightiesGargantuar *this)

{
  char cVar1;
  float fVar2;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
      (this[0x808] != (ZombieEightiesGargantuar)0x0)) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x80c) <= fVar2)) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  return;
}


/* ZombieEightiesGargantuar::GetJamStyle() */

void ZombieEightiesGargantuar::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesGargantuarProps>(in_x0);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGargantuar::calcShockWaveSpawnPosition() */

void __thiscall ZombieEightiesGargantuar::calcShockWaveSpawnPosition(ZombieEightiesGargantuar *this)

{
  ZombieEightiesGargantuarProps *pZVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong local_10;
  long local_8;
  
  fVar4 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_047e75cc(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
  pZVar1 = Zombie::GetProps<ZombieEightiesGargantuarProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar1 + 0x278);
  pZVar1 = Zombie::GetProps<ZombieEightiesGargantuarProps>((Zombie *)this);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,fVar2 + fVar3,fVar4 + *(float *)(pZVar1 + 0x27c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* ZombieEightiesGargantuar::setArbitrarySmashTime() */

void __thiscall ZombieEightiesGargantuar::setArbitrarySmashTime(ZombieEightiesGargantuar *this)

{
  ZombieEightiesGargantuarProps *pZVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pZVar1 = Zombie::GetProps<ZombieEightiesGargantuarProps>((Zombie *)this);
  fVar5 = *(float *)(pZVar1 + 0x270);
  pcVar2 = *(code **)(*(long *)this + 0x308);
  pZVar1 = Zombie::GetProps<ZombieEightiesGargantuarProps>((Zombie *)this);
  fVar3 = (float)(*pcVar2)(fVar5 * *(float *)(pZVar1 + 0x274),this);
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x80c) = fVar3 + fVar4 + fVar5;
  return;
}


/* ZombieEightiesGargantuar::StartJamming() */

void __thiscall ZombieEightiesGargantuar::StartJamming(ZombieEightiesGargantuar *this)

{
  this[0x808] = (ZombieEightiesGargantuar)0x1;
  setArbitrarySmashTime(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGargantuar::createShockWave() */

void ZombieEightiesGargantuar::createShockWave(void)

{
  undefined4 uVar1;
  ZombieEightiesGargantuar *in_x0;
  undefined8 uVar2;
  long lVar3;
  Board *pBVar4;
  undefined4 in_s1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"ShockWaveDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  pBVar4._0_4_ = (Board *)calcShockWaveSpawnPosition(in_x0);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  lVar3 = Board::AddProjectile(pBVar4._0_4_,in_s1,0,uVar2,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar1 = FUN_047e7494(*(undefined4 *)(in_x0 + 0x24));
  FUN_047e7498(lVar3 + 0x24,uVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieEightiesGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  ZombieGargantuar::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if ((param_1[0x808] != (string)0x0) &&
     ((bVar1 = std::operator==(param_4,"smash_left"), bVar1 ||
      (bVar1 = std::operator==(param_4,"smash_righ"), bVar1)))) {
    createShockWave();
    setArbitrarySmashTime((ZombieEightiesGargantuar *)param_1);
    return;
  }
  return;
}

