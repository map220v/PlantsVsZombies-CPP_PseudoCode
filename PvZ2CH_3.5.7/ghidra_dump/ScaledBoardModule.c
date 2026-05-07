// Class: ScaledBoardModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScaledBoardModule::StaticClassInit() */

void ScaledBoardModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScaledBoardModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03517170,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScaledBoardModule::StaticGetClass() */

long * ScaledBoardModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ScaledBoardModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ScaledBoardModule::ScaledBoardModule() */

void __thiscall ScaledBoardModule::ScaledBoardModule(ScaledBoardModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0664db90;
  return;
}


/* ScaledBoardModule::StaticNew() */

ScaledBoardModule * ScaledBoardModule::StaticNew(void)

{
  ScaledBoardModule *this;
  
  this = ::operator_new(0x18);
  ScaledBoardModule(this);
  return this;
}


/* ScaledBoardModule::~ScaledBoardModule() */

void __thiscall ScaledBoardModule::~ScaledBoardModule(ScaledBoardModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0664db90;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ScaledBoardModule::~ScaledBoardModule() */

void __thiscall ScaledBoardModule::~ScaledBoardModule(ScaledBoardModule *this)

{
  ~ScaledBoardModule(this);
  AK::FreeHook(this);
  return;
}


/* ScaledBoardModule::OnCreatePlant(Plant*) */

void __thiscall ScaledBoardModule::OnCreatePlant(ScaledBoardModule *this,Plant *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  if (param_1 != (Plant *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pRVar1 + 0x40);
  }
  return;
}


/* ScaledBoardModule::OnZombiePlaceOnBoard(Zombie*) */

void __thiscall ScaledBoardModule::OnZombiePlaceOnBoard(ScaledBoardModule *this,Zombie *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  if (param_1 != (Zombie *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    Zombie::SetZombieScale(param_1,*(float *)(pRVar1 + 0x40));
    return;
  }
  return;
}


/* ScaledBoardModule::OnNotifyGridItemPlaceOnBoard(GridItemAnimation*) */

void __thiscall
ScaledBoardModule::OnNotifyGridItemPlaceOnBoard(ScaledBoardModule *this,GridItemAnimation *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  if (param_1 != (GridItemAnimation *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar2 = (float)GridItemAnimation::GetScale(param_1);
    GridItemProtectorShield::SetShieldHP
              ((GridItemProtectorShield *)param_1,fVar2 * *(float *)(pRVar1 + 0x40));
    return;
  }
  return;
}


/* ScaledBoardModule::OnNotifyProjectileCreated(Projectile*) */

void __thiscall
ScaledBoardModule::OnNotifyProjectileCreated(ScaledBoardModule *this,Projectile *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  if (param_1 != (Projectile *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar2 = (float)FUN_03516df8(*(undefined4 *)(param_1 + 0xc0));
    FUN_03516df0(fVar2 * *(float *)(pRVar1 + 0x40),param_1 + 0xc0);
    return;
  }
  return;
}


/* ScaledBoardModule::OnNotifyPopAnimCreated(Effect_PopAnim*) */

void __thiscall
ScaledBoardModule::OnNotifyPopAnimCreated(ScaledBoardModule *this,Effect_PopAnim *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 != (Effect_PopAnim *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar2 = (float)FUN_03516de8(*(undefined4 *)(param_1 + 0xd0));
    fVar4 = *(float *)(pRVar1 + 0x40);
    fVar3 = (float)FUN_03516dec(*(undefined4 *)(param_1 + 0xd4));
    (**(code **)(*(long *)param_1 + 0xb8))(fVar2 * fVar4,fVar3 * fVar4,param_1);
  }
  return;
}


/* ScaledBoardModule::registerForEvents() */

void __thiscall ScaledBoardModule::registerForEvents(ScaledBoardModule *this)

{
  undefined *puVar1;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_90 = local_68;
  local_a0 = local_78;
  uStack_98 = uStack_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ScaledBoardModule,void(ScaledBoardModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombiePlaceOnBoard);
  local_c0 = local_60;
  uStack_b8 = uStack_58;
  local_b0 = local_50;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ScaledBoardModule,void(ScaledBoardModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyProjectileCreated);
  local_d0 = local_38;
  local_e0 = local_48;
  uStack_d8 = uStack_40;
  MessageRouter::
  Subscribe<Projectile*,Sexy::CBMemberTranslatorX<ScaledBoardModule,void(ScaledBoardModule::*)(Projectile*)>>
            ((MessageRouter *)puVar1,Message::NotifyProjectileCreated,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyGridItemPlaceOnBoard);
  local_100 = local_30;
  uStack_f8 = uStack_28;
  local_f0 = local_20;
  MessageRouter::
  Subscribe<GridItemAnimation*,Sexy::CBMemberTranslatorX<ScaledBoardModule,void(ScaledBoardModule::*)(GridItemAnimation*)>>
            ((MessageRouter *)puVar1,Message::NotifyGridItemPlaceOnBoard,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyPopAnimCreated);
  local_110 = local_8;
  local_120 = local_18;
  uStack_118 = uStack_10;
  MessageRouter::
  Subscribe<Effect_PopAnim*,Sexy::CBMemberTranslatorX<ScaledBoardModule,void(ScaledBoardModule::*)(Effect_PopAnim*)>>
            ((MessageRouter *)puVar1,Message::NotifyPopAnimCreated,&local_120);
  return;
}

