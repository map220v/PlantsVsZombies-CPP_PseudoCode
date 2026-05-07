// Class: TWRewardListData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWRewardListData::StaticClassInit() */

void TWRewardListData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TWRewardListData");
    (*pcVar2)(plVar1,asStack_10,FUN_04a47384,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TWRewardListData::StaticGetClass() */

long * TWRewardListData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TWRewardListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TWRewardListData::GetClass() const */

long * TWRewardListData::GetClass(void)

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
  (*pcVar3)(plVar1,"TWRewardListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TWRewardListData::TWRewardListData() */

void __thiscall TWRewardListData::TWRewardListData(TWRewardListData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06933790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* TWRewardListData::StaticNew() */

TWRewardListData * TWRewardListData::StaticNew(void)

{
  TWRewardListData *this;
  
  this = ::operator_new(0x20);
  TWRewardListData(this);
  return this;
}


/* TWRewardListData::~TWRewardListData() */

void __thiscall TWRewardListData::~TWRewardListData(TWRewardListData *this)

{
  *(undefined ***)this = &PTR_GetClass_06933790;
  std::vector<TWRewardData,std::allocator<TWRewardData>>::~vector
            ((vector<TWRewardData,std::allocator<TWRewardData>> *)(this + 8));
  nop();
  return;
}


/* TWRewardListData::~TWRewardListData() */

void __thiscall TWRewardListData::~TWRewardListData(TWRewardListData *this)

{
  ~TWRewardListData(this);
  AK::FreeHook(this);
  return;
}


/* TWRewardListData::TWRewardListData(TWRewardListData const&) */

void __thiscall TWRewardListData::TWRewardListData(TWRewardListData *this,TWRewardListData *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06933790;
  std::vector<TWRewardData,std::allocator<TWRewardData>>::vector
            ((vector<TWRewardData,std::allocator<TWRewardData>> *)(this + 8),(vector *)(param_1 + 8)
            );
  return;
}

