// Class: LevelButtonUI


/* LevelButtonUI::~LevelButtonUI() */

void __thiscall LevelButtonUI::~LevelButtonUI(LevelButtonUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06841b10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06841e38;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  *(undefined8 *)(this + 0xe8) = 0;
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelButtonUI::~LevelButtonUI() */

void __thiscall LevelButtonUI::~LevelButtonUI(LevelButtonUI *this)

{
  ~LevelButtonUI(this);
  AK::FreeHook(this);
  return;
}


/* LevelButtonUI::ClickIt() */

void __thiscall LevelButtonUI::ClickIt(LevelButtonUI *this)

{
  if (((this[0xfc] == (LevelButtonUI)0x0) && (this[0xfe] == (LevelButtonUI)0x0)) &&
     (this[0xfd] == (LevelButtonUI)0x0)) {
    this[0xfd] = (LevelButtonUI)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelButtonUI::InitView() */

void __thiscall LevelButtonUI::InitView(LevelButtonUI *this)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIButton *this_02;
  ActivityConfig *this_03;
  ResourceInfo *pRVar10;
  long *plVar11;
  code *pcVar12;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  psVar1 = (string *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  pcVar12 = *(code **)(*(long *)this + 0x198);
  uVar4 = FUN_043b0ddc(0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
  iVar5 = FUN_043b0ddc(1);
  iVar7 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
  iVar6 = FUN_043b0ddc(0xc);
  (*pcVar12)(this,uVar4,uVar4,iVar5 + iVar7,iVar6 + *(int *)(lVar9 + 0x3c));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar7 = PlayerInfo::GetPlantStarLevel(this_01,psVar1,false);
  if (iVar7 < *(int *)(this + 0xf8)) {
    if (this[0xfc] != (LevelButtonUI)0x0) goto LAB_043b134c;
  }
  else {
    this[0xfe] = (LevelButtonUI)0x1;
    if (this[0xfc] == (LevelButtonUI)0x0) goto LAB_043b11d8;
LAB_043b134c:
    cVar3 = PlayerInfo::IsPlantAvatarUnLocked(this_01,psVar1,0,0);
    if (cVar3 != '\0') {
      this[0xfe] = (LevelButtonUI)0x1;
      goto LAB_043b11d8;
    }
  }
  if (this[0xfe] == (LevelButtonUI)0x0) {
    std::string::string((string *)awStack_20,"");
    nop();
    lVar9 = LawnApp::GetActivityConfig();
    if (lVar9 != 0) {
      this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar3 = ActivityConfig::GetStorePlantGiftLevelDiscountImageSByPlantName
                        (this_03,psVar1,*(int *)(this + 0xf8),(string *)awStack_20);
      if (((cVar3 != '\0') && (bVar2 = std::operator!=((string *)awStack_20,""), bVar2)) &&
         (lVar9 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)awStack_20), lVar9 != 0)) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aCStack_18);
        *(ResourceInfo **)(this + 0xf0) = pRVar10;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_18)
        ;
      }
    }
    std::string::~string((string *)awStack_20);
  }
LAB_043b11d8:
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_02,0,(ButtonListener *)(this + 0xd8),awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0xe8) = this_02;
  FUN_05476c50(awStack_20);
  nop();
  plVar11 = *(long **)(this + 0xe8);
  pcVar12 = *(code **)(*plVar11 + 0x198);
  uVar8 = FUN_043b0ddc(0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
  uVar4 = *(undefined4 *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
  (*pcVar12)(plVar11,uVar8,uVar8,uVar4,*(undefined4 *)(lVar9 + 0x3c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelButtonUI::LevelButtonUI(bool, std::string const&, int) */

void __thiscall
LevelButtonUI::LevelButtonUI(LevelButtonUI *this,bool param_1,string *param_2,int param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06841b10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06841e38;
  Set8BytesTo0(this + 0xe0);
  this[0xfc] = (LevelButtonUI)param_1;
  *(int *)(this + 0xf8) = param_3;
  thunk_FUN_05475e00(this + 0xe0,param_2);
  this[0xfe] = (LevelButtonUI)0x0;
  this[0xfd] = this[0xfc];
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  InitView(this);
  return;
}


/* LevelButtonUI::Draw(Sexy::Graphics*) */

void __thiscall LevelButtonUI::Draw(LevelButtonUI *this,Graphics *param_1)

{
  LevelButtonUI LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  Image *pIVar6;
  long lVar7;
  undefined8 uVar8;
  Image *local_10;
  
  if (this[0xfd] == (LevelButtonUI)0x0) {
    if (this[0xfe] != (LevelButtonUI)0x0) goto LAB_043b1984;
LAB_043b1804:
    puVar5 = IMAGE_UI_PLANTGIFT_ITEM_NORMAL;
  }
  else {
    if (this[0xfc] == (LevelButtonUI)0x0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER
                                  );
      iVar2 = FUN_043b0ddc(0);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar2);
      if (this[0xfe] != (LevelButtonUI)0x0) goto LAB_043b1984;
      if (this[0xfd] == (LevelButtonUI)0x0) goto LAB_043b1804;
    }
    else if (this[0xfe] != (LevelButtonUI)0x0) {
LAB_043b1984:
      puVar5 = IMAGE_UI_PLANTGIFT_ITEM_GOT;
      goto LAB_043b180c;
    }
    puVar5 = IMAGE_UI_PLANTGIFT_ITEM_SELECTED;
  }
LAB_043b180c:
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)puVar5);
  iVar2 = FUN_043b0ddc(8);
  iVar3 = FUN_043b0ddc(0xe);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2,iVar3);
  if (this[0xfc] == (LevelButtonUI)0x0) {
    switch(*(undefined4 *)(this + 0xf8)) {
    case 1:
      puVar5 = IMAGE_UI_PLANTGIFT_ICON_R1;
      break;
    case 2:
      puVar5 = IMAGE_UI_PLANTGIFT_ICON_R2;
      break;
    case 3:
      puVar5 = IMAGE_UI_PLANTGIFT_ICON_R3;
      break;
    case 4:
      puVar5 = IMAGE_UI_PLANTGIFT_ICON_R4;
      break;
    default:
      pIVar6 = *(Image **)(this + 0xf0);
      LVar1 = this[0xfe];
      goto joined_r0x043b1860;
    }
    local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)puVar5);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
    iVar2 = *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)puVar5)
    ;
    iVar2 = iVar2 - *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
    iVar3 = *(int *)(lVar7 + 0x3c);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)puVar5)
    ;
    uVar8 = 6;
  }
  else {
    local_10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ICON_RING)
    ;
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
    iVar2 = *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ICON_RING);
    iVar2 = iVar2 - *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
    iVar3 = *(int *)(lVar7 + 0x3c);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ICON_RING);
    uVar8 = 3;
  }
  iVar4 = FUN_043b0ddc(uVar8);
  Sexy::Graphics::DrawImage
            (param_1,local_10,(int)((float)iVar2 * 0.5),
             (int)((float)iVar4 + (float)(iVar3 - *(int *)(lVar7 + 0x3c)) * 0.5));
  pIVar6 = *(Image **)(this + 0xf0);
  LVar1 = this[0xfe];
joined_r0x043b1860:
  if (pIVar6 == (Image *)0x0) {
    if (LVar1 != (LevelButtonUI)0x0) {
LAB_043b1868:
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_MARK_GOT);
LAB_043b1878:
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
      iVar2 = FUN_043b0ddc(10);
      iVar3 = FUN_043b0ddc(5);
      Sexy::Graphics::DrawImage
                (param_1,pIVar6,(int)((float)iVar2 + (float)*(int *)(lVar7 + 0x38) * 0.5),iVar3);
    }
    if (this[0xfd] == (LevelButtonUI)0x0) {
      return;
    }
    if ((this[0xfc] == (LevelButtonUI)0x0) || (this[0xfe] != (LevelButtonUI)0x0)) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)
                                   IMAGE_UI_PLANTGIFT_MARK_SELECTED);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
      iVar2 = *(int *)(lVar7 + 0x38);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_MARK_SELECTED);
      iVar3 = FUN_043b0ddc(4);
      iVar3 = (int)((float)iVar3 + (float)(iVar2 - *(int *)(lVar7 + 0x38)) * 0.5);
      lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)IMAGE_UI_PLANTGIFT_ITEM_HOVER);
      iVar2 = FUN_043b0ddc(0x1a);
      iVar2 = *(int *)(lVar7 + 0x3c) - iVar2;
      goto LAB_043b1964;
    }
  }
  else {
    if (LVar1 != (LevelButtonUI)0x0) goto LAB_043b1868;
    if (this[0xfc] == (LevelButtonUI)0x0) goto LAB_043b1878;
    if (this[0xfd] == (LevelButtonUI)0x0) {
      return;
    }
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)
                               IMAGE_UI_PLANTGIFT_ITEM_HOVER_SELECTED);
  iVar3 = FUN_043b0ddc(0);
  iVar2 = FUN_043b0ddc(9);
LAB_043b1964:
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar3,iVar2);
  return;
}


/* LevelButtonUI::ButtonDepress(int) */

void LevelButtonUI::ButtonDepress(int param_1)

{
  LevelButtonUI *this;
  char *pcVar1;
  
  this = (LevelButtonUI *)(ulong)(uint)param_1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  ClickIt(this);
  if ((this[0xfe] == (LevelButtonUI)0x0) && (this[0xfc] == (LevelButtonUI)0x0)) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::RefreshOtherLevelButtons,
               *(int *)(this + 0xf8));
    return;
  }
  return;
}


/* non-virtual thunk to LevelButtonUI::ButtonDepress(int) */

void __thiscall LevelButtonUI::ButtonDepress(LevelButtonUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

