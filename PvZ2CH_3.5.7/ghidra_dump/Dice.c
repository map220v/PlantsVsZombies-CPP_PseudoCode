// Class: Dice


/* Dice::getState() */

undefined4 __thiscall Dice::getState(Dice *this)

{
  return *(undefined4 *)(this + 0x248);
}


/* Dice::~Dice() */

void __thiscall Dice::~Dice(Dice *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066bc0b0;
  HotUIAnim::~HotUIAnim((HotUIAnim *)this);
  return;
}


/* Dice::~Dice() */

void __thiscall Dice::~Dice(Dice *this)

{
  ~Dice(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dice::StaticClassInit() */

void Dice::StaticClassInit(void)

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
    std::string::string(asStack_10,"Dice");
    (*pcVar2)(plVar1,asStack_10,FUN_038dcf78,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Dice::StaticGetClass() */

long * Dice::StaticGetClass(void)

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
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055d36a8,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Dice::Dice() */

void __thiscall Dice::Dice(Dice *this)

{
  HotUIAnim::HotUIAnim((HotUIAnim *)this);
  *(undefined4 *)(this + 0x248) = 0xffffffff;
  *(undefined4 *)(this + 0x24c) = 0xffffffff;
  *(undefined ***)this = &PTR_GetWidgetClass_066bc0b0;
  return;
}


/* Dice::StaticNew() */

Dice * Dice::StaticNew(void)

{
  Dice *this;
  
  this = ::operator_new(0x250);
  Dice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dice::EnterRoll() */

void __thiscall Dice::EnterRoll(Dice *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"rolling");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::Delegate1<Dice,void(Dice::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  HotUIAnim::PlayAndStop((HotUIAnim *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Dice::setState(DiceState) */

void __thiscall Dice::setState(Dice *this,int param_2)

{
  if (*(int *)(this + 0x248) != param_2) {
    *(int *)(this + 0x248) = param_2;
    if (param_2 == 0) {
      nop();
      return;
    }
    if (param_2 == 1) {
      EnterRoll(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dice::DoRoll(int) */

void Dice::DoRoll(int param_1)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("roll_%d",asStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)(ulong)(uint)param_1,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::Delegate1<Dice,void(Dice::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  HotUIAnim::PlayAndStop((HotUIAnim *)(ulong)(uint)param_1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Dice::onAnimFinished(std::string const&) */

void __thiscall Dice::onAnimFinished(Dice *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"rolling");
  if (!bVar1) {
    setState(this,2);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  DoRoll((int)this);
  return;
}

