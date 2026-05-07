// Class: WechatRewardInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WechatRewardInfo::StaticClassInit() */

void WechatRewardInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"WechatRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c1d97c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WechatRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c1fba4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WechatRewardInfo::StaticGetClass() */

long * WechatRewardInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WechatRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WechatRewardInfo::GetClass() const */

long * WechatRewardInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"WechatRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WechatRewardInfo::WechatRewardInfo() */

void __thiscall WechatRewardInfo::WechatRewardInfo(WechatRewardInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06982160;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* WechatRewardInfo::StaticNew() */

WechatRewardInfo * WechatRewardInfo::StaticNew(void)

{
  WechatRewardInfo *this;
  
  this = ::operator_new(0x20);
  WechatRewardInfo(this);
  return this;
}


/* WechatRewardInfo::~WechatRewardInfo() */

void __thiscall WechatRewardInfo::~WechatRewardInfo(WechatRewardInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06982160;
  std::vector<WechatRewardData,std::allocator<WechatRewardData>>::~vector
            ((vector<WechatRewardData,std::allocator<WechatRewardData>> *)(this + 8));
  nop();
  return;
}


/* WechatRewardInfo::~WechatRewardInfo() */

void __thiscall WechatRewardInfo::~WechatRewardInfo(WechatRewardInfo *this)

{
  ~WechatRewardInfo(this);
  AK::FreeHook(this);
  return;
}

