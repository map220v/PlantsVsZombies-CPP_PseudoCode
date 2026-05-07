// Class: UICustomLevelFilter


/* UICustomLevelFilter::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomLevelFilter::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelFilter::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelFilter::ScrollTargetReached(UICustomLevelFilter *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelFilter::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomLevelFilter::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomLevelFilter::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UICustomLevelFilter::ScrollTargetInterrupted(UICustomLevelFilter *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomLevelFilter::OnClickFilterItemWidget(int) */

int UICustomLevelFilter::OnClickFilterItemWidget(int param_1)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::GetLayoutName() */

void __thiscall UICustomLevelFilter::GetLayoutName(UICustomLevelFilter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelFilter");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::SetSelectAllWidgets(std::vector<CustomLevelFilterItemWidget*,
   std::allocator<CustomLevelFilterItemWidget*> >&, bool) */

void __thiscall
UICustomLevelFilter::SetSelectAllWidgets(UICustomLevelFilter *this,vector *param_1,bool param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_035e5cfc(*plVar2 + 800,param_2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelFilter::ClickAllBtn(int) */

void __thiscall UICustomLevelFilter::ClickAllBtn(UICustomLevelFilter *this,int param_1)

{
  byte bVar1;
  long lVar2;
  
  if (param_1 == 0x3f1) {
    lVar2 = *(long *)(this + 0x140);
    if (lVar2 != 0) {
      bVar1 = FUN_035e5d04(*(undefined1 *)(lVar2 + 0x308));
      FUN_035e5d08(lVar2 + 0x308,bVar1 ^ 1);
      SetSelectAllWidgets(this,(vector *)(this + 0x150),(bool)(bVar1 ^ 1));
      return;
    }
  }
  else if ((param_1 == 0x3f2) && (lVar2 = *(long *)(this + 0x148), lVar2 != 0)) {
    bVar1 = FUN_035e5d04(*(undefined1 *)(lVar2 + 0x308));
    FUN_035e5d08(lVar2 + 0x308,bVar1 ^ 1);
    SetSelectAllWidgets(this,(vector *)(this + 0x168),(bool)(bVar1 ^ 1));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::FilterLevels(CustomLevelItemWidget*) */

void UICustomLevelFilter::FilterLevels(CustomLevelItemWidget *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  undefined1 uVar7;
  undefined8 local_68;
  undefined8 local_60;
  CustomNetworkPreviewData aCStack_58 [16];
  int local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x150));
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x150));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
        uVar7 = 0, bVar2) {
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    cVar3 = FUN_035e5cf8(*(undefined1 *)(*plVar6 + 800));
    if (cVar3 != '\0') {
      CustomLevelItemWidget::GetData();
      iVar1 = local_48;
      iVar5 = FUN_035e5cf4(*(undefined4 *)(*plVar6 + 0x308));
      CustomNetworkPreviewData::~CustomNetworkPreviewData(aCStack_58);
      if (iVar1 == iVar5) {
        uVar7 = 1;
        break;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x168));
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x168));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
        uVar4 = 0, bVar2) {
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    cVar3 = FUN_035e5cf8(*(undefined1 *)(*plVar6 + 800));
    if (cVar3 != '\0') {
      CustomLevelItemWidget::GetData();
      iVar1 = local_48;
      iVar5 = FUN_035e5cf4(*(undefined4 *)(*plVar6 + 0x308));
      CustomNetworkPreviewData::~CustomNetworkPreviewData(aCStack_58);
      uVar4 = uVar7;
      if (iVar1 == iVar5) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::CreateSelectAllBtn(Sexy::Widget*, int) */

void __thiscall
UICustomLevelFilter::CreateSelectAllBtn(UICustomLevelFilter *this,Widget *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLevelFilterSelectAllButton *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Widget *)0x0) {
    this_00 = (CustomLevelFilterSelectAllButton *)0x0;
  }
  else {
    uVar1 = FUN_035e5c60(*(undefined4 *)(param_1 + 0x50));
    uVar2 = FUN_035e5c64(*(undefined4 *)(param_1 + 0x54));
    this_00 = ::operator_new(0x348);
    CustomLevelFilterSelectAllButton::CustomLevelFilterSelectAllButton(this_00,param_2);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar1,uVar2);
    FUN_035e5d08(this_00 + 0x308,1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ClickAllBtn);
    Sexy::Delegate1<int>::Delegate1<UICustomLevelFilter,void(UICustomLevelFilter::*)(int)>
              (aDStack_38,aCStack_50);
    CustomLevelFilterSelectAllButton::SetClickCallback(this_00,aDStack_38);
    TodStringTranslate(L"[CUSTOM_LEVEL_FILTER_ALL]");
    PVZ1ModeSelectLevelChallengeWidget::SetDescStr(this_00,aCStack_50);
    FUN_05476c50(aCStack_50);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* UICustomLevelFilter::UICustomLevelFilter() */

void __thiscall UICustomLevelFilter::UICustomLevelFilter(UICustomLevelFilter *this)

{
  UISingletonDialog<UICustomLevelFilter>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelFilter> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06664410;
  *(undefined **)(this + 0xd8) = &DAT_06664770;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelFilter_066647b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::clear
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x150));
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::clear
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x168));
  return;
}


/* UICustomLevelFilter::~UICustomLevelFilter() */

void __thiscall UICustomLevelFilter::~UICustomLevelFilter(UICustomLevelFilter *this)

{
  *(undefined ***)this = &PTR_GetClass_06664410;
  *(undefined **)(this + 0xd8) = &DAT_06664770;
  *(undefined ***)(this + 0x138) = &PTR__UICustomLevelFilter_066647b8;
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::~vector
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x168));
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::~vector
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x150));
  UISingletonDialog<UICustomLevelFilter>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelFilter> *)this);
  return;
}


/* non-virtual thunk to UICustomLevelFilter::~UICustomLevelFilter() */

void __thiscall UICustomLevelFilter::~UICustomLevelFilter(UICustomLevelFilter *this)

{
  ~UICustomLevelFilter(this + -0x138);
  return;
}


/* UICustomLevelFilter::~UICustomLevelFilter() */

void __thiscall UICustomLevelFilter::~UICustomLevelFilter(UICustomLevelFilter *this)

{
  ~UICustomLevelFilter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomLevelFilter::~UICustomLevelFilter() */

void __thiscall UICustomLevelFilter::~UICustomLevelFilter(UICustomLevelFilter *this)

{
  ~UICustomLevelFilter(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::CreateSelectItemWidgets(Sexy::Widget*, std::vector<int, std::allocator<int>
   >, int) */

void UICustomLevelFilter::CreateSelectItemWidgets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,
               ReceivedDataCallback *param_1,long *param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UIScrollingWidget *this;
  Image *pIVar7;
  Image *pIVar8;
  Widget *this_00;
  CustomLevelFilterItemWidget *pCVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  CustomLevelFilterItemWidget *local_78;
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (param_3 != (long *)0x0) {
    iVar2 = FUN_035e74e0(10);
    iVar3 = FUN_035e5c60((int)param_3[10]);
    iVar4 = FUN_035e5c64(*(undefined4 *)((long)param_3 + 0x54));
    iVar5 = FUN_035e74e0(0x32);
    iVar6 = FUN_035e5d44(*param_4,param_4[1]);
    if (iVar6 != 0) {
      this = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this,(ScrollWidgetListener *)(param_1 + 0x138));
      Sexy::Insets::Insets(aIStack_70,0,0,iVar3,iVar4);
      (**(code **)(*(long *)this + 0x1a0))(this,aIStack_70);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this,2);
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7d20);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7e10);
      Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this,pIVar7,pIVar8);
      (**(code **)(*param_3 + 0x60))(param_3,this);
      this_00 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_00);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,0,iVar3,iVar2 + (iVar2 + iVar5) * (int)((float)iVar6 * 0.5));
      (**(code **)(*(long *)this + 0x60))(this,this_00);
      if (0 < iVar6) {
        iVar3 = (iVar3 + iVar2 * -3) / 2;
        lVar12 = 0;
        do {
          uVar11 = (uint)lVar12;
          Sexy::Insets::Insets
                    (aIStack_60,iVar2 + (uVar11 & 1) * (iVar2 + iVar3),
                     iVar2 + (iVar2 + iVar5) * ((int)uVar11 >> 1),iVar3,iVar5);
          pCVar9 = ::operator_new(0x370);
          CustomLevelFilterItemWidget::CustomLevelFilterItemWidget(pCVar9,param_5 + uVar11);
          lVar1 = lVar12 + 1;
          local_78 = pCVar9;
          puVar10 = (undefined4 *)FUN_035e5ee4(*param_4,lVar12);
          FUN_035e5cec(pCVar9 + 0x308,*puVar10);
          (**(code **)(*(long *)local_78 + 0x1a0))(local_78,aIStack_60);
          (**(code **)(*(long *)local_78 + 0x350))(local_78);
          FUN_035e5cfc(local_78 + 800,1);
          pCVar9 = local_78;
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    (param_1,OnClickFilterItemWidget);
          Sexy::Delegate1<int>::Delegate1<UICustomLevelFilter,void(UICustomLevelFilter::*)(int)>
                    (aDStack_38,aCStack_50);
          CustomLevelFilterItemWidget::SetClickFunc(pCVar9,aDStack_38);
          (**(code **)(*(long *)this_00 + 0x60))(this_00,local_78);
          std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::
          push_back((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>
                     *)param_1_00,&local_78);
          lVar12 = lVar1;
        } while ((int)lVar1 < iVar6);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::InitView() */

void __thiscall UICustomLevelFilter::InitView(UICustomLevelFilter *this)

{
  UIWidgetImage *pUVar1;
  Widget *pWVar2;
  Widget *pWVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<int,std::allocator<int>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_20,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar1,true);
  std::string::string((string *)local_20,"worldselectbutton");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::string::string((string *)local_20,"stylebutton");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  uVar4 = CreateSelectAllBtn(this,pWVar2,0x3f1);
  *(undefined8 *)(this + 0x140) = uVar4;
  uVar4 = CreateSelectAllBtn(this,pWVar3,0x3f2);
  *(undefined8 *)(this + 0x148) = uVar4;
  std::string::string((string *)local_20,"worldContainer");
  uVar4 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::string::string((string *)local_20,"playstyleContainer");
  uVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  local_20[0] = 0;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_68,local_20);
    local_20[0] = local_20[0] + 1;
  } while (local_20[0] < 0x15);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  local_20[0] = 0;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,local_20);
    local_20[0] = local_20[0] + 1;
  } while (local_20[0] < 8);
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)avStack_68);
  CreateSelectItemWidgets((string *)local_20,this,uVar4,avStack_38,3000);
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::operator=
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x150),(vector *)local_20);
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::~vector
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             local_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)avStack_50);
  CreateSelectItemWidgets((string *)local_20,this,uVar5,avStack_38,0xc1c);
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::operator=
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             (this + 0x168),(vector *)local_20);
  std::vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>>::~vector
            ((vector<CustomLevelFilterItemWidget*,std::allocator<CustomLevelFilterItemWidget*>> *)
             local_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelFilter::OnCreate() */

undefined4 __thiscall UICustomLevelFilter::OnCreate(UICustomLevelFilter *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelFilter::RequestFilter() */

void __thiscall UICustomLevelFilter::RequestFilter(UICustomLevelFilter *this)

{
  char cVar1;
  uint uVar2;
  UICustomLevelChooseLevel *pUVar3;
  ulong uVar4;
  long *plVar5;
  char *__s;
  TGALogMgr *this_00;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  size_t __n;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_3d0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_3b8 [24];
  vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> avStack_3a0 [24];
  DString aDStack_388 [24];
  undefined4 local_370 [10];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [88];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UICustomLevelChooseLevel *)
           UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr();
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_3d0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_3b8);
  std::string::string((string *)local_370,"");
  uVar2 = operator|(0x10,8);
  __n = (size_t)uVar2;
  FUN_05462618(auStack_2e8,(string *)local_370,uVar2);
  std::string::~string((string *)local_370);
  nop();
  std::string::string((string *)local_370,"");
  FUN_05462618(auStack_178,(string *)local_370);
  std::string::~string((string *)local_370);
  nop();
  uVar8 = *(undefined8 *)(this + 0x150);
  uVar4 = FUN_035e5ed0(uVar8,*(undefined8 *)(this + 0x158));
  if (uVar4 != 0) {
    do {
      plVar5 = (long *)FUN_035e5edc(uVar8,uVar7);
      cVar1 = FUN_035e5cf8(*(undefined1 *)(*plVar5 + 800));
      if (cVar1 != '\0') {
        local_370[0] = (undefined4)uVar7;
        std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::
        push_back((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *
                  )avStack_3d0,(string *)local_370);
        lVar6 = FUN_035e5ed0(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
        if (uVar7 == lVar6 - 1U) {
          FUN_0546065c(auStack_2d8,uVar7 & 0xffffffff);
        }
        else {
          uVar8 = FUN_0546065c(auStack_2d8,uVar7 & 0xffffffff);
          FUN_054603b8(uVar8,&DAT_05593348);
        }
        uVar8 = *(undefined8 *)(this + 0x150);
        uVar4 = FUN_035e5ed0(uVar8,*(undefined8 *)(this + 0x158));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar8 = *(undefined8 *)(this + 0x168);
  uVar7 = 0;
  uVar4 = FUN_035e5ed0(uVar8,*(undefined8 *)(this + 0x170));
  if (uVar4 != 0) {
    do {
      plVar5 = (long *)FUN_035e5edc(uVar8,uVar7);
      cVar1 = FUN_035e5cf8(*(undefined1 *)(*plVar5 + 800));
      if (cVar1 != '\0') {
        local_370[0] = (undefined4)uVar7;
        std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::
        push_back((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *
                  )avStack_3b8,(string *)local_370);
        lVar6 = FUN_035e5ed0(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
        if (uVar7 == lVar6 - 1U) {
          FUN_0546065c(auStack_168,uVar7 & 0xffffffff);
        }
        else {
          uVar8 = FUN_0546065c(auStack_168,uVar7 & 0xffffffff);
          FUN_054603b8(uVar8,&DAT_05593348);
        }
        uVar8 = *(undefined8 *)(this + 0x168);
        uVar4 = FUN_035e5ed0(uVar8,*(undefined8 *)(this + 0x170));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)local_370);
  DString::DString(aDStack_388,8);
  __s = (char *)DString::c_str(aDStack_388);
  std::string::append((string *)local_370,__s,__n);
  DString::~DString(aDStack_388);
  FUN_05462824(aDStack_388,auStack_2e8);
  FUN_05474278(auStack_348,aDStack_388);
  std::string::~string((string *)aDStack_388);
  FUN_05462824(aDStack_388,auStack_178);
  FUN_05474278(auStack_340,aDStack_388);
  std::string::~string((string *)aDStack_388);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,(TGACustomLevelData *)local_370);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::vector
            (avStack_3a0,(vector *)avStack_3d0);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             aDStack_388,(vector *)avStack_3b8);
  UICustomLevelChooseLevel::RequestFilter(pUVar3,avStack_3a0,aDStack_388);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             aDStack_388);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            (avStack_3a0);
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)local_370);
  FUN_054617bc(auStack_178);
  FUN_054617bc(auStack_2e8);
  std::vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>>::~vector
            ((vector<CustomLevelNetworkLevelMode,std::allocator<CustomLevelNetworkLevelMode>> *)
             avStack_3b8);
  std::vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>>::~vector
            ((vector<CustomLevelNetworkWorldType,std::allocator<CustomLevelNetworkWorldType>> *)
             avStack_3d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UICustomLevelFilter::ButtonDepress(int) */

void __thiscall UICustomLevelFilter::ButtonDepress(UICustomLevelFilter *this,int param_1)

{
  if (param_1 != 1000) {
    if (param_1 != 0x3f0) {
      return;
    }
    RequestFilter(this);
  }
  UISingletonDialog<UICustomLevelFilter>::CloseDialog();
  return;
}


/* non-virtual thunk to UICustomLevelFilter::ButtonDepress(int) */

void __thiscall UICustomLevelFilter::ButtonDepress(UICustomLevelFilter *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

