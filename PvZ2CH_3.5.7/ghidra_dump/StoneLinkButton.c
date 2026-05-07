// Class: StoneLinkButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLinkButton::~StoneLinkButton() */

void __thiscall StoneLinkButton::~StoneLinkButton(StoneLinkButton *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x198) = &PTR__StoneLinkButton_066c5678;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066c5320;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x300),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StoneLinkButton::~StoneLinkButton() */

void __thiscall StoneLinkButton::~StoneLinkButton(StoneLinkButton *this)

{
  ~StoneLinkButton(this + -0x198);
  return;
}


/* StoneLinkButton::~StoneLinkButton() */

void __thiscall StoneLinkButton::~StoneLinkButton(StoneLinkButton *this)

{
  ~StoneLinkButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StoneLinkButton::~StoneLinkButton() */

void __thiscall StoneLinkButton::~StoneLinkButton(StoneLinkButton *this)

{
  ~StoneLinkButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLinkButton::StoneLinkButton(int, Sexy::ButtonListener*) */

void __thiscall
StoneLinkButton::StoneLinkButton(StoneLinkButton *this,int param_1,ButtonListener *param_2)

{
  bool bVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)&local_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,(Color *)&local_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_066c5320;
  *(undefined ***)(this + 0x198) = &PTR__StoneLinkButton_066c5678;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  Sexy::Color::Color((Color *)&local_18,0x5a,0x5a,0x5a);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x2dc) = local_18;
  *(undefined8 *)(this + 0x2e4) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

