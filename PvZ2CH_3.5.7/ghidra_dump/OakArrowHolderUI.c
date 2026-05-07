// Class: OakArrowHolderUI


/* OakArrowHolderUI::~OakArrowHolderUI() */

void __thiscall OakArrowHolderUI::~OakArrowHolderUI(OakArrowHolderUI *this)

{
  *(undefined ***)this = &PTR_GetClass_068329c0;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowHolderUI_06832b60;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to OakArrowHolderUI::~OakArrowHolderUI() */

void __thiscall OakArrowHolderUI::~OakArrowHolderUI(OakArrowHolderUI *this)

{
  ~OakArrowHolderUI(this + -0x10);
  return;
}


/* OakArrowHolderUI::~OakArrowHolderUI() */

void __thiscall OakArrowHolderUI::~OakArrowHolderUI(OakArrowHolderUI *this)

{
  ~OakArrowHolderUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OakArrowHolderUI::~OakArrowHolderUI() */

void __thiscall OakArrowHolderUI::~OakArrowHolderUI(OakArrowHolderUI *this)

{
  ~OakArrowHolderUI(this + -0x10);
  return;
}


/* OakArrowHolderUI::StaticGetClass() */

long * OakArrowHolderUI::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"OakArrowHolderUI",uVar2,StaticNew);
  return sClass;
}


/* OakArrowHolderUI::GetClass() const */

long * OakArrowHolderUI::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"OakArrowHolderUI",uVar2,StaticNew);
  return sClass;
}


/* OakArrowHolderUI::OakArrowHolderUI() */

void __thiscall OakArrowHolderUI::OakArrowHolderUI(OakArrowHolderUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068329c0;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowHolderUI_06832b60;
  return;
}


/* OakArrowHolderUI::StaticNew() */

OakArrowHolderUI * OakArrowHolderUI::StaticNew(void)

{
  OakArrowHolderUI *this;
  
  this = ::operator_new(0x168);
  OakArrowHolderUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowHolderUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowHolderUI::Draw(OakArrowHolderUI *this,Graphics *param_1)

{
  Image *pIVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06af91d0);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to OakArrowHolderUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowHolderUI::Draw(OakArrowHolderUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

