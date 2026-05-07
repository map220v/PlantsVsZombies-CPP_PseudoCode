// Class: UIInvitationSharedDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationSharedDetail::GetLayoutName() */

void __thiscall UIInvitationSharedDetail::GetLayoutName(UIInvitationSharedDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIInvitationSharedDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationSharedDetail::DoShare() */

void __thiscall UIInvitationSharedDetail::DoShare(UIInvitationSharedDetail *this)

{
  long lVar1;
  SocialShareMgr *pSVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  Sexy::Insets::Insets((Insets *)&local_18);
  local_18 = *(undefined4 *)(lVar1 + 0x48);
  local_14 = *(undefined4 *)(lVar1 + 0x4c);
  local_c = *(undefined4 *)(lVar1 + 0x54);
  local_10 = FUN_04e67c24(10);
  local_10 = *(int *)(lVar1 + 0x50) - local_10;
  pSVar2 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::InitDefaultShareInfoMaps(pSVar2);
  lVar1 = Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  FUN_04e66610(lVar1 + 0x20);
  pSVar2 = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::ShareWithImage(pSVar2,0,local_18,local_14,local_10,local_c);
  Sexy::SexyAppBase::CopyToClipboard(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInvitationSharedDetail::ButtonDepress(int) */

void __thiscall UIInvitationSharedDetail::ButtonDepress(UIInvitationSharedDetail *this,int param_1)

{
  if (param_1 == 99) {
    DoShare(this);
    return;
  }
  if (param_1 != 100) {
    if (param_1 != 0x62) {
      return;
    }
    UITourismOctoberSharedDetail::DoSave((UITourismOctoberSharedDetail *)this);
    return;
  }
  UISingletonDialog<UIInvitationSharedDetail>::CloseDialog();
  return;
}


/* non-virtual thunk to UIInvitationSharedDetail::ButtonDepress(int) */

void __thiscall UIInvitationSharedDetail::ButtonDepress(UIInvitationSharedDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIInvitationSharedDetail::UIInvitationSharedDetail() */

void __thiscall UIInvitationSharedDetail::UIInvitationSharedDetail(UIInvitationSharedDetail *this)

{
  UISingletonDialog<UIInvitationSharedDetail>::UISingletonDialog
            ((UISingletonDialog<UIInvitationSharedDetail> *)this);
  *(undefined ***)this = &PTR_GetClass_069e4ca0;
  *(undefined **)(this + 0xd8) = &DAT_069e4ff0;
  InvitationData::InvitationData((InvitationData *)(this + 0x138));
  return;
}


/* UIInvitationSharedDetail::~UIInvitationSharedDetail() */

void __thiscall UIInvitationSharedDetail::~UIInvitationSharedDetail(UIInvitationSharedDetail *this)

{
  *(undefined ***)this = &PTR_GetClass_069e4ca0;
  *(undefined **)(this + 0xd8) = &DAT_069e4ff0;
  InvitationData::~InvitationData((InvitationData *)(this + 0x138));
  UISingletonDialog<UIInvitationSharedDetail>::~UISingletonDialog
            ((UISingletonDialog<UIInvitationSharedDetail> *)this);
  return;
}


/* UIInvitationSharedDetail::~UIInvitationSharedDetail() */

void __thiscall UIInvitationSharedDetail::~UIInvitationSharedDetail(UIInvitationSharedDetail *this)

{
  ~UIInvitationSharedDetail(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationSharedDetail::initView() */

void __thiscall UIInvitationSharedDetail::initView(UIInvitationSharedDetail *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  UIWidgetText *pUVar7;
  code *pcVar8;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  string asStack_30 [16];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_20 [24];
  long local_8;
  
  local_4c = 0;
  local_8 = ___stack_chk_guard;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            (avStack_20,(vector *)(this + 0x178));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_4c);
    std::operator+("Widget_",asStack_30);
    std::string::~string(asStack_30);
    plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
    plVar6 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar4,piVar4[1],true);
    pcVar8 = *(code **)(*plVar6 + 0x1a0);
    iVar2 = FUN_04e67c24(0);
    iVar3 = FUN_04e67c24(0x50);
    Sexy::Insets::Insets((Insets *)asStack_30,iVar2,iVar2,iVar3,iVar3);
    (*pcVar8)(plVar6,asStack_30);
    (**(code **)(*plVar5 + 0x60))(plVar5,plVar6);
    local_4c = local_4c + 1;
    std::string::~string(asStack_38);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_48);
  }
  std::string::string(asStack_30,"UIText_0");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  UIWidgetText::SetString(pUVar7,(string *)(this + 0x150));
  std::string::string(asStack_30,"UIText_1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"(android)");
  UIWidgetText::SetString(pUVar7,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationSharedDetail::requestShared() */

void __thiscall UIInvitationSharedDetail::requestShared(UIInvitationSharedDetail *this)

{
  DNetwork *this_00;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x159] == (UIInvitationSharedDetail)0x0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    std::string::string(asStack_68,"V875");
    FUN_04e679f8(afStack_58,this);
    std::string::string(asStack_60,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60
               ,0);
    std::string::~string(asStack_60);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    std::string::~string(asStack_68);
    nop();
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInvitationSharedDetail::LoadData(InvitationData const&) */

void __thiscall
UIInvitationSharedDetail::LoadData(UIInvitationSharedDetail *this,InvitationData *param_1)

{
  InvitationData::operator=((InvitationData *)(this + 0x138),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInvitationSharedDetail::OnCreate() */

void __thiscall UIInvitationSharedDetail::OnCreate(UIInvitationSharedDetail *this)

{
  char cVar1;
  int iVar2;
  Widget *pWVar3;
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  string asStack_c0 [184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_c0,"Background_0");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,true);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04e65e6c(local_138);
  if ((cVar1 != '\0') && (local_128 != '\0')) {
    InvitationData::InvitationData((InvitationData *)asStack_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)asStack_c0);
    if (cVar1 != '\0') {
      InvitationData::operator=((InvitationData *)(this + 0x138),(InvitationData *)asStack_c0);
      initView(this);
    }
    InvitationData::~InvitationData((InvitationData *)asStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

