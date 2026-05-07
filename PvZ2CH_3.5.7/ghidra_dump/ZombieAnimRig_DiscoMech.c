// Class: ZombieAnimRig_DiscoMech


/* ZombieAnimRig_DiscoMech::onDanceEndEnd(std::string const&) */

void ZombieAnimRig_DiscoMech::onDanceEndEnd(string *param_1)

{
  param_1[0x240] = (string)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::SetDamageState(int) */

void __thiscall ZombieAnimRig_DiscoMech::SetDamageState(ZombieAnimRig_DiscoMech *this,int param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  bVar1 = param_1 == 1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"damage1_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage1_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage1_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 2;
  std::string::string(asStack_10,"damage2_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage2_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage2_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 3;
  std::string::string(asStack_10,"damage3_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage3_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage3_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 4;
  std::string::string(asStack_10,"damage4_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_discoball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_shoe");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 5;
  std::string::string(asStack_10,"damage5_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_discoball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_shoe");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 6;
  std::string::string(asStack_10,"damage6_disco_head");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_eyeglasses");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_sidebum");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_discoball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_shoe");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::StaticClassInit() */

void ZombieAnimRig_DiscoMech::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DiscoMech");
    (*pcVar2)(plVar1,asStack_10,FUN_045fd024,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DiscoMech::StaticGetClass() */

long * ZombieAnimRig_DiscoMech::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DiscoMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DiscoMech::GetClass() const */

long * ZombieAnimRig_DiscoMech::GetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_DiscoMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech() */

void __thiscall ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech(ZombieAnimRig_DiscoMech *this)

{
  *(undefined ***)this = &PTR_GetClass_0686ef40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DiscoMech_0686f1c0;
  ZombieAnimRig_Mech::~ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech() */

void __thiscall ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech(ZombieAnimRig_DiscoMech *this)

{
  ~ZombieAnimRig_DiscoMech(this + -0x10);
  return;
}


/* ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech() */

void __thiscall ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech(ZombieAnimRig_DiscoMech *this)

{
  ~ZombieAnimRig_DiscoMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech() */

void __thiscall ZombieAnimRig_DiscoMech::~ZombieAnimRig_DiscoMech(ZombieAnimRig_DiscoMech *this)

{
  ~ZombieAnimRig_DiscoMech(this + -0x10);
  return;
}


/* ZombieAnimRig_DiscoMech::ZombieAnimRig_DiscoMech() */

void __thiscall ZombieAnimRig_DiscoMech::ZombieAnimRig_DiscoMech(ZombieAnimRig_DiscoMech *this)

{
  ZombieAnimRig_Mech::ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  this[0x240] = (ZombieAnimRig_DiscoMech)0x0;
  *(undefined ***)this = &PTR_GetClass_0686ef40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DiscoMech_0686f1c0;
  return;
}


/* ZombieAnimRig_DiscoMech::StaticNew() */

ZombieAnimRig_DiscoMech * ZombieAnimRig_DiscoMech::StaticNew(void)

{
  ZombieAnimRig_DiscoMech *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_DiscoMech(this);
  return this;
}


/* ZombieAnimRig_DiscoMech::DanceHasEnded() */

byte __thiscall ZombieAnimRig_DiscoMech::DanceHasEnded(ZombieAnimRig_DiscoMech *this)

{
  return (byte)this[0x240] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::StartDance() */

void __thiscall ZombieAnimRig_DiscoMech::StartDance(ZombieAnimRig_DiscoMech *this)

{
  code *pcVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x240] = (ZombieAnimRig_DiscoMech)0x0;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_68,"dance_start");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onDanceStartEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar1)(this,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::onDanceIdleLooped(std::string const&, std::string const&, int) */

void ZombieAnimRig_DiscoMech::onDanceIdleLooped(string *param_1,string *param_2,int param_3)

{
  code *pcVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x240] != (string)0x0) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x170);
    std::string::string(asStack_68,"dance_end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onDanceEndEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar1)(param_1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::DanceIdle() */

void __thiscall ZombieAnimRig_DiscoMech::DanceIdle(ZombieAnimRig_DiscoMech *this)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"dance_idle");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onDanceIdleLooped");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DiscoMech::onDanceStartEnd(std::string const&) */

void ZombieAnimRig_DiscoMech::onDanceStartEnd(string *param_1)

{
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"dance_idle");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onDanceIdleLooped");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

