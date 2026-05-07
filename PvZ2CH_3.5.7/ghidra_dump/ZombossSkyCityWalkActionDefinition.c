// Class: ZombossSkyCityWalkActionDefinition


/* ZombossSkyCityWalkActionDefinition::~ZombossSkyCityWalkActionDefinition() */

void __thiscall
ZombossSkyCityWalkActionDefinition::~ZombossSkyCityWalkActionDefinition
          (ZombossSkyCityWalkActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2c40;
  ZombossWalkActionDefinition::~ZombossWalkActionDefinition((ZombossWalkActionDefinition *)this);
  return;
}


/* ZombossSkyCityWalkActionDefinition::~ZombossSkyCityWalkActionDefinition() */

void __thiscall
ZombossSkyCityWalkActionDefinition::~ZombossSkyCityWalkActionDefinition
          (ZombossSkyCityWalkActionDefinition *this)

{
  ~ZombossSkyCityWalkActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityWalkActionDefinition::StaticClassInit() */

void ZombossSkyCityWalkActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityWalkActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04726a74,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityWalkActionDefinition::StaticGetClass() */

long * ZombossSkyCityWalkActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossWalkActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityWalkActionDefinition::GetClass() const */

long * ZombossSkyCityWalkActionDefinition::GetClass(void)

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
  uVar2 = ZombossWalkActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCityWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityWalkActionDefinition::ZombossSkyCityWalkActionDefinition() */

void __thiscall
ZombossSkyCityWalkActionDefinition::ZombossSkyCityWalkActionDefinition
          (ZombossSkyCityWalkActionDefinition *this)

{
  ZombossWalkActionDefinition::ZombossWalkActionDefinition((ZombossWalkActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c2c40;
  return;
}


/* ZombossSkyCityWalkActionDefinition::StaticNew() */

ZombossSkyCityWalkActionDefinition * ZombossSkyCityWalkActionDefinition::StaticNew(void)

{
  ZombossSkyCityWalkActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossSkyCityWalkActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0472f9f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityWalkActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSkyCityWalkActionDefinition::TryStartAction
          (ZombossSkyCityWalkActionDefinition *this,RtWeakPtrBase *param_2,RtObject *param_3)

{
  bool bVar1;
  ZombieZombossMech *pZVar2;
  ZombieWithActions *pZVar3;
  ZombossSkyCityWalkActionHandler *pZVar4;
  undefined4 local_1c;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18);
  local_1c = 2;
  if (param_3 == (RtObject *)0x0) {
    pZVar2 = (ZombieZombossMech *)0x0;
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(param_3);
  }
  pZVar3 = (ZombieWithActions *)
           ZombossWalkActionDefinition::PickWalkTarget
                     ((ZombossWalkActionDefinition *)this,pZVar2,aPStack_18,
                      (ZombossWalkDirection *)&local_1c);
  bVar1 = ((ulong)pZVar3 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pZVar4 = ZombieWithActions::QueueAction<ZombossSkyCityWalkActionHandler>(pZVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombossWalkActionHandler::SetWalkTarget((ZombossWalkActionHandler *)pZVar4,aPStack_18,local_1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

