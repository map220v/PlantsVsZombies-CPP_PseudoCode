// Class: HotUIAdaptorTableViewCell


/* HotUIAdaptorTableViewCell::~HotUIAdaptorTableViewCell() */

void __thiscall
HotUIAdaptorTableViewCell::~HotUIAdaptorTableViewCell(HotUIAdaptorTableViewCell *this)

{
  *(undefined ***)this = &PTR_GetClass_0666a3d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0666a740;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0666a788;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* HotUIAdaptorTableViewCell::~HotUIAdaptorTableViewCell() */

void __thiscall
HotUIAdaptorTableViewCell::~HotUIAdaptorTableViewCell(HotUIAdaptorTableViewCell *this)

{
  ~HotUIAdaptorTableViewCell(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptorTableViewCell::StaticClassInit() */

void HotUIAdaptorTableViewCell::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIAdaptorTableViewCell");
    (*pcVar2)(plVar1,asStack_10,FUN_0361de24,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAdaptorTableViewCell::StaticGetClass() */

long * HotUIAdaptorTableViewCell::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIAdaptorTableViewCell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAdaptorTableViewCell::GetClass() const */

long * HotUIAdaptorTableViewCell::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIAdaptorTableViewCell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAdaptorTableViewCell::GetCellWidget() */

void __thiscall HotUIAdaptorTableViewCell::GetCellWidget(HotUIAdaptorTableViewCell *this)

{
  HotUIFile *this_00;
  RtClass *pRVar1;
  
  this_00 = (HotUIFile *)FUN_0361dce4(*(undefined8 *)(this + 0xf8));
  pRVar1 = (RtClass *)HotUITableViewCell::StaticGetClass();
  HotUIFile::GetWidgetByType(this_00,pRVar1);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptorTableViewCell::HotUIAdaptorTableViewCell() */

void __thiscall
HotUIAdaptorTableViewCell::HotUIAdaptorTableViewCell(HotUIAdaptorTableViewCell *this)

{
  Widget aWStack_e0 [216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0666a3d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0666a740;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0666a788;
  Sexy::Widget::Widget(aWStack_e0);
  Sexy::Widget::~Widget(aWStack_e0);
  *(undefined8 *)(this + 0x120) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAdaptorTableViewCell::StaticNew() */

HotUIAdaptorTableViewCell * HotUIAdaptorTableViewCell::StaticNew(void)

{
  HotUIAdaptorTableViewCell *this;
  
  this = ::operator_new(0x128);
  HotUIAdaptorTableViewCell(this);
  return this;
}

