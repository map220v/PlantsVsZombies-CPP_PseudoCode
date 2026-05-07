// Class: NetworkAchievementItem


/* NetworkAchievementItem::NetworkAchievementItem() */

void __thiscall NetworkAchievementItem::NetworkAchievementItem(NetworkAchievementItem *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068030e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Set8BytesTo0(this + 0x38);
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* NetworkAchievementItem::~NetworkAchievementItem() */

void __thiscall NetworkAchievementItem::~NetworkAchievementItem(NetworkAchievementItem *this)

{
  *(undefined ***)this = &PTR_GetClass_068030e0;
  std::string::~string((string *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<NetworkRewardContent,std::allocator<NetworkRewardContent>>::~vector
            ((vector<NetworkRewardContent,std::allocator<NetworkRewardContent>> *)(this + 8));
  nop();
  return;
}


/* NetworkAchievementItem::~NetworkAchievementItem() */

void __thiscall NetworkAchievementItem::~NetworkAchievementItem(NetworkAchievementItem *this)

{
  ~NetworkAchievementItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkAchievementItem::StaticClassInit() */

void NetworkAchievementItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRewardContent");
    (*pcVar3)(plVar2,asStack_10,FUN_041d8b78,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkAchievementItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041da870,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkAchievementItem::StaticGetClass() */

long * NetworkAchievementItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkAchievementItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkAchievementItem::GetClass() const */

long * NetworkAchievementItem::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkAchievementItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkAchievementItem::StaticNew() */

NetworkAchievementItem * NetworkAchievementItem::StaticNew(void)

{
  NetworkAchievementItem *this;
  
  this = ::operator_new(0x48);
  NetworkAchievementItem(this);
  return this;
}

