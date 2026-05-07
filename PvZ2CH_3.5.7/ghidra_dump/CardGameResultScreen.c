// Class: CardGameResultScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameResultScreen::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
CardGameResultScreen::DrawAll(CardGameResultScreen *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  uint uVar2;
  WidgetManager *this_00;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_30;
  AutoModalFlags aAStack_28 [16];
  undefined8 auStack_18 [2];
  long lStack_8;
  
  this_00 = *(WidgetManager **)(this + 0x18);
  lStack_8 = ___stack_chk_guard;
  if ((this_00 != (WidgetManager *)0x0) && (*(int *)(this_00 + 0xc0) < *(int *)(this + 100))) {
    Sexy::WidgetManager::FlushDeferredOverlayWidgets(this_00,*(int *)(this + 100));
  }
  Sexy::AutoModalFlags::AutoModalFlags(aAStack_28,param_1,(FlagsMod *)(this + 0x5c));
  if ((this[0x59] != (CardGameResultScreen)0x0) &&
     (uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]),
     (uVar2 >> 3 & 1) != 0)) {
    (**(code **)(*(long *)this + 0x50))((TRect *)auStack_18,this);
    Sexy::Graphics::ClipRect(param_2,(TRect *)auStack_18);
  }
  lVar3 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  if (lVar3 == 0) {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      (**(code **)(*(long *)this + 0x128))(this,param_2);
    }
  }
  else {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      Sexy::Graphics::PushState(param_2);
      (**(code **)(*(long *)this + 0x128))(this,param_2);
      Sexy::Graphics::PopState(param_2);
    }
    uStack_30 = FUN_052c1910(*(undefined8 *)(this + 8));
    while( true ) {
      auStack_18[0] =
           std::
           __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                     ((TaskResource **)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&uStack_30,(rbtree_iterator *)auStack_18);
      if (!bVar1) break;
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_30);
      plVar5 = (long *)*puVar4;
      if (*(char *)((long)plVar5 + 0x6c) != '\0') {
        if ((*(long *)(this + 0x18) != 0) && (*(long **)(*(long *)(this + 0x18) + 0xe0) == plVar5))
        {
          param_1[8] = (ModalFlags)0x1;
        }
        Sexy::Graphics::PushState(param_2);
        Sexy::Graphics::Translate(param_2,(int)plVar5[9],*(int *)((long)plVar5 + 0x4c));
        (**(code **)(*plVar5 + 0x130))(plVar5,param_1,param_2);
        *(undefined1 *)((long)plVar5 + 0x44) = 0;
        Sexy::Graphics::PopState(param_2);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_30);
    }
  }
  Sexy::AutoModalFlags::~AutoModalFlags(aAStack_28);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameResultScreen::OnCreate() */

void __thiscall CardGameResultScreen::OnCreate(CardGameResultScreen *this)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(lVar3 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar3 + 0x50)) / 2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* CardGameResultScreen::SetCallback(Sexy::Delegate1<int>, Sexy::Delegate0) */

void __thiscall
CardGameResultScreen::SetCallback(CardGameResultScreen *this,Delegate2 *param_2,Delegate2 *param_3)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x168),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameResultScreen::GetLayoutName() */

void __thiscall CardGameResultScreen::GetLayoutName(CardGameResultScreen *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICardGameResultScreen");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CardGameResultScreen::ButtonDepress(int) */

void __thiscall CardGameResultScreen::ButtonDepress(CardGameResultScreen *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0x3e9) {
    if (param_1 == 0x3ea) {
      iVar1 = FUN_04e10910(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x180));
      if (iVar1 == 0) {
        return;
      }
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x168));
      return;
    }
    if (param_1 != 1000) {
      return;
    }
  }
  iVar1 = FUN_04e10910(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x138),
             (SexyURL *)(ulong)*(uint *)(this + 0x134));
  return;
}


/* non-virtual thunk to CardGameResultScreen::ButtonDepress(int) */

void __thiscall CardGameResultScreen::ButtonDepress(CardGameResultScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameResultScreen::CardGameResultScreen() */

void __thiscall CardGameResultScreen::CardGameResultScreen(CardGameResultScreen *this)

{
  undefined *__n;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<CardGameResultScreen>::UISingletonDialog
            ((UISingletonDialog<CardGameResultScreen> *)this);
  __n = &DAT_069d60b0;
  *(undefined ***)this = &PTR_GetClass_069d5d60;
  *(undefined **)(this + 0xd8) = &DAT_069d60b0;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x138));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x168),(DummyInit *)0x0);
  FUN_05476574(this + 0x198);
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  FUN_05476574(this + 0x1b0);
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Set8BytesTo0((string *)(this + 0x220));
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0((Delegate0 *)aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x168),(Delegate2 *)aDStack_38);
  FUN_054772c4(this + 0x198,&DAT_056f11a8);
  *(undefined4 *)(this + 0x134) = 0;
  FUN_054772c4(this + 0x1b0,&DAT_056f11a8);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x1e8))
  ;
  FUN_054772c4(this + 0x1c8,&DAT_056f11a8);
  std::string::append((string *)(this + 0x220),"",(size_t)__n);
  *(undefined4 *)(this + 0x228) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameResultScreen::~CardGameResultScreen() */

void __thiscall CardGameResultScreen::~CardGameResultScreen(CardGameResultScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_069d5d60;
  *(undefined **)(this + 0xd8) = &DAT_069d60b0;
  std::string::~string((string *)(this + 0x220));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x198);
  UISingletonDialog<CardGameResultScreen>::~UISingletonDialog
            ((UISingletonDialog<CardGameResultScreen> *)this);
  return;
}


/* CardGameResultScreen::~CardGameResultScreen() */

void __thiscall CardGameResultScreen::~CardGameResultScreen(CardGameResultScreen *this)

{
  ~CardGameResultScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameResultScreen::InitView(CardGameResultType) */

void __thiscall CardGameResultScreen::InitView(CardGameResultScreen *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  UIWidgetAnim *pUVar11;
  UIWidgetAnim *pUVar12;
  SocialInfo *this_00;
  CardGameEndOfPlayData *pCVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  PopAnimRig *pPVar18;
  ulong uVar19;
  int iVar20;
  string asStack_260 [8];
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  DummyInit aDStack_210 [48];
  string asStack_1e0 [24];
  vector avStack_1c8 [80];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_2;
  std::string::string(asStack_1e0,"Background_0");
  lVar6 = UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"BonusBg");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"DescriptionBg");
  lVar8 = UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"ConfirmBtn");
  UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"BackToMapBtn");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"PlayAgainBtn");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"UIAnim_Win");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  std::string::string(asStack_1e0,"UIAnim_Lose");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_1e0);
  std::string::~string(asStack_1e0);
  nop();
  this_00 = (SocialInfo *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  pCVar13 = (CardGameEndOfPlayData *)SocialInfo::GetReceivedSunList(this_00);
  CardGameEndOfPlayData::CardGameEndOfPlayData((CardGameEndOfPlayData *)asStack_1e0,pCVar13);
  std::string::string((string *)&local_240,"");
  uVar2 = operator|(0x10,8);
  FUN_05462618(auStack_178,(string *)&local_240,uVar2);
  std::string::~string((string *)&local_240);
  nop();
  if (param_2 == 0) {
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    (**(code **)(*plVar10 + 0x158))(plVar10,0);
    (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
    pPVar18 = (PopAnimRig *)FUN_04e10928(*(undefined8 *)(pUVar11 + 0xd8));
    std::string::string((string *)&local_240,"intro");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_210);
    PopAnimRig::PlayAndStop(pPVar18,(string *)&local_240,0,aDStack_210);
    std::string::~string((string *)&local_240);
    nop();
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_258,avStack_1c8);
    uVar16 = local_258;
    iVar3 = FUN_04e1092c(local_258,local_250);
    iVar4 = FUN_04e109a8(100);
    iVar5 = FUN_04e109a8(0x1e);
    iVar1 = *(int *)((long)plVar7 + 0x54);
    if (0 < iVar3) {
      uVar19 = 0;
      iVar20 = (((int)plVar7[10] - iVar4 * iVar3) + (1 - iVar3) * iVar5) / 2;
      while( true ) {
        piVar14 = (int *)FUN_04e10940(uVar16,uVar19);
        plVar9 = (long *)PVZ1ModeResultBonusWidget::CreateUIRewardFrame(*piVar14,piVar14[1],false);
        (**(code **)(*plVar9 + 0x198))(plVar9,iVar20,(iVar1 - iVar4) / 2,iVar4,iVar4);
        (**(code **)(*plVar7 + 0x60))(plVar7,plVar9);
        piVar14 = (int *)FUN_04e10940(local_258,uVar19);
        ProfileChangeItemAmount(*piVar14,piVar14[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_240);
        puVar15 = (undefined4 *)FUN_04e10940(local_258,uVar19);
        uVar16 = FUN_0546065c(auStack_168,*puVar15);
        uVar16 = FUN_054603b8(uVar16,&DAT_05593348);
        lVar17 = FUN_04e10940(local_258,uVar19);
        uVar16 = FUN_0546065c(uVar16,*(undefined4 *)(lVar17 + 4));
        FUN_054603b8(uVar16,&DAT_05594620);
        if (uVar19 == iVar3 - 1) break;
        uVar19 = uVar19 + 1;
        uVar16 = local_258;
        iVar20 = iVar20 + iVar4 + iVar5;
      }
    }
    std::string::string(asStack_260,"[PVZ2_UNCHARTED_MODE_END_PLAY_SUCCESS]");
    StringHelper::ToStringValue(asStack_260);
    FUN_054766c8(this + 0x198,(string *)&local_240);
    FUN_05476c50((string *)&local_240);
    std::string::~string(asStack_260);
    nop();
    Sexy::Insets::Insets
              ((Insets *)&local_240,*(int *)(lVar6 + 0x48) + *(int *)(lVar8 + 0x48),
               *(int *)(lVar6 + 0x4c) + *(int *)(lVar8 + 0x4c),*(int *)(lVar8 + 0x50),
               *(int *)(lVar8 + 0x54) / 2);
    *(undefined8 *)(this + 0x1a0) = local_240;
    *(undefined8 *)(this + 0x1a8) = uStack_238;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_258);
  }
  else if (param_2 == 1) {
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
    (**(code **)(*plVar10 + 0x158))(plVar10,0);
    (**(code **)(*(long *)pUVar11 + 0x158))(pUVar11,0);
    pPVar18 = (PopAnimRig *)FUN_04e10928(*(undefined8 *)(pUVar12 + 0xd8));
    std::string::string((string *)&local_240,"intro");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_210);
    PopAnimRig::PlayAndStop(pPVar18,(string *)&local_240,0,aDStack_210);
    std::string::~string((string *)&local_240);
    nop();
  }
  FUN_054617bc(auStack_178);
  CardGameEndOfPlayData::~CardGameEndOfPlayData((CardGameEndOfPlayData *)asStack_1e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

