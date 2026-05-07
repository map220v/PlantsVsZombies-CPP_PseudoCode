// Class: UIMiniGameRule


/* UIMiniGameRule::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIMiniGameRule::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIMiniGameRule::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIMiniGameRule::ScrollTargetReached(UIMiniGameRule *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIMiniGameRule::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIMiniGameRule::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIMiniGameRule::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIMiniGameRule::ScrollTargetInterrupted(UIMiniGameRule *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRule::GetLayoutName() */

void __thiscall UIMiniGameRule::GetLayoutName(UIMiniGameRule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"MiniGameRule");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIMiniGameRule::ButtonDepress(int) */

void __thiscall UIMiniGameRule::ButtonDepress(UIMiniGameRule *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIMiniGameRule>::CloseDialog();
  return;
}


/* non-virtual thunk to UIMiniGameRule::ButtonDepress(int) */

void __thiscall UIMiniGameRule::ButtonDepress(UIMiniGameRule *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIMiniGameRule::UIMiniGameRule() */

void __thiscall UIMiniGameRule::UIMiniGameRule(UIMiniGameRule *this)

{
  UISingletonDialog<UIMiniGameRule>::UISingletonDialog((UISingletonDialog<UIMiniGameRule> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066c74e0;
  *(undefined **)(this + 0xd8) = &DAT_066c7840;
  *(undefined ***)(this + 0x138) = &PTR__UIMiniGameRule_066c7888;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* UIMiniGameRule::~UIMiniGameRule() */

void __thiscall UIMiniGameRule::~UIMiniGameRule(UIMiniGameRule *this)

{
  *(undefined ***)this = &PTR_GetClass_066c74e0;
  *(undefined **)(this + 0xd8) = &DAT_066c7840;
  *(undefined ***)(this + 0x138) = &PTR__UIMiniGameRule_066c7888;
  std::vector<stMiniGame_rank,std::allocator<stMiniGame_rank>>::~vector
            ((vector<stMiniGame_rank,std::allocator<stMiniGame_rank>> *)(this + 0x140));
  UISingletonDialog<UIMiniGameRule>::~UISingletonDialog((UISingletonDialog<UIMiniGameRule> *)this);
  return;
}


/* non-virtual thunk to UIMiniGameRule::~UIMiniGameRule() */

void __thiscall UIMiniGameRule::~UIMiniGameRule(UIMiniGameRule *this)

{
  ~UIMiniGameRule(this + -0x138);
  return;
}


/* UIMiniGameRule::~UIMiniGameRule() */

void __thiscall UIMiniGameRule::~UIMiniGameRule(UIMiniGameRule *this)

{
  ~UIMiniGameRule(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIMiniGameRule::~UIMiniGameRule() */

void __thiscall UIMiniGameRule::~UIMiniGameRule(UIMiniGameRule *this)

{
  ~UIMiniGameRule(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRule::OnCreate() */

void __thiscall UIMiniGameRule::OnCreate(UIMiniGameRule *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  Widget *pWVar7;
  UIScrollControl *this_00;
  long lVar8;
  long *plVar9;
  MiniGameRuleAwardItem *this_01;
  stMiniGame_rank *psVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  UIWidgetText *this_02;
  wstring *extraout_x1;
  string *extraout_x1_00;
  MiniGameRuleAwardItem *pMVar15;
  int iVar16;
  ulong uVar17;
  undefined8 local_f8;
  undefined8 local_f0;
  string asStack_e8 [8];
  Sexy aSStack_e0 [8];
  uint local_d8;
  uint local_d4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_d0 [16];
  vector avStack_c0 [56];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_d8,"UIImage_0");
  pWVar7 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar7,false);
  std::string::string((string *)&local_d8,"UIScroll_0");
  this_00 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  UIScrollControl::SetAutoArrange(this_00,false);
  std::string::string((string *)&local_d8,"UIText_Rule2");
  lVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  plVar9 = *(long **)(lVar8 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x68))(plVar9,lVar8);
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,lVar8);
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  if (local_70 != '\0') {
    MiniGameConfig::MiniGameConfig((MiniGameConfig *)&local_d8);
    cVar4 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_d8);
    if (cVar4 != '\0') {
      std::vector<stMiniGame_rank,std::allocator<stMiniGame_rank>>::operator=
                ((vector<stMiniGame_rank,std::allocator<stMiniGame_rank>> *)(this + 0x140),
                 avStack_c0);
    }
    MiniGameConfig::~MiniGameConfig((MiniGameConfig *)&local_d8);
  }
  uVar17 = 0;
  iVar5 = FUN_03920b40(500);
  uVar6 = FUN_03920b40(0x37);
  lVar8 = FUN_03920660(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  if (lVar8 != 0) {
    do {
      this_01 = ::operator_new(0x110);
      MiniGameRuleAwardItem::MiniGameRuleAwardItem(this_01);
      psVar10 = (stMiniGame_rank *)FUN_03920688(*(undefined8 *)(this + 0x140),uVar17);
      stMiniGame_rank::stMiniGame_rank((stMiniGame_rank *)&local_d8,psVar10);
      iVar16 = iVar5;
      (**(code **)(*(long *)this_01 + 0x198))
                (this_01,(*(int *)(this_00 + 0x50) - iVar5) / 2,0,iVar5,uVar6);
      if (local_d4 == local_d8) {
        std::string::string(asStack_e8,"[RANK_TEXT]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_e8,(string *)L"{RANK_COUNT}",(wchar_t *)(ulong)local_d4,
                   iVar16);
        FUN_054766c8(this_01 + 0xd8,aSStack_e0);
        FUN_05476c50(aSStack_e0);
        std::string::~string(asStack_e8);
        nop();
      }
      else {
        TodStringTranslate(L"[RANK_TEXT_MINIGAME]");
        Sexy::SexyStringToUTF8String(aSStack_e0,extraout_x1);
        FUN_05476c50(aSStack_e0);
        pcVar11 = (char *)FUN_0547429c((string *)&local_f0);
        Sexy::StrFormat(pcVar11,asStack_e8,(ulong)local_d8,(ulong)local_d4);
        Sexy::UTF8StringToSexyString(asStack_e8);
        FUN_054766c8(this_01 + 0xd8,aSStack_e0);
        FUN_05476c50(aSStack_e0);
        std::string::~string(asStack_e8);
        std::string::~string((string *)&local_f0);
      }
      iVar16 = 0;
      local_f8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_d0);
      local_f0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_d0);
      pMVar15 = this_01 + 0xe0;
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0),
            bVar3) {
        piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
        iVar1 = *piVar12;
        uVar2 = piVar12[1];
        if (iVar1 == 0xfad) {
          uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaf50);
          *(undefined8 *)(this_01 + (long)iVar16 * 8 + 0xf8) = uVar13;
        }
        else if (iVar1 == 0xbc0) {
          uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abae78);
          *(undefined8 *)(this_01 + (long)iVar16 * 8 + 0xf8) = uVar13;
        }
        else if (iVar1 == 0x5ac3) {
          uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abae38);
          *(undefined8 *)(this_01 + (long)iVar16 * 8 + 0xf8) = uVar13;
        }
        iVar16 = iVar16 + 1;
        Sexy::StrFormat("%d",(Sexy *)asStack_e8,(ulong)uVar2);
        Sexy::UTF8StringToWString((Sexy *)asStack_e8,extraout_x1_00);
        FUN_054766c8(pMVar15,aSStack_e0);
        FUN_05476c50(aSStack_e0);
        std::string::~string(asStack_e8);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
        pMVar15 = pMVar15 + 8;
      }
      uVar17 = uVar17 + 1;
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      stMiniGame_rank::~stMiniGame_rank((stMiniGame_rank *)&local_d8);
      uVar14 = FUN_03920660(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    } while (uVar17 < uVar14);
  }
  std::string::string((string *)&local_d8,"Widget_0");
  lVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  plVar9 = *(long **)(lVar8 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x68))(plVar9,lVar8);
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,lVar8);
  std::string::string((string *)&local_d8,"UIText_Rule");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_d8);
  std::string::~string((string *)&local_d8);
  nop();
  UIWidgetText::FormatByWidth(this_02);
  lVar8 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_00);
  plVar9 = *(long **)(this_02 + 0x20);
  *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(this_00 + 0x50);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x68))(plVar9,this_02);
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_02);
  UIScrollControl::SetAutoArrange(this_00,true);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

