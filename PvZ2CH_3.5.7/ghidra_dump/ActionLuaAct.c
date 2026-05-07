// Class: ActionLuaAct


/* ActionLuaAct::~ActionLuaAct() */

void __thiscall ActionLuaAct::~ActionLuaAct(ActionLuaAct *this)

{
  *(undefined ***)this = &PTR_GetClass_06859340;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionLuaAct::~ActionLuaAct() */

void __thiscall ActionLuaAct::~ActionLuaAct(ActionLuaAct *this)

{
  ~ActionLuaAct(this);
  AK::FreeHook(this);
  return;
}


/* ActionLuaAct::StaticGetClass() */

long * ActionLuaAct::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionLuaAct",uVar2,StaticNew);
  return sClass;
}


/* ActionLuaAct::GetClass() const */

long * ActionLuaAct::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionLuaAct",uVar2,StaticNew);
  return sClass;
}


/* ActionLuaAct::ActionLuaAct() */

void __thiscall ActionLuaAct::ActionLuaAct(ActionLuaAct *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06859340;
  return;
}


/* ActionLuaAct::StaticNew() */

ActionLuaAct * ActionLuaAct::StaticNew(void)

{
  ActionLuaAct *this;
  
  this = ::operator_new(0x18);
  ActionLuaAct(this);
  return this;
}


/* ActionLuaAct::ActionLuaAct(int) */

void __thiscall ActionLuaAct::ActionLuaAct(ActionLuaAct *this,int param_1)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(int *)(this + 0x14) = param_1;
  *(undefined ***)this = &PTR_GetClass_06859340;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLuaAct::Start() */

void __thiscall ActionLuaAct::Start(ActionLuaAct *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"OnWorldMapActionLuaActStart");
  Cpp2Lua<int>(asStack_10,*(int *)(this + 0x14));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLuaAct::CreateIfNeed(bool&, int) */

void ActionLuaAct::CreateIfNeed(bool *param_1,int param_2)

{
  char cVar1;
  wchar16 *pwVar2;
  ActionLuaAct *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    if (param_2 == 1) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if (this_01 != (PlayerInfo *)0x0) {
        std::string::string(asStack_10,"MonthlyCard");
        cVar1 = PlayerInfo::IsFirstPopToday(this_01,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (cVar1 == '\0') goto LAB_04563fec;
      }
    }
    std::string::string(asStack_10,"OnWorldMapActionLuaActCreate");
    Cpp2Lua<bool>(asStack_10,*param_1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"WorldMapAction/hasTutorial");
    FetchLuaSharedData<bool>(asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
    this = ::operator_new(0x18);
    ActionLuaAct(this,param_2);
  }
  else {
LAB_04563fec:
    this = (ActionLuaAct *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLuaAct::Update() */

void __thiscall ActionLuaAct::Update(ActionLuaAct *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"OnWorldMapActionLuaActUpdate");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"WorldMapAction/block");
  bVar1 = GetLuaSharedData<bool>(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  this[9] = (ActionLuaAct)!bVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

