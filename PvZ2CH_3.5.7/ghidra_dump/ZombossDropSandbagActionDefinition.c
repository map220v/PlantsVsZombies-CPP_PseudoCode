// Class: ZombossDropSandbagActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionDefinition::StaticClassInit() */

void ZombossDropSandbagActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDropSandbagActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047333fc,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDropSandbagActionDefinition::StaticGetClass() */

long * ZombossDropSandbagActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDropSandbagActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDropSandbagActionDefinition::GetClass() const */

long * ZombossDropSandbagActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDropSandbagActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDropSandbagActionDefinition::ZombossDropSandbagActionDefinition() */

void __thiscall
ZombossDropSandbagActionDefinition::ZombossDropSandbagActionDefinition
          (ZombossDropSandbagActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c5c90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x40));
  Sexy::Insets::Insets((Insets *)(this + 0x4c));
  DVec3::DVec3((DVec3 *)(this + 0x5c));
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x6c) = 0x43200000;
  return;
}


/* ZombossDropSandbagActionDefinition::StaticNew() */

ZombossDropSandbagActionDefinition * ZombossDropSandbagActionDefinition::StaticNew(void)

{
  ZombossDropSandbagActionDefinition *this;
  
  this = ::operator_new(0x70);
  ZombossDropSandbagActionDefinition(this);
  return this;
}


/* ZombossDropSandbagActionDefinition::~ZombossDropSandbagActionDefinition() */

void __thiscall
ZombossDropSandbagActionDefinition::~ZombossDropSandbagActionDefinition
          (ZombossDropSandbagActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5c90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossDropSandbagActionDefinition::~ZombossDropSandbagActionDefinition() */

void __thiscall
ZombossDropSandbagActionDefinition::~ZombossDropSandbagActionDefinition
          (ZombossDropSandbagActionDefinition *this)

{
  ~ZombossDropSandbagActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04734cb4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossDropSandbagActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossDropSandbagActionDefinition::TryStartAction
          (ZombossDropSandbagActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossDropSandbagActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

