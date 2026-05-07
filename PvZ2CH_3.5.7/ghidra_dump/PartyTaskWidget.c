// Class: PartyTaskWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTaskWidget::UpdateButtonState() */

void __thiscall PartyTaskWidget::UpdateButtonState(PartyTaskWidget *this)

{
  int iVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),0);
  }
  else if (iVar1 == 2) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),1);
    this_00 = *(PVZ2UIButton **)(this + 0x150);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  else if (iVar1 == 0) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyTaskWidget::~PartyTaskWidget() */

void __thiscall PartyTaskWidget::~PartyTaskWidget(PartyTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069f13d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f1730;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* PartyTaskWidget::~PartyTaskWidget() */

void __thiscall PartyTaskWidget::~PartyTaskWidget(PartyTaskWidget *this)

{
  ~PartyTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* PartyTaskWidget::PartyTaskWidget() */

void __thiscall PartyTaskWidget::PartyTaskWidget(PartyTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069f13d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f1730;
  return;
}


/* PartyTaskWidget::InitData(PartyTaskInfo, int) */

void PartyTaskWidget::InitData
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x168) = param_2;
  *(undefined4 *)(param_1 + 0x170) = param_3;
  *(undefined4 *)(param_1 + 0x174) = param_4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTaskWidget::DrawRewards(Sexy::Graphics*) */

void __thiscall PartyTaskWidget::DrawRewards(PartyTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  iVar1 = *(int *)(this + 0x110);
  iVar2 = *(int *)(this + 0x108);
  iVar3 = FUN_04ea3948(5);
  Sexy::Insets::Insets
            (aIStack_28,iVar1 + iVar2,*(int *)(this + 0x10c),iVar1 + iVar3,
             iVar3 + *(int *)(this + 0x114));
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,this + 0x108,uVar4,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTaskWidget::InitTask(GeneralTask*) */

void PartyTaskWidget::InitTask(GeneralTask *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  PVZ2UIButton *pPVar7;
  code *pcVar8;
  long lVar9;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1838);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  std::string::string(asStack_98,"[PARTY_ASSIST_TASK_DES_");
  std::to_string<ActivityTypeID>((ActivityTypeID *)(param_1 + 0x174));
  std::operator+(asStack_98,asStack_90);
  std::operator+(asStack_88,"]");
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(param_1 + 0xf0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  nop();
  iVar1 = FUN_04ea3948(0x1e);
  iVar2 = FUN_04ea3948(0x28);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = FUN_04ea3948(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,0,iVar4 - iVar2,iVar3);
  *(undefined8 *)(param_1 + 0xf8) = local_40;
  *(undefined8 *)(param_1 + 0x100) = uStack_38;
  iVar4 = FUN_04ea3948(200);
  iVar1 = FUN_04ea3948(0x4b);
  iVar2 = FUN_04ea3948(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar2);
  *(undefined8 *)(param_1 + 0x108) = local_40;
  *(undefined8 *)(param_1 + 0x110) = uStack_38;
  iVar4 = FUN_04ea3948(0x168);
  iVar1 = FUN_04ea3948(5);
  iVar2 = FUN_04ea3948(0x8c);
  iVar3 = FUN_04ea3948(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x130) = local_40;
  *(undefined8 *)(param_1 + 0x138) = uStack_38;
  iVar4 = FUN_04ea3948(0x1a4);
  iVar1 = FUN_04ea3948(0x55);
  iVar2 = FUN_04ea3948(0x78);
  iVar3 = FUN_04ea3948(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar3);
  pPVar7 = *(PVZ2UIButton **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x140) = local_40;
  *(undefined8 *)(param_1 + 0x148) = uStack_38;
  if (pPVar7 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,0x56c3,(ButtonListener *)(param_1 + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(param_1 + 0x150) = pPVar7;
    FUN_05476c50(awStack_78);
    (**(code **)(*(long *)param_1 + 0x340))(param_1);
    pPVar7 = *(PVZ2UIButton **)(param_1 + 0x150);
    lVar9 = 0;
    if (pPVar7 == (PVZ2UIButton *)0x0) goto LAB_04ea65c0;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba1998,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ba1aa8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(param_1 + 0x150) + 0x1a0))(*(long **)(param_1 + 0x150),param_1 + 0x140);
  plVar6 = *(long **)(param_1 + 0x150);
  pcVar8 = *(code **)(*plVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar6,uVar5);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0x150));
  lVar9 = *(long *)(param_1 + 0x150);
LAB_04ea65c0:
  iVar4 = FUN_04ea3948(5);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar4;
  iVar4 = FUN_04ea3948(0x3c);
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar4;
  iVar4 = FUN_04ea3948(7);
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) - iVar4;
  iVar4 = FUN_04ea3948(0x55);
  *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + iVar4;
  iVar2 = FUN_04ea3948(7);
  iVar4 = *(int *)(param_1 + 0x16c);
  iVar1 = *(int *)(param_1 + 0x168);
  *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) - iVar2;
  plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar1,iVar4,true);
  iVar4 = *(int *)(param_1 + 0x110);
  iVar1 = *(int *)(param_1 + 0x108);
  iVar2 = FUN_04ea3948(5);
  iVar3 = FUN_04ea3948(8);
  (**(code **)(*plVar6 + 0x198))
            (plVar6,iVar4 + iVar1 + iVar2,iVar3 + *(int *)(param_1 + 0x10c),iVar4 + iVar2,
             iVar2 + *(int *)(param_1 + 0x114));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,plVar6);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTaskWidget::RequestReward() */

void __thiscall PartyTaskWidget::RequestReward(PartyTaskWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2968];
  string asStack_150 [328];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"giftId");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x174));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04ea3834(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_150,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* PartyTaskWidget::ButtonDepress(int) */

void __thiscall PartyTaskWidget::ButtonDepress(PartyTaskWidget *this,int param_1)

{
  if (param_1 == 0x56c3) {
    (**(code **)(*(long *)this + 0x348))();
  }
  return;
}


/* non-virtual thunk to PartyTaskWidget::ButtonDepress(int) */

void __thiscall PartyTaskWidget::ButtonDepress(PartyTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

