// Class: NewerPresentImage


/* NewerPresentImage::~NewerPresentImage() */

void __thiscall NewerPresentImage::~NewerPresentImage(NewerPresentImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06778860;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewerPresentImage::~NewerPresentImage() */

void __thiscall NewerPresentImage::~NewerPresentImage(NewerPresentImage *this)

{
  ~NewerPresentImage(this);
  AK::FreeHook(this);
  return;
}


/* NewerPresentImage::NewerPresentImage() */

void __thiscall NewerPresentImage::NewerPresentImage(NewerPresentImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06778860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (NewerPresentImage)0x0;
  this[0x125] = (NewerPresentImage)0x0;
  this[0x126] = (NewerPresentImage)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentImage::NewerPresentImage(std::string const&) */

void __thiscall NewerPresentImage::NewerPresentImage(NewerPresentImage *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_02 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_06778860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_02)
  ;
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (NewerPresentImage)0x0;
  this[0x125] = (NewerPresentImage)0x0;
  this[0x126] = (NewerPresentImage)0x0;
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_02,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_02);
  if (bVar1) {
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    *(undefined4 *)(this + 0x50) = uVar2;
    this_01 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    uVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    *(undefined4 *)(this + 0x54) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewerPresentImage::GetWidth() */

void __thiscall NewerPresentImage::GetWidth(NewerPresentImage *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_03dbe568(*(undefined4 *)(this + 0x50));
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* NewerPresentImage::GetHeight() */

void __thiscall NewerPresentImage::GetHeight(NewerPresentImage *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_03dbe56c(*(undefined4 *)(this + 0x54));
    return;
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}

