// Class: Effect_Mole


/* Effect_Mole::onMoleDownOver(StandaloneEffect*) */

void __thiscall Effect_Mole::onMoleDownOver(Effect_Mole *this,StandaloneEffect *param_1)

{
  if (param_1 != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetVisibility(param_1,false);
    return;
  }
  return;
}


/* Effect_Mole::~Effect_Mole() */

void __thiscall Effect_Mole::~Effect_Mole(Effect_Mole *this)

{
  *(undefined ***)this = &PTR_GetClass_06732b20;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_Mole::~Effect_Mole() */

void __thiscall Effect_Mole::~Effect_Mole(Effect_Mole *this)

{
  ~Effect_Mole(this);
  AK::FreeHook(this);
  return;
}


/* Effect_Mole::Effect_Mole() */

void __thiscall Effect_Mole::Effect_Mole(Effect_Mole *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06732b20;
  return;
}


/* Effect_Mole::StaticNew() */

Effect_Mole * Effect_Mole::StaticNew(void)

{
  Effect_Mole *this;
  
  this = ::operator_new(0x110);
  Effect_Mole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Mole::StaticClassInit() */

void Effect_Mole::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_Mole");
    (*pcVar2)(plVar1,asStack_10,FUN_03b52df4,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Mole::StaticGetClass() */

long * Effect_Mole::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_Mole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Mole::GetClass() const */

long * Effect_Mole::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_Mole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Mole::onNotifyGameEnd() */

void __thiscall Effect_Mole::onNotifyGameEnd(Effect_Mole *this)

{
  char *__s;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10c) == 1) {
    __s = "r3";
  }
  else {
    if (*(int *)(this + 0x10c) != 2) goto LAB_03b529a0;
    __s = "xiaoyouxi3";
  }
  std::string::string(asStack_58,__s);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_58,0);
  std::string::~string(asStack_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onMoleDownOver");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_03b529a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Mole::onInitialized() */

void __thiscall Effect_Mole::onInitialized(Effect_Mole *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onInitialized((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyGameEnd);
  Sexy::Delegate0::Delegate0<Effect_Mole,void(Effect_Mole::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyWhackGameEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

