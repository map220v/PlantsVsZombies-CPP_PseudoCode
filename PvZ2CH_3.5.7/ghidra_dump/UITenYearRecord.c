// Class: UITenYearRecord


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::Draw(Sexy::Graphics*) */

void __thiscall UITenYearRecord::Draw(UITenYearRecord *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::Draw((Dialog *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::GetLayoutName() */

void __thiscall UITenYearRecord::GetLayoutName(UITenYearRecord *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITenYearRecord");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITenYearRecord::~UITenYearRecord() */

void __thiscall UITenYearRecord::~UITenYearRecord(UITenYearRecord *this)

{
  *(undefined ***)this = &PTR_GetClass_069eb9c0;
  *(undefined **)(this + 0xd8) = &DAT_069ebd10;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x138);
  UISingletonDialog<UITenYearRecord>::~UISingletonDialog((UISingletonDialog<UITenYearRecord> *)this)
  ;
  return;
}


/* UITenYearRecord::~UITenYearRecord() */

void __thiscall UITenYearRecord::~UITenYearRecord(UITenYearRecord *this)

{
  ~UITenYearRecord(this);
  AK::FreeHook(this);
  return;
}


/* UITenYearRecord::UITenYearRecord() */

void __thiscall UITenYearRecord::UITenYearRecord(UITenYearRecord *this)

{
  UISingletonDialog<UITenYearRecord>::UISingletonDialog((UISingletonDialog<UITenYearRecord> *)this);
  *(undefined ***)this = &PTR_GetClass_069eb9c0;
  *(undefined **)(this + 0xd8) = &DAT_069ebd10;
  FUN_05476574(this + 0x138);
  this[0x144] = (UITenYearRecord)0x0;
  *(undefined8 *)(this + 0x170) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::Receive() */

void __thiscall UITenYearRecord::Receive(UITenYearRecord *this)

{
  DNetwork *this_00;
  long lVar1;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V890");
  FUN_04e8a198(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  if ((*(long *)(this + 0x170) != 0) &&
     (lVar1 = *(long *)(this + 0x158), *(undefined1 *)(*(long *)(this + 0x170) + 0x130) = 1,
     lVar1 != 0)) {
    (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
    (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),0);
    (**(code **)(**(long **)(this + 0x158) + 0x188))(*(long **)(this + 0x158),1);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::InitView() */

void __thiscall UITenYearRecord::InitView(UITenYearRecord *this)

{
  UIWidgetImage *pUVar1;
  TenYearRecordInfoPage *this_00;
  PVZ2UIButton *pPVar2;
  long *plVar3;
  UIWidgetAnim *pUVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  *(UIWidgetImage **)(this + 400) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,*(Widget **)(this + 400),true);
  this_00 = ::operator_new(0x168);
  TenYearRecordInfoPage::TenYearRecordInfoPage(this_00,*(UIWidgetImage **)(this + 400));
  *(TenYearRecordInfoPage **)(this + 0x170) = this_00;
  lVar5 = *(long *)this;
  this_00[0x6d] = (TenYearRecordInfoPage)0x0;
  (**(code **)(lVar5 + 0x60))(this,this_00);
  std::string::string(asStack_10,"UIButton_Share");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x160) = pPVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_GoNext");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x148) = pPVar2;
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x148);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,1);
    (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),0);
  }
  std::string::string(asStack_10,"UIButton_Receive");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x158) = pPVar2;
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x158);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    (**(code **)(**(long **)(this + 0x158) + 0x188))(*(long **)(this + 0x158),0);
  }
  std::string::string(asStack_10,"UIButton_Start");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x150) = pPVar2;
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x150);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),0);
  }
  std::string::string(asStack_10,"UIImage_Receive_Open");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  *(UIWidgetImage **)(this + 0x168) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x168);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
  }
  std::string::string(asStack_10,"UIImage_PLANT_PERSONALITY");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  *(UIWidgetImage **)(this + 0x180) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  plVar3 = *(long **)(this + 0x180);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
  }
  std::string::string(asStack_10,"UIAnim_Swtich");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
  *(UIWidgetAnim **)(this + 0x188) = pUVar4;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::OnCreate() */

void __thiscall UITenYearRecord::OnCreate(UITenYearRecord *this)

{
  char cVar1;
  TGALogMgr *this_00;
  size_t in_x2;
  TGATenYearsData aTStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
    TGATenYearsData::TGATenYearsData(aTStack_20);
    std::string::append((string *)aTStack_20,"1",in_x2);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogTenYearsData(this_00,aTStack_20);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aTStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::share() */

void __thiscall UITenYearRecord::share(UITenYearRecord *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  SocialShareMgr *pSVar5;
  char *__s;
  TGALogMgr *this_00;
  size_t __n;
  DString aDStack_30 [16];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"Background_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  pSVar5 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  iVar2 = FUN_04e8a1f4(0x23);
  iVar1 = *(int *)(pUVar4 + 0x4c);
  iVar3 = FUN_04e8a1f4(10);
  __n = (size_t)*(uint *)(pUVar4 + 0x48);
  SocialShareMgr::ShareWithImage
            (pSVar5,0,__n,iVar2 + iVar1,iVar3 + *(int *)(pUVar4 + 0x50),
             *(undefined4 *)(pUVar4 + 0x54));
  TGATenYearsData::TGATenYearsData((TGATenYearsData *)asStack_20);
  std::string::append(asStack_20,"2",__n);
  DString::DString(aDStack_30,5);
  __s = (char *)DString::c_str(aDStack_30);
  std::string::append(asStack_18,__s,__n);
  DString::~DString(aDStack_30);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogTenYearsData(this_00,(TGATenYearsData *)asStack_20);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITenYearRecord::ButtonDepress(int) */

void __thiscall UITenYearRecord::ButtonDepress(UITenYearRecord *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  TenYearRecordInfoPage *this_00;
  uint uVar3;
  UIWidgetAnim *pUVar4;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  switch(param_1) {
  default:
    UISingletonDialog<UITenYearRecord>::CloseDialog();
    break;
  case 0x65:
    share(this);
    break;
  case 0x66:
    this_00 = *(TenYearRecordInfoPage **)(this + 0x170);
    *(undefined1 *)(*(long *)(this + 0x188) + 0x6d) = 0;
    iVar1 = TenYearRecordInfoPage::GetPageIndex(this_00);
    uVar3 = 2;
    if (iVar1 != 2) {
      uVar3 = 1;
    }
    Sexy::StrFormat("swtich0%d",asStack_30,(ulong)uVar3);
    pUVar4 = *(UIWidgetAnim **)(this + 0x188);
    FUN_04e8a13c(afStack_28,this);
    UIWidgetAnim::SetLabel(pUVar4,asStack_30,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string(asStack_30);
    break;
  case 0x67:
    Receive(this);
    break;
  case 0x68:
    if (*(TenYearRecordInfoPage **)(this + 0x170) != (TenYearRecordInfoPage *)0x0) {
      TenYearRecordInfoPage::SetPageIndex(*(TenYearRecordInfoPage **)(this + 0x170),0);
      (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
      (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),0);
      (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),0);
      (**(code **)(**(long **)(this + 0x158) + 0x188))(*(long **)(this + 0x158),0);
      (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
      (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),0);
      (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UITenYearRecord::ButtonDepress(int) */

void __thiscall UITenYearRecord::ButtonDepress(UITenYearRecord *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

