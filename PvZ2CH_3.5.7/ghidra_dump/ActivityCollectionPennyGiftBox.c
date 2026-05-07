// Class: ActivityCollectionPennyGiftBox


/* ActivityCollectionPennyGiftBox::ActivityCollectionPennyGiftBox() */

void __thiscall
ActivityCollectionPennyGiftBox::ActivityCollectionPennyGiftBox(ActivityCollectionPennyGiftBox *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06630630;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06630998;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066309e0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionPennyGiftBox_06630a00;
  return;
}


/* ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox() */

void __thiscall
ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox
          (ActivityCollectionPennyGiftBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06630630;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06630998;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066309e0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionPennyGiftBox_06630a00;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox() */

void __thiscall
ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox
          (ActivityCollectionPennyGiftBox *this)

{
  ~ActivityCollectionPennyGiftBox(this + -0xe8);
  return;
}


/* ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox() */

void __thiscall
ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox
          (ActivityCollectionPennyGiftBox *this)

{
  ~ActivityCollectionPennyGiftBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox() */

void __thiscall
ActivityCollectionPennyGiftBox::~ActivityCollectionPennyGiftBox
          (ActivityCollectionPennyGiftBox *this)

{
  ~ActivityCollectionPennyGiftBox(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPennyGiftBox::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPennyGiftBox::InitContainer
          (ActivityCollectionPennyGiftBox *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_d8 [8];
  Point aPStack_d0 [8];
  Insets aIStack_c8 [16];
  string asStack_b8 [24];
  vector avStack_a0 [24];
  function<bool(Sexy::Touch_const&)> afStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a84);
  std::string::string(asStack_b8,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_PENNYGIFTBOX");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  iVar2 = FUN_0342d430(0xf0);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0xcd);
  Sexy::Point::Point((Point *)asStack_b8,iVar6 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_b8);
  iVar2 = FUN_0342d430(0xbe);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x1bd);
  iVar4 = FUN_0342d430(0x8c);
  iVar5 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)asStack_b8,iVar6 - iVar2,iVar3,iVar4,iVar5);
  FUN_0342d294(afStack_88);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)asStack_b8,(function *)afStack_88,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
  iVar2 = FUN_0342d430(0x96);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x2d);
  Sexy::Point::Point(aPStack_d0,iVar6 - iVar2,iVar3);
  TodStringTranslate(L"[PENNY_GIFT_DESCRIPTION_TITLE]");
  TodStringTranslate(L"[PENNY_GIFT_DESCRIPTION]");
  std::vector<std::wstring,std::allocator<std::wstring>>::vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)asStack_b8,afStack_88,1,auStack_d8
            );
  ActivityCollectionContainerBase::InitInfoButton
            ((ActivityCollectionContainerBase *)this,aPStack_d0,(wstring *)aIStack_c8,
             (vector *)asStack_b8);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)asStack_b8);
  FUN_05476c50(afStack_88);
  FUN_05476c50(aIStack_c8);
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    ActivityCollectionPriviewData::ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)asStack_b8);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_88,(RtObject *)asStack_b8);
    if (cVar1 != '\0') {
      iVar2 = FUN_0342d430(0xf0);
      iVar6 = *(int *)(this + 0x50);
      iVar3 = FUN_0342d430(0x172);
      iVar4 = FUN_0342d430(0xfa);
      iVar5 = FUN_0342d430(0x3c);
      Sexy::Insets::Insets(aIStack_c8,iVar6 - iVar2,iVar3,iVar4,iVar5);
      ActivityCollectionContainerBase::InitRewardPriview
                ((ActivityCollectionContainerBase *)this,(TRect *)aIStack_c8,avStack_a0);
    }
    ActivityCollectionPriviewData::~ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)asStack_b8);
  }
  ActiveItem::~ActiveItem((ActiveItem *)afStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPennyGiftBox::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPennyGiftBox::InitContainer
          (ActivityCollectionPennyGiftBox *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPennyGiftBox::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionPennyGiftBox::Draw(ActivityCollectionPennyGiftBox *this,Graphics *param_1)

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
  TodStringTranslate(L"[PENNY_GIFT_SHORT_DESCRIPTION]");
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

