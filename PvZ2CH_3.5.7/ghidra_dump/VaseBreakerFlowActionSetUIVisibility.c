// Class: VaseBreakerFlowActionSetUIVisibility


/* VaseBreakerFlowActionSetUIVisibility::SetVisibility(bool) */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::SetVisibility
          (VaseBreakerFlowActionSetUIVisibility *this,bool param_1)

{
  this[0x30] = (VaseBreakerFlowActionSetUIVisibility)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionSetUIVisibility::StaticClassInit() */

void VaseBreakerFlowActionSetUIVisibility::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionSetUIVisibility");
    (*pcVar2)(plVar1,asStack_10,FUN_0497459c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionSetUIVisibility::StaticGetClass() */

long * VaseBreakerFlowActionSetUIVisibility::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionSetUIVisibility",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionSetUIVisibility::GetClass() const */

long * VaseBreakerFlowActionSetUIVisibility::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionSetUIVisibility",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionSetUIVisibility::VaseBreakerFlowActionSetUIVisibility() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::VaseBreakerFlowActionSetUIVisibility
          (VaseBreakerFlowActionSetUIVisibility *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917cc0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionSetUIVisibility_06917d68;
  return;
}


/* VaseBreakerFlowActionSetUIVisibility::StaticNew() */

VaseBreakerFlowActionSetUIVisibility * VaseBreakerFlowActionSetUIVisibility::StaticNew(void)

{
  VaseBreakerFlowActionSetUIVisibility *this;
  
  this = ::operator_new(0x38);
  VaseBreakerFlowActionSetUIVisibility(this);
  return this;
}


/* VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility
          (VaseBreakerFlowActionSetUIVisibility *this)

{
  *(undefined ***)this = &PTR_GetClass_06917cc0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionSetUIVisibility_06917d68;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility
          (VaseBreakerFlowActionSetUIVisibility *this)

{
  ~VaseBreakerFlowActionSetUIVisibility(this + -0x10);
  return;
}


/* VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility
          (VaseBreakerFlowActionSetUIVisibility *this)

{
  ~VaseBreakerFlowActionSetUIVisibility(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::~VaseBreakerFlowActionSetUIVisibility
          (VaseBreakerFlowActionSetUIVisibility *this)

{
  ~VaseBreakerFlowActionSetUIVisibility(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionSetUIVisibility::onBegin() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::onBegin(VaseBreakerFlowActionSetUIVisibility *this)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  UIWidget *this_00;
  ulong uVar4;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar4 = DAT_06b72ad8 & 1;
  local_8 = ___stack_chk_guard;
  if (((DAT_06b72ad8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b72ad8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b72b08,"UISunBank");
    nop();
    std::string::string((string *)&DAT_06b72b10,"UICoinBank");
    nop();
    std::string::string((string *)&DAT_06b72b18,"UIPauseButton");
    nop();
    std::string::string((string *)&DAT_06b72b20,"UISeedBank");
    nop();
    std::string::string((string *)&DAT_06b72b28,"UIPlantfood");
    nop();
    std::string::string((string *)&DAT_06b72b30,"UIShovel");
    nop();
    std::string::string((string *)&DAT_06b72b38,"UIPowerupHolder");
    nop();
    std::string::string((string *)&DAT_06b72b40,"UISeedChooser");
    nop();
    __cxa_guard_release(&DAT_06b72ad8);
    __cxa_atexit(FUN_04972694,uVar4,&DAT_06a88000);
  }
  if (((DAT_06b72af8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b72af8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b72ac0,(string *)&DAT_06b72b08,
               (allocator *)&VaseBreakerFlowActionPlaceholderMessage::sClass);
    __cxa_guard_release(&DAT_06b72af8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b72ac0,
                 &DAT_06a88000);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b72ac0);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b72ac0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,(bool)this[0x30]);
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  RunnableAction::End((RunnableAction *)(this + 0x10));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionSetUIVisibility::onBegin() */

void __thiscall
VaseBreakerFlowActionSetUIVisibility::onBegin(VaseBreakerFlowActionSetUIVisibility *this)

{
  onBegin(this + -0x10);
  return;
}

