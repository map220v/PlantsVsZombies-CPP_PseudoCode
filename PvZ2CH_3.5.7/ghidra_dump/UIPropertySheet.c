// Class: UIPropertySheet


/* UIPropertySheet::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPropertySheet::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPropertySheet::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPropertySheet::ScrollTargetReached(UIPropertySheet *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* UIPropertySheet::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPropertySheet::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPropertySheet::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPropertySheet::ScrollTargetInterrupted(UIPropertySheet *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* UIPropertySheet::AllowKey(int, Sexy::KeyCode) */

undefined8 UIPropertySheet::AllowKey(void)

{
  return 1;
}


/* non-virtual thunk to UIPropertySheet::AllowKey(int, Sexy::KeyCode) */

void __thiscall UIPropertySheet::AllowKey(UIPropertySheet *this)

{
  AllowKey(this + -0xe8);
  return;
}


/* UIPropertySheet::AllowChar(int, wchar_t) */

undefined1  [16] UIPropertySheet::AllowChar(int param_1,wchar_t param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 1;
  return auVar1;
}


/* non-virtual thunk to UIPropertySheet::AllowChar(int, wchar_t) */

void __thiscall UIPropertySheet::AllowChar(UIPropertySheet *this,int param_1,wchar_t param_2)

{
  AllowChar((int)this + -0xe8,param_1);
  return;
}


/* UIPropertySheet::AllowText(int, std::wstring const&) */

undefined8 UIPropertySheet::AllowText(int param_1,wstring *param_2)

{
  return 1;
}


/* non-virtual thunk to UIPropertySheet::AllowText(int, std::wstring const&) */

void __thiscall UIPropertySheet::AllowText(UIPropertySheet *this,int param_1,wstring *param_2)

{
  AllowText((int)this + -0xe8,(wstring *)(ulong)(uint)param_1);
  return;
}


/* UIPropertySheet::ClearAllProperties() */

void __thiscall UIPropertySheet::ClearAllProperties(UIPropertySheet *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0xf0);
  uVar5 = 0;
  lVar1 = FUN_04b6ae34(uVar6,*(undefined8 *)(this + 0xf8));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_04b6ae40(uVar6,uVar5);
      (**(code **)(*(long *)this + 0x68))(this,*puVar2);
      puVar2 = (undefined8 *)FUN_04b6ae40(*(undefined8 *)(this + 0xf0),uVar5);
      (**(code **)(*(long *)*puVar2 + 0x80))((long *)*puVar2,1,1);
      uVar6 = *(undefined8 *)(this + 0xf0);
      plVar3 = (long *)FUN_04b6ae40(uVar6,uVar5);
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        uVar6 = *(undefined8 *)(this + 0xf0);
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04b6ae34(uVar6,*(undefined8 *)(this + 0xf8));
    } while (uVar5 < uVar4);
  }
  std::vector<UIProperty*,std::allocator<UIProperty*>>::clear
            ((vector<UIProperty*,std::allocator<UIProperty*>> *)(this + 0xf0));
  return;
}


/* UIPropertySheet::ButtonDepress(int) */

void __thiscall UIPropertySheet::ButtonDepress(UIPropertySheet *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x158))();
    return;
  }
  if (param_1 == 1) {
    (**(code **)(*(long *)this + 0x158))(this,0);
    iVar1 = FUN_04b6ae14(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),(SexyURL *)0x0);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIPropertySheet::ButtonDepress(int) */

void __thiscall UIPropertySheet::ButtonDepress(UIPropertySheet *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::Layout() */

void __thiscall UIPropertySheet::Layout(UIPropertySheet *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar4 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar3 = (long *)*puVar2;
    if (*(char *)((long)plVar3 + 0x6c) != '\0') {
      (**(code **)(*plVar3 + 0x198))
                (plVar3,0,iVar4,*(undefined4 *)(this + 0x50),*(undefined4 *)((long)plVar3 + 0x54));
      iVar4 = iVar4 + *(int *)((long)plVar3 + 0x54);
      iVar5 = iVar5 + *(int *)((long)plVar3 + 0x54);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  *(int *)(*(long *)(this + 0x110) + 0x54) = iVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::UIPropertySheet(Sexy::Delegate1<UIProperty*>) */

void __thiscall UIPropertySheet::UIPropertySheet(UIPropertySheet *this,Delegate2 *param_2)

{
  ButtonListener *this_00;
  undefined4 uVar1;
  Widget *this_01;
  PVZ2UIScrollingWidget *this_02;
  PVZ2UIButton *pPVar2;
  long *plVar3;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xe0);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener(this_00);
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe8));
  *(undefined ***)this = &PTR_GetClass_0696dbd0;
  *(undefined ***)(this + 0xd8) = &PTR__UIPropertySheet_0696df28;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_0696df70;
  *(undefined ***)(this + 0xe8) = &PTR_EditWidgetText_0696dfb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  Sexy::Delegate1<UIProperty*>::Delegate1((DummyInit *)(this + 0x128));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0x110) = this_01;
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0x108) = this_02;
  uVar1 = FUN_04b6aebc(100);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,uVar1,uVar1);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x108),2);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x108));
  (**(code **)(**(long **)(this + 0x108) + 0x60))
            (*(long **)(this + 0x108),*(undefined8 *)(this + 0x110));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar2 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar2,0,this_00,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar2;
  FUN_05476c50(awStack_78);
  nop();
  pPVar2 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86d78,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86dc0,2);
  PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar3 = *(long **)(this + 0x118);
  uVar1 = FUN_04b6aebc(0x14);
  (**(code **)(*plVar3 + 0x198))(plVar3,0,0,uVar1,uVar1);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar2 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar2,1,this_00,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar2;
  FUN_05476c50(awStack_78);
  nop();
  pPVar2 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86de8,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86d48,2);
  PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar3 = *(long **)(this + 0x120);
  uVar1 = FUN_04b6aebc(0x14);
  (**(code **)(*plVar3 + 0x198))(plVar3,0,0,uVar1,uVar1);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x120));
  this[0x59] = (UIPropertySheet)0x0;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x128),param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPropertySheet::~UIPropertySheet() */

void __thiscall UIPropertySheet::~UIPropertySheet(UIPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0696dbd0;
  *(undefined ***)(this + 0xd8) = &PTR__UIPropertySheet_0696df28;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_0696df70;
  *(undefined ***)(this + 0xe8) = &PTR_EditWidgetText_0696dfb8;
  std::vector<UIProperty*,std::allocator<UIProperty*>>::clear
            ((vector<UIProperty*,std::allocator<UIProperty*>> *)(this + 0xf0));
  std::vector<UIProperty*,std::allocator<UIProperty*>>::~vector
            ((vector<UIProperty*,std::allocator<UIProperty*>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to UIPropertySheet::~UIPropertySheet() */

void __thiscall UIPropertySheet::~UIPropertySheet(UIPropertySheet *this)

{
  ~UIPropertySheet(this + -0xd8);
  return;
}


/* UIPropertySheet::~UIPropertySheet() */

void __thiscall UIPropertySheet::~UIPropertySheet(UIPropertySheet *this)

{
  ~UIPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPropertySheet::~UIPropertySheet() */

void __thiscall UIPropertySheet::~UIPropertySheet(UIPropertySheet *this)

{
  ~UIPropertySheet(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::GetProperty(std::string const&) */

void __thiscall UIPropertySheet::GetProperty(UIPropertySheet *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0xf0);
    uVar6 = 0;
    Sexy::ToSexyString((Sexy *)param_1,param_1);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_04b6bc8c(uVar3,uVar4,auStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      uVar6 = *puVar5;
    }
    FUN_05476c50(auStack_20);
  }
  else {
    uVar6 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::GetPropertyValue(std::string const&) */

void UIPropertySheet::GetPropertyValue(string *param_1)

{
  long lVar1;
  long lVar2;
  string *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = GetProperty((UIPropertySheet *)param_1,in_x1);
  if (lVar2 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    UIProperty::GetValue();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPropertySheet::SetPropertyValue(std::string const&, std::string const&) */

void __thiscall
UIPropertySheet::SetPropertyValue(UIPropertySheet *this,string *param_1,string *param_2)

{
  UIProperty *this_00;
  
  this_00 = (UIProperty *)GetProperty(this,param_1);
  if (this_00 != (UIProperty *)0x0) {
    UIProperty::SetValue(this_00,param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::GetProperty(int) */

void __thiscall UIPropertySheet::GetProperty(UIPropertySheet *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04b6c004(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* UIPropertySheet::EditWidgetText(int, std::wstring const&) */

void UIPropertySheet::EditWidgetText(int param_1,wstring *param_2)

{
  int iVar1;
  UIPropertySheet *this;
  SexyURL *pSVar2;
  
  this = (UIPropertySheet *)(ulong)(uint)param_1;
  iVar1 = FUN_04b6ae14(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x140));
  if (iVar1 == 0) {
    return;
  }
  pSVar2 = (SexyURL *)GetProperty(this,(int)param_2);
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x128),pSVar2);
  return;
}


/* non-virtual thunk to UIPropertySheet::EditWidgetText(int, std::wstring const&) */

void __thiscall UIPropertySheet::EditWidgetText(UIPropertySheet *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe8,(wstring *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPropertySheet::AddProperty(int, std::string const&, std::string const&) */

void __thiscall
UIPropertySheet::AddProperty(UIPropertySheet *this,int param_1,string *param_2,string *param_3)

{
  UIProperty *this_00;
  UIProperty *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xf8);
  UIProperty::UIProperty(this_00);
  local_10 = this_00;
  (**(code **)(*(long *)this_00 + 0x310))(this_00,param_1,param_2,param_3,this + 0xe8);
  (**(code **)(*(long *)this + 0x60))(this,local_10);
  std::vector<UIProperty*,std::allocator<UIProperty*>>::push_back
            ((vector<UIProperty*,std::allocator<UIProperty*>> *)(this + 0xf0),&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* UIPropertySheet::Resize(int, int, int, int) */

void __thiscall
UIPropertySheet::Resize(UIPropertySheet *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x108);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  plVar1 = *(long **)(this + 0x110);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,0,0,*(undefined4 *)(*(long *)(this + 0x108) + 0x50),
               *(undefined4 *)(*(long *)(this + 0x108) + 0x54));
  }
  plVar1 = *(long **)(this + 0x118);
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(this + 0x120);
    if (plVar1 == (long *)0x0) goto LAB_04b6c618;
    iVar4 = (int)plVar1[10];
    pcVar5 = *(code **)(*plVar1 + 0x198);
    iVar2 = -iVar4;
    iVar3 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,-(int)plVar1[10],0,(int)plVar1[10],*(undefined4 *)((long)plVar1 + 0x54));
    plVar1 = *(long **)(this + 0x120);
    if (plVar1 == (long *)0x0) goto LAB_04b6c618;
    iVar4 = (int)plVar1[10];
    pcVar5 = *(code **)(*plVar1 + 0x198);
    iVar2 = -iVar4;
    iVar3 = 0;
    if (*(long *)(this + 0x118) != 0) {
      iVar3 = *(int *)(*(long *)(this + 0x118) + 0x54) + 5;
    }
  }
  (*pcVar5)(plVar1,iVar2,iVar3,iVar4,*(undefined4 *)((long)plVar1 + 0x54));
LAB_04b6c618:
  Layout(this);
  return;
}

