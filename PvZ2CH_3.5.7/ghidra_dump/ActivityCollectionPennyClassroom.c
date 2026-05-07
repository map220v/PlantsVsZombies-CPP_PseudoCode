// Class: ActivityCollectionPennyClassroom


/* ActivityCollectionPennyClassroom::ActivityCollectionPennyClassroom() */

void __thiscall
ActivityCollectionPennyClassroom::ActivityCollectionPennyClassroom
          (ActivityCollectionPennyClassroom *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06633430;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633798;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066337e0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionPennyClassroom_06633800;
  return;
}


/* ActivityCollectionPennyClassroom::GetLockDesc() */

void __thiscall
ActivityCollectionPennyClassroom::GetLockDesc(ActivityCollectionPennyClassroom *this)

{
  TodStringTranslate(L"[NEWPLAYER_COLLECTION_ACTIVITY_PENNYCLASSROOM_UNLOCK_DESC]");
  return;
}


/* ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom() */

void __thiscall
ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom
          (ActivityCollectionPennyClassroom *this)

{
  *(undefined ***)this = &PTR_GetClass_06633430;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633798;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066337e0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionPennyClassroom_06633800;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom() */

void __thiscall
ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom
          (ActivityCollectionPennyClassroom *this)

{
  ~ActivityCollectionPennyClassroom(this + -0xe8);
  return;
}


/* ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom() */

void __thiscall
ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom
          (ActivityCollectionPennyClassroom *this)

{
  ~ActivityCollectionPennyClassroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom() */

void __thiscall
ActivityCollectionPennyClassroom::~ActivityCollectionPennyClassroom
          (ActivityCollectionPennyClassroom *this)

{
  ~ActivityCollectionPennyClassroom(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPennyClassroom::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPennyClassroom::InitContainer
          (ActivityCollectionPennyClassroom *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  TGALogMgr *this_00;
  vector *__n;
  DString aDStack_198 [16];
  TGALuckyChestData aTStack_188 [8];
  string asStack_180 [48];
  string asStack_150 [24];
  vector avStack_138 [40];
  int local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  function<bool(Sexy::Touch_const&)> afStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_0344674c(this + 0xf8,0x2a5b);
  std::string::string(asStack_150,"IMAGE_UI_NEWPLAYERCOLLECTION_BACKGROUND_PENNYCLASSROOM");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_150);
  std::string::~string(asStack_150);
  nop();
  if (this[0x1a4] != (ActivityCollectionPennyClassroom)0x0) {
    iVar2 = FUN_03447a18(0xbe);
    iVar6 = *(int *)(this + 0x50);
    iVar3 = FUN_03447a18(0x1bd);
    iVar4 = FUN_03447a18(0x8c);
    iVar5 = FUN_03447a18(0x37);
    Sexy::Insets::Insets((Insets *)asStack_150,iVar6 - iVar2,iVar3,iVar4,iVar5);
    FUN_0344785c(afStack_88);
    __n = (vector *)afStack_88;
    ActivityCollectionContainerBase::InitGotoButton
              ((ActivityCollectionContainerBase *)this,(TRect *)asStack_150,(function *)afStack_88,
               true);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
    iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar6);
    cVar1 = FUN_03446770(local_100);
    if ((cVar1 != '\0') && (local_f0 != '\0')) {
      ActivityCollectionPriviewData::ActivityCollectionPriviewData
                ((ActivityCollectionPriviewData *)asStack_150);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)asStack_150);
      if (cVar1 != '\0') {
        iVar2 = FUN_03447a18(0xf0);
        iVar6 = *(int *)(this + 0x50);
        iVar3 = FUN_03447a18(0x172);
        iVar4 = FUN_03447a18(0xfa);
        iVar5 = FUN_03447a18(0x3c);
        Sexy::Insets::Insets((Insets *)aTStack_188,iVar6 - iVar2,iVar3,iVar4,iVar5);
        __n = avStack_138;
        ActivityCollectionContainerBase::InitRewardPriview
                  ((ActivityCollectionContainerBase *)this,(TRect *)aTStack_188,__n);
      }
      ActivityCollectionPriviewData::~ActivityCollectionPriviewData
                ((ActivityCollectionPriviewData *)asStack_150);
    }
    TGALuckyChestData::TGALuckyChestData(aTStack_188);
    DString::DString((DString *)asStack_150,5);
    pcVar7 = (char *)DString::c_str((DString *)asStack_150);
    std::string::append((string *)aTStack_188,pcVar7,(size_t)__n);
    DString::~DString((DString *)asStack_150);
    iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar6);
    ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_150);
    cVar1 = ActiveItem::GetDataSerialized((ActiveItem *)afStack_88,(RtObject *)asStack_150);
    if (cVar1 != '\0') {
      DString::DString(aDStack_198,local_110);
      pcVar7 = (char *)DString::c_str(aDStack_198);
      std::string::append(asStack_180,pcVar7,(size_t)__n);
      DString::~DString(aDStack_198);
    }
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogNewplayerCollectiontData(this_00,(TGANewplayerCollectionData *)aTStack_188);
    ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_150);
    ActiveItem::~ActiveItem((ActiveItem *)afStack_88);
    TGALuckyChestData::~TGALuckyChestData(aTStack_188);
    ActiveItem::~ActiveItem(aAStack_108);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPennyClassroom::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionPennyClassroom::InitContainer
          (ActivityCollectionPennyClassroom *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPennyClassroom::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionPennyClassroom::Draw(ActivityCollectionPennyClassroom *this,Graphics *param_1)

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
  nop();
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x338))
            (this,param_1,*(undefined4 *)(this + 0x13c),*(undefined4 *)(this + 0x140));
  iVar2 = FUN_03447a18(0xf0);
  iVar2 = *(int *)(this + 0x50) - iVar2;
  iVar3 = FUN_03447a18(0x14);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0db0);
  iVar4 = FUN_03447a18(0x109);
  iVar5 = FUN_03447a18(0xfa);
  iVar6 = FUN_03447a18(0x4b);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[ACTIVITY_COLLECTION_PENNY_CLASSROOM_DESCRIPTION]");
  iVar4 = FUN_03447a18(10);
  iVar5 = FUN_03447a18(0x113);
  iVar6 = FUN_03447a18(0xd7);
  iVar7 = FUN_03447a18(0x37);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0db0);
  iVar4 = FUN_03447a18(0x163);
  iVar5 = FUN_03447a18(0xfa);
  iVar6 = FUN_03447a18(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2,iVar4 - iVar3,iVar5,iVar6);
  TodStringTranslate(L"[POSSIBLE_REWARDS]");
  iVar4 = FUN_03447a18(10);
  iVar5 = FUN_03447a18(0x163);
  iVar6 = FUN_03447a18(0x73);
  iVar7 = FUN_03447a18(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar4 + iVar2,iVar5 - iVar3,iVar6,iVar7);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,5,1);
  FUN_05476c50(auStack_30);
  (**(code **)(*(long *)this + 0x340))
            (this,param_1,*(undefined4 *)(this + 0x1a8),*(undefined4 *)(this + 0x1ac));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

