// Class: ActivityCollectionLevelOfDay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLevelOfDay::ActivityCollectionLevelOfDay() */

void __thiscall
ActivityCollectionLevelOfDay::ActivityCollectionLevelOfDay(ActivityCollectionLevelOfDay *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_06629810;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLevelOfDay_06629be0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629b78;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06629bc0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Quests");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay() */

void __thiscall
ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay(ActivityCollectionLevelOfDay *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06629b78;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionLevelOfDay_06629be0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_06629bc0;
  *(undefined ***)this = &PTR_GetClass_06629810;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Quests");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay() */

void __thiscall
ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay(ActivityCollectionLevelOfDay *this)

{
  ~ActivityCollectionLevelOfDay(this + -0xe8);
  return;
}


/* ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay() */

void __thiscall
ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay(ActivityCollectionLevelOfDay *this)

{
  ~ActivityCollectionLevelOfDay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay() */

void __thiscall
ActivityCollectionLevelOfDay::~ActivityCollectionLevelOfDay(ActivityCollectionLevelOfDay *this)

{
  ~ActivityCollectionLevelOfDay(this + -0xe8);
  return;
}


/* ActivityCollectionLevelOfDay::ButtonDepress(int) */

void __thiscall
ActivityCollectionLevelOfDay::ButtonDepress(ActivityCollectionLevelOfDay *this,int param_1)

{
  ActivityCollectionContainerBase::ButtonDepress((ActivityCollectionContainerBase *)this,param_1);
  if (param_1 != 0x21) {
    return;
  }
  UISingletonDialog<UIRenaissanceChallengeNew>::ShowDialog();
  return;
}


/* non-virtual thunk to ActivityCollectionLevelOfDay::ButtonDepress(int) */

void __thiscall
ActivityCollectionLevelOfDay::ButtonDepress(ActivityCollectionLevelOfDay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLevelOfDay::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLevelOfDay::InitContainer
          (ActivityCollectionLevelOfDay *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  RenaissanceChallengeScrollNew *this_00;
  PVZ2UIButton *this_01;
  RenaissanceChallengeNewManager *this_02;
  long lVar12;
  undefined1 auStack_100 [8];
  Insets aIStack_f8 [56];
  string asStack_c0 [24];
  vector avStack_a8 [32];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_034297a8(this + 0xf8,0x2a09);
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa06a8);
  FUN_034297b0(this + 0xf0,uVar11);
  std::string::string(asStack_c0,"IMAGE_UI_ACTIVITYCOLLECTION_PARTS_LEVELOFDAY");
  uVar11 = StringHelper::ToImage(asStack_c0,false);
  *(undefined8 *)(this + 0x1b0) = uVar11;
  std::string::~string(asStack_c0);
  nop();
  iVar2 = FUN_0342d430(0xf0);
  iVar4 = *(int *)(this + 0x50);
  iVar3 = FUN_0342d430(0xcd);
  Sexy::Point::Point((Point *)asStack_c0,iVar4 - iVar2,iVar3);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_c0);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar1 = FUN_03429840(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    ActivityCollectionPriviewData::ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)asStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_c0);
    if (cVar1 != '\0') {
      iVar2 = FUN_0342d430(0xf0);
      iVar4 = *(int *)(this + 0x50);
      iVar3 = FUN_0342d430(0x118);
      iVar9 = FUN_0342d430(0xfa);
      iVar10 = FUN_0342d430(0x3c);
      Sexy::Insets::Insets(aIStack_f8,iVar4 - iVar2,iVar3,iVar9,iVar10);
      ActivityCollectionContainerBase::InitRewardPriview
                ((ActivityCollectionContainerBase *)this,(TRect *)aIStack_f8,avStack_a8);
    }
    ActivityCollectionPriviewData::~ActivityCollectionPriviewData
              ((ActivityCollectionPriviewData *)asStack_c0);
  }
  this_00 = ::operator_new(0x1f0);
  RenaissanceChallengeScrollNew::RenaissanceChallengeScrollNew(this_00);
  iVar2 = FUN_0342d430(300);
  iVar4 = *(int *)(this + 0x50);
  uVar5 = FUN_0342d430(0x16b);
  uVar6 = FUN_0342d430(0x7c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar4 - iVar2,uVar5,iVar2,uVar6);
  (**(code **)(*(long *)this_00 + 0x310))(this_00);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(aIStack_f8,&DAT_056f11a8,auStack_100);
  Sexy::Color::Color((Color *)asStack_c0,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x21,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_f8,(Color *)asStack_c0)
  ;
  FUN_05476c50(aIStack_f8);
  nop();
  this_02 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
  uVar7 = RenaissanceChallengeNewManager::GetResourceId(this_02);
  if ((int)uVar7 < 1) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_f8,&DAT_06aa0138,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,&DAT_06aa0138,2);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)aIStack_f8,(PVZ2UIImage *)asStack_c0);
  }
  else {
    Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_PARTS_LEVELOFDAY_SHOP_%d",asStack_c0,(ulong)uVar7);
    lVar12 = StringHelper::ToImage(asStack_c0,false);
    std::string::~string(asStack_c0);
    if (lVar12 == 0) {
      std::string::string(asStack_c0,"IMAGE_UI_GENERIC_ERROR");
      lVar12 = StringHelper::ToImage(asStack_c0,false);
      std::string::~string(asStack_c0);
      nop();
    }
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_f8,lVar12,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,lVar12,2);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)aIStack_f8,(PVZ2UIImage *)asStack_c0);
    Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_BACKGROUND_LEVELOFDAY_%d",asStack_c0,(ulong)uVar7);
    UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_c0);
    std::string::~string(asStack_c0);
    Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_PARTS_LEVELOFDAY_%d",asStack_c0,(ulong)uVar7);
    uVar11 = StringHelper::ToImage(asStack_c0,false);
    *(undefined8 *)(this + 0x1b0) = uVar11;
    std::string::~string(asStack_c0);
  }
  uVar5 = FUN_0342d430(0xa0);
  uVar6 = FUN_0342d430(0x186);
  uVar8 = FUN_0342d430(100);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar5,uVar6,uVar8,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionLevelOfDay::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLevelOfDay::InitContainer
          (ActivityCollectionLevelOfDay *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLevelOfDay::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionLevelOfDay::Draw(ActivityCollectionLevelOfDay *this,Graphics *param_1)

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
  pIVar8 = *(Image **)(this + 0x1b0);
  if (pIVar8 != (Image *)0x0) {
    iVar4 = FUN_0342d430(0xaa);
    iVar5 = FUN_0342d430(0x2d);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar4,iVar5);
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa04e8);
  iVar4 = FUN_0342d430(0x109);
  iVar5 = FUN_0342d430(0xfa);
  iVar6 = FUN_0342d430(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[POSSIBLE_REWARDS]");
  iVar4 = FUN_0342d430(10);
  iVar5 = FUN_0342d430(0x109);
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

