// Class: NewPVPShopChestWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopChestWidget::onBuytBtnClicked() */

void __thiscall NewPVPShopChestWidget::onBuytBtnClicked(NewPVPShopChestWidget *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  size_t in_x2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  if (*(int *)(this + 0x1c4) == 3) {
    std::string::append(asStack_10,"com.popcap.ios.chs.PVZ2.DuelChest3",in_x2);
  }
  else if (*(int *)(this + 0x1c4) == 4) {
    std::string::append(asStack_10,"com.popcap.ios.chs.PVZ2.DuelChest4",in_x2);
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPShopChestWidget::NewPVPShopChestWidget(int) */

void __thiscall
NewPVPShopChestWidget::NewPVPShopChestWidget(NewPVPShopChestWidget *this,int param_1)

{
  NewPVPShopCommonWidget::NewPVPShopCommonWidget((NewPVPShopCommonWidget *)this,param_1);
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined ***)this = &PTR_GetClass_06657cb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  return;
}


/* NewPVPShopChestWidget::~NewPVPShopChestWidget() */

void __thiscall NewPVPShopChestWidget::~NewPVPShopChestWidget(NewPVPShopChestWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06657cb0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1e0));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x1c8));
  NewPVPShopCommonWidget::~NewPVPShopCommonWidget((NewPVPShopCommonWidget *)this);
  return;
}


/* NewPVPShopChestWidget::~NewPVPShopChestWidget() */

void __thiscall NewPVPShopChestWidget::~NewPVPShopChestWidget(NewPVPShopChestWidget *this)

{
  ~NewPVPShopChestWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopChestWidget::setChestInfo(int, std::vector<int, std::allocator<int> >, std::vector<int,
   std::allocator<int> >) */

void __thiscall
NewPVPShopChestWidget::setChestInfo
          (NewPVPShopChestWidget *this,undefined4 param_1,vector *param_3,vector *param_4)

{
  undefined8 uVar1;
  string *extraout_x1;
  string asStack_70 [8];
  string asStack_68 [8];
  Sexy aSStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate1<CommonRewardItemData_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x1c4) = param_1;
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1e0),param_3);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1f8),param_4);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x1c4));
  std::operator+("[PRODUCT_NEW_PVP_CHEST_",asStack_70);
  std::operator+(asStack_68,"]");
  Sexy::ToSexyString(aSStack_60,extraout_x1);
  TodStringTranslate(awStack_58);
  FUN_054766c8(this + 0x100,asStack_50);
  FUN_05476c50(asStack_50);
  FUN_05476c50(awStack_58);
  std::string::~string((string *)aSStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x1c4));
  std::operator+("IMAGE_UI_NEW_PVP_SHOP_CHEST_",(string *)awStack_58);
  uVar1 = StringHelper::ToImage(asStack_50,true);
  *(undefined8 *)(this + 0x108) = uVar1;
  std::string::~string(asStack_50);
  std::string::~string((string *)awStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,showPrizePool);
  Sexy::Delegate1<CommonRewardItemData_const&>::
  Delegate1<NewPVPShopChestWidget,void(NewPVPShopChestWidget::*)(CommonRewardItemData_const&)>
            (aDStack_38,asStack_50);
  UIRiftZombossRewardSelect::SetFunctionOne((UIRiftZombossRewardSelect *)this,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopChestWidget::init() */

void __thiscall NewPVPShopChestWidget::init(NewPVPShopChestWidget *this)

{
  string *extraout_x1;
  string *extraout_x1_00;
  undefined8 uVar1;
  NewPVPShopButton *pNVar2;
  CustomLevelFilterItemWidget *pCVar3;
  undefined1 auStack_80 [8];
  Sexy aSStack_78 [8];
  wstring awStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPShopCommonWidget::init((NewPVPShopCommonWidget *)this);
  FUN_03550354(*(long *)(this + 0x1b0) + 0x328,0);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  Sexy::ToSexyString(aSStack_78,extraout_x1);
  std::string::string(asStack_68," ");
  Sexy::ToSexyString((Sexy *)asStack_68,extraout_x1_00);
  std::operator+(awStack_70,awStack_60);
  TodStringTranslate(L"[GEM_BUY_RMB]");
  std::operator+(awStack_58,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_60);
  std::string::~string(asStack_68);
  nop();
  FUN_05476c50(awStack_70);
  std::string::~string((string *)aSStack_78);
  uVar1 = *(undefined8 *)(this + 0x1b0);
  FUN_05477b24(aIStack_50,auStack_80);
  PVZ2UIImageButton::SetTitle(uVar1,aIStack_50);
  FUN_05476c50(aIStack_50);
  pNVar2 = *(NewPVPShopButton **)(this + 0x1b0);
  Sexy::Insets::Insets(aIStack_50,0,0,*(int *)(pNVar2 + 0x50),*(int *)(pNVar2 + 0x54));
  NewPVPShopButton::SetAmountStrRect(pNVar2,aIStack_50);
  pCVar3 = *(CustomLevelFilterItemWidget **)(this + 0x1b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuytBtnClicked);
  Sexy::Delegate0::Delegate0<NewPVPShopChestWidget,void(NewPVPShopChestWidget::*)()>
            (aDStack_38,aIStack_50);
  CustomLevelFilterItemWidget::SetClickFunc(pCVar3,aDStack_38);
  FUN_0355035c(*(long *)(this + 0x1b0) + 0x338,*(undefined4 *)(this + 0x1c4));
  FUN_05476c50(auStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPShopChestWidget::showPrizePool(CommonRewardItemData const&) */

void NewPVPShopChestWidget::showPrizePool(CommonRewardItemData *param_1)

{
  UINewPVPShopChestDetail *this;
  
  this = (UINewPVPShopChestDetail *)UINewPVPShopChestDetail::create(true);
  UINewPVPShopChestDetail::Init(this,(vector *)(param_1 + 0x1e0),(vector *)(param_1 + 0x1f8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPShopChestWidget::Draw(Sexy::Graphics*) */

void __thiscall NewPVPShopChestWidget::Draw(NewPVPShopChestWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPShopCommonWidget::Draw((NewPVPShopCommonWidget *)this,param_1);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  std::string::string(asStack_20,"IMAGE_UI_GACHADETAIL_CHECK");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_20,true);
  std::string::~string(asStack_20);
  nop();
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = (iVar3 << 1) / 3;
  local_10 = iVar2;
  local_c = iVar2;
  iVar3 = FUN_03551df0(0x19);
  iVar3 = (iVar1 - iVar2) - iVar3;
  local_18 = iVar3;
  local_14 = FUN_03551df0(0x1e);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar3,local_14,iVar2,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

