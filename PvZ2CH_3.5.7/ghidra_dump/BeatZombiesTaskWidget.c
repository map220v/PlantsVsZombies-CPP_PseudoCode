// Class: BeatZombiesTaskWidget


/* BeatZombiesTaskWidget::~BeatZombiesTaskWidget() */

void __thiscall BeatZombiesTaskWidget::~BeatZombiesTaskWidget(BeatZombiesTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066f4760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4ab8;
  BasicTaskWidget::~BasicTaskWidget((BasicTaskWidget *)this);
  return;
}


/* BeatZombiesTaskWidget::~BeatZombiesTaskWidget() */

void __thiscall BeatZombiesTaskWidget::~BeatZombiesTaskWidget(BeatZombiesTaskWidget *this)

{
  ~BeatZombiesTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeatZombiesTaskWidget::StaticClassInit() */

void BeatZombiesTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeatZombiesTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039ddadc,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeatZombiesTaskWidget::StaticGetClass() */

long * BeatZombiesTaskWidget::StaticGetClass(void)

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
  uVar2 = BasicTaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BeatZombiesTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeatZombiesTaskWidget::BeatZombiesTaskWidget() */

void __thiscall BeatZombiesTaskWidget::BeatZombiesTaskWidget(BeatZombiesTaskWidget *this)

{
  BasicTaskWidget::BasicTaskWidget((BasicTaskWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066f4760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4ab8;
  return;
}


/* BeatZombiesTaskWidget::StaticNew() */

BeatZombiesTaskWidget * BeatZombiesTaskWidget::StaticNew(void)

{
  BeatZombiesTaskWidget *this;
  
  this = ::operator_new(0x1a0);
  BeatZombiesTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeatZombiesTaskWidget::Init() */

void __thiscall BeatZombiesTaskWidget::Init(BeatZombiesTaskWidget *this)

{
  bool bVar1;
  RtObject *this_00;
  TravelLogBeatZombiesData *pTVar2;
  string *extraout_x1;
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BasicTaskWidget::Init((BasicTaskWidget *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0xe0) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
    pTVar2 = Sexy::RtObject::Cast<TravelLogBeatZombiesData>(this_00);
    if (pTVar2 != (TravelLogBeatZombiesData *)0x0) {
      Sexy::StringToUpper((Sexy *)(pTVar2 + 0x50),extraout_x1);
      std::operator+("[ZOMBIE_",asStack_18);
      std::operator+(asStack_10,"]");
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      FUN_05478178(asStack_10,L"[TASK_BEATZOMBIES_DESCRIPTION]",auStack_38);
      Sexy::ToWString((string *)(pTVar2 + 0x48));
      TodStringTranslate(awStack_20);
      TodReplaceString((wstring *)asStack_10,L"{WORLDNAME}",(wstring *)asStack_18);
      FUN_05476c50(asStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(asStack_10);
      nop();
      TodReplaceNumberString(awStack_28,L"{NUM}",*(int *)(pTVar2 + 0x40));
      FUN_054766c8(awStack_28,asStack_10);
      FUN_05476c50(asStack_10);
      Sexy::ToWString(asStack_30);
      TodStringTranslate(awStack_20);
      TodReplaceString(awStack_28,L"{ZOMBIE}",(wstring *)asStack_18);
      FUN_054766c8(this + 0x110,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(asStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

