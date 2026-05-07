// Class: ActivityCollectionNoviceSevenDays


/* ActivityCollectionNoviceSevenDays::ActivityCollectionNoviceSevenDays() */

void __thiscall
ActivityCollectionNoviceSevenDays::ActivityCollectionNoviceSevenDays
          (ActivityCollectionNoviceSevenDays *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06632880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06632be8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06632c30;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNoviceSevenDays_06632c50;
  return;
}


/* ActivityCollectionNoviceSevenDays::GetLockDesc() */

void __thiscall
ActivityCollectionNoviceSevenDays::GetLockDesc(ActivityCollectionNoviceSevenDays *this)

{
  TodStringTranslate(L"[NEWPLAYER_COLLECTION_ACTIVITY_NOTICE_SEVENDAYS_UNLOCK_DESC]");
  return;
}


/* ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays() */

void __thiscall
ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays
          (ActivityCollectionNoviceSevenDays *this)

{
  *(undefined ***)this = &PTR_GetClass_06632880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06632be8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06632c30;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNoviceSevenDays_06632c50;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays() */

void __thiscall
ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays
          (ActivityCollectionNoviceSevenDays *this)

{
  ~ActivityCollectionNoviceSevenDays(this + -0xe8);
  return;
}


/* ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays() */

void __thiscall
ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays
          (ActivityCollectionNoviceSevenDays *this)

{
  ~ActivityCollectionNoviceSevenDays(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays() */

void __thiscall
ActivityCollectionNoviceSevenDays::~ActivityCollectionNoviceSevenDays
          (ActivityCollectionNoviceSevenDays *this)

{
  ~ActivityCollectionNoviceSevenDays(this + -0xe8);
  return;
}


/* ActivityCollectionNoviceSevenDays::ButtonDepress(int) */

void __thiscall
ActivityCollectionNoviceSevenDays::ButtonDepress
          (ActivityCollectionNoviceSevenDays *this,int param_1)

{
  ActivityCollectionContainerBase::ButtonDepress((ActivityCollectionContainerBase *)this,param_1);
  if (param_1 != 0x457) {
    return;
  }
  UISingletonDialog<UINewPlayerSignPreview>::ShowDialog();
  return;
}


/* non-virtual thunk to ActivityCollectionNoviceSevenDays::ButtonDepress(int) */

void __thiscall
ActivityCollectionNoviceSevenDays::ButtonDepress
          (ActivityCollectionNoviceSevenDays *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNoviceSevenDays::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNoviceSevenDays::InitContainer
          (ActivityCollectionNoviceSevenDays *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  TGALogMgr *this_00;
  long lVar6;
  code *__n;
  DString aDStack_118 [16];
  TGALuckyChestData aTStack_108 [8];
  string asStack_100 [48];
  string asStack_d0 [64];
  int local_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_0344674c(this + 0xf8,0x2a4c);
  std::string::string(asStack_d0,"IMAGE_UI_NEWPLAYERCOLLECTION_BACKGROUND_NOVICESEVENDAYS");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  if (this[0x1a4] != (ActivityCollectionNoviceSevenDays)0x0) {
    lVar4 = UISingletonDialog<UINoviceSevenDaysCollection>::ShowDialog();
    iVar2 = FUN_03447a18(200);
    iVar3 = FUN_03447a18(0xc3);
    *(int *)(lVar4 + 0x48) = *(int *)(this + 0x50) / 2 - iVar3;
    iVar3 = FUN_03447a18(0xdc);
    lVar6 = *(long *)this;
    *(int *)(lVar4 + 0x4c) = iVar2 - iVar3;
    __n = *(code **)(lVar6 + 0x60);
    (*__n)(this,lVar4);
    TGALuckyChestData::TGALuckyChestData(aTStack_108);
    DString::DString((DString *)asStack_d0,2);
    pcVar5 = (char *)DString::c_str((DString *)asStack_d0);
    std::string::append((string *)aTStack_108,pcVar5,(size_t)__n);
    DString::~DString((DString *)asStack_d0);
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_d0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d0);
    if (cVar1 != '\0') {
      DString::DString(aDStack_118,local_90);
      pcVar5 = (char *)DString::c_str(aDStack_118);
      std::string::append(asStack_100,pcVar5,(size_t)__n);
      DString::~DString(aDStack_118);
    }
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogNewplayerCollectiontData(this_00,(TGANewplayerCollectionData *)aTStack_108);
    ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_d0);
    ActiveItem::~ActiveItem(aAStack_88);
    TGALuckyChestData::~TGALuckyChestData(aTStack_108);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionNoviceSevenDays::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionNoviceSevenDays::InitContainer
          (ActivityCollectionNoviceSevenDays *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}

