// Class: JoustPointOfLossModule


/* JoustPointOfLossModule::instantiateDialog() */

void __thiscall JoustPointOfLossModule::instantiateDialog(JoustPointOfLossModule *this)

{
  AdaptorJoustPointOfLossDialog *this_00;
  
  this_00 = ::operator_new(0x298);
  AdaptorJoustPointOfLossDialog::AdaptorJoustPointOfLossDialog(this_00);
  *(AdaptorJoustPointOfLossDialog **)(this + 0x18) = this_00;
  return;
}


/* JoustPointOfLossModule::~JoustPointOfLossModule() */

void __thiscall JoustPointOfLossModule::~JoustPointOfLossModule(JoustPointOfLossModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066aedb0;
  PointOfLossModule::~PointOfLossModule((PointOfLossModule *)this);
  return;
}


/* JoustPointOfLossModule::~JoustPointOfLossModule() */

void __thiscall JoustPointOfLossModule::~JoustPointOfLossModule(JoustPointOfLossModule *this)

{
  ~JoustPointOfLossModule(this);
  AK::FreeHook(this);
  return;
}


/* JoustPointOfLossModule::JoustPointOfLossModule() */

void __thiscall JoustPointOfLossModule::JoustPointOfLossModule(JoustPointOfLossModule *this)

{
  PointOfLossModule::PointOfLossModule((PointOfLossModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066aedb0;
  return;
}


/* JoustPointOfLossModule::StaticNew() */

JoustPointOfLossModule * JoustPointOfLossModule::StaticNew(void)

{
  JoustPointOfLossModule *this;
  
  this = ::operator_new(0x28);
  JoustPointOfLossModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPointOfLossModule::StaticClassInit() */

void JoustPointOfLossModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustPointOfLossModule");
    (*pcVar2)(plVar1,asStack_10,FUN_038882b8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustPointOfLossModule::StaticGetClass() */

long * JoustPointOfLossModule::StaticGetClass(void)

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
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPointOfLossModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPointOfLossModule::ResumePlay() */

void __thiscall JoustPointOfLossModule::ResumePlay(JoustPointOfLossModule *this)

{
  AdaptorJoustPointOfLossDialog *this_00;
  
  this_00 = Sexy::RtObject::Cast<AdaptorJoustPointOfLossDialog>(*(RtObject **)(this + 0x18));
  AdaptorJoustPointOfLossDialog::SetConfirmationVisible(this_00,true);
  return;
}


/* JoustPointOfLossModule::addGameTime(float) */

void JoustPointOfLossModule::addGameTime(float param_1)

{
  LevelModuleManager *this;
  JoustGameModule *this_00;
  
  this = (LevelModuleManager *)FUN_03887d6c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<JoustGameModule>(this);
  if (this_00 != (JoustGameModule *)0x0) {
    JoustGameModule::AddTime(this_00,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPointOfLossModule::onSetupComplete() */

void __thiscall JoustPointOfLossModule::onSetupComplete(JoustPointOfLossModule *this)

{
  AdaptorJoustPointOfLossDialog *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtObject::Cast<AdaptorJoustPointOfLossDialog>(*(RtObject **)(this + 0x18));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onResumePlay");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_60,asStack_58);
  AdaptorJoustPointOfLossDialog::SetOnResumePlay(this_00,(RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  AdaptorJoustPointOfLossDialog::SetConfirmationVisible(this_00,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPointOfLossModule::onAcceptGems() */

void __thiscall JoustPointOfLossModule::onAcceptGems(JoustPointOfLossModule *this)

{
  char cVar1;
  RtObject *this_00;
  JoustPointOfLossModuleProperties *pJVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PointOfLossModule::onAcceptGems((PointOfLossModule *)this);
  if (cVar1 != '\0') {
    LevelModule::GetPropsPtr((LevelModule *)this);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pJVar2 = Sexy::RtObject::Cast<JoustPointOfLossModuleProperties>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    addGameTime(*(float *)(pJVar2 + 0x5c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* JoustPointOfLossModule::onResumePlay() */

void __thiscall JoustPointOfLossModule::onResumePlay(JoustPointOfLossModule *this)

{
  ZombieActionHandler *this_00;
  
  PointOfLossModule::ResumePlay((PointOfLossModule *)this);
  this_00 = (ZombieActionHandler *)JoustUtils::GetCurrentLevelRecording();
  ZombieActionHandler::StartAction(this_00);
  return;
}

