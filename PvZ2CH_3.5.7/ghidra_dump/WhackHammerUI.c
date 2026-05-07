// Class: WhackHammerUI


/* WhackHammerUI::onGameplayEnded() */

void __thiscall WhackHammerUI::onGameplayEnded(WhackHammerUI *this)

{
  this[0x163] = (WhackHammerUI)0x1;
  return;
}


/* WhackHammerUI::~WhackHammerUI() */

void __thiscall WhackHammerUI::~WhackHammerUI(WhackHammerUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738c00;
  *(undefined ***)(this + 0x10) = &PTR__WhackHammerUI_06738da0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WhackHammerUI::~WhackHammerUI() */

void __thiscall WhackHammerUI::~WhackHammerUI(WhackHammerUI *this)

{
  ~WhackHammerUI(this + -0x10);
  return;
}


/* WhackHammerUI::~WhackHammerUI() */

void __thiscall WhackHammerUI::~WhackHammerUI(WhackHammerUI *this)

{
  ~WhackHammerUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WhackHammerUI::~WhackHammerUI() */

void __thiscall WhackHammerUI::~WhackHammerUI(WhackHammerUI *this)

{
  ~WhackHammerUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackHammerUI::StaticClassInit() */

void WhackHammerUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackHammerUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbee90,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackHammerUI::StaticGetClass() */

long * WhackHammerUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackHammerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackHammerUI::GetClass() const */

long * WhackHammerUI::GetClass(void)

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
  (*pcVar3)(plVar1,"WhackHammerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackHammerUI::WhackHammerUI() */

void __thiscall WhackHammerUI::WhackHammerUI(WhackHammerUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (WhackHammerUI)0x0;
  *(undefined ***)this = &PTR_GetClass_06738c00;
  *(undefined ***)(this + 0x10) = &PTR__WhackHammerUI_06738da0;
  return;
}


/* WhackHammerUI::StaticNew() */

WhackHammerUI * WhackHammerUI::StaticNew(void)

{
  WhackHammerUI *this;
  
  this = ::operator_new(0x168);
  WhackHammerUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackHammerUI::registerForEvents() */

void __thiscall WhackHammerUI::registerForEvents(WhackHammerUI *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<WhackHammerUI,void(WhackHammerUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackHammerUI::Draw(Sexy::Graphics*) */

void __thiscall WhackHammerUI::Draw(WhackHammerUI *this,Graphics *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  PakInterface *this_00;
  Image *pIVar5;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_03bbf058(*(undefined4 *)(this + 0x68));
  if ((cVar1 == '\0') && (this[0x163] == (WhackHammerUI)0x0)) {
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  this_00 = (PakInterface *)FUN_03bbf12c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (PakInterface *)0x0) {
    uVar2 = PakInterface::GetFileSearchOrder(this_00);
    switch(uVar2) {
    case 0:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acde88;
      break;
    case 1:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acde38;
      break;
    case 2:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acdec0;
      break;
    case 3:
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06acde60;
      break;
    default:
      goto switchD_03bbf208_default;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    iVar3 = FUN_03bbece8(*(undefined4 *)(this + 0x38));
    iVar4 = FUN_03bbecec(*(undefined4 *)(this + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,iVar3,iVar4);
  }
switchD_03bbf208_default:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WhackHammerUI::Draw(Sexy::Graphics*) */

void __thiscall WhackHammerUI::Draw(WhackHammerUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

