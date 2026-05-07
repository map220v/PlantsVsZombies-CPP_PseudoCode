// Class: ActivityCollectionDragonTreasure


/* ActivityCollectionDragonTreasure::ActivityCollectionDragonTreasure() */

void __thiscall
ActivityCollectionDragonTreasure::ActivityCollectionDragonTreasure
          (ActivityCollectionDragonTreasure *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_0662c990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662ccf8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662cd40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionDragonTreasure_0662cd60;
  return;
}


/* ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure() */

void __thiscall
ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure
          (ActivityCollectionDragonTreasure *this)

{
  *(undefined ***)this = &PTR_GetClass_0662c990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0662ccf8;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_0662cd40;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionDragonTreasure_0662cd60;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure() */

void __thiscall
ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure
          (ActivityCollectionDragonTreasure *this)

{
  ~ActivityCollectionDragonTreasure(this + -0xe8);
  return;
}


/* ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure() */

void __thiscall
ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure
          (ActivityCollectionDragonTreasure *this)

{
  ~ActivityCollectionDragonTreasure(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure() */

void __thiscall
ActivityCollectionDragonTreasure::~ActivityCollectionDragonTreasure
          (ActivityCollectionDragonTreasure *this)

{
  ~ActivityCollectionDragonTreasure(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDragonTreasure::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionDragonTreasure::InitContainer
          (ActivityCollectionDragonTreasure *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Insets aIStack_c8 [16];
  string asStack_b8 [24];
  vector avStack_a0 [24];
  function<bool(Sexy::Touch_const&)> afStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a7f);
  std::string::string(asStack_b8,"IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_DRAGONTREASURE");
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
  FUN_0342d080(afStack_88);
  ActivityCollectionContainerBase::InitGotoButton
            ((ActivityCollectionContainerBase *)this,(TRect *)asStack_b8,(function *)afStack_88,true
            );
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
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


/* non-virtual thunk to ActivityCollectionDragonTreasure::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionDragonTreasure::InitContainer
          (ActivityCollectionDragonTreasure *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionDragonTreasure::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionDragonTreasure::Draw(ActivityCollectionDragonTreasure *this,Graphics *param_1)

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
  TodStringTranslate(L"[ACTIVITY_DRAGONT_REASURE_SHORT_DESCRIPTION]");
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

