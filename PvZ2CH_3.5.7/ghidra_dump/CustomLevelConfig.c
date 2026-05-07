// Class: CustomLevelConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelConfig::StaticClassInit() */

void CustomLevelConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"DefaultWaveConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_035bb45c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DefaultWave");
    (*pcVar3)(plVar2,asStack_10,FUN_035c1640,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ModuleConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_035c1838,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveEventConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_035bf17c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomLevelConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_035c1ca4,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelConfig::StaticGetClass() */

long * CustomLevelConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelConfig::GetClass() const */

long * CustomLevelConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelConfig::CustomLevelConfig() */

void __thiscall CustomLevelConfig::CustomLevelConfig(CustomLevelConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0665e270;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  return;
}


/* CustomLevelConfig::StaticNew() */

CustomLevelConfig * CustomLevelConfig::StaticNew(void)

{
  CustomLevelConfig *this;
  
  this = ::operator_new(0xa0);
  CustomLevelConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelConfig::GetCommonConfigValue(std::string const&, float) const */

void __thiscall
CustomLevelConfig::GetCommonConfigValue(CustomLevelConfig *this,string *param_1,float param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 in_register_00005004;
  ulong uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = CONCAT44(in_register_00005004,param_2);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
             ::find((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                     *)(this + 0x10),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = (ulong)*(uint *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* CustomLevelConfig::GetEventConfigValue(WaveEventConfig const&, std::string const&, float) const
    */

void CustomLevelConfig::GetEventConfigValue(WaveEventConfig *param_1,string *param_2,float param_3)

{
  FUN_035c4dbc();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelConfig::GetDefaultModuleConfigByWorld(std::string const&) const */

void __thiscall
CustomLevelConfig::GetDefaultModuleConfigByWorld(CustomLevelConfig *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
             ::find((map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
                     *)(this + 0x40),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x40));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelConfig::GetWaveEventConfigByType(std::string const&) const */

void __thiscall CustomLevelConfig::GetWaveEventConfigByType(CustomLevelConfig *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
             ::find((map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
                     *)(this + 0x70),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x70));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    puVar3 = (undefined *)(lVar2 + 8);
  }
  else {
    puVar3 = &DAT_06aa7388;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelConfig::GetEventConfigValue(WaveEventConfig const&, std::string const&, std::string)
   const */

void CustomLevelConfig::GetEventConfigValue
               (undefined8 param_1,undefined8 param_2_00,long param_2,undefined8 param_4,
               undefined8 param_5)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_5);
  FUN_035c569c(param_1,param_4,param_2 + 0x30,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* CustomLevelConfig::~CustomLevelConfig() */

void __thiscall CustomLevelConfig::~CustomLevelConfig(CustomLevelConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0665e270;
  std::
  map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
  ::~map((map<std::string,WaveEventConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,WaveEventConfig>>>
          *)(this + 0x70));
  std::
  map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
  ::~map((map<std::string,ModuleConfig,std::less<std::string>,std::allocator<std::pair<std::string_const,ModuleConfig>>>
          *)(this + 0x40));
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CustomLevelConfig::~CustomLevelConfig() */

void __thiscall CustomLevelConfig::~CustomLevelConfig(CustomLevelConfig *this)

{
  ~CustomLevelConfig(this);
  AK::FreeHook(this);
  return;
}


/* float CustomLevelConfig::GetWaveEventConfigValue<float>(std::string const&, std::string const&,
   float) const */

float CustomLevelConfig::GetWaveEventConfigValue<float>
                (string *param_1,string *param_2,float param_3)

{
  string *psVar1;
  float fVar2;
  
  psVar1 = (string *)GetWaveEventConfigByType((CustomLevelConfig *)param_1,param_2);
  fVar2 = (float)GetEventConfigValue((WaveEventConfig *)param_1,psVar1,param_3);
  return fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::string CustomLevelConfig::GetWaveEventConfigValue<std::string >(std::string const&,
   std::string const&, std::string) const */

void CustomLevelConfig::GetWaveEventConfigValue<std::string>
               (undefined8 param_1_00,CustomLevelConfig *param_1,string *param_2,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = GetWaveEventConfigByType(param_1,param_2);
  FUN_05475d88(asStack_10,param_5);
  GetEventConfigValue(param_1_00,param_1,uVar1,param_4,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}

