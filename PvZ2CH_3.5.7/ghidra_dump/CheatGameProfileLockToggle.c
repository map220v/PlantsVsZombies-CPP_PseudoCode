// Class: CheatGameProfileLockToggle


/* CheatGameProfileLockToggle::~CheatGameProfileLockToggle() */

void __thiscall
CheatGameProfileLockToggle::~CheatGameProfileLockToggle(CheatGameProfileLockToggle *this)

{
  *(undefined ***)this = &PTR_GetClass_06847010;
  CheatToggle::~CheatToggle((CheatToggle *)this);
  return;
}


/* CheatGameProfileLockToggle::~CheatGameProfileLockToggle() */

void __thiscall
CheatGameProfileLockToggle::~CheatGameProfileLockToggle(CheatGameProfileLockToggle *this)

{
  ~CheatGameProfileLockToggle(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameProfileLockToggle::CheatGameProfileLockToggle() */

void __thiscall
CheatGameProfileLockToggle::CheatGameProfileLockToggle(CheatGameProfileLockToggle *this)

{
  CheatToggle::CheatToggle((CheatToggle *)this);
  *(undefined ***)this = &PTR_GetClass_06847010;
  return;
}


/* CheatGameProfileLockToggle::StaticNew() */

CheatGameProfileLockToggle * CheatGameProfileLockToggle::StaticNew(void)

{
  CheatGameProfileLockToggle *this;
  
  this = ::operator_new(0x18);
  CheatGameProfileLockToggle(this);
  return this;
}


/* CheatGameProfileLockToggle::StaticGetClass() */

long * CheatGameProfileLockToggle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameProfileLockToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatGameProfileLockToggle::GetClass() const */

long * CheatGameProfileLockToggle::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameProfileLockToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatGameProfileLockToggle::GetValue() const */

void CheatGameProfileLockToggle::GetValue(void)

{
  ProfileMgr *pPVar1;
  char cVar2;
  
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar2 = ProfileMgr::HasValidProfile(pPVar1);
  if (cVar2 == '\0') {
    return;
  }
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetReadOnlyMode(pPVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameProfileLockToggle::SetValue(bool) */

void __thiscall CheatGameProfileLockToggle::SetValue(CheatGameProfileLockToggle *this,bool param_1)

{
  char cVar1;
  ProfileMgr *pPVar2;
  undefined8 uVar3;
  char *pcVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SetReadOnlyMode(pPVar2,param_1);
    fVar5 = (float)PVZ_T();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)this);
    uVar3 = FUN_0547429c();
    if (param_1) {
      pcVar4 = "true";
    }
    else {
      pcVar4 = "false";
    }
    Sexy::StrFormat("PVZ_T: %f - [CHEAT] CheatGameProfileLockToggle %s toggled with Value: %s",
                    asStack_10,(double)fVar5,uVar3,pcVar4);
    nop();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

