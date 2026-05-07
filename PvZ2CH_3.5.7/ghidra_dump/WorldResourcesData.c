// Class: WorldResourcesData


/* WorldResourcesData::WorldResourcesData(WorldResourcesData const&) */

void __thiscall
WorldResourcesData::WorldResourcesData(WorldResourcesData *this,WorldResourcesData *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_068579f0;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  std::vector<AnimationDetailInfo,std::allocator<AnimationDetailInfo>>::vector
            ((vector<AnimationDetailInfo,std::allocator<AnimationDetailInfo>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  this[0x50] = param_1[0x50];
  return;
}


/* WorldResourcesData::~WorldResourcesData() */

void __thiscall WorldResourcesData::~WorldResourcesData(WorldResourcesData *this)

{
  *(undefined ***)this = &PTR_GetClass_068579f0;
  std::vector<AnimationDetailInfo,std::allocator<AnimationDetailInfo>>::~vector
            ((vector<AnimationDetailInfo,std::allocator<AnimationDetailInfo>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  nop();
  return;
}


/* WorldResourcesData::~WorldResourcesData() */

void __thiscall WorldResourcesData::~WorldResourcesData(WorldResourcesData *this)

{
  ~WorldResourcesData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldResourcesData::StaticClassInit() */

void WorldResourcesData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimationDetailInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0451a334,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldResourcesData");
    (*pcVar3)(plVar2,asStack_10,FUN_0451f954,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldResourcesData::StaticGetClass() */

long * WorldResourcesData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldResourcesData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldResourcesData::GetClass() const */

long * WorldResourcesData::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldResourcesData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldResourcesData::WorldResourcesData() */

void __thiscall WorldResourcesData::WorldResourcesData(WorldResourcesData *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068579f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined2 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x28),"IMAGE_WORLDMAP_TUTORIAL_",in_x2);
  std::string::append((string *)(this + 0x30),"",in_x2);
  this[0x50] = (WorldResourcesData)0x0;
  return;
}


/* WorldResourcesData::StaticNew() */

WorldResourcesData * WorldResourcesData::StaticNew(void)

{
  WorldResourcesData *this;
  
  this = ::operator_new(0x58);
  WorldResourcesData(this);
  return this;
}

