// Class: ZombieGeneralProps


/* ZombieGeneralProps::ZombieGeneralProps() */

void __thiscall ZombieGeneralProps::ZombieGeneralProps(ZombieGeneralProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 1;
  *(undefined4 *)(this + 0x234) = 1;
  *(undefined ***)this = &PTR_GetClass_06a0c150;
  *(undefined4 *)(this + 0x228) = 0;
  return;
}


/* ZombieGeneralProps::~ZombieGeneralProps() */

void __thiscall ZombieGeneralProps::~ZombieGeneralProps(ZombieGeneralProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0c150;
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieGeneralProps::~ZombieGeneralProps() */

void __thiscall ZombieGeneralProps::~ZombieGeneralProps(ZombieGeneralProps *this)

{
  ~ZombieGeneralProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieGeneralProps::StaticNew() */

ZombieGeneralProps * ZombieGeneralProps::StaticNew(void)

{
  ZombieGeneralProps *this;
  
  this = ::operator_new(0x238);
  ZombieGeneralProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralProps::StaticClassInit() */

void ZombieGeneralProps::StaticClassInit(void)

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
            (apStack_30,"ignore",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"crush",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"burn",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"ZombieGeneralCollide");
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
    std::string::string((string *)avStack_20,"ZombieGeneralProps");
    (*pcVar3)(plVar2,avStack_20,FUN_04f05290,0x238,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralProps::StaticGetClass() */

long * ZombieGeneralProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralProps::GetClass() const */

long * ZombieGeneralProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

