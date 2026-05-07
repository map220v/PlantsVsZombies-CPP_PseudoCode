// Class: Log_Recharge


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Recharge::getTableName() */

void __thiscall Log_Recharge::getTableName(Log_Recharge *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Recharge_Info");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_Recharge::Log_Recharge() */

void __thiscall Log_Recharge::Log_Recharge(Log_Recharge *this)

{
  Log_Register::Log_Register((Log_Register *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26de0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Recharge::getRechargeInfo(RechargeInfo const&, DValue&) */

void __thiscall
Log_Recharge::getRechargeInfo(Log_Recharge *this,RechargeInfo *param_1,DValue *param_2)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  std::string::string(asStack_10,"Pay_SN");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 8));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Is_success");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(uint)(byte)*param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SKU_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 0x10));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Unit_price");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 0x18));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Pay_Source");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 0x20));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Platform");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 0x28));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Return_code");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,(string *)(param_1 + 0x30));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Level");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,*(int *)(param_1 + 0x38));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"VIP_level_before");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,*(int *)(param_1 + 0x3c));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"VIP_level_after");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,*(int *)(param_1 + 0x40));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

