// Class: StringRestrictionSet


/* StringRestrictionSet::StringRestrictionSet() */

void __thiscall StringRestrictionSet::StringRestrictionSet(StringRestrictionSet *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_06916960;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* StringRestrictionSet::~StringRestrictionSet() */

void __thiscall StringRestrictionSet::~StringRestrictionSet(StringRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_06916960;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  nop();
  return;
}


/* StringRestrictionSet::~StringRestrictionSet() */

void __thiscall StringRestrictionSet::~StringRestrictionSet(StringRestrictionSet *this)

{
  ~StringRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* StringRestrictionSet::StringRestrictionSet(StringRestrictionSet&&) */

void __thiscall
StringRestrictionSet::StringRestrictionSet(StringRestrictionSet *this,StringRestrictionSet *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_06916960;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* StringRestrictionSet::StringRestrictionSet(StringRestrictionSet const&) */

void __thiscall
StringRestrictionSet::StringRestrictionSet(StringRestrictionSet *this,StringRestrictionSet *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_06916960;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* StringRestrictionSet::TEMPNAMEPLACEHOLDERVALUE(StringRestrictionSet const&) */

StringRestrictionSet * __thiscall
StringRestrictionSet::operator=(StringRestrictionSet *this,StringRestrictionSet *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* StringRestrictionSet::StaticNew() */

StringRestrictionSet * StringRestrictionSet::StaticNew(void)

{
  StringRestrictionSet *this;
  
  this = ::operator_new(0x28);
  StringRestrictionSet(this);
  return this;
}


/* StringRestrictionSet::IsIncluded(std::string const&) const */

void __thiscall StringRestrictionSet::IsIncluded(StringRestrictionSet *this,string *param_1)

{
  FUN_0496dbec(param_1,this + 0x10,this + 8);
  return;
}


/* StringRestrictionSet::IsExcluded(std::string const&) const */

byte __thiscall StringRestrictionSet::IsExcluded(StringRestrictionSet *this,string *param_1)

{
  byte bVar1;
  
  bVar1 = IsIncluded(this,param_1);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringRestrictionSet::StaticClassInit() */

void StringRestrictionSet::StaticClassInit(void)

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
            (apStack_30,"blacklist",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"whitelist",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"RestrictionSetType");
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
    std::string::string((string *)avStack_20,"StringRestrictionSet");
    (*pcVar3)(plVar2,avStack_20,FUN_0496e30c,0x28,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StringRestrictionSet::StaticGetClass() */

long * StringRestrictionSet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StringRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StringRestrictionSet::GetClass() const */

long * StringRestrictionSet::GetClass(void)

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
  (*pcVar3)(plVar1,"StringRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

