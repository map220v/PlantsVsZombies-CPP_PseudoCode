// Class: CollectablePlantfood


/* CollectablePlantfood::~CollectablePlantfood() */

void __thiscall CollectablePlantfood::~CollectablePlantfood(CollectablePlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_067556d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantfood_06755920;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectablePlantfood::~CollectablePlantfood() */

void __thiscall CollectablePlantfood::~CollectablePlantfood(CollectablePlantfood *this)

{
  ~CollectablePlantfood(this + -0x10);
  return;
}


/* CollectablePlantfood::~CollectablePlantfood() */

void __thiscall CollectablePlantfood::~CollectablePlantfood(CollectablePlantfood *this)

{
  ~CollectablePlantfood(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectablePlantfood::~CollectablePlantfood() */

void __thiscall CollectablePlantfood::~CollectablePlantfood(CollectablePlantfood *this)

{
  ~CollectablePlantfood(this + -0x10);
  return;
}


/* CollectablePlantfood::CollectablePlantfood() */

void __thiscall CollectablePlantfood::CollectablePlantfood(CollectablePlantfood *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR_GetClass_067556d0;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantfood_06755920;
  return;
}


/* CollectablePlantfood::StaticNew() */

CollectablePlantfood * CollectablePlantfood::StaticNew(void)

{
  CollectablePlantfood *this;
  
  this = ::operator_new(0x1f8);
  CollectablePlantfood(this);
  return this;
}


/* CollectablePlantfood::StartCaptureEffect(std::string) */

void CollectablePlantfood::StartCaptureEffect(Collectable *param_1)

{
  Collectable::SetMotionIdle(param_1);
  Collectable::SetNeverExpire(param_1,true);
  return;
}


/* CollectablePlantfood::StopCaptureEffect() */

void __thiscall CollectablePlantfood::StopCaptureEffect(CollectablePlantfood *this)

{
  char cVar1;
  
  cVar1 = Collectable::IsCollecting((Collectable *)this);
  if (cVar1 != '\0') {
    return;
  }
  Collectable::SetNeverExpire((Collectable *)this,false);
  NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantfood::StaticClassInit() */

void CollectablePlantfood::StaticClassInit(void)

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
            (apStack_30,"pf_basic",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"pf_spaceTime",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"PlantfoodCategory");
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
    std::string::string((string *)avStack_20,"CollectablePlantfood");
    (*pcVar3)(plVar2,avStack_20,FUN_03c643f4,0x1f8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePlantfood::StaticGetClass() */

long * CollectablePlantfood::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePlantfood::GetClass() const */

long * CollectablePlantfood::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantfood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

