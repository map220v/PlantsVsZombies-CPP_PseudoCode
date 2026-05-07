// Class: NewPVPBattlePassBundleWidget


/* NewPVPBattlePassBundleWidget::~NewPVPBattlePassBundleWidget() */

void __thiscall
NewPVPBattlePassBundleWidget::~NewPVPBattlePassBundleWidget(NewPVPBattlePassBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06654530;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06654898;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  TemplateBundleWidget::~TemplateBundleWidget((TemplateBundleWidget *)this);
  return;
}


/* NewPVPBattlePassBundleWidget::~NewPVPBattlePassBundleWidget() */

void __thiscall
NewPVPBattlePassBundleWidget::~NewPVPBattlePassBundleWidget(NewPVPBattlePassBundleWidget *this)

{
  ~NewPVPBattlePassBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::OnPurchaseButtonDepress() */

void __thiscall
NewPVPBattlePassBundleWidget::OnPurchaseButtonDepress(NewPVPBattlePassBundleWidget *this)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var2);
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.newpvpbattlepass6");
    PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    if (iVar1 == 1) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.newpvpbattlepass8";
    }
    else if (iVar1 == 2) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.newpvpbattlepass18";
    }
    else if (iVar1 == 3) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.newpvpbattlepass45";
    }
    else {
      if (iVar1 != 4) goto LAB_0353d74c;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.newpvpbattlepass78";
    }
    std::string::string(asStack_10,__s);
    PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_0353d74c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::DrawBundleRewards(Sexy::Graphics*) */

void __thiscall
NewPVPBattlePassBundleWidget::DrawBundleRewards
          (NewPVPBattlePassBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  GraphicsAutoState aGStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  pIVar8 = *(Image **)(this + 0x108);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0353ba6c(0xe6);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(*(int *)(this + 0x50) - *(int *)(pIVar8 + 0x38)) / 2,
             iVar1 - *(int *)(pIVar8 + 0x3c) / 2,*(int *)(pIVar8 + 0x38),*(int *)(pIVar8 + 0x3c));
  iVar2 = FUN_0353ba6c(0x3c);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0353ba6c(0xe6);
  iVar6 = *(int *)(*(long *)(this + 0x108) + 0x3c);
  iVar4 = FUN_0353ba6c(0x78);
  iVar5 = FUN_0353ba6c(0x28);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1 / 2 - iVar2,iVar3 + iVar6 / 2,iVar4,iVar5);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar6 = 10;
    }
    else if (iVar1 == 2) {
      iVar6 = 0x19;
    }
    else if (iVar1 == 3) {
      iVar6 = 0x4b;
    }
    else {
      iVar6 = 999;
      if (iVar1 == 4) {
        iVar6 = 0x96;
      }
    }
    FUN_05478178(awStack_40,L"[SECRET_BUY_STR]",auStack_48);
    TodReplaceNumberString(awStack_40,L"{NUMBER}",iVar6);
    TodStringTranslate(awStack_38);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,aGStack_30,(Insets *)&local_28,uVar7,aCStack_18,5,0);
    FUN_05476c50(aGStack_30);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
    nop();
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Color::Color(aCStack_18,2);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5768);
    iVar1 = FUN_0353ba6c(8);
    iVar6 = FUN_0353ba6c(2);
    iVar2 = FUN_0353ba6c(0x10);
    iVar3 = FUN_0353ba6c(3);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,local_28 + iVar1,(local_24 + local_1c / 2) - iVar6,local_20 - iVar2,
               iVar3);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::OnExtrarewards(std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&, int) */

void __thiscall
NewPVPBattlePassBundleWidget::OnExtrarewards
          (NewPVPBattlePassBundleWidget *this,vector *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  NameMapperBase *this_00;
  NewPVPMgr *this_01;
  UIChestAward *this_02;
  ulong uVar6;
  undefined8 uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c0 [24];
  function<bool(Sexy::Touch_const&)> afStack_a8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_88 [48];
  UIChestAward *local_58;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_50 [48];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == param_2) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_88);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c0);
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)param_1;
      uVar4 = FUN_035395e8(uVar7,*(undefined8 *)(param_1 + 8));
      if (uVar4 <= uVar6) break;
      piVar5 = (int *)FUN_03539980(uVar7,uVar6);
      ProfileChangeItemAmount(*piVar5,piVar5[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_58);
      this_00 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
      piVar5 = (int *)FUN_03539980(*(undefined8 *)param_1,uVar6);
      cVar1 = NameMapperBase::ContainsId(this_00,*piVar5);
      if (cVar1 != '\0') {
        this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        piVar5 = (int *)FUN_03539980(*(undefined8 *)param_1,uVar6);
        NewPVPMgr::onObtainedZombieCardPiece(this_01,*piVar5,piVar5[1]);
      }
      piVar5 = (int *)FUN_03539980(*(undefined8 *)param_1,uVar6);
      piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_88,piVar5);
      piVar2 = (int *)FUN_03539980(*(undefined8 *)param_1,uVar6);
      *piVar5 = piVar2[1];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_d8,piVar2);
      puVar3 = (undefined8 *)FUN_03539980(*(undefined8 *)param_1,uVar6);
      local_58 = (UIChestAward *)*puVar3;
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_c0,
                 (ChestAwardContent *)&local_58);
      uVar6 = uVar6 + 1;
    }
    std::string::string((string *)&local_58,"POPANIM_EFFECTS_NEW_PVP_CHEST_3");
    this_02 = (UIChestAward *)UINewPVPChestAward::create(avStack_c0,(GAME_ITEM_INFO *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    local_58 = this_02;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
              (amStack_50,(map *)amStack_88);
    std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)avStack_d8);
    FUN_03541d14(afStack_a8,(GAME_ITEM_INFO *)&local_58);
    UIChestAward::setEndCallBack(this_02,(function *)afStack_a8);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_a8);
    FUN_03540004((GAME_ITEM_INFO *)&local_58);
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_c0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_d8);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::NewPVPBattlePassBundleWidget() */

void __thiscall
NewPVPBattlePassBundleWidget::NewPVPBattlePassBundleWidget(NewPVPBattlePassBundleWidget *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [368];
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::TemplateBundleWidget((TemplateBundleWidget *)this);
  *(undefined4 *)(this + 0x118) = 2;
  *(undefined ***)this = &PTR_GetClass_06654530;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06654898;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyExp);
  local_2c0 = local_2a0;
  local_2d0 = local_2b0;
  uStack_2c8 = uStack_2a8;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPBattlePassBundleWidget,void(NewPVPBattlePassBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::NewPVPBattlePassBuyBundle,&local_2d0);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
  puVar1 = gMessageRouter;
  if ((cVar2 != '\0') && (4 < local_90)) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnExtrarewards);
    local_2e0 = local_288;
    local_2f0 = local_298;
    uStack_2e8 = uStack_290;
    MessageRouter::
    Subscribe<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int,Sexy::CBMemberTranslatorX<NewPVPBattlePassBundleWidget,void(NewPVPBattlePassBundleWidget::*)(std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int)>>
              ((MessageRouter *)puVar1,Message::NewPVPBattlePassExtrarewards,&local_2f0);
  }
  NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
NewPVPBattlePassBundleWidget::DrawAll
          (NewPVPBattlePassBundleWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Image *pIVar8;
  undefined8 uVar9;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string *extraout_x1;
  undefined1 auStack_2c8 [8];
  int local_2c0;
  int local_2bc;
  int local_2b0;
  int local_2ac;
  Insets aIStack_2a0 [16];
  Sexy aSStack_290 [16];
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [368];
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5af8;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar4 = *(int *)(this + 0x50);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5af8);
  iVar5 = *(int *)(lVar7 + 0x38);
  iVar2 = FUN_0353ba6c(0xe6);
  iVar6 = *(int *)(*(long *)(this + 0x108) + 0x3c);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5af8);
  iVar3 = FUN_0353ba6c(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_2c0,iVar4 - iVar5,iVar2 + iVar6 / 2,*(int *)(lVar7 + 0x38),iVar3);
  iVar4 = *(int *)(this + 0x50);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5928);
  iVar5 = *(int *)(lVar7 + 0x38);
  iVar2 = FUN_0353ba6c(0x46);
  iVar6 = *(int *)(*(long *)(this + 0x108) + 0x3c);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5928);
  iVar3 = FUN_0353ba6c(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_2b0,iVar4 - iVar5,iVar2 + iVar6 / 2,*(int *)(lVar7 + 0x38),iVar3);
  iVar4 = *(int *)(this + 0xe0);
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5978;
    }
    else if (iVar4 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5678;
    }
    else {
      if (iVar4 != 4) goto joined_r0x035481bc;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa59c8;
    }
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar4 = FUN_0353ba6c(10);
  Sexy::Graphics::DrawImage(param_2,pIVar8,local_2c0,local_2bc - iVar4);
  iVar4 = *(int *)(this + 0xe0);
joined_r0x035481bc:
  if (2 < iVar4) {
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
    if ((cVar1 != '\0') && (4 < local_90)) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5928);
      iVar4 = FUN_0353ba6c(0x32);
      iVar5 = FUN_0353ba6c(0x1e);
      iVar6 = FUN_0353ba6c(100);
      Sexy::Graphics::DrawImage(param_2,pIVar8,local_2b0 + iVar4,local_2ac + iVar5,iVar6,iVar6);
      Sexy::StrFormat("x%d",aSStack_290,(ulong)(*(int *)(this + 0xe0) - 2));
      Sexy::ToSexyString(aSStack_290,extraout_x1);
      std::string::~string((string *)aSStack_290);
      iVar4 = *(int *)(this + 0x50);
      iVar5 = FUN_0353ba6c(0x32);
      iVar6 = FUN_0353ba6c(10);
      Sexy::Insets::Insets
                (aIStack_2a0,iVar4 / 2 + iVar5,*(int *)(this + 0x54) / 2 - iVar6,iVar4 / 2,iVar5);
      uVar9 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      Sexy::Color::Color((Color *)aSStack_290,4);
      WriteWordInRect(param_2,auStack_2c8,aIStack_2a0,uVar9,aSStack_290,3,1);
      FUN_05476c50(auStack_2c8);
    }
    NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
    ActiveItem::~ActiveItem(aAStack_280);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::ShowChest() */

void NewPVPBattlePassBundleWidget::ShowChest(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  Network_NewPVPShopData *pNVar1;
  UINewPVPShopChestDetail *this_00;
  long lVar2;
  Network_NewPVPShopData aNStack_38 [24];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<NewPVPShopMgr>::GetInstancePtr();
  pNVar1 = (Network_NewPVPShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this);
  Network_NewPVPShopData::Network_NewPVPShopData(aNStack_38,pNVar1);
  this_00 = (UINewPVPShopChestDetail *)UINewPVPShopChestDetail::create(true);
  lVar2 = FUN_0353a530(local_20);
  UINewPVPShopChestDetail::Init(this_00,(vector *)(lVar2 + 0x18),(vector *)(lVar2 + 0x30));
  Network_NewPVPShopData::~Network_NewPVPShopData(aNStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPBattlePassBundleWidget::ButtonDepress(int) */

void __thiscall
NewPVPBattlePassBundleWidget::ButtonDepress(NewPVPBattlePassBundleWidget *this,int param_1)

{
  if (param_1 != 600) {
    if (param_1 == 0x56c4) {
      (**(code **)(*(long *)this + 0x350))();
    }
    return;
  }
  ShowChest();
  return;
}


/* non-virtual thunk to NewPVPBattlePassBundleWidget::ButtonDepress(int) */

void __thiscall
NewPVPBattlePassBundleWidget::ButtonDepress(NewPVPBattlePassBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassBundleWidget::Init(int) */

void __thiscall NewPVPBattlePassBundleWidget::Init(NewPVPBattlePassBundleWidget *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  PVZ2UIButton *pPVar8;
  long lVar9;
  undefined1 auStack_2d8 [8];
  wstring awStack_2d0 [8];
  wstring awStack_2c8 [8];
  int local_2c0 [2];
  string asStack_2b8 [56];
  ActiveItem aAStack_280 [128];
  string asStack_200 [368];
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  this[0x59] = (NewPVPBattlePassBundleWidget)0x0;
  FUN_05476574(awStack_2d0);
  iVar3 = *(int *)(this + 0xe0);
  if (iVar3 == 0) {
    FUN_05478178((wstring *)local_2c0,L"[SECRET_BUY_STR]",awStack_2c8);
    TodReplaceNumberString((wstring *)local_2c0,L"{NUMBER}",6);
    TodStringTranslate((wstring *)asStack_2b8);
    FUN_054766c8(awStack_2d0,asStack_200);
    FUN_05476c50(asStack_200);
    FUN_05476c50((wstring *)asStack_2b8);
    FUN_05476c50((wstring *)local_2c0);
    nop();
    *(undefined4 *)(this + 0x118) = 2;
  }
  else if (iVar3 == 1) {
    FUN_05478178((wstring *)local_2c0,L"[SECRET_BUY_STR]",awStack_2c8);
    TodReplaceNumberString((wstring *)local_2c0,L"{NUMBER}",8);
    TodStringTranslate((wstring *)asStack_2b8);
    FUN_054766c8(awStack_2d0,asStack_200);
    FUN_05476c50(asStack_200);
    FUN_05476c50((wstring *)asStack_2b8);
    FUN_05476c50((wstring *)local_2c0);
    nop();
    *(undefined4 *)(this + 0x118) = 4;
  }
  else if (iVar3 == 2) {
    FUN_05478178((wstring *)local_2c0,L"[SECRET_BUY_STR]",awStack_2c8);
    TodReplaceNumberString((wstring *)local_2c0,L"{NUMBER}",0x12);
    TodStringTranslate((wstring *)asStack_2b8);
    FUN_054766c8(awStack_2d0,asStack_200);
    FUN_05476c50(asStack_200);
    FUN_05476c50((wstring *)asStack_2b8);
    FUN_05476c50((wstring *)local_2c0);
    nop();
    *(undefined4 *)(this + 0x118) = 10;
  }
  else if (iVar3 == 3) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    NewPVPBattlePassData::NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)asStack_200);
    if (cVar2 != '\0') {
      if (4 < local_90) {
        FUN_05478178((wstring *)local_2c0,&DAT_056f11a8,awStack_2c8);
        Sexy::Color::Color((Color *)asStack_2b8,1);
        pPVar8 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar8,600,(ButtonListener *)(this + 0xd8),(wstring *)local_2c0,
                   (Color *)asStack_2b8);
        FUN_05476c50((wstring *)local_2c0);
        nop();
        iVar4 = FUN_0353ba6c(0x3c);
        iVar3 = *(int *)(this + 0x50);
        iVar5 = FUN_0353ba6c(0xa0);
        iVar1 = *(int *)(this + 0x54);
        uVar6 = FUN_0353ba6c(0x1c);
        (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,iVar4 + iVar3 / 2,iVar1 - iVar5,uVar6,uVar6);
        lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa58d0);
        uVar6 = FUN_0353ba6c(0x1c);
        *(undefined4 *)(lVar9 + 0x3c) = uVar6;
        lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa58d0);
        uVar6 = FUN_0353ba6c(0x1c);
        *(undefined4 *)(lVar9 + 0x38) = uVar6;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_2b8,&DAT_06aa58d0,1);
        PVZ2UIButton::AddImage(pPVar8,(Color *)asStack_2b8,0);
        (**(code **)(*(long *)this + 0x60))(this,pPVar8);
      }
    }
    FUN_05478178(awStack_2c8,L"[SECRET_BUY_STR]",auStack_2d8);
    TodReplaceNumberString(awStack_2c8,L"{NUMBER}",0x2d);
    TodStringTranslate((wstring *)local_2c0);
    FUN_054766c8(awStack_2d0,asStack_2b8);
    FUN_05476c50(asStack_2b8);
    FUN_05476c50((wstring *)local_2c0);
    FUN_05476c50(awStack_2c8);
    nop();
    *(undefined4 *)(this + 0x118) = 0x1e;
    NewPVPBattlePassData::~NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
    ActiveItem::~ActiveItem(aAStack_280);
  }
  else if (iVar3 == 4) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    NewPVPBattlePassData::NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)asStack_200);
    if (cVar2 != '\0') {
      if (4 < local_90) {
        FUN_05478178((wstring *)local_2c0,&DAT_056f11a8,awStack_2c8);
        Sexy::Color::Color((Color *)asStack_2b8,1);
        pPVar8 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar8,600,(ButtonListener *)(this + 0xd8),(wstring *)local_2c0,
                   (Color *)asStack_2b8);
        FUN_05476c50((wstring *)local_2c0);
        nop();
        iVar4 = FUN_0353ba6c(0x3c);
        iVar3 = *(int *)(this + 0x50);
        iVar5 = FUN_0353ba6c(0xa0);
        iVar1 = *(int *)(this + 0x54);
        uVar6 = FUN_0353ba6c(0x1c);
        (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,iVar4 + iVar3 / 2,iVar1 - iVar5,uVar6,uVar6);
        lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa58d0);
        uVar6 = FUN_0353ba6c(0x1c);
        *(undefined4 *)(lVar9 + 0x3c) = uVar6;
        lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa58d0);
        uVar6 = FUN_0353ba6c(0x1c);
        *(undefined4 *)(lVar9 + 0x38) = uVar6;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_2b8,&DAT_06aa58d0,1);
        PVZ2UIButton::AddImage(pPVar8,(Color *)asStack_2b8,0);
        (**(code **)(*(long *)this + 0x60))(this,pPVar8);
      }
    }
    FUN_05478178(awStack_2c8,L"[SECRET_BUY_STR]",auStack_2d8);
    TodReplaceNumberString(awStack_2c8,L"{NUMBER}",0x4e);
    TodStringTranslate((wstring *)local_2c0);
    FUN_054766c8(awStack_2d0,asStack_2b8);
    FUN_05476c50(asStack_2b8);
    FUN_05476c50((wstring *)local_2c0);
    FUN_05476c50(awStack_2c8);
    nop();
    *(undefined4 *)(this + 0x118) = 0x3c;
    NewPVPBattlePassData::~NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
    ActiveItem::~ActiveItem(aAStack_280);
  }
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_2d0);
  std::string::string(asStack_200,"IMAGE_UI_NEW_PVP_BATTLE_PASS_BUNDLE_BACKGROUND");
  uVar7 = StringHelper::ToImage(asStack_200,false);
  *(undefined8 *)(this + 0xf0) = uVar7;
  std::string::~string(asStack_200);
  nop();
  local_2c0[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_2c0);
  std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_BUNDLE_NAME",asStack_2b8);
  uVar7 = StringHelper::ToImage(asStack_200,false);
  *(undefined8 *)(this + 0xf8) = uVar7;
  std::string::~string(asStack_200);
  std::string::~string(asStack_2b8);
  local_2c0[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_2c0);
  std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_BUNDLE_IMAGE",asStack_2b8);
  uVar7 = StringHelper::ToImage(asStack_200,false);
  *(undefined8 *)(this + 0x100) = uVar7;
  std::string::~string(asStack_200);
  std::string::~string(asStack_2b8);
  local_2c0[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_2c0);
  std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_BUNDLE_DESCRIPTION",asStack_2b8);
  uVar7 = StringHelper::ToImage(asStack_200,false);
  *(undefined8 *)(this + 0x108) = uVar7;
  std::string::~string(asStack_200);
  std::string::~string(asStack_2b8);
  FUN_05476c50(awStack_2d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewPVPBattlePassBundleWidget::OnBuyExp(int) */

void __thiscall
NewPVPBattlePassBundleWidget::OnBuyExp(NewPVPBattlePassBundleWidget *this,int param_1)

{
  int iVar1;
  UINewPVPBattlePass *this_00;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if ((iVar1 + -1 < 1) && (iVar2 != 0)) {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
    iVar2 = *(int *)(this + 0xe0);
  }
  this_00 = (UINewPVPBattlePass *)UISingletonDialog<UINewPVPBattlePass>::GetSingletonPtr();
  UINewPVPBattlePass::BuyBundleIndex(this_00,iVar2);
  return;
}

