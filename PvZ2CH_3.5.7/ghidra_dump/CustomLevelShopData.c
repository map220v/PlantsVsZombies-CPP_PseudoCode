// Class: CustomLevelShopData


/* CustomLevelShopData::CustomLevelShopData(CustomLevelShopData const&) */

void __thiscall
CustomLevelShopData::CustomLevelShopData(CustomLevelShopData *this,CustomLevelShopData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069c6880;
  *(undefined ***)(this + 8) = &PTR__CustomLevelShopData_069c68e8;
  std::vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>>::vector
            ((vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  ConstraintConfig::ConstraintConfig
            ((ConstraintConfig *)(this + 0x38),(ConstraintConfig *)(param_1 + 0x38));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x98),
             (vector *)(param_1 + 0x98));
  return;
}


/* CustomLevelShopData::~CustomLevelShopData() */

void __thiscall CustomLevelShopData::~CustomLevelShopData(CustomLevelShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_069c6880;
  *(undefined ***)(this + 8) = &PTR__CustomLevelShopData_069c68e8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x98));
  ConstraintConfig::~ConstraintConfig((ConstraintConfig *)(this + 0x38));
  std::vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>>::~vector
            ((vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomLevelShopData::~CustomLevelShopData() */

void __thiscall CustomLevelShopData::~CustomLevelShopData(CustomLevelShopData *this)

{
  ~CustomLevelShopData(this + -8);
  return;
}


/* CustomLevelShopData::~CustomLevelShopData() */

void __thiscall CustomLevelShopData::~CustomLevelShopData(CustomLevelShopData *this)

{
  ~CustomLevelShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelShopData::~CustomLevelShopData() */

void __thiscall CustomLevelShopData::~CustomLevelShopData(CustomLevelShopData *this)

{
  ~CustomLevelShopData(this + -8);
  return;
}


/* CustomLevelShopData::CustomLevelShopData() */

void __thiscall CustomLevelShopData::CustomLevelShopData(CustomLevelShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c6880;
  *(undefined ***)(this + 8) = &PTR__CustomLevelShopData_069c68e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::PopLoc::PopLoc((PopLoc *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopData::StaticClassInit() */

void CustomLevelShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelShopItemDData");
    (*pcVar3)(plVar2,asStack_10,FUN_04dd3304,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConstraintConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_04dd56fc,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomLevelShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04dd58f8,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelShopData::StaticGetClass() */

long * CustomLevelShopData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomLevelShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelShopData::GetClass() const */

long * CustomLevelShopData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomLevelShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelShopData::StaticNew() */

CustomLevelShopData * CustomLevelShopData::StaticNew(void)

{
  CustomLevelShopData *this;
  
  this = ::operator_new(0xb0);
  CustomLevelShopData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopData::GetConstraintValue(std::string const&, float) const */

void __thiscall
CustomLevelShopData::GetConstraintValue(CustomLevelShopData *this,string *param_1,float param_2)

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
                     *)(this + 0x68),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x68));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelShopData::GetConstraintValue(std::string const&) const */

void CustomLevelShopData::GetConstraintValue(string *param_1)

{
  bool bVar1;
  long lVar2;
  string *in_x1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
             ::find((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                     *)(param_1 + 0x38),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x38));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)(lVar2 + 8));
  }
  else {
    std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)&DAT_06b9acf8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelShopData::TEMPNAMEPLACEHOLDERVALUE(CustomLevelShopData const&) */

CustomLevelShopData * __thiscall
CustomLevelShopData::operator=(CustomLevelShopData *this,CustomLevelShopData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>>::operator=
            ((vector<CustomLevelShopItemDData,std::allocator<CustomLevelShopItemDData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  ConstraintConfig::operator=
            ((ConstraintConfig *)(this + 0x38),(ConstraintConfig *)(param_1 + 0x38));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x98),
             (vector *)(param_1 + 0x98));
  return this;
}

