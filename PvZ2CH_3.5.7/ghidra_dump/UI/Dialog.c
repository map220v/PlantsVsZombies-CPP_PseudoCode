// Class: UI::Dialog


/* PVZ2UIButton* UI::Dialog::GetWidget<PVZ2UIButton>(std::string const&) */

PVZ2UIButton * __thiscall UI::Dialog::GetWidget<PVZ2UIButton>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  PVZ2UIButton *pPVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pPVar2 = (PVZ2UIButton *)WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar1);
    return pPVar2;
  }
  return (PVZ2UIButton *)0x0;
}


/* UIWidgetImage* UI::Dialog::GetWidget<UIWidgetImage>(std::string const&) */

UIWidgetImage * __thiscall UI::Dialog::GetWidget<UIWidgetImage>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIWidgetImage *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetImage *)WidgetFactory<UIWidgetImage*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetImage *)0x0;
}


/* UIWidgetText* UI::Dialog::GetWidget<UIWidgetText>(std::string const&) */

UIWidgetText * __thiscall UI::Dialog::GetWidget<UIWidgetText>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIWidgetText *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetText *)WidgetFactory<UIWidgetText*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetText *)0x0;
}


/* UIWidgetBackground* UI::Dialog::GetWidget<UIWidgetBackground>(std::string const&) */

UIWidgetBackground * __thiscall
UI::Dialog::GetWidget<UIWidgetBackground>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIWidgetBackground *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetBackground *)WidgetFactory<UIWidgetBackground*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetBackground *)0x0;
}


/* UITabControl* UI::Dialog::GetWidget<UITabControl>(std::string const&) */

UITabControl * __thiscall UI::Dialog::GetWidget<UITabControl>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UITabControl *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UITabControl *)WidgetFactory<UITabControl*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UITabControl *)0x0;
}


/* Sexy::Widget* UI::Dialog::GetWidget<Sexy::Widget>(std::string const&) */

Widget * __thiscall UI::Dialog::GetWidget<Sexy::Widget>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pWVar1 = (Widget *)WidgetFactory<Sexy::Widget*>::GetWidget(pWVar1);
    return pWVar1;
  }
  return (Widget *)0x0;
}


/* UIWidgetAnim* UI::Dialog::GetWidget<UIWidgetAnim>(std::string const&) */

UIWidgetAnim * __thiscall UI::Dialog::GetWidget<UIWidgetAnim>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIWidgetAnim *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetAnim *)WidgetFactory<UIWidgetAnim*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetAnim *)0x0;
}


/* UIScrollControl* UI::Dialog::GetWidget<UIScrollControl>(std::string const&) */

UIScrollControl * __thiscall UI::Dialog::GetWidget<UIScrollControl>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIScrollControl *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIScrollControl *)WidgetFactory<UIScrollControl*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIScrollControl *)0x0;
}


/* UITabContent* UI::Dialog::GetWidget<UITabContent>(std::string const&) */

UITabContent * __thiscall UI::Dialog::GetWidget<UITabContent>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UITabContent *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UITabContent *)0x0;
}


/* UIWidgetRadio* UI::Dialog::GetWidget<UIWidgetRadio>(std::string const&) */

UIWidgetRadio * __thiscall UI::Dialog::GetWidget<UIWidgetRadio>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIWidgetRadio *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetRadio *)WidgetFactory<UIWidgetRadio*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetRadio *)0x0;
}


/* UIWidgetImage* UI::Dialog::GetChildWidget<UIWidgetImage>(Sexy::Widget*, std::string const&) */

UIWidgetImage * UI::Dialog::GetChildWidget<UIWidgetImage>(Widget *param_1,string *param_2)

{
  Widget *pWVar1;
  UIWidgetImage *pUVar2;
  
  pWVar1 = (Widget *)GetChildWidget(param_1,param_2);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetImage *)WidgetFactory<UIWidgetImage*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetImage *)0x0;
}


/* UIWidgetText* UI::Dialog::GetChildWidget<UIWidgetText>(Sexy::Widget*, std::string const&) */

UIWidgetText * UI::Dialog::GetChildWidget<UIWidgetText>(Widget *param_1,string *param_2)

{
  Widget *pWVar1;
  UIWidgetText *pUVar2;
  
  pWVar1 = (Widget *)GetChildWidget(param_1,param_2);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIWidgetText *)WidgetFactory<UIWidgetText*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIWidgetText *)0x0;
}


/* UIPage* UI::Dialog::GetWidget<UIPage>(std::string const&) */

UIPage * __thiscall UI::Dialog::GetWidget<UIPage>(Dialog *this,string *param_1)

{
  Widget *pWVar1;
  UIPage *pUVar2;
  
  pWVar1 = (Widget *)GetWidget(this,param_1);
  if (pWVar1 != (Widget *)0x0) {
    pUVar2 = (UIPage *)WidgetFactory<UIPage*>::GetWidget(pWVar1);
    return pUVar2;
  }
  return (UIPage *)0x0;
}


/* UI::Dialog::ButtonPress(int) */

int UI::Dialog::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UI::Dialog::ButtonPress(int) */

void __thiscall UI::Dialog::ButtonPress(Dialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* UI::Dialog::ButtonDepress(int) */

int UI::Dialog::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UI::Dialog::ButtonDepress(int) */

void __thiscall UI::Dialog::ButtonDepress(Dialog *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* UI::Dialog::SetButtonListener(PVZ2UIButton*, int, Sexy::ButtonListener*) */

void __thiscall
UI::Dialog::SetButtonListener
          (Dialog *this,PVZ2UIButton *param_1,int param_2,ButtonListener *param_3)

{
  if (param_1 != (PVZ2UIButton *)0x0) {
    *(int *)(param_1 + 0xd4) = param_2;
    *(ButtonListener **)(param_1 + 0x168) = param_3;
  }
  return;
}


/* UI::Dialog::SetCenter(Sexy::Widget*, bool) */

Dialog * __thiscall UI::Dialog::SetCenter(Dialog *this,Widget *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (Widget *)0x0) {
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(gLawnApp + 0xd4);
    iVar4 = *(int *)(gLawnApp + 0xd8);
    iVar5 = FUN_04b75240();
    if (param_2) {
      iVar5 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar5 = iVar5 + (iVar4 - iVar2) / 2;
    }
    this = (Dialog *)(**(code **)(*(long *)param_1 + 0x1a8))(param_1,(iVar3 - iVar1) / 2,iVar5);
  }
  return this;
}


/* UI::Dialog::setWindowCenter(Sexy::Widget*) */

Dialog * __thiscall UI::Dialog::setWindowCenter(Dialog *this,Widget *param_1)

{
  if (param_1 != (Widget *)0x0) {
    this = (Dialog *)
           (**(code **)(*(long *)param_1 + 0x1a8))
                     (param_1,(*(int *)(gLawnApp + 0xd4) - *(int *)(param_1 + 0x50)) / 2,
                      (*(int *)(gLawnApp + 0xd8) - *(int *)(param_1 + 0x54)) / 2);
  }
  return this;
}


/* UI::Dialog::SetDarkBgAlpha(float) */

void __thiscall UI::Dialog::SetDarkBgAlpha(Dialog *this,float param_1)

{
  *(float *)(this + 300) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::GetChildWidget(Sexy::Widget*, std::string const&) */

void UI::Dialog::GetChildWidget(Widget *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Widget *pWVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Widget *)0x0) {
    pWVar4 = (Widget *)0x0;
  }
  else {
    pWVar4 = (Widget *)0x0;
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 == '\0') {
      cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         (param_1 + 8));
      if (cVar1 == '\0') {
        local_18 = FUN_04b7534c(*(undefined8 *)(param_1 + 8));
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(param_1 + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
              bVar2) {
          puVar3 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          pWVar4 = (Widget *)*puVar3;
          cVar1 = std::operator==((string *)(pWVar4 + 0xc0),param_2);
          if ((cVar1 != '\0') ||
             (pWVar4 = (Widget *)GetChildWidget(pWVar4,param_2), pWVar4 != (Widget *)0x0))
          goto LAB_04b75464;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
        pWVar4 = (Widget *)0x0;
      }
    }
  }
LAB_04b75464:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pWVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::GetWidget(std::string const&) */

void __thiscall UI::Dialog::GetWidget(Dialog *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Widget *pWVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this == (Dialog *)0x0) {
    pWVar4 = (Widget *)0x0;
  }
  else {
    pWVar4 = (Widget *)0x0;
    cVar1 = FUN_0547419c(param_1);
    if (cVar1 == '\0') {
      cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         (this + 8));
      if (cVar1 == '\0') {
        uStack_18 = FUN_04b7534c(*(undefined8 *)(this + 8));
        uStack_10 = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)(this + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&uStack_18,(rbtree_iterator *)&uStack_10
                                        ), bVar2) {
          puVar3 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_18);
          pWVar4 = (Widget *)*puVar3;
          cVar1 = std::operator==((string *)(pWVar4 + 0xc0),param_1);
          if ((cVar1 != '\0') ||
             (pWVar4 = (Widget *)GetChildWidget(pWVar4,param_1), pWVar4 != (Widget *)0x0))
          goto LAB_04b75464;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&uStack_18);
        }
        pWVar4 = (Widget *)0x0;
      }
    }
  }
LAB_04b75464:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pWVar4);
  }
  return;
}


/* UI::Dialog::SetWidgetVisible(std::string const&, bool) */

void __thiscall UI::Dialog::SetWidgetVisible(Dialog *this,string *param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = (long *)GetWidget(this,param_1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::InstantiateWidget_Recursively(Sexy::Widget*, std::vector<UIWidgetType,
   std::allocator<UIWidgetType> >&) */

void __thiscall
UI::Dialog::InstantiateWidget_Recursively(Dialog *this,Widget *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  UIWidgetType *this_00;
  Widget *pWVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Widget *)0x0) &&
     (cVar1 = std::vector<UIWidgetType,std::allocator<UIWidgetType>>::empty
                        ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)param_2),
     cVar1 == '\0')) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_2);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      this_00 = (UIWidgetType *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      pWVar3 = (Widget *)UIWidgetType::ToWidget(this_00,(Widget *)0x0);
      if (pWVar3 != (Widget *)0x0) {
        (**(code **)(*(long *)param_1 + 0x60))(param_1,pWVar3);
        lVar4 = WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar3);
        if (lVar4 != 0) {
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          SetButtonListener(this,(PVZ2UIButton *)pWVar3,*(int *)(lVar4 + 0x10),
                            (ButtonListener *)(this + 0xd8));
        }
      }
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      InstantiateWidget_Recursively(this,pWVar3,(vector *)(lVar4 + 0x88));
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Dialog::Dialog() */

void __thiscall UI::Dialog::Dialog(Dialog *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0696dff0;
  *(undefined **)(this + 0xd8) = &DAT_0696e340;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  this[0x128] = (Dialog)0x0;
  this[0x129] = (Dialog)0x0;
  this[0x130] = (Dialog)0x1;
  *(undefined4 *)(this + 300) = 0x3f000000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::CloneWidget(Sexy::Widget*, bool) */

void __thiscall UI::Dialog::CloneWidget(Dialog *this,Widget *param_1,bool param_2)

{
  char cVar1;
  Widget *pWVar2;
  UIWidgetType aUStack_b8 [136];
  vector<UIWidgetType,std::allocator<UIWidgetType>> avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Widget *)0x0) {
    pWVar2 = (Widget *)0x0;
  }
  else {
    UIWidgetType::UIWidgetType(aUStack_b8);
    UIWidgetType::FromWidget(aUStack_b8,param_1,param_2);
    pWVar2 = (Widget *)UIWidgetType::ToWidget(aUStack_b8,(Widget *)0x0);
    if ((pWVar2 != (Widget *)0x0) && (param_2)) {
      cVar1 = std::vector<UIWidgetType,std::allocator<UIWidgetType>>::empty(avStack_30);
      if (cVar1 == '\0') {
        InstantiateWidget_Recursively(this,pWVar2,(vector *)avStack_30);
      }
    }
    UIWidgetType::~UIWidgetType(aUStack_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pWVar2);
}


/* UI::Dialog::AttachLawnApp() */

void __thiscall UI::Dialog::AttachLawnApp(Dialog *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Dialog_Open");
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  LawnApp::PushOverlaysToTop(gLawnApp);
  return;
}


/* UI::Dialog::DetachLawnApp() */

void __thiscall UI::Dialog::DetachLawnApp(Dialog *this)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)gLawnApp[0x6c] + 0x70))((long *)gLawnApp[0x6c],this);
  if (cVar1 != '\0') {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Dialog_Close");
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  }
  return;
}


/* UI::Dialog::OnClose() */

void __thiscall UI::Dialog::OnClose(Dialog *this)

{
  DetachLawnApp(this);
  this[0x128] = (Dialog)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::UnloadGroups() */

void __thiscall UI::Dialog::UnloadGroups(Dialog *this)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  LawnApp *this_01;
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                       (this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    this_01 = gLawnApp;
    if (!bVar1) break;
    psVar2 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    LawnApp::DeleteGroup(this_01,psVar2);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
  }
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::~Dialog() */

void __thiscall UI::Dialog::~Dialog(Dialog *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0696dff0;
  *(undefined **)(this + 0xd8) = &DAT_0696e340;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::WidgetContainer::RemoveWidget((WidgetContainer *)this,(Widget *)*plVar2);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UnloadGroups(this);
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Dialog::~Dialog() */

void __thiscall UI::Dialog::~Dialog(Dialog *this)

{
  ~Dialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::AddResGroup(std::string const&) */

void __thiscall UI::Dialog::AddResGroup(Dialog *this,string *param_1)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find
                       (this_00,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              (this_00,param_1);
    if (local_8 == ___stack_chk_guard) {
      LawnApp::LoadGroup(gLawnApp,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Dialog::CreateFromLayout() */

void __thiscall UI::Dialog::CreateFromLayout(Dialog *this)

{
  Dialog DVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 *puVar2;
  string *psVar3;
  ulong uVar4;
  vector *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (gUIDebug == '\0') {
    (**(code **)(*(long *)this + 800))(asStack_10);
    this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)UILayoutDefinition::GetLayout(asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    GetFolder(asStack_28,3);
    std::operator+(asStack_28,"layout/");
    (**(code **)(*(long *)this + 800))(asStack_18,this);
    std::operator+(asStack_20,asStack_18);
    std::operator+(asStack_10,".json");
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)UILayoutDefinition::GetLayoutByPath(asStack_30);
    if (this_00 ==
        (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
         *)0x0) {
      (**(code **)(*(long *)this + 800))(asStack_10,this);
      this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 *)UILayoutDefinition::GetLayout(asStack_10);
      std::string::~string(asStack_10);
    }
    std::string::~string(asStack_30);
  }
  uVar7 = 0;
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0) {
    (**(code **)(*(long *)this + 0x328))(this);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(this_00);
    uVar6 = 0;
    while( true ) {
      uVar7 = *puVar2;
      uVar4 = FUN_04b7522c(uVar7,puVar2[1]);
      if (uVar4 <= uVar6) break;
      psVar3 = (string *)FUN_04b75238(uVar7,uVar6);
      AddResGroup(this,psVar3);
      uVar6 = uVar6 + 1;
    }
    pvVar5 = (vector *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this_00);
    InstantiateWidget_Recursively(this,(Widget *)this,pvVar5);
    Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    DVar1 = (Dialog)PlantCthulhuActinia::GetEyeballStatus((PlantCthulhuActinia *)this_00);
    this[0x129] = DVar1;
    uVar7 = 1;
    DVar1 = (Dialog)UILayoutDefinition::NeedAttachLawnApp((UILayoutDefinition *)this_00);
    this[0x130] = DVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* UI::Dialog::OnCreate() */

Dialog __thiscall UI::Dialog::OnCreate(Dialog *this)

{
  Dialog DVar1;
  Dialog DVar2;
  
  DVar2 = (Dialog)CreateFromLayout(this);
  if ((DVar2 != (Dialog)0x0) && (DVar1 = this[0x130], DVar1 != (Dialog)0x0)) {
    AttachLawnApp(this);
    return DVar1;
  }
  return DVar2;
}


/* UI::Dialog::Draw(Sexy::Graphics*) */

void __thiscall UI::Dialog::Draw(Dialog *this,Graphics *param_1)

{
  if (this[0x129] != (Dialog)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,*(float *)(this + 300));
  }
  nop();
  return;
}


/* PVZ2UIButton* UI::Dialog::GetChildWidget<PVZ2UIButton>(Sexy::Widget*, std::string const&) */

PVZ2UIButton * UI::Dialog::GetChildWidget<PVZ2UIButton>(Widget *param_1,string *param_2)

{
  Widget *pWVar1;
  PVZ2UIButton *pPVar2;
  
  pWVar1 = (Widget *)GetChildWidget(param_1,param_2);
  if (pWVar1 != (Widget *)0x0) {
    pPVar2 = (PVZ2UIButton *)WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar1);
    return pPVar2;
  }
  return (PVZ2UIButton *)0x0;
}


/* Sexy::Widget* UI::Dialog::GetChildWidget<Sexy::Widget>(Sexy::Widget*, std::string const&) */

Widget * UI::Dialog::GetChildWidget<Sexy::Widget>(Widget *param_1,string *param_2)

{
  Widget *pWVar1;
  
  pWVar1 = (Widget *)GetChildWidget(param_1,param_2);
  if (pWVar1 != (Widget *)0x0) {
    pWVar1 = (Widget *)WidgetFactory<Sexy::Widget*>::GetWidget(pWVar1);
    return pWVar1;
  }
  return (Widget *)0x0;
}

