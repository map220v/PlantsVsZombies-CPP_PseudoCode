// Class: ActivityCollectionLimitSummon


/* ActivityCollectionLimitSummon::ActivityCollectionLimitSummon() */

void __thiscall
ActivityCollectionLimitSummon::ActivityCollectionLimitSummon(ActivityCollectionLimitSummon *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06628fd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629338;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06629380;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLimitSummon_066293a0;
  return;
}


/* ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon() */

void __thiscall
ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon(ActivityCollectionLimitSummon *this)

{
  *(undefined ***)this = &PTR_GetClass_06628fd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629338;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06629380;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLimitSummon_066293a0;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon() */

void __thiscall
ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon(ActivityCollectionLimitSummon *this)

{
  ~ActivityCollectionLimitSummon(this + -0xe8);
  return;
}


/* ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon() */

void __thiscall
ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon(ActivityCollectionLimitSummon *this)

{
  ~ActivityCollectionLimitSummon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon() */

void __thiscall
ActivityCollectionLimitSummon::~ActivityCollectionLimitSummon(ActivityCollectionLimitSummon *this)

{
  ~ActivityCollectionLimitSummon(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLimitSummon::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLimitSummon::InitContainer
          (ActivityCollectionLimitSummon *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1c0 [8];
  Point aPStack_1b8 [8];
  string asStack_1b0 [16];
  function<bool(Sexy::Touch_const&)> afStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  Point aPStack_120 [24];
  vector avStack_108 [252];
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a66);
  iVar2 = FUN_0342d430(0xf0);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0xcd);
  Sexy::Point::Point(aPStack_120,iVar6 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer((ActivityCollectionContainerBase *)this,aPStack_120);
  iVar2 = FUN_0342d430(0xbe);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x1bd);
  iVar4 = FUN_0342d430(0x8c);
  iVar5 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)aPStack_120,iVar6 - iVar2,iVar3,iVar4,iVar5);
  FUN_0342cca4(afStack_1a0);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aPStack_120,(function *)afStack_1a0,
             true);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_1a0);
  iVar2 = FUN_0342d430(0x96);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x2d);
  Sexy::Point::Point(aPStack_1b8,iVar6 - iVar2,iVar3);
  TodStringTranslate(L"[LIMITED_SUMMON_DESCRIPTION_TITLE]");
  TodStringTranslate(L"[LIMITED_SUMMON_WISH_DESCRIPTION]");
  std::vector<std::wstring,std::allocator<std::wstring>>::vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_120,afStack_1a0,1,
             auStack_1c0);
  ActivityCollectionContainerBase::InitInfoButton
            ((ActivityCollectionContainerBase *)this,aPStack_1b8,(wstring *)asStack_1b0,
             (vector *)aPStack_120);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_120);
  FUN_05476c50(afStack_1a0);
  FUN_05476c50(asStack_1b0);
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar1 = FUN_03429840(local_198);
  if ((cVar1 != '\0') && (local_188 != '\0')) {
    ActivityCollectionPriviewData::ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aPStack_120);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_1a0,(RtObject *)aPStack_120);
    if (cVar1 != '\0') {
      iVar2 = FUN_0342d430(0xf0);
      iVar6 = *(int *)(this + 0x50);
      iVar3 = FUN_0342d430(0x172);
      iVar4 = FUN_0342d430(0xfa);
      iVar5 = FUN_0342d430(0x3c);
      Sexy::Insets::Insets((Insets *)asStack_1b0,iVar6 - iVar2,iVar3,iVar4,iVar5);
      ActivityCollectionContainerBase::InitRewardPriview
                ((ActivityCollectionContainerBase *)this,(TRect *)asStack_1b0,avStack_108);
    }
    ActivityCollectionPriviewData::~ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aPStack_120);
    cVar1 = FUN_03429840(local_198);
    if ((cVar1 != '\0') && (local_188 != '\0')) {
      LimitedSummonData::LimitedSummonData((LimitedSummonData *)aPStack_120);
      cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_1a0,(RtObject *)aPStack_120);
      if (cVar1 != '\0') {
        Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_LIMITSUMMON_%d",asStack_1b0,
                        (ulong)local_c);
        UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_1b0);
        std::string::~string(asStack_1b0);
      }
      LimitedSummonData::~LimitedSummonData((LimitedSummonData *)aPStack_120);
    }
  }
  ActiveItem::~ActiveItem((ActiveItem *)afStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionLimitSummon::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLimitSummon::InitContainer
          (ActivityCollectionLimitSummon *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLimitSummon::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionLimitSummon::Draw(ActivityCollectionLimitSummon *this,Graphics *param_1)

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
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0680);
  iVar4 = FUN_0342d430(0xaa);
  iVar5 = FUN_0342d430(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar4,iVar5);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x109);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x4b);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[LIMITED_SUMMON_SHORT_DESCRIPTION]");
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x113);
  iVar6 = FUN_0342d430(0xd7);
  iVar7 = FUN_0342d430(0x23);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04b8);
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x136);
  iVar6 = FUN_0342d430(0x46);
  iVar7 = FUN_0342d430(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
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

