// Class: ActivityCollectionLimitGroupBuy


/* ActivityCollectionLimitGroupBuy::ActivityCollectionLimitGroupBuy() */

void __thiscall
ActivityCollectionLimitGroupBuy::ActivityCollectionLimitGroupBuy
          (ActivityCollectionLimitGroupBuy *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06628bb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06628f18;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628f60;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLimitGroupBuy_06628f80;
  return;
}


/* ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy() */

void __thiscall
ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy
          (ActivityCollectionLimitGroupBuy *this)

{
  *(undefined ***)this = &PTR_GetClass_06628bb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06628f18;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06628f60;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLimitGroupBuy_06628f80;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy() */

void __thiscall
ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy
          (ActivityCollectionLimitGroupBuy *this)

{
  ~ActivityCollectionLimitGroupBuy(this + -0xe8);
  return;
}


/* ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy() */

void __thiscall
ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy
          (ActivityCollectionLimitGroupBuy *this)

{
  ~ActivityCollectionLimitGroupBuy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy() */

void __thiscall
ActivityCollectionLimitGroupBuy::~ActivityCollectionLimitGroupBuy
          (ActivityCollectionLimitGroupBuy *this)

{
  ~ActivityCollectionLimitGroupBuy(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLimitGroupBuy::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLimitGroupBuy::InitContainer
          (ActivityCollectionLimitGroupBuy *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_128 [8];
  Point aPStack_120 [8];
  wstring awStack_118 [8];
  function<bool(Sexy::Touch_const&)> afStack_110 [32];
  Point aPStack_f0 [100];
  uint local_8c;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x29e8);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LimitGroupBuyInfo::LimitGroupBuyInfo((LimitGroupBuyInfo *)aPStack_f0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_f0);
    if (cVar1 != '\0') {
      Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_GROUPBUY_%d",(string *)awStack_118,
                      (ulong)local_8c);
      UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,(string *)awStack_118);
      std::string::~string((string *)awStack_118);
    }
    LimitGroupBuyInfo::~LimitGroupBuyInfo((LimitGroupBuyInfo *)aPStack_f0);
  }
  iVar3 = FUN_0342d430(0x19);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x1b8);
  Sexy::Point::Point(aPStack_f0,iVar2 / 2 - iVar3,iVar4);
  ActivityCollectionContainerBase::InitTimer((ActivityCollectionContainerBase *)this,aPStack_f0);
  iVar3 = FUN_0342d430(0xbe);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x1a4);
  iVar5 = FUN_0342d430(0x8c);
  iVar6 = FUN_0342d430(0x2d);
  Sexy::Insets::Insets((Insets *)aPStack_f0,iVar3 + iVar2 / 2,iVar4,iVar5,iVar6);
  FUN_0342cc58(afStack_110);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aPStack_f0,(function *)afStack_110,
             true);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_110);
  iVar3 = FUN_0342d430(0x96);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x2d);
  Sexy::Point::Point(aPStack_120,iVar2 - iVar3,iVar4);
  TodStringTranslate(L"[ACTIVITY_GROUP_BUY_TITLE]");
  TodStringTranslate(L"[ACTIVITY_GROUP_BUY_DESCRIPTION]");
  std::vector<std::wstring,std::allocator<std::wstring>>::vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_f0,afStack_110,1,
             auStack_128);
  ActivityCollectionContainerBase::InitInfoButton
            ((ActivityCollectionContainerBase *)this,aPStack_120,awStack_118,(vector *)aPStack_f0);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_f0);
  FUN_05476c50(afStack_110);
  FUN_05476c50(awStack_118);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ActivityCollectionLimitGroupBuy::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionLimitGroupBuy::InitContainer
          (ActivityCollectionLimitGroupBuy *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}

