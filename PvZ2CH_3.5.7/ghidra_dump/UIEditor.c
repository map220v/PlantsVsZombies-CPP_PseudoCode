// Class: UIEditor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::GetLayoutName() */

void __thiscall UIEditor::GetLayoutName(UIEditor *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"uieditor");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIEditor::OnClose() */

void __thiscall UIEditor::OnClose(UIEditor *this)

{
  FUN_05474ff8(&s_strLayoutPath);
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))
            ((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x140));
  Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x140));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
  *(undefined8 *)(this + 0x140) = 0;
  UI::Dialog::OnClose((Dialog *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall UIEditor::DrawAll(UIEditor *this,ModalFlags *param_1,Graphics *param_2)

{
  Color aCStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  Sexy::Color::Color(aCStack_18,3);
  UI::Selection::drawParent((Selection *)(this + 0x178),param_2,aCStack_18);
  Sexy::Color::Color(aCStack_28,5);
  Sexy::Color::Color(aCStack_18,6);
  UI::Selection::draw((Selection *)(this + 0x178),param_2,aCStack_28,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::getTargetWindow(int, int) */

void __thiscall UIEditor::getTargetWindow(UIEditor *this,int param_1,int param_2)

{
  bool bStack_11;
  int iStack_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::GetWidgetAtHelper
            ((WidgetContainer *)this,param_1,param_2,0x10,&bStack_11,&iStack_10,&iStack_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIEditor::setMouseType(int) */

void __thiscall UIEditor::setMouseType(UIEditor *this,int param_1)

{
  *(int *)(this + 0x1a4) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::getUniqueName(std::string const&) */

void UIEditor::getUniqueName(string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  string *in_x8;
  uint uVar3;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c();
  Sexy::StrFormat("%s_%d",uVar1,0);
  while (lVar2 = UI::Dialog::GetWidget((Dialog *)param_1,in_x8), lVar2 != 0) {
    uVar3 = uVar3 + 1;
    uVar1 = FUN_0547429c();
    Sexy::StrFormat("%s_%d",asStack_10,uVar1,(ulong)uVar3);
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::getBestName(std::string const&) */

void UIEditor::getBestName(string *param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  std::string::string(asStack_28,"");
  nop();
  lVar2 = FUN_05474178();
  if (lVar2 != 0) {
    do {
      pbVar3 = (byte *)FUN_054741b0();
      if (*pbVar3 - 0x30 < 10) {
        FUN_05475c50();
      }
      else {
        FUN_05474ff8(asStack_28);
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_05474178();
    } while (uVar6 < uVar4);
  }
  uVar1 = FUN_0547419c(asStack_28);
  if ((uVar1 & 0xff) == 0) {
    local_2c = uVar1 & 0xff;
    Sexy::StringToInt(asStack_28,(int *)&local_2c);
    FUN_05474680();
    FUN_05475ffc(asStack_20);
    uVar5 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("%s%d",asStack_18,uVar5,(ulong)local_2c);
    while (lVar2 = UI::Dialog::GetWidget((Dialog *)param_1,asStack_18), lVar2 != 0) {
      uVar1 = local_2c + 1;
      local_2c = uVar1;
      uVar5 = FUN_0547429c(asStack_20);
      Sexy::StrFormat("%s%d",asStack_10,uVar5,(ulong)uVar1);
      FUN_05474278(asStack_18,asStack_10);
      std::string::~string(asStack_10);
    }
    thunk_FUN_05475e00();
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  else {
    getUniqueName(param_1);
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::initPropertySheet() */

void __thiscall UIEditor::initPropertySheet(UIEditor *this)

{
  long lVar1;
  int iVar2;
  UIProperty *this_00;
  long *plVar3;
  UIPropertySheet *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  this_00 = (UIProperty *)UIPropertySheet::AddProperty(pUVar4,0,(string *)&DAT_06b87200,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIProperty::SetReadOnly(this_00,true);
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,1,(string *)&DAT_06b87020,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,2,(string *)&DAT_06b87208,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,3,(string *)&DAT_06b87080,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,4,(string *)&DAT_06b871a0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,5,(string *)&DAT_06b87220,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,6,(string *)&DAT_06b87068,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,7,(string *)&DAT_06b87028,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,8,(string *)&DAT_06b87188,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,9,(string *)&DAT_06b87190,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,10,(string *)&DAT_06b87198,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0xb,(string *)&DAT_06b87270,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0xc,(string *)&DAT_06b87168,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0xd,(string *)&DAT_06b87010,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0xe,(string *)&DAT_06b87078,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0xf,(string *)&DAT_06b87088,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0x10,(string *)&DAT_06b871a8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0x11,(string *)&DAT_06b871f8,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0x12,(string *)&DAT_06b871f0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0x13,(string *)&DAT_06b87218,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar4 = *(UIPropertySheet **)(this + 0x148);
  std::string::string(asStack_10,"");
  UIPropertySheet::AddProperty(pUVar4,0x14,(string *)&DAT_06b87070,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x148);
  iVar2 = FUN_04b76530(300);
  (**(code **)(*plVar3 + 0x198))
            (plVar3,*(int *)(this + 0x50) - iVar2,0,iVar2,*(undefined4 *)(this + 0x54));
  (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
  lVar1 = ___stack_chk_guard;
  *(undefined1 *)(*(long *)(this + 0x148) + 0x59) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIEditor::initDialogSheet() */

void __thiscall UIEditor::initDialogSheet(UIEditor *this)

{
  int iVar1;
  
  iVar1 = FUN_04b76530(300);
  (**(code **)(**(long **)(this + 0x150) + 0x198))
            (*(long **)(this + 0x150),*(int *)(this + 0x50) - iVar1,0,iVar1,
             *(undefined4 *)(this + 0x54));
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
  *(undefined1 *)(*(long *)(this + 0x150) + 0x59) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::checkMouseType(int, int) */

void __thiscall UIEditor::checkMouseType(UIEditor *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  FastCurve aFStack_48 [8];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Selection::getSelectBox();
  lVar2 = FUN_04b7619c(local_40[0]);
  if (lVar2 == 0) {
    setMouseType(this,0);
  }
  else {
    Sexy::FastCurve::SetOutRange(aFStack_48,(float)param_1,(float)param_2);
    iVar1 = UI::WndBox::getMouseType((WndBox *)local_40,(Vector2 *)aFStack_48);
    setMouseType(this,iVar1);
  }
  UI::WndBox::~WndBox((WndBox *)local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIEditor::MouseDown(int, int, int, int) */

void UIEditor::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  UIEditor *this;
  
  this = (UIEditor *)(ulong)(uint)param_1;
  if (*(int *)(this + 0x1a0) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x1a0) = 1;
  checkMouseType(this,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::LayoutMenus(bool) */

void __thiscall UIEditor::LayoutMenus(UIEditor *this,bool param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = (uint)param_1;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar3 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar5 = (long *)*puVar4;
      (**(code **)(*plVar5 + 0x198))
                (plVar5,0,iVar3,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
      iVar2 = FUN_04b76530(5);
      iVar3 = iVar3 + iVar2 + *(int *)((long)plVar5 + 0x54);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar5 = (long *)*puVar4;
      (**(code **)(*plVar5 + 0x198))
                (plVar5,uVar6,0,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54));
      iVar3 = FUN_04b76530(2);
      uVar6 = uVar6 + iVar3 + (int)plVar5[10];
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::HidePopupMenu(int) */

void __thiscall UIEditor::HidePopupMenu(UIEditor *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x160));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x160));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar4 = (long *)*puVar3;
    if ((plVar4 != (long *)0x0) && (iVar2 = FUN_04b761a0(plVar4[0x1d]), iVar2 != param_1)) {
      (**(code **)(*plVar4 + 0x338))(plVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::toWidgetRecursively(Sexy::Widget*, std::vector<UIWidgetType,
   std::allocator<UIWidgetType> >&) */

void __thiscall UIEditor::toWidgetRecursively(UIEditor *this,Widget *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  UIWidgetType *this_00;
  Widget *pWVar4;
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
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      getBestName((string *)this);
      FUN_05474278(lVar3 + 8,(string *)&local_10);
      std::string::~string((string *)&local_10);
      this_00 = (UIWidgetType *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      pWVar4 = (Widget *)UIWidgetType::ToWidget(this_00,(Widget *)0x0);
      if (pWVar4 != (Widget *)0x0) {
        (**(code **)(*(long *)param_1 + 0x60))(param_1,pWVar4);
        lVar3 = WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar4);
        if (lVar3 != 0) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          UI::Dialog::SetButtonListener
                    ((Dialog *)this,(PVZ2UIButton *)pWVar4,*(int *)(lVar3 + 0x10),
                     (ButtonListener *)(this + 0xd8));
        }
      }
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      toWidgetRecursively(this,pWVar4,(vector *)(lVar3 + 0x88));
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


/* UIEditor::UIEditor() */

void __thiscall UIEditor::UIEditor(UIEditor *this)

{
  UISingletonDialog<UIEditor>::UISingletonDialog((UISingletonDialog<UIEditor> *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_0696ea70;
  *(undefined **)(this + 0xd8) = &DAT_0696edc0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_0696ee08;
  *(undefined8 *)(this + 0x150) = 0;
  Sexy::Point::Point((Point *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  UI::Selection::Selection((Selection *)(this + 0x178));
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  Set8BytesTo0(this + 0x1a8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1b0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1e0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x210));
  StringHelper::SexyStringCacheEnabled = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::openFile(std::string const&) */

void __thiscall UIEditor::openFile(UIEditor *this,string *param_1)

{
  char cVar1;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_18,3);
  std::operator+(asStack_18,(string *)&DAT_06b87210);
  std::operator+(asStack_10,param_1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  UISingletonDialog<UIEditor>::CloseDialog();
  cVar1 = (**(code **)(**(long **)(gLawnApp + 0x28) + 0x110))
                    (*(long **)(gLawnApp + 0x28),asStack_28,0);
  if (cVar1 == '\0') {
    GetFolder(asStack_20,3);
    std::operator+(asStack_20,(string *)&DAT_06b87210);
    std::operator+(asStack_18,(string *)&DAT_06b87018);
    FUN_05474278(asStack_28,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    cVar1 = (**(code **)(**(long **)(gLawnApp + 0x28) + 0x110))
                      (*(long **)(gLawnApp + 0x28),asStack_28,0);
    if (cVar1 == '\0') {
      FUN_05474ff8(&s_strLayoutPath);
      goto LAB_04b77940;
    }
  }
  thunk_FUN_05475e00(&s_strLayoutPath,asStack_28);
LAB_04b77940:
  UISingletonDialog<UIEditor>::ShowDialog();
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::refreshDialogSheet() */

void __thiscall UIEditor::refreshDialogSheet(UIEditor *this)

{
  bool bVar1;
  string *psVar2;
  char *__s;
  int iVar3;
  UIPropertySheet *pUVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIPropertySheet::ClearAllProperties(*(UIPropertySheet **)(this + 0x150));
  pUVar4 = *(UIPropertySheet **)(this + 0x150);
  if (this[0x129] == (UIEditor)0x0) {
    __s = "0";
  }
  else {
    __s = "1";
  }
  std::string::string((string *)&local_10,__s);
  UIPropertySheet::AddProperty(pUVar4,0,(string *)&DAT_06b87008,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                       ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                        (this + 0xe0));
  iVar3 = 1;
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0xe0));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    psVar2 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    UIPropertySheet::AddProperty
              (*(UIPropertySheet **)(this + 0x150),iVar3,(string *)&DAT_06b87030,psVar2);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
    iVar3 = iVar3 + 1;
  }
  pUVar4 = *(UIPropertySheet **)(this + 0x150);
  std::string::string((string *)&local_10,"");
  UIPropertySheet::AddProperty(pUVar4,iVar3,(string *)&DAT_06b87030,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  UIPropertySheet::Layout(*(UIPropertySheet **)(this + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::createWindow() */

void __thiscall UIEditor::createWindow(UIEditor *this)

{
  UIEditor *pUVar1;
  char cVar2;
  UIEditor *pUVar3;
  long lVar4;
  undefined8 uVar5;
  size_t in_x2;
  size_t sVar6;
  UIEditor *pUVar7;
  string asStack_c0 [8];
  UIWidgetType aUStack_b8 [8];
  undefined1 auStack_b0 [12];
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [16];
  undefined4 local_70;
  long local_8;
  
  pUVar1 = this + 0x1a8;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(pUVar1);
  if (cVar2 == '\0') {
    pUVar3 = (UIEditor *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
    pUVar7 = this;
    if (pUVar3 != (UIEditor *)0x0) {
      pUVar7 = pUVar3;
    }
    UIWidgetType::UIWidgetType(aUStack_b8);
    getUniqueName((string *)this);
    FUN_05474278(auStack_b0,asStack_c0);
    std::string::~string(asStack_c0);
    thunk_FUN_05475e00(aUStack_b8,pUVar1);
    std::string::append(asStack_90,"text",in_x2);
    sVar6 = 0;
    lVar4 = FUN_05474374(pUVar1,"Radio");
    if (lVar4 == -1) {
      sVar6 = 0;
      lVar4 = FUN_05474374(pUVar1,"Button");
      if (lVar4 != -1) {
        std::string::append(asStack_88,"IMAGE_UI_GENERIC_LIGHT_BUTTON_PURPLE",sVar6);
        std::string::append(asStack_80,"IMAGE_UI_GENERIC_LIGHT_BUTTON_PURPLE_DOWN",sVar6);
      }
    }
    else {
      std::string::append(asStack_88,"IMAGE_UI_GENERIC_RADIO_N",sVar6);
      std::string::append(asStack_80,"IMAGE_UI_GENERIC_RADIO_S",sVar6);
      local_70 = 0;
    }
    if (pUVar7 != (UIEditor *)0x0) {
      local_a4 = (float)(*(int *)(pUVar7 + 0x50) / 2);
      local_a0 = (float)(*(int *)(pUVar7 + 0x54) / 2);
      local_9c = 0x42c80000;
      local_98 = 0x42c80000;
    }
    uVar5 = UIWidgetType::ToWidget(aUStack_b8,(Widget *)0x0);
    (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,uVar5);
    *(undefined4 *)(this + 0x1a0) = 0;
    UIWidgetType::~UIWidgetType(aUStack_b8);
  }
  else {
    uVar5 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::refreshPropertySheet(Sexy::Widget*) */

void __thiscall UIEditor::refreshPropertySheet(UIEditor *this,Widget *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  char *__s;
  code *pcVar4;
  UIPropertySheet *pUVar5;
  string asStack_c0 [8];
  UIWidgetType aUStack_b8 [8];
  string asStack_b0 [8];
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  char local_94;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  uint local_70;
  float local_6c;
  float local_68;
  Color aCStack_64 [16];
  Color aCStack_54 [16];
  uint local_44;
  uint local_40;
  float local_3c;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Widget *)0x0) {
    UIWidgetType::UIWidgetType(aUStack_b8);
    UIWidgetType::FromWidget(aUStack_b8,param_1,false);
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87200,(string *)aUStack_b8);
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87020,asStack_b0);
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_a4);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87080,asStack_c0);
    std::string::~string(asStack_c0);
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_a0);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b871a0,asStack_c0);
    std::string::~string(asStack_c0);
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_9c);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87220,asStack_c0);
    std::string::~string(asStack_c0);
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_98);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87068,asStack_c0);
    std::string::~string(asStack_c0);
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    if (local_94 == '\0') {
      __s = "0";
    }
    else {
      __s = "1";
    }
    std::string::string(asStack_c0,__s);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87168,asStack_c0);
    std::string::~string(asStack_c0);
    nop();
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%d",asStack_c0,(ulong)local_a8);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87208,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87208);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87208);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87028,asStack_90);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87028);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87028);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87188,asStack_88);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87188);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87188);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87190,asStack_80);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87190);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87190);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87198,asStack_78);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87198);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87198);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%d",asStack_c0,(ulong)local_70);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87270,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87270);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87270);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_6c);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87010,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87010);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87010);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_68);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87078,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87078);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87078);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    uVar3 = Sexy::Color::ToInt(aCStack_64);
    Sexy::StrFormat("%.8X",asStack_c0,uVar3 & 0xffffffff);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b871a8,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b871a8);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b871a8);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    uVar3 = Sexy::Color::ToInt(aCStack_54);
    Sexy::StrFormat("%.8X",asStack_c0,uVar3 & 0xffffffff);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b871f8,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b871f8);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b871f8);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%d",asStack_c0,(ulong)local_44);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87088,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87088);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87088);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%d",asStack_c0,(ulong)local_40);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b871f0,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b871f0);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b871f0);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::SetPropertyValue
              (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87218,asStack_38);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87218);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87218);
      (*pcVar4)(plVar2,uVar1);
    }
    pUVar5 = *(UIPropertySheet **)(this + 0x148);
    Sexy::StrFormat("%f",asStack_c0,(double)local_3c);
    UIPropertySheet::SetPropertyValue(pUVar5,(string *)&DAT_06b87070,asStack_c0);
    std::string::~string(asStack_c0);
    plVar2 = (long *)UIPropertySheet::GetProperty
                               (*(UIPropertySheet **)(this + 0x148),(string *)&DAT_06b87070);
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x158);
      uVar1 = UIWidgetType::HasProperty(aUStack_b8,(string *)&DAT_06b87070);
      (*pcVar4)(plVar2,uVar1);
    }
    UIPropertySheet::Layout(*(UIPropertySheet **)(this + 0x148));
    UIWidgetType::~UIWidgetType(aUStack_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIEditor::MouseDrag(int, int) */

void __thiscall UIEditor::MouseDrag(UIEditor *this,int param_1,int param_2)

{
  Selection *this_00;
  char cVar1;
  Widget *pWVar2;
  int iVar3;
  
  if (*(int *)(this + 0x1a0) != 1) {
    if (*(int *)(this + 0x1a0) == 2) {
      this_00 = (Selection *)(this + 0x178);
      cVar1 = UI::Selection::isDraging(this_00);
      if (cVar1 != '\0') {
        UI::Selection::dragMove(this_00,param_1,param_2);
        return;
      }
      UI::Selection::endDrag(this_00);
      pWVar2 = (Widget *)UI::Selection::getSelectWindow(this_00);
      refreshPropertySheet(this,pWVar2);
      *(undefined4 *)(this + 0x1a0) = 0;
    }
    return;
  }
  iVar3 = *(int *)(this + 0x1a4);
  if ((0xb < iVar3) || (iVar3 == 0)) {
    checkMouseType(this,param_1,param_2);
    iVar3 = *(int *)(this + 0x1a4);
  }
  cVar1 = UI::Selection::beginDrag((Selection *)(this + 0x178),param_1,param_2,iVar3);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x1a0) = 2;
    return;
  }
  *(undefined4 *)(this + 0x1a0) = 0;
  return;
}


/* UIEditor::selectWindow(Sexy::Widget*, bool) */

void __thiscall UIEditor::selectWindow(UIEditor *this,Widget *param_1,bool param_2)

{
  Selection *this_00;
  char cVar1;
  Widget *pWVar2;
  UIWidgetRadio *pUVar3;
  UITabContent *pUVar4;
  
  this_00 = (Selection *)(this + 0x178);
  pWVar2 = (Widget *)UI::Selection::getSelectWindow(this_00);
  if (param_1 != pWVar2) {
    cVar1 = UITabControl::IsTabButton(param_1);
    if (cVar1 == '\0') {
      do {
        cVar1 = UIWidgetType::IsAutoWidget(param_1);
        if (cVar1 == '\0') goto joined_r0x04b78614;
        param_1 = *(Widget **)(param_1 + 0x20);
      } while (param_1 != (Widget *)0x0);
      param_1 = (Widget *)0x0;
    }
    else {
      pUVar3 = (UIWidgetRadio *)WidgetFactory<UIWidgetRadio*>::GetWidget(param_1);
      param_1 = (Widget *)
                WidgetFactory<UITabControl*>::GetWidget
                          (*(Widget **)(*(long *)(param_1 + 0x20) + 0x20));
      pUVar4 = (UITabContent *)UITabControl::GetTab((UITabControl *)param_1,pUVar3);
      UITabControl::SetTabSelected((UITabControl *)param_1,pUVar4);
    }
joined_r0x04b78614:
    if (!param_2) {
      UI::Selection::clear(this_00);
    }
    UI::Selection::selectWindow(this_00,param_1);
    if ((*(long *)(this + 0x148) != 0) && (*(char *)(*(long *)(this + 0x148) + 0x6c) != '\0')) {
      refreshPropertySheet(this,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnMenuSelectOperator(int) */

void __thiscall UIEditor::OnMenuSelectOperator(UIEditor *this,int param_1)

{
  char cVar1;
  bool bVar2;
  Widget *pWVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  Widget *pWVar7;
  Widget *pWVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar3 = (Widget *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
  if ((pWVar3 != (Widget *)0x0) && (pWVar7 = *(Widget **)(pWVar3 + 0x20), pWVar7 != (Widget *)0x0))
  {
    switch(param_1) {
    case 0xd5:
      local_18 = FUN_04b77398(*(undefined8 *)(pWVar7 + 8));
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(pWVar7 + 8));
      pWVar7 = (Widget *)0x0;
      while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
            bVar2) {
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        pWVar8 = (Widget *)*plVar6;
        if (pWVar8 == pWVar3) {
          if (pWVar7 != (Widget *)0x0) {
            selectWindow(this,pWVar7,false);
          }
          break;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        pWVar7 = pWVar8;
      }
      break;
    case 0xd6:
      pWVar7 = pWVar7 + 8;
      local_18 = FUN_04b77398(*(undefined8 *)pWVar7);
      while( true ) {
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)pWVar7);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        if (pWVar3 == (Widget *)*plVar6) {
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
          local_10 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)pWVar7);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (bVar2) {
            puVar4 = (undefined8 *)
                     std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
            if ((Widget *)*puVar4 != (Widget *)0x0) {
              selectWindow(this,(Widget *)*puVar4,false);
            }
          }
          break;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
      break;
    case 0xd7:
      cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                        ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                         (pWVar3 + 8));
      if (cVar1 == '\0') {
        local_10 = FUN_04b77398(*(undefined8 *)(pWVar3 + 8));
        puVar4 = (undefined8 *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_10);
        selectWindow(this,(Widget *)*puVar4,false);
      }
      uVar5 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                        ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(pWVar3 + 8));
      Sexy::StrFormat("child size: %d",(string *)&local_10,uVar5);
      std::string::~string((string *)&local_10);
      break;
    case 0xd8:
      if (this != (UIEditor *)pWVar7) {
        selectWindow(this,pWVar7,false);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnMenuAddExOperator(int) */

void __thiscall UIEditor::OnMenuAddExOperator(UIEditor *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Widget *pWVar6;
  UIWidgetText *this_00;
  UIWidgetImage *this_01;
  PVZ2UIButton *this_02;
  long lVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  Color *__n;
  code *pcVar10;
  PVZ2UIImage aPStack_78 [56];
  Color aCStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0xda:
    uVar5 = WidgetFactory<PVZ2UIButton*>::GetTypeName();
    thunk_FUN_05475e00(this + 0x1a8,uVar5);
    pWVar6 = (Widget *)createWindow(this);
    this_02 = (PVZ2UIButton *)WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar6);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b871c8,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06b87038,1);
    PVZ2UIButton::SetDialogStates(this_02,aPStack_78,(PVZ2UIImage *)aCStack_40);
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b871c8);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    *(undefined4 *)(this_02 + 0x50) = uVar2;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b871c8);
    uVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
    *(undefined4 *)(this_02 + 0x54) = uVar2;
    FUN_05476f98(this_02 + 0xd8);
    *(undefined4 *)(this_02 + 0xd4) = 0x58;
    std::string::append((string *)(this_02 + 0xc0),"UIButton_Close",0x58);
    iVar3 = FUN_04b76530(0x23);
    iVar1 = *(int *)(*(long *)(this_02 + 0x20) + 0x50);
    iVar4 = FUN_04b76530(10);
    (**(code **)(*(long *)this_02 + 0x1a8))(this_02,iVar1 - iVar3,-iVar4);
    selectWindow(this,pWVar6,false);
    HidePopupMenu(this,0xda);
    break;
  case 0xdb:
    uVar5 = WidgetFactory<PVZ2UIButton*>::GetTypeName();
    thunk_FUN_05475e00(this + 0x1a8,uVar5);
    pWVar6 = (Widget *)createWindow(this);
    lVar7 = WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar6);
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87090);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    *(undefined4 *)(lVar7 + 0x50) = uVar2;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87090);
    uVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
    *(undefined4 *)(lVar7 + 0x54) = uVar2;
    std::string::string((string *)aPStack_78,"[DIALOG_STRING_OK]");
    StringHelper::ToStringValue((string *)aPStack_78);
    FUN_054766c8(lVar7 + 0xd8,aCStack_40);
    FUN_05476c50(aCStack_40);
    std::string::~string((string *)aPStack_78);
    nop();
    selectWindow(this,pWVar6,false);
    HidePopupMenu(this,0xdb);
    break;
  case 0xdc:
    uVar5 = WidgetFactory<PVZ2UIButton*>::GetTypeName();
    thunk_FUN_05475e00(this + 0x1a8,uVar5);
    pWVar6 = (Widget *)createWindow(this);
    lVar7 = WidgetFactory<PVZ2UIButton*>::GetWidget(pWVar6);
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87090);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    *(undefined4 *)(lVar7 + 0x50) = uVar2;
    pSVar9 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87090);
    uVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
    *(undefined4 *)(lVar7 + 0x54) = uVar2;
    std::string::string((string *)aPStack_78,"[DIALOG_STRING_CANCEL]");
    StringHelper::ToStringValue((string *)aPStack_78);
    FUN_054766c8(lVar7 + 0xd8,aCStack_40);
    FUN_05476c50(aCStack_40);
    std::string::~string((string *)aPStack_78);
    nop();
    selectWindow(this,pWVar6,false);
    HidePopupMenu(this,0xdc);
    break;
  case 0xdd:
    uVar5 = WidgetFactory<UIWidgetImage*>::GetTypeName();
    thunk_FUN_05475e00(this + 0x1a8,uVar5);
    pWVar6 = (Widget *)createWindow(this);
    this_01 = (UIWidgetImage *)WidgetFactory<UIWidgetImage*>::GetWidget(pWVar6);
    std::string::string((string *)aCStack_40,"IMAGE_UI_GENERIC_ERROR");
    UIWidgetImage::SetImage(this_01,(string *)aCStack_40);
    std::string::~string((string *)aCStack_40);
    nop();
    selectWindow(this,pWVar6,false);
    HidePopupMenu(this,0xdd);
    break;
  case 0xde:
    uVar5 = WidgetFactory<UIWidgetText*>::GetTypeName();
    __n = aCStack_40;
    thunk_FUN_05475e00(this + 0x1a8,uVar5);
    pWVar6 = (Widget *)createWindow(this);
    this_00 = (UIWidgetText *)WidgetFactory<UIWidgetText*>::GetWidget(pWVar6);
    uVar2 = FUN_04b76530(0x46);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,*(undefined4 *)(*(long *)(this_00 + 0x20) + 0x50),uVar2);
    UIWidgetText::SetFontIndex(this_00,6);
    FUN_04b76370(this_00 + 0xe0);
    pcVar10 = *(code **)(*(long *)this_00 + 0x170);
    Sexy::Color::Color(__n,1);
    (*pcVar10)(this_00,0);
    std::string::append((string *)(this_00 + 0xc0),"UIText_Title",(size_t)__n);
    selectWindow(this,pWVar6,false);
    HidePopupMenu(this,0xde);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIEditor::MouseUp(int, int, int, int) */

void UIEditor::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  Selection *this;
  char cVar1;
  UIEditor *this_00;
  Widget *pWVar2;
  
  this_00 = (UIEditor *)(ulong)(uint)param_1;
  if (*(int *)(this_00 + 0x1a0) != 1) {
    if (*(int *)(this_00 + 0x1a0) == 2) {
      this = (Selection *)(this_00 + 0x178);
      cVar1 = UI::Selection::isDraging(this);
      if (cVar1 == '\0') {
        *(undefined4 *)(this_00 + 0x1a0) = 0;
      }
      else {
        UI::Selection::endDrag(this);
        pWVar2 = (Widget *)UI::Selection::getSelectWindow(this);
        refreshPropertySheet(this_00,pWVar2);
        *(undefined4 *)(this_00 + 0x1a0) = 0;
      }
    }
    return;
  }
  pWVar2 = (Widget *)getTargetWindow(this_00,param_2,param_3);
  selectWindow(this_00,pWVar2,false);
  *(undefined4 *)(this_00 + 0x1a0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnPropertyChanged(UIProperty*) */

void __thiscall UIEditor::OnPropertyChanged(UIEditor *this,UIProperty *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Widget *pWVar4;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string asStack_d8 [8];
  Sexy aSStack_d0 [8];
  string local_c8 [16];
  UIWidgetType aUStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_b8);
  pWVar4 = (Widget *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
  UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
  FUN_05474278(aUStack_b8,local_c8);
  std::string::~string(local_c8);
  if ((pWVar4 == (Widget *)0x0) ||
     (bVar1 = std::operator!=((string *)(pWVar4 + 200),(string *)aUStack_b8), bVar1)) {
    UIWidgetType::~UIWidgetType(aUStack_b8);
    goto LAB_04b78dd0;
  }
  UIWidgetType::FromWidget(aUStack_b8,pWVar4,false);
  Set8BytesTo0(asStack_d8);
  if (param_1 == (UIProperty *)0x0) {
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    FUN_05474278(auStack_b0,local_c8);
    std::string::~string(local_c8);
LAB_04b79684:
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    FUN_05474278(auStack_90,local_c8);
    std::string::~string(local_c8);
LAB_04b796b0:
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    Sexy::Upper(aSStack_d0,extraout_x1_03);
    FUN_05474278(auStack_88,local_c8);
    std::string::~string(local_c8);
    std::string::~string((string *)aSStack_d0);
LAB_04b796ec:
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    Sexy::Upper(aSStack_d0,extraout_x1_04);
    FUN_05474278(auStack_80,local_c8);
    std::string::~string(local_c8);
    std::string::~string((string *)aSStack_d0);
LAB_04b79728:
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    Sexy::Upper(aSStack_d0,extraout_x1_05);
    FUN_05474278(auStack_78,local_c8);
    std::string::~string(local_c8);
    std::string::~string((string *)aSStack_d0);
LAB_04b79764:
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    local_94 = StringHelper::ToBool(local_c8);
    std::string::~string(local_c8);
  }
  else {
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87020);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(auStack_b0,local_c8);
      std::string::~string(local_c8);
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87208);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_a8 = StringHelper::ToInt(asStack_d8);
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87080);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_a4 = StringHelper::ToFloat(asStack_d8);
      if (param_1 != (UIProperty *)0x0) goto LAB_04b78eac;
LAB_04b79260:
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(auStack_90,local_c8);
      std::string::~string(local_c8);
      goto LAB_04b796b0;
    }
LAB_04b78eac:
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b871a0);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_a0 = StringHelper::ToFloat(asStack_d8);
      if (param_1 == (UIProperty *)0x0) goto LAB_04b79684;
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87220);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_9c = StringHelper::ToFloat(asStack_d8);
      if (param_1 == (UIProperty *)0x0) goto LAB_04b79260;
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87068);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_98 = StringHelper::ToFloat(asStack_d8);
      if (param_1 == (UIProperty *)0x0) goto LAB_04b79684;
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87028);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(auStack_90,local_c8);
      std::string::~string(local_c8);
      if (param_1 == (UIProperty *)0x0) goto LAB_04b796b0;
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87188);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      Sexy::Upper(aSStack_d0,extraout_x1_02);
      FUN_05474278(auStack_88,local_c8);
      std::string::~string(local_c8);
      std::string::~string((string *)aSStack_d0);
      if (param_1 != (UIProperty *)0x0) goto LAB_04b78f9c;
      goto LAB_04b796ec;
    }
LAB_04b78f9c:
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87190);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      Sexy::Upper(aSStack_d0,extraout_x1_01);
      FUN_05474278(auStack_80,local_c8);
      std::string::~string(local_c8);
      std::string::~string((string *)aSStack_d0);
      if (param_1 != (UIProperty *)0x0) goto LAB_04b78fcc;
      goto LAB_04b79728;
    }
LAB_04b78fcc:
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87198);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      Sexy::Upper(aSStack_d0,extraout_x1_00);
      FUN_05474278(auStack_78,local_c8);
      std::string::~string(local_c8);
      std::string::~string((string *)aSStack_d0);
      if (param_1 != (UIProperty *)0x0) goto LAB_04b78ffc;
      goto LAB_04b79764;
    }
LAB_04b78ffc:
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87270);
    std::string::~string(local_c8);
    if (cVar2 != '\0') {
      UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
      FUN_05474278(asStack_d8,local_c8);
      std::string::~string(local_c8);
      local_70 = StringHelper::ToInt(asStack_d8);
      if (param_1 == (UIProperty *)0x0) goto LAB_04b79764;
    }
    UIProperty::GetName();
    cVar2 = std::operator==(local_c8,(string *)&DAT_06b87168);
    std::string::~string(local_c8);
    if (cVar2 == '\0') {
LAB_04b7905c:
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b87010);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        local_6c = StringHelper::ToFloat(asStack_d8);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b87078);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        local_68 = StringHelper::ToFloat(asStack_d8);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b871a8);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        iVar3 = StringHelper::ToColor(asStack_d8);
        Sexy::Color::Color((Color *)local_c8,iVar3);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b871f8);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        iVar3 = StringHelper::ToColor(asStack_d8);
        Sexy::Color::Color((Color *)local_c8,iVar3);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b87088);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        local_44 = StringHelper::ToInt(asStack_d8);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b871f0);
      std::string::~string(local_c8);
      if (cVar2 != '\0') {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        FUN_05474278(asStack_d8,local_c8);
        std::string::~string(local_c8);
        local_40 = StringHelper::ToInt(asStack_d8);
        if (param_1 == (UIProperty *)0x0) goto LAB_04b7978c;
      }
      UIProperty::GetName();
      cVar2 = std::operator==(local_c8,(string *)&DAT_06b87218);
      std::string::~string(local_c8);
      if (cVar2 == '\0') {
LAB_04b791ac:
        UIProperty::GetName();
        cVar2 = std::operator==(local_c8,(string *)&DAT_06b87070);
        std::string::~string(local_c8);
        if (cVar2 != '\0') {
          UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
          FUN_05474278(asStack_d8,local_c8);
          std::string::~string(local_c8);
          local_3c = StringHelper::ToFloat(asStack_d8);
        }
      }
      else {
        UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
        Sexy::Upper(aSStack_d0,extraout_x1);
        FUN_05474278(auStack_38,local_c8);
        std::string::~string(local_c8);
        std::string::~string((string *)aSStack_d0);
        if (param_1 != (UIProperty *)0x0) goto LAB_04b791ac;
      }
      UIWidgetType::ToWidget(aUStack_b8,pWVar4);
      std::string::~string(asStack_d8);
      UIWidgetType::~UIWidgetType(aUStack_b8);
      goto LAB_04b78dd0;
    }
    UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
    local_94 = StringHelper::ToBool(local_c8);
    std::string::~string(local_c8);
    if (param_1 != (UIProperty *)0x0) goto LAB_04b7905c;
  }
LAB_04b7978c:
  UIPropertySheet::GetPropertyValue(*(string **)(this + 0x148));
  Sexy::Upper(aSStack_d0,extraout_x1_06);
  FUN_05474278(auStack_38,local_c8);
  std::string::~string(local_c8);
  std::string::~string((string *)aSStack_d0);
  UIWidgetType::ToWidget(aUStack_b8,pWVar4);
  std::string::~string(asStack_d8);
  UIWidgetType::~UIWidgetType(aUStack_b8);
LAB_04b78dd0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::UnloadUIEditorGroups() */

void __thiscall UIEditor::UnloadUIEditorGroups(UIEditor *this)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  LawnApp *this_01;
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x210);
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


/* UIEditor::~UIEditor() */

void __thiscall UIEditor::~UIEditor(UIEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_0696ea70;
  *(undefined **)(this + 0xd8) = &DAT_0696edc0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_0696ee08;
  UnloadUIEditorGroups(this);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x210));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x1e0));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x1b0));
  std::string::~string((string *)(this + 0x1a8));
  UI::Selection::~Selection((Selection *)(this + 0x178));
  std::vector<UIEditorMenu*,std::allocator<UIEditorMenu*>>::~vector
            ((vector<UIEditorMenu*,std::allocator<UIEditorMenu*>> *)(this + 0x160));
  UISingletonDialog<UIEditor>::~UISingletonDialog((UISingletonDialog<UIEditor> *)this);
  return;
}


/* UIEditor::~UIEditor() */

void __thiscall UIEditor::~UIEditor(UIEditor *this)

{
  ~UIEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnDialogPropertyChanged(UIProperty*) */

void __thiscall UIEditor::OnDialogPropertyChanged(UIEditor *this,UIProperty *param_1)

{
  LawnApp *this_00;
  char cVar1;
  bool bVar2;
  UIEditor UVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  string *psVar9;
  ulong uVar10;
  undefined8 uVar11;
  UIProperty *pUVar12;
  UIPropertySheet *this_01;
  UIProperty *this_02;
  string asStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  set<std::string,std::less<std::string>,std::allocator<std::string>> asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined8 *)UITabContent::GetTabImage(*(UITabContent **)(this + 0x150));
  Set8BytesTo0(asStack_50);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            (asStack_38,(set *)(this + 0xe0));
  if (param_1 != (UIProperty *)0x0) {
    UIProperty::GetName();
    cVar1 = std::operator==((string *)&local_40,(string *)&DAT_06b87008);
    std::string::~string((string *)&local_40);
    if (cVar1 == '\0') goto LAB_04b79acc;
  }
  UIPropertySheet::GetPropertyValue(*(string **)(this + 0x150));
  UVar3 = (UIEditor)StringHelper::ToBool((string *)&local_40);
  this[0x129] = UVar3;
  std::string::~string((string *)&local_40);
LAB_04b79acc:
  uVar10 = 0;
  this_02 = (UIProperty *)0x0;
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0xe0));
  uVar11 = *puVar5;
  lVar6 = FUN_04b761c8(uVar11,puVar5[1]);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_04b761d4(uVar11,uVar10);
      pUVar12 = (UIProperty *)*puVar7;
      UIProperty::GetName();
      cVar1 = std::operator==((string *)&local_40,(string *)&DAT_06b87030);
      std::string::~string((string *)&local_40);
      if (cVar1 != '\0') {
        UIProperty::GetValue();
        FUN_05474278(asStack_50,(string *)&local_40);
        std::string::~string((string *)&local_40);
        cVar1 = FUN_0547419c(asStack_50);
        this_02 = pUVar12;
        if (cVar1 == '\0') {
          cVar1 = LawnApp::CanLoadGroup(gLawnApp,asStack_50);
          if (cVar1 == '\0') {
            cVar1 = FUN_0547419c(asStack_50);
            if (cVar1 == '\0') {
              uVar11 = FUN_0547429c(asStack_50);
              Sexy::StrFormat("No group: %s!",(string *)&local_40,uVar11);
              std::string::~string((string *)&local_40);
            }
          }
          else {
            UI::Dialog::AddResGroup((Dialog *)this,asStack_50);
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar11 = *puVar5;
      uVar8 = FUN_04b761c8(uVar11,puVar5[1]);
    } while (uVar10 < uVar8);
  }
  local_48 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                       (asStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)asStack_38);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    this_00 = gLawnApp;
    if (!bVar2) break;
    psVar9 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    LawnApp::DeleteGroup(this_00,psVar9);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
  }
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear(asStack_38);
  if (this_02 != (UIProperty *)0x0) {
    UIProperty::GetValue();
    cVar1 = FUN_0547419c((string *)&local_40);
    std::string::~string((string *)&local_40);
    if (cVar1 == '\0') {
      this_01 = *(UIPropertySheet **)(this + 0x150);
      iVar4 = UIProperty::GetID(this_02);
      std::string::string((string *)&local_40,"");
      UIPropertySheet::AddProperty(this_01,iVar4 + 1,(string *)&DAT_06b87030,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      UIPropertySheet::Layout(*(UIPropertySheet **)(this + 0x150));
    }
  }
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set(asStack_38);
  std::string::~string(asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::AddUIEditorResGroup(std::string const&) */

void __thiscall UIEditor::AddUIEditorResGroup(UIEditor *this,string *param_1)

{
  set<std::string,std::less<std::string>,std::allocator<std::string>> *this_00;
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x210);
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
/* UIEditor::createMenuFiles(UIEditorMenu*) */

void __thiscall UIEditor::createMenuFiles(UIEditor *this,UIEditorMenu *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint local_64;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  char local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x1e0));
  local_64 = 0xe5;
  GetFolder(asStack_40,3);
  std::operator+(asStack_40,(string *)&DAT_06b87210);
  std::string::~string(asStack_40);
  plVar7 = *(long **)(Sexy::gSexyAppBase + 0x28);
  PakFileDesc::PakFileDesc((PakFileDesc *)asStack_40);
  uVar3 = (**(code **)(*plVar7 + 0x160))(plVar7,asStack_60,asStack_40);
  do {
    while (local_38 == '\0') {
      FUN_05475d88(asStack_58,asStack_40);
      lVar4 = FUN_05474374(asStack_58,".json",0);
      lVar5 = FUN_05474184(asStack_58);
      if (lVar4 == lVar5 + -5) {
        FUN_05475ffc(asStack_50,asStack_58,0,lVar4);
        cVar2 = FUN_0547419c(asStack_50);
        uVar1 = local_64;
        if (cVar2 == '\0') {
          Sexy::ToSexyString((Sexy *)asStack_50,(string *)(ulong)local_64);
          UIEditorMenu::AddSubMenu(param_1,uVar1,awStack_48);
          FUN_05476c50(awStack_48);
          uVar6 = std::
                  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                  ::operator[]((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                                *)(this + 0x1e0),(int *)&local_64);
          thunk_FUN_05475e00(uVar6,asStack_58);
          local_64 = local_64 + 1;
        }
        std::string::~string(asStack_50);
      }
      std::string::~string(asStack_58);
      cVar2 = (**(code **)(*plVar7 + 0x170))(plVar7,uVar3,asStack_40);
      if (cVar2 == '\0') goto LAB_04b7a568;
    }
    cVar2 = (**(code **)(*plVar7 + 0x170))(plVar7,uVar3,asStack_40);
  } while (cVar2 != '\0');
LAB_04b7a568:
  (**(code **)(*plVar7 + 0x178))(plVar7,uVar3);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_40);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnMenuToolOperator(int) */

void __thiscall UIEditor::OnMenuToolOperator(UIEditor *this,int param_1)

{
  Widget *pWVar1;
  long *plVar2;
  Widget *pWVar3;
  undefined8 uVar4;
  string asStack_c0 [8];
  string asStack_b8 [8];
  undefined1 auStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar1 = (Widget *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
  if ((pWVar1 != (Widget *)0x0) && (plVar2 = *(long **)(pWVar1 + 0x20), plVar2 != (long *)0x0)) {
    switch(param_1) {
    case 0xe0:
      UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
      UIWidgetType::FromWidget((UIWidgetType *)asStack_b8,pWVar1,true);
      UIWidgetType::operator=((UIWidgetType *)&DAT_06b870b8,(UIWidgetType *)asStack_b8);
      uVar4 = FUN_0547429c(auStack_b0);
      Sexy::StrFormat("Copy Success, Name %s",asStack_c0,uVar4);
      std::string::~string(asStack_c0);
      UIWidgetType::~UIWidgetType((UIWidgetType *)asStack_b8);
      break;
    case 0xe1:
      pWVar3 = (Widget *)UIWidgetType::ToWidget((UIWidgetType *)&DAT_06b870b8,(Widget *)0x0);
      getBestName((string *)this);
      FUN_05474278(pWVar3 + 0xc0,asStack_b8);
      std::string::~string(asStack_b8);
      (**(code **)(*(long *)pWVar1 + 0x60))(pWVar1,pWVar3);
      toWidgetRecursively(this,pWVar3,(vector *)&DAT_06b87140);
      break;
    case 0xe2:
      (**(code **)(*plVar2 + 0xb0))(plVar2,pWVar1);
      HidePopupMenu(this,0xe2);
      break;
    case 0xe3:
      (**(code **)(*plVar2 + 0xb8))(plVar2,pWVar1);
      HidePopupMenu(this,0xe3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnMenuClicked(int) */

void __thiscall UIEditor::OnMenuClicked(UIEditor *this,int param_1)

{
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *pmVar1;
  bool bVar2;
  char cVar3;
  string *psVar4;
  undefined8 uVar5;
  Widget *pWVar6;
  long *plVar7;
  UIInputDialog *this_00;
  long lVar8;
  int local_64 [3];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate2<UIInputDialog*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  if (param_1 - 0x70U < 100) {
    pmVar1 = (map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x1b0);
    FUN_05474ff8(this + 0x1a8);
    local_58 = std::
               map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               ::find(pmVar1,local_64);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)pmVar1);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if (bVar2) {
      uVar5 = std::
              map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
              operator[](pmVar1,local_64);
      thunk_FUN_05475e00(this + 0x1a8,uVar5);
      pWVar6 = (Widget *)createWindow(this);
      selectWindow(this,pWVar6,false);
    }
    HidePopupMenu(this,local_64[0]);
  }
  else if (param_1 - 0xd5U < 4) {
    OnMenuSelectOperator(this,param_1);
  }
  else if (param_1 - 0xdaU < 5) {
    OnMenuAddExOperator(this,param_1);
  }
  else if (param_1 - 0xe0U < 4) {
    OnMenuToolOperator(this,param_1);
  }
  else if (param_1 - 0xe5U < 1000) {
    pmVar1 = (map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x1e0);
    local_58 = std::
               map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               ::find(pmVar1,local_64);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)pmVar1);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if (bVar2) {
      psVar4 = (string *)
               std::
               map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               ::operator[](pmVar1,local_64);
      openFile(this,psVar4);
    }
  }
  else {
    HidePopupMenu(this,param_1);
    switch(local_64[0]) {
    case 0x65:
      UISingletonDialog<UIEditor>::CloseDialog();
      break;
    case 0x66:
      FUN_05474ff8(&s_strLayoutPath);
      UISingletonDialog<UIEditor>::CloseDialog();
      UISingletonDialog<UIEditor>::ShowDialog();
      break;
    case 0x68:
      this_00 = (UIInputDialog *)UIInputDialog::Create(true);
      if (this_00 != (UIInputDialog *)0x0) {
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnInputDialogCallback);
        Sexy::Delegate2<UIInputDialog*,int>::
        Delegate2<UIEditor,void(UIEditor::*)(UIInputDialog*,int)>(aDStack_38,(string *)local_50);
        UIInputDialog::SetCallback(this_00,aDStack_38);
        Set8BytesTo0((string *)&local_58);
        cVar3 = FUN_0547419c(&s_strLayoutPath);
        if ((cVar3 == '\0') &&
           (lVar8 = thunk_FUN_054744e0(&s_strLayoutPath,0x2f,0xffffffffffffffff), lVar8 != -1)) {
          FUN_05475ffc((string *)local_50,&s_strLayoutPath,lVar8 + 1,0xffffffffffffffff);
          FUN_05474278((string *)&local_58,(string *)local_50);
          std::string::~string((string *)local_50);
        }
        std::string::string((string *)local_50,"Set File Name");
        UIInputDialog::SetMessage(this_00,(string *)local_50,(string *)&local_58);
        std::string::~string((string *)local_50);
        nop();
        std::string::~string((string *)&local_58);
      }
      break;
    case 0x6b:
      plVar7 = (long *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
      UI::Selection::clear((Selection *)(this + 0x178));
      if ((plVar7 != (long *)0x0) && (plVar7[4] != 0)) {
        (**(code **)(*plVar7 + 0x80))(plVar7,1,1);
        (**(code **)(*(long *)plVar7[4] + 0x68))((long *)plVar7[4],plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      break;
    case 0x6e:
      pWVar6 = (Widget *)UI::Selection::getSelectWindow((Selection *)(this + 0x178));
      if (pWVar6 != (Widget *)0x0) {
        (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
        (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
        refreshPropertySheet(this,pWVar6);
      }
      break;
    case 0x6f:
      (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
      (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
      refreshDialogSheet(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::saveFile() */

void __thiscall UIEditor::saveFile(UIEditor *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  PVZDB *pPVar6;
  Widget *pWVar7;
  string asStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [22];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = UILayoutDefinition::GetLayoutCurrent();
  if (lVar3 != 0) {
    *(UIEditor *)(lVar3 + 0x40) = this[0x129];
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x10));
    local_c0 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                         ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                          (this + 0xe0));
    while( true ) {
      local_b8[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)(this + 0xe0));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
      if (!bVar1) break;
      uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0);
      FUN_05475d88((string *)local_b8,uVar4);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x10),
                 (string *)local_b8);
      std::string::~string((string *)local_b8);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_c0);
    }
    std::vector<UIWidgetType,std::allocator<UIWidgetType>>::clear
              ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(lVar3 + 0x28));
    local_c8 = FUN_04b77398(*(undefined8 *)(this + 8));
    local_c0 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)&local_c0),
          bVar1) {
      puVar5 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_c8);
      pWVar7 = (Widget *)*puVar5;
      UIWidgetType::UIWidgetType((UIWidgetType *)local_b8);
      cVar2 = UIWidgetType::FromWidget((UIWidgetType *)local_b8,pWVar7,true);
      if (cVar2 != '\0') {
        std::vector<UIWidgetType,std::allocator<UIWidgetType>>::push_back
                  ((vector<UIWidgetType,std::allocator<UIWidgetType>> *)(lVar3 + 0x28),
                   (UIWidgetType *)local_b8);
      }
      UIWidgetType::~UIWidgetType((UIWidgetType *)local_b8);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_c8);
    }
    FUN_05475d88(asStack_d0,&s_strLayoutPath);
    cVar2 = FUN_0547419c(asStack_d0);
    if (cVar2 != '\0') {
      GetFolder((_List_const_iterator<Sexy::FontLayer> *)&local_c8,3);
      std::operator+((string *)&local_c8,(string *)&DAT_06b87210);
      std::operator+((string *)&local_c0,(string *)&DAT_06b87018);
      FUN_05474278(asStack_d0,(string *)local_b8);
      std::string::~string((string *)local_b8);
      std::string::~string((string *)&local_c0);
      std::string::~string((string *)&local_c8);
    }
    pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::SavePackageForTableToFile(pPVar6,0x57,asStack_d0,1,0);
    std::string::~string(asStack_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnInputDialogCallback(UIInputDialog*, int) */

void __thiscall UIEditor::OnInputDialogCallback(UIEditor *this,UIInputDialog *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (UIInputDialog *)0x0) {
    if (param_2 == 1) {
      UIInputDialog::GetInputText();
      cVar1 = FUN_0547419c(asStack_28);
      if (cVar1 != '\0') {
        thunk_FUN_05475e00(asStack_28,&DAT_06b87018);
      }
      lVar2 = FUN_05474374(asStack_28,".json",0);
      if (lVar2 == -1) {
        FUN_05475ad8(asStack_28,".json");
      }
      GetFolder(asStack_20,3);
      std::operator+(asStack_20,(string *)&DAT_06b87210);
      std::operator+(asStack_18,asStack_28);
      FUN_05474278(&s_strLayoutPath,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      saveFile(this);
      std::string::~string(asStack_28);
    }
    (**(code **)(*(long *)param_1 + 0x318))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::AddMenu(int, std::wstring const&) */

void __thiscall UIEditor::AddMenu(UIEditor *this,int param_1,wstring *param_2)

{
  UIEditorMenu *this_00;
  code *pcVar1;
  UIEditorMenu *local_58;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x130);
  UIEditorMenu::UIEditorMenu(this_00);
  pcVar1 = *(code **)(*(long *)this_00 + 0x328);
  local_58 = this_00;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnMenuClicked);
  Sexy::Delegate1<int>::Delegate1<UIEditor,void(UIEditor::*)(int)>(aDStack_38,aCStack_50);
  (*pcVar1)(this_00,param_1,param_2,aDStack_38);
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),local_58);
  std::vector<UIEditorMenu*,std::allocator<UIEditorMenu*>>::push_back
            ((vector<UIEditorMenu*,std::allocator<UIEditorMenu*>> *)(this + 0x160),&local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditor::OnCreate() */

void __thiscall UIEditor::OnCreate(UIEditor *this)

{
  int iVar1;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *this_00;
  LawnApp *pLVar2;
  char cVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  undefined8 *puVar4;
  string *psVar5;
  ulong uVar6;
  vector *pvVar7;
  UIEditorCanvas *this_02;
  UIEditorMenu *pUVar8;
  string *psVar9;
  UIPropertySheet *pUVar10;
  char *__s;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int local_64;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<UIProperty*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_0547419c(&s_strLayoutPath);
  if (cVar3 == '\0') {
    this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)UILayoutDefinition::GetLayoutByPath((string *)&s_strLayoutPath);
  }
  else {
    this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)UILayoutDefinition::GetLayout((string *)&DAT_06b87018);
  }
  if (this_01 ==
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0) {
    uVar13 = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x328))(this);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(this_01);
    uVar12 = 0;
    while( true ) {
      uVar13 = *puVar4;
      uVar6 = FUN_04b761b4(uVar13,puVar4[1]);
      if (uVar6 <= uVar12) break;
      psVar5 = (string *)FUN_04b761c0(uVar13,uVar12);
      UI::Dialog::AddResGroup((Dialog *)this,psVar5);
      uVar12 = uVar12 + 1;
    }
    this_00 = (map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
               *)(this + 0x1b0);
    std::string::string(asStack_50,"UI_MainMenu");
    AddUIEditorResGroup(this,asStack_50);
    std::string::~string(asStack_50);
    nop();
    *(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
      *)(this + 0x129) = this_01[0x40];
    this[0x59] = (UIEditor)0x0;
    Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    pvVar7 = (vector *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this_01);
    UI::Dialog::InstantiateWidget_Recursively((Dialog *)this,(Widget *)this,pvVar7);
    UI::Dialog::AttachLawnApp((Dialog *)this);
    this_02 = ::operator_new(0xe0);
    UIEditorCanvas::UIEditorCanvas(this_02,this);
    pLVar2 = gLawnApp;
    lVar11 = *(long *)this_02;
    *(UIEditorCanvas **)(this + 0x140) = this_02;
    (**(code **)(lVar11 + 0x198))
              (this_02,0,0,*(undefined4 *)(pLVar2 + 0xd4),*(undefined4 *)(pLVar2 + 0xd8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    FUN_05478178(asStack_50,L"Close",asStack_58);
    AddMenu(this,0x65,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742ca0,asStack_58);
    AddMenu(this,0x66,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742cb0,asStack_58);
    pUVar8 = (UIEditorMenu *)AddMenu(this,0x67,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    createMenuFiles(this,pUVar8);
    FUN_05478178(asStack_50,&DAT_0573aac8,asStack_58);
    AddMenu(this,0x68,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742cc8,asStack_58);
    pUVar8 = (UIEditorMenu *)AddMenu(this,0x69,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
              (this_00);
    local_64 = 0x70;
    FUN_05478178(asStack_50,L"Widget",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,0x70,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"Widget",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIButton",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIButton",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIRadio",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIRadio",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIText",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIText",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIImage",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIImage",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIAnim",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIAnim",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"Background",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"Background",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UITabControl",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UITabControl",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,&DAT_05742e08,asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UITab",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIScroll",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIScroll",(size_t)psVar5);
    iVar1 = local_64 + 1;
    local_64 = iVar1;
    FUN_05478178(asStack_50,L"UIPage",asStack_58);
    psVar5 = asStack_50;
    UIEditorMenu::AddSubMenu(pUVar8,iVar1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    psVar9 = (string *)
             std::
             map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
             operator[](this_00,&local_64);
    std::string::append(psVar9,"UIPage",(size_t)psVar5);
    local_64 = local_64 + 1;
    FUN_05478178(asStack_50,L"AddEx",asStack_58);
    pUVar8 = (UIEditorMenu *)AddMenu(this,0x6a,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"CloseBtn",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xda,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742ea8,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xdb,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"CancelBtn",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xdc,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"ErrorImage",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xdd,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"TitleText",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xde,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"Delete",asStack_58);
    AddMenu(this,0x6b,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742f60,asStack_58);
    pUVar8 = (UIEditorMenu *)AddMenu(this,0x6c,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05742f78,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xe0,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"Paste",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xe1,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"MoveFront",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xe2,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"MoveBack",asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xe3,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"Select",asStack_58);
    pUVar8 = (UIEditorMenu *)AddMenu(this,0x6d,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05743018,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xd5,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05743030,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xd6,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05743048,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xd7,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,&DAT_05743068,asStack_58);
    UIEditorMenu::AddSubMenu(pUVar8,0xd8,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"Property",asStack_58);
    AddMenu(this,0x6e,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(asStack_50,L"Dialog",asStack_58);
    AddMenu(this,0x6f,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    LayoutMenus(this,false);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPropertyChanged);
    Sexy::Delegate1<UIProperty*>::Delegate1<UIEditor,void(UIEditor::*)(UIProperty*)>
              (aDStack_38,asStack_50);
    pUVar10 = ::operator_new(0x158);
    UIPropertySheet::UIPropertySheet(pUVar10,aDStack_38);
    *(UIPropertySheet **)(this + 0x148) = pUVar10;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),pUVar10);
    initPropertySheet(this);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnDialogPropertyChanged);
    Sexy::Delegate1<UIProperty*>::Delegate1<UIEditor,void(UIEditor::*)(UIProperty*)>
              (aDStack_38,asStack_50);
    pUVar10 = ::operator_new(0x158);
    UIPropertySheet::UIPropertySheet(pUVar10,aDStack_38);
    *(UIPropertySheet **)(this + 0x150) = pUVar10;
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),pUVar10);
    initDialogSheet(this);
    GetFolder(asStack_58,3);
    std::operator+(asStack_58,(string *)&DAT_06b87210);
    std::operator+(asStack_50,(string *)&DAT_06b87018);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    fwrite("UIEditor path:",1,0xe,(FILE *)getaddrinfo);
    __s = (char *)FUN_0547429c(asStack_60);
    fputs(__s,(FILE *)getaddrinfo);
    std::string::~string(asStack_60);
    uVar13 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

