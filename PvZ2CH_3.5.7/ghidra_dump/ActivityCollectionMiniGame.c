// Class: ActivityCollectionMiniGame


/* ActivityCollectionMiniGame::ActivityCollectionMiniGame() */

void __thiscall
ActivityCollectionMiniGame::ActivityCollectionMiniGame(ActivityCollectionMiniGame *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06630e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06631178;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066311c0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionMiniGame_066311e0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionMiniGame::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionMiniGame::InitContainer
          (ActivityCollectionMiniGame *this,ActivityCollectionTabBase *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a8d);
  std::string::string(asStack_38,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_MINIGAME");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar2 = FUN_0342d430(0xf0);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x131);
  Sexy::Point::Point((Point *)asStack_38,iVar1 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_38);
  iVar2 = FUN_0342d430(0xbe);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0x1bd);
  iVar4 = FUN_0342d430(0x8c);
  iVar5 = FUN_0342d430(0x37);
  Sexy::Insets::Insets((Insets *)asStack_38,iVar1 - iVar2,iVar3,iVar4,iVar5);
  FUN_0342d2e0(afStack_28);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)asStack_38,(function *)afStack_28,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionMiniGame::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionMiniGame::InitContainer
          (ActivityCollectionMiniGame *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* ActivityCollectionMiniGame::~ActivityCollectionMiniGame() */

void __thiscall
ActivityCollectionMiniGame::~ActivityCollectionMiniGame(ActivityCollectionMiniGame *this)

{
  *(undefined ***)this = &PTR_GetClass_06630e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06631178;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066311c0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionMiniGame_066311e0;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionMiniGame::~ActivityCollectionMiniGame() */

void __thiscall
ActivityCollectionMiniGame::~ActivityCollectionMiniGame(ActivityCollectionMiniGame *this)

{
  ~ActivityCollectionMiniGame(this + -0xe8);
  return;
}


/* ActivityCollectionMiniGame::~ActivityCollectionMiniGame() */

void __thiscall
ActivityCollectionMiniGame::~ActivityCollectionMiniGame(ActivityCollectionMiniGame *this)

{
  ~ActivityCollectionMiniGame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionMiniGame::~ActivityCollectionMiniGame() */

void __thiscall
ActivityCollectionMiniGame::~ActivityCollectionMiniGame(ActivityCollectionMiniGame *this)

{
  ~ActivityCollectionMiniGame(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionMiniGame::Draw(Sexy::Graphics*) */

void __thiscall ActivityCollectionMiniGame::Draw(ActivityCollectionMiniGame *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::Draw((ActivityCollectionContainerBase *)this,param_1);
  iVar3 = FUN_0342d430(0xf0);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_0342d430(0x14);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar5 = FUN_0342d430(0x16d);
  iVar6 = FUN_0342d430(0xfa);
  iVar7 = FUN_0342d430(0x4b);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar1 - iVar3,iVar5 - iVar4,iVar6,iVar7);
  TodStringTranslate(L"[MINIGAME_COLLECTION_SHORT_DESCRIPTION]");
  iVar5 = FUN_0342d430(10);
  iVar6 = FUN_0342d430(0x177);
  iVar7 = FUN_0342d430(0xd7);
  iVar8 = FUN_0342d430(0x37);
  Sexy::Insets::Insets(aIStack_28,iVar5 + (iVar1 - iVar3),iVar6 - iVar4,iVar7,iVar8);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_16;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

