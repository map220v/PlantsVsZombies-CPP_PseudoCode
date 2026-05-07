// Class: ArcadeLastPlayData


/* ArcadeLastPlayData::~ArcadeLastPlayData() */

void __thiscall ArcadeLastPlayData::~ArcadeLastPlayData(ArcadeLastPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_06831220;
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* ArcadeLastPlayData::~ArcadeLastPlayData() */

void __thiscall ArcadeLastPlayData::~ArcadeLastPlayData(ArcadeLastPlayData *this)

{
  ~ArcadeLastPlayData(this);
  AK::FreeHook(this);
  return;
}


/* ArcadeLastPlayData::ArcadeLastPlayData() */

void __thiscall ArcadeLastPlayData::ArcadeLastPlayData(ArcadeLastPlayData *this)

{
  float fVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06831220;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  fVar1 = (float)PVZ_EOT();
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(long *)(this + 0x18) = (long)fVar1;
  return;
}


/* ArcadeLastPlayData::StaticNew() */

ArcadeLastPlayData * ArcadeLastPlayData::StaticNew(void)

{
  ArcadeLastPlayData *this;
  
  this = ::operator_new(0x28);
  ArcadeLastPlayData(this);
  return this;
}


/* ArcadeLastPlayData::ArcadeLastPlayData(ArcadeLastPlayData const&) */

void __thiscall
ArcadeLastPlayData::ArcadeLastPlayData(ArcadeLastPlayData *this,ArcadeLastPlayData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06831220;
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* ArcadeLastPlayData::ArcadeLastPlayData(ArcadeLastPlayData&&) */

void __thiscall
ArcadeLastPlayData::ArcadeLastPlayData(ArcadeLastPlayData *this,ArcadeLastPlayData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06831220;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadeLastPlayData::StaticClassInit() */

void ArcadeLastPlayData::StaticClassInit(void)

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
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"playing",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"victory",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"defeat",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"LastPlayStatus");
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
    std::string::string((string *)avStack_20,"ArcadeLastPlayData");
    (*pcVar3)(plVar2,avStack_20,FUN_042ee8b8,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadeLastPlayData::StaticGetClass() */

long * ArcadeLastPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeLastPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadeLastPlayData::GetClass() const */

long * ArcadeLastPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadeLastPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

