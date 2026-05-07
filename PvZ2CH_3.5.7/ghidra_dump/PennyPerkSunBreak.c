// Class: PennyPerkSunBreak


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBreak::StaticClassInit() */

void PennyPerkSunBreak::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkSunBreak");
    (*pcVar2)(plVar1,asStack_10,FUN_036bfb08,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkSunBreak::StaticGetClass() */

long * PennyPerkSunBreak::StaticGetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBreak",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBreak::GetClass() const */

long * PennyPerkSunBreak::GetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBreak",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBreak::~PennyPerkSunBreak() */

void __thiscall PennyPerkSunBreak::~PennyPerkSunBreak(PennyPerkSunBreak *this)

{
  *(undefined ***)this = &PTR_GetClass_06681400;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkSunBreak::~PennyPerkSunBreak() */

void __thiscall PennyPerkSunBreak::~PennyPerkSunBreak(PennyPerkSunBreak *this)

{
  ~PennyPerkSunBreak(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkSunBreak::PennyPerkSunBreak() */

void __thiscall PennyPerkSunBreak::PennyPerkSunBreak(PennyPerkSunBreak *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_06681400;
  return;
}


/* PennyPerkSunBreak::StaticNew() */

PennyPerkSunBreak * PennyPerkSunBreak::StaticNew(void)

{
  PennyPerkSunBreak *this;
  
  this = ::operator_new(0x30);
  PennyPerkSunBreak(this);
  return this;
}


/* PennyPerkSunBreak::onWaveStarted(int, WaveType::WaveType, bool) */

void __thiscall
PennyPerkSunBreak::onWaveStarted
          (PennyPerkSunBreak *this,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  WaveManager *this_00;
  int iVar3;
  int iVar4;
  
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = WaveManager::GetWaveCount(this_00);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(this + 0x24) / iVar2;
  }
  cVar1 = WaveDistributor::ShouldPerformNextDistribution
                    (0x3f4ccccd,param_4,*(undefined4 *)(this + 0x2c),
                     *(int *)(this + 0x24) - iVar3 * iVar2,0);
  if (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  iVar2 = *(int *)(this + 0x28);
  if (0 < iVar3 * iVar2) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 0x32;
      Board::SpawnSunFromSky(*(Board **)(gLawnApp + 0x9f0));
    } while (iVar4 < iVar3 * iVar2);
    MessageRouter::Broadcast<PennyPerk*,PennyPerkSunBreak*>
              ((MessageRouter *)gMessageRouter,Message::RiftLevelPerkActivation,this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBreak::Activate() */

void __thiscall PennyPerkSunBreak::Activate(PennyPerkSunBreak *this)

{
  int iVar1;
  undefined *puVar2;
  long extraout_x0;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  iVar1 = *(int *)(this + 0x10);
  puVar3 = (undefined4 *)FUN_036bdf94(*(undefined8 *)(extraout_x0 + 0x60),(long)iVar1);
  uVar4 = *(undefined8 *)(extraout_x0 + 0x78);
  *(undefined4 *)(this + 0x24) = *puVar3;
  puVar3 = (undefined4 *)FUN_036bdf94(uVar4,(long)iVar1);
  *(undefined4 *)(this + 0x28) = *puVar3;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStarted);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<PennyPerkSunBreak,void(PennyPerkSunBreak::*)(int,WaveType::WaveType,bool)>>
            ((MessageRouter *)puVar2,Message::WaveStarted,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

