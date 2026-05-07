// Class: ActivityCollectionWishingPool


/* ActivityCollectionWishingPool::ActivityCollectionWishingPool() */

void __thiscall
ActivityCollectionWishingPool::ActivityCollectionWishingPool(ActivityCollectionWishingPool *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_0662a890;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662abf8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662ac40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionWishingPool_0662ac60;
  return;
}


/* ActivityCollectionWishingPool::~ActivityCollectionWishingPool() */

void __thiscall
ActivityCollectionWishingPool::~ActivityCollectionWishingPool(ActivityCollectionWishingPool *this)

{
  *(undefined ***)this = &PTR_GetClass_0662a890;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662abf8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662ac40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionWishingPool_0662ac60;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionWishingPool::~ActivityCollectionWishingPool() */

void __thiscall
ActivityCollectionWishingPool::~ActivityCollectionWishingPool(ActivityCollectionWishingPool *this)

{
  ~ActivityCollectionWishingPool(this + -0xe8);
  return;
}


/* ActivityCollectionWishingPool::~ActivityCollectionWishingPool() */

void __thiscall
ActivityCollectionWishingPool::~ActivityCollectionWishingPool(ActivityCollectionWishingPool *this)

{
  ~ActivityCollectionWishingPool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionWishingPool::~ActivityCollectionWishingPool() */

void __thiscall
ActivityCollectionWishingPool::~ActivityCollectionWishingPool(ActivityCollectionWishingPool *this)

{
  ~ActivityCollectionWishingPool(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionWishingPool::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionWishingPool::InitContainer
          (ActivityCollectionWishingPool *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  undefined1 auStack_200 [8];
  string asStack_1f8 [8];
  string asStack_1f0 [8];
  Point aPStack_1e8 [8];
  wstring awStack_1e0 [8];
  string asStack_1d8 [8];
  wstring awStack_1d0 [16];
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  function<bool(Sexy::Touch_const&)> afStack_140 [8];
  undefined4 local_138 [4];
  char local_128;
  WishingPoolData aWStack_c0 [24];
  vector avStack_a8 [128];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a72);
  Set8BytesTo0(asStack_1f8);
  Set8BytesTo0(asStack_1f0);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    WishingPoolData::WishingPoolData(aWStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aWStack_c0);
    if (cVar1 != '\0') {
      Sexy::StringToUpper(aSStack_28,extraout_x1);
      std::operator+("IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_WISHINGPOOL_",asStack_1d8);
      UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,(string *)awStack_1d0);
      std::string::~string((string *)awStack_1d0);
      std::string::~string(asStack_1d8);
      Sexy::StringToUpper(aSStack_28,extraout_x1_00);
      std::operator+("[WISHING_POOL_DESCRIPTION_1_",(string *)awStack_1e0);
      std::operator+(asStack_1d8,"]");
      FUN_05474278(asStack_1f8,(string *)awStack_1d0);
      std::string::~string((string *)awStack_1d0);
      std::string::~string(asStack_1d8);
      std::string::~string((string *)awStack_1e0);
      Sexy::StringToUpper(aSStack_28,extraout_x1_01);
      std::operator+("[WISHING_POOL_DESCRIPTION_2_",(string *)awStack_1e0);
      std::operator+(asStack_1d8,"]");
      FUN_05474278(asStack_1f0,(string *)awStack_1d0);
      std::string::~string((string *)awStack_1d0);
      std::string::~string(asStack_1d8);
      std::string::~string((string *)awStack_1e0);
    }
    WishingPoolData::~WishingPoolData(aWStack_c0);
  }
  iVar3 = FUN_0342d430(0xf0);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0xcd);
  Sexy::Point::Point((Point *)aWStack_c0,iVar2 - iVar3,iVar4);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)aWStack_c0);
  iVar3 = FUN_0342d430(0xbe);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x1bd);
  iVar5 = FUN_0342d430(0x8c);
  iVar6 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)aWStack_c0,iVar2 - iVar3,iVar4,iVar5,iVar6);
  FUN_0342ce20(afStack_140);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aWStack_c0,(function *)afStack_140,
             true);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_140);
  iVar3 = FUN_0342d430(0x96);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x2d);
  Sexy::Point::Point(aPStack_1e8,iVar2 - iVar3,iVar4);
  TodStringTranslate(L"[WISHING_POOL_DESCRIPTION_TITLE]");
  Sexy::ToWString(asStack_1f8);
  TodStringTranslate((wstring *)asStack_1d8);
  Sexy::ToWString(asStack_1f0);
  TodStringTranslate(awStack_1d0);
  std::vector<std::wstring,std::allocator<std::wstring>>::vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aWStack_c0,afStack_140,2,
             auStack_200);
  ActivityCollectionContainerBase::InitInfoButton
            ((ActivityCollectionContainerBase *)this,aPStack_1e8,awStack_1e0,(vector *)aWStack_c0);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aWStack_c0);
  FUN_05476c50(local_138);
  FUN_05476c50(afStack_140);
  FUN_05476c50(awStack_1d0);
  FUN_05476c50((wstring *)asStack_1d8);
  FUN_05476c50(awStack_1e0);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_138[0]);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    ActivityCollectionPriviewData::ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aWStack_c0);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_140,(RtObject *)aWStack_c0);
    if (cVar1 != '\0') {
      iVar3 = FUN_0342d430(0xf0);
      iVar2 = *(int *)(this + 0x50);
      iVar4 = FUN_0342d430(0x168);
      iVar5 = FUN_0342d430(0xfa);
      iVar6 = FUN_0342d430(0x3c);
      Sexy::Insets::Insets((Insets *)awStack_1d0,iVar2 - iVar3,iVar4,iVar5,iVar6);
      ActivityCollectionContainerBase::InitRewardPriview
                ((ActivityCollectionContainerBase *)this,(TRect *)awStack_1d0,avStack_a8);
    }
    ActivityCollectionPriviewData::~ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aWStack_c0);
  }
  ActiveItem::~ActiveItem((ActiveItem *)afStack_140);
  ActiveItem::~ActiveItem(aAStack_1c0);
  std::string::~string(asStack_1f0);
  std::string::~string(asStack_1f8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ActivityCollectionWishingPool::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionWishingPool::InitContainer
          (ActivityCollectionWishingPool *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionWishingPool::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionWishingPool::Draw(ActivityCollectionWishingPool *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::Draw((ActivityCollectionContainerBase *)this,param_1);
  iVar2 = FUN_0342d430(0xf0);
  iVar2 = *(int *)(this + 0x50) - iVar2;
  iVar3 = FUN_0342d430(0x14);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x109);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x4b);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[WISHING_POOL_SHORT_DESCRIPTION]");
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x113);
  iVar6 = FUN_0342d430(0xd7);
  iVar7 = FUN_0342d430(0x37);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x163);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[POSSIBLE_REWARDS]");
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x163);
  iVar6 = FUN_0342d430(0x73);
  iVar7 = FUN_0342d430(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

