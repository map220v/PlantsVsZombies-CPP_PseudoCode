// Class: LevelModuleProperties


/* LevelModuleProperties::LevelModuleProperties() */

void __thiscall LevelModuleProperties::LevelModuleProperties(LevelModuleProperties *this)

{
  _func_void *extraout_x1;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0678d640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x28),extraout_x1);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  return;
}


/* LevelModuleProperties::~LevelModuleProperties() */

void __thiscall LevelModuleProperties::~LevelModuleProperties(LevelModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d640;
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  Sexy::RtId::~RtId((RtId *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelModuleProperties::~LevelModuleProperties() */

void __thiscall LevelModuleProperties::~LevelModuleProperties(LevelModuleProperties *this)

{
  ~LevelModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleProperties::StaticClassInit() */

void LevelModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e707cc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelModuleProperties::StaticGetClass() */

long * LevelModuleProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleProperties::GetClass() const */

long * LevelModuleProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModuleProperties::StaticNew() */

LevelModuleProperties * LevelModuleProperties::StaticNew(void)

{
  LevelModuleProperties *this;
  
  this = ::operator_new(0x40);
  LevelModuleProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleProperties::GatherDifficultyProps(std::vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,
   std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps> > >&,
   std::vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,
   std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps> > >&, bool) const */

void LevelModuleProperties::GatherDifficultyProps(vector *param_1,vector *param_2,bool param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(param_1 + 0x28));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
  if (cVar1 != '\0') {
    std::
    vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps>>>
                 *)param_2,(RtWeakPtr *)aRStack_20);
    GameObject::Create<LevelModuleDifficultyUIProps>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    (**(code **)(*(long *)param_1 + 0x88))(aRStack_10,param_1);
    FUN_054766c8(lVar2 + 0x10,aRStack_10);
    FUN_05476c50(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    (**(code **)(*(long *)param_1 + 0x90))(aRStack_10,param_1);
    FUN_054766c8(lVar2 + 0x18,aRStack_10);
    FUN_05476c50(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    thunk_FUN_05475e00(lVar2 + 0x20,param_1 + 0x30);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    thunk_FUN_05475e00(lVar2 + 0x28,param_1 + 0x38);
    std::
    vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>>>
                 *)(ulong)param_3,(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModuleProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
LevelModuleProperties::GatherResourceRequirements(LevelModuleProperties *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  ResourceManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

