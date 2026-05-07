// Class: ZombossSkyCityThrowAircraftActionDefinition


/* ZombossSkyCityThrowAircraftActionDefinition::~ZombossSkyCityThrowAircraftActionDefinition() */

void __thiscall
ZombossSkyCityThrowAircraftActionDefinition::~ZombossSkyCityThrowAircraftActionDefinition
          (ZombossSkyCityThrowAircraftActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2f00;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSkyCityThrowAircraftActionDefinition::~ZombossSkyCityThrowAircraftActionDefinition() */

void __thiscall
ZombossSkyCityThrowAircraftActionDefinition::~ZombossSkyCityThrowAircraftActionDefinition
          (ZombossSkyCityThrowAircraftActionDefinition *this)

{
  ~ZombossSkyCityThrowAircraftActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityThrowAircraftActionDefinition::StaticClassInit() */

void ZombossSkyCityThrowAircraftActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityThrowAircraftActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04727264,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityThrowAircraftActionDefinition::StaticGetClass() */

long * ZombossSkyCityThrowAircraftActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityThrowAircraftActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityThrowAircraftActionDefinition::GetClass() const */

long * ZombossSkyCityThrowAircraftActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityThrowAircraftActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityThrowAircraftActionDefinition::ZombossSkyCityThrowAircraftActionDefinition() */

void __thiscall
ZombossSkyCityThrowAircraftActionDefinition::ZombossSkyCityThrowAircraftActionDefinition
          (ZombossSkyCityThrowAircraftActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c2f00;
  return;
}


/* ZombossSkyCityThrowAircraftActionDefinition::StaticNew() */

ZombossSkyCityThrowAircraftActionDefinition *
ZombossSkyCityThrowAircraftActionDefinition::StaticNew(void)

{
  ZombossSkyCityThrowAircraftActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSkyCityThrowAircraftActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0472fe20 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityThrowAircraftActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSkyCityThrowAircraftActionDefinition::TryStartAction
          (undefined8 param_1,RtWeakPtrBase *param_2)

{
  int extraout_w0;
  SharkMinion *this;
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0x964] != (SharkMinion)0x0) {
    SharkMinion::getRow(this);
    extraout_w0 = (int)this;
    SharkMinion::getRow(this);
    SharkMinion::getRow(this);
    bVar1 = (extraout_w0 == 2 || extraout_w0 == 1) || extraout_w0 == 3;
    if ((extraout_w0 == 2 || extraout_w0 == 1) || extraout_w0 == 3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      ZombieWithActions::QueueAction<ZombossSkyCityThrowAircraftActionHandler>
                ((ZombieWithActions *)this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0472fda0;
    }
  }
  bVar1 = false;
LAB_0472fda0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

