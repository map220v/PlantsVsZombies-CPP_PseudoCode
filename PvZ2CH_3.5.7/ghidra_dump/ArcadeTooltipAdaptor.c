// Class: ArcadeTooltipAdaptor


/* ArcadeTooltipAdaptor::~ArcadeTooltipAdaptor() */

void __thiscall ArcadeTooltipAdaptor::~ArcadeTooltipAdaptor(ArcadeTooltipAdaptor *this)

{
  *(undefined ***)this = &PTR_GetClass_06675890;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06675bf0;
  DAT_06aaa440 = DAT_06aaa440 + -1;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06675c38;
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* ArcadeTooltipAdaptor::~ArcadeTooltipAdaptor() */

void __thiscall ArcadeTooltipAdaptor::~ArcadeTooltipAdaptor(ArcadeTooltipAdaptor *this)

{
  ~ArcadeTooltipAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* ArcadeTooltipAdaptor::onAnyTouch() */

void __thiscall ArcadeTooltipAdaptor::onAnyTouch(ArcadeTooltipAdaptor *this)

{
  char cVar1;
  PrimeText *this_00;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 != (long *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,this), cVar1 != '\0')
     ) {
    (**(code **)(**(long **)(this + 0x18) + 0x68))(*(long **)(this + 0x18),this);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)this);
    this_00 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::StaticClassInit() */

void ArcadeTooltipAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArcadeTooltipAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_036670f4,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeTooltipAdaptor::StaticGetClass() */

long * ArcadeTooltipAdaptor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeTooltipAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeTooltipAdaptor::GetClass() const */

long * ArcadeTooltipAdaptor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeTooltipAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeTooltipAdaptor::GetGlobalTooltipCount() */

undefined4 ArcadeTooltipAdaptor::GetGlobalTooltipCount(void)

{
  return DAT_06aaa440;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::getUIFileName() */

void __thiscall ArcadeTooltipAdaptor::getUIFileName(ArcadeTooltipAdaptor *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ArcadeTooltip");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::SetTarget(Sexy::Widget*) */

void __thiscall ArcadeTooltipAdaptor::SetTarget(ArcadeTooltipAdaptor *this,Widget *param_1)

{
  long lVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20,param_1);
  (**(code **)(*(long *)param_1 + 0x48))(&local_18,param_1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  *(undefined4 *)(this + 0x120) = local_20;
  *(undefined4 *)(this + 0x124) = local_1c;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::placeTooltip() */

void __thiscall ArcadeTooltipAdaptor::placeTooltip(ArcadeTooltipAdaptor *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  HotUIFile *this_00;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03666b00(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"TouchLayer");
  lVar4 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Tooltip");
  plVar5 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UpCaret");
  plVar6 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DownCaret");
  plVar7 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = *(int *)(lVar4 + 0x54) - (*(int *)(this + 0x124) + *(int *)(this + 300)) <=
          *(int *)(this + 0x124);
  (**(code **)(*plVar6 + 0x158))(plVar6,!bVar1);
  (**(code **)(*plVar7 + 0x158))(plVar7,bVar1);
  iVar2 = *(int *)(this + 0x128);
  lVar4 = plVar5[10];
  iVar3 = *(int *)(this + 0x120);
  if (bVar1) {
    fVar8 = (float)FUN_03666b84();
    fVar8 = (float)(*(int *)(this + 0x124) - *(int *)((long)plVar5 + 0x54)) - fVar8;
  }
  else {
    fVar8 = (float)FUN_03666b84();
    fVar8 = fVar8 + (float)(*(int *)(this + 0x124) + *(int *)(this + 300));
  }
  (**(code **)(*plVar5 + 0x1a8))(plVar5,(iVar3 + iVar2 / 2) - (int)lVar4 / 2,(int)fVar8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeTooltipAdaptor::ArcadeTooltipAdaptor() */

void __thiscall ArcadeTooltipAdaptor::ArcadeTooltipAdaptor(ArcadeTooltipAdaptor *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06675890;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06675bf0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06675c38;
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  FUN_05476574(this + 0x130);
  FUN_05476574(this + 0x138);
  DAT_06aaa440 = DAT_06aaa440 + 1;
  return;
}


/* ArcadeTooltipAdaptor::StaticNew() */

ArcadeTooltipAdaptor * ArcadeTooltipAdaptor::StaticNew(void)

{
  ArcadeTooltipAdaptor *this;
  
  this = ::operator_new(0x140);
  ArcadeTooltipAdaptor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::refreshLabels() */

void __thiscall ArcadeTooltipAdaptor::refreshLabels(ArcadeTooltipAdaptor *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03666b00(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"Title");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x360))(pHVar1,this + 0x130);
  std::string::string(asStack_10,"Body");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x360))(pHVar1,this + 0x138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeTooltipAdaptor::onLoadUIView() */

void __thiscall ArcadeTooltipAdaptor::onLoadUIView(ArcadeTooltipAdaptor *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  getUIFileName(this);
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
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
/* ArcadeTooltipAdaptor::onLinkToUIViewCreated() */

void __thiscall ArcadeTooltipAdaptor::onLinkToUIViewCreated(ArcadeTooltipAdaptor *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03666b00(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_58,"TouchLayer");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnyTouch);
  Sexy::Delegate0::Delegate0<ArcadeTooltipAdaptor,void(ArcadeTooltipAdaptor::*)()>
            (aDStack_38,aCStack_50);
  HotUITouchLayer::AddTouchBeganListener((HotUITouchLayer *)pHVar1,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  placeTooltip(this);
  refreshLabels(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

