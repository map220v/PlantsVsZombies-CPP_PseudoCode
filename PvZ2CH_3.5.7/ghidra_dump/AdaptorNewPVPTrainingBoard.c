// Class: AdaptorNewPVPTrainingBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::UnlockBtns(bool) */

void __thiscall
AdaptorNewPVPTrainingBoard::UnlockBtns(AdaptorNewPVPTrainingBoard *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x350))((long *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingBoard::onLinkToUIViewCreated() */

void __thiscall AdaptorNewPVPTrainingBoard::onLinkToUIViewCreated(AdaptorNewPVPTrainingBoard *this)

{
  (**(code **)(*(long *)this + 0x358))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::StaticClassInit() */

void AdaptorNewPVPTrainingBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPTrainingBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_034bd8e4,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingBoard::StaticGetClass() */

long * AdaptorNewPVPTrainingBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPTrainingBoard::GetClass() const */

long * AdaptorNewPVPTrainingBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPTrainingBoard::SelectEntry(int) */

void __thiscall
AdaptorNewPVPTrainingBoard::SelectEntry(AdaptorNewPVPTrainingBoard *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x128);
  uVar1 = FUN_034b0510(uVar3,*(undefined8 *)(this + 0x130));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_034b051c(uVar3);
    (**(code **)(*(long *)*puVar2 + 0x360))((long *)*puVar2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::RepositionEntries() */

void __thiscall AdaptorNewPVPTrainingBoard::RepositionEntries(AdaptorNewPVPTrainingBoard *this)

{
  HotUIFile *this_00;
  HotUIVerticalList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ZombieLevelUpInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  HotUIVerticalList::RepositionChildrenAndResize(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::IsWaitingForEdit() */

void __thiscall AdaptorNewPVPTrainingBoard::IsWaitingForEdit(AdaptorNewPVPTrainingBoard *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar1 = false;
  if (bVar2) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = FUN_034ad86c(*(undefined4 *)(*plVar4 + 0x148));
    bVar1 = iVar3 == 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::WaitingForEdit() */

void __thiscall AdaptorNewPVPTrainingBoard::WaitingForEdit(AdaptorNewPVPTrainingBoard *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AdaptorNewPVPTrainingEntry::SetState((AdaptorNewPVPTrainingEntry *)*puVar2,1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::FinishEdit() */

void __thiscall AdaptorNewPVPTrainingBoard::FinishEdit(AdaptorNewPVPTrainingBoard *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AdaptorNewPVPTrainingEntry::SetState((AdaptorNewPVPTrainingEntry *)*puVar2,0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::Unselect() */

void __thiscall AdaptorNewPVPTrainingBoard::Unselect(AdaptorNewPVPTrainingBoard *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AdaptorNewPVPTrainingEntry::unselect((AdaptorNewPVPTrainingEntry *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::UnloadEntries() */

void __thiscall AdaptorNewPVPTrainingBoard::UnloadEntries(AdaptorNewPVPTrainingBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ZombieLevelUpInnerScrollArea");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>>::clear
            ((vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>> *)
             this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingBoard::AdaptorNewPVPTrainingBoard() */

void __thiscall
AdaptorNewPVPTrainingBoard::AdaptorNewPVPTrainingBoard(AdaptorNewPVPTrainingBoard *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06649c50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649fc0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a008;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x140));
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


/* AdaptorNewPVPTrainingBoard::StaticNew() */

AdaptorNewPVPTrainingBoard * AdaptorNewPVPTrainingBoard::StaticNew(void)

{
  AdaptorNewPVPTrainingBoard *this;
  
  this = ::operator_new(0x160);
  AdaptorNewPVPTrainingBoard(this);
  return this;
}


/* AdaptorNewPVPTrainingBoard::IsEmpty() */

void __thiscall AdaptorNewPVPTrainingBoard::IsEmpty(AdaptorNewPVPTrainingBoard *this)

{
  std::vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>>::empty
            ((vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>> *)
             (this + 0x128));
  return;
}


/* AdaptorNewPVPTrainingBoard::~AdaptorNewPVPTrainingBoard() */

void __thiscall
AdaptorNewPVPTrainingBoard::~AdaptorNewPVPTrainingBoard(AdaptorNewPVPTrainingBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06649c50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649fc0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a008;
  *(undefined8 *)(this + 0x158) = 0;
  UnloadEntries(this);
  AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig
            ((AdaptorNewPVPTrainingConfig *)(this + 0x140));
  std::vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>>::~vector
            ((vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>> *)
             (this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPTrainingBoard::~AdaptorNewPVPTrainingBoard() */

void __thiscall
AdaptorNewPVPTrainingBoard::~AdaptorNewPVPTrainingBoard(AdaptorNewPVPTrainingBoard *this)

{
  ~AdaptorNewPVPTrainingBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::GetUpperSelectedEntry() */

void __thiscall AdaptorNewPVPTrainingBoard::GetUpperSelectedEntry(AdaptorNewPVPTrainingBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034df254(uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::GetEntryConfigById(int) */

void __thiscall
AdaptorNewPVPTrainingBoard::GetEntryConfigById(AdaptorNewPVPTrainingBoard *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034df4b4(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (local_8 == ___stack_chk_guard) {
      Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)*puVar4);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)&DAT_06aa3ca0;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::SelectEntryById(int) */

void __thiscall
AdaptorNewPVPTrainingBoard::SelectEntryById(AdaptorNewPVPTrainingBoard *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034df93c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar4 + 0x360))((long *)*puVar4,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::onLoadUIView() */

void __thiscall AdaptorNewPVPTrainingBoard::onLoadUIView(AdaptorNewPVPTrainingBoard *this)

{
  undefined8 uVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  string asStack_48 [8];
  map amStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("NewPVPTrainingBoard_%s",amStack_40,uVar1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIPrefab(psVar2,amStack_40,(WidgetContainer *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string((string *)amStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingBoard::SetConfig(AdaptorNewPVPTrainingConfig const&) */

void __thiscall
AdaptorNewPVPTrainingBoard::SetConfig
          (AdaptorNewPVPTrainingBoard *this,AdaptorNewPVPTrainingConfig *param_1)

{
  AdaptorNewPVPTrainingConfig::operator=((AdaptorNewPVPTrainingConfig *)(this + 0x140),param_1);
  (**(code **)(*(long *)this + 0x358))(this);
  return;
}


/* AdaptorNewPVPTrainingBoard::Configure(Sexy::WidgetContainer*, AdaptorNewPVPTrainingConfig const&)
    */

void __thiscall
AdaptorNewPVPTrainingBoard::Configure
          (AdaptorNewPVPTrainingBoard *this,WidgetContainer *param_1,
          AdaptorNewPVPTrainingConfig *param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  AdaptorNewPVPTrainingConfig::operator=((AdaptorNewPVPTrainingConfig *)(this + 0x140),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::GetEntriesIds(std::vector<int, std::allocator<int> >&) */

void __thiscall
AdaptorNewPVPTrainingBoard::GetEntriesIds(AdaptorNewPVPTrainingBoard *this,vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x128));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x128));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    piVar3 = (int *)Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)*puVar2);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_1,piVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingBoard::fillEntries() */

void __thiscall AdaptorNewPVPTrainingBoard::fillEntries(AdaptorNewPVPTrainingBoard *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorNewPVPTrainingEntryConfig *pAVar1;
  AdaptorNewPVPTrainingEntry *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  AdaptorNewPVPTrainingEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ZombieLevelUpInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x140);
    uVar2 = FUN_034b0524(uVar4,*(undefined8 *)(this + 0x148));
    if (uVar2 <= uVar3) break;
    pAVar1 = (AdaptorNewPVPTrainingEntryConfig *)FUN_034b0530(uVar4,uVar3);
    this_01 = ::operator_new(0x158);
    AdaptorNewPVPTrainingEntry::AdaptorNewPVPTrainingEntry(this_01);
    local_10 = this_01;
    AdaptorNewPVPTrainingEntry::Configure(this_01,extraout_x0,pAVar1);
    std::vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>>::push_back
              ((vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>> *)
               (this + 0x128),&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
    FUN_034ad870((HotUIAdaptor *)(local_10 + 0x150),*(undefined8 *)(this + 0x158));
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

