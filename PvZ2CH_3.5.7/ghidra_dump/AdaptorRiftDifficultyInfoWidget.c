// Class: AdaptorRiftDifficultyInfoWidget


/* AdaptorRiftDifficultyInfoWidget::AdaptorRiftDifficultyInfoWidget() */

void __thiscall
AdaptorRiftDifficultyInfoWidget::AdaptorRiftDifficultyInfoWidget
          (AdaptorRiftDifficultyInfoWidget *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066838b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683c10;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06683c58;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  FUN_05476574(this + 0x130);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyInfoWidget::StaticClassInit() */

void AdaptorRiftDifficultyInfoWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftDifficultyInfoWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_036d77bc,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftDifficultyInfoWidget::StaticGetClass() */

long * AdaptorRiftDifficultyInfoWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftDifficultyInfoWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftDifficultyInfoWidget::GetClass() const */

long * AdaptorRiftDifficultyInfoWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftDifficultyInfoWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftDifficultyInfoWidget::ConfigureDifficulty(Sexy::WidgetContainer*,
   Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>, std::wstring) */

void __thiscall
AdaptorRiftDifficultyInfoWidget::ConfigureDifficulty
          (AdaptorRiftDifficultyInfoWidget *this,undefined8 param_1,RtWeakPtr *param_3,
          undefined8 param_4)

{
  *(undefined8 *)(this + 0x120) = param_1;
  thunk_FUN_05477b9c(this + 0x130,param_4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),param_3);
  return;
}


/* AdaptorRiftDifficultyInfoWidget::StaticNew() */

AdaptorRiftDifficultyInfoWidget * AdaptorRiftDifficultyInfoWidget::StaticNew(void)

{
  AdaptorRiftDifficultyInfoWidget *this;
  
  this = ::operator_new(0x150);
  AdaptorRiftDifficultyInfoWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyInfoWidget::setText(std::wstring, std::wstring) */

void __thiscall
AdaptorRiftDifficultyInfoWidget::setText
          (AdaptorRiftDifficultyInfoWidget *this,wstring *param_2,wstring *param_3)

{
  HotUISeedPacketList *pHVar1;
  HotUISeedPacketList *pHVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Name");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Description");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar3 = *(code **)(*(long *)pHVar1 + 0x360);
  TodStringTranslate(param_2);
  (*pcVar3)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  pcVar3 = *(code **)(*(long *)pHVar2 + 0x360);
  TodStringTranslate(param_3);
  (*pcVar3)(pHVar2,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyInfoWidget::~AdaptorRiftDifficultyInfoWidget() */

void __thiscall
AdaptorRiftDifficultyInfoWidget::~AdaptorRiftDifficultyInfoWidget
          (AdaptorRiftDifficultyInfoWidget *this)

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
             *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066838b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683c10;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06683c58;
  this_01 = (HotUIFile *)FUN_036d767c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ModifierIcon");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  std::string::~string((string *)&local_10);
  nop();
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
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::clear
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::~vector
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  FUN_05476c50(this + 0x130);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftDifficultyInfoWidget::~AdaptorRiftDifficultyInfoWidget() */

void __thiscall
AdaptorRiftDifficultyInfoWidget::~AdaptorRiftDifficultyInfoWidget
          (AdaptorRiftDifficultyInfoWidget *this)

{
  ~AdaptorRiftDifficultyInfoWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftDifficultyInfoWidget::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftDifficultyInfoWidget::onLinkToUIViewCreated(AdaptorRiftDifficultyInfoWidget *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar2;
  AdaptorRiftLevelDifficultyEntry *this_02;
  long lVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  AdaptorRiftLevelDifficultyEntry *local_10;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_036d767c(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ModifierIcon");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_02 = ::operator_new(0x130);
    AdaptorRiftLevelDifficultyEntry::AdaptorRiftLevelDifficultyEntry(this_02);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)this_00);
    AdaptorRiftLevelDifficultyEntry::Configure(this_02,pHVar2,(string *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = this_02;
    std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::push_back
              ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)(this + 0x138),
               (HotUIAdaptor **)&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_02);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    FUN_05477b24(auStack_28,lVar3 + 0x18);
    FUN_05477b24(auStack_20,this + 0x130);
    FUN_05477b24(auStack_18,auStack_28);
    FUN_05477b24((string *)&local_10,auStack_20);
    setText(this,auStack_18,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50(auStack_18);
    FUN_05476c50(auStack_20);
    FUN_05476c50(auStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

