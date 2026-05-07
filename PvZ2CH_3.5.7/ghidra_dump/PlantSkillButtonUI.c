// Class: PlantSkillButtonUI


/* PlantSkillButtonUI::ButtonMouseLeave(int) */

void __thiscall PlantSkillButtonUI::ButtonMouseLeave(PlantSkillButtonUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to PlantSkillButtonUI::ButtonMouseLeave(int) */

void __thiscall PlantSkillButtonUI::ButtonMouseLeave(PlantSkillButtonUI *this,int param_1)

{
  ButtonMouseLeave(this + -0xd8,param_1);
  return;
}


/* PlantSkillButtonUI::SetContent(Sexy::RtWeakPtr<SkillPropertySheet>&) */

void __thiscall PlantSkillButtonUI::SetContent(PlantSkillButtonUI *this,RtWeakPtr *param_1)

{
  this[0x100] = (PlantSkillButtonUI)0x1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_1);
  return;
}


/* PlantSkillButtonUI::~PlantSkillButtonUI() */

void __thiscall PlantSkillButtonUI::~PlantSkillButtonUI(PlantSkillButtonUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0683ec00;
  *(undefined **)(this + 0xd8) = &DAT_0683ef38;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantSkillButtonUI::~PlantSkillButtonUI() */

void __thiscall PlantSkillButtonUI::~PlantSkillButtonUI(PlantSkillButtonUI *this)

{
  ~PlantSkillButtonUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSkillButtonUI::Update() */

void __thiscall PlantSkillButtonUI::Update(PlantSkillButtonUI *this)

{
  LawnApp *this_00;
  long lVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (this[0x100] != (PlantSkillButtonUI)0x0) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    lVar1 = LawnApp::GetUIImageInfoFromStringId(this_00,(string *)(lVar1 + 0x20));
    if (lVar1 != 0) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      *(ResourceInfo **)(this + 0xf0) = pRVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this[0x100] = (PlantSkillButtonUI)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSkillButtonUI::InitView() */

void __thiscall PlantSkillButtonUI::InitView(PlantSkillButtonUI *this)

{
  undefined4 uVar1;
  LawnApp *this_00;
  undefined4 uVar2;
  long lVar3;
  PVZ2UIButton *this_01;
  ResourceInfo *pRVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar6 = *(code **)(*(long *)this + 0x198);
  uVar2 = FUN_043924ac(0);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
  (*pcVar6)(this,uVar2,uVar2,uVar1,*(undefined4 *)(lVar3 + 0x3c));
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)aRStack_18,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)aRStack_18);
  *(PVZ2UIButton **)(this + 0xe0) = this_01;
  FUN_05476c50(awStack_20);
  nop();
  plVar5 = *(long **)(this + 0xe0);
  pcVar6 = *(code **)(*plVar5 + 0x198);
  uVar2 = FUN_043924ac(0);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
  (*pcVar6)(plVar5,uVar2,uVar2,uVar1,*(undefined4 *)(lVar3 + 0x3c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_00 = gLawnApp;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  lVar3 = LawnApp::GetUIImageInfoFromStringId(this_00,(string *)(lVar3 + 0x20));
  if (lVar3 != 0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    *(ResourceInfo **)(this + 0xf0) = pRVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSkillButtonUI::PlantSkillButtonUI(Sexy::RtWeakPtr<SkillPropertySheet>&, int, ESkillTipsType,
   int) */

void __thiscall
PlantSkillButtonUI::PlantSkillButtonUI
          (PlantSkillButtonUI *this,RtWeakPtr *param_1,int param_2,undefined4 param_4,
          undefined4 param_5)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683ec00;
  *(undefined **)(this + 0xd8) = &DAT_0683ef38;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_1);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x100] = (PlantSkillButtonUI)0x0;
  *(int *)(this + 0xf8) = param_2 + -1;
  *(undefined4 *)(this + 0xfc) = param_5;
  *(undefined4 *)(this + 0x104) = param_4;
  InitView(this);
  return;
}


/* PlantSkillButtonUI::Draw(Sexy::Graphics*) */

void __thiscall PlantSkillButtonUI::Draw(PlantSkillButtonUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar4;
  Image *pIVar5;
  
  switch(*(undefined4 *)(this + 0xf8)) {
  case 1:
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8;
    break;
  case 2:
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06affaf0;
    break;
  case 3:
  case 4:
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b009b8;
    break;
  default:
    goto switchD_043959c4_default;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar3 = FUN_043924ac(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar3,iVar3);
switchD_043959c4_default:
  if (*(long *)(this + 0xf0) != 0) {
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
    iVar3 = *(int *)(lVar4 + 0x38);
    iVar1 = *(int *)(*(long *)(this + 0xf0) + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),(int)((float)(iVar3 - iVar1) * 0.5),
               (int)((float)(*(int *)(lVar4 + 0x3c) - *(int *)(*(Image **)(this + 0xf0) + 0x3c)) *
                    0.5));
  }
  if (*(int *)(this + 0xfc) <= *(int *)(this + 0xf8)) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affb18);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
    iVar3 = *(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affb18);
    iVar1 = *(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b008d8);
    iVar2 = *(int *)(lVar4 + 0x3c);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06affb18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,(int)((float)(iVar3 - iVar1) * 0.5),
               (int)((float)(iVar2 - *(int *)(lVar4 + 0x3c)) * 0.5));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSkillButtonUI::ButtonPress(int) */

void __thiscall PlantSkillButtonUI::ButtonPress(PlantSkillButtonUI *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  char *pcVar5;
  long lVar6;
  TPoint aTStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  PlantSkillButtonUI *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = FUN_04391b90(*(undefined4 *)(pPVar4 + 0x40));
  if ((iVar3 != 0x1d) ||
     (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x1d), cVar2 != '\0')) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Press");
    if (param_1 == 0) {
      (**(code **)(*(long *)this + 0xd0))(aTStack_68,this);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
      Sexy::ToWString((string *)(lVar6 + 0x10));
      TodStringTranslate(awStack_58);
      std::operator+(awStack_50,L"\n");
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
      Sexy::ToWString((string *)(lVar6 + 0x18));
      TodStringTranslate(awStack_40);
      std::operator+(awStack_48,awStack_38);
      FUN_05476c50(awStack_38);
      FUN_05476c50(awStack_40);
      FUN_05476c50(awStack_48);
      FUN_05476c50(awStack_50);
      FUN_05476c50(awStack_58);
      pLVar1 = gLawnApp;
      Sexy::Point::Point((Point *)awStack_38,aTStack_68);
      local_30 = this;
      FUN_0439296c(afStack_28,awStack_38);
      LawnApp::ShowPlantSkillTipsUI(pLVar1,auStack_60,0,0,3,afStack_28,0);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      FUN_05476c50(auStack_60);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantSkillButtonUI::ButtonPress(int) */

void __thiscall PlantSkillButtonUI::ButtonPress(PlantSkillButtonUI *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* PlantSkillButtonUI::ButtonDepress(int) */

void __thiscall PlantSkillButtonUI::ButtonDepress(PlantSkillButtonUI *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  if (param_1 != 0) {
    return;
  }
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to PlantSkillButtonUI::ButtonDepress(int) */

void __thiscall PlantSkillButtonUI::ButtonDepress(PlantSkillButtonUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

