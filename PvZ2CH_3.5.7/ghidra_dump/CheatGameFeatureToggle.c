// Class: CheatGameFeatureToggle


/* CheatGameFeatureToggle::~CheatGameFeatureToggle() */

void __thiscall CheatGameFeatureToggle::~CheatGameFeatureToggle(CheatGameFeatureToggle *this)

{
  *(undefined ***)this = &PTR_GetClass_06846fa0;
  CheatToggle::~CheatToggle((CheatToggle *)this);
  return;
}


/* CheatGameFeatureToggle::~CheatGameFeatureToggle() */

void __thiscall CheatGameFeatureToggle::~CheatGameFeatureToggle(CheatGameFeatureToggle *this)

{
  ~CheatGameFeatureToggle(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameFeatureToggle::CheatGameFeatureToggle() */

void __thiscall CheatGameFeatureToggle::CheatGameFeatureToggle(CheatGameFeatureToggle *this)

{
  CheatToggle::CheatToggle((CheatToggle *)this);
  *(undefined ***)this = &PTR_GetClass_06846fa0;
  return;
}


/* CheatGameFeatureToggle::StaticNew() */

CheatGameFeatureToggle * CheatGameFeatureToggle::StaticNew(void)

{
  CheatGameFeatureToggle *this;
  
  this = ::operator_new(0x20);
  CheatGameFeatureToggle(this);
  return this;
}


/* CheatGameFeatureToggle::StaticGetClass() */

long * CheatGameFeatureToggle::StaticGetClass(void)

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
  uVar2 = CheatToggle::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameFeatureToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatGameFeatureToggle::GetClass() const */

long * CheatGameFeatureToggle::GetClass(void)

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
  uVar2 = CheatToggle::StaticGetClass();
  (*pcVar3)(plVar1,"CheatGameFeatureToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatGameFeatureToggle::GetValue() const */

void __thiscall CheatGameFeatureToggle::GetValue(CheatGameFeatureToggle *this)

{
  ProfileMgr *pPVar1;
  char cVar2;
  PlayerInfo *pPVar3;
  
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar2 = ProfileMgr::HasValidProfile(pPVar1);
  if (cVar2 == '\0') {
    return;
  }
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3._0_4_ = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  PlayerInfo::GameFeatureIsUnlocked(pPVar3._0_4_,*(undefined4 *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameFeatureToggle::SetValue(bool) */

void __thiscall CheatGameFeatureToggle::SetValue(CheatGameFeatureToggle *this,bool param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  undefined8 uVar4;
  char *pcVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    PlayerInfo::SetGameFeatureUnlockState(pPVar3,*(undefined4 *)(this + 0x18),param_1);
    fVar6 = (float)PVZ_T();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)this);
    uVar4 = FUN_0547429c();
    cVar1 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar1 == '\0') {
      pcVar5 = "false";
    }
    else {
      pcVar5 = "true";
    }
    Sexy::StrFormat("PVZ_T: %f - [CHEAT] Cheat %s toggled with Value: %s",asStack_10,(double)fVar6,
                    uVar4,pcVar5);
    nop();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

