// Class: ActivityCollectionCarnival


/* ActivityCollectionCarnival::ActivityCollectionCarnival() */

void __thiscall
ActivityCollectionCarnival::ActivityCollectionCarnival(ActivityCollectionCarnival *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_066293f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629758;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066297a0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionCarnival_066297c0;
  return;
}


/* ActivityCollectionCarnival::~ActivityCollectionCarnival() */

void __thiscall
ActivityCollectionCarnival::~ActivityCollectionCarnival(ActivityCollectionCarnival *this)

{
  *(undefined ***)this = &PTR_GetClass_066293f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629758;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066297a0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionCarnival_066297c0;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionCarnival::~ActivityCollectionCarnival() */

void __thiscall
ActivityCollectionCarnival::~ActivityCollectionCarnival(ActivityCollectionCarnival *this)

{
  ~ActivityCollectionCarnival(this + -0xe8);
  return;
}


/* ActivityCollectionCarnival::~ActivityCollectionCarnival() */

void __thiscall
ActivityCollectionCarnival::~ActivityCollectionCarnival(ActivityCollectionCarnival *this)

{
  ~ActivityCollectionCarnival(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionCarnival::~ActivityCollectionCarnival() */

void __thiscall
ActivityCollectionCarnival::~ActivityCollectionCarnival(ActivityCollectionCarnival *this)

{
  ~ActivityCollectionCarnival(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionCarnival::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionCarnival::InitContainer
          (ActivityCollectionCarnival *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [8];
  Point aPStack_d0 [8];
  Insets aIStack_c8 [16];
  Point aPStack_b8 [24];
  vector avStack_a0 [24];
  function<bool(Sexy::Touch_const&)> afStack_88 [8];
  undefined4 local_80 [4];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a6a);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0430);
  FUN_034297b0(this + 0xf0,uVar7);
  iVar2 = FUN_0342d430(0xf0);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0xcd);
  Sexy::Point::Point(aPStack_b8,iVar6 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer((ActivityCollectionContainerBase *)this,aPStack_b8);
  iVar2 = FUN_0342d430(0xbe);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x1bd);
  iVar4 = FUN_0342d430(0x8c);
  iVar5 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)aPStack_b8,iVar6 - iVar2,iVar3,iVar4,iVar5);
  FUN_0342ccf0(afStack_88);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)aPStack_b8,(function *)afStack_88,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
  iVar2 = FUN_0342d430(0x96);
  iVar6 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x2d);
  Sexy::Point::Point(aPStack_d0,iVar6 - iVar2,iVar3);
  TodStringTranslate(L"[CARNIVAL_DESCRIPTION_TITLE]");
  TodStringTranslate(L"[CARNIVAL_DESCRIPTION_1]");
  TodStringTranslate(L"[CARNIVAL_DESCRIPTION_2]");
  std::vector<std::wstring,std::allocator<std::wstring>>::vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_b8,afStack_88,2,auStack_d8
            );
  ActivityCollectionContainerBase::InitInfoButton
            ((ActivityCollectionContainerBase *)this,aPStack_d0,(wstring *)aIStack_c8,
             (vector *)aPStack_b8);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)aPStack_b8);
  FUN_05476c50(local_80);
  FUN_05476c50(afStack_88);
  FUN_05476c50(aIStack_c8);
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar1 = FUN_03429840(local_80[0]);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    ActivityCollectionPriviewData::ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aPStack_b8);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_88,(RtObject *)aPStack_b8);
    if (cVar1 != '\0') {
      iVar2 = FUN_0342d430(0xf0);
      iVar6 = *(int *)(this + 0x50);
      iVar3 = FUN_0342d430(0x15e);
      iVar4 = FUN_0342d430(0xfa);
      iVar5 = FUN_0342d430(0x3c);
      Sexy::Insets::Insets(aIStack_c8,iVar6 - iVar2,iVar3,iVar4,iVar5);
      ActivityCollectionContainerBase::InitRewardPriview
                ((ActivityCollectionContainerBase *)this,(TRect *)aIStack_c8,avStack_a0);
    }
    ActivityCollectionPriviewData::~ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)aPStack_b8);
  }
  ActiveItem::~ActiveItem((ActiveItem *)afStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionCarnival::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionCarnival::InitContainer
          (ActivityCollectionCarnival *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionCarnival::Draw(Sexy::Graphics*) */

void __thiscall ActivityCollectionCarnival::Draw(ActivityCollectionCarnival *this,Graphics *param_1)

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
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0328);
  iVar4 = FUN_0342d430(0xaa);
  iVar5 = FUN_0342d430(0xcf);
  iVar6 = FUN_0342d430(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x109);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x37);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[CARNIVAL_SHORT_DESCRIPTION]");
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
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x14f);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[POSSIBLE_REWARDS]");
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x14f);
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

