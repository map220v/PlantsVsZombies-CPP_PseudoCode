// Class: BasicTaskWidget


/* BasicTaskWidget::Update() */

void __thiscall BasicTaskWidget::Update(BasicTaskWidget *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 0x340))(this);
  return;
}


/* BasicTaskWidget::~BasicTaskWidget() */

void __thiscall BasicTaskWidget::~BasicTaskWidget(BasicTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066f43c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4718;
  TaskWidget::~TaskWidget((TaskWidget *)this);
  return;
}


/* BasicTaskWidget::~BasicTaskWidget() */

void __thiscall BasicTaskWidget::~BasicTaskWidget(BasicTaskWidget *this)

{
  ~BasicTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasicTaskWidget::StaticClassInit() */

void BasicTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"BasicTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_039dd8c8,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BasicTaskWidget::StaticGetClass() */

long * BasicTaskWidget::StaticGetClass(void)

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
  uVar2 = TaskWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BasicTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BasicTaskWidget::BasicTaskWidget() */

void __thiscall BasicTaskWidget::BasicTaskWidget(BasicTaskWidget *this)

{
  TaskWidget::TaskWidget((TaskWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066f43c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f4718;
  return;
}


/* BasicTaskWidget::StaticNew() */

BasicTaskWidget * BasicTaskWidget::StaticNew(void)

{
  BasicTaskWidget *this;
  
  this = ::operator_new(0x1a0);
  BasicTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BasicTaskWidget::Init() */

void __thiscall BasicTaskWidget::Init(BasicTaskWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  wstring awStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x20),false);
  *(long *)(this + 0x118) = lVar5;
  if (lVar5 == 0) {
    std::string::string((string *)&uStack_18,"IMAGE_UI_QUESTS_BACKGROUND_GENERIC");
    uVar6 = StringHelper::ToImage((string *)&uStack_18,false);
    *(undefined8 *)(this + 0x118) = uVar6;
    std::string::~string((string *)&uStack_18);
    nop();
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::ToWString((string *)(lVar5 + 0x10));
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0xf8,(Insets *)&uStack_18);
  FUN_05476c50((Insets *)&uStack_18);
  FUN_05476c50(awStack_20);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe0) + 0x20));
  Sexy::ToWString((string *)(lVar5 + 0x18));
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0x110,(Insets *)&uStack_18);
  FUN_05476c50((Insets *)&uStack_18);
  FUN_05476c50(awStack_20);
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(5);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0xe8) = uStack_18;
  *(undefined8 *)(this + 0xf0) = uStack_10;
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(0x37);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x100) = uStack_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  iVar1 = FUN_039dd168(0x14);
  iVar2 = FUN_039dd168(0x5f);
  iVar3 = FUN_039dd168(500);
  iVar4 = FUN_039dd168(0x32);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x120) = uStack_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar1 = FUN_039dd168(0x1ea);
  iVar2 = FUN_039dd168(0x4c);
  iVar3 = FUN_039dd168(100);
  iVar4 = FUN_039dd168(0x14);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x130) = uStack_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  iVar1 = FUN_039dd168(0x1e0);
  iVar2 = FUN_039dd168(10);
  iVar3 = FUN_039dd168(0x8c);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x140) = uStack_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  iVar1 = FUN_039dd168(0x1fe);
  iVar2 = FUN_039dd168(10);
  iVar3 = FUN_039dd168(100);
  iVar4 = FUN_039dd168(0x28);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar1,iVar2,iVar3,iVar4);
  pcVar7 = *(code **)(*(long *)this + 0x338);
  *(undefined8 *)(this + 0x150) = uStack_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  (*pcVar7)(this);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

