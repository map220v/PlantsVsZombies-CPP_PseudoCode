// Class: LinkButton


/* LinkButton::GetButtonImage() */

RtWeakPtr<Sexy::SoundResource> * LinkButton::GetButtonImage(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x300));
  return in_x8;
}


/* LinkButton::CanDraw() */

void __thiscall LinkButton::CanDraw(LinkButton *this)

{
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x300));
  return;
}


/* LinkButton::GetLinkButtonWidth() */

ulong __thiscall LinkButton::GetLinkButtonWidth(LinkButton *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  ulong uVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x300));
  if (!bVar1) {
    return (ulong)*(uint *)(this + 0x50);
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  uVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  return uVar2;
}


/* LinkButton::GetLinkButtonHeight() */

ulong __thiscall LinkButton::GetLinkButtonHeight(LinkButton *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  ulong uVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x300));
  if (!bVar1) {
    return (ulong)*(uint *)(this + 0x54);
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  uVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall LinkButton::DrawAll(LinkButton *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  ResourceInfo *pRVar2;
  GraphicsAutoState aGStack_20 [8];
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x2b8] == (LinkButton)0x0) || (this[0x6e] != (LinkButton)0x0)) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x300));
    if (cVar1 != '\0') {
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
      Sexy::Graphics::DrawImage
                (param_2,(Image *)pRVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    }
  }
  else {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_2);
    Sexy::Color::Color((Color *)aTStack_18,1);
    cVar1 = Sexy::TRect<int>::operator!=((TRect<int> *)(this + 0x2dc),aTStack_18);
    if (cVar1 != '\0') {
      Sexy::Graphics::SetColor(param_2,(Color *)(this + 0x2dc));
      Sexy::Graphics::SetColorizeImages(param_2,true);
    }
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
    Sexy::Graphics::DrawImage
              (param_2,(Image *)pRVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkButton::~LinkButton() */

void __thiscall LinkButton::~LinkButton(LinkButton *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x198) = &PTR__LinkButton_069796a8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06979350;
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


/* non-virtual thunk to LinkButton::~LinkButton() */

void __thiscall LinkButton::~LinkButton(LinkButton *this)

{
  ~LinkButton(this + -0x198);
  return;
}


/* LinkButton::~LinkButton() */

void __thiscall LinkButton::~LinkButton(LinkButton *this)

{
  ~LinkButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LinkButton::~LinkButton() */

void __thiscall LinkButton::~LinkButton(LinkButton *this)

{
  ~LinkButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkButton::LinkButton(int, Sexy::ButtonListener*) */

void __thiscall LinkButton::LinkButton(LinkButton *this,int param_1,ButtonListener *param_2)

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
  *(undefined ***)this = &PTR_GetClass_06979350;
  *(undefined ***)(this + 0x198) = &PTR__LinkButton_069796a8;
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

