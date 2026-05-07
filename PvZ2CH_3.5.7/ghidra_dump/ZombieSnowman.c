// Class: ZombieSnowman


/* ZombieSnowman::~ZombieSnowman() */

void __thiscall ZombieSnowman::~ZombieSnowman(ZombieSnowman *this)

{
  *(undefined ***)this = &PTR_GetClass_06a168f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSnowman_06a17308;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSnowman::~ZombieSnowman() */

void __thiscall ZombieSnowman::~ZombieSnowman(ZombieSnowman *this)

{
  ~ZombieSnowman(this + -0x10);
  return;
}


/* ZombieSnowman::~ZombieSnowman() */

void __thiscall ZombieSnowman::~ZombieSnowman(ZombieSnowman *this)

{
  ~ZombieSnowman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSnowman::~ZombieSnowman() */

void __thiscall ZombieSnowman::~ZombieSnowman(ZombieSnowman *this)

{
  ~ZombieSnowman(this + -0x10);
  return;
}


/* ZombieSnowman::ZombieSnowman() */

void __thiscall ZombieSnowman::ZombieSnowman(ZombieSnowman *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined ***)this = &PTR_GetClass_06a168f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSnowman_06a17308;
  return;
}


/* ZombieSnowman::StaticNew() */

ZombieSnowman * ZombieSnowman::StaticNew(void)

{
  ZombieSnowman *this;
  
  this = ::operator_new(0x808);
  ZombieSnowman(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSnowman::StaticClassInit() */

void ZombieSnowman::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSnowman");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3afe0,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSnowman::StaticGetClass() */

long * ZombieSnowman::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSnowman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSnowman::GetClass() const */

long * ZombieSnowman::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSnowman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSnowman::getSnowmanType() */

void __thiscall ZombieSnowman::getSnowmanType(ZombieSnowman *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  string *in_x8;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetOriginalZombie();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Zombie::GetClassType();
    bVar1 = std::operator==(asStack_10,"ZombieImp");
    std::string::~string(asStack_10);
    if (bVar1) {
      std::string::string(in_x8,"snowman_tiny");
      nop();
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      iVar3 = FUN_04f3ae40(*(undefined4 *)(lVar4 + 0xb0));
      if (iVar3 == 0) {
        std::string::string(in_x8,"snowman_normal");
        nop();
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        FUN_04f3ae40(*(undefined4 *)(lVar4 + 0xb0));
        cVar2 = Zombie::IsHelmTypeMetallic();
        if (cVar2 == '\0') {
          std::string::string(in_x8,"snowman_plastic");
          nop();
        }
        else {
          std::string::string(in_x8,"snowman_iron");
          nop();
        }
      }
    }
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSnowman::onUpdate() */

void __thiscall ZombieSnowman::onUpdate(ZombieSnowman *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  if (*(int *)(this + 0x800) == 0) {
    *(undefined4 *)(this + 0x800) = 1;
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAttackAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_Snowman::PlayBecomeSnowman((ZombieAnimRig_Snowman *)pZVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

