// Class: WaveDuplicatorModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDuplicatorModule::StaticClassInit() */

void WaveDuplicatorModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveDuplicatorModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036eb7ac,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveDuplicatorModule::StaticGetClass() */

long * WaveDuplicatorModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WaveDuplicatorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveDuplicatorModule::~WaveDuplicatorModule() */

void __thiscall WaveDuplicatorModule::~WaveDuplicatorModule(WaveDuplicatorModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066863d0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WaveDuplicatorModule::~WaveDuplicatorModule() */

void __thiscall WaveDuplicatorModule::~WaveDuplicatorModule(WaveDuplicatorModule *this)

{
  ~WaveDuplicatorModule(this);
  AK::FreeHook(this);
  return;
}


/* WaveDuplicatorModule::WaveDuplicatorModule() */

void __thiscall WaveDuplicatorModule::WaveDuplicatorModule(WaveDuplicatorModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066863d0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,createExtraZombieWaves);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<WaveManagerProperties*,Sexy::CBMemberTranslatorX<WaveDuplicatorModule,void(WaveDuplicatorModule::*)(WaveManagerProperties*)>>
            ((MessageRouter *)puVar1,Message::PreWaveInitialization,&local_40);
  return;
}


/* WaveDuplicatorModule::StaticNew() */

WaveDuplicatorModule * WaveDuplicatorModule::StaticNew(void)

{
  WaveDuplicatorModule *this;
  
  this = ::operator_new(0x18);
  WaveDuplicatorModule(this);
  return this;
}


/* WaveDuplicatorModule::createExtraZombieWaves(WaveManagerProperties*) */

void __thiscall
WaveDuplicatorModule::createExtraZombieWaves
          (WaveDuplicatorModule *this,WaveManagerProperties *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  vector *pvVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar3 = FUN_036eb2d8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  iVar7 = *(int *)(pRVar4 + 0x40);
  if (iVar7 < 1) {
    iVar6 = *(int *)(pRVar4 + 0x44);
  }
  else {
    iVar6 = *(int *)(pRVar4 + 0x44);
    iVar9 = 0;
    do {
      uVar2 = iVar6 - 1;
      if (-1 < (int)uVar2) {
        lVar8 = (long)(iVar3 + -1) - (long)(int)uVar2;
        do {
          lVar1 = lVar8 + 1;
          pvVar5 = (vector *)FUN_036eb2ec(*(undefined8 *)(param_1 + 0x10),lVar8);
          std::
          vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
          ::push_back((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                       *)(param_1 + 0x10),pvVar5);
          lVar8 = lVar1;
        } while (lVar1 != (((long)(iVar3 + -1) + 1) - (long)(int)uVar2) + (ulong)uVar2);
        iVar6 = *(int *)(pRVar4 + 0x44);
        iVar7 = *(int *)(pRVar4 + 0x40);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar7 * iVar6;
  return;
}

