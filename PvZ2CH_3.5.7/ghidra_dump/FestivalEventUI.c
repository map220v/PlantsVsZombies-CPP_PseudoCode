// Class: FestivalEventUI


/* FestivalEventUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void FestivalEventUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalEventUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall FestivalEventUI::ScrollTargetReached(FestivalEventUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* FestivalEventUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void FestivalEventUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FestivalEventUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
FestivalEventUI::ScrollTargetInterrupted(FestivalEventUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::GetLayoutName() */

void __thiscall FestivalEventUI::GetLayoutName(FestivalEventUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"FestivalEventUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalEventUI::GetFontRect() */

Insets * FestivalEventUI::GetFontRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x1d8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::FestivalEventUI() */

void __thiscall FestivalEventUI::FestivalEventUI(FestivalEventUI *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalEventUI>::UISingletonDialog((UISingletonDialog<FestivalEventUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined ***)this = &PTR_GetClass_0671c8a0;
  *(undefined **)(this + 0xd8) = &DAT_0671cc08;
  *(undefined ***)(this + 0x138) = &PTR__FestivalEventUI_0671cc50;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x148));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  *(undefined8 *)(this + 0x1e8) = 0;
  FUN_05476574(this + 0x1f0);
  *(undefined8 *)(this + 0x1f8) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FestivalEventUI,void(FestivalEventUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAwardPlantID);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<FestivalEventUI,void(FestivalEventUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CRChargeRewardPlantID,&local_80);
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::clear((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
           *)(this + 0x148));
  nop();
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::clear((map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
           *)(this + 0x178));
  TodStringTranslate(L"[FESTIVAL_EVENT_TITLE]");
  FUN_054766c8(this + 0x1f0,auStack_40);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::ChangeTabButtonImage(int, Sexy::Image*, Sexy::Image*) */

void __thiscall
FestivalEventUI::ChangeTabButtonImage
          (FestivalEventUI *this,int param_1,Image *param_2,Image *param_3)

{
  bool bVar1;
  long lVar2;
  PVZ2UIButton *this_00;
  undefined8 local_80;
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  while( true ) {
    local_40[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x148));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_80,(rbtree_iterator *)local_40);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_80);
    this_00 = (PVZ2UIButton *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar2 + 8));
    if (*(int *)(this_00 + 0xd4) == param_1) {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,param_2,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,param_3,2);
      PVZ2UIButton::SetRadioStates
                (this_00,aPStack_78,(PVZ2UIImage *)local_40,*(int *)(this + 0x140) == param_1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::~FestivalEventUI() */

void __thiscall FestivalEventUI::~FestivalEventUI(FestivalEventUI *this)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0671c8a0;
  *(undefined **)(this + 0xd8) = &DAT_0671cc08;
  *(undefined ***)(this + 0x138) = &PTR__FestivalEventUI_0671cc50;
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(long **)(lVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 8) + 8))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::clear(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x1f0);
  std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::~vector
            ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0));
  std::vector<FestivalTab,std::allocator<FestivalTab>>::~vector
            ((vector<FestivalTab,std::allocator<FestivalTab>> *)(this + 0x1a8));
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::~map((map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
          *)(this + 0x178));
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<FestivalEventUI>::~UISingletonDialog((UISingletonDialog<FestivalEventUI> *)this)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalEventUI::~FestivalEventUI() */

void __thiscall FestivalEventUI::~FestivalEventUI(FestivalEventUI *this)

{
  ~FestivalEventUI(this + -0x138);
  return;
}


/* FestivalEventUI::~FestivalEventUI() */

void __thiscall FestivalEventUI::~FestivalEventUI(FestivalEventUI *this)

{
  ~FestivalEventUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FestivalEventUI::~FestivalEventUI() */

void __thiscall FestivalEventUI::~FestivalEventUI(FestivalEventUI *this)

{
  ~FestivalEventUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::InitActivityID() */

void __thiscall FestivalEventUI::InitActivityID(FestivalEventUI *this)

{
  map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_2c = 9;
  local_28[0] = 0x2a8f;
  local_8 = ___stack_chk_guard;
  this_00 = (map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
             *)(this + 0x178);
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 6;
  local_28[0] = 0x2a09;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x20;
  local_28[0] = 0x2a13;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 3;
  local_28[0] = 0x29cd;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 5;
  local_28[0] = 0x29e8;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 7;
  local_28[0] = 0x2975;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 8;
  local_28[0] = 0x2a1e;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xd;
  local_28[0] = 0x2a07;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xf;
  local_28[0] = 0x2a44;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x10;
  local_28[0] = 0x2a17;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x11;
  local_28[0] = 0x2a16;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x12;
  local_28[0] = 0x2a24;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x13;
  local_28[0] = 0x2a2c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x14;
  local_28[0] = 0x2a2d;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x15;
  local_28[0] = 0x2a3e;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x16;
  local_28[0] = 0x2a02;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x17;
  local_28[0] = 0x2a3a;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x18;
  local_28[0] = 0x2a1b;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x19;
  local_28[0] = 0x2a32;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1b;
  local_28[0] = 0x2a4f;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1c;
  local_28[0] = 0x2a51;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1d;
  local_28[0] = 0x2a45;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1e;
  local_28[0] = 0x2a59;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1f;
  local_28[0] = 0x2a5c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x21;
  local_28[0] = 0x2a63;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_28[0] = 0x2a66;
  local_2c = 2;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 1;
  local_28[0] = 0x2a6a;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x23;
  local_28[0] = 0x2a6c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x24;
  local_28[0] = 0x2a75;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x25;
  local_28[0] = 0x2a80;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_2c = 1;
  local_30 = L'⩓';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  local_30 = L'⩦';
  local_2c = 1;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::SetCurrentTab(int) */

void __thiscall FestivalEventUI::SetCurrentTab(FestivalEventUI *this,int param_1)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30 [2];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  *(int *)(this + 0x140) = param_1;
  local_8 = ___stack_chk_guard;
  local_28 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
    if (!bVar1) break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    if (*piVar2 != *(int *)(this + 0x140)) {
      (**(code **)(**(long **)(piVar2 + 2) + 0x18))(*(long **)(piVar2 + 2),0);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
  }
  plVar3 = (long *)std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[](this_00,(int *)(this + 0x140));
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_00,(int *)(this + 0x140));
    (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,1);
  }
  switch(param_1) {
  case 1:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩪';
    break;
  case 2:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩦';
    break;
  case 3:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧍';
    break;
  case 4:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧣';
    break;
  case 5:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧨';
    break;
  case 6:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨉';
    break;
  case 7:
    BossChallenge::RequestDatas();
    goto switchD_03ad6880_caseD_a;
  case 8:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨞';
    break;
  case 9:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⪏';
    break;
  default:
    goto switchD_03ad6880_caseD_a;
  case 0xb:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨀';
    break;
  case 0xc:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨴';
    break;
  case 0xd:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨇';
    break;
  case 0xe:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨑';
    break;
  case 0xf:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩄';
    break;
  case 0x10:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨗';
    break;
  case 0x11:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨖';
    break;
  case 0x12:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨤';
    break;
  case 0x13:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨬';
    break;
  case 0x14:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨭';
    break;
  case 0x15:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨾';
    break;
  case 0x16:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨂';
    break;
  case 0x17:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨺';
    break;
  case 0x18:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨛';
    break;
  case 0x19:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨲';
    break;
  case 0x1a:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧵';
    break;
  case 0x1b:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩏';
    break;
  case 0x1c:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩑';
    break;
  case 0x1d:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩅';
    break;
  case 0x1e:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩙';
    break;
  case 0x1f:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩜';
    break;
  case 0x20:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨓';
    break;
  case 0x21:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩣';
    break;
  case 0x22:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨏';
    break;
  case 0x23:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩬';
  }
  local_30[1] = 1;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)&local_28);
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
switchD_03ad6880_caseD_a:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::Layout() */

void __thiscall FestivalEventUI::Layout(FestivalEventUI *this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  std::string::string((string *)&local_10,"Pannel");
  iVar7 = 0;
  bVar1 = false;
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x148));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar4 = Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar4 + 8));
    if (*(char *)(lVar4 + 0x6c) == '\0') {
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      if (*(int *)(this + 0x140) == *piVar5) {
        bVar1 = true;
      }
    }
    else {
      *(int *)(lVar4 + 0x4c) = iVar6;
      iVar6 = iVar6 + *(int *)(lVar4 + 0x54);
      if (iVar7 == 0) {
        piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18
                                  );
        iVar7 = *piVar5;
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  *(int *)(lVar3 + 0x54) = iVar6;
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(lVar3 + 0x20),2);
  if (bVar1) {
    SetCurrentTab(this,iVar7);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::ButtonDepress(int) */

void __thiscall FestivalEventUI::ButtonDepress(FestivalEventUI *this,int param_1)

{
  GameStateMgr *pGVar1;
  LawnApp *this_00;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  MiniGameDialogAdaptor *this_01;
  ArcadeMode *pAVar5;
  wchar_t *pwVar6;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  pGVar1 = gGameStateMgr;
  local_8 = ___stack_chk_guard;
  if (param_1 - 1U < 0x25) {
    SetCurrentTab(this,param_1);
    goto LAB_03ad6eb8;
  }
  switch(param_1) {
  case 0x65:
    iVar2 = *(int *)(this + 0x140);
    switch(iVar2) {
    case 8:
      std::string::string((string *)awStack_10,"OpenPlantTreeMain");
      Cpp2Lua((string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      break;
    case 9:
      lVar4 = ArcadePropertySheet::Get();
      this_01 = ::operator_new(0x1c0);
      MiniGameDialogAdaptor::MiniGameDialogAdaptor(this_01);
      pAVar5 = (ArcadeMode *)FUN_03ac2948(*(undefined8 *)(lVar4 + 0x10));
      MiniGameDialogAdaptor::ConfigureForMiniGame(this_01,pAVar5);
      HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_01);
      break;
    default:
      goto switchD_03ad7010_caseD_a;
    case 0xd:
      GameStateMgr::ShowRedPack(gGameStateMgr,0,5,5);
      break;
    case 0x12:
      std::string::string((string *)awStack_10,"SecretGacha");
      GameStateMgr::ShowStore(pGVar1,(string *)awStack_10,5,5);
      std::string::~string((string *)awStack_10);
      nop();
    }
    goto LAB_03ad6eb8;
  case 0x66:
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    goto LAB_03ad6eb8;
  case 0x67:
    std::string::string((string *)awStack_10,"challengeChrismasMedal");
    UIBuyCrystal::create((string *)awStack_10,true);
    std::string::~string((string *)awStack_10);
    nop();
  default:
    iVar2 = *(int *)(this + 0x140);
switchD_03ad7010_caseD_a:
    if (iVar2 - 1U < 0x25) {
      puVar3 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)(this + 0x140));
      (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_1);
    }
    goto LAB_03ad6eb8;
  case 0x6e:
    pwVar6 = L"Festival2019_Cracker";
    break;
  case 0x6f:
    pwVar6 = L"Festival2019_RedPacket";
  }
  FUN_05478178(awStack_10,pwVar6,auStack_18);
  LawnApp::ShowProbabilityDialog(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  nop();
LAB_03ad6eb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalEventUI::ButtonDepress(int) */

void __thiscall FestivalEventUI::ButtonDepress(FestivalEventUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::onNotifyAwardPlantID(bool) */

void __thiscall FestivalEventUI::onNotifyAwardPlantID(FestivalEventUI *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  long lVar4;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  wstring awStack_a8 [8];
  wstring awStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if (((cVar1 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIChagreDouble>::GetSingletonPtr(), lVar4 == 0)) {
      UISingletonDialog<UIChagreDouble>::ShowDialog();
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    FUN_05478178(awStack_a8,L"[REVIVE_TIP]",auStack_b8);
    FUN_05478178(awStack_a0,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_b0);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_a8,awStack_a0);
    FUN_05476c50(awStack_a0);
    nop();
    FUN_05476c50(awStack_a8);
    nop();
    FUN_05478178(awStack_a8,L"[DIALOG_STRING_OK]",auStack_b0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>((Delegate0 *)aAStack_88,awStack_a0);
    PVZ2UIDialog::AddButton(pPVar3,awStack_a8,(Delegate0 *)aAStack_88,param_1);
    FUN_05476c50(awStack_a8);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::CheckActivityOpenAtLeastOne() */

void FestivalEventUI::CheckActivityOpenAtLeastOne(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  local_a8._0_4_ = 0x2a8f;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a09;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a13;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x29e8;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2975;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a07;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a44;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a2c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a2d;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a3e;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a02;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a3a;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a1b;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a32;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a4f;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a51;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a45;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a66;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a75;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a80;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8 = CONCAT44(local_a8._4_4_,0x2a82);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_a0);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!(bool)bVar2) {
LAB_03ada3b8:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_a0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar4 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    Sexy::OutputDebugStrF
              ((wchar_t *)"CheckActivityOpenAtLeastOne id:%d op:%d",(ulong)*puVar4,(ulong)local_70);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      ActiveItem::~ActiveItem(aAStack_88);
      bVar2 = local_70;
      goto LAB_03ada3b8;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::InitView() */

void __thiscall FestivalEventUI::InitView(FestivalEventUI *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  PVZ2UIButton *pPVar7;
  DefaultTabUI *pDVar8;
  undefined8 *puVar9;
  FestivalGameTabUI *pFVar10;
  CrackerTabUI_PlantTree *this_00;
  CrackerTabUI *this_01;
  FestivalRechargeTabUI *this_02;
  OneYuanTabUI *this_03;
  RedPacketTab *this_04;
  FestivalLotteryTab *this_05;
  SecretGachaTab *this_06;
  CShopTabUI *this_07;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  SalesProgressBar *this_08;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  PVZ2UIScrollingWidget *this_09;
  FestivalEventUI *pFVar18;
  long *plVar19;
  undefined4 *puVar20;
  FestivalEventUI *pFVar21;
  ulong uVar22;
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_10;
  undefined8 local_168;
  PVZ2UIButton *local_160;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_158 [24];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8 [7];
  undefined8 local_c0;
  undefined8 uStack_b8;
  string asStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_158);
  std::string::string((string *)local_f8,"Btn_Goto");
  UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_f8);
  PVZ2UIButton::getContentsRect();
  *(undefined8 *)(this + 0x1d8) = local_c0;
  *(undefined8 *)(this + 0x1e0) = uStack_b8;
  std::string::~string((string *)local_f8);
  nop();
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  std::string::string((string *)&local_c0,"Btn_Goto");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  nop();
  (**(code **)(*(long *)pPVar7 + 0x1a8))
            (pPVar7,(iVar3 - *(int *)(pPVar7 + 0x50)) / 2,*(undefined4 *)(pPVar7 + 0x4c));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03ac12f8(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    NetworkFestivalEntryInfo::NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_c0);
    if (cVar1 != '\0') {
      bVar2 = std::operator!=(asStack_98,"");
      if (bVar2) {
        Sexy::ToWString(asStack_98);
        cVar1 = TodStringListExists((wstring *)local_f8);
        FUN_05476c50((string *)local_f8);
        if (cVar1 != '\0') {
          Sexy::ToWString(asStack_98);
          TodStringTranslate((wstring *)&local_110);
          FUN_054766c8(this + 0x1f0,(string *)local_f8);
          FUN_05476c50((string *)local_f8);
          FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_110);
        }
      }
    }
    NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,1);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_1");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 1) {
      *(undefined4 *)(this + 0x140) = 2;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,1,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,1);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           *)(this + 0x148),(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  this_10 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,2);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_2");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 2) {
      *(undefined4 *)(this + 0x140) = 3;
    }
  }
  else {
    pFVar10 = ::operator_new(0x38);
    FestivalGameTabUI::FestivalGameTabUI(pFVar10,2,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,2);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pFVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pFVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,3);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_3");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 3) {
      *(undefined4 *)(this + 0x140) = 4;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,3,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,3);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,4);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_4");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 4) {
      *(undefined4 *)(this + 0x140) = 5;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,4,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,4);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,5);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_5");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 5) {
      *(undefined4 *)(this + 0x140) = 7;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,5,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,5);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,6);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_6");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 6) {
      *(undefined4 *)(this + 0x140) = 0x22;
    }
  }
  else {
    pFVar10 = ::operator_new(0x38);
    FestivalGameTabUI::FestivalGameTabUI(pFVar10,6,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,6);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pFVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pFVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,7);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_7");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 7) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,7,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,7);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,8);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_8");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 8) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    this_00 = ::operator_new(0x50);
    CrackerTabUI_PlantTree::CrackerTabUI_PlantTree(this_00,8,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,8);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_00;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_00);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,9);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_9");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 9) {
      *(undefined4 *)(this + 0x140) = 0xb;
    }
  }
  else {
    this_01 = ::operator_new(0x50);
    CrackerTabUI::CrackerTabUI(this_01,9,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,9);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_01;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,10);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_10");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 10) {
      *(undefined4 *)(this + 0x140) = 0xb;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,10,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,10);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0xb);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_11");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xb) {
      *(undefined4 *)(this + 0x140) = 0xc;
    }
  }
  else {
    this_02 = ::operator_new(0x38);
    FestivalRechargeTabUI::FestivalRechargeTabUI(this_02,0xb,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xb);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_02;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_02);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0xc);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_12");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xc) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0xc,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0xd);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_13");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xd) {
      *(undefined4 *)(this + 0x140) = 0xe;
    }
  }
  else {
    this_03 = ::operator_new(0x58);
    OneYuanTabUI::OneYuanTabUI(this_03,0xd,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xd);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_03;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_03);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0xe);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_14");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xe) {
      *(undefined4 *)(this + 0x140) = 0xf;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0xe,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xe);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0xf);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_15");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xf) {
      *(undefined4 *)(this + 0x140) = 0x10;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0xf,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xf);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x10);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_16");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x10) {
      *(undefined4 *)(this + 0x140) = 0x11;
    }
  }
  else {
    this_04 = ::operator_new(0x70);
    RedPacketTab::RedPacketTab(this_04,0x10,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x10);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_04;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_04);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x11);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_17");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x11) {
      *(undefined4 *)(this + 0x140) = 0x12;
    }
  }
  else {
    this_05 = ::operator_new(0x78);
    FestivalLotteryTab::FestivalLotteryTab(this_05,0x11,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x11);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_05;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_05);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x12);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_18");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x12) {
      *(undefined4 *)(this + 0x140) = 0x13;
    }
  }
  else {
    this_06 = ::operator_new(0x30);
    SecretGachaTab::SecretGachaTab(this_06,0x12,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x12);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_06;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_06);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x13);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_19");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x13) {
      *(undefined4 *)(this + 0x140) = 0x14;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x13,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x13);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x14);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_20");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x14) {
      *(undefined4 *)(this + 0x140) = 0x15;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x14,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x14);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x15);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_21");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x15) {
      *(undefined4 *)(this + 0x140) = 0x16;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x15,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x15);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x16);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_22");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x16) {
      *(undefined4 *)(this + 0x140) = 0x17;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x16,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x16);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x17);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_23");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x17) {
      *(undefined4 *)(this + 0x140) = 0x18;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x17,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x17);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x18);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_24");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x18) {
      *(undefined4 *)(this + 0x140) = 0x19;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x18,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x18);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x19);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_25");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x19) {
      *(undefined4 *)(this + 0x140) = 0x1a;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x19,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x19);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1a);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_26");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1a) {
      *(undefined4 *)(this + 0x140) = 0x1b;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1a,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1a);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1b);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_27");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1b) {
      *(undefined4 *)(this + 0x140) = 0x1c;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1b,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1b);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1c);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_28");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1c) {
      *(undefined4 *)(this + 0x140) = 0x1d;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1c,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1c);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1d);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_29");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1d) {
      *(undefined4 *)(this + 0x140) = 0x1e;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1d,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1d);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1e);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_30");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1e) {
      *(undefined4 *)(this + 0x140) = 0x1f;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1e,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1e);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x1f);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_31");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1f) {
      *(undefined4 *)(this + 0x140) = 0x20;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x1f,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1f);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x20);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_32");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x20) {
      *(undefined4 *)(this + 0x140) = 0x21;
    }
  }
  else {
    pFVar10 = ::operator_new(0x38);
    FestivalGameTabUI::FestivalGameTabUI(pFVar10,0x20,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x20);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pFVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pFVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x21);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_33");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x21) {
      *(undefined4 *)(this + 0x140) = 0x22;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x21,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x21);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x22);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_34");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x22) {
      *(undefined4 *)(this + 0x140) = 0x23;
    }
  }
  else {
    this_07 = ::operator_new(0x60);
    CShopTabUI::CShopTabUI(this_07,0x22,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x22);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_07;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_07);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,0x23);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_35");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x23) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar8 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar8,0x23,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x23);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158,
               (PVZ2UIButton **)&local_c0);
  }
  uVar22 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_140);
  local_c0 = CONCAT44(local_c0._4_4_,0x23);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_140,(int *)&local_c0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_128);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_110);
  uVar15 = local_140;
  lVar11 = FUN_03ac1308(local_140,local_138);
  if (lVar11 != 0) {
    do {
      piVar12 = (int *)FUN_03ac1f9c(uVar15,uVar22);
      local_f8[0] = std::
                    map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                    ::find(this_10,piVar12);
      local_c0 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_10);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_f8,(rbtree_iterator *)&local_c0);
      if (bVar2) {
        piVar12 = (int *)FUN_03ac1f9c(local_140,uVar22);
        puVar9 = (undefined8 *)
                 std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::operator[](this_10,piVar12);
        local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)*puVar9);
        std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                  ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_128,
                   (PVZ2UIButton **)&local_c0);
      }
      uVar15 = local_140;
      uVar22 = uVar22 + 1;
      uVar13 = FUN_03ac1308(local_140,local_138);
    } while (uVar22 < uVar13);
  }
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ab8);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_08 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ab8);
  SalesProgressBar::GetCurrentLevel(this_08);
  local_168 = std::
              map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
              ::begin(this_10);
  while( true ) {
    local_c0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_10);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_168,(rbtree_iterator *)&local_c0);
    if (!bVar2) break;
    lVar11 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_168);
    local_160 = (PVZ2UIButton *)
                Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar11 + 8));
    puVar14 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_168)
    ;
    Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_TABBTN%d_N",(string *)&local_c0,(ulong)*puVar14);
    uVar15 = StringHelper::ToImage((string *)&local_c0,false);
    std::string::~string((string *)&local_c0);
    puVar14 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_168)
    ;
    Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_TABBTN%d_D",(string *)&local_c0,(ulong)*puVar14);
    uVar16 = StringHelper::ToImage((string *)&local_c0,false);
    std::string::~string((string *)&local_c0);
    pPVar7 = local_160;
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_f8,uVar15,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c0,uVar16,2);
    PVZ2UIButton::SetRadioStates(pPVar7,(PVZ2UIImage *)local_f8,(PVZ2UIImage *)&local_c0,false);
    pPVar7 = local_160;
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_c0,
               (vector *)avStack_158);
    PVZ2UIButton::LinkRadioButtons(pPVar7,(string *)&local_c0);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_c0);
    FUN_03ac2958(local_160 + 0x2c0);
    uVar15 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_140);
    uVar16 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_140);
    uVar17 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_168);
    local_f8[0] = std::
                  find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                            (uVar15,uVar16,uVar17);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_140);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)local_f8,(__normal_iterator *)&local_c0);
    if (bVar2) {
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_110,&local_160);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_168);
  }
  iVar3 = 0;
  for (uVar22 = 0; uVar15 = local_128, uVar13 = FUN_03ac1fa4(local_128,local_120), uVar22 < uVar13;
      uVar22 = uVar22 + 1) {
    FUN_03ac1fb0(uVar15,uVar22);
    PVZ2UIButton::GetImageNormal();
    uVar4 = PVZ2UIImage::GetWidth((PVZ2UIImage *)&local_c0);
    FUN_03ac1fb0(local_128,uVar22);
    PVZ2UIButton::GetImageNormal();
    iVar5 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_c0);
    puVar9 = (undefined8 *)FUN_03ac1fb0(local_128,uVar22);
    (**(code **)(*(long *)*puVar9 + 0x198))((long *)*puVar9,0,iVar3,uVar4);
    iVar3 = iVar3 + iVar5;
  }
  for (uVar22 = 0; uVar15 = local_110, uVar13 = FUN_03ac1fa4(local_110,local_108), uVar22 < uVar13;
      uVar22 = uVar22 + 1) {
    FUN_03ac1fb0(uVar15,uVar22);
    PVZ2UIButton::GetImageNormal();
    uVar4 = PVZ2UIImage::GetWidth((PVZ2UIImage *)&local_c0);
    FUN_03ac1fb0(local_110,uVar22);
    PVZ2UIButton::GetImageNormal();
    iVar5 = PVZ2UIImage::GetHeight((PVZ2UIImage *)&local_c0);
    puVar9 = (undefined8 *)FUN_03ac1fb0(local_110,uVar22);
    (**(code **)(*(long *)*puVar9 + 0x198))((long *)*puVar9,0,iVar3,uVar4);
    iVar3 = iVar3 + iVar5;
  }
  std::string::string((string *)&local_c0,"Pannel");
  lVar11 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  nop();
  Sexy::Insets::Insets
            ((Insets *)&local_c0,*(int *)(lVar11 + 0x48),*(int *)(lVar11 + 0x4c),
             *(int *)(lVar11 + 0x50),*(int *)(lVar11 + 0x54));
  (**(code **)(**(long **)(lVar11 + 0x20) + 0x68))(*(long **)(lVar11 + 0x20),lVar11);
  *(int *)(lVar11 + 0x54) = iVar3;
  this_09 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_09,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_09 + 0x1a0))(this_09,(string *)&local_c0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_09,2);
  std::string::string((string *)local_f8,"UIImage_Back");
  pFVar18 = (FestivalEventUI *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_f8);
  std::string::~string((string *)local_f8);
  nop();
  pFVar21 = this;
  if (pFVar18 != (FestivalEventUI *)0x0) {
    pFVar21 = pFVar18;
  }
  (**(code **)(*(long *)pFVar21 + 0x60))(pFVar21,this_09);
  (**(code **)(*(long *)this_09 + 0x60))(this_09,lVar11);
  lVar11 = gLawnApp;
  iVar3 = FUN_03ac4800(0x1c);
  (**(code **)(*(long *)pFVar21 + 0x1a8))
            (pFVar21,(*(int *)(lVar11 + 0xd4) - *(int *)(pFVar21 + 0x50)) / 2,
             iVar3 + (*(int *)(lVar11 + 0xd8) - *(int *)(pFVar21 + 0x54)) / 2);
  std::string::string((string *)local_f8,"Btn_Check_RedPack");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_f8);
  std::string::~string((string *)local_f8);
  nop();
  if (pPVar7 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
  }
  std::string::string((string *)local_f8,"Btn_Check");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_f8);
  std::string::~string((string *)local_f8);
  nop();
  if (pPVar7 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
  }
  std::string::string((string *)local_f8,"Tab1_Cost_Back");
  plVar19 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_f8);
  std::string::~string((string *)local_f8);
  nop();
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x158))(plVar19,0);
  }
  for (uVar22 = 0; uVar15 = local_140, uVar13 = FUN_03ac1308(local_140,local_138), uVar22 < uVar13;
      uVar22 = uVar22 + 1) {
    puVar20 = (undefined4 *)FUN_03ac1f9c(uVar15,uVar22);
    cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,*puVar20);
    if (cVar1 != '\0') {
      piVar12 = (int *)FUN_03ac1f9c(local_140,uVar22);
      SetCurrentTab(this,*piVar12);
      goto LAB_03adc440;
    }
  }
  iVar3 = 1;
  do {
    cVar1 = RechargeWelfareUI::HasTargetActivityOpen((RechargeWelfareUI *)this,iVar3);
    if (cVar1 != '\0') {
      SetCurrentTab(this,iVar3);
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x26);
LAB_03adc440:
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_110);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_128);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_140);
  ActiveItem::~ActiveItem(aAStack_88);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_158);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::SyncActivityData(NetworkFestivalEntryInfo const&) */

void __thiscall
FestivalEventUI::SyncActivityData(FestivalEventUI *this,NetworkFestivalEntryInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_03ac1f60(uVar7,*(undefined8 *)(param_1 + 0x10));
    if (uVar5 <= uVar6) break;
    puVar4 = (undefined4 *)FUN_03ac1f90(uVar7,uVar6);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar3 = *(undefined1 *)(puVar4 + 2);
    PVZ1ModeLevelBonusData::PVZ1ModeLevelBonusData((PVZ1ModeLevelBonusData *)&local_18);
    local_18 = uVar1;
    local_14 = uVar2;
    local_10 = uVar3;
    std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::push_back
              ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0),
               (FestivalEntryData *)&local_18);
    uVar6 = uVar6 + 1;
  }
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FestivalEventUI::onNotifyRefreshActivityList(FestivalEventUI *this,bool param_1,set *param_2)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  PVZ2UIDialog *pPVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  Image *pIVar11;
  Image *pIVar12;
  long lVar13;
  DailyAchievement *pDVar14;
  ConsumeAndReceivePage *this_01;
  ProfileMgr *pPVar15;
  PlayerInfo *pPVar16;
  UIConsumeAndReceiveExtra *this_02;
  Dialog *this_03;
  RtObject *this_04;
  UIBossMedalLottery *this_05;
  DFileHandler *this_06;
  StoneLotteryNationalDay *this_07;
  BaseBufferResource *this_08;
  long lVar17;
  DailySignPage *this_09;
  RechargeDailySignActivityManager *pRVar18;
  RechargeDailySignActivityUI *this_10;
  DiscountShopActivityManager *pDVar19;
  DiscountShopActivityUI *this_11;
  ulong uVar20;
  TGALogMgr *pTVar21;
  UIRechargeReward *this_12;
  GenericFestivalPage *this_13;
  UIPlayerSurvey *pUVar22;
  wchar_t *pwVar23;
  undefined4 uVar24;
  size_t __n;
  size_t sVar25;
  Delegate0 *local_288;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined4 local_270 [10];
  undefined8 local_248 [5];
  ActiveItem aAStack_220 [8];
  undefined4 local_218;
  char local_208;
  Delegate0 aDStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  string asStack_178 [88];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  vector avStack_108 [24];
  int local_f0;
  ActivityTypeID aAStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) goto LAB_03ae4a50;
  local_270[0] = 0x2a53;
  local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_270)
  ;
  local_120 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
  if (bVar2) {
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    if (local_208 != '\0') {
      NetworkFestivalEntryInfo::NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_120);
      cVar4 = ActiveItem::GetDataSerialized(aAStack_220,(RtObject *)&local_120);
      pLVar1 = gLawnApp;
      if (cVar4 == '\0') {
        FUN_05478178((string *)local_270,&DAT_056f11a8,auStack_280);
        FUN_05478178((rbtree_iterator *)local_248,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_278);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_270,(wstring *)local_248);
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        FUN_05476c50((string *)local_270);
        nop();
        FUN_05478178((string *)local_270,L"[BUTTON_OK]",auStack_278);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_1a0,(rbtree_iterator *)local_248);
LAB_03ae4fa0:
        local_288 = aDStack_1a0;
        PVZ2UIDialog::AddButton(pPVar7,(string *)local_270,local_288,1);
        FUN_05476c50((string *)local_270);
        nop();
      }
      else {
        lVar13 = FUN_03ac1f60(local_118,CONCAT44(uStack_10c,local_110));
        pLVar1 = gLawnApp;
        if (lVar13 == 0) {
          FUN_05478178((string *)local_270,&DAT_056f11a8,auStack_280);
          FUN_05478178((rbtree_iterator *)local_248,L"[WECHAT_ACTIVITY_EMPTY_CONFIG]",auStack_278);
          pPVar7 = (PVZ2UIDialog *)
                   LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_270,(wstring *)local_248);
          FUN_05476c50((rbtree_iterator *)local_248);
          nop();
          FUN_05476c50((string *)local_270);
          nop();
          FUN_05478178((string *)local_270,L"[BUTTON_OK]",auStack_278);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                    (aDStack_1a0,(rbtree_iterator *)local_248);
          goto LAB_03ae4fa0;
        }
        SyncActivityData(this,(NetworkFestivalEntryInfo *)&local_120);
      }
      NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_120);
    }
    local_270[0] = 0x2a66;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    if (bVar2) {
      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar5);
      cVar4 = FUN_03ac12f8(local_198);
      if ((cVar4 != '\0') && (local_188 != '\0')) {
        LimitedSummonData::LimitedSummonData((LimitedSummonData *)&local_120);
        cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_1a0,(RtObject *)&local_120);
        if (cVar4 != '\0') {
          std::to_string<ActivityTypeID>(aAStack_c);
          std::operator+("IMAGE_UI_FESTIVALCENTER_TABBTN2_N_",(string *)local_270);
          pIVar11 = (Image *)StringHelper::ToImage((string *)local_248,false);
          std::string::~string((string *)local_248);
          std::string::~string((string *)local_270);
          std::to_string<ActivityTypeID>(aAStack_c);
          std::operator+("IMAGE_UI_FESTIVALCENTER_TABBTN2_D_",(string *)local_270);
          pIVar12 = (Image *)StringHelper::ToImage((string *)local_248,false);
          std::string::~string((string *)local_248);
          std::string::~string((string *)local_270);
          if ((pIVar12 != (Image *)0x0) && (pIVar11 != (Image *)0x0)) {
            ChangeTabButtonImage(this,2,pIVar11,pIVar12);
          }
        }
        LimitedSummonData::~LimitedSummonData((LimitedSummonData *)&local_120);
      }
      ActiveItem::~ActiveItem((ActiveItem *)aDStack_1a0);
    }
LAB_03ae4c34:
    ActiveItem::~ActiveItem(aAStack_220);
    goto LAB_03ae4a50;
  }
  local_270[0] = 0x2a09;
  local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_270)
  ;
  local_120 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
  if (bVar2) {
    if (*(int *)(this + 0x140) != 6) {
LAB_03ae4b0c:
      pLVar1 = gLawnApp;
      bVar2 = false;
      FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
      FUN_05478178((LimitedSummonData *)&local_120,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                   (string *)local_270);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
      FUN_05476c50((LimitedSummonData *)&local_120);
      nop();
      FUN_05476c50((rbtree_iterator *)local_248);
      nop();
      FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",(string *)local_270);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                (aDStack_1a0,(LimitedSummonData *)&local_120);
      goto LAB_03ae4bc8;
    }
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    plVar8 = (long *)UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr();
    if (plVar8 == (long *)0x0) {
      UISingletonDialog<UIRenaissanceChallenge>::ShowDialog();
    }
    else {
      (**(code **)(*plVar8 + 0x108))();
    }
    local_120 = CONCAT44(local_120._4_4_,6);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           *)(this + 0x148),(int *)&local_120);
    plVar8 = (long *)*puVar9;
    uVar10 = UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr();
LAB_03ae4e2c:
    (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
  }
  else {
    local_270[0] = 0x2a13;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar3 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    if (bVar3) {
      if (*(int *)(this + 0x140) != 0x20) {
LAB_03ae4d28:
        pLVar1 = gLawnApp;
        FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
        FUN_05478178((LimitedSummonData *)&local_120,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                     (string *)local_270);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
        FUN_05476c50((LimitedSummonData *)&local_120);
        nop();
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",(string *)local_270);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_1a0,(LimitedSummonData *)&local_120);
        goto LAB_03ae4bc8;
      }
      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar5);
      plVar8 = (long *)UISingletonDialog<FestivalGamePage>::GetSingletonPtr();
      if (plVar8 == (long *)0x0) {
        UISingletonDialog<FestivalGamePage>::ShowDialog();
      }
      else {
        (**(code **)(*plVar8 + 0x108))();
      }
      local_120 = CONCAT44(local_120._4_4_,0x20);
      puVar9 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)&local_120);
      plVar8 = (long *)*puVar9;
      uVar10 = UISingletonDialog<FestivalGamePage>::GetSingletonPtr();
      goto LAB_03ae4e2c;
    }
    local_270[0] = 0x2a66;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    if (bVar2) {
      if (*(int *)(this + 0x140) != 2) goto LAB_03ae4b0c;
      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar5);
      plVar8 = (long *)UISingletonDialog<FestivalGamePageLimitedSummon>::GetSingletonPtr();
      if (plVar8 == (long *)0x0) {
        UISingletonDialog<FestivalGamePageLimitedSummon>::ShowDialog();
      }
      else {
        (**(code **)(*plVar8 + 0x108))();
      }
      local_120 = CONCAT44(local_120._4_4_,2);
      puVar9 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)&local_120);
      plVar8 = (long *)*puVar9;
      uVar10 = UISingletonDialog<FestivalGamePageLimitedSummon>::GetSingletonPtr();
      goto LAB_03ae4e2c;
    }
    local_270[0] = 0x2a6a;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    if (bVar2) {
      bVar2 = false;
      if (*(int *)(this + 0x140) != 1) goto LAB_03ae4d28;
      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar5);
      plVar8 = (long *)UISingletonDialog<FestivalGamePageCarnival>::GetSingletonPtr();
      if (plVar8 == (long *)0x0) {
        UISingletonDialog<FestivalGamePageCarnival>::ShowDialog();
      }
      else {
        (**(code **)(*plVar8 + 0x108))();
      }
      local_120 = CONCAT44(local_120._4_4_,1);
      puVar9 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)&local_120);
      plVar8 = (long *)*puVar9;
      uVar10 = UISingletonDialog<FestivalGamePageCarnival>::GetSingletonPtr();
      goto LAB_03ae4e2c;
    }
    local_270[0] = 0x2a6c;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    pLVar1 = gLawnApp;
    if (bVar2) {
      if (*(int *)(this + 0x140) != 0x23) {
        FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
        FUN_05478178((LimitedSummonData *)&local_120,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                     (string *)local_270);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
        FUN_05476c50((LimitedSummonData *)&local_120);
        nop();
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",(string *)local_270);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_1a0,(LimitedSummonData *)&local_120);
        bVar2 = false;
LAB_03ae4bc8:
        PVZ2UIDialog::AddButton(pPVar7,(rbtree_iterator *)local_248,aDStack_1a0,bVar2);
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        goto LAB_03ae4a50;
      }
      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar5);
      plVar8 = (long *)UISingletonDialog<FestivalGamePageNewYearGoods>::GetSingletonPtr();
      if (plVar8 == (long *)0x0) {
        UISingletonDialog<FestivalGamePageNewYearGoods>::ShowDialog();
      }
      else {
        (**(code **)(*plVar8 + 0x108))();
      }
      local_120 = CONCAT44(local_120._4_4_,0x23);
      puVar9 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)&local_120);
      plVar8 = (long *)*puVar9;
      uVar10 = UISingletonDialog<FestivalGamePageNewYearGoods>::GetSingletonPtr();
      goto LAB_03ae4e2c;
    }
    local_270[0] = 0x2a0f;
    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_270);
    local_120 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
    if (!bVar2) {
      local_270[0] = 0x2975;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      pLVar1 = gLawnApp;
      if (bVar2) {
        if (*(int *)(this + 0x140) == 7) {
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          plVar8 = (long *)UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr();
          if (plVar8 == (long *)0x0) {
            UISingletonDialog<FestivalGamePageExtra>::ShowDialog();
          }
          else {
            (**(code **)(*plVar8 + 0x108))();
          }
          local_120 = CONCAT44(local_120._4_4_,7);
          puVar9 = (undefined8 *)
                   std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 *)(this + 0x148),(int *)&local_120);
          plVar8 = (long *)*puVar9;
          uVar10 = UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr();
          goto LAB_03ae4e2c;
        }
        FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
        FUN_05478178((LimitedSummonData *)&local_120,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                     (string *)local_270);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
        FUN_05476c50((LimitedSummonData *)&local_120);
        nop();
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",(string *)local_270);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_1a0,(LimitedSummonData *)&local_120);
        bVar2 = false;
        goto LAB_03ae4bc8;
      }
      local_270[0] = 0x2a0a;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) goto LAB_03ae4a50;
      local_270[0] = 0x2a63;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_198);
        if ((cVar4 != '\0') && (local_188 != '\0')) {
          if (*(int *)(this + 0x140) != 0x21) goto LAB_03ae573c;
          lVar13 = UISingletonDialog<FestivalGamePageBattleOrder>::GetSingletonPtr();
          if (lVar13 == 0) {
            UISingletonDialog<FestivalGamePageBattleOrder>::ShowDialog();
          }
          local_120 = CONCAT44(local_120._4_4_,0x21);
          puVar9 = (undefined8 *)
                   std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 *)(this + 0x148),(int *)&local_120);
          plVar8 = (long *)*puVar9;
          uVar10 = UISingletonDialog<FestivalGamePageBattleOrder>::GetSingletonPtr();
          goto LAB_03ae4e2c;
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a8f;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_188 != '\0') {
          NetworkAchievementItem::NetworkAchievementItem((NetworkAchievementItem *)&local_120);
          cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_1a0,(RtObject *)&local_120);
          pLVar1 = gLawnApp;
          if (cVar4 == '\0') {
            FUN_05478178((string *)local_270,&DAT_056f11a8,auStack_280);
            FUN_05478178((rbtree_iterator *)local_248,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_278);
            pPVar7 = (PVZ2UIDialog *)
                     LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_270,(wstring *)local_248);
            FUN_05476c50((rbtree_iterator *)local_248);
            nop();
            FUN_05476c50((string *)local_270);
            nop();
            FUN_05478178((string *)local_270,L"[BUTTON_OK]",auStack_278);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
            Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                      ((Delegate0 *)aAStack_220,(rbtree_iterator *)local_248);
            PVZ2UIDialog::AddButton(pPVar7,(string *)local_270,(Delegate0 *)aAStack_220,1);
            FUN_05476c50((string *)local_270);
            nop();
          }
          else {
            this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                       *)(this + 0x148);
            cVar4 = FUN_0547419c(asStack_178);
            if (cVar4 == '\0') {
              uVar6 = StringHelper::ToInt(asStack_178);
              local_248[0] = CONCAT44(local_248[0]._4_4_,9);
              puVar9 = (undefined8 *)
                       std::
                       map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                       ::operator[](this_00,(int *)local_248);
              (**(code **)(*(long *)*puVar9 + 0x80))((long *)*puVar9,uVar6);
            }
            local_248[0] = CONCAT44(local_248[0]._4_4_,9);
            plVar8 = (long *)std::
                             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             ::operator[](this_00,(int *)local_248);
            lVar13 = *plVar8;
            if ((lVar13 == 0) ||
               (cVar4 = FUN_02fd3c78(*(undefined1 *)(lVar13 + 0x38)), cVar4 != '\0')) {
              pDVar14 = (DailyAchievement *)FUN_02fd3c7c(*(undefined8 *)(lVar13 + 0x40));
              if (pDVar14 != (DailyAchievement *)0x0) {
                DailyAchievement::SyncActivityData(pDVar14,(NetworkAchievementItem *)&local_120);
              }
            }
            else {
              pDVar14 = ::operator_new(0x140);
              DailyAchievement::DailyAchievement(pDVar14);
              DailyAchievement::SyncActivityData(pDVar14,(NetworkAchievementItem *)&local_120);
              local_248[0] = CONCAT44(local_248[0]._4_4_,9);
              puVar9 = (undefined8 *)
                       std::
                       map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                       ::operator[](this_00,(int *)local_248);
              (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,pDVar14);
            }
          }
          NetworkAchievementItem::~NetworkAchievementItem((NetworkAchievementItem *)&local_120);
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a07;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_188 != '\0') {
          cVar4 = FUN_0547419c(asStack_178);
          if (cVar4 == '\0') {
            uVar6 = StringHelper::ToInt(asStack_178);
            uVar24 = 0xd;
            goto LAB_03ae5aa8;
          }
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a00;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_188 != '\0') {
          this_01 = (ConsumeAndReceivePage *)
                    UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr();
          if (this_01 == (ConsumeAndReceivePage *)0x0) {
            NetworkConsumeAndReceive::NetworkConsumeAndReceive
                      ((NetworkConsumeAndReceive *)&local_120);
            cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_1a0,(RtObject *)&local_120);
            pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
            if (cVar4 != '\0') {
              PlayerInfo::CheckConsumptionActivityVersion(pPVar16,local_f0);
            }
            UISingletonDialog<ConsumeAndReceivePage>::ShowDialog();
            NetworkConsumeAndReceive::~NetworkConsumeAndReceive
                      ((NetworkConsumeAndReceive *)&local_120);
          }
          else {
            ConsumeAndReceivePage::InitView(this_01);
          }
          local_120 = CONCAT44(local_120._4_4_,0xb);
          puVar9 = (undefined8 *)
                   std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 *)(this + 0x148),(int *)&local_120);
          plVar8 = (long *)*puVar9;
          uVar10 = UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr();
          goto LAB_03ae4e2c;
        }
LAB_03ae5548:
        pLVar1 = gLawnApp;
        FUN_05478178((rbtree_iterator *)local_248,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_278);
        FUN_05478178((LimitedSummonData *)&local_120,L"[NETWORK_NOT_CONNECTED_TEXT]",
                     (string *)local_270);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
        FUN_05476c50((LimitedSummonData *)&local_120);
        nop();
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        pwVar23 = L"[BUTTON_OK]";
LAB_03ae55c8:
        bVar3 = false;
        FUN_05478178((rbtree_iterator *)local_248,pwVar23,(string *)local_270);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  ((Delegate0 *)aAStack_220,(LimitedSummonData *)&local_120);
LAB_03ae5608:
        PVZ2UIDialog::AddButton(pPVar7,(rbtree_iterator *)local_248,aAStack_220,bVar3);
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a11;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        if (local_188 == '\0') goto LAB_03ae5548;
        this_02 = (UIConsumeAndReceiveExtra *)
                  UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr();
        if (this_02 == (UIConsumeAndReceiveExtra *)0x0) {
          UISingletonDialog<UIConsumeAndReceiveExtra>::ShowDialog();
        }
        else {
          UIConsumeAndReceiveExtra::InitView(this_02);
        }
        local_120 = CONCAT44(local_120._4_4_,0xe);
        puVar9 = (undefined8 *)
                 std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                               *)(this + 0x148),(int *)&local_120);
        plVar8 = (long *)*puVar9;
        uVar10 = UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr();
        goto LAB_03ae4e2c;
      }
      local_270[0] = 0x2a34;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_198);
        if ((cVar4 != '\0') && (local_188 != '\0')) {
          plVar8 = (long *)UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr();
          if (plVar8 == (long *)0x0) {
            this_03 = (Dialog *)UISingletonDialog<UILimitLotteryPage>::ShowDialog();
            if (this_03 != (Dialog *)0x0) {
              std::string::string((string *)&local_120,"Background_0");
              this_04 = (RtObject *)UI::Dialog::GetWidget(this_03,(string *)&local_120);
              std::string::~string((string *)&local_120);
              nop();
              if (this_04 != (RtObject *)0x0) {
                this_05 = Sexy::RtObject::Cast<UIBossMedalLottery>(this_04);
                if (this_05 != (UIBossMedalLottery *)0x0) {
                  TenYearRecordInfoPage::SetPageIndex((TenYearRecordInfoPage *)this_05,0xff);
                }
                local_120 = CONCAT44(local_120._4_4_,0xc);
                puVar9 = (undefined8 *)
                         std::
                         map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                         ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                       *)(this + 0x148),(int *)&local_120);
                (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,this_03);
              }
            }
          }
          else {
            (**(code **)(*plVar8 + 0x340))(plVar8,1);
          }
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x29cd;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_198);
        if ((cVar4 != '\0') && (local_188 != '\0')) {
          if (*(long **)(this + 0x1e8) == (long *)0x0) {
            this_07 = ::operator_new(0x370);
            StoneLotteryNationalDay::StoneLotteryNationalDay(this_07);
            *(StoneLotteryNationalDay **)(this + 0x1e8) = this_07;
            pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
            if (pPVar16 != (PlayerInfo *)0x0) {
              lVar13 = FUN_02fd3c74(*(undefined8 *)(pPVar16 + 0xa70));
              this_08 = (BaseBufferResource *)ServerTime::Instance();
              lVar17 = Sexy::BaseBufferResource::GetPtr(this_08);
              cVar4 = LawnApp::isSameDay(gLawnApp,lVar13,lVar17);
              if (cVar4 == '\0') {
                PlayerInfo::ResetLotteryConsumptionGems(pPVar16,true);
              }
            }
            plVar8 = *(long **)(this + 0x1e8);
            if (plVar8 != (long *)0x0) {
              local_120 = CONCAT44(local_120._4_4_,3);
              puVar9 = (undefined8 *)
                       std::
                       map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                       ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     *)(this + 0x148),(int *)&local_120);
              (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,*(undefined8 *)(this + 0x1e8));
              (**(code **)(*plVar8 + 0x338))(plVar8);
            }
          }
          else {
            (**(code **)(**(long **)(this + 0x1e8) + 0x338))();
          }
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x29e3;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_198);
        if ((cVar4 != '\0') && (local_188 != '\0')) {
          Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
          cVar4 = NewYearChargeManager::IsDuringAcivity();
          pLVar1 = gLawnApp;
          if (cVar4 == '\0') {
            FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
            FUN_05478178((LimitedSummonData *)&local_120,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                         (string *)local_270);
            pPVar7 = (PVZ2UIDialog *)
                     LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_248,(wstring *)&local_120);
            FUN_05476c50((LimitedSummonData *)&local_120);
            nop();
            FUN_05476c50((rbtree_iterator *)local_248);
            nop();
            pwVar23 = L"[DIALOG_STRING_OK]";
            goto LAB_03ae55c8;
          }
          Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
          iVar5 = NewYearChargeManager::getCurPlantIDFromServer();
          this_06 = (DFileHandler *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(this_06,iVar5);
          if (*(int *)(this + 0x140) == 4) {
            plVar8 = (long *)UISingletonDialog<WeeklyRechargeRewardPage>::GetSingletonPtr();
            if (plVar8 == (long *)0x0) {
              UISingletonDialog<WeeklyRechargeRewardPage>::ShowDialog();
            }
            else {
              (**(code **)(*plVar8 + 0x108))();
            }
            local_120 = CONCAT44(local_120._4_4_,4);
            puVar9 = (undefined8 *)
                     std::
                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                     ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   *)(this + 0x148),(int *)&local_120);
            plVar8 = (long *)*puVar9;
            uVar10 = UISingletonDialog<WeeklyRechargeRewardPage>::GetSingletonPtr();
            goto LAB_03ae4e2c;
          }
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a44;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_198);
        if ((cVar4 != '\0') && (local_188 != '\0')) {
          this_09 = (DailySignPage *)UISingletonDialog<DailySignPage>::GetSingletonPtr();
          if (this_09 == (DailySignPage *)0x0) {
            UISingletonDialog<DailySignPage>::ShowDialog();
          }
          else {
            DailySignPage::updateUIData(this_09);
          }
          local_120 = CONCAT44(local_120._4_4_,0xf);
          puVar9 = (undefined8 *)
                   std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 *)(this + 0x148),(int *)&local_120);
          plVar8 = (long *)*puVar9;
          uVar10 = UISingletonDialog<DailySignPage>::GetSingletonPtr();
          goto LAB_03ae4e2c;
        }
        goto LAB_03ae4e40;
      }
      local_270[0] = 0x2a2c;
      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_270);
      local_120 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
      if (bVar2) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_218);
        if ((cVar4 != '\0') && (local_208 != '\0')) {
          pRVar18 = (RechargeDailySignActivityManager *)
                    Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
          ActiveItem::ActiveItem((ActiveItem *)aDStack_1a0,aAStack_220);
          RechargeDailySignActivityManager::Init(pRVar18,(ActiveItem *)aDStack_1a0);
          ActiveItem::~ActiveItem((ActiveItem *)aDStack_1a0);
          if (*(int *)(this + 0x140) == 0x13) {
            this_10 = (RechargeDailySignActivityUI *)
                      UISingletonDialog<RechargeDailySignActivityUI>::GetSingletonPtr();
            if (this_10 == (RechargeDailySignActivityUI *)0x0) {
              UISingletonDialog<RechargeDailySignActivityUI>::ShowDialog();
            }
            else {
              RechargeDailySignActivityUI::UpdateUI(this_10);
            }
            local_120 = CONCAT44(local_120._4_4_,0x13);
            puVar9 = (undefined8 *)
                     std::
                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                     ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   *)(this + 0x148),(int *)&local_120);
            plVar8 = (long *)*puVar9;
            uVar10 = UISingletonDialog<RechargeDailySignActivityUI>::GetSingletonPtr();
LAB_03ae6298:
            (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
          }
        }
      }
      else {
        local_270[0] = 0x2a2d;
        local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                  (int *)local_270);
        local_120 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
        bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
        if (!bVar2) {
          local_270[0] = 0x2a3e;
          local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    (int *)local_270);
          local_120 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
          bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
          if (bVar2) {
            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar5);
            cVar4 = FUN_03ac12f8(local_198);
            if (((cVar4 != '\0') && (local_188 != '\0')) && (*(int *)(this + 0x140) == 0x15)) {
              lVar13 = UISingletonDialog<CustomVotingPage>::GetSingletonPtr();
              if (lVar13 == 0) {
                UISingletonDialog<CustomVotingPage>::ShowDialog();
              }
              local_120 = CONCAT44(local_120._4_4_,0x15);
              puVar9 = (undefined8 *)
                       std::
                       map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                       ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     *)(this + 0x148),(int *)&local_120);
              plVar8 = (long *)*puVar9;
              uVar10 = UISingletonDialog<CustomVotingPage>::GetSingletonPtr();
              goto LAB_03ae4e2c;
            }
          }
          else {
            local_270[0] = 0x2a1e;
            local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      (int *)local_270);
            local_120 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
            bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
            if (bVar2) {
              iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar5);
              if (local_188 != '\0') {
                cVar4 = FUN_0547419c(asStack_178);
                if (cVar4 == '\0') {
                  uVar6 = StringHelper::ToInt(asStack_178);
                  uVar24 = 8;
LAB_03ae5aa8:
                  local_120 = CONCAT44(local_120._4_4_,uVar24);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         *)(this + 0x148),(int *)&local_120);
                  (**(code **)(*(long *)*puVar9 + 0x80))((long *)*puVar9,uVar6);
                }
              }
            }
            else {
              local_270[0] = 0x2a24;
              local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        (int *)local_270);
              local_120 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
              bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120);
              if (bVar2) {
                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                ActivityManager::GetActiveItem(iVar5);
                if (local_188 != '\0') {
                  cVar4 = FUN_0547419c(asStack_178);
                  if (cVar4 == '\0') {
                    uVar6 = StringHelper::ToInt(asStack_178);
                    uVar24 = 0x12;
                    goto LAB_03ae5aa8;
                  }
                }
              }
              else {
                local_270[0] = 0x29e8;
                local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          (int *)local_270);
                local_120 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                bVar3 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120
                                         );
                if (bVar3) {
                  if (*(int *)(this + 0x140) != 5) goto LAB_03ae4d28;
                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar5);
                  plVar8 = (long *)UISingletonDialog<LimitGroupBuyPage>::GetSingletonPtr();
                  if (plVar8 == (long *)0x0) {
                    UISingletonDialog<LimitGroupBuyPage>::ShowDialog();
                  }
                  else {
                    (**(code **)(*plVar8 + 0x108))();
                  }
                  local_120 = CONCAT44(local_120._4_4_,5);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         *)(this + 0x148),(int *)&local_120);
                  plVar8 = (long *)*puVar9;
                  uVar10 = UISingletonDialog<LimitGroupBuyPage>::GetSingletonPtr();
                  goto LAB_03ae4e2c;
                }
                local_270[0] = 0x2a17;
                local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          (int *)local_270);
                local_120 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                bVar2 = eastl::operator!=((rbtree_iterator *)local_248,(rbtree_iterator *)&local_120
                                         );
                sVar25 = (size_t)bVar2;
                if (bVar2) {
                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar5);
                  if (local_188 != '\0') {
                    NetworkRedPacketInfo::NetworkRedPacketInfo((NetworkRedPacketInfo *)local_270);
                    cVar4 = ActiveItem::GetDataSerialized
                                      ((ActiveItem *)aDStack_1a0,(RtObject *)local_270);
                    pLVar1 = gLawnApp;
                    if (cVar4 == '\0') {
                      FUN_05478178((rbtree_iterator *)local_248,&DAT_056f11a8,auStack_280);
                      FUN_05478178((LimitedSummonData *)&local_120,L"[WECHAT_ACTIVITY_DATA_ERROR]",
                                   auStack_278);
                      pPVar7 = (PVZ2UIDialog *)
                               LawnApp::ShowPVZ2Dialog
                                         (pLVar1,(wstring *)local_248,(wstring *)&local_120);
                      FUN_05476c50((LimitedSummonData *)&local_120);
                      nop();
                      FUN_05476c50((rbtree_iterator *)local_248);
                      nop();
                      FUN_05478178((rbtree_iterator *)local_248,L"[BUTTON_OK]",auStack_278);
                      Sexy::
                      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                ((Delegate0 *)aAStack_220,(LimitedSummonData *)&local_120);
                      PVZ2UIDialog::AddButton
                                (pPVar7,(rbtree_iterator *)local_248,(Delegate0 *)aAStack_220,1);
                      FUN_05476c50((rbtree_iterator *)local_248);
                      nop();
                    }
                    else {
                      cVar4 = FUN_0547419c(asStack_178);
                      sVar25 = 0;
                      if (cVar4 == '\0') {
                        uVar20 = StringHelper::ToInt(asStack_178);
                        sVar25 = uVar20 & 0xffffffff;
                      }
                      __n = 0x10;
                      local_120 = CONCAT44(local_120._4_4_,0x10);
                      puVar9 = (undefined8 *)
                               std::
                               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                             *)(this + 0x148),(int *)&local_120);
                      if ((NetworkRedPacketInfo *)*puVar9 != (NetworkRedPacketInfo *)0x0) {
                        RedPacketTab::SyncActivityData
                                  ((NetworkRedPacketInfo *)*puVar9,(int)(string *)local_270,
                                   SUB81(sVar25,0));
                        __n = sVar25;
                      }
                      TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)local_248);
                      std::string::append((string *)local_248,"1",__n);
                      pTVar21 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                      TGAArtifactPresentData::TGAArtifactPresentData
                                ((TGAArtifactPresentData *)&local_120,
                                 (TGAArtifactPresentData *)local_248);
                      TGALogMgr::LogFestivalRedPacket(pTVar21,(LimitedSummonData *)&local_120);
                      TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_120);
                      TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_248);
                    }
                    NetworkRedPacketInfo::~NetworkRedPacketInfo((NetworkRedPacketInfo *)local_270);
                  }
                }
                else {
                  local_270[0] = 0x2a16;
                  local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            (int *)local_270);
                  local_120 = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                  bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                            (rbtree_iterator *)&local_120);
                  if (bVar2) {
                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                    ActivityManager::GetActiveItem(iVar5);
                    if (local_188 != '\0') {
                      NetworkLotteryInfo::NetworkLotteryInfo((NetworkLotteryInfo *)local_270);
                      cVar4 = ActiveItem::GetDataSerialized
                                        ((ActiveItem *)aDStack_1a0,(RtObject *)local_270);
                      pLVar1 = gLawnApp;
                      if (cVar4 == '\0') {
                        FUN_05478178((rbtree_iterator *)local_248,&DAT_056f11a8,auStack_280);
                        FUN_05478178((LimitedSummonData *)&local_120,L"[WECHAT_ACTIVITY_DATA_ERROR]"
                                     ,auStack_278);
                        pPVar7 = (PVZ2UIDialog *)
                                 LawnApp::ShowPVZ2Dialog
                                           (pLVar1,(wstring *)local_248,(wstring *)&local_120);
                        FUN_05476c50((LimitedSummonData *)&local_120);
                        nop();
                        FUN_05476c50((rbtree_iterator *)local_248);
                        nop();
                        FUN_05478178((rbtree_iterator *)local_248,L"[BUTTON_OK]",auStack_278);
                        Sexy::
                        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                  ((Delegate0 *)aAStack_220,(LimitedSummonData *)&local_120);
                        PVZ2UIDialog::AddButton
                                  (pPVar7,(rbtree_iterator *)local_248,(Delegate0 *)aAStack_220,1);
                        FUN_05476c50((rbtree_iterator *)local_248);
                        nop();
                      }
                      else {
                        cVar4 = FUN_0547419c(asStack_178);
                        if (cVar4 == '\0') {
                          uVar20 = StringHelper::ToInt(asStack_178);
                          sVar25 = uVar20 & 0xffffffff;
                        }
                        local_120 = CONCAT44(local_120._4_4_,0x11);
                        puVar9 = (undefined8 *)
                                 std::
                                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                               *)(this + 0x148),(int *)&local_120);
                        (**(code **)(*(long *)*puVar9 + 0x60))
                                  ((long *)*puVar9,(string *)local_270,sVar25,local_188);
                        TGAAccumulatedLoginData::TGAAccumulatedLoginData
                                  ((TGAAccumulatedLoginData *)local_248);
                        std::string::append((string *)local_248,"1",sVar25);
                        pTVar21 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
                        InvitationPlayerInfo::InvitationPlayerInfo
                                  ((InvitationPlayerInfo *)&local_120,
                                   (InvitationPlayerInfo *)local_248);
                        TGALogMgr::LogCrack(pTVar21,(LimitedSummonData *)&local_120);
                        TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                                  ((TGAAccumulatedLoginData *)&local_120);
                        TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                                  ((TGAAccumulatedLoginData *)local_248);
                      }
                      NetworkLotteryInfo::~NetworkLotteryInfo((NetworkLotteryInfo *)local_270);
                    }
                  }
                  else {
                    local_270[0] = 0x2a02;
                    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,(int *)local_270);
                    local_120 = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                    bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                              (rbtree_iterator *)&local_120);
                    if (bVar2) {
                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar5);
                      cVar4 = FUN_03ac12f8(local_198);
                      if ((cVar4 != '\0') && (local_188 != '\0')) {
                        if (*(int *)(this + 0x140) == 0x16) {
                          plVar8 = (long *)UISingletonDialog<FestivalGamePageMiniGame>::
                                           GetSingletonPtr();
                          if (plVar8 == (long *)0x0) {
                            UISingletonDialog<FestivalGamePageMiniGame>::ShowDialog();
                          }
                          else {
                            (**(code **)(*plVar8 + 0x108))();
                          }
                          local_120 = CONCAT44(local_120._4_4_,0x16);
                          puVar9 = (undefined8 *)
                                   std::
                                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 *)(this + 0x148),(int *)&local_120);
                          plVar8 = (long *)*puVar9;
                          uVar10 = UISingletonDialog<FestivalGamePageMiniGame>::GetSingletonPtr();
                          goto LAB_03ae4e2c;
                        }
LAB_03ae573c:
                        pLVar1 = gLawnApp;
                        FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",auStack_278);
                        FUN_05478178((LimitedSummonData *)&local_120,
                                     L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",(string *)local_270);
                        pPVar7 = (PVZ2UIDialog *)
                                 LawnApp::ShowPVZ2Dialog
                                           (pLVar1,(wstring *)local_248,(wstring *)&local_120);
                        FUN_05476c50((LimitedSummonData *)&local_120);
                        nop();
                        FUN_05476c50((rbtree_iterator *)local_248);
                        nop();
                        FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",
                                     (string *)local_270);
                        Sexy::
                        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                  ((Delegate0 *)aAStack_220,(LimitedSummonData *)&local_120);
                        bVar3 = false;
                        goto LAB_03ae5608;
                      }
                    }
                    else {
                      local_270[0] = 0x2a3a;
                      local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                               ((set<int,std::less<int>,std::allocator<int>> *)
                                                param_2,(int *)local_270);
                      local_120 = std::
                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_2);
                      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                (rbtree_iterator *)&local_120);
                      if (bVar2) {
                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                        ActivityManager::GetActiveItem(iVar5);
                        cVar4 = FUN_03ac12f8(local_198);
                        if ((cVar4 != '\0') && (local_188 != '\0')) {
                          if (*(int *)(this + 0x140) != 0x17) goto LAB_03ae573c;
                          plVar8 = (long *)UISingletonDialog<FestivalGamePageAnniversaryTreasure>::
                                           GetSingletonPtr();
                          if (plVar8 == (long *)0x0) {
                            UISingletonDialog<FestivalGamePageAnniversaryTreasure>::ShowDialog();
                          }
                          else {
                            (**(code **)(*plVar8 + 0x108))();
                          }
                          local_120 = CONCAT44(local_120._4_4_,0x17);
                          puVar9 = (undefined8 *)
                                   std::
                                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 *)(this + 0x148),(int *)&local_120);
                          plVar8 = (long *)*puVar9;
                          uVar10 = UISingletonDialog<FestivalGamePageAnniversaryTreasure>::
                                   GetSingletonPtr();
                          goto LAB_03ae4e2c;
                        }
                      }
                      else {
                        local_270[0] = 0x2a1b;
                        local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                 ((set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_270);
                        local_120 = std::
                                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_2);
                        bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                  (rbtree_iterator *)&local_120);
                        if (bVar2) {
                          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                          ActivityManager::GetActiveItem(iVar5);
                          cVar4 = FUN_03ac12f8(local_198);
                          if ((cVar4 != '\0') && (local_188 != '\0')) {
                            if (*(int *)(this + 0x140) != 0x18) goto LAB_03ae573c;
                            plVar8 = (long *)UISingletonDialog<FestivalGamePageLuckyBag>::
                                             GetSingletonPtr();
                            if (plVar8 == (long *)0x0) {
                              UISingletonDialog<FestivalGamePageLuckyBag>::ShowDialog();
                            }
                            else {
                              (**(code **)(*plVar8 + 0x108))();
                            }
                            local_120 = CONCAT44(local_120._4_4_,0x18);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                            plVar8 = (long *)*puVar9;
                            uVar10 = UISingletonDialog<FestivalGamePageLuckyBag>::GetSingletonPtr();
                            goto LAB_03ae4e2c;
                          }
                        }
                        else {
                          local_270[0] = 0x2a32;
                          local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                   ((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2,(int *)local_270);
                          local_120 = std::
                                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_2);
                          bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                    (rbtree_iterator *)&local_120);
                          if (bVar2) {
                            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                            ActivityManager::GetActiveItem(iVar5);
                            cVar4 = FUN_03ac12f8(local_198);
                            if ((cVar4 != '\0') && (local_188 != '\0')) {
                              if (*(int *)(this + 0x140) != 0x19) goto LAB_03ae573c;
                              plVar8 = (long *)UISingletonDialog<FestivalGamePageSecretStore>::
                                               GetSingletonPtr();
                              if (plVar8 == (long *)0x0) {
                                UISingletonDialog<FestivalGamePageSecretStore>::ShowDialog();
                              }
                              else {
                                (**(code **)(*plVar8 + 0x108))();
                              }
                              local_120 = CONCAT44(local_120._4_4_,0x19);
                              puVar9 = (undefined8 *)
                                       std::
                                       map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                       ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                              plVar8 = (long *)*puVar9;
                              uVar10 = UISingletonDialog<FestivalGamePageSecretStore>::
                                       GetSingletonPtr();
                              goto LAB_03ae4e2c;
                            }
                          }
                          else {
                            local_270[0] = 0x29f5;
                            local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                     ((set<int,std::less<int>,std::allocator<int>> *
                                                      )param_2,(int *)local_270);
                            local_120 = std::
                                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_2);
                            bVar3 = eastl::operator!=((rbtree_iterator *)local_248,
                                                      (rbtree_iterator *)&local_120);
                            if (bVar3) {
                              iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                              ActivityManager::GetActiveItem(iVar5);
                              cVar4 = FUN_03ac12f8(local_198);
                              if ((cVar4 != '\0') && (local_188 != '\0')) {
                                bVar3 = bVar2;
                                if (*(int *)(this + 0x140) != 0x1a) {
LAB_03ae6cf0:
                                  pLVar1 = gLawnApp;
                                  FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",
                                               auStack_278);
                                  FUN_05478178((LimitedSummonData *)&local_120,
                                               L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",(string *)local_270)
                                  ;
                                  pPVar7 = (PVZ2UIDialog *)
                                           LawnApp::ShowPVZ2Dialog
                                                     (pLVar1,(wstring *)local_248,
                                                      (wstring *)&local_120);
                                  FUN_05476c50((LimitedSummonData *)&local_120);
                                  nop();
                                  FUN_05476c50((rbtree_iterator *)local_248);
                                  nop();
                                  FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",
                                               (string *)local_270);
                                  Sexy::
                                  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                            ((ReceivedDataCallback *)gLawnApp,
                                             LawnApp::KillPVZ2Dialog);
                                  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                            ((Delegate0 *)aAStack_220,
                                             (LimitedSummonData *)&local_120);
                                  goto LAB_03ae5608;
                                }
                                this_12 = (UIRechargeReward *)
                                          UISingletonDialog<UIRechargeReward>::GetSingletonPtr();
                                if (this_12 == (UIRechargeReward *)0x0) {
                                  UISingletonDialog<UIRechargeReward>::ShowDialog();
                                }
                                else {
                                  UIRechargeReward::updateUIData(this_12);
                                }
                                local_120 = CONCAT44(local_120._4_4_,0x1a);
                                puVar9 = (undefined8 *)
                                         std::
                                         map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                                plVar8 = (long *)*puVar9;
                                uVar10 = UISingletonDialog<UIRechargeReward>::GetSingletonPtr();
                                goto LAB_03ae4e2c;
                              }
                            }
                            else {
                              local_270[0] = 0x2a4f;
                              local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                       ((set<int,std::less<int>,std::allocator<int>>
                                                         *)param_2,(int *)local_270);
                              local_120 = std::
                                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)param_2);
                              bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                        (rbtree_iterator *)&local_120);
                              if (bVar2) {
                                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                ActivityManager::GetActiveItem(iVar5);
                                cVar4 = FUN_03ac12f8(local_198);
                                if ((cVar4 != '\0') && (local_188 != '\0')) {
                                  if (*(int *)(this + 0x140) != 0x1b) {
LAB_03ae6e60:
                                    pLVar1 = gLawnApp;
                                    FUN_05478178((rbtree_iterator *)local_248,L"[REVIVE_TIP]",
                                                 auStack_278);
                                    FUN_05478178((LimitedSummonData *)&local_120,
                                                 L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                                                 (string *)local_270);
                                    pPVar7 = (PVZ2UIDialog *)
                                             LawnApp::ShowPVZ2Dialog
                                                       (pLVar1,(wstring *)local_248,
                                                        (wstring *)&local_120);
                                    FUN_05476c50((LimitedSummonData *)&local_120);
                                    nop();
                                    FUN_05476c50((rbtree_iterator *)local_248);
                                    nop();
                                    FUN_05478178((rbtree_iterator *)local_248,L"[DIALOG_STRING_OK]",
                                                 (string *)local_270);
                                    Sexy::
                                    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                              ((ReceivedDataCallback *)gLawnApp,
                                               LawnApp::KillPVZ2Dialog);
                                    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                              ((Delegate0 *)aAStack_220,
                                               (LimitedSummonData *)&local_120);
                                    goto LAB_03ae5608;
                                  }
                                  lVar13 = UISingletonDialog<GenericFestivalPage>::GetSingletonPtr()
                                  ;
                                  if (lVar13 != 0) {
                                    UISingletonDialog<GenericFestivalPage>::CloseDialog();
                                  }
                                  UISingletonDialog<GenericFestivalPage>::ShowDialog();
                                  this_13 = (GenericFestivalPage *)
                                            UISingletonDialog<GenericFestivalPage>::GetSingletonPtr
                                                      ();
                                  GenericFestivalPage::setData(this_13,0x2a4f,false);
                                  local_120 = CONCAT44(local_120._4_4_,0x1b);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                           ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                                  plVar8 = (long *)*puVar9;
                                  uVar10 = UISingletonDialog<GenericFestivalPage>::GetSingletonPtr()
                                  ;
                                  goto LAB_03ae4e2c;
                                }
                              }
                              else {
                                local_270[0] = 0x2a51;
                                local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::
                                               find((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2,(int *)local_270);
                                local_120 = std::
                                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                bVar3 = eastl::operator!=((rbtree_iterator *)local_248,
                                                          (rbtree_iterator *)&local_120);
                                if (bVar3) {
                                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                  ActivityManager::GetActiveItem(iVar5);
                                  cVar4 = FUN_03ac12f8(local_198);
                                  if ((cVar4 != '\0') && (local_188 != '\0')) {
                                    bVar3 = bVar2;
                                    if (*(int *)(this + 0x140) != 0x1c) goto LAB_03ae6cf0;
                                    NetworkPlayerSurvey::NetworkPlayerSurvey
                                              ((NetworkPlayerSurvey *)&local_120);
                                    cVar4 = ActiveItem::GetDataSerialized
                                                      ((ActiveItem *)aDStack_1a0,
                                                       (RtObject *)&local_120);
                                    pLVar1 = gLawnApp;
                                    if (cVar4 == '\0') {
                                      FUN_05478178((string *)local_270,L"[REVIVE_TIP]",auStack_280);
                                      FUN_05478178((rbtree_iterator *)local_248,
                                                   L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_278);
                                      pPVar7 = (PVZ2UIDialog *)
                                               LawnApp::ShowPVZ2Dialog
                                                         (pLVar1,(wstring *)local_270,
                                                          (wstring *)local_248);
                                      FUN_05476c50((rbtree_iterator *)local_248);
                                      nop();
                                      FUN_05476c50((string *)local_270);
                                      nop();
                                      FUN_05478178((string *)local_270,L"[DIALOG_STRING_OK]",
                                                   auStack_278);
                                      Sexy::
                                      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                ((ReceivedDataCallback *)gLawnApp,
                                                 LawnApp::KillPVZ2Dialog);
                                      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                                ((Delegate0 *)aAStack_220,
                                                 (rbtree_iterator *)local_248);
                                      PVZ2UIDialog::AddButton
                                                (pPVar7,(string *)local_270,(Delegate0 *)aAStack_220
                                                 ,0);
                                      FUN_05476c50((string *)local_270);
                                      nop();
                                    }
                                    else {
                                      plVar8 = (long *)UISingletonDialog<UIPlayerSurvey>::
                                                       GetSingletonPtr();
                                      if (plVar8 == (long *)0x0) {
                                        UISingletonDialog<UIPlayerSurvey>::ShowDialog();
                                      }
                                      else {
                                        (**(code **)(*plVar8 + 0x108))();
                                      }
                                      lVar13 = UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
                                      FUN_02fd3c80(lVar13 + 0x178,uStack_10c);
                                      pUVar22 = (UIPlayerSurvey *)
                                                UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr()
                                      ;
                                      std::
                                      vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>
                                      ::vector((vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>
                                                *)local_248,avStack_108);
                                      UIPlayerSurvey::SetQuestionStrList
                                                (pUVar22,(rbtree_iterator *)local_248);
                                      std::
                                      vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>
                                      ::~vector((vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>
                                                 *)local_248);
                                      pUVar22 = (UIPlayerSurvey *)
                                                UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr()
                                      ;
                                      UIPlayerSurvey::InitView(pUVar22);
                                      local_248[0] = CONCAT44(local_248[0]._4_4_,0x1c);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                               ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)local_248);
                                      plVar8 = (long *)*puVar9;
                                      uVar10 = UISingletonDialog<UIPlayerSurvey>::GetSingletonPtr();
                                      (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
                                    }
                                    NetworkPlayerSurvey::~NetworkPlayerSurvey
                                              ((NetworkPlayerSurvey *)&local_120);
                                  }
                                }
                                else {
                                  local_270[0] = 0x2a45;
                                  local_248[0] = std::set<int,std::less<int>,std::allocator<int>>::
                                                 find((set<int,std::less<int>,std::allocator<int>> *
                                                      )param_2,(int *)local_270);
                                  local_120 = std::
                                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                  bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                            (rbtree_iterator *)&local_120);
                                  if (bVar2) {
                                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                    ActivityManager::GetActiveItem(iVar5);
                                    cVar4 = FUN_03ac12f8(local_198);
                                    if ((cVar4 != '\0') && (local_188 != '\0')) {
                                      if (*(int *)(this + 0x140) != 0x1d) goto LAB_03ae6e60;
                                      FightZodiacData::FightZodiacData
                                                ((FightZodiacData *)&local_120);
                                      cVar4 = ActiveItem::GetDataSerialized
                                                        ((ActiveItem *)aDStack_1a0,
                                                         (RtObject *)&local_120);
                                      pLVar1 = gLawnApp;
                                      if (cVar4 == '\0') {
                                        FUN_05478178((string *)local_270,L"[REVIVE_TIP]",auStack_280
                                                    );
                                        FUN_05478178((rbtree_iterator *)local_248,
                                                     L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_278);
                                        pPVar7 = (PVZ2UIDialog *)
                                                 LawnApp::ShowPVZ2Dialog
                                                           (pLVar1,(wstring *)local_270,
                                                            (wstring *)local_248);
                                        FUN_05476c50((rbtree_iterator *)local_248);
                                        nop();
                                        FUN_05476c50((string *)local_270);
                                        nop();
                                        FUN_05478178((string *)local_270,L"[DIALOG_STRING_OK]",
                                                     auStack_278);
                                        Sexy::
                                        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                  ((ReceivedDataCallback *)gLawnApp,
                                                   LawnApp::KillPVZ2Dialog);
                                        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                                  ((Delegate0 *)aAStack_220,
                                                   (rbtree_iterator *)local_248);
                                        PVZ2UIDialog::AddButton
                                                  (pPVar7,(string *)local_270,
                                                   (Delegate0 *)aAStack_220,0);
                                        FUN_05476c50((string *)local_270);
                                        nop();
                                      }
                                      else {
                                        plVar8 = (long *)
                                                  UISingletonDialog<FestivalGamePageFightZodiac>::
                                                  GetSingletonPtr();
                                        if (plVar8 == (long *)0x0) {
                                          UISingletonDialog<FestivalGamePageFightZodiac>::ShowDialog
                                                    ();
                                        }
                                        else {
                                          (**(code **)(*plVar8 + 0x108))();
                                        }
                                        local_248[0] = CONCAT44(local_248[0]._4_4_,0x1d);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)local_248);
                                        plVar8 = (long *)*puVar9;
                                        uVar10 = UISingletonDialog<FestivalGamePageFightZodiac>::
                                                 GetSingletonPtr();
                                        (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
                                      }
                                      FightZodiacData::~FightZodiacData
                                                ((FightZodiacData *)&local_120);
                                    }
                                  }
                                  else {
                                    local_270[0] = 0x2a59;
                                    local_248[0] = std::set<int,std::less<int>,std::allocator<int>>
                                                   ::find((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_270);
                                    local_120 = std::
                                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    bVar3 = eastl::operator!=((rbtree_iterator *)local_248,
                                                              (rbtree_iterator *)&local_120);
                                    if (bVar3) {
                                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr()
                                      ;
                                      ActivityManager::GetActiveItem(iVar5);
                                      cVar4 = FUN_03ac12f8(local_198);
                                      if ((cVar4 != '\0') && (local_188 != '\0')) {
                                        bVar3 = bVar2;
                                        if (*(int *)(this + 0x140) != 0x1e) goto LAB_03ae6cf0;
                                        lVar13 = UISingletonDialog<GoldenEggPage>::GetSingletonPtr()
                                        ;
                                        if (lVar13 == 0) {
                                          UISingletonDialog<GoldenEggPage>::ShowDialog();
                                        }
                                        local_120 = CONCAT44(local_120._4_4_,0x1e);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                                        plVar8 = (long *)*puVar9;
                                        uVar10 = UISingletonDialog<GoldenEggPage>::GetSingletonPtr()
                                        ;
                                        goto LAB_03ae4e2c;
                                      }
                                    }
                                    else {
                                      local_270[0] = 0x2a5c;
                                      local_248[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_270);
                                      local_120 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                      bVar2 = eastl::operator!=((rbtree_iterator *)local_248,
                                                                (rbtree_iterator *)&local_120);
                                      if (!bVar2) goto LAB_03ae4a50;
                                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr()
                                      ;
                                      ActivityManager::GetActiveItem(iVar5);
                                      cVar4 = FUN_03ac12f8(local_198);
                                      if ((cVar4 != '\0') && (local_188 != '\0')) {
                                        if (*(int *)(this + 0x140) != 0x1f) goto LAB_03ae573c;
                                        lVar13 = UISingletonDialog<UIArborDay>::GetSingletonPtr();
                                        if (lVar13 == 0) {
                                          UISingletonDialog<UIArborDay>::ShowDialog();
                                        }
                                        local_120 = CONCAT44(local_120._4_4_,0x1f);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_120);
                                        plVar8 = (long *)*puVar9;
                                        uVar10 = UISingletonDialog<UIArborDay>::GetSingletonPtr();
                                        goto LAB_03ae4e2c;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_03ae4e40;
        }
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        cVar4 = FUN_03ac12f8(local_218);
        if ((cVar4 != '\0') && (local_208 != '\0')) {
          pDVar19 = (DiscountShopActivityManager *)
                    Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
          ActiveItem::ActiveItem((ActiveItem *)aDStack_1a0,aAStack_220);
          DiscountShopActivityManager::Init(pDVar19,(ActiveItem *)aDStack_1a0);
          ActiveItem::~ActiveItem((ActiveItem *)aDStack_1a0);
          if (*(int *)(this + 0x140) == 0x14) {
            this_11 = (DiscountShopActivityUI *)
                      UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr();
            if (this_11 == (DiscountShopActivityUI *)0x0) {
              UISingletonDialog<DiscountShopActivityUI>::ShowDialog();
            }
            else {
              DiscountShopActivityUI::UpdateUI(this_11);
            }
            local_120 = CONCAT44(local_120._4_4_,0x14);
            puVar9 = (undefined8 *)
                     std::
                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                     ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   *)(this + 0x148),(int *)&local_120);
            plVar8 = (long *)*puVar9;
            uVar10 = UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr();
            goto LAB_03ae6298;
          }
        }
      }
      goto LAB_03ae4c34;
    }
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    if (local_188 == '\0') goto LAB_03ae5548;
    NetworkShopInfo::NetworkShopInfo((NetworkShopInfo *)&local_120);
    cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_1a0,(RtObject *)&local_120);
    pLVar1 = gLawnApp;
    if (cVar4 == '\0') {
      FUN_05478178((string *)local_270,&DAT_056f11a8,auStack_280);
      FUN_05478178((rbtree_iterator *)local_248,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_278);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_270,(wstring *)local_248);
      FUN_05476c50((rbtree_iterator *)local_248);
      nop();
      FUN_05476c50((string *)local_270);
      nop();
      FUN_05478178((string *)local_270,L"[BUTTON_OK]",auStack_278);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                ((Delegate0 *)aAStack_220,(rbtree_iterator *)local_248);
LAB_03ae5c14:
      local_288 = (Delegate0 *)aAStack_220;
      PVZ2UIDialog::AddButton(pPVar7,(string *)local_270,local_288,1);
      FUN_05476c50((string *)local_270);
      nop();
    }
    else {
      lVar13 = FUN_03ac1fec(local_118,CONCAT44(uStack_10c,local_110));
      pLVar1 = gLawnApp;
      if (lVar13 == 0) {
        FUN_05478178((string *)local_270,&DAT_056f11a8,auStack_280);
        FUN_05478178((rbtree_iterator *)local_248,L"[WECHAT_ACTIVITY_EMPTY_CONFIG]",auStack_278);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_270,(wstring *)local_248);
        FUN_05476c50((rbtree_iterator *)local_248);
        nop();
        FUN_05476c50((string *)local_270);
        nop();
        FUN_05478178((string *)local_270,L"[BUTTON_OK]",auStack_278);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  ((Delegate0 *)aAStack_220,(rbtree_iterator *)local_248);
        goto LAB_03ae5c14;
      }
      local_248[0] = CONCAT44(local_248[0]._4_4_,0x22);
      puVar9 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)local_248);
      (**(code **)(*(long *)*puVar9 + 0x70))((long *)*puVar9,(LimitedSummonData *)&local_120);
    }
    NetworkShopInfo::~NetworkShopInfo((NetworkShopInfo *)&local_120);
  }
LAB_03ae4e40:
  ActiveItem::~ActiveItem((ActiveItem *)aDStack_1a0);
LAB_03ae4a50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

