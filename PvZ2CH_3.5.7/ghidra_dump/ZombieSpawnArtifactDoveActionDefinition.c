// Class: ZombieSpawnArtifactDoveActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionDefinition::StaticClassInit() */

void ZombieSpawnArtifactDoveActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnArtifactDoveActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f2f048,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnArtifactDoveActionDefinition::StaticGetClass() */

long * ZombieSpawnArtifactDoveActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieSpawnActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnArtifactDoveActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnArtifactDoveActionDefinition::GetClass() const */

long * ZombieSpawnArtifactDoveActionDefinition::GetClass(void)

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
  uVar2 = ZombieSpawnActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnArtifactDoveActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnArtifactDoveActionDefinition::ZombieSpawnArtifactDoveActionDefinition() */

void __thiscall
ZombieSpawnArtifactDoveActionDefinition::ZombieSpawnArtifactDoveActionDefinition
          (ZombieSpawnArtifactDoveActionDefinition *this)

{
  ZombieSpawnActionDefinition::ZombieSpawnActionDefinition((ZombieSpawnActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a16650;
  return;
}


/* ZombieSpawnArtifactDoveActionDefinition::StaticNew() */

ZombieSpawnArtifactDoveActionDefinition * ZombieSpawnArtifactDoveActionDefinition::StaticNew(void)

{
  ZombieSpawnArtifactDoveActionDefinition *this;
  
  this = ::operator_new(0xc0);
  ZombieSpawnArtifactDoveActionDefinition(this);
  return this;
}


/* ZombieSpawnArtifactDoveActionDefinition::~ZombieSpawnArtifactDoveActionDefinition() */

void __thiscall
ZombieSpawnArtifactDoveActionDefinition::~ZombieSpawnArtifactDoveActionDefinition
          (ZombieSpawnArtifactDoveActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a16650;
  ZombieSpawnActionDefinition::~ZombieSpawnActionDefinition((ZombieSpawnActionDefinition *)this);
  return;
}


/* ZombieSpawnArtifactDoveActionDefinition::~ZombieSpawnArtifactDoveActionDefinition() */

void __thiscall
ZombieSpawnArtifactDoveActionDefinition::~ZombieSpawnArtifactDoveActionDefinition
          (ZombieSpawnArtifactDoveActionDefinition *this)

{
  ~ZombieSpawnArtifactDoveActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionDefinition::IsValidTargetZombie(Sexy::RtWeakPtr<Zombie>, bool) const
    */

void __thiscall
ZombieSpawnArtifactDoveActionDefinition::IsValidTargetZombie
          (ZombieSpawnArtifactDoveActionDefinition *this,RtWeakPtrBase *param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Zombie *pZVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  bVar2 = ZombieSpawnActionDefinition::IsValidTargetZombie(this,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (param_3 == '\0') {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar3 = Zombie::GetSizeType(pZVar4);
    bVar1 = iVar3 == 0;
  }
  else {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar3 = Zombie::GetSizeType(pZVar4);
    bVar1 = true;
    if (iVar3 != 0) {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar3 = Zombie::GetSizeType(pZVar4);
      bVar1 = iVar3 == 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1 & bVar2);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f38b1c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieSpawnArtifactDoveActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieSpawnArtifactDoveActionDefinition::TryStartAction
          (ZombieSpawnArtifactDoveActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieSpawnArtifactDoveActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

