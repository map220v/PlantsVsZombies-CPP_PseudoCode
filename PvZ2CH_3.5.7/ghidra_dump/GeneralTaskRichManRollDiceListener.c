// Class: GeneralTaskRichManRollDiceListener


/* GeneralTaskRichManRollDiceListener::onRichMan_RollDice() */

void __thiscall
GeneralTaskRichManRollDiceListener::onRichMan_RollDice(GeneralTaskRichManRollDiceListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskRichManRollDiceListener::~GeneralTaskRichManRollDiceListener() */

void __thiscall
GeneralTaskRichManRollDiceListener::~GeneralTaskRichManRollDiceListener
          (GeneralTaskRichManRollDiceListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710470;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskRichManRollDiceListener::~GeneralTaskRichManRollDiceListener() */

void __thiscall
GeneralTaskRichManRollDiceListener::~GeneralTaskRichManRollDiceListener
          (GeneralTaskRichManRollDiceListener *this)

{
  ~GeneralTaskRichManRollDiceListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskRichManRollDiceListener::GeneralTaskRichManRollDiceListener() */

void __thiscall
GeneralTaskRichManRollDiceListener::GeneralTaskRichManRollDiceListener
          (GeneralTaskRichManRollDiceListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710470;
  return;
}


/* GeneralTaskRichManRollDiceListener::StaticNew() */

GeneralTaskRichManRollDiceListener * GeneralTaskRichManRollDiceListener::StaticNew(void)

{
  GeneralTaskRichManRollDiceListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskRichManRollDiceListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskRichManRollDiceListener::StaticClassInit() */

void GeneralTaskRichManRollDiceListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskRichManRollDiceListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8ca74,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskRichManRollDiceListener::StaticGetClass() */

long * GeneralTaskRichManRollDiceListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskRichManRollDiceListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskRichManRollDiceListener::GetClass() const */

long * GeneralTaskRichManRollDiceListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskRichManRollDiceListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskRichManRollDiceListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskRichManRollDiceListener::RegisterListener
          (GeneralTaskRichManRollDiceListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRichMan_RollDice);
  Sexy::Delegate0::
  Delegate0<GeneralTaskRichManRollDiceListener,void(GeneralTaskRichManRollDiceListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RichMan_RollDice,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskRichManRollDiceListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

