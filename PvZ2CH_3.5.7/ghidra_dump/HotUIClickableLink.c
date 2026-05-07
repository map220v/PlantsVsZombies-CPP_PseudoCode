// Class: HotUIClickableLink


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLink::onInitializeWidget() */

void __thiscall HotUIClickableLink::onInitializeWidget(HotUIClickableLink *this)

{
  HyperlinkWidget *this_00;
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x1c0);
  Sexy::HyperlinkWidget::HyperlinkWidget(this_00,0,(ButtonListener *)(this + 0x210));
  *(HyperlinkWidget **)(this + 0x218) = this_00;
  Sexy::Color::Color((Color *)&local_18,0xef,0xe7,0xc6);
  plVar2 = *(long **)(this + 0x218);
  uVar1 = *(undefined8 *)(this + 0x220);
  pcVar3 = *(code **)(*plVar2 + 800);
  *(undefined8 *)(this_00 + 0x198) = local_18;
  *(undefined8 *)(this_00 + 0x1a0) = uStack_10;
  (*pcVar3)(plVar2,uVar1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  (**(code **)(*(long *)this + 0x340))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLink::StaticClassInit() */

void HotUIClickableLink::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIClickableLink");
    (*pcVar2)(plVar1,asStack_10,FUN_03622ab8,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIClickableLink::StaticGetClass() */

long * HotUIClickableLink::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIClickableLink",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLink::onProcessStringReplaceMap(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void HotUIClickableLink::onProcessStringReplaceMap(map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  PrimeText_PotentialTypeface *this;
  undefined1 auVar2 [16];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)param_1);
  this = (PrimeText_PotentialTypeface *)
         PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface((string *)(pHVar1 + 0x138));
  auVar2 = PrimeText_PotentialTypeface::Typeface(this);
  *(long *)(param_1 + 0x220) = auVar2._0_8_;
  Sexy::UTF8StringToWString((Sexy *)(pHVar1 + 0x128),auVar2._8_8_);
  TodStringTranslate(awStack_18);
  FUN_054766c8(param_1 + 0x228,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLink::getContentBounds() */

void HotUIClickableLink::getContentBounds(void)

{
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar1;
  int *piVar2;
  PrimeTypeface *this;
  int *in_x8;
  undefined8 uVar3;
  float fVar4;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  if (*(int *)(pHVar1 + 0x20) == 2) {
    local_10[0] = 0;
    piVar2 = eastl::min_alt<int>(local_10,in_x8);
    uVar3 = *(undefined8 *)(in_x0 + 0x220);
    *in_x8 = *piVar2;
    FUN_05477b24(local_10,in_x0 + 0x228);
    local_14 = Sexy::PrimeTypeface::StringWidth(uVar3,local_10);
    FUN_05476c50(local_10);
    piVar2 = eastl::max_alt<int>(&local_14,in_x8);
    in_x8[2] = *piVar2;
  }
  if (*(int *)(pHVar1 + 0x30) == 2) {
    local_10[0] = 0;
    piVar2 = eastl::min_alt<int>(local_10,in_x8 + 1);
    this = *(PrimeTypeface **)(in_x0 + 0x220);
    in_x8[1] = *piVar2;
    fVar4 = (float)Sexy::PrimeTypeface::GetLineHeight(this);
    local_10[0] = (int)fVar4;
    piVar2 = eastl::max_alt<int>(local_10,in_x8 + 3);
    in_x8[3] = *piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIClickableLink::ButtonDepress(int) */

void HotUIClickableLink::ButtonDepress(int param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  string *extraout_x1;
  bool *in_x2;
  wstring awStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)(ulong)(uint)param_1);
  Sexy::UTF8StringToWString((Sexy *)(pHVar1 + 0x130),extraout_x1);
  TodStringTranslate(awStack_40);
  Sexy::WStringToString(aSStack_10,(wstring *)0x0,in_x2);
  FUN_05476c50(aSStack_10);
  FUN_05475d88(asStack_30,asStack_38);
  std::string::string(asStack_28,"");
  nop();
  uVar2 = FUN_05474e7c(asStack_28);
  uVar3 = FUN_05474eb0(asStack_28);
  uVar4 = FUN_05474e7c(asStack_28);
  std::
  transform<__gnu_cxx::__normal_iterator<char*,std::string>,__gnu_cxx::__normal_iterator<char*,std::string>,int(*)(int)>
            (uVar2,uVar3,uVar4,toupper);
  std::string::string(asStack_18,"{LOCALE}");
  TodReplaceString(asStack_30,asStack_18,asStack_28);
  FUN_05474278(asStack_30,aSStack_10);
  std::string::~string((string *)aSStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"GM");
  nop();
  std::string::string(asStack_18,"{PLATFORM}");
  TodReplaceString(asStack_30,asStack_18,asStack_20);
  FUN_05474278(asStack_30,aSStack_10);
  std::string::~string((string *)aSStack_10);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*gLawnApp + 0x168))(gLawnApp,asStack_30,0);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  FUN_05476c50(awStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to HotUIClickableLink::ButtonDepress(int) */

void __thiscall HotUIClickableLink::ButtonDepress(HotUIClickableLink *this,int param_1)

{
  ButtonDepress((int)this + -0x210);
  return;
}


/* HotUIClickableLink::HotUIClickableLink() */

void __thiscall HotUIClickableLink::HotUIClickableLink(HotUIClickableLink *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x210));
  *(undefined ***)this = &PTR_GetWidgetClass_0666b910;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_0666bc88;
  FUN_05476574(this + 0x228);
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  return;
}


/* HotUIClickableLink::StaticNew() */

HotUIClickableLink * HotUIClickableLink::StaticNew(void)

{
  HotUIClickableLink *this;
  
  this = ::operator_new(0x230);
  HotUIClickableLink(this);
  return this;
}


/* HotUIClickableLink::~HotUIClickableLink() */

void __thiscall HotUIClickableLink::~HotUIClickableLink(HotUIClickableLink *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666b910;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_0666bc88;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  FUN_05476c50(this + 0x228);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIClickableLink::~HotUIClickableLink() */

void __thiscall HotUIClickableLink::~HotUIClickableLink(HotUIClickableLink *this)

{
  ~HotUIClickableLink(this);
  AK::FreeHook(this);
  return;
}

