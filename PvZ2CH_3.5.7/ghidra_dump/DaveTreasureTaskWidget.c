// Class: DaveTreasureTaskWidget


/* DaveTreasureTaskWidget::~DaveTreasureTaskWidget() */

void __thiscall DaveTreasureTaskWidget::~DaveTreasureTaskWidget(DaveTreasureTaskWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f7278;
  *(undefined ***)this = &PTR_GetWidgetClass_066f6f50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveTreasureTaskWidget::~DaveTreasureTaskWidget() */

void __thiscall DaveTreasureTaskWidget::~DaveTreasureTaskWidget(DaveTreasureTaskWidget *this)

{
  ~DaveTreasureTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::StaticClassInit() */

void DaveTreasureTaskWidget::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"DaveTreasureTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039f1bcc,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTreasureTaskWidget::StaticGetClass() */

long * DaveTreasureTaskWidget::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTreasureTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::GetTaskRewardImage(int) */

void __thiscall DaveTreasureTaskWidget::GetTaskRewardImage(DaveTreasureTaskWidget *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    bVar1 = std::operator==((string *)(*(long *)(this + 0x150) + 0x20),"PENNY");
    if (!bVar1) {
      std::string::string(asStack_10,"IMAGE_UI_DAVETREASURE_TREASURE");
      uVar2 = StringHelper::ToImage(asStack_10,bVar1);
      std::string::~string(asStack_10);
      nop();
      goto LAB_039f230c;
    }
    __s = "IMAGE_UI_DAVETREASURE_GUIDE";
  }
  else {
    __s = "IMAGE_UI_QUESTS_REWARD_COIN";
  }
  std::string::string(asStack_10,__s);
  uVar2 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
LAB_039f230c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::DaveTreasureTaskWidget() */

void __thiscall DaveTreasureTaskWidget::DaveTreasureTaskWidget(DaveTreasureTaskWidget *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_066f6f50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f7278;
  FUN_05476574(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x110);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateButtonState);
  Sexy::Delegate0::Delegate0<DaveTreasureTaskWidget,void(DaveTreasureTaskWidget::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ObatinPrivilege,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTreasureTaskWidget::StaticNew() */

DaveTreasureTaskWidget * DaveTreasureTaskWidget::StaticNew(void)

{
  DaveTreasureTaskWidget *this;
  
  this = ::operator_new(0x160);
  DaveTreasureTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::RequestPennyReward() */

void __thiscall DaveTreasureTaskWidget::RequestPennyReward(DaveTreasureTaskWidget *this)

{
  ProfileMgr *this_00;
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  DNetwork *this_01;
  ulong uVar5;
  undefined4 local_d4c;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1744];
  string asStack_618 [1552];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  local_d4c = 0;
  uVar5 = 0;
  while( true ) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    uVar2 = FUN_039f0230(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
    if (uVar2 <= uVar5) break;
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    piVar3 = (int *)FUN_039f0244(*(undefined8 *)(lVar1 + 0x28),uVar5);
    if (*piVar3 == 1) {
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
      lVar1 = FUN_039f0244(*(undefined8 *)(lVar1 + 0x28),uVar5);
      local_d4c = *(undefined4 *)(lVar1 + 8);
      uVar5 = uVar5 + 1;
    }
    else {
      uVar5 = uVar5 + 1;
    }
  }
  std::string::string(asStack_d40,"ai");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a33;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"s");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ti");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(*(long *)(this + 0x150) + 8));
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"g");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = *(int *)(*(long *)(this + 0x150) + 0xc) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039f1190(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_618,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::RequestReward() */

void __thiscall DaveTreasureTaskWidget::RequestReward(DaveTreasureTaskWidget *this)

{
  ProfileMgr *this_00;
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  DNetwork *this_01;
  ulong uVar5;
  undefined4 local_d4c;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1744];
  string asStack_618 [1552];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  local_d4c = 0;
  uVar5 = 0;
  while( true ) {
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    uVar2 = FUN_039f0230(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
    if (uVar2 <= uVar5) break;
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    piVar3 = (int *)FUN_039f0244(*(undefined8 *)(lVar1 + 0x28),uVar5);
    if (*piVar3 == 1) {
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
      lVar1 = FUN_039f0244(*(undefined8 *)(lVar1 + 0x28),uVar5);
      local_d4c = *(undefined4 *)(lVar1 + 8);
      uVar5 = uVar5 + 1;
    }
    else {
      uVar5 = uVar5 + 1;
    }
  }
  std::string::string(asStack_d40,"ai");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x29fd;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"s");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ti");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(*(long *)(this + 0x150) + 8));
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"g");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = *(int *)(*(long *)(this + 0x150) + 0xc) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar4,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039f11ec(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_618,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* DaveTreasureTaskWidget::ButtonDepress(int) */

void __thiscall DaveTreasureTaskWidget::ButtonDepress(DaveTreasureTaskWidget *this,int param_1)

{
  bool bVar1;
  
  if (param_1 != 100) {
    return;
  }
  bVar1 = std::operator==((string *)(*(long *)(this + 0x150) + 0x20),"PENNY");
  if (!bVar1) {
    RequestReward(this);
    return;
  }
  RequestPennyReward(this);
  return;
}


/* non-virtual thunk to DaveTreasureTaskWidget::ButtonDepress(int) */

void __thiscall DaveTreasureTaskWidget::ButtonDepress(DaveTreasureTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::UpdateButtonState() */

void __thiscall DaveTreasureTaskWidget::UpdateButtonState(DaveTreasureTaskWidget *this)

{
  uint uVar1;
  char cVar2;
  PVZ2UIButton *pPVar3;
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(*(long *)(this + 0x150) + 0x18);
  local_8 = ___stack_chk_guard;
  if (1 < uVar1) {
    if (uVar1 == 3) {
      (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),1);
      pPVar3 = *(PVZ2UIButton **)(this + 0x148);
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
      FUN_05476c50(awStack_10);
      goto LAB_039f62f8;
    }
    if ((uVar1 != 2) || (*(char *)(*(long *)(this + 0x150) + 0x10) != '\0')) goto LAB_039f62f8;
    Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    cVar2 = DaveTreasureDataManager::HasPrivilege();
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),0);
      goto LAB_039f62f8;
    }
    pPVar3 = *(PVZ2UIButton **)(this + 0x148);
    TodStringTranslate(L"[DAVE_NO_PRIVILEGE]");
    PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
    FUN_05476c50(awStack_10);
  }
  (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),1);
LAB_039f62f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::InitView() */

void __thiscall DaveTreasureTaskWidget::InitView(DaveTreasureTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  PVZ2UIButton *pPVar9;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
  lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x20),false);
  *(long *)(this + 0xe0) = lVar5;
  if (lVar5 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_QUESTS_BACKGROUND_GENERIC");
    uVar6 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xe0) = uVar6;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
  Sexy::ToWString((string *)(lVar5 + 0x10));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xe8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  iVar1 = FUN_039f135c(0x14);
  iVar2 = FUN_039f135c(400);
  iVar3 = FUN_039f135c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,0,iVar2,iVar3);
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  iVar1 = FUN_039f135c(10);
  iVar2 = FUN_039f135c(0x46);
  iVar3 = FUN_039f135c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar3);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  iVar1 = FUN_039f135c(0xaa);
  iVar2 = FUN_039f135c(0x46);
  iVar3 = FUN_039f135c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar3);
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  iVar1 = FUN_039f135c(0x168);
  iVar2 = FUN_039f135c(5);
  iVar3 = FUN_039f135c(0x8c);
  iVar4 = FUN_039f135c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  iVar1 = FUN_039f135c(0x168);
  iVar2 = FUN_039f135c(0x4b);
  iVar3 = FUN_039f135c(0x78);
  iVar4 = FUN_039f135c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  pPVar9 = *(PVZ2UIButton **)(this + 0x148);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  if (pPVar9 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[RECALL_OFFER_CLAIM]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar9 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar9,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x148) = pPVar9;
    FUN_05476c50(awStack_78);
    UpdateButtonState(this);
    pPVar9 = *(PVZ2UIButton **)(this + 0x148);
    if (pPVar9 == (PVZ2UIButton *)0x0) goto LAB_039f66a4;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac2528,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac22e8,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),this + 0x138);
  plVar7 = *(long **)(this + 0x148);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar7,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x148));
LAB_039f66a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DaveTreasureTaskWidget::SetTask(DaveTask*) */

void __thiscall DaveTreasureTaskWidget::SetTask(DaveTreasureTaskWidget *this,DaveTask *param_1)

{
  *(DaveTask **)(this + 0x150) = param_1;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveTreasureTaskWidget::Draw(DaveTreasureTaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  wchar_t *pwVar14;
  ulong uVar15;
  float fVar16;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xe0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2318);
  iVar2 = FUN_039f135c(2);
  iVar3 = FUN_039f135c(4);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,iVar2,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar3,
             *(int *)(this + 0x54) / 2);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,4);
  WriteWordInRect(param_1,this + 0xe8,this + 0xf0,uVar10,asStack_18,3,1);
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  iVar2 = *(int *)(*(long *)(this + 0x150) + 0x14);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
  if (*(int *)(lVar11 + 0x40) < iVar2) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    uVar1 = *(uint *)(lVar11 + 0x40);
    lVar11 = *(long *)(this + 0x150);
  }
  else {
    lVar11 = *(long *)(this + 0x150);
    uVar1 = *(uint *)(lVar11 + 0x14);
  }
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar11 + 0x30));
  Sexy::StrFormat("%d / %d",asStack_18,(ulong)uVar1,(ulong)*(uint *)(lVar11 + 0x40));
  Sexy::ToWString(asStack_18);
  std::string::~string(asStack_18);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_68,this + 0x118,uVar10,asStack_18,0,1);
  iVar2 = *(int *)(this + 0x124);
  iVar3 = *(int *)(this + 0x118);
  iVar6 = *(int *)(this + 0x120);
  iVar7 = *(int *)(this + 0x11c);
  iVar4 = FUN_039f135c(100);
  iVar5 = FUN_039f135c(0x12);
  Sexy::Insets::Insets((Insets *)&local_48,iVar3 + iVar6,(iVar2 << 1) / 3 + iVar7,iVar4,iVar5);
  Sexy::Insets::Insets((Insets *)asStack_18,local_48,local_44,local_40,local_3c);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac23a0);
  Draw3SliceImage(param_1,asStack_18,uVar10);
  iVar2 = *(int *)(*(long *)(this + 0x150) + 0x14);
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
  if (*(int *)(*(long *)(this + 0x150) + 0x14) != 0) {
    fVar16 = (float)NEON_fminnm((float)iVar2 / (float)*(int *)(lVar11 + 0x40),0x3f800000);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,local_48,local_44,(int)(fVar16 * (float)local_40),local_3c);
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1f98);
    Draw3SliceImage(param_1,asStack_18,uVar10);
  }
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,4);
  WriteWordInRect(param_1,auStack_60,(Insets *)&local_48,uVar10,asStack_18,5,1);
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_58,this + 0x100,uVar10,asStack_18,0,1);
  iVar2 = *(int *)(this + 0x108);
  iVar3 = *(int *)(this + 0x100);
  iVar6 = FUN_039f135c(5);
  Sexy::Insets::Insets
            ((Insets *)&local_38,iVar2 + iVar3,*(int *)(this + 0x104),iVar2 + iVar6,
             iVar6 + *(int *)(this + 0x10c));
  uVar15 = 0;
  while( true ) {
    iVar2 = (int)uVar15;
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    uVar13 = FUN_039f0230(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30));
    if (uVar13 <= uVar15) break;
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac24d8);
    iVar6 = local_30;
    iVar3 = local_38;
    iVar7 = FUN_039f135c(5);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,iVar3 + (iVar6 + iVar7) * iVar2,local_34,iVar6,local_2c);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    piVar12 = (int *)FUN_039f0244(*(undefined8 *)(lVar11 + 0x28),uVar15);
    pIVar9 = (Image *)GetTaskRewardImage(this,*piVar12);
    iVar7 = local_30;
    iVar6 = local_38;
    iVar4 = FUN_039f135c(5);
    iVar5 = FUN_039f135c(2);
    iVar3 = iVar5 + local_34;
    iVar8 = FUN_039f135c(4);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,iVar6 + (iVar7 + iVar4) * iVar2 + iVar5,iVar3,iVar7 - iVar8,
               local_2c - iVar8);
    iVar6 = local_30;
    iVar3 = local_38;
    iVar7 = FUN_039f135c(5);
    Sexy::Insets::Insets
              (aIStack_28,iVar3 + (iVar6 + iVar7) * iVar2,(local_2c << 1) / 3 + local_34,iVar6,
               local_2c / 2);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
    lVar11 = FUN_039f0244(*(undefined8 *)(lVar11 + 0x28),uVar15);
    Sexy::StrFormat("X %d",asStack_18,(ulong)*(uint *)(lVar11 + 8));
    Sexy::ToWString(asStack_18);
    std::string::~string(asStack_18);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)asStack_18,4);
    WriteWordInRect(param_1,auStack_50,aIStack_28,uVar10,asStack_18,2,1);
    FUN_05476c50(auStack_50);
    uVar15 = uVar15 + 1;
  }
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x30));
  if (*(char *)(lVar11 + 0x44) == '\0') {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac20a8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,*(int *)(this + 0x128),*(int *)(this + 300),*(int *)(this + 0x130),
               *(int *)(this + 0x134));
    pwVar14 = L"[DAVE_HIGH_CHALLENGE]";
  }
  else {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2178);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,*(int *)(this + 0x128),*(int *)(this + 300),*(int *)(this + 0x130),
               *(int *)(this + 0x134));
    pwVar14 = L"[DAVE_NORMAL_CHALLENGE]";
  }
  TodStringTranslate(pwVar14);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,aIStack_28,this + 0x128,uVar10,asStack_18,5,1);
  FUN_05476c50(aIStack_28);
  FUN_05476c50(auStack_58);
  FUN_05476c50(auStack_60);
  FUN_05476c50(auStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

