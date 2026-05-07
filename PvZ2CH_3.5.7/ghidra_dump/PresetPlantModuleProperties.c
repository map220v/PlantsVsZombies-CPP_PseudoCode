// Class: PresetPlantModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresetPlantModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PresetPlantModuleProperties::GatherResourceRequirements
          (PresetPlantModuleProperties *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  ResourceManager *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = FUN_03e70a98(*(undefined8 *)(this + 0x10));
  uVar2 = FUN_03e70ae8(*(undefined8 *)(this + 0x18));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar1,
             uVar2);
  lVar3 = (**(code **)(*(long *)this + 0x80))(this);
  __s = (char *)FUN_03e6f95c(*(undefined8 *)(lVar3 + 8));
  this_00 = *(ResourceManager **)(gLawnApp + 0x848);
  std::string::string(asStack_10,__s);
  lVar3 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar3 != 0) {
    std::string::string(asStack_10,__s);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresetPlantModuleProperties::GetModuleClass() const */

long * PresetPlantModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PresetPlantModule::sClass != (long *)0x0) {
    return PresetPlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PresetPlantModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PresetPlantModule",uVar2,PresetPlantModule::StaticNew);
  PresetPlantModule::StaticClassInit();
  return PresetPlantModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresetPlantModuleProperties::StaticClassInit() */

void PresetPlantModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PresetPlantModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04df4a84,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresetPlantModuleProperties::StaticGetClass() */

long * PresetPlantModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PresetPlantModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresetPlantModuleProperties::GetClass() const */

long * PresetPlantModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PresetPlantModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PresetPlantModuleProperties::PresetPlantModuleProperties() */

void __thiscall
PresetPlantModuleProperties::PresetPlantModuleProperties(PresetPlantModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069cfa10;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  return;
}


/* PresetPlantModuleProperties::StaticNew() */

PresetPlantModuleProperties * PresetPlantModuleProperties::StaticNew(void)

{
  PresetPlantModuleProperties *this;
  
  this = ::operator_new(0x70);
  PresetPlantModuleProperties(this);
  return this;
}


/* PresetPlantModuleProperties::~PresetPlantModuleProperties() */

void __thiscall
PresetPlantModuleProperties::~PresetPlantModuleProperties(PresetPlantModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069cfa10;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PresetPlantModuleProperties::~PresetPlantModuleProperties() */

void __thiscall
PresetPlantModuleProperties::~PresetPlantModuleProperties(PresetPlantModuleProperties *this)

{
  ~PresetPlantModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresetPlantModuleProperties::IsPlant(std::string) */

void __thiscall
PresetPlantModuleProperties::IsPlant(PresetPlantModuleProperties *this,string *param_2)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(this + 0x40),param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x40));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresetPlantModuleProperties::GetPlantLevel(std::string) */

void __thiscall
PresetPlantModuleProperties::GetPlantLevel(PresetPlantModuleProperties *this,string *param_2)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find(this_00,param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar2 = 1;
  if (bVar1) {
    puVar3 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[](this_00,param_2);
    uVar2 = *puVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

