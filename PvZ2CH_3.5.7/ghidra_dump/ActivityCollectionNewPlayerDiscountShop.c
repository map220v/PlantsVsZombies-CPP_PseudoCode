// Class: ActivityCollectionNewPlayerDiscountShop


/* ActivityCollectionNewPlayerDiscountShop::ActivityCollectionNewPlayerDiscountShop() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::ActivityCollectionNewPlayerDiscountShop
          (ActivityCollectionNewPlayerDiscountShop *this)

{
  ActivityCollectionContainerBase::ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  *(undefined ***)this = &PTR_GetClass_06633010;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633378;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066333c0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerDiscountShop_066333e0;
  return;
}


/* ActivityCollectionNewPlayerDiscountShop::GetLockDesc() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::GetLockDesc(ActivityCollectionNewPlayerDiscountShop *this)

{
  TodStringTranslate(L"[NEWPLAYER_COLLECTION_ACTIVITY_DISCOUNTSHOP_UNLOCK_DESC]");
  return;
}


/* ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop
          (ActivityCollectionNewPlayerDiscountShop *this)

{
  *(undefined ***)this = &PTR_GetClass_06633010;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633378;
  *(undefined ***)(this + 0xe0) = &PTR_InitContainer_066333c0;
  *(undefined ***)(this + 0xe8) = &PTR__ActivityCollectionNewPlayerDiscountShop_066333e0;
  ActivityCollectionContainerBase::~ActivityCollectionContainerBase
            ((ActivityCollectionContainerBase *)this);
  return;
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop
          (ActivityCollectionNewPlayerDiscountShop *this)

{
  ~ActivityCollectionNewPlayerDiscountShop(this + -0xe8);
  return;
}


/* ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop
          (ActivityCollectionNewPlayerDiscountShop *this)

{
  ~ActivityCollectionNewPlayerDiscountShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop() */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::~ActivityCollectionNewPlayerDiscountShop
          (ActivityCollectionNewPlayerDiscountShop *this)

{
  ~ActivityCollectionNewPlayerDiscountShop(this + -0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionNewPlayerDiscountShop::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::InitContainer
          (ActivityCollectionNewPlayerDiscountShop *this,ActivityCollectionTabBase *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  NewPlayerDiscountShopItem *this_00;
  int *piVar9;
  int *piVar10;
  vector *pvVar11;
  ulong uVar12;
  char *pcVar13;
  TGALogMgr *this_01;
  code *__n;
  ulong uVar14;
  DString aDStack_1f8 [16];
  TGALuckyChestData aTStack_1e8 [8];
  string asStack_1e0 [48];
  Insets aIStack_1b0 [64];
  int local_170;
  string asStack_168 [24];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_120;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActivityCollectionContainerBase::InitContainer((ActivityCollectionContainerBase *)this,param_1);
  FUN_0344674c(this + 0xf8,0x2a7c);
  std::string::string(asStack_168,"IMAGE_UI_NEWPLAYERCOLLECTION_BACKGROUND_NEWPLAYERDISCOUNTSHOP");
  UIRewardFrame::SetDecoratorString((UIRewardFrame *)this,asStack_168);
  std::string::~string(asStack_168);
  nop();
  iVar2 = FUN_03447a18(0x23);
  iVar8 = *(int *)(this + 0x50);
  uVar3 = FUN_03447a18(0x5f);
  __n = (code *)(ulong)uVar3;
  Sexy::Point::Point((Point *)asStack_168,iVar2 + iVar8 / 2,uVar3);
  ActivityCollectionContainerBase::InitTimer
            ((ActivityCollectionContainerBase *)this,(Point *)asStack_168);
  iVar8 = *(int *)(this + 0x50);
  iVar2 = FUN_03447a18(0x5f);
  iVar4 = FUN_03447a18(0x78);
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar1 = FUN_03446770(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    NewPlayerDiscountShopData::NewPlayerDiscountShopData((NewPlayerDiscountShopData *)asStack_168);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)asStack_168);
    if (cVar1 != '\0') {
      uVar14 = 0;
      while( true ) {
        uVar3 = (uint)uVar14;
        uVar12 = FUN_034469d8(local_150,local_148);
        if (uVar12 <= uVar14) break;
        iVar5 = FUN_03447a18(0x6e);
        iVar6 = FUN_03447a18(0x87);
        iVar7 = FUN_03447a18(0x5a);
        Sexy::Insets::Insets
                  (aIStack_1b0,(iVar8 / 2 - iVar2) + (uVar3 & 3) * iVar5,
                   iVar4 + ((int)uVar3 >> 2) * iVar6,iVar7,iVar6);
        this_00 = ::operator_new(0x110);
        NewPlayerDiscountShopItem::NewPlayerDiscountShopItem(this_00);
        (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_1b0);
        piVar9 = (int *)FUN_03446a08(local_138,uVar14);
        piVar10 = (int *)FUN_03446a08(local_120,uVar14);
        pvVar11 = (vector *)FUN_03446a10(local_150,uVar14);
        NewPlayerDiscountShopItem::Init(this_00,uVar3,*piVar9,*piVar10,pvVar11);
        __n = *(code **)(*(long *)this + 0x60);
        (*__n)(this,this_00);
        uVar14 = uVar14 + 1;
      }
      TGALuckyChestData::TGALuckyChestData(aTStack_1e8);
      DString::DString((DString *)aIStack_1b0,3);
      pcVar13 = (char *)DString::c_str((DString *)aIStack_1b0);
      std::string::append((string *)aTStack_1e8,pcVar13,(size_t)__n);
      DString::~DString((DString *)aIStack_1b0);
      iVar8 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar8);
      ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)aIStack_1b0);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aIStack_1b0);
      if (cVar1 != '\0') {
        DString::DString(aDStack_1f8,local_170);
        pcVar13 = (char *)DString::c_str(aDStack_1f8);
        std::string::append(asStack_1e0,pcVar13,(size_t)__n);
        DString::~DString(aDStack_1f8);
      }
      this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogNewplayerCollectiontData(this_01,(TGANewplayerCollectionData *)aTStack_1e8);
      ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)aIStack_1b0);
      ActiveItem::~ActiveItem(aAStack_88);
      TGALuckyChestData::~TGALuckyChestData(aTStack_1e8);
    }
    NewPlayerDiscountShopData::~NewPlayerDiscountShopData((NewPlayerDiscountShopData *)asStack_168);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to
   ActivityCollectionNewPlayerDiscountShop::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionNewPlayerDiscountShop::InitContainer
          (ActivityCollectionNewPlayerDiscountShop *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0xe0,param_1);
  return;
}

