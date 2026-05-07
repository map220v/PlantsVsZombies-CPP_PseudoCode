// Class: AdaptorRichManEventEntry


/* AdaptorRichManEventEntry::onLayoutFinished() */

void __thiscall AdaptorRichManEventEntry::onLayoutFinished(AdaptorRichManEventEntry *this)

{
  HotUIFile *this_00;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    HotUIFile::GetEntryPointWidget(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventEntry::StaticClassInit() */

void AdaptorRichManEventEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRichManEventEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_038dbeec,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRichManEventEntry::StaticGetClass() */

long * AdaptorRichManEventEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEventEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEventEntry::GetClass() const */

long * AdaptorRichManEventEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRichManEventEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRichManEventEntry::~AdaptorRichManEventEntry() */

void __thiscall AdaptorRichManEventEntry::~AdaptorRichManEventEntry(AdaptorRichManEventEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066bac60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bafc0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb008;
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRichManEventEntry::~AdaptorRichManEventEntry() */

void __thiscall AdaptorRichManEventEntry::~AdaptorRichManEventEntry(AdaptorRichManEventEntry *this)

{
  ~AdaptorRichManEventEntry(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRichManEventEntry::AdaptorRichManEventEntry() */

void __thiscall AdaptorRichManEventEntry::AdaptorRichManEventEntry(AdaptorRichManEventEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066bac60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066bafc0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066bb008;
  InvitationPlayerInfo::InvitationPlayerInfo((InvitationPlayerInfo *)(this + 0x128));
  return;
}


/* AdaptorRichManEventEntry::StaticNew() */

AdaptorRichManEventEntry * AdaptorRichManEventEntry::StaticNew(void)

{
  AdaptorRichManEventEntry *this;
  
  this = ::operator_new(0x148);
  AdaptorRichManEventEntry(this);
  return this;
}


/* AdaptorRichManEventEntry::Configure(Sexy::WidgetContainer*, AdaptorRichManEventEntryConfig
   const&) */

void __thiscall
AdaptorRichManEventEntry::Configure
          (AdaptorRichManEventEntry *this,WidgetContainer *param_1,
          AdaptorRichManEventEntryConfig *param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  InvitationPlayerInfo::operator=
            ((InvitationPlayerInfo *)(this + 0x128),(InvitationPlayerInfo *)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventEntry::onLinkToUIViewCreated() */

void __thiscall AdaptorRichManEventEntry::onLinkToUIViewCreated(AdaptorRichManEventEntry *this)

{
  HotUISeedPacketList *pHVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Icon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x138),extraout_x1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"Background");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x140),extraout_x1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"HeaderLabel");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
  StringHelper::ToStringValue((string *)(this + 0x128));
  (*pcVar2)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"FooterLabel");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
  StringHelper::ToStringValue((string *)(this + 0x130));
  (*pcVar2)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRichManEventEntry::onLoadUIView() */

void __thiscall AdaptorRichManEventEntry::onLoadUIView(AdaptorRichManEventEntry *this)

{
  SecretGachaMgr *this_00;
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_48 [8];
  map amStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (SecretGachaMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("RichManEventEntry_%s",amStack_40,uVar1);
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIPrefab(psVar2,amStack_40,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::string::~string((string *)amStack_40);
  std::string::~string(asStack_48);
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

