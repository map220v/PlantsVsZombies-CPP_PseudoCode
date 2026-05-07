// Class: GameObjectDictionary


/* GameObjectDictionary::GameObjectDictionary() */

void __thiscall GameObjectDictionary::GameObjectDictionary(GameObjectDictionary *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675cb10;
  return;
}


/* GameObjectDictionary::~GameObjectDictionary() */

void __thiscall GameObjectDictionary::~GameObjectDictionary(GameObjectDictionary *this)

{
  *(undefined ***)this = &PTR_GetClass_0675cb10;
  nop();
  return;
}


/* GameObjectDictionary::~GameObjectDictionary() */

void __thiscall GameObjectDictionary::~GameObjectDictionary(GameObjectDictionary *this)

{
  ~GameObjectDictionary(this);
  AK::FreeHook(this);
  return;
}


/* GameObjectDictionary::StaticNew() */

undefined8 GameObjectDictionary::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObjectDictionary::StaticClassInit() */

void GameObjectDictionary::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AttachedGameObjectNode");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb434c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AttachedBoardEntityNode");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb21e0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AttachedEffect");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb3334,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GameObjectDictionary");
    (*pcVar3)(plVar2,asStack_10,FUN_03cb28b4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameObjectDictionary::StaticGetClass() */

long * GameObjectDictionary::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GameObjectDictionary",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameObjectDictionary::GetClass() const */

long * GameObjectDictionary::GetClass(void)

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
  (*pcVar3)(plVar1,"GameObjectDictionary",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameObjectDictionary::FindOrCreate(std::string const&) */

void __thiscall GameObjectDictionary::FindOrCreate(GameObjectDictionary *this,string *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x70))();
  if (iVar1 != -1) {
    (**(code **)(*(long *)this + 0x60))();
    return;
  }
  (**(code **)(*(long *)this + 0x58))(this,param_1);
  return;
}


/* GameObjectDictionary::Remove(std::string const&) */

void GameObjectDictionary::Remove(string *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x70))();
  if (-1 < iVar1) {
    (**(code **)(*(long *)param_1 + 0x68))(param_1);
  }
  return;
}


/* GameObjectDictionary::Contains(std::string const&) const */

bool GameObjectDictionary::Contains(string *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x70))();
  return iVar1 != -1;
}

