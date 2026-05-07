// Class: ZombieRomanShield


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::getNormalZombiePAM() */

void __thiscall ZombieRomanShield::getNormalZombiePAM(ZombieRomanShield *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"roman");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::getSegmentTypeName(ZombieCamelSegmentType) */

void ZombieRomanShield::getSegmentTypeName(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 == 2) {
    __s = "roman_shield_top";
  }
  else {
    __s = "roman_segment";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::addCamelArmor(ZombieCamelSegmentType) */

void __thiscall ZombieRomanShield::addCamelArmor(ZombieRomanShield *this,undefined4 param_2)

{
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(asStack_18,"CamelSignHeadDefault");
  nop();
  switch(param_2) {
  default:
    std::string::append(asStack_18,"RomanShieldMain",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_18,"RomanShieldTop",(size_t)__n);
  }
  FUN_05475d88(asStack_10,asStack_18);
  Zombie::AddArmor((Zombie *)this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::canBecomeUncamel() */

void __thiscall ZombieRomanShield::canBecomeUncamel(ZombieRomanShield *this)

{
  char cVar1;
  byte bVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = 1;
  std::string::string(asStack_18,"RomanShieldMain");
  cVar1 = Zombie::HasArmor((Zombie *)this,asStack_18);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"RomanShieldTop");
    bVar2 = Zombie::HasArmor((Zombie *)this,asStack_10);
    bVar2 = bVar2 ^ 1;
    std::string::~string(asStack_10);
    nop();
  }
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* ZombieRomanShield::CanDropHead() const */

bool __thiscall ZombieRomanShield::CanDropHead(ZombieRomanShield *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),4);
  return !bVar1;
}


/* ZombieRomanShield::CanDropArm() const */

bool __thiscall ZombieRomanShield::CanDropArm(ZombieRomanShield *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),2);
  return !bVar1;
}


/* ZombieRomanShield::~ZombieRomanShield() */

void __thiscall ZombieRomanShield::~ZombieRomanShield(ZombieRomanShield *this)

{
  *(undefined ***)this = &PTR_GetClass_0688ab70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanShield_0688b600;
  ZombieCamel::~ZombieCamel((ZombieCamel *)this);
  return;
}


/* non-virtual thunk to ZombieRomanShield::~ZombieRomanShield() */

void __thiscall ZombieRomanShield::~ZombieRomanShield(ZombieRomanShield *this)

{
  ~ZombieRomanShield(this + -0x10);
  return;
}


/* ZombieRomanShield::~ZombieRomanShield() */

void __thiscall ZombieRomanShield::~ZombieRomanShield(ZombieRomanShield *this)

{
  ~ZombieRomanShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanShield::~ZombieRomanShield() */

void __thiscall ZombieRomanShield::~ZombieRomanShield(ZombieRomanShield *this)

{
  ~ZombieRomanShield(this + -0x10);
  return;
}


/* ZombieRomanShield::ZombieRomanShield() */

void __thiscall ZombieRomanShield::ZombieRomanShield(ZombieRomanShield *this)

{
  ZombieCamel::ZombieCamel((ZombieCamel *)this);
  this[0x80d] = (ZombieRomanShield)0x0;
  *(undefined ***)this = &PTR_GetClass_0688ab70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanShield_0688b600;
  return;
}


/* ZombieRomanShield::StaticNew() */

ZombieRomanShield * ZombieRomanShield::StaticNew(void)

{
  ZombieRomanShield *this;
  
  this = ::operator_new(0x810);
  ZombieRomanShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::StaticClassInit() */

void ZombieRomanShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanShield");
    (*pcVar2)(plVar1,asStack_10,FUN_04659820,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanShield::StaticGetClass() */

long * ZombieRomanShield::StaticGetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanShield::GetClass() const */

long * ZombieRomanShield::GetClass(void)

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
  uVar2 = ZombieCamel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::calcCollisionRect() */

void ZombieRomanShield::calcCollisionRect(void)

{
  char cVar1;
  Insets *in_x8;
  string asStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"RomanShieldTop");
  cVar1 = Zombie::HasArmor();
  std::string::~string(asStack_18);
  nop();
  if (cVar1 == '\0') {
    Zombie::calcCollisionRect();
  }
  else {
    Zombie::calcCollisionRect();
    local_c = (int)((float)local_c * 1.1);
    Sexy::Insets::Insets(in_x8,(Insets *)asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::isFriendInOurLane() */

void __thiscall ZombieRomanShield::isFriendInOurLane(ZombieRomanShield *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SharkMinion *this_00;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = ZombieCamel::getCamelManager();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieCamelSubSystem::GetNextZombie(aRStack_20,uVar5,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  bVar1 = false;
  if (cVar2 != '\0') {
    this_00 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = SharkMinion::getRow(this_00);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    bVar1 = iVar3 == iVar4;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanShield::onPlaceOnBoard() */

void __thiscall ZombieRomanShield::onPlaceOnBoard(ZombieRomanShield *this)

{
  string *psVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar4 = 1;
  local_8 = ___stack_chk_guard;
  ZombieCamel::onPlaceOnBoard((ZombieCamel *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  psVar1 = (string *)(lVar3 + 8);
  bVar2 = std::operator==(psVar1,"roman_shield_pair");
  if (!bVar2) {
    iVar4 = 2;
    bVar2 = std::operator==(psVar1,"roman_shield_triad");
    if (!bVar2) {
      bVar2 = std::operator==(psVar1,"roman_shield_top");
      if (bVar2) {
        FUN_04658f50(this + 0x374);
      }
      goto LAB_04659d5c;
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieCamel::initializeCamel((ZombieCamel *)this,1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ZombieCamel::spawnInitialSegments((ZombieCamel *)this,iVar4,false);
LAB_04659d5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanShield::shouldPlayArmorDrop(std::string) */

bool __thiscall ZombieRomanShield::shouldPlayArmorDrop(undefined8 param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator!=(param_2,"RomanShieldTop");
  return bVar1;
}


/* ZombieRomanShield::onArmorDamageTaken(DamageInfo const&, std::string) */

DamageInfo *
ZombieRomanShield::onArmorDamageTaken
          (DamageInfo *param_1,undefined8 param_2,DamageInfo *param_3,string *param_4)

{
  bool bVar1;
  bool bVar2;
  
  DamageInfo::DamageInfo(param_1,param_3);
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_3 + 0x10),0x1000000);
  bVar2 = std::operator==(param_4,"RomanShieldTop");
  if (bVar1 < bVar2) {
    operator|=(param_1 + 0x10,0x10);
  }
  return param_1;
}

