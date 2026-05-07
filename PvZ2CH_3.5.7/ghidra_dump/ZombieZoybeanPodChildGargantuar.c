// Class: ZombieZoybeanPodChildGargantuar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodChildGargantuar::StaticClassInit() */

void ZombieZoybeanPodChildGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZoybeanPodChildGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_03460e74,0x830,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodChildGargantuar::StaticGetClass() */

long * ZombieZoybeanPodChildGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieZoybeanPodGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodChildGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodChildGargantuar::GetClass() const */

long * ZombieZoybeanPodChildGargantuar::GetClass(void)

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
  uVar2 = ZombieZoybeanPodGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodChildGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodChildGargantuar::ZombieZoybeanPodChildGargantuar() */

void __thiscall
ZombieZoybeanPodChildGargantuar::ZombieZoybeanPodChildGargantuar
          (ZombieZoybeanPodChildGargantuar *this)

{
  ZombieZoybeanPodGargantuar::ZombieZoybeanPodGargantuar((ZombieZoybeanPodGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06637db0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodChildGargantuar_06638808;
  return;
}


/* ZombieZoybeanPodChildGargantuar::StaticNew() */

ZombieZoybeanPodChildGargantuar * ZombieZoybeanPodChildGargantuar::StaticNew(void)

{
  ZombieZoybeanPodChildGargantuar *this;
  
  this = ::operator_new(0x830);
  ZombieZoybeanPodChildGargantuar(this);
  return this;
}


/* ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar() */

void __thiscall
ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar
          (ZombieZoybeanPodChildGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06637db0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodChildGargantuar_06638808;
  ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar((ZombieZoybeanPodGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar() */

void __thiscall
ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar
          (ZombieZoybeanPodChildGargantuar *this)

{
  ~ZombieZoybeanPodChildGargantuar(this + -0x10);
  return;
}


/* ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar() */

void __thiscall
ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar
          (ZombieZoybeanPodChildGargantuar *this)

{
  ~ZombieZoybeanPodChildGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar() */

void __thiscall
ZombieZoybeanPodChildGargantuar::~ZombieZoybeanPodChildGargantuar
          (ZombieZoybeanPodChildGargantuar *this)

{
  ~ZombieZoybeanPodChildGargantuar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodChildGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZoybeanPodChildGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  RtObject *this;
  Plant *pPVar2;
  ZombieZoybeanPodGargantuarProps *pZVar3;
  Zombie *pZVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"smash_left");
  if (((bVar1) || (bVar1 = std::operator==(param_4,"smash_righ"), bVar1)) &&
     (this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1), this != (RtObject *)0x0))
  {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this);
    if (pPVar2 == (Plant *)0x0) {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_68 = param_1;
      pZVar3 = Zombie::GetProps<ZombieZoybeanPodGargantuarProps>((Zombie *)param_1);
      fVar5 = *(float *)(pZVar3 + 0x24c);
      local_60 = (float)Zombie::GetExtraDPSmodifier((Zombie *)param_1);
      local_60 = local_60 * fVar5;
      local_58 = operator|(0x4000000000,0x200000);
      (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)&local_68);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this);
      if (pZVar4 != (Zombie *)0x0) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(pZVar3 + 0x268),0,pZVar4,2,1);
      }
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_70);
      Plant::TakeSmashAttack(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

