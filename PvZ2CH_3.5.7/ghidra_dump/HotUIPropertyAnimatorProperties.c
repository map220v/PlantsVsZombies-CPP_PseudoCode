// Class: HotUIPropertyAnimatorProperties


/* HotUIPropertyAnimatorProperties::GetComponentClass() const */

long * HotUIPropertyAnimatorProperties::GetComponentClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIPropertyAnimator::sClass != (long *)0x0) {
    return HotUIPropertyAnimator::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIPropertyAnimator::sClass = plVar1;
  uVar2 = HotUIComponent::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPropertyAnimator",uVar2,HotUIPropertyAnimator::StaticNew);
  HotUIPropertyAnimator::StaticClassInit();
  return HotUIPropertyAnimator::sClass;
}


/* HotUIPropertyAnimatorProperties::HotUIPropertyAnimatorProperties() */

void __thiscall
HotUIPropertyAnimatorProperties::HotUIPropertyAnimatorProperties
          (HotUIPropertyAnimatorProperties *this)

{
  HotUIComponentProperties::HotUIComponentProperties((HotUIComponentProperties *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined ***)this = &PTR_GetClass_06670840;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x38));
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x48));
  return;
}


/* HotUIPropertyAnimatorProperties::StaticNew() */

HotUIPropertyAnimatorProperties * HotUIPropertyAnimatorProperties::StaticNew(void)

{
  HotUIPropertyAnimatorProperties *this;
  
  this = ::operator_new(0x58);
  HotUIPropertyAnimatorProperties(this);
  return this;
}


/* HotUIPropertyAnimatorProperties::~HotUIPropertyAnimatorProperties() */

void __thiscall
HotUIPropertyAnimatorProperties::~HotUIPropertyAnimatorProperties
          (HotUIPropertyAnimatorProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06670840;
  HotUIComponentProperties::~HotUIComponentProperties((HotUIComponentProperties *)this);
  return;
}


/* HotUIPropertyAnimatorProperties::~HotUIPropertyAnimatorProperties() */

void __thiscall
HotUIPropertyAnimatorProperties::~HotUIPropertyAnimatorProperties
          (HotUIPropertyAnimatorProperties *this)

{
  ~HotUIPropertyAnimatorProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPropertyAnimatorProperties::StaticClassInit() */

void HotUIPropertyAnimatorProperties::StaticClassInit(void)

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
            (apStack_30,"widgetx",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"widgety",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"PropertyAnimatorTarget");
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
    std::string::string((string *)avStack_20,"PropertyAnimatorCurveParams");
    (*pcVar3)(plVar2,avStack_20,FUN_0364a314,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"HotUIPropertyAnimatorProperties");
    (*pcVar3)(plVar2,avStack_20,FUN_0364ad94,0x58,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPropertyAnimatorProperties::StaticGetClass() */

long * HotUIPropertyAnimatorProperties::StaticGetClass(void)

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
  uVar2 = HotUIComponentProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPropertyAnimatorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPropertyAnimatorProperties::GetClass() const */

long * HotUIPropertyAnimatorProperties::GetClass(void)

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
  uVar2 = HotUIComponentProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPropertyAnimatorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

