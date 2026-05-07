// Class: UINewPVPBattlePassPrivilege


/* UINewPVPBattlePassPrivilege::~UINewPVPBattlePassPrivilege() */

void __thiscall
UINewPVPBattlePassPrivilege::~UINewPVPBattlePassPrivilege(UINewPVPBattlePassPrivilege *this)

{
  *(undefined ***)this = &PTR_GetClass_06654cd0;
  *(undefined **)(this + 0xd8) = &DAT_06655020;
  UISingletonDialog<UINewPVPBattlePassPrivilege>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassPrivilege> *)this);
  return;
}


/* UINewPVPBattlePassPrivilege::~UINewPVPBattlePassPrivilege() */

void __thiscall
UINewPVPBattlePassPrivilege::~UINewPVPBattlePassPrivilege(UINewPVPBattlePassPrivilege *this)

{
  ~UINewPVPBattlePassPrivilege(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilege::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassPrivilege::ButtonDepress(UINewPVPBattlePassPrivilege *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_01);
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.newpvpbattlepass68");
    PurchaseBroker::RequestPayment(this_02,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else if (param_1 == 0x20) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BATTLE_ORDER_ACTIVITY_DESCRIPTION]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_10);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UINewPVPBattlePassPrivilege>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPBattlePassPrivilege::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassPrivilege::ButtonDepress(UINewPVPBattlePassPrivilege *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewPVPBattlePassPrivilege::UINewPVPBattlePassPrivilege() */

void __thiscall
UINewPVPBattlePassPrivilege::UINewPVPBattlePassPrivilege(UINewPVPBattlePassPrivilege *this)

{
  UISingletonDialog<UINewPVPBattlePassPrivilege>::UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassPrivilege> *)this);
  *(undefined ***)this = &PTR_GetClass_06654cd0;
  *(undefined **)(this + 0xd8) = &DAT_06655020;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilege::OnCreate() */

void __thiscall UINewPVPBattlePassPrivilege::OnCreate(UINewPVPBattlePassPrivilege *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UIWidgetBackground *pUVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIButton *pPVar6;
  ulong uVar7;
  string *psVar8;
  UIWidgetImage *pUVar9;
  CUILabel *this_00;
  int *piVar10;
  long *plVar11;
  long lVar12;
  PrimeTypeface *pPVar13;
  UIWidgetText *pUVar14;
  code *pcVar15;
  ulong uVar16;
  int local_2ac;
  string asStack_2a8 [8];
  string asStack_2a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_298 [8];
  string asStack_290 [16];
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  string asStack_200 [144];
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_200,"Background_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_200);
  std::string::~string(asStack_200);
  nop();
  *(int *)(pUVar4 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar4 + 0x50)) / 2;
  std::string::string(asStack_200,"UIImage_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_200);
  std::string::~string(asStack_200);
  nop();
  std::string::string(asStack_200,"IMAGE_UI_NEW_PVP_BATTLE_PASS_REWARD_PRIVILEGE_BG_5");
  UIWidgetImage::SetImage(pUVar5,asStack_200);
  std::string::~string(asStack_200);
  nop();
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_035395bc(local_278);
  if ((cVar1 != '\0') && (local_268 != '\0')) {
    NewPVPBattlePassData::NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)asStack_200);
    if (cVar1 != '\0') {
      local_2ac = local_90;
      if (local_90 - 3U < 2) {
        std::to_string<ActivityTypeID>((ActivityTypeID *)&local_2ac);
        std::operator+("IMAGE_UI_NEW_PVP_BATTLE_PASS_REWARD_PRIVILEGE_BG_",(string *)aRStack_298);
        UIWidgetImage::SetImage(pUVar5,asStack_290);
        std::string::~string(asStack_290);
        std::string::~string((string *)aRStack_298);
        std::string::string(asStack_290,"UIButton_Buy");
        pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_290);
        std::string::~string(asStack_290);
        nop();
        TodStringTranslate(L"[LUCKBAG_BUY]");
        PVZ2UIButton::SetLabelText(pPVar6,(wstring *)aRStack_298);
        std::string::string(asStack_290,"UIText_Title");
        pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_290);
        std::string::~string(asStack_290);
        nop();
        TodStringTranslate(L"[NEW_PVP_TASK]");
        PuzzleTip::SetTip(pUVar14,asStack_290);
        FUN_05476c50(asStack_290);
        FUN_05476c50((string *)aRStack_298);
      }
      else if (4 < local_90) {
        for (uVar16 = 0; uVar7 = FUN_035399bc(local_158,local_150), uVar16 < uVar7;
            uVar16 = uVar16 + 1) {
          iVar3 = MaterialItemMapper::GetInstance();
          FUN_035399e4(local_158,uVar16);
          NameMapperBase::GetNameForId(iVar3);
          iVar3 = PlantNameMapperServerID::GetInstance();
          FUN_035399e4(local_158,uVar16);
          NameMapperBase::GetNameForId(iVar3);
          bVar2 = std::operator!=(asStack_2a8,"");
          if (bVar2) {
            std::string::string(asStack_290,"UIImage_Book");
            pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_290);
            std::string::~string(asStack_290);
            nop();
            piVar10 = (int *)FUN_035399e4(local_158,uVar16);
            plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,0,true);
            pcVar15 = *(code **)(*plVar11 + 0x1a0);
            iVar3 = FUN_0353ba6c(0x50);
            Sexy::Insets::Insets((Insets *)asStack_290,0,0,iVar3,iVar3);
            (*pcVar15)(plVar11,asStack_290);
            (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,plVar11);
          }
          else {
            bVar2 = std::operator!=(asStack_2a0,"");
            if (bVar2) {
              psVar8 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
              std::string::string(asStack_290,"UIImage_Plant");
              pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_290);
              std::string::~string(asStack_290);
              nop();
              std::string::string(asStack_290,"UIImage_Reward");
              pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_290);
              std::string::~string(asStack_290);
              nop();
              this_00 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,0,true);
              piVar10 = (int *)FUN_035399e4(local_158,uVar16);
              plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,0,true);
              pcVar15 = *(code **)(*plVar11 + 0x1a0);
              iVar3 = FUN_0353ba6c(0x50);
              Sexy::Insets::Insets((Insets *)asStack_290,0,0,iVar3,iVar3);
              (*pcVar15)(plVar11,asStack_290);
              (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,plVar11);
              lVar12 = FUN_035399ec(local_170,7);
              pPVar13 = (PrimeTypeface *)FUN_0353cb74(*(undefined4 *)(lVar12 + 0x1c));
              Lua::CUILabel::SetTypeface(this_00,pPVar13);
              lVar12 = FUN_035399ec(local_170,7);
              FUN_0353931c(asStack_290,*(undefined4 *)(lVar12 + 0x1c));
              LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_00);
              FUN_05476c50(asStack_290);
              pcVar15 = *(code **)(*(long *)this_00 + 0x1a0);
              iVar3 = FUN_0353ba6c(0x50);
              Sexy::Insets::Insets((Insets *)asStack_290,0,0,iVar3,iVar3);
              (*pcVar15)(this_00,asStack_290);
              (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_298);
            }
          }
          std::string::~string(asStack_2a0);
          std::string::~string(asStack_2a8);
        }
      }
    }
    NewPVPBattlePassData::~NewPVPBattlePassData((NewPVPBattlePassData *)asStack_200);
  }
  std::string::string(asStack_200,"UIButton_Question");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_200);
  std::string::~string(asStack_200);
  nop();
  (**(code **)(*(long *)pPVar6 + 0x158))(pPVar6,0);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassPrivilege::GetLayoutName() */

void __thiscall UINewPVPBattlePassPrivilege::GetLayoutName(UINewPVPBattlePassPrivilege *this)

{
  char cVar1;
  int iVar2;
  string *in_x8;
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  NewPVPBattlePassData aNStack_200 [368];
  int local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_035395bc(local_278);
  if ((cVar1 != '\0') && (local_268 != '\0')) {
    NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
    if ((cVar1 != '\0') && (4 < local_90)) {
      std::string::string(in_x8,"UINewPVPBattleOrderPrivilege");
      nop();
      NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
      goto LAB_03548a0c;
    }
    NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  }
  std::string::string(in_x8,"UIBattleOrderPrivilege");
  nop();
LAB_03548a0c:
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

