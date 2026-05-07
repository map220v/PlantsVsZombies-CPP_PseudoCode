// Class: UIPlantCultivateSelect


/* UIPlantCultivateSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPlantCultivateSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantCultivateSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPlantCultivateSelect::ScrollTargetReached(UIPlantCultivateSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPlantCultivateSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPlantCultivateSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantCultivateSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPlantCultivateSelect::ScrollTargetInterrupted(UIPlantCultivateSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivateSelect::GetLayoutName() */

void __thiscall UIPlantCultivateSelect::GetLayoutName(UIPlantCultivateSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantCultivateSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantCultivateSelect::SelectItem(int) */

void __thiscall UIPlantCultivateSelect::SelectItem(UIPlantCultivateSelect *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x140);
  lVar2 = FUN_0347f8c0(uVar6,*(undefined8 *)(this + 0x148));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_0347f8cc(uVar6,uVar5);
      iVar1 = FishingModule::GetCannonLevel((FishingModule *)*puVar3);
      if (iVar1 == param_1) {
        puVar3 = (undefined8 *)FUN_0347f8cc(*(undefined8 *)(this + 0x140),uVar5);
        PlantCultivateSelectItem::Select((PlantCultivateSelectItem *)*puVar3,true);
      }
      else {
        puVar3 = (undefined8 *)FUN_0347f8cc(*(undefined8 *)(this + 0x140),uVar5);
        PlantCultivateSelectItem::Select((PlantCultivateSelectItem *)*puVar3,false);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x140);
      uVar4 = FUN_0347f8c0(uVar6,*(undefined8 *)(this + 0x148));
    } while (uVar5 < uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivateSelect::ButtonDepress(int) */

void __thiscall UIPlantCultivateSelect::ButtonDepress(UIPlantCultivateSelect *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  wstring awStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  string asStack_68 [40];
  wstring awStack_40 [8];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x37) {
    uVar8 = 0;
    while( true ) {
      uVar9 = *(undefined8 *)(this + 0x140);
      uVar4 = FUN_0347f8c0(uVar9,*(undefined8 *)(this + 0x148));
      if (uVar4 <= uVar8) break;
      puVar3 = (undefined8 *)FUN_0347f8cc(uVar9,uVar8);
      cVar1 = ComponentVisualStretcher::IsStretching((ComponentVisualStretcher *)*puVar3);
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)FUN_0347f8cc(*(undefined8 *)(this + 0x140),uVar8);
        iVar2 = FishingModule::GetCannonLevel((FishingModule *)*puVar3);
        if (iVar2 != 0) {
          pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar5 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(pUVar5,6);
            TodStringTranslate(L"[REVIVE_TIP]");
            TodStringTranslate(L"[PLANT_CULTIVATE_CONFIRM_SELECT]");
            GetGameItemInfo(iVar2,0x7fffffff,0);
            TodReplaceString(awStack_70,L"{NAME}",awStack_40);
            GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_68);
            FUN_05476c50(awStack_70);
            UIMessageBox::SetMessage(pUVar5,awStack_78,awStack_80);
            std::string::string(asStack_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar6 = (Image *)StringHelper::ToImage(asStack_68,false);
            UIMessageBox::SetBackground(pUVar5,pIVar6);
            std::string::~string(asStack_68);
            nop();
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ConfirmSelectPlant);
            Sexy::Delegate2<UIMessageBox*,int>::
            Delegate2<UIPlantCultivateSelect,void(UIPlantCultivateSelect::*)(UIMessageBox*,int)>
                      (aDStack_38,(GAME_ITEM_INFO *)asStack_68);
            UIMessageBox::SetCallback(pUVar5,aDStack_38);
            FUN_05476c50(awStack_78);
            FUN_05476c50(awStack_80);
          }
          goto LAB_03481588;
        }
        break;
      }
      uVar8 = uVar8 + 1;
    }
    pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar5 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar5,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[SELECT_PLANT_FIRST]");
      UIMessageBox::SetMessage(pUVar5,awStack_70,awStack_80);
      std::string::string(asStack_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar6 = (Image *)StringHelper::ToImage(asStack_68,false);
      UIMessageBox::SetBackground(pUVar5,pIVar6);
      std::string::~string(asStack_68);
      nop();
      lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
      thunk_FUN_05477b9c(lVar7 + 0xd8,awStack_78);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
      FUN_05476c50(awStack_80);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIPlantCultivateSelect>::CloseDialog();
  }
LAB_03481588:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPlantCultivateSelect::ButtonDepress(int) */

void __thiscall UIPlantCultivateSelect::ButtonDepress(UIPlantCultivateSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIPlantCultivateSelect::UIPlantCultivateSelect() */

void __thiscall UIPlantCultivateSelect::UIPlantCultivateSelect(UIPlantCultivateSelect *this)

{
  UISingletonDialog<UIPlantCultivateSelect>::UISingletonDialog
            ((UISingletonDialog<UIPlantCultivateSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0663f0f0;
  *(undefined **)(this + 0xd8) = &DAT_0663f450;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantCultivateSelect_0663f498;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* UIPlantCultivateSelect::~UIPlantCultivateSelect() */

void __thiscall UIPlantCultivateSelect::~UIPlantCultivateSelect(UIPlantCultivateSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_0663f0f0;
  *(undefined **)(this + 0xd8) = &DAT_0663f450;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantCultivateSelect_0663f498;
  std::vector<PlantCultivateSelectItem*,std::allocator<PlantCultivateSelectItem*>>::~vector
            ((vector<PlantCultivateSelectItem*,std::allocator<PlantCultivateSelectItem*>> *)
             (this + 0x140));
  UISingletonDialog<UIPlantCultivateSelect>::~UISingletonDialog
            ((UISingletonDialog<UIPlantCultivateSelect> *)this);
  return;
}


/* non-virtual thunk to UIPlantCultivateSelect::~UIPlantCultivateSelect() */

void __thiscall UIPlantCultivateSelect::~UIPlantCultivateSelect(UIPlantCultivateSelect *this)

{
  ~UIPlantCultivateSelect(this + -0x138);
  return;
}


/* UIPlantCultivateSelect::~UIPlantCultivateSelect() */

void __thiscall UIPlantCultivateSelect::~UIPlantCultivateSelect(UIPlantCultivateSelect *this)

{
  ~UIPlantCultivateSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPlantCultivateSelect::~UIPlantCultivateSelect() */

void __thiscall UIPlantCultivateSelect::~UIPlantCultivateSelect(UIPlantCultivateSelect *this)

{
  ~UIPlantCultivateSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivateSelect::RequestSelectPlant(int) */

void __thiscall UIPlantCultivateSelect::RequestSelectPlant(UIPlantCultivateSelect *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2880];
  string asStack_1a8 [416];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"plant_id");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03480618(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlantCultivateSelect::ConfirmSelectPlant(UIMessageBox*, int) */

void __thiscall
UIPlantCultivateSelect::ConfirmSelectPlant
          (UIPlantCultivateSelect *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x140);
    uVar4 = FUN_0347f8c0(uVar6,*(undefined8 *)(this + 0x148));
    if (uVar4 <= uVar5) {
      RequestSelectPlant(this,0);
      return;
    }
    puVar3 = (undefined8 *)FUN_0347f8cc(uVar6,uVar5);
    cVar1 = ComponentVisualStretcher::IsStretching((ComponentVisualStretcher *)*puVar3);
    if (cVar1 != '\0') break;
    uVar5 = uVar5 + 1;
  }
  puVar3 = (undefined8 *)FUN_0347f8cc(*(undefined8 *)(this + 0x140),uVar5);
  iVar2 = FishingModule::GetCannonLevel((FishingModule *)*puVar3);
  RequestSelectPlant(this,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivateSelect::InitView() */

void __thiscall UIPlantCultivateSelect::InitView(UIPlantCultivateSelect *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetImage *pUVar9;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  PlantCultivateSelectItem *pPVar14;
  TGALogMgr *this_04;
  code *__n;
  ulong uVar15;
  Insets aIStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  PlantCultivateSelectItem *local_40 [2];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar15 = 0;
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string((string *)local_40,"UIImage_Background");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x80))(pUVar9,1,1);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_03480788(0);
  Sexy::Insets::Insets(aIStack_80,iVar3,iVar3,*(int *)(pUVar9 + 0x50),*(int *)(pUVar9 + 0x54));
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_80);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  iVar3 = FUN_03480788(0x1e);
  iVar4 = FUN_03480788(0x14);
  iVar5 = FUN_03480788(10);
  iVar6 = FUN_03480788(0xf);
  iVar7 = FUN_03480788(0x5a);
  lVar10 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
  lVar11 = FUN_0347f8d4(*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28));
  if (lVar11 != 0) {
    do {
      iVar8 = PlantNameMapperServerID::GetInstance();
      FUN_0347f8fc(*(undefined8 *)(lVar10 + 0x20),uVar15);
      NameMapperBase::GetNameForId(iVar8);
      cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)local_40);
      std::string::~string((string *)local_40);
      if (cVar2 == '\0') {
        piVar12 = (int *)FUN_0347f8fc(*(undefined8 *)(lVar10 + 0x20),uVar15);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_58,piVar12);
      }
      else {
        piVar12 = (int *)FUN_0347f8fc(*(undefined8 *)(lVar10 + 0x20),uVar15);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_70,piVar12);
      }
      uVar15 = uVar15 + 1;
      uVar13 = FUN_0347f8d4(*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x28));
    } while (uVar15 < uVar13);
  }
  for (uVar15 = 0; uVar1 = local_70, uVar13 = FUN_0347f608(local_70,local_68), uVar15 < uVar13;
      uVar15 = uVar15 + 1) {
    piVar12 = (int *)FUN_0347f904(uVar1,uVar15);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_58,piVar12);
  }
  iVar8 = 0;
  uVar15 = 0;
  while( true ) {
    uVar13 = FUN_0347f608(local_58,local_50);
    if (uVar13 <= uVar15) break;
    pPVar14 = ::operator_new(0xf0);
    PlantCultivateSelectItem::PlantCultivateSelectItem(pPVar14);
    local_40[0] = pPVar14;
    (**(code **)(*(long *)pPVar14 + 0x198))
              (pPVar14,iVar3 + (iVar7 + iVar5) * ((int)uVar15 % 5),
               iVar4 + (iVar6 + iVar7) * ((int)uVar15 / 5),iVar7,iVar7);
    pPVar14 = local_40[0];
    piVar12 = (int *)FUN_0347f904(local_58,uVar15);
    PlantCultivateSelectItem::InitView(pPVar14,this,*piVar12);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,local_40[0]);
    std::vector<PlantCultivateSelectItem*,std::allocator<PlantCultivateSelectItem*>>::push_back
              ((vector<PlantCultivateSelectItem*,std::allocator<PlantCultivateSelectItem*>> *)
               (this + 0x140),local_40);
    iVar8 = *(int *)(local_40[0] + 0x4c) + *(int *)(local_40[0] + 0x54);
    uVar15 = uVar15 + 1;
  }
  lVar10 = *(long *)this_02;
  *(int *)(this_03 + 0x54) = iVar4 + iVar8;
  (**(code **)(lVar10 + 0x60))(this_02,this_03);
  __n = *(code **)(*(long *)pUVar9 + 0x60);
  (*__n)(pUVar9,this_02);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)local_40);
  std::string::append((string *)local_40,"1",(size_t)__n);
  std::string::append(asStack_30,"0",(size_t)__n);
  this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogAnniversaryNurturingData(this_04,(TGAAnniversaryNurturingData *)local_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)local_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_58);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivateSelect::OnCreate() */

void __thiscall UIPlantCultivateSelect::OnCreate(UIPlantCultivateSelect *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

