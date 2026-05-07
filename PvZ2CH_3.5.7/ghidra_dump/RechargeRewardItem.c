// Class: RechargeRewardItem


/* RechargeRewardItem::RechargeRewardItem() */

void __thiscall RechargeRewardItem::RechargeRewardItem(RechargeRewardItem *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0692a430;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* RechargeRewardItem::~RechargeRewardItem() */

void __thiscall RechargeRewardItem::~RechargeRewardItem(RechargeRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0692a430;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  nop();
  return;
}


/* RechargeRewardItem::~RechargeRewardItem() */

void __thiscall RechargeRewardItem::~RechargeRewardItem(RechargeRewardItem *this)

{
  ~RechargeRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardItem::StaticClassInit() */

void RechargeRewardItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"RechargeRewardItem");
    (*pcVar2)(plVar1,asStack_10,FUN_049e3d04,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardItem::StaticGetClass() */

long * RechargeRewardItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeRewardItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeRewardItem::GetClass() const */

long * RechargeRewardItem::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeRewardItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeRewardItem::StaticNew() */

RechargeRewardItem * RechargeRewardItem::StaticNew(void)

{
  RechargeRewardItem *this;
  
  this = ::operator_new(0x28);
  RechargeRewardItem(this);
  return this;
}

