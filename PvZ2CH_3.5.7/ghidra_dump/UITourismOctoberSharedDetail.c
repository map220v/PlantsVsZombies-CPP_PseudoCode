// Class: UITourismOctoberSharedDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberSharedDetail::DoSave() */

void __thiscall UITourismOctoberSharedDetail::DoSave(UITourismOctoberSharedDetail *this)

{
  long lVar1;
  SocialShareMgr *this_00;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Insets::Insets((Insets *)&local_18);
  local_18 = *(int *)(lVar1 + 0x48);
  local_14 = *(int *)(lVar1 + 0x4c);
  local_c = *(int *)(lVar1 + 0x54);
  local_10 = *(int *)(lVar1 + 0x50);
  this_00 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::SaveScreenImageToGallery(this_00,local_18,local_14,local_10,local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberSharedDetail::GetLayoutName() */

void __thiscall UITourismOctoberSharedDetail::GetLayoutName(UITourismOctoberSharedDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITourismOctoberSharedDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberSharedDetail::initView() */

void __thiscall UITourismOctoberSharedDetail::initView(UITourismOctoberSharedDetail *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidgetText::SetString(pUVar1,(string *)(this + 0x150));
  std::string::string(asStack_10,"UIText_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"(android)");
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITourismOctoberSharedDetail::UITourismOctoberSharedDetail() */

void __thiscall
UITourismOctoberSharedDetail::UITourismOctoberSharedDetail(UITourismOctoberSharedDetail *this)

{
  UISingletonDialog<UITourismOctoberSharedDetail>::UISingletonDialog
            ((UISingletonDialog<UITourismOctoberSharedDetail> *)this);
  *(undefined ***)this = &PTR_GetClass_069eec00;
  *(undefined **)(this + 0xd8) = &DAT_069eef50;
  TourismOctoberData::TourismOctoberData((TourismOctoberData *)(this + 0x138));
  return;
}


/* UITourismOctoberSharedDetail::~UITourismOctoberSharedDetail() */

void __thiscall
UITourismOctoberSharedDetail::~UITourismOctoberSharedDetail(UITourismOctoberSharedDetail *this)

{
  *(undefined ***)this = &PTR_GetClass_069eec00;
  *(undefined **)(this + 0xd8) = &DAT_069eef50;
  TourismOctoberData::~TourismOctoberData((TourismOctoberData *)(this + 0x138));
  UISingletonDialog<UITourismOctoberSharedDetail>::~UISingletonDialog
            ((UISingletonDialog<UITourismOctoberSharedDetail> *)this);
  return;
}


/* UITourismOctoberSharedDetail::~UITourismOctoberSharedDetail() */

void __thiscall
UITourismOctoberSharedDetail::~UITourismOctoberSharedDetail(UITourismOctoberSharedDetail *this)

{
  ~UITourismOctoberSharedDetail(this);
  AK::FreeHook(this);
  return;
}


/* UITourismOctoberSharedDetail::LoadData(TourismOctoberData const&) */

void __thiscall
UITourismOctoberSharedDetail::LoadData
          (UITourismOctoberSharedDetail *this,TourismOctoberData *param_1)

{
  TourismOctoberData::operator=((TourismOctoberData *)(this + 0x138),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberSharedDetail::OnCreate() */

void __thiscall UITourismOctoberSharedDetail::OnCreate(UITourismOctoberSharedDetail *this)

{
  char cVar1;
  int iVar2;
  Widget *pWVar3;
  ActiveItem aAStack_118 [8];
  undefined4 local_110;
  char local_100;
  string asStack_98 [144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_98,"Background_0");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_98);
  std::string::~string(asStack_98);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,true);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e952b4(local_110);
  if ((cVar1 != '\0') && (local_100 != '\0')) {
    TourismOctoberData::TourismOctoberData((TourismOctoberData *)asStack_98);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_118,(RtObject *)asStack_98);
    if (cVar1 != '\0') {
      TourismOctoberData::operator=
                ((TourismOctoberData *)(this + 0x138),(TourismOctoberData *)asStack_98);
      initView(this);
    }
    TourismOctoberData::~TourismOctoberData((TourismOctoberData *)asStack_98);
  }
  ActiveItem::~ActiveItem(aAStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberSharedDetail::DoShare() */

void __thiscall UITourismOctoberSharedDetail::DoShare(UITourismOctoberSharedDetail *this)

{
  int iVar1;
  long lVar2;
  SocialShareMgr *pSVar3;
  ulong uVar4;
  TourismOctoberPlayerInfo *pTVar5;
  char *pcVar6;
  TGALogMgr *this_00;
  size_t __n;
  ulong uVar7;
  undefined8 uVar8;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  DString aDStack_80 [16];
  int local_70 [7];
  byte local_54;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [48];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"Background_0");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  Sexy::Insets::Insets((Insets *)&local_90);
  local_90 = *(uint *)(lVar2 + 0x48);
  local_84 = *(undefined4 *)(lVar2 + 0x54);
  local_8c = *(undefined4 *)(lVar2 + 0x4c);
  local_88 = FUN_04e967b8(10);
  local_88 = *(int *)(lVar2 + 0x50) - local_88;
  pSVar3 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::InitDefaultShareInfoMaps(pSVar3);
  lVar2 = Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  FUN_04e95b6c(lVar2 + 0x20);
  pSVar3 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  __n = (size_t)local_90;
  SocialShareMgr::ShareWithImage(pSVar3,0,__n,local_8c,local_88,local_84);
  Sexy::SexyAppBase::CopyToClipboard(gLawnApp);
  TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  std::string::append(asStack_50,"2",__n);
  uVar8 = *(undefined8 *)(this + 0x180);
  uVar4 = FUN_04e954f8(uVar8,*(undefined8 *)(this + 0x188));
  uVar7 = 0;
  if (uVar4 != 0) {
    while (uVar7 < uVar4) {
      pTVar5 = (TourismOctoberPlayerInfo *)FUN_04e95520(uVar8,uVar7);
      TourismOctoberPlayerInfo::TourismOctoberPlayerInfo
                ((TourismOctoberPlayerInfo *)local_70,pTVar5);
      __n = (size_t)local_54;
      if (local_54 != 0) {
        DString::DString(aDStack_80,local_70[0]);
        pcVar6 = (char *)DString::c_str(aDStack_80);
        std::string::append(asStack_48,pcVar6,__n);
        DString::~DString(aDStack_80);
        std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)local_70);
        break;
      }
      std::_Destroy<CornucopiaRankData>((CornucopiaRankData *)local_70);
      uVar8 = *(undefined8 *)(this + 0x180);
      uVar4 = FUN_04e954f8(uVar8,*(undefined8 *)(this + 0x188));
      uVar7 = uVar7 + 1;
    }
  }
  DString::DString((DString *)local_70,(string *)(this + 0x150));
  pcVar6 = (char *)DString::c_str((DString *)local_70);
  std::string::append(asStack_40,pcVar6,__n);
  DString::~DString((DString *)local_70);
  iVar1 = FUN_04e954f8(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  DString::DString((DString *)local_70,iVar1);
  pcVar6 = (char *)DString::c_str((DString *)local_70);
  std::string::append(asStack_10,pcVar6,__n);
  DString::~DString((DString *)local_70);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogTourismOctoberData(this_00,(TGATourismOctoberData *)asStack_50);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UITourismOctoberSharedDetail::ButtonDepress(int) */

void __thiscall
UITourismOctoberSharedDetail::ButtonDepress(UITourismOctoberSharedDetail *this,int param_1)

{
  if (param_1 == 99) {
    DoShare(this);
    return;
  }
  if (param_1 != 100) {
    if (param_1 != 0x62) {
      return;
    }
    DoSave(this);
    return;
  }
  UISingletonDialog<UITourismOctoberSharedDetail>::CloseDialog();
  return;
}


/* non-virtual thunk to UITourismOctoberSharedDetail::ButtonDepress(int) */

void __thiscall
UITourismOctoberSharedDetail::ButtonDepress(UITourismOctoberSharedDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

