// Class: PlantingRestrictionSet


/* PlantingRestrictionSet::PlantingRestrictionSet() */

void __thiscall PlantingRestrictionSet::PlantingRestrictionSet(PlantingRestrictionSet *this)

{
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_06916a20;
  return;
}


/* PlantingRestrictionSet::~PlantingRestrictionSet() */

void __thiscall PlantingRestrictionSet::~PlantingRestrictionSet(PlantingRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_06916a20;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)this);
  return;
}


/* PlantingRestrictionSet::~PlantingRestrictionSet() */

void __thiscall PlantingRestrictionSet::~PlantingRestrictionSet(PlantingRestrictionSet *this)

{
  ~PlantingRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* PlantingRestrictionSet::StaticNew() */

PlantingRestrictionSet * PlantingRestrictionSet::StaticNew(void)

{
  PlantingRestrictionSet *this;
  
  this = ::operator_new(0x30);
  PlantingRestrictionSet(this);
  return this;
}


/* PlantingRestrictionSet::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
PlantingRestrictionSet::GatherPlantingRestrictions
          (PlantingRestrictionSet *this,PlantType *param_1,vector *param_2)

{
  char cVar1;
  
  cVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)this,(string *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantingRestrictionSet::StaticClassInit() */

void PlantingRestrictionSet::StaticClassInit(void)

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
  local_38[0] = 0x13;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PLANTING_NOT_ON_ICEBLOCKS",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0x19;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PLANTING_NOT_ON_ARCADE_MACHINE",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"PlantingReason");
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
    std::string::string((string *)avStack_20,"PlantingRestrictionSet");
    (*pcVar3)(plVar2,avStack_20,FUN_0496ebfc,0x30,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantingRestrictionSet::StaticGetClass() */

long * PlantingRestrictionSet::StaticGetClass(void)

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
  uVar2 = PlantRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantingRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantingRestrictionSet::GetClass() const */

long * PlantingRestrictionSet::GetClass(void)

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
  uVar2 = PlantRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantingRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

