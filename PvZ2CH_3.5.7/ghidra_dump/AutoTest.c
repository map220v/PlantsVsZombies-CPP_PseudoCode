// Class: AutoTest


/* AutoTest::AutoTest() */

void __thiscall AutoTest::AutoTest(AutoTest *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  this[8] = (AutoTest)0x0;
  *(undefined ***)this = &PTR_GetClass_06847260;
  return;
}


/* AutoTest::StaticNew() */

AutoTest * AutoTest::StaticNew(void)

{
  AutoTest *this;
  
  this = ::operator_new(0x10);
  AutoTest(this);
  return this;
}


/* AutoTest::StaticGetClass() */

long * AutoTest::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTest",uVar2,StaticNew);
  return sClass;
}


/* AutoTest::GetClass() const */

long * AutoTest::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTest",uVar2,StaticNew);
  return sClass;
}


/* AutoTest::setIsOn(bool) */

void __thiscall AutoTest::setIsOn(AutoTest *this,bool param_1)

{
  long lVar1;
  
  if (this[8] != (AutoTest)param_1) {
    this[8] = (AutoTest)param_1;
    if (param_1) {
      Sexy::InteractiveSoundManager::StopAll(*(InteractiveSoundManager **)(gLawnApp + 0x648));
      Sexy::InteractiveSoundManager::Update(*(InteractiveSoundManager **)(gLawnApp + 0x648));
      lVar1 = Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      FUN_043daf1c(lVar1 + 8);
      lVar1 = Sexy::LazySingleton<talkingGame>::GetInstancePtr();
      FUN_043dae24(lVar1 + 9,1);
    }
    else {
      lVar1 = Sexy::LazySingleton<talkingGame>::GetInstancePtr();
      FUN_043dae24(lVar1 + 9,0);
    }
    (**(code **)(*(long *)this + 0x48))(this,this[8]);
  }
  return;
}


/* AutoTest::~AutoTest() */

void __thiscall AutoTest::~AutoTest(AutoTest *this)

{
  *(undefined ***)this = &PTR_GetClass_06847260;
  setIsOn(this,false);
  nop();
  return;
}


/* AutoTest::~AutoTest() */

void __thiscall AutoTest::~AutoTest(AutoTest *this)

{
  ~AutoTest(this);
  AK::FreeHook(this);
  return;
}

