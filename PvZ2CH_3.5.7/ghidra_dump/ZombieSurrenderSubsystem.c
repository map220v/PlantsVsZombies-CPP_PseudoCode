// Class: ZombieSurrenderSubsystem


/* ZombieSurrenderSubsystem::~ZombieSurrenderSubsystem() */

void __thiscall ZombieSurrenderSubsystem::~ZombieSurrenderSubsystem(ZombieSurrenderSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b310;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieSurrenderSubsystem::~ZombieSurrenderSubsystem() */

void __thiscall ZombieSurrenderSubsystem::~ZombieSurrenderSubsystem(ZombieSurrenderSubsystem *this)

{
  ~ZombieSurrenderSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSurrenderSubsystem::StaticClassInit() */

void ZombieSurrenderSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSurrenderSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5b648,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSurrenderSubsystem::StaticGetClass() */

long * ZombieSurrenderSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSurrenderSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSurrenderSubsystem::GetClass() const */

long * ZombieSurrenderSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSurrenderSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSurrenderSubsystem::ZombieSurrenderSubsystem() */

void __thiscall ZombieSurrenderSubsystem::ZombieSurrenderSubsystem(ZombieSurrenderSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0676b310;
  return;
}


/* ZombieSurrenderSubsystem::StaticNew() */

ZombieSurrenderSubsystem * ZombieSurrenderSubsystem::StaticNew(void)

{
  ZombieSurrenderSubsystem *this;
  
  this = ::operator_new(0x10);
  ZombieSurrenderSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSurrenderSubsystem::areOnlySurrenderingZombiesLeft() const */

void ZombieSurrenderSubsystem::areOnlySurrenderingZombiesLeft(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  WaveManager *this;
  undefined8 uVar4;
  Zombie *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this != (WaveManager *)0x0) {
    cVar1 = WaveManager::IsDone(this);
    if (cVar1 != '\0') {
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar3 = RealObject::IsOnTeam(uVar4,2);
        if (cVar3 != '\0') {
          this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          cVar3 = Zombie::CanSurrender(this_00);
          if (cVar3 == '\0') {
            uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar3 = Zombie::HasCondition(uVar4,0x27);
            if (cVar3 == '\0') {
              uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              cVar3 = Zombie::HasCondition(uVar4,0x65);
              if (cVar3 == '\0') {
                uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                cVar3 = Zombie::HasCondition(uVar4,0x81);
                if (cVar3 == '\0') {
                  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                  cVar3 = Zombie::HasCondition(uVar4,0x2c);
                  if (cVar3 == '\0') {
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
                    cVar1 = '\0';
                    goto LAB_03d5b948;
                  }
                }
              }
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03d5b948;
    }
  }
  cVar1 = '\0';
LAB_03d5b948:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSurrenderSubsystem::areOnlySurrenderingZombiesRight() const */

void ZombieSurrenderSubsystem::areOnlySurrenderingZombiesRight(void)

{
  char cVar1;
  undefined8 uVar2;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x29);
  do {
    cVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!(bool)cVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03d5ba28:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    cVar1 = Zombie::HasCondition(uVar2,0x26);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03d5ba28;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSurrenderSubsystem::killPetrifiedZombies() */

void ZombieSurrenderSubsystem::killPetrifiedZombies(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  Zombie *this;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = RealObject::IsOnTeam(uVar3,2);
    if (cVar2 != '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::HasCondition(uVar3,0x26);
      if (cVar2 != '\0') {
        this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        Zombie::TakeFatalDamage(this,(BoardEntity *)0x0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSurrenderSubsystem::killRemainingZombies() */

void ZombieSurrenderSubsystem::killRemainingZombies(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  long lVar5;
  long *extraout_x0;
  long *extraout_x0_00;
  RtObject *this;
  ZombieChickenFarmer *pZVar6;
  long *extraout_x0_01;
  int extraout_w1;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  Iterator aIStack_88 [32];
  RtId aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar3,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtId::~RtId(aRStack_68);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    cVar2 = RealObject::IsOnTeam(uVar3,2);
    if (cVar2 != '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
      cVar2 = Zombie::HasCondition(uVar3,0x27);
      if (cVar2 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        cVar2 = Zombie::HasCondition(uVar3,0x25);
        if (cVar2 != '\0') goto LAB_03d5bc30;
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        cVar2 = Zombie::HasCondition(uVar3,0x2c);
        if (cVar2 != '\0') goto LAB_03d5bc30;
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        cVar2 = Zombie::HasCondition(uVar3,0x65);
        if (cVar2 != '\0') goto LAB_03d5bc30;
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        cVar2 = Zombie::HasCondition(uVar3,0x81);
        if (cVar2 != '\0') goto LAB_03d5bc30;
      }
      else {
LAB_03d5bc30:
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        std::string::string((string *)aRStack_68,"icecubed");
        lVar5 = Zombie::GetAttachedBoardEntity(pZVar4,aRStack_68);
        std::string::~string((string *)aRStack_68);
        nop();
        if (lVar5 != 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10));
          nop();
          pcVar7 = *(code **)(*extraout_x0 + 0x120);
          DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
          (*pcVar7)(extraout_x0,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        std::string::string((string *)aRStack_68,"squidify");
        lVar5 = Zombie::GetAttachedBoardEntity(pZVar4,aRStack_68);
        std::string::~string((string *)aRStack_68);
        nop();
        if (lVar5 != 0) {
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar5 + 0x10));
          if (bVar1) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10));
            nop();
            pcVar7 = *(code **)(*extraout_x0_01 + 0x120);
            DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
            (*pcVar7)(extraout_x0_01,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        std::string::string((string *)aRStack_68,"present_boxed");
        lVar5 = Zombie::GetAttachedBoardEntity(pZVar4,aRStack_68);
        std::string::~string((string *)aRStack_68);
        nop();
        if (lVar5 != 0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10));
          nop();
          pcVar7 = *(code **)(*extraout_x0_00 + 0x120);
          DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
          (*pcVar7)(extraout_x0_00,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        pZVar6 = Sexy::RtObject::Cast<ZombieChickenFarmer>(this);
        if (pZVar6 != (ZombieChickenFarmer *)0x0) {
          (**(code **)(*(long *)pZVar6 + 0xa08))(pZVar6,1);
        }
      }
      pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
      Zombie::TakeFatalDamage(pZVar4,(BoardEntity *)0x0);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  } while( true );
}


/* ZombieSurrenderSubsystem::Update() */

void ZombieSurrenderSubsystem::Update(void)

{
  char cVar1;
  
  cVar1 = areOnlySurrenderingZombiesLeft();
  if (cVar1 != '\0') {
    killRemainingZombies();
    return;
  }
  cVar1 = areOnlySurrenderingZombiesRight();
  if (cVar1 == '\0') {
    return;
  }
  killPetrifiedZombies();
  return;
}

