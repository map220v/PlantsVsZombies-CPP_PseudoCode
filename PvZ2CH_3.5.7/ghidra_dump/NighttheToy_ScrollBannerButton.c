// Class: NighttheToy_ScrollBannerButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToy_ScrollBannerButton::NighttheToy_ScrollBannerButton() */

void __thiscall
NighttheToy_ScrollBannerButton::NighttheToy_ScrollBannerButton(NighttheToy_ScrollBannerButton *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollWidgetComponent::UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  *(undefined ***)this = &PTR_GetClass_066b9890;
  *(undefined ***)(this + 0xd8) = &PTR__NighttheToy_ScrollBannerButton_066b9c48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Universe_Gate");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this[0x1f0] = (NighttheToy_ScrollBannerButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton() */

void __thiscall
NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton
          (NighttheToy_ScrollBannerButton *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066b9890;
  *(undefined ***)(this + 0xd8) = &PTR__NighttheToy_ScrollBannerButton_066b9c48;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Universe_Gate");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  UIScrollWidgetComponent::~UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton() */

void __thiscall
NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton
          (NighttheToy_ScrollBannerButton *this)

{
  ~NighttheToy_ScrollBannerButton(this + -0xd8);
  return;
}


/* NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton() */

void __thiscall
NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton
          (NighttheToy_ScrollBannerButton *this)

{
  ~NighttheToy_ScrollBannerButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton() */

void __thiscall
NighttheToy_ScrollBannerButton::~NighttheToy_ScrollBannerButton
          (NighttheToy_ScrollBannerButton *this)

{
  ~NighttheToy_ScrollBannerButton(this + -0xd8);
  return;
}


/* NighttheToy_ScrollBannerButton::InitView() */

void __thiscall NighttheToy_ScrollBannerButton::InitView(NighttheToy_ScrollBannerButton *this)

{
  int iVar1;
  NighttheToySkillDisplayWidget *this_00;
  int iVar2;
  
  this[0x59] = (NighttheToy_ScrollBannerButton)0x0;
  iVar2 = 0;
  do {
    this_00 = ::operator_new(0x100);
    iVar1 = iVar2 + 1;
    NighttheToySkillDisplayWidget::NighttheToySkillDisplayWidget(this_00,-1,-1,iVar2);
    (**(code **)(*(long *)this + 0x370))(this,this_00);
    (**(code **)(*(long *)this_00 + 0x318))(this_00);
    this[0x1f0] = (NighttheToy_ScrollBannerButton)0x1;
    iVar2 = iVar1;
  } while (iVar1 != 4);
  UIScrollWidgetComponent::SetScrollParam((UIScrollWidgetComponent *)this);
  UIScrollWidgetComponent::SetDotEnable((UIScrollWidgetComponent *)this,true);
  UIScrollWidgetComponent::InitView((UIScrollWidgetComponent *)this);
  (**(code **)(*(long *)this + 0x158))(this,this[0x1f0]);
  return;
}

