// Class: Lua::CUIImage


/* Lua::CUIImage::Update() */

void __thiscall Lua::CUIImage::Update(CUIImage *this)

{
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return;
}


/* Lua::CUIImage::SetDisabled(bool) */

void __thiscall Lua::CUIImage::SetDisabled(CUIImage *this,bool param_1)

{
  this[0x125] = (CUIImage)param_1;
  return;
}


/* Lua::CUIImage::GetDisabled() */

CUIImage __thiscall Lua::CUIImage::GetDisabled(CUIImage *this)

{
  return this[0x125];
}


/* Lua::CUIImage::SetScale(float, float) */

void __thiscall Lua::CUIImage::SetScale(CUIImage *this,float param_1,float param_2)

{
  this[0x124] = (CUIImage)0x1;
  Sexy::Transform::Scale((Transform *)(this + 0xe0),param_1,param_2);
  return;
}


/* Lua::CUIImage::internalDraw(Sexy::Graphics*) */

void __thiscall Lua::CUIImage::internalDraw(CUIImage *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xd8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  if (this[0x124] != (CUIImage)0x0) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImageTransform(param_1,(Image *)pRVar2,(Transform *)(this + 0xe0),0.0,0.0);
    return;
  }
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIImage::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall Lua::CUIImage::DrawAll(CUIImage *this,ModalFlags *param_1,Graphics *param_2)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x125] != (CUIImage)0x0) {
    Sexy::Color::Color(aCStack_18,0x5a,0x5a,0x5a);
    Sexy::Graphics::SetColor(param_2,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_2,true);
  }
  internalDraw(this,param_2);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIImage::~CUIImage() */

void __thiscall Lua::CUIImage::~CUIImage(CUIImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2a830;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUIImage::~CUIImage() */

void __thiscall Lua::CUIImage::~CUIImage(CUIImage *this)

{
  ~CUIImage(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUIImage::CUIImage() */

void __thiscall Lua::CUIImage::CUIImage(CUIImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2a830;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (CUIImage)0x0;
  this[0x125] = (CUIImage)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIImage::CUIImage(std::string const&) */

void __thiscall Lua::CUIImage::CUIImage(CUIImage *this,string *param_1)

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
  *(undefined ***)this = &PTR_GetClass_06a2a830;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_02)
  ;
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (CUIImage)0x0;
  this[0x125] = (CUIImage)0x0;
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


/* Lua::CUIImage::GetWidth() */

void __thiscall Lua::CUIImage::GetWidth(CUIImage *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_04fd853c(*(undefined4 *)(this + 0x50));
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* Lua::CUIImage::GetHeight() */

void __thiscall Lua::CUIImage::GetHeight(CUIImage *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_04fd8540(*(undefined4 *)(this + 0x54));
    return;
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}

