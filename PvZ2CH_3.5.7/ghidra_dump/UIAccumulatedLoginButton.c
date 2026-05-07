// Class: UIAccumulatedLoginButton


/* UIAccumulatedLoginButton::~UIAccumulatedLoginButton() */

void __thiscall UIAccumulatedLoginButton::~UIAccumulatedLoginButton(UIAccumulatedLoginButton *this)

{
  *(undefined ***)this = &PTR__UIAccumulatedLoginButton_069f4ba0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_069f4fc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DButton::~DButton((DButton *)this);
  return;
}


/* UIAccumulatedLoginButton::~UIAccumulatedLoginButton() */

void __thiscall UIAccumulatedLoginButton::~UIAccumulatedLoginButton(UIAccumulatedLoginButton *this)

{
  ~UIAccumulatedLoginButton(this);
  AK::FreeHook(this);
  return;
}


/* UIAccumulatedLoginButton::UIAccumulatedLoginButton() */

void __thiscall UIAccumulatedLoginButton::UIAccumulatedLoginButton(UIAccumulatedLoginButton *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  DButton::DButton((DButton *)this);
  *(undefined ***)this = &PTR__UIAccumulatedLoginButton_069f4ba0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_069f4fc0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIAccumulatedLoginButton,void(UIAccumulatedLoginButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAccumulatedLoginButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIAccumulatedLoginButton::onNotifyRefreshActivityList
          (UIAccumulatedLoginButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a8a;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      UISingletonDialog<UIAccumulatedLogin>::ShowDialog();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

