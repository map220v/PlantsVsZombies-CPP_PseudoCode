// Class: HotUITextEntry


/* HotUITextEntry::onLayoutFinalized() */

void __thiscall HotUITextEntry::onLayoutFinalized(HotUITextEntry *this)

{
  (**(code **)(**(long **)(this + 0x210) + 0x198))
            (*(long **)(this + 0x210),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITextEntry::StaticClassInit() */

void HotUITextEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITextEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_036516e8,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITextEntry::StaticGetClass() */

long * HotUITextEntry::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITextEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUITextEntry::SetListener(Sexy::EditListener*) */

void __thiscall HotUITextEntry::SetListener(HotUITextEntry *this,EditListener *param_1)

{
  *(EditListener **)(*(long *)(this + 0x210) + 0x128) = param_1;
  return;
}


/* HotUITextEntry::SetEditWidgetActive() */

void __thiscall HotUITextEntry::SetEditWidgetActive(HotUITextEntry *this)

{
  Sexy::EditWidget::SetEditWidgetActive(*(EditWidget **)(this + 0x210));
  return;
}


/* HotUITextEntry::GetTextEntryString() const */

undefined8 HotUITextEntry::GetTextEntryString(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* HotUITextEntry::IsDefaultText() const */

void __thiscall HotUITextEntry::IsDefaultText(HotUITextEntry *this)

{
  std::operator==((wstring *)(*(long *)(this + 0x210) + 0xe8),(wstring *)(this + 0x218));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITextEntry::onInitializeWidget() */

void __thiscall HotUITextEntry::onInitializeWidget(HotUITextEntry *this)

{
  HotUIZPSMeterProperties *pHVar1;
  PVZ2UIEditWidget *this_00;
  long lVar2;
  code *pcVar3;
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  Sexy::Insets::Insets(aIStack_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_00 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_00,(TRect *)aIStack_40,0,(EditListener *)0x0,(wstring *)(this + 0x218),true);
  *(PVZ2UIEditWidget **)(this + 0x210) = this_00;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06aa9ca8,5);
  PVZ2UIEditWidget::SetBackground(this_00,(PVZ2UIImage *)aIStack_40);
  (**(code **)(**(long **)(this + 0x210) + 0x170))
            (*(long **)(this + 0x210),2,&PrimeText_Game::Color_Description_Brown);
  lVar2 = *(long *)(this + 0x210);
  pcVar3 = *(code **)(*(long *)this + 0x60);
  *(undefined4 *)(lVar2 + 0x148) = *(undefined4 *)(pHVar1 + 0x130);
  (*pcVar3)(this,lVar2);
  (**(code **)(*(long *)this + 0x340))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITextEntry::onProcessStringReplaceMap(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void HotUITextEntry::onProcessStringReplaceMap(map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  string *extraout_x1;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)param_1);
  Sexy::UTF8StringToWString((Sexy *)(pHVar1 + 0x128),extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8(param_1 + 0x218,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITextEntry::HotUITextEntry() */

void __thiscall HotUITextEntry::HotUITextEntry(HotUITextEntry *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066727c0;
  FUN_05476574(this + 0x218);
  *(undefined8 *)(this + 0x210) = 0;
  return;
}


/* HotUITextEntry::StaticNew() */

HotUITextEntry * HotUITextEntry::StaticNew(void)

{
  HotUITextEntry *this;
  
  this = ::operator_new(0x220);
  HotUITextEntry(this);
  return this;
}


/* HotUITextEntry::~HotUITextEntry() */

void __thiscall HotUITextEntry::~HotUITextEntry(HotUITextEntry *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066727c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  FUN_05476c50(this + 0x218);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUITextEntry::~HotUITextEntry() */

void __thiscall HotUITextEntry::~HotUITextEntry(HotUITextEntry *this)

{
  ~HotUITextEntry(this);
  AK::FreeHook(this);
  return;
}

