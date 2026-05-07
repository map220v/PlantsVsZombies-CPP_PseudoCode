// Class: AdaptorJoustNetworkIssue


/* AdaptorJoustNetworkIssue::OnBackButtonPressed() */

undefined8 __thiscall AdaptorJoustNetworkIssue::OnBackButtonPressed(AdaptorJoustNetworkIssue *this)

{
  (**(code **)(*(long *)this + 0x318))(this,0x65);
  return 1;
}


/* AdaptorJoustNetworkIssue::~AdaptorJoustNetworkIssue() */

void __thiscall AdaptorJoustNetworkIssue::~AdaptorJoustNetworkIssue(AdaptorJoustNetworkIssue *this)

{
  *(undefined ***)this = &PTR_GetClass_066ab420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ab780;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab7c8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustNetworkIssue::~AdaptorJoustNetworkIssue() */

void __thiscall AdaptorJoustNetworkIssue::~AdaptorJoustNetworkIssue(AdaptorJoustNetworkIssue *this)

{
  ~AdaptorJoustNetworkIssue(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustNetworkIssue::StaticClassInit() */

void AdaptorJoustNetworkIssue::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustNetworkIssue");
    (*pcVar2)(plVar1,asStack_10,FUN_03865f5c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustNetworkIssue::StaticGetClass() */

long * AdaptorJoustNetworkIssue::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustNetworkIssue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustNetworkIssue::GetClass() const */

long * AdaptorJoustNetworkIssue::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustNetworkIssue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustNetworkIssue::AdaptorJoustNetworkIssue() */

void __thiscall AdaptorJoustNetworkIssue::AdaptorJoustNetworkIssue(AdaptorJoustNetworkIssue *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066ab420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ab780;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab7c8;
  return;
}


/* AdaptorJoustNetworkIssue::StaticNew() */

AdaptorJoustNetworkIssue * AdaptorJoustNetworkIssue::StaticNew(void)

{
  AdaptorJoustNetworkIssue *this;
  
  this = ::operator_new(0x128);
  AdaptorJoustNetworkIssue(this);
  return this;
}


/* AdaptorJoustNetworkIssue::AdaptorJoustNetworkIssue(JoustAPINetworkIssue, JoustAPIContext) */

void __thiscall
AdaptorJoustNetworkIssue::AdaptorJoustNetworkIssue
          (AdaptorJoustNetworkIssue *this,undefined4 param_2,undefined4 param_3)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined4 *)(this + 0x120) = param_2;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ab780;
  *(undefined ***)this = &PTR_GetClass_066ab420;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ab7c8;
  *(undefined4 *)(this + 0x124) = param_3;
  return;
}


/* AdaptorJoustNetworkIssue::onLinkToUIViewCreated() */

void __thiscall AdaptorJoustNetworkIssue::onLinkToUIViewCreated(AdaptorJoustNetworkIssue *this)

{
  undefined8 uVar1;
  HotUIFile *this_00;
  string *psVar2;
  HotUISeedPacketList *this_01;
  ulong uVar3;
  ulong uVar4;
  
  this_00 = (HotUIFile *)FUN_03865e08(*(undefined8 *)(this + 0xf8));
  uVar4 = 0;
  while( true ) {
    uVar1 = DAT_06ab5010;
    uVar3 = FUN_03865e14(DAT_06ab5010,DAT_06ab5018);
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_03865e20(uVar1,uVar4);
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,psVar2);
    HotUIButton::SetListener
              ((HotUIButton *)this_01,(int)(uVar4 + 1) + 99,(ButtonListener *)(this + 0xd8));
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustNetworkIssue::refresh() */

void __thiscall AdaptorJoustNetworkIssue::refresh(AdaptorJoustNetworkIssue *this)

{
  char cVar1;
  HotUIFile *this_00;
  string *psVar2;
  HotUISeedPacketList *pHVar3;
  HotUIWidget *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03865dfc(uVar4);
  if (cVar1 != '\0') {
    uVar5 = 1;
    switch(*(undefined4 *)(this + 0x120)) {
    case 0:
    case 1:
    case 4:
      uVar6 = 0;
      break;
    default:
      uVar5 = 0;
    case 2:
    case 3:
      uVar6 = uVar5;
    }
    this_00 = (HotUIFile *)FUN_03865e08(uVar4);
    psVar2 = (string *)FUN_03865e20(DAT_06ab5010,0);
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,psVar2);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,uVar6);
    psVar2 = (string *)FUN_03865e20(DAT_06ab5010,1);
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,psVar2);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,uVar5);
    std::string::string(asStack_10,"DialogButtonList");
    this_01 = (HotUIWidget *)HotUIFile::GetWidgetByName(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIWidget::MarkLayoutDirty(this_01);
    HotUIWidget::MarkAnchorDirty(this_01);
    HotUIWidget::GetPtr();
    HotUIHelpers::LayoutAndPositionWidget(asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AdaptorJoustNetworkIssue::onButtonRetry() */

void __thiscall AdaptorJoustNetworkIssue::onButtonRetry(AdaptorJoustNetworkIssue *this)

{
  MessageRouter::Broadcast<int,int,int,JoustAPINetworkIssueDecision>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkIssueDecision,
             *(undefined4 *)(this + 0x124),0);
  return;
}


/* AdaptorJoustNetworkIssue::onButtonFail() */

void __thiscall AdaptorJoustNetworkIssue::onButtonFail(AdaptorJoustNetworkIssue *this)

{
  MessageRouter::Broadcast<int,int,int,JoustAPINetworkIssueDecision>
            ((MessageRouter *)gMessageRouter,Message::JoustNetworkIssueDecision,
             *(undefined4 *)(this + 0x124),1);
  return;
}


/* AdaptorJoustNetworkIssue::ButtonDepress(int) */

void __thiscall AdaptorJoustNetworkIssue::ButtonDepress(AdaptorJoustNetworkIssue *this,int param_1)

{
  if (param_1 == 0x65) {
    onButtonFail(this);
  }
  else if (param_1 == 100) {
    onButtonRetry(this);
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  return;
}


/* non-virtual thunk to AdaptorJoustNetworkIssue::ButtonDepress(int) */

void __thiscall AdaptorJoustNetworkIssue::ButtonDepress(AdaptorJoustNetworkIssue *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustNetworkIssue::onLoadUIView() */

void __thiscall AdaptorJoustNetworkIssue::onLoadUIView(AdaptorJoustNetworkIssue *this)

{
  string *psVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  char *__s;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  if (*(uint *)(this + 0x120) < 5) {
    puVar4 = auStack_48;
    switch(*(uint *)(this + 0x120)) {
    case 0:
      puVar3 = puVar4;
      std::string::string(asStack_40,"$DIALOG_TITLE");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      std::string::append(psVar1,"[NETWORK_ISSUE_TITLE_DISCONNECTED]",(size_t)puVar3);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"$DESCRIPTION");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      __s = "[NETWORK_ISSUE_DESCRIPTION_DISCONNECTED]";
      break;
    case 1:
      puVar3 = puVar4;
      std::string::string(asStack_40,"$DIALOG_TITLE");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      std::string::append(psVar1,"[NETWORK_ISSUE_TITLE_INVALIDDATA]",(size_t)puVar3);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"$DESCRIPTION");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      __s = "[NETWORK_ISSUE_DESCRIPTION_INVALIDDATA]";
      break;
    case 2:
      puVar3 = puVar4;
      std::string::string(asStack_40,"$DIALOG_TITLE");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      std::string::append(psVar1,"[NETWORK_ISSUE_TITLE_TIMEOUT]",(size_t)puVar3);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"$DESCRIPTION");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      __s = "[NETWORK_ISSUE_DESCRIPTION_TIMEOUT]";
      break;
    case 3:
      puVar3 = puVar4;
      std::string::string(asStack_40,"$DIALOG_TITLE");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      std::string::append(psVar1,"[NETWORK_ISSUE_TITLE_TIMEOUT_ENDLEVEL]",(size_t)puVar3);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"$DESCRIPTION");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      __s = "[NETWORK_ISSUE_DESCRIPTION_TIMEOUT_ENDLEVEL]";
      break;
    case 4:
      puVar3 = puVar4;
      std::string::string(asStack_40,"$DIALOG_TITLE");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      std::string::append(psVar1,"[NETWORK_ISSUE_TITLE_TOURNAMENTEXPIRED]",(size_t)puVar3);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"$DESCRIPTION");
      psVar1 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_38,asStack_40);
      __s = "[NETWORK_ISSUE_DESCRIPTION_TOURNAMENTEXPIRED]";
    }
    std::string::append(psVar1,__s,(size_t)puVar4);
    std::string::~string(asStack_40);
    nop();
  }
  puVar3 = auStack_48;
  puVar4 = puVar3;
  std::string::string(asStack_40,"$BUTTON_RETRY_LABEL");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"[NETWORK_ISSUE_BUTTON_RETRY]",(size_t)puVar4);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"$BUTTON_FAIL_LABEL");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"[NETWORK_ISSUE_BUTTON_FAIL]",(size_t)puVar3);
  std::string::~string(asStack_40);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"JoustNetworkIssue");
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  refresh(this);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

