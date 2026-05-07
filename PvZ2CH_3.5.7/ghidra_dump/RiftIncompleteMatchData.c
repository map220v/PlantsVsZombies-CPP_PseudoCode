// Class: RiftIncompleteMatchData


/* RiftIncompleteMatchData::~RiftIncompleteMatchData() */

void __thiscall RiftIncompleteMatchData::~RiftIncompleteMatchData(RiftIncompleteMatchData *this)

{
  *(undefined ***)this = &PTR_GetClass_06680d20;
  std::string::~string((string *)(this + 0x18));
  nop();
  return;
}


/* RiftIncompleteMatchData::~RiftIncompleteMatchData() */

void __thiscall RiftIncompleteMatchData::~RiftIncompleteMatchData(RiftIncompleteMatchData *this)

{
  ~RiftIncompleteMatchData(this);
  AK::FreeHook(this);
  return;
}


/* RiftIncompleteMatchData::RiftIncompleteMatchData() */

void __thiscall RiftIncompleteMatchData::RiftIncompleteMatchData(RiftIncompleteMatchData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06680d20;
  Set8BytesTo0(this + 0x18);
  return;
}


/* RiftIncompleteMatchData::StaticNew() */

RiftIncompleteMatchData * RiftIncompleteMatchData::StaticNew(void)

{
  RiftIncompleteMatchData *this;
  
  this = ::operator_new(0x28);
  RiftIncompleteMatchData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftIncompleteMatchData::StaticClassInit() */

void RiftIncompleteMatchData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_20,"RiftIncompleteMatchData");
      (*pcVar3)(plVar2,asStack_20,FUN_036b9b58,0x28,0);
      std::string::~string(asStack_20);
      nop();
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"zomboss",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)asStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"RiftIncompleteLevelType");
    (*pcVar3)(plVar2,apStack_30,
              (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RiftIncompleteMatchData::StaticGetClass() */

long * RiftIncompleteMatchData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftIncompleteMatchData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftIncompleteMatchData::GetClass() const */

long * RiftIncompleteMatchData::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftIncompleteMatchData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

