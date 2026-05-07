// Class: ZombiePVPSkillAidProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkillAidProps::StaticClassInit() */

void ZombiePVPSkillAidProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkillAidProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a93108,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkillAidProps::StaticGetClass() */

long * ZombiePVPSkillAidProps::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkillProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillAidProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillAidProps::GetClass() const */

long * ZombiePVPSkillAidProps::GetClass(void)

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
  uVar2 = ZombiePVPSkillProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillAidProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillAidProps::ZombiePVPSkillAidProps() */

void __thiscall ZombiePVPSkillAidProps::ZombiePVPSkillAidProps(ZombiePVPSkillAidProps *this)

{
  ZombiePVPSkillProps::ZombiePVPSkillProps((ZombiePVPSkillProps *)this);
  *(undefined ***)this = &PTR_GetClass_06943680;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x288));
  *(undefined4 *)(this + 0x280) = 0;
  return;
}


/* ZombiePVPSkillAidProps::StaticNew() */

ZombiePVPSkillAidProps * ZombiePVPSkillAidProps::StaticNew(void)

{
  ZombiePVPSkillAidProps *this;
  
  this = ::operator_new(0x2a0);
  ZombiePVPSkillAidProps(this);
  return this;
}


/* ZombiePVPSkillAidProps::~ZombiePVPSkillAidProps() */

void __thiscall ZombiePVPSkillAidProps::~ZombiePVPSkillAidProps(ZombiePVPSkillAidProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06943680;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x288));
  ZombiePVPSkillProps::~ZombiePVPSkillProps((ZombiePVPSkillProps *)this);
  return;
}


/* ZombiePVPSkillAidProps::~ZombiePVPSkillAidProps() */

void __thiscall ZombiePVPSkillAidProps::~ZombiePVPSkillAidProps(ZombiePVPSkillAidProps *this)

{
  ~ZombiePVPSkillAidProps(this);
  AK::FreeHook(this);
  return;
}

