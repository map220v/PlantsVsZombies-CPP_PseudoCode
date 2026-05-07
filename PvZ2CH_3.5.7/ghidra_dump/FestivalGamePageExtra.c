// Class: FestivalGamePageExtra


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageExtra::GetLayoutName() */

void __thiscall FestivalGamePageExtra::GetLayoutName(FestivalGamePageExtra *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePageExtra");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageExtra::showFestivalGameEntrance() */

void FestivalGamePageExtra::showFestivalGameEntrance(void)

{
  int iVar1;
  long lVar2;
  LuaFunctionCallback *this;
  char *pcVar3;
  PlayerInfo *this_00;
  TGALogMgr *pTVar4;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_100 [7];
  bool bStack_f9;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  TGABossChallengeData aTStack_d8 [8];
  string asStack_d0 [96];
  string asStack_70 [104];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = BossChallenge::GetSingletonPtr();
  if (lVar2 == 0) {
    bStack_f9 = false;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    lStack_f8 = lVar2;
    lStack_f0 = lVar2;
    this = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&lStack_f8)
    ;
    std::string::string(asStack_70,"luaBossChallengeDlg:CreateUI");
    __n = 1;
    Lua::LuaFunctionCallback::Execute(this,asStack_70,1,&bStack_f9);
    std::string::~string(asStack_70);
    nop();
    if (bStack_f9 != false) {
      __n_00 = auStack_100;
      lVar2 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&lStack_f8);
      TGABossChallengeData::TGABossChallengeData(aTStack_d8);
      DString::DString((DString *)asStack_70,1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append((string *)aTStack_d8,pcVar3,__n);
      DString::~DString((DString *)asStack_70);
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      std::string::string(asStack_70,"mat_BossRush_crystal_blue");
      iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_70);
      std::string::~string(asStack_70);
      nop();
      DString::DString((DString *)asStack_70,iVar1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append(asStack_d0,pcVar3,(size_t)__n_00);
      DString::~DString((DString *)asStack_70);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)asStack_70,aTStack_d8);
      TGALogMgr::LogBossChallenge(pTVar4,asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData(aTStack_d8);
    }
    Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&lStack_f8);
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&lStack_f8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* FestivalGamePageExtra::~FestivalGamePageExtra() */

void __thiscall FestivalGamePageExtra::~FestivalGamePageExtra(FestivalGamePageExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_0671f860;
  *(undefined **)(this + 0xd8) = &DAT_0671fbc8;
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePageExtra>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageExtra> *)this);
  return;
}


/* FestivalGamePageExtra::~FestivalGamePageExtra() */

void __thiscall FestivalGamePageExtra::~FestivalGamePageExtra(FestivalGamePageExtra *this)

{
  ~FestivalGamePageExtra(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageExtra::FestivalGamePageExtra() */

void __thiscall FestivalGamePageExtra::FestivalGamePageExtra(FestivalGamePageExtra *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePageExtra>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageExtra> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0671f860;
  *(undefined **)(this + 0xd8) = &DAT_0671fbc8;
  FUN_05478178(this + 0x140,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x158) = 0x2975;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageExtra::ButtonDepress(int) */

void __thiscall FestivalGamePageExtra::ButtonDepress(FestivalGamePageExtra *this,int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)this + 0x350))(this);
    }
    else {
      (**(code **)(*(long *)this + 0x340))(this);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageExtra::ButtonDepress(int) */

void __thiscall FestivalGamePageExtra::ButtonDepress(FestivalGamePageExtra *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

