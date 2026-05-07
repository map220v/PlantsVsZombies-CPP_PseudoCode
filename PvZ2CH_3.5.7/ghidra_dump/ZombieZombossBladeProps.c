// Class: ZombieZombossBladeProps


/* ZombieZombossBladeProps::ZombieZombossBladeProps() */

void __thiscall ZombieZombossBladeProps::ZombieZombossBladeProps(ZombieZombossBladeProps *this)

{
  ZombossProps::ZombossProps((ZombossProps *)this);
  *(undefined ***)this = &PTR_GetClass_068ba9d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  return;
}


/* ZombieZombossBladeProps::StaticNew() */

ZombieZombossBladeProps * ZombieZombossBladeProps::StaticNew(void)

{
  ZombieZombossBladeProps *this;
  
  this = ::operator_new(0x230);
  ZombieZombossBladeProps(this);
  return this;
}


/* ZombieZombossBladeProps::~ZombieZombossBladeProps() */

void __thiscall ZombieZombossBladeProps::~ZombieZombossBladeProps(ZombieZombossBladeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068ba9d0;
  std::vector<ZombossBladeStage,std::allocator<ZombossBladeStage>>::~vector
            ((vector<ZombossBladeStage,std::allocator<ZombossBladeStage>> *)(this + 0x218));
  ZombossProps::~ZombossProps((ZombossProps *)this);
  return;
}


/* ZombieZombossBladeProps::~ZombieZombossBladeProps() */

void __thiscall ZombieZombossBladeProps::~ZombieZombossBladeProps(ZombieZombossBladeProps *this)

{
  ~ZombieZombossBladeProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBladeProps::StaticClassInit() */

void ZombieZombossBladeProps::StaticClassInit(void)

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
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BladeDash",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"BladeKee",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"EZombossBladeRandomAction");
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
    std::string::string((string *)avStack_20,"ZombossRandomAction");
    (*pcVar3)(plVar2,avStack_20,FUN_046fa9b4,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombossBladeStage");
    (*pcVar3)(plVar2,avStack_20,FUN_046fbda8,0xa8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ZombieZombossBladeProps");
    (*pcVar3)(plVar2,avStack_20,FUN_046fd1dc,0x230,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossBladeProps::StaticGetClass() */

long * ZombieZombossBladeProps::StaticGetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossBladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossBladeProps::GetClass() const */

long * ZombieZombossBladeProps::GetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossBladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

