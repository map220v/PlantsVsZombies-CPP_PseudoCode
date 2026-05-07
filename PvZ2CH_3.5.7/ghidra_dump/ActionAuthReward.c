// Class: ActionAuthReward


/* ActionAuthReward::~ActionAuthReward() */

void __thiscall ActionAuthReward::~ActionAuthReward(ActionAuthReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0685aec0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionAuthReward::~ActionAuthReward() */

void __thiscall ActionAuthReward::~ActionAuthReward(ActionAuthReward *this)

{
  ~ActionAuthReward(this);
  AK::FreeHook(this);
  return;
}


/* ActionAuthReward::Start() */

void __thiscall ActionAuthReward::Start(ActionAuthReward *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x1c8))();
  this[9] = (ActionAuthReward)0x1;
  return;
}


/* ActionAuthReward::StaticGetClass() */

long * ActionAuthReward::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionAuthReward",uVar2,StaticNew);
  return sClass;
}


/* ActionAuthReward::GetClass() const */

long * ActionAuthReward::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionAuthReward",uVar2,StaticNew);
  return sClass;
}


/* ActionAuthReward::ActionAuthReward() */

void __thiscall ActionAuthReward::ActionAuthReward(ActionAuthReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685aec0;
  return;
}


/* ActionAuthReward::StaticNew() */

ActionAuthReward * ActionAuthReward::StaticNew(void)

{
  ActionAuthReward *this;
  
  this = ::operator_new(0x18);
  ActionAuthReward(this);
  return this;
}


/* ActionAuthReward::CreateIfNeed(bool&) */

ActionAuthReward * ActionAuthReward::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  BigInt *this_01;
  ActionAuthReward *this_02;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::GetVerifyRewarded(this_00), cVar1 == '\0')) {
      this_01 = (BigInt *)Sexy::LazySingleton<AuthMgr>::GetInstance();
      cVar1 = BigInt::IsNegative(this_01);
      if (cVar1 != '\0') {
        this_02 = ::operator_new(0x18);
        *(undefined8 *)this_02 = 0;
        this_02[8] = (ActionAuthReward)0x0;
        this_02[9] = (ActionAuthReward)0x0;
        this_02[10] = (ActionAuthReward)0x0;
        *(undefined4 *)(this_02 + 0xc) = 0;
        *(undefined4 *)(this_02 + 0x10) = 0;
        ActionAuthReward(this_02);
        return this_02;
      }
    }
  }
  return (ActionAuthReward *)0x0;
}

