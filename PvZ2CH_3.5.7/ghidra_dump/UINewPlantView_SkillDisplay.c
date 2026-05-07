// Class: UINewPlantView_SkillDisplay


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillDisplay::GetLayoutName() */

void __thiscall UINewPlantView_SkillDisplay::GetLayoutName(UINewPlantView_SkillDisplay *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_SkillDisplay");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_SkillDisplay::SetAvatarIndex(int) */

void UINewPlantView_SkillDisplay::SetAvatarIndex(int param_1)

{
  FUN_03813ab8(*(long *)((ulong)(uint)param_1 + 0x140) + 0xd4);
  return;
}


/* UINewPlantView_SkillDisplay::SetDisplayLevel(int) */

void __thiscall
UINewPlantView_SkillDisplay::SetDisplayLevel(UINewPlantView_SkillDisplay *this,int param_1)

{
  PlantDisplayBoard::SetDisplayLevel(*(PlantDisplayBoard **)(this + 0x140),param_1);
  return;
}


/* UINewPlantView_SkillDisplay::UINewPlantView_SkillDisplay() */

void __thiscall
UINewPlantView_SkillDisplay::UINewPlantView_SkillDisplay(UINewPlantView_SkillDisplay *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UINewPlantView_SkillDisplay>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_SkillDisplay> *)this);
  *(undefined ***)this = &PTR_GetClass_066a2ae0;
  *(undefined **)(this + 0xd8) = &DAT_066a2e30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDisplaySelectButton);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPlantView_SkillDisplay,void(UINewPlantView_SkillDisplay::*)(int)>>
            ((MessageRouter *)puVar1,Message::DisplaySelectButton,&local_40);
  return;
}


/* UINewPlantView_SkillDisplay::~UINewPlantView_SkillDisplay() */

void __thiscall
UINewPlantView_SkillDisplay::~UINewPlantView_SkillDisplay(UINewPlantView_SkillDisplay *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a2e30;
  *(undefined ***)this = &PTR_GetClass_066a2ae0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0x140) = 0;
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UISingletonDialog<UINewPlantView_SkillDisplay>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_SkillDisplay> *)this);
  return;
}


/* UINewPlantView_SkillDisplay::~UINewPlantView_SkillDisplay() */

void __thiscall
UINewPlantView_SkillDisplay::~UINewPlantView_SkillDisplay(UINewPlantView_SkillDisplay *this)

{
  ~UINewPlantView_SkillDisplay(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillDisplay::CreateSkillTips(int) */

void __thiscall
UINewPlantView_SkillDisplay::CreateSkillTips(UINewPlantView_SkillDisplay *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint *puVar8;
  Widget *pWVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar11 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_20,
             (vector *)(lVar5 + 0x108));
  uVar6 = FUN_03813b48(local_20,local_18);
  if (uVar11 < uVar6) {
    uVar12 = *(undefined8 *)(this + 0x150);
    uVar6 = FUN_03813b34(uVar12,*(undefined8 *)(this + 0x158));
    if ((uVar11 < uVar6) && (plVar7 = (long *)FUN_03813b40(uVar12,uVar11), *plVar7 != 0)) {
      puVar8 = (uint *)FUN_03813b54(local_20,uVar11);
      Sexy::StrFormat("[PLANT_SPECIAL_TAG_TIPS_TEXT_%d]",asStack_38,(ulong)*puVar8);
      TodStringTranslate(L"[PLANT_SPECIAL_TAG_TIPS_TITLE]");
      StringHelper::ToStringValue(asStack_38);
      pWVar9 = ::operator_new(0xe8);
      PVZ2UISpecialTagTipsWidget::PVZ2UISpecialTagTipsWidget
                ((PVZ2UISpecialTagTipsWidget *)pWVar9,auStack_30,&local_28);
      FUN_05476c50(&local_28);
      FUN_05476c50(auStack_30);
      uVar1 = FUN_03814ff8(300);
      uVar2 = FUN_03814ff8(0x78);
      puVar10 = (undefined8 *)FUN_03813b40(*(undefined8 *)(this + 0x150),uVar11);
      (**(code **)(*(long *)*puVar10 + 0xd0))(&local_28,(long *)*puVar10);
      puVar10 = (undefined8 *)FUN_03813b40(*(undefined8 *)(this + 0x150),uVar11);
      plVar7 = (long *)*puVar10;
      lVar5 = plVar7[10];
      iVar3 = FUN_03814ff8(10);
      (**(code **)(*plVar7 + 0xd0))(&local_28,plVar7);
      iVar4 = FUN_03814ff8(8);
      (**(code **)(*(long *)pWVar9 + 0x198))
                (pWVar9,local_28 + (int)lVar5 + iVar3,local_24 - iVar4,uVar1,uVar2);
      LevelEditorUtil::ShowDialogWithTouchClose(pWVar9,false);
      std::string::~string(asStack_38);
    }
  }
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::~vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlantView_SkillDisplay::ButtonDepress(int) */

void __thiscall
UINewPlantView_SkillDisplay::ButtonDepress(UINewPlantView_SkillDisplay *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UINewPlantView_SkillDisplay>::CloseDialog();
    return;
  }
  if (99 < param_1 - 1000U) {
    return;
  }
  CreateSkillTips(this,param_1 - 1000U);
  return;
}


/* non-virtual thunk to UINewPlantView_SkillDisplay::ButtonDepress(int) */

void __thiscall
UINewPlantView_SkillDisplay::ButtonDepress(UINewPlantView_SkillDisplay *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillDisplay::InitView(std::string const&) */

void UINewPlantView_SkillDisplay::InitView(string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  string *psVar9;
  UIWidgetImage *pUVar10;
  UIWidgetBackground *pUVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_18);
  psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x138),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::string((string *)&local_10,"UIImage_Main");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::string((string *)&local_10,"Background_0");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)param_1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  psVar9 = ::operator_new(0x178);
  PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar9,1,0);
  *(string **)(param_1 + 0x140) = psVar9;
  PlantDisplayBoard::SetPlantName(psVar9);
  iVar7 = *(int *)(pUVar11 + 0x48);
  iVar8 = *(int *)(pUVar10 + 0x48);
  plVar14 = *(long **)(param_1 + 0x140);
  iVar3 = FUN_03814ff8(0x50);
  iVar4 = FUN_03814fe4(200);
  iVar1 = *(int *)(pUVar11 + 0x4c);
  iVar2 = *(int *)(pUVar10 + 0x4c);
  iVar5 = FUN_03814ff8(0x32);
  iVar6 = FUN_03814fe4(0xa0);
  (**(code **)(*plVar14 + 0x198))
            (plVar14,(iVar7 + iVar8 + iVar3) - iVar4,(iVar1 + iVar2 + iVar5) - iVar6,
             *(undefined4 *)(pUVar10 + 0x50),*(undefined4 *)(pUVar10 + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0x140));
  PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(param_1 + 0x140));
  FUN_03814138(*(long *)(param_1 + 0x140) + 0xd1);
  uVar12 = *(undefined8 *)(param_1 + 0x140);
  iVar7 = FUN_03814ff8(0x32);
  iVar8 = FUN_03814ff8(0x14);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)-iVar7,(float)iVar8);
  PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_10,local_c,uVar12);
  iVar7 = FUN_03814ff8(0x14);
  PlantDisplayBoard::SetDisplayLevelButtonGapX
            (*(PlantDisplayBoard **)(param_1 + 0x140),(float)iVar7);
  lVar13 = *(long *)(param_1 + 0x140);
  iVar7 = FUN_03814ff8(0x50);
  iVar8 = FUN_03814ff8(0x41);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)-iVar7,(float)-iVar8);
  FUN_03813ac0(lVar13 + 0x134,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  lVar13 = *(long *)(param_1 + 0x140);
  iVar7 = FUN_03814ff8(0x50);
  iVar8 = FUN_03814ff8(0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar7,(float)iVar8);
  FUN_03813acc(lVar13 + 0x13c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillDisplay::CreateSkillTipButton(int) */

void __thiscall
UINewPlantView_SkillDisplay::CreateSkillTipButton(UINewPlantView_SkillDisplay *this,int param_1)

{
  PVZ2UIButton *pPVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  char *__s;
  LotteryResultProgressBar *this_00;
  UIWidgetImage *pUVar12;
  PVZ2UIButton *pPVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_a0 [8];
  PVZ2UIButton *local_98;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_78 [56];
  int local_40;
  int local_3c;
  long local_8;
  
  uVar16 = *(undefined8 *)(this + 0x150);
  uVar15 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = FUN_03813b34(uVar16,*(undefined8 *)(this + 0x158));
  if (uVar7 != 0) {
    do {
      plVar8 = (long *)FUN_03813b40(uVar16,uVar15);
      if (*plVar8 != 0) {
        plVar8 = *(long **)(*plVar8 + 0x20);
        (**(code **)(*plVar8 + 0x68))(plVar8);
        uVar16 = *(undefined8 *)(this + 0x150);
        plVar8 = (long *)FUN_03813b40(uVar16,uVar15);
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          puVar9 = (undefined8 *)FUN_03813b40(*(undefined8 *)(this + 0x150),uVar15);
          *puVar9 = 0;
          uVar16 = *(undefined8 *)(this + 0x150);
        }
        uVar7 = FUN_03813b34(uVar16,*(undefined8 *)(this + 0x158));
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar7);
  }
  uVar7 = 0;
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::clear
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x150));
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138))
  ;
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_90,
             (vector *)(lVar10 + 0x108));
  uVar16 = local_90;
  uVar15 = FUN_03813b48(local_90,local_88);
  uVar17 = 0;
  if (uVar15 != 0) {
    do {
      puVar11 = (uint *)FUN_03813b54(uVar16,uVar7);
      if ((int)puVar11[1] <= param_1) {
        Sexy::StrFormat("IMAGE_UI_NEW_PLANT_S_%d",asStack_78,(ulong)*puVar11);
        __s = (char *)FUN_0547429c(asStack_78);
        std::string::string((string *)&local_40,__s);
        this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_40,false);
        std::string::~string((string *)&local_40);
        nop();
        std::string::~string(asStack_78);
        std::string::string((string *)&local_40,"UIImage_Main");
        pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
        std::string::~string((string *)&local_40);
        nop();
        FUN_05478178(asStack_78,&DAT_056f11a8,auStack_a0);
        Sexy::Color::Color((Color *)&local_40,1);
        pPVar13 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar13,(int)uVar7 + 1000,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                   (Color *)&local_40);
        local_98 = pPVar13;
        FUN_05476c50(asStack_78);
        nop();
        pPVar13 = local_98;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,this_00,1);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,this_00,1);
        PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
        pPVar13 = local_98;
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        Sexy::Insets::Insets((Insets *)&local_40,0,0,iVar2,iVar3);
        PVZ2UIButton::SetContentsRect(pPVar13,(TRect *)&local_40);
        pPVar13 = local_98;
        (**(code **)(*(long *)pUVar12 + 0xd0))((string *)&local_40,pUVar12);
        iVar2 = local_40;
        iVar3 = FUN_03814ff8(0x14);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        iVar5 = FUN_03814ff8(10);
        pPVar1 = local_98;
        pcVar14 = *(code **)(*(long *)pUVar12 + 0xd0);
        *(int *)(pPVar13 + 0x48) = iVar2 + iVar3 + (iVar4 + iVar5) * (int)uVar17;
        (*pcVar14)((string *)&local_40,pUVar12);
        iVar2 = local_3c;
        iVar3 = FUN_03814ff8(0x14);
        pPVar13 = local_98;
        *(int *)(pPVar1 + 0x4c) = iVar2 + iVar3;
        uVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        pPVar1 = local_98;
        *(undefined4 *)(pPVar13 + 0x50) = uVar6;
        uVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        lVar10 = *(long *)this;
        *(undefined4 *)(pPVar1 + 0x54) = uVar6;
        (**(code **)(lVar10 + 0x60))(this,local_98);
        std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                  ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x150),&local_98);
        uVar16 = local_90;
        uVar15 = FUN_03813b48(local_90,local_88);
      }
      uVar7 = uVar7 + 1;
      uVar17 = uVar7 & 0xffffffff;
    } while (uVar7 < uVar15);
  }
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::~vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)&local_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_SkillDisplay::OnDisplaySelectButton(int) */

void __thiscall
UINewPlantView_SkillDisplay::OnDisplaySelectButton(UINewPlantView_SkillDisplay *this,int param_1)

{
  RtWeakPtrBase *pRVar1;
  UIWidgetImage *this_00;
  UIWidgetImage *this_01;
  UIWidgetText *pUVar2;
  UIWidgetText *pUVar3;
  Image *pIVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtrBase *)(this + 0x138);
  std::string::string(asStack_10,"UIImage_Frame");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Skill");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_SkillName");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_SkillDes");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar1);
  pIVar4 = (Image *)FUN_03815fc0(param_1,asStack_10);
  UIWidgetImage::SetImage(this_00,pIVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,pRVar1);
  pIVar4 = (Image *)FUN_038163f4(param_1,asStack_10);
  UIWidgetImage::SetImage(this_01,pIVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  FUN_038162e0(asStack_10,param_1,aRStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar1);
  FUN_03816214(asStack_10,param_1,aRStack_18);
  PuzzleTip::SetTip(pUVar3,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  CreateSkillTipButton(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

