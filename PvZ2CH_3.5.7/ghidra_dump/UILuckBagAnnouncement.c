// Class: UILuckBagAnnouncement


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBagAnnouncement::GetLayoutName() */

void __thiscall UILuckBagAnnouncement::GetLayoutName(UILuckBagAnnouncement *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILuckBagAnnouncement");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILuckBagAnnouncement::~UILuckBagAnnouncement() */

void __thiscall UILuckBagAnnouncement::~UILuckBagAnnouncement(UILuckBagAnnouncement *this)

{
  *(undefined ***)this = &PTR_GetClass_06716980;
  *(undefined **)(this + 0xd8) = &DAT_06716cd0;
  UISingletonDialog<UILuckBagAnnouncement>::~UISingletonDialog
            ((UISingletonDialog<UILuckBagAnnouncement> *)this);
  return;
}


/* UILuckBagAnnouncement::~UILuckBagAnnouncement() */

void __thiscall UILuckBagAnnouncement::~UILuckBagAnnouncement(UILuckBagAnnouncement *this)

{
  ~UILuckBagAnnouncement(this);
  AK::FreeHook(this);
  return;
}


/* UILuckBagAnnouncement::ButtonDepress(int) */

void __thiscall UILuckBagAnnouncement::ButtonDepress(UILuckBagAnnouncement *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UILuckBagAnnouncement>::CloseDialog();
    return;
  }
  if (param_1 == 0x141) {
    UISingletonDialog<UILuckBagAnnouncement>::CloseDialog();
    UISingletonDialog<UILuckBag>::ShowDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UILuckBagAnnouncement::ButtonDepress(int) */

void __thiscall UILuckBagAnnouncement::ButtonDepress(UILuckBagAnnouncement *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UILuckBagAnnouncement::UILuckBagAnnouncement() */

void __thiscall UILuckBagAnnouncement::UILuckBagAnnouncement(UILuckBagAnnouncement *this)

{
  UISingletonDialog<UILuckBagAnnouncement>::UISingletonDialog
            ((UISingletonDialog<UILuckBagAnnouncement> *)this);
  *(undefined ***)this = &PTR_GetClass_06716980;
  *(undefined **)(this + 0xd8) = &DAT_06716cd0;
  return;
}

