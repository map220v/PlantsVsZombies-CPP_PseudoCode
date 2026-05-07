// Class: GlacierModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModuleProperties::StaticClassInit() */

void GlacierModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"GlacierModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0bc74,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GlacierModuleProperties::StaticGetClass() */

long * GlacierModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GlacierModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GlacierModuleProperties::GetClass() const */

long * GlacierModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"GlacierModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GlacierModuleProperties::GetModuleClass() const */

long * GlacierModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GlacierModule::sClass != (long *)0x0) {
    return GlacierModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GlacierModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"GlacierModule",uVar2,GlacierModule::StaticNew);
  GlacierModule::StaticClassInit();
  return GlacierModule::sClass;
}


/* GlacierModuleProperties::GlacierModuleProperties() */

void __thiscall GlacierModuleProperties::GlacierModuleProperties(GlacierModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692db80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* GlacierModuleProperties::StaticNew() */

GlacierModuleProperties * GlacierModuleProperties::StaticNew(void)

{
  GlacierModuleProperties *this;
  
  this = ::operator_new(0x58);
  GlacierModuleProperties(this);
  return this;
}


/* GlacierModuleProperties::~GlacierModuleProperties() */

void __thiscall GlacierModuleProperties::~GlacierModuleProperties(GlacierModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692db80;
  std::vector<ProbabilityTypeContainer,std::allocator<ProbabilityTypeContainer>>::~vector
            ((vector<ProbabilityTypeContainer,std::allocator<ProbabilityTypeContainer>> *)
             (this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* GlacierModuleProperties::~GlacierModuleProperties() */

void __thiscall GlacierModuleProperties::~GlacierModuleProperties(GlacierModuleProperties *this)

{
  ~GlacierModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModuleProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
GlacierModuleProperties::GatherResourceRequirements(GlacierModuleProperties *this,set *param_1)

{
  bool bVar1;
  ProbabilityTypeContainer *pPVar2;
  undefined8 *puVar3;
  long lVar4;
  ZombieType *this_00;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"FrostbiteIceBlockZombieGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_30);
  std::string::~string(asStack_30);
  nop();
  local_58 = FUN_04a0b70c(*(undefined8 *)(this + 0x40));
  local_50 = FUN_04a0b75c(*(undefined8 *)(this + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar1) {
    do {
      pPVar2 = (ProbabilityTypeContainer *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      ProbabilityTypeContainer::ProbabilityTypeContainer
                ((ProbabilityTypeContainer *)asStack_30,pPVar2);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)asStack_30);
      local_48 = FUN_04a0b63c(*puVar3);
      local_40 = FUN_04a0b68c(puVar3[1]);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar1) {
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        bVar1 = std::operator!=((string *)(lVar4 + 0x10),"");
        if (bVar1) {
          Board::GetZombieType(*(string **)(gLawnApp + 0x9f0));
          this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          ZombieType::AddInGameResourceRequirements(this_00,param_1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
      }
      ProbabilityTypeContainer::~ProbabilityTypeContainer((ProbabilityTypeContainer *)asStack_30);
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_58);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar1);
  }
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

