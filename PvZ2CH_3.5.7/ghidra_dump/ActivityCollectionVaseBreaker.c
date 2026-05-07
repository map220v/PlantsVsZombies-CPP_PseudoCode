// Class: ActivityCollectionVaseBreaker


/* ActivityCollectionVaseBreaker::ActivityCollectionVaseBreaker() */

void __thiscall
ActivityCollectionVaseBreaker::ActivityCollectionVaseBreaker(ActivityCollectionVaseBreaker *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_0662edc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662f130;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662f178;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionVaseBreaker_0662f198;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionVaseBreaker::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionVaseBreaker::InitContainer
          (ActivityCollectionVaseBreaker *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Point aPStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a8f);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa06d0);
  FUN_034297b0(this + 0xf0,uVar6);
  iVar2 = FUN_0342d430(0xb4);
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar3 = FUN_0342d430(0x73);
  Sexy::Point::Point(aPStack_38,iVar2 + iVar1 / 2,iVar3);
  ActivityCollectionContainerBase::InitTimer((ActivityCollectionContainerBase *)this,aPStack_38);
  iVar2 = FUN_0342d430(0xfa);
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar3 = FUN_0342d430(0x1c7);
  iVar4 = FUN_0342d430(0x8c);
  iVar5 = FUN_0342d430(0x32);
  Sexy::Insets::Insets((Insets *)aPStack_38,iVar2 + iVar1 / 2,iVar3,iVar4,iVar5);
  FUN_0342d164(afStack_28);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aPStack_38,(function *)afStack_28,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  (**(code **)(*(long *)this + 0x358))(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionVaseBreaker::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionVaseBreaker::InitContainer
          (ActivityCollectionVaseBreaker *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionVaseBreaker::DrawTimer(Sexy::Graphics*, int, int) */

void __thiscall
ActivityCollectionVaseBreaker::DrawTimer
          (ActivityCollectionVaseBreaker *this,Graphics *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xfc] != (ActivityCollectionVaseBreaker)0x0) {
    TodStringTranslate(L"[ACTIVITY_LEFT]");
    iVar2 = FUN_0342d430(0x5a);
    iVar3 = FUN_0342d430(0x1e);
    iVar4 = FUN_0342d430(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar2 + param_2,param_3 - iVar3,iVar4,iVar3);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa01e0);
    iVar2 = FUN_0342d430(0x5a);
    iVar3 = FUN_0342d430(0x78);
    iVar4 = FUN_0342d430(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2 + param_2,param_3,iVar3,iVar4);
    iVar2 = FUN_0342d430(0x5a);
    iVar3 = FUN_0342d430(0x78);
    iVar4 = FUN_0342d430(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar2 + param_2,param_3,iVar3,iVar4);
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar1,aCStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker() */

void __thiscall
ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker(ActivityCollectionVaseBreaker *this)

{
  *(undefined ***)this = &PTR_GetClass_0662edc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662f130;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662f178;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionVaseBreaker_0662f198;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker() */

void __thiscall
ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker(ActivityCollectionVaseBreaker *this)

{
  ~ActivityCollectionVaseBreaker(this + -0xe8);
  return;
}


/* ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker() */

void __thiscall
ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker(ActivityCollectionVaseBreaker *this)

{
  ~ActivityCollectionVaseBreaker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker() */

void __thiscall
ActivityCollectionVaseBreaker::~ActivityCollectionVaseBreaker(ActivityCollectionVaseBreaker *this)

{
  ~ActivityCollectionVaseBreaker(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionVaseBreaker::RefreshTasks() */

void __thiscall ActivityCollectionVaseBreaker::RefreshTasks(ActivityCollectionVaseBreaker *this)

{
  char cVar1;
  int iVar2;
  NetworkAchievementItem aNStack_d0 [72];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1b0) != 0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03429840(local_80);
    if ((cVar1 != '\0') && (local_70 != '\0')) {
      NetworkAchievementItem::NetworkAchievementItem(aNStack_d0);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d0);
      if (cVar1 != '\0') {
        DailyAchievement::SyncActivityData(*(DailyAchievement **)(this + 0x1b0),aNStack_d0);
      }
      NetworkAchievementItem::~NetworkAchievementItem(aNStack_d0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionVaseBreaker::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionVaseBreaker::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  DailyAchievement *this;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    return;
  }
  this = ::operator_new(0x140);
  DailyAchievement::DailyAchievement(this);
  *(DailyAchievement **)(param_1 + 0x1b0) = this;
  (**(code **)(*(long *)param_1 + 0x60))(param_1);
  RefreshTasks((ActivityCollectionVaseBreaker *)param_1);
  return;
}


/* non-virtual thunk to ActivityCollectionVaseBreaker::RefreshContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionVaseBreaker::RefreshContainer
          (ActivityCollectionVaseBreaker *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionVaseBreaker::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionVaseBreaker::Draw(ActivityCollectionVaseBreaker *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  undefined8 uVar8;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::Draw((ActivityCollectionContainerBase *)this,param_1);
  iVar1 = FUN_0342d430(0x28);
  iVar1 = iVar1 + *(int *)(gLawnApp + 0xd4) / 2;
  iVar2 = FUN_0342d430(0x4b);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0510);
  iVar3 = FUN_0342d430(1);
  iVar4 = FUN_0342d430(0xe6);
  iVar5 = FUN_0342d430(0x4b);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3 + iVar1,iVar2,iVar4,iVar5);
  iVar3 = FUN_0342d430(1);
  iVar4 = FUN_0342d430(0x4e);
  iVar5 = FUN_0342d430(0x15e);
  iVar6 = FUN_0342d430(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar6);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa01e0);
  Draw3SliceImage(param_1,aIStack_18,uVar8);
  TodStringTranslate(L"[ACTIVITY_NEW_VASEBREAKER_DESC]");
  iVar3 = FUN_0342d430(5);
  iVar4 = FUN_0342d430(0x50);
  iVar5 = FUN_0342d430(0x15e);
  iVar6 = FUN_0342d430(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar3 + iVar1,iVar4 + iVar2,iVar5,iVar6);
  uVar8 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

