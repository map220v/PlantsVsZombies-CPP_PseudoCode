// Class: UINewPVPSeedChooser


/* UINewPVPSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPVPSeedChooser::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPSeedChooser::ScrollTargetReached(UINewPVPSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPVPSeedChooser::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPVPSeedChooser::ScrollTargetInterrupted(UINewPVPSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::GetLayoutName() */

void __thiscall UINewPVPSeedChooser::GetLayoutName(UINewPVPSeedChooser *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPSeedChooser");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPVPSeedChooser::getItemDataIndexInChooser(int) */

ulong __thiscall
UINewPVPSeedChooser::getItemDataIndexInChooser(UINewPVPSeedChooser *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x1b8);
  uVar1 = FUN_0352d810(uVar5,*(undefined8 *)(this + 0x1c0));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    lVar2 = FUN_0352d81c(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(int *)(lVar2 + 0x20) != param_1);
  return uVar4;
}


/* UINewPVPSeedChooser::getItemDataIndexInBank(int) */

ulong __thiscall UINewPVPSeedChooser::getItemDataIndexInBank(UINewPVPSeedChooser *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x1d0);
  uVar1 = FUN_0352d810(uVar5,*(undefined8 *)(this + 0x1d8));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    lVar2 = FUN_0352d81c(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(int *)(lVar2 + 0x20) != param_1);
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::calcItemPositionInBank(int) */

void __thiscall UINewPVPSeedChooser::calcItemPositionInBank(UINewPVPSeedChooser *this,int param_1)

{
  int iVar1;
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0352e078(0x3f);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  fStack_c = (float)(param_1 * iVar1);
  local_10 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0,fStack_c);
}


/* UINewPVPSeedChooser::updateBank() */

void UINewPVPSeedChooser::updateBank(void)

{
  UINewPVPSeedChooser *in_x0;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float in_s1;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(in_x0 + 0x1d0);
    uVar1 = FUN_0352d810(uVar5,*(undefined8 *)(in_x0 + 0x1d8));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      lVar2 = FUN_0352d81c(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*(int *)(lVar2 + 0x30) != 2);
    plVar6 = *(long **)(lVar2 + 0x28);
    fVar7 = (float)calcItemPositionInBank(in_x0,*(int *)(lVar2 + 0x24));
    (**(code **)(*plVar6 + 0x1a8))(plVar6,(int)fVar7,(int)in_s1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UINewPVPSeedChooser::DrawAll(UINewPVPSeedChooser *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  LotteryResultProgressBar *this_00;
  Image *pIVar5;
  NewPVPMgr *this_01;
  long lVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  if (*(long *)(this + 0x1e8) != 0) {
    std::string::string((string *)&local_18,"UIImage_Preview_Container");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    (**(code **)(*plVar4 + 0xd0))(&local_28,plVar4);
    Sexy::Graphics::PushState(param_2);
    Sexy::Graphics::Translate(param_2,local_28,local_24);
    local_10 = 0;
    local_18 = 0xc;
    local_14 = 0xc;
    (**(code **)(**(long **)(this + 0x1e8) + 0x130))
              (*(long **)(this + 0x1e8),(string *)&local_18,param_2);
    Sexy::Graphics::PopState(param_2);
  }
  iVar8 = 0;
  iVar7 = 6;
  (**(code **)(**(long **)(this + 400) + 0xd0))(&local_30,*(long **)(this + 400));
  Sexy::Graphics::PushState(param_2);
  Sexy::Graphics::Translate(param_2,local_30,local_2c);
  local_20 = 0;
  local_28 = 4;
  local_24 = 4;
  std::string::string((string *)&local_18,"IMAGE_UI_PACKETS_READY");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_0352e078(0x3f);
  Sexy::Insets::Insets((Insets *)&local_18,0x96,0x96,0x96,0x8c);
  Sexy::Graphics::SetColor(param_2,(Color *)&local_18);
  Sexy::Graphics::SetColorizeImages(param_2,true);
  do {
    iVar3 = FUN_0352e078(5);
    iVar1 = iVar3 + iVar8;
    iVar8 = iVar8 + iVar2;
    std::string::string((string *)&local_18,"IMAGE_UI_PACKETS_READY");
    pIVar5 = (Image *)StringHelper::ToImage((string *)&local_18,false);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::Graphics::DrawImage(param_2,pIVar5,iVar3,iVar1);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  Sexy::Color::Color((Color *)&local_18,1);
  Sexy::Graphics::SetColor(param_2,(Color *)&local_18);
  Sexy::Graphics::SetColorizeImages(param_2,false);
  (**(code **)(**(long **)(this + 400) + 0x130))(*(long **)(this + 400),&local_28,param_2);
  iVar7 = 0;
  iVar8 = 0;
  do {
    this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar1 = iVar8 + 1;
    lVar6 = NewPVPMgr::GetPlantPacketInfo(this_01,iVar8);
    Sexy::StrFormat("IMAGE_UI_NEW_PVP_LEVEL_%d",(string *)&local_18,(ulong)*(uint *)(lVar6 + 4));
    pIVar5 = (Image *)StringHelper::ToImage((string *)&local_18,true);
    std::string::~string((string *)&local_18);
    Sexy::Graphics::DrawImage(param_2,pIVar5,0,iVar7);
    iVar7 = iVar7 + iVar2;
    iVar8 = iVar1;
  } while (iVar1 != 6);
  Sexy::Graphics::PopState(param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::UpdateUI() */

void __thiscall UINewPVPSeedChooser::UpdateUI(UINewPVPSeedChooser *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ChooserItemData *pCVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_48 [10];
  long *local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  iVar2 = FUN_0352e078(100);
  iVar8 = 0;
  iVar3 = FUN_0352e078(0x3f);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(long *)(this + 0x188) + 0x50) / iVar2;
  }
  while( true ) {
    uVar9 = *(undefined8 *)(this + 0x1b8);
    uVar5 = FUN_0352d810(uVar9,*(undefined8 *)(this + 0x1c0));
    if (uVar5 <= uVar7) break;
    pCVar4 = (ChooserItemData *)FUN_0352d81c(uVar9,uVar7);
    ChooserItemData::ChooserItemData((ChooserItemData *)local_48,pCVar4);
    iVar8 = 0;
    if (iVar1 != 0) {
      iVar8 = (int)uVar7 / iVar1;
    }
    (**(code **)(*local_20 + 0x198))
              (local_20,((int)uVar7 - iVar8 * iVar1) * iVar2,iVar8 * iVar3,iVar2,iVar3);
    ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
    uVar7 = uVar7 + 1;
  }
  local_48[0] = iVar3 + iVar8 * iVar3;
  piVar6 = eastl::max_alt<int>((int *)(*(long *)(this + 0x170) + 0x54),local_48);
  *(int *)(*(long *)(this + 0x188) + 0x54) = *piVar6;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::hasBeenSelected(int) */

void __thiscall UINewPVPSeedChooser::hasBeenSelected(UINewPVPSeedChooser *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1f8));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar2 == param_1)) break;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::UINewPVPSeedChooser() */

void __thiscall UINewPVPSeedChooser::UINewPVPSeedChooser(UINewPVPSeedChooser *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UINewPVPSeedChooser>::UISingletonDialog
            ((UISingletonDialog<UINewPVPSeedChooser> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06650d10;
  *(undefined **)(this + 0xd8) = &DAT_06651070;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPSeedChooser_066510b8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x140));
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1f0) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x228));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Card_Plant_BG");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::isBankFull() */

void __thiscall UINewPVPSeedChooser::isBankFull(UINewPVPSeedChooser *this)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = 1;
  local_8 = ___stack_chk_guard;
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x228));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x228));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar2 + 4) == -1) {
      uVar3 = 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::IsItemSelected(int) */

void __thiscall UINewPVPSeedChooser::IsItemSelected(UINewPVPSeedChooser *this,int param_1)

{
  bool bVar1;
  NewPVPMgr *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar2 = (undefined8 *)NewPVPMgr::GetCurrentSelectedPlants(this_00);
  uVar3 = FUN_035301ec(*puVar2);
  uVar4 = FUN_0353023c(puVar2[1]);
  local_18 = FUN_0353192c(uVar3,uVar4,param_1);
  local_10 = FUN_0353023c(puVar2[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* UINewPVPSeedChooser::deleteChooserPackets() */

void __thiscall UINewPVPSeedChooser::deleteChooserPackets(UINewPVPSeedChooser *this)

{
  (**(code **)(**(long **)(this + 0x188) + 0x80))(*(long **)(this + 0x188),0,0);
  (**(code **)(**(long **)(this + 400) + 0x80))(*(long **)(this + 400),0,0);
  std::vector<ChooserItemData,std::allocator<ChooserItemData>>::clear
            ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1b8));
  std::vector<ChooserItemData,std::allocator<ChooserItemData>>::clear
            ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::~UINewPVPSeedChooser() */

void __thiscall UINewPVPSeedChooser::~UINewPVPSeedChooser(UINewPVPSeedChooser *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPSeedChooser_066510b8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06650d10;
  *(undefined **)(this + 0xd8) = &DAT_06651070;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Card_Plant_BG");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x228))
  ;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  std::vector<ChooserItemData,std::allocator<ChooserItemData>>::~vector
            ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0));
  std::vector<ChooserItemData,std::allocator<ChooserItemData>>::~vector
            ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1b8));
  std::
  map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>::
  ~map((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
        *)(this + 0x140));
  UISingletonDialog<UINewPVPSeedChooser>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPSeedChooser> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPSeedChooser::~UINewPVPSeedChooser() */

void __thiscall UINewPVPSeedChooser::~UINewPVPSeedChooser(UINewPVPSeedChooser *this)

{
  ~UINewPVPSeedChooser(this + -0x138);
  return;
}


/* UINewPVPSeedChooser::~UINewPVPSeedChooser() */

void __thiscall UINewPVPSeedChooser::~UINewPVPSeedChooser(UINewPVPSeedChooser *this)

{
  ~UINewPVPSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPSeedChooser::~UINewPVPSeedChooser() */

void __thiscall UINewPVPSeedChooser::~UINewPVPSeedChooser(UINewPVPSeedChooser *this)

{
  ~UINewPVPSeedChooser(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::rebuildValidMapList() */

void __thiscall UINewPVPSeedChooser::rebuildValidMapList(UINewPVPSeedChooser *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  UINewPVPSeedChooserMapItem *this_00;
  int *piVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  string *this_01;
  string local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_80,"egypt");
  this_01 = (string *)&local_8;
  std::string::string(asStack_78,"pirate");
  std::string::string(asStack_70,"cowboy");
  std::string::string(asStack_68,"kongfu");
  std::string::string(asStack_60,"future");
  std::string::string(asStack_58,"eighties");
  std::string::string(asStack_50,"dark");
  std::string::string(asStack_48,"beach");
  std::string::string(asStack_40,"dino");
  std::string::string(asStack_38,"iceage");
  std::string::string(asStack_30,"lostcity");
  std::string::string(asStack_28,"modern");
  std::string::string(asStack_20,"steam");
  std::string::string(asStack_18,"renai");
  std::string::string(asStack_10,"heian");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_98,asStack_80,0xf,
             (string *)&local_a0);
  do {
    this_01 = this_01 + -8;
    std::string::~string(this_01);
  } while (this_01 != asStack_80);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_98);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_98);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    FUN_05475d88((string *)&local_b0,uVar4);
    local_b8[0] = (string)0x0;
    std::
    map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>::
    emplace<std::string&,bool>
              ((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                *)(this + 0x140),(string *)&local_b0,(bool *)local_b8);
    std::string::~string((string *)&local_b0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  iVar2 = FUN_0352e078(0x32);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_98);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_98);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    FUN_05475d88(local_b8,uVar4);
    this_00 = ::operator_new(0x118);
    UINewPVPSeedChooserMapItem::UINewPVPSeedChooserMapItem(this_00);
    FUN_05475d88((string *)&local_a0,local_b8);
    FUN_0352dfc0(asStack_80,this);
    UINewPVPSeedChooserMapItem::init(this_00,(string *)&local_a0,asStack_80,0);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)asStack_80);
    std::string::~string((string *)&local_a0);
    plVar6 = *(long **)(this + 0x1a0);
    pcVar7 = *(code **)(*plVar6 + 0x60);
    *(int *)((long)plVar6 + 0x54) = *(int *)((long)plVar6 + 0x54) + *(int *)(this_00 + 0x54);
    (*pcVar7)(plVar6,this_00);
    std::string::~string(local_b8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  lVar8 = *(long *)(this + 0x1b0);
  lVar9 = *(long *)(this + 0x1a0);
  iVar3 = FUN_0352d838(local_98,local_90);
  local_a0 = CONCAT44(local_a0._4_4_,iVar2 * iVar3);
  piVar5 = eastl::max_alt<int>((int *)(lVar8 + 0x54),(int *)&local_a0);
  *(int *)(lVar9 + 0x54) = *piVar5;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::initSelectedPlantMap() */

void __thiscall UINewPVPSeedChooser::initSelectedPlantMap(UINewPVPSeedChooser *this)

{
  undefined4 *puVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x228))
  ;
  local_c = 0;
  do {
    puVar1 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x228),&local_c);
    *puVar1 = 0xffffffff;
    local_c = local_c + 1;
  } while (local_c < 6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooser::selectPlant(int, int) */

void __thiscall UINewPVPSeedChooser::selectPlant(UINewPVPSeedChooser *this,int param_1,int param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  piVar1 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(this + 0x228),&local_4);
  *piVar1 = param_2;
  return;
}


/* UINewPVPSeedChooser::unSelectPlant(int) */

void __thiscall UINewPVPSeedChooser::unSelectPlant(UINewPVPSeedChooser *this,int param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  local_4 = param_1;
  puVar1 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                      (this + 0x228),&local_4);
  *puVar1 = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::getMinAvailableIndexInBank() */

void __thiscall UINewPVPSeedChooser::getMinAvailableIndexInBank(UINewPVPSeedChooser *this)

{
  bool bVar1;
  ChooserItemData *pCVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 local_70;
  undefined8 local_68;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  undefined8 local_48 [4];
  int aiStack_24 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1d0));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1d0));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar1) break;
    pCVar2 = (ChooserItemData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    ChooserItemData::ChooserItemData((ChooserItemData *)local_48,pCVar2);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_60,aiStack_24);
    ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_70);
  }
  for (local_70._0_4_ = 0; iVar6 = (int)local_70,
      uVar5 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                        ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                         (this + 0x228)), (ulong)(long)iVar6 < uVar5;
      local_70._0_4_ = (int)local_70 + 1) {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_60);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_60);
    local_68 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar3,uVar4,(exception_ptr *)&local_70);
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_60);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_68,(__normal_iterator *)local_48);
    iVar6 = (int)local_70;
    if (bVar1) goto LAB_035340bc;
  }
  iVar6 = -1;
LAB_035340bc:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::GetSelectedPlants() */

void UINewPVPSeedChooser::GetSelectedPlants(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (in_x0 + 0x228));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(in_x0 + 0x228));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)in_x8,(int *)(lVar2 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::addItemToBank(int, int) */

void __thiscall
UINewPVPSeedChooser::addItemToBank(UINewPVPSeedChooser *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  UINewPVPSeedChooserItem *this_00;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  int local_68;
  int local_64;
  TPoint<int> aTStack_60 [8];
  TPoint aTStack_58 [8];
  float local_50;
  float fStack_4c;
  ChooserItemData aCStack_48 [32];
  int local_28;
  int local_24;
  UINewPVPSeedChooserItem *local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = getItemDataIndexInChooser(this,param_1);
  if (iVar1 != -1) {
    lVar2 = FUN_0352d81c(*(undefined8 *)(this + 0x1b8));
    this_00 = ::operator_new(0x328);
    UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(this_00,param_1);
    FUN_0352d7b4(this_00 + 800,this);
    ChooserItemData::ChooserItemData(aCStack_48);
    local_28 = param_1;
    local_24 = param_2;
    local_20 = this_00;
    std::vector<ChooserItemData,std::allocator<ChooserItemData>>::push_back
              ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0),aCStack_48)
    ;
    iVar1 = getItemDataIndexInBank(this,param_1);
    if (iVar1 == -1) {
      ChooserItemData::~ChooserItemData(aCStack_48);
    }
    else {
      lVar3 = FUN_0352d81c(*(undefined8 *)(this + 0x1d0));
      (**(code **)(**(long **)(this + 400) + 0x60))(*(long **)(this + 400),this_00);
      *(undefined4 *)(lVar2 + 0x30) = 1;
      UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar2 + 0x28),2);
      *(undefined4 *)(lVar3 + 0x30) = 1;
      uVar6 = PVZ_T();
      *(undefined4 *)(lVar3 + 8) = uVar6;
      fVar7 = (float)PVZ_T();
      plVar4 = *(long **)(lVar2 + 0x28);
      pcVar5 = *(code **)(*plVar4 + 0xd0);
      *(float *)(lVar3 + 0xc) = fVar7 + 0.5;
      (*pcVar5)(aTStack_60,plVar4);
      (**(code **)(**(long **)(this + 400) + 0xd0))(aTStack_58,*(long **)(this + 400));
      Sexy::TPoint<int>::operator-(aTStack_60,aTStack_58);
      Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_50);
      fVar7 = (float)local_64;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)local_68,fVar7);
      *(ulong *)(lVar3 + 0x10) = CONCAT44(fStack_4c,local_50);
      uVar6 = calcItemPositionInBank(this,local_24);
      *(float *)(lVar3 + 0x1c) = fVar7;
      *(undefined4 *)(lVar3 + 0x18) = uVar6;
      UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar3 + 0x28),1);
      (**(code **)(**(long **)(lVar3 + 0x28) + 0x1a8))
                (*(long **)(lVar3 + 0x28),(int)local_50,(int)fStack_4c);
      selectPlant(this,*(int *)(lVar3 + 0x24),param_1);
      ChooserItemData::~ChooserItemData(aCStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::checkPreviousSelected() */

void __thiscall UINewPVPSeedChooser::checkPreviousSelected(UINewPVPSeedChooser *this)

{
  NewPVPMgr *this_00;
  vector *pvVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar1 = (vector *)NewPVPMgr::GetCurrentSelectedPlants(this_00);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_20,pvVar1);
  uVar5 = local_20;
  uVar2 = FUN_0352d7e0(local_20,local_18);
  if (uVar2 != 0) {
    do {
      piVar3 = (int *)FUN_0352d808(uVar5,uVar4);
      if (*piVar3 != -1) {
        addItemToBank(this,*piVar3,(int)uVar4);
        uVar5 = local_20;
        uVar2 = FUN_0352d7e0(local_20,local_18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::setItemState(int, NewPVPSeedChooserItemState) */

void __thiscall UINewPVPSeedChooser::setItemState(UINewPVPSeedChooser *this,int param_1,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UINewPVPSeedChooserItem *pUVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  int local_68;
  int local_64;
  TPoint<int> aTStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [4];
  int local_28;
  int local_24;
  UINewPVPSeedChooserItem *local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = getItemDataIndexInChooser(this,param_1);
  if (iVar2 != -1) {
    lVar3 = FUN_0352d81c(*(undefined8 *)(this + 0x1b8));
    iVar2 = *(int *)(lVar3 + 0x30);
    if (iVar2 != param_3) {
      if (param_3 == 1) {
        cVar1 = isBankFull(this);
        if ((cVar1 != '\0') || (*(int *)(lVar3 + 0x30) != 0)) goto LAB_03536908;
        pUVar4 = ::operator_new(0x328);
        UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(pUVar4,param_1);
        FUN_0352d7b4(pUVar4 + 800,this);
        ChooserItemData::ChooserItemData((ChooserItemData *)local_48);
        local_28 = param_1;
        local_20 = pUVar4;
        local_24 = getMinAvailableIndexInBank(this);
        std::vector<ChooserItemData,std::allocator<ChooserItemData>>::push_back
                  ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0),
                   (ChooserItemData *)local_48);
        iVar2 = getItemDataIndexInBank(this,param_1);
        if (iVar2 == -1) {
          ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
          goto LAB_03536908;
        }
        lVar5 = FUN_0352d81c(*(undefined8 *)(this + 0x1d0));
        (**(code **)(**(long **)(this + 400) + 0x60))(*(long **)(this + 400),pUVar4);
        *(undefined4 *)(lVar3 + 0x30) = 1;
        UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar3 + 0x28),2);
        *(undefined4 *)(lVar5 + 0x30) = 1;
        uVar8 = PVZ_T();
        *(undefined4 *)(lVar5 + 8) = uVar8;
        fVar9 = (float)PVZ_T();
        plVar7 = *(long **)(lVar3 + 0x28);
        pcVar6 = *(code **)(*plVar7 + 0xd0);
        *(float *)(lVar5 + 0xc) = fVar9 + 0.5;
        (*pcVar6)(aTStack_60,plVar7);
        (**(code **)(**(long **)(this + 400) + 0xd0))((TPoint *)&local_58,*(long **)(this + 400));
        Sexy::TPoint<int>::operator-(aTStack_60,(TPoint *)&local_58);
        Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_50);
        fVar9 = (float)local_64;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)local_68,fVar9);
        *(undefined8 *)(lVar5 + 0x10) = local_50;
        uVar8 = calcItemPositionInBank(this,local_24);
        *(float *)(lVar5 + 0x1c) = fVar9;
        *(undefined4 *)(lVar5 + 0x18) = uVar8;
        UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar5 + 0x28),1);
        (**(code **)(**(long **)(lVar5 + 0x28) + 0x1a8))
                  (*(long **)(lVar5 + 0x28),(int)(float)local_50,(int)local_50._4_4_);
        selectPlant(this,*(int *)(lVar5 + 0x24),param_1);
        ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
      }
      else if (param_3 == 0) {
        if ((iVar2 != 2) || (iVar2 = getItemDataIndexInBank(this,param_1), iVar2 == -1))
        goto LAB_03536908;
        lVar5 = FUN_0352d81c(*(undefined8 *)(this + 0x1d0),(long)iVar2);
        *(undefined4 *)(lVar3 + 0x30) = 0;
        UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar3 + 0x28),1);
        *(undefined4 *)(lVar5 + 0x30) = 0;
        plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20);
        (**(code **)(*plVar7 + 0x68))(plVar7,*(long *)(lVar5 + 0x28));
        if (*(long **)(lVar5 + 0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + 0x28) + 0x18))();
          *(undefined8 *)(lVar5 + 0x28) = 0;
        }
        unSelectPlant(this,*(int *)(lVar5 + 0x24));
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1d0));
        local_50 = __gnu_cxx::
                   __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                   ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                                *)&local_58,(long)iVar2);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_48,(__normal_iterator *)&local_50);
        std::vector<ChooserItemData,std::allocator<ChooserItemData>>::erase
                  ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0),
                   local_48[0]);
      }
      else if (param_3 == 2) {
        if (iVar2 == 1) {
          iVar2 = getItemDataIndexInBank(this,param_1);
          if (iVar2 == -1) goto LAB_03536908;
          lVar5 = FUN_0352d81c(*(undefined8 *)(this + 0x1d0));
          *(undefined4 *)(lVar5 + 0x30) = 2;
          *(undefined4 *)(lVar3 + 0x30) = 2;
        }
        else if (iVar2 == 2) {
          cVar1 = isBankFull(this);
          if (cVar1 != '\0') goto LAB_03536908;
          pUVar4 = ::operator_new(0x328);
          UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(pUVar4,param_1);
          FUN_0352d7b4(pUVar4 + 800,this);
          ChooserItemData::ChooserItemData((ChooserItemData *)local_48);
          local_28 = param_1;
          local_20 = pUVar4;
          local_24 = getMinAvailableIndexInBank(this);
          std::vector<ChooserItemData,std::allocator<ChooserItemData>>::push_back
                    ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1d0),
                     (ChooserItemData *)local_48);
          iVar2 = getItemDataIndexInBank(this,param_1);
          if (iVar2 == -1) {
            ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
            goto LAB_03536908;
          }
          lVar5 = FUN_0352d81c(*(undefined8 *)(this + 0x1d0));
          (**(code **)(**(long **)(this + 400) + 0x60))(*(long **)(this + 400),pUVar4);
          *(undefined4 *)(lVar3 + 0x30) = 2;
          UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar3 + 0x28),2);
          *(undefined4 *)(lVar5 + 0x30) = 2;
          UINewPVPSeedChooserItem::SetState(*(UINewPVPSeedChooserItem **)(lVar5 + 0x28),1);
          selectPlant(this,*(int *)(lVar5 + 0x24),param_1);
          ChooserItemData::~ChooserItemData((ChooserItemData *)local_48);
        }
      }
      updateBank();
    }
  }
LAB_03536908:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooser::onItemClicked(UINewPVPSeedChooserItem*) */

void __thiscall
UINewPVPSeedChooser::onItemClicked(UINewPVPSeedChooser *this,UINewPVPSeedChooserItem *param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x20) == *(long *)(this + 0x188)) {
    uVar1 = FUN_0352d7c4(*(undefined4 *)(param_1 + 0xd4));
    setItemState(this,uVar1,1);
    return;
  }
  if (*(long *)(param_1 + 0x20) != *(long *)(this + 400)) {
    return;
  }
  uVar1 = FUN_0352d7c4(*(undefined4 *)(param_1 + 0xd4));
  setItemState(this,uVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::clearBankItems() */

void __thiscall UINewPVPSeedChooser::clearBankItems(UINewPVPSeedChooser *this)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetSelectedPlants();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    setItemState(this,*puVar2,0);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooser::ButtonDepress(int) */

void __thiscall UINewPVPSeedChooser::ButtonDepress(UINewPVPSeedChooser *this,int param_1)

{
  char cVar1;
  NameMapperBase *this_00;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,param_1);
  if (cVar1 == '\0') {
    if (param_1 == 100) {
      UISingletonDialog<UINewPVPSeedChooser>::CloseDialog();
      return;
    }
    if (param_1 == 0x67) {
      clearBankItems(this);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UINewPVPSeedChooser::ButtonDepress(int) */

void __thiscall UINewPVPSeedChooser::ButtonDepress(UINewPVPSeedChooser *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03536f70 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* UINewPVPSeedChooser::updateItemsMoving() */

void __thiscall UINewPVPSeedChooser::updateItemsMoving(UINewPVPSeedChooser *this)

{
  bool bVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1d0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1d0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pfVar2 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    fVar6 = pfVar2[3];
    fVar4 = (float)PVZ_T();
    if (fVar4 <= fVar6) {
      if (pfVar2[0xc] == 1.4013e-45) {
        fVar4 = pfVar2[3];
        auVar5 = PVZ_T();
        fVar4 = CurveLerp<float>(auVar5,fVar4,auVar5._0_4_,pfVar2 + 4,pfVar2 + 6,3);
        fVar6 = pfVar2[3];
        *pfVar2 = fVar4;
        auVar5 = PVZ_T();
        fVar4 = CurveLerp<float>(auVar5,fVar6,auVar5._0_4_,pfVar2 + 5,pfVar2 + 7,3);
        pcVar3 = *(code **)(**(long **)(pfVar2 + 10) + 0x1a8);
        pfVar2[1] = fVar4;
        (*pcVar3)(*(long **)(pfVar2 + 10),(int)*pfVar2,(int)fVar4);
      }
    }
    else {
      setItemState(this,pfVar2[8],2);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPSeedChooser::Update() */

void __thiscall UINewPVPSeedChooser::Update(UINewPVPSeedChooser *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8) != (PVZ2UISeedChooserPreviewDisplay *)0x0)
  {
    PVZ2UISeedChooserPreviewDisplay::ManualUpdate
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8));
  }
  updateItemsMoving(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::setItemPreview(int) */

void __thiscall UINewPVPSeedChooser::setItemPreview(UINewPVPSeedChooser *this,int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  string *psVar4;
  PVZ2UISeedChooserPreviewDisplay *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1f0) != -1) {
    iVar1 = getItemDataIndexInChooser(this,*(int *)(this + 0x1f0));
    if (iVar1 == -1) goto LAB_035371c8;
    lVar2 = FUN_0352d81c(*(undefined8 *)(this + 0x1b8));
    FUN_0352d7bc(*(long *)(lVar2 + 0x28) + 0x319,0);
  }
  *(int *)(this + 0x1f0) = param_1;
  iVar1 = getItemDataIndexInChooser(this,param_1);
  if (iVar1 != -1) {
    lVar2 = FUN_0352d81c(*(undefined8 *)(this + 0x1b8));
    FUN_0352d7bc(*(long *)(lVar2 + 0x28) + 0x319,1);
    plVar3 = *(long **)(this + 0x1e8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x80))(plVar3,0,0);
      if (*(long **)(this + 0x1e8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x1e8) + 0x18))();
        *(undefined8 *)(this + 0x1e8) = 0;
      }
    }
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ServerPlantID::ServerPlantID(aSStack_18,param_1);
    ServerPlantID::ToString();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string(asStack_20);
    std::string::string((string *)aSStack_18,"UIImage_Preview_Container");
    lVar2 = UI::Dialog::GetWidget((Dialog *)this,(string *)aSStack_18);
    std::string::~string((string *)aSStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aSStack_18,(RtWeakPtrBase *)aRStack_28);
    pPVar5 = ::operator_new(0x148);
    PVZ2UISeedChooserPreviewDisplay::PVZ2UISeedChooserPreviewDisplay(pPVar5,aSStack_18);
    *(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8) = pPVar5;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_18);
    Sexy::ScrollWidget::EnableOverlays(*(ScrollWidget **)(this + 0x1e8),false);
    PVZ2UISeedChooserPreviewDisplay::SetIsShowLevelIcon
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8),false);
    PVZ2UISeedChooserPreviewDisplay::SetIsShowPlantPot
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8),false);
    PVZ2UISeedChooserPreviewDisplay::HideAvatar(*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x1e8))
    ;
    (**(code **)(**(long **)(this + 0x1e8) + 0x198))
              (*(long **)(this + 0x1e8),0,0,*(undefined4 *)(lVar2 + 0x50),
               *(undefined4 *)(lVar2 + 0x54));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
LAB_035371c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::isBlacklisted(std::string const&) */

void __thiscall UINewPVPSeedChooser::isBlacklisted(UINewPVPSeedChooser *this,string *param_1)

{
  bool bVar1;
  NewPVPMgr *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  puVar2 = (undefined8 *)NewPVPMgr::GetChooserPlantBlacklist(this_00);
  uVar3 = FUN_035301ec(*puVar2);
  uVar4 = FUN_0353023c(puVar2[1]);
  ServerPlantID::ServerPlantID(aSStack_18,param_1);
  ImageLib::Image::GetWidth((Image *)aSStack_18);
  local_28 = std::
             find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                       (uVar3,uVar4);
  local_20 = FUN_0353023c(puVar2[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::addItemToChooser(int) */

void __thiscall UINewPVPSeedChooser::addItemToChooser(UINewPVPSeedChooser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  PlantType *this_00;
  long lVar4;
  UINewPVPSeedChooserItem *this_01;
  RtWeakPtr aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [16];
  ServerPlantID aSStack_48 [32];
  int local_28;
  UINewPVPSeedChooserItem *local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ServerPlantID::ServerPlantID(aSStack_48,param_1);
  ServerPlantID::ToString();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_58);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
  if (bVar1) {
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    lVar4 = PlantType::GetProps(this_00);
    if (lVar4 != 0) {
      this_01 = ::operator_new(0x328);
      UINewPVPSeedChooserItem::UINewPVPSeedChooserItem(this_01,param_1);
      UINewPVPSeedChooserItem::SetState(this_01,1);
      FUN_0352d7b4(this_01 + 800,this);
      (**(code **)(**(long **)(this + 0x188) + 0x60))(*(long **)(this + 0x188),this_01);
      ChooserItemData::ChooserItemData((ChooserItemData *)aSStack_48);
      local_28 = param_1;
      local_20 = this_01;
      ServerPlantID::ServerPlantID((ServerPlantID *)asStack_58,param_1);
      ServerPlantID::ToString();
      cVar2 = isBlacklisted(this,asStack_60);
      std::string::~string(asStack_60);
      if (cVar2 != '\0') {
        local_18 = 3;
        UINewPVPSeedChooserItem::SetState(this_01,3);
      }
      std::vector<ChooserItemData,std::allocator<ChooserItemData>>::push_back
                ((vector<ChooserItemData,std::allocator<ChooserItemData>> *)(this + 0x1b8),
                 (ChooserItemData *)aSStack_48);
      ChooserItemData::~ChooserItemData((ChooserItemData *)aSStack_48);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::rebuildValidPlantTypeList() */

void __thiscall UINewPVPSeedChooser::rebuildValidPlantTypeList(UINewPVPSeedChooser *this)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  Magento *this_01;
  long lVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  int *piVar5;
  ulong uVar6;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  deleteChooserPackets(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (Magento *)ProfileMgr::GetCurrentProfile(this_00);
  Magento::GetPlantLevelUp(this_01);
  while( true ) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    uVar4 = FUN_0352d824(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar4 <= uVar6) break;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0352d830(*(undefined8 *)(lVar3 + 0x60),uVar6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
    FUN_05475d88((string *)&local_38,lVar3 + 0x80);
    ServerPlantID::ServerPlantID((ServerPlantID *)local_30,(string *)&local_38);
    local_44 = ImageLib::Image::GetWidth((Image *)local_30);
    if ((local_44 != -1) &&
       ((cVar1 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,(string *)&local_38),
        cVar1 != '\0' || (cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial(), cVar1 != '\0')))) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_20,&local_44);
    }
    uVar6 = uVar6 + 1;
    std::string::~string((string *)&local_38);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar2) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    addItemToChooser(this,*piVar5);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_38);
  }
  UpdateUI(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooser::OnCreate() */

void __thiscall UINewPVPSeedChooser::OnCreate(UINewPVPSeedChooser *this)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  SecretGachaMgr *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *pWVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_Background");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  SecretGachaMgr::GetScreenType(this_00);
  bVar1 = std::operator==(asStack_18,"Full");
  if (bVar1) {
    iVar2 = FUN_0352e078(0x78);
    (**(code **)(*plVar3 + 0x198))
              (plVar3,iVar2 + (int)plVar3[9],*(undefined4 *)((long)plVar3 + 0x4c),
               iVar2 + (int)plVar3[10],*(undefined4 *)((long)plVar3 + 0x54));
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),(int)plVar3[10],
             *(undefined4 *)(this + 0x54));
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x170) = this_01;
  std::string::string(asStack_10,"UIImage_Candidate_Container");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  plVar7 = *(long **)(this + 0x170);
  iVar2 = FUN_0352e078(6);
  (**(code **)(*plVar7 + 0x198))(plVar7,0,0,(int)plVar3[10],*(int *)((long)plVar3 + 0x54) - iVar2);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x170),2);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x170));
  pWVar4 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar4);
  *(Widget **)(this + 0x188) = pWVar4;
  (**(code **)(*(long *)pWVar4 + 0x198))
            (pWVar4,0,0,*(undefined4 *)(*(long *)(this + 0x170) + 0x50),
             *(undefined4 *)(*(long *)(this + 0x170) + 0x54));
  std::string::string(asStack_10,"UIImage_Selected_Container");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)((long)plVar3 + 0x59) = 0;
  pWVar4 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar4);
  *(Widget **)(this + 400) = pWVar4;
  (**(code **)(*(long *)pWVar4 + 0x198))
            (pWVar4,0,0,(int)plVar3[10],*(undefined4 *)((long)plVar3 + 0x54));
  lVar5 = *(long *)(this + 400);
  pcVar6 = *(code **)(*plVar3 + 0x60);
  *(undefined1 *)(lVar5 + 0x59) = 0;
  (*pcVar6)(plVar3,lVar5);
  std::string::string(asStack_10,"UIImage_Preview_Container");
  UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  initSelectedPlantMap(this);
  rebuildValidPlantTypeList(this);
  (**(code **)(**(long **)(this + 0x170) + 0x60))
            (*(long **)(this + 0x170),*(undefined8 *)(this + 0x188));
  std::string::string(asStack_10,"UIButton_DisableMap");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x158))(plVar3,0);
  std::string::~string(asStack_10);
  nop();
  checkPreviousSelected(this);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

