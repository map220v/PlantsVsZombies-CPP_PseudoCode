// Class: AdaptorRiftLevelDifficultyEntry


/* AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry() */

void __thiscall
AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry
          (AdaptorRiftLevelDifficultyEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06683c80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683fe0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684028;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelDifficultyEntry::StaticClassInit() */

void AdaptorRiftLevelDifficultyEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftLevelDifficultyEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_036d7e9c,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLevelDifficultyEntry::StaticGetClass() */

long * AdaptorRiftLevelDifficultyEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLevelDifficultyEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLevelDifficultyEntry::GetClass() const */

long * AdaptorRiftLevelDifficultyEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLevelDifficultyEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLevelDifficultyEntry::Configure(Sexy::WidgetContainer*,
   Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>) */

void __thiscall
AdaptorRiftLevelDifficultyEntry::Configure
          (AdaptorRiftLevelDifficultyEntry *this,undefined8 param_1,RtWeakPtr *param_3)

{
  *(undefined8 *)(this + 0x120) = param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),param_3);
  return;
}


/* AdaptorRiftLevelDifficultyEntry::StaticNew() */

AdaptorRiftLevelDifficultyEntry * AdaptorRiftLevelDifficultyEntry::StaticNew(void)

{
  AdaptorRiftLevelDifficultyEntry *this;
  
  this = ::operator_new(0x130);
  AdaptorRiftLevelDifficultyEntry(this);
  return this;
}


/* AdaptorRiftLevelDifficultyEntry::~AdaptorRiftLevelDifficultyEntry() */

void __thiscall
AdaptorRiftLevelDifficultyEntry::~AdaptorRiftLevelDifficultyEntry
          (AdaptorRiftLevelDifficultyEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_06683c80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683fe0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684028;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorRiftLevelDifficultyEntry::~AdaptorRiftLevelDifficultyEntry() */

void __thiscall
AdaptorRiftLevelDifficultyEntry::~AdaptorRiftLevelDifficultyEntry
          (AdaptorRiftLevelDifficultyEntry *this)

{
  ~AdaptorRiftLevelDifficultyEntry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLevelDifficultyEntry::onLoadUIView() */

void __thiscall AdaptorRiftLevelDifficultyEntry::onLoadUIView(AdaptorRiftLevelDifficultyEntry *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  string *psVar4;
  HotUIFile *pHVar5;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    std::string::string(asStack_40,"$DIFFICULTYICON");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    thunk_FUN_05475e00(uVar2,lVar3 + 0x20);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"$DIFFICULTYTEXT");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    thunk_FUN_05475e00(uVar2,lVar3 + 0x28);
    std::string::~string(asStack_40);
    nop();
    psVar4 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    std::string::string(asStack_40,"RiftDifficultyEntry");
    pHVar5 = (HotUIFile *)
             HotUIManager::LoadUIPrefab(psVar4,(map *)asStack_40,(WidgetContainer *)amStack_38);
    std::string::~string(asStack_40);
    nop();
    HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar5);
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

