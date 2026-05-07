// Class: SecretStoreImage


/* SecretStoreImage::~SecretStoreImage() */

void __thiscall SecretStoreImage::~SecretStoreImage(SecretStoreImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06774b80;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SecretStoreImage::~SecretStoreImage() */

void __thiscall SecretStoreImage::~SecretStoreImage(SecretStoreImage *this)

{
  ~SecretStoreImage(this);
  AK::FreeHook(this);
  return;
}


/* SecretStoreImage::SecretStoreImage() */

void __thiscall SecretStoreImage::SecretStoreImage(SecretStoreImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06774b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (SecretStoreImage)0x0;
  this[0x125] = (SecretStoreImage)0x0;
  this[0x126] = (SecretStoreImage)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreImage::SecretStoreImage(std::string const&) */

void __thiscall SecretStoreImage::SecretStoreImage(SecretStoreImage *this,string *param_1)

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
  *(undefined ***)this = &PTR_GetClass_06774b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_02)
  ;
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (SecretStoreImage)0x0;
  this[0x126] = (SecretStoreImage)0x1;
  this[0x125] = (SecretStoreImage)0x0;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreImage::SecretStoreImage(std::string const&, bool) */

void __thiscall
SecretStoreImage::SecretStoreImage(SecretStoreImage *this,string *param_1,bool param_2)

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
  *(undefined ***)this = &PTR_GetClass_06774b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_02)
  ;
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (SecretStoreImage)0x0;
  this[0x125] = (SecretStoreImage)0x0;
  this[0x126] = (SecretStoreImage)param_2;
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


/* SecretStoreImage::SecretStoreImage(Sexy::RtWeakPtr<Sexy::Image>, bool) */

void __thiscall
SecretStoreImage::SecretStoreImage
          (SecretStoreImage *this,RtWeakPtrBase *param_2,SecretStoreImage param_3)

{
  bool bVar1;
  undefined4 uVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RtWeakPtr<Sexy::SoundResource> *this_02;
  
  Sexy::Widget::Widget((Widget *)this);
  this_02 = (RtWeakPtr<Sexy::SoundResource> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_06774b80;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(this_02,param_2);
  Sexy::Transform::Transform((Transform *)(this + 0xe0));
  this[0x124] = (SecretStoreImage)0x0;
  this[0x125] = (SecretStoreImage)0x0;
  this[0x126] = param_3;
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
  return;
}


/* SecretStoreImage::GetWidth() */

void __thiscall SecretStoreImage::GetWidth(SecretStoreImage *this)

{
  bool bVar1;
  LotteryResultProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_03da0984(*(undefined4 *)(this + 0x50));
    return;
  }
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  return;
}


/* SecretStoreImage::GetHeight() */

void __thiscall SecretStoreImage::GetHeight(SecretStoreImage *this)

{
  bool bVar1;
  SalesProgressBar *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (!bVar1) {
    FUN_03da0988(*(undefined4 *)(this + 0x54));
    return;
  }
  this_00 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}


/* SecretStoreImage::internalDraw(Sexy::Graphics*) */

void __thiscall SecretStoreImage::internalDraw(SecretStoreImage *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xd8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (this[0x124] != (SecretStoreImage)0x0) {
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImageTransform(param_1,(Image *)pRVar2,(Transform *)(this + 0xe0),0.0,0.0)
      ;
      return;
    }
    if (this[0x126] != (SecretStoreImage)0x0) {
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      return;
    }
    (**(code **)(*(long *)this + 0x310))(this,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreImage::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
SecretStoreImage::DrawAll(SecretStoreImage *this,ModalFlags *param_1,Graphics *param_2)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x125] != (SecretStoreImage)0x0) {
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


/* SecretStoreImage::drawImage(Sexy::Graphics*) */

void __thiscall SecretStoreImage::drawImage(SecretStoreImage *this,Graphics *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd8));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar1,0,0);
  return;
}

