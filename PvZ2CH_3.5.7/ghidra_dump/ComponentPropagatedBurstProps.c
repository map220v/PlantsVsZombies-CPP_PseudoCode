// Class: ComponentPropagatedBurstProps


/* ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps() */

void __thiscall
ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps(ComponentPropagatedBurstProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067361d0;
  std::string::~string((string *)(this + 0x20));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps() */

void __thiscall
ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps(ComponentPropagatedBurstProps *this)

{
  ~ComponentPropagatedBurstProps(this);
  AK::FreeHook(this);
  return;
}


/* ComponentPropagatedBurstProps::TEMPNAMEPLACEHOLDERVALUE(ComponentPropagatedBurstProps const&) */

ComponentPropagatedBurstProps * __thiscall
ComponentPropagatedBurstProps::operator=
          (ComponentPropagatedBurstProps *this,ComponentPropagatedBurstProps *param_1)

{
  undefined4 uVar1;
  ComponentPropagatedBurstProps CVar2;
  ComponentPropagatedBurstProps CVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  CVar2 = param_1[0x28];
  CVar3 = param_1[0x29];
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x18) = uVar1;
  this[0x28] = CVar2;
  this[0x29] = CVar3;
  return this;
}


/* ComponentPropagatedBurstProps::ComponentPropagatedBurstProps() */

void __thiscall
ComponentPropagatedBurstProps::ComponentPropagatedBurstProps(ComponentPropagatedBurstProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_067361d0;
  *(undefined4 *)(this + 0x14) = 0x3f400000;
  Set8BytesTo0(this + 0x20);
  this[0x28] = (ComponentPropagatedBurstProps)0x0;
  this[0x29] = (ComponentPropagatedBurstProps)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* ComponentPropagatedBurstProps::StaticNew() */

ComponentPropagatedBurstProps * ComponentPropagatedBurstProps::StaticNew(void)

{
  ComponentPropagatedBurstProps *this;
  
  this = ::operator_new(0x30);
  ComponentPropagatedBurstProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentPropagatedBurstProps::StaticClassInit() */

void ComponentPropagatedBurstProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"damage",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"charm",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"PropagationAction");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ComponentPropagatedBurstProps");
    (*pcVar3)(plVar2,avStack_20,FUN_03b93a48,0x30,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentPropagatedBurstProps::StaticGetClass() */

long * ComponentPropagatedBurstProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPropagatedBurstProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentPropagatedBurstProps::GetClass() const */

long * ComponentPropagatedBurstProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentPropagatedBurstProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

