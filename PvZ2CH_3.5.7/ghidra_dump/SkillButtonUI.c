// Class: SkillButtonUI


/* SkillButtonUI::~SkillButtonUI() */

void __thiscall SkillButtonUI::~SkillButtonUI(SkillButtonUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06841790;
  *(undefined **)(this + 0xd8) = &DAT_06841ac0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xe0) = 0;
  std::string::~string((string *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SkillButtonUI::~SkillButtonUI() */

void __thiscall SkillButtonUI::~SkillButtonUI(SkillButtonUI *this)

{
  ~SkillButtonUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkillButtonUI::InitView() */

void __thiscall SkillButtonUI::InitView(SkillButtonUI *this)

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
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar6 = *(code **)(*(long *)this + 0x198);
  uVar2 = FUN_043b0ddc(0);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_TWO_BG);
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_TWO_BG);
  (*pcVar6)(this,uVar2,uVar2,uVar1,*(undefined4 *)(lVar3 + 0x3c));
  this_00 = gLawnApp;
  if (this[0x104] == (SkillButtonUI)0x0) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    lVar3 = LawnApp::GetUIImageInfoFromStringId(this_00,(string *)(lVar3 + 0x20));
    if (lVar3 != 0) {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aCStack_18);
      *(ResourceInfo **)(this + 0xe8) = pRVar4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_18);
    }
  }
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_01,0,(ButtonListener *)(this + 0xd8),awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0xe0) = this_01;
  FUN_05476c50(awStack_20);
  nop();
  plVar5 = *(long **)(this + 0xe0);
  pcVar6 = *(code **)(*plVar5 + 0x198);
  uVar2 = FUN_043b0ddc(0);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_TWO_BG);
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_TWO_BG);
  (*pcVar6)(plVar5,uVar2,uVar2,uVar1,*(undefined4 *)(lVar3 + 0x3c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkillButtonUI::SkillButtonUI(bool, Sexy::RtWeakPtr<SkillPropertySheet> const&, int) */

void __thiscall
SkillButtonUI::SkillButtonUI(SkillButtonUI *this,bool param_1,RtWeakPtr *param_2,int param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06841790;
  *(undefined **)(this + 0xd8) = &DAT_06841ac0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  Set8BytesTo0((string *)(this + 0xf8));
  this[0x104] = (SkillButtonUI)param_1;
  *(int *)(this + 0x100) = param_3;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),param_2);
  *(undefined8 *)(this + 0xe8) = 0;
  std::string::append((string *)(this + 0xf8),"",(size_t)param_2);
  InitView(this);
  return;
}


/* SkillButtonUI::Draw(Sexy::Graphics*) */

void __thiscall SkillButtonUI::Draw(SkillButtonUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Image *pIVar5;
  undefined1 *this_00;
  undefined1 *this_01;
  Image *local_10;
  
  if (this[0x104] == (SkillButtonUI)0x0) {
    iVar2 = *(int *)(this + 0x100);
    if (iVar2 == 3) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)
                                   IMAGE_UI_PLANTGIFT_LEVEL_THREE_BG);
      iVar2 = FUN_043b0ddc(0);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
      pIVar5 = *(Image **)(this + 0xe8);
      if (pIVar5 != (Image *)0x0) {
        iVar2 = FUN_043b0ddc(5);
        iVar3 = FUN_043b0ddc(4);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar5,iVar2,iVar3,(int)((float)*(int *)(pIVar5 + 0x38) * 0.98),
                   (int)((float)*(int *)(pIVar5 + 0x3c) * 0.98));
      }
      this_00 = IMAGE_UI_PLANTGIFT_LEVEL_2;
      local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_2)
      ;
      this_01 = IMAGE_UI_PLANTGIFT_LEVEL_THREE_BG;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 != 2) {
          return;
        }
        pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)
                                     IMAGE_UI_PLANTGIFT_LEVEL_TWO_BG);
        iVar2 = FUN_043b0ddc(0);
        Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
        pIVar5 = *(Image **)(this + 0xe8);
        if (pIVar5 != (Image *)0x0) {
          iVar2 = FUN_043b0ddc(5);
          iVar3 = FUN_043b0ddc(4);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar5,iVar2,iVar3,(int)((float)*(int *)(pIVar5 + 0x38) * 0.98),
                     (int)((float)*(int *)(pIVar5 + 0x3c) * 0.98));
        }
        this_00 = IMAGE_UI_PLANTGIFT_LEVEL_1;
        local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)
                                       IMAGE_UI_PLANTGIFT_LEVEL_1);
        goto LAB_043b1508;
      }
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)
                                   IMAGE_UI_PLANTGIFT_LEVEL_FOUR_BG);
      iVar2 = FUN_043b0ddc(0);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
      pIVar5 = *(Image **)(this + 0xe8);
      if (pIVar5 != (Image *)0x0) {
        iVar2 = FUN_043b0ddc(5);
        iVar3 = FUN_043b0ddc(4);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar5,iVar2,iVar3,(int)((float)*(int *)(pIVar5 + 0x38) * 0.98),
                   (int)((float)*(int *)(pIVar5 + 0x3c) * 0.98));
      }
      this_00 = IMAGE_UI_PLANTGIFT_LEVEL_4;
      local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_4)
      ;
      this_01 = IMAGE_UI_PLANTGIFT_LEVEL_FOUR_BG;
    }
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)this_01);
    iVar2 = *(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)this_00);
    iVar3 = *(int *)(lVar4 + 0x38);
  }
  else {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)
                                 IMAGE_UI_PLANTGIFT_LEVEL_THREE_BG);
    iVar2 = FUN_043b0ddc(0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ICON_AVATAR)
    ;
    iVar2 = FUN_043b0ddc(0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
    this_00 = IMAGE_UI_PLANTGIFT_AVATAR;
    local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_AVATAR);
LAB_043b1508:
    this_01 = IMAGE_UI_PLANTGIFT_LEVEL_THREE_BG;
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_LEVEL_THREE_BG);
    iVar2 = *(int *)(lVar4 + 0x38);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)this_00);
    iVar3 = *(int *)(lVar4 + 0x38);
  }
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)this_01);
  iVar1 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)this_00);
  Sexy::Graphics::DrawImage
            (param_1,local_10,(int)((float)(iVar2 - iVar3) * 0.5),iVar1 - *(int *)(lVar4 + 0x3c));
  return;
}


/* SkillButtonUI::ButtonDepress(int) */

void SkillButtonUI::ButtonDepress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Release");
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  return;
}


/* non-virtual thunk to SkillButtonUI::ButtonDepress(int) */

void __thiscall SkillButtonUI::ButtonDepress(SkillButtonUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkillButtonUI::ButtonPress(int) */

void SkillButtonUI::ButtonPress(int param_1)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  wstring awStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  uVar6 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_UI_Button_Click_Press");
  if (*(char *)(uVar6 + 0x104) != '\0') {
    cVar3 = FUN_0547419c((Sexy *)(uVar6 + 0xf8));
    if (cVar3 == '\0') {
      uVar4 = FUN_043b0ddc(0x208);
      auVar10 = FUN_043b0ddc(100);
      Sexy::StringToUpper((Sexy *)(uVar6 + 0xf8),auVar10._8_8_);
      uVar9 = FUN_0547429c(asStack_40);
      Sexy::StrFormat("[STORE_PRODUCT_AVATAR_%s]",asStack_38,uVar9);
      Sexy::ToWString(asStack_38);
      TodStringTranslate(awStack_30);
      FUN_05476c50(awStack_30);
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(uVar6 + 0xf0));
      Sexy::ToWString((string *)(lVar8 + 0x18));
      TodStringTranslate((wstring *)asStack_38);
      FUN_05476c50(awStack_30);
      FUN_05476c50(asStack_38);
      pLVar2 = gLawnApp;
      std::function<void(Sexy::Graphics*)>::function(afStack_28);
      LawnApp::ShowPlantSkillTipsUI
                (pLVar2,awStack_48,uVar4,auVar10._0_8_ & 0xffffffff,1,afStack_28,0);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      FUN_05476c50(awStack_48);
      goto LAB_043b1bf8;
    }
  }
  iVar1 = *(int *)(uVar6 + 0x100);
  if (iVar1 == 3) {
    uVar9 = 0x1b8;
  }
  else if (iVar1 == 4) {
    uVar9 = 0x208;
  }
  else {
    if (iVar1 != 2) goto LAB_043b1bf8;
    uVar9 = 0x168;
  }
  uVar4 = FUN_043b0ddc(uVar9);
  uVar5 = FUN_043b0ddc(100);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar6 + 0xf0));
  Sexy::ToWString((string *)(lVar8 + 0x10));
  TodStringTranslate(awStack_50);
  std::operator+(awStack_48,L"\n");
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar6 + 0xf0));
  Sexy::ToWString((string *)(lVar8 + 0x18));
  TodStringTranslate((wstring *)asStack_38);
  std::operator+((wstring *)asStack_40,awStack_30);
  FUN_05476c50(awStack_30);
  FUN_05476c50((wstring *)asStack_38);
  FUN_05476c50((wstring *)asStack_40);
  FUN_05476c50(awStack_48);
  FUN_05476c50(awStack_50);
  pLVar2 = gLawnApp;
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  LawnApp::ShowPlantSkillTipsUI(pLVar2,auStack_58,uVar4,uVar5,1,afStack_28,0);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  FUN_05476c50(auStack_58);
LAB_043b1bf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SkillButtonUI::ButtonPress(int) */

void __thiscall SkillButtonUI::ButtonPress(SkillButtonUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}

