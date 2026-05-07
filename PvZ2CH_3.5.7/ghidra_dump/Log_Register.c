// Class: Log_Register


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Register::getTableName() */

void __thiscall Log_Register::getTableName(Log_Register *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Register");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_Register::Log_Register() */

void __thiscall Log_Register::Log_Register(Log_Register *this)

{
  PublicBasicInfo::PublicBasicInfo((PublicBasicInfo *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26d70;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Register::getBasicInfo(DValue&) */

void __thiscall Log_Register::getBasicInfo(Log_Register *this,DValue *param_1)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PublicBasicInfo::getBasicInfo((PublicBasicInfo *)this,param_1);
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
  std::string::string(asStack_18,"Server_ID");
  this_01 = (DValue *)
            std::
            unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
            ::operator[](this_00,asStack_18);
  PublicBasicInfo::getPublicIP((PublicBasicInfo *)this);
  ::DValue::operator=(this_01,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Register::getBehavior(DValue&) */

void __thiscall Log_Register::getBehavior(Log_Register *this,DValue *param_1)

{
  char cVar1;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04fa5918(*(undefined4 *)(param_1 + 8));
  if (cVar1 != '\0') {
    this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    std::string::string(asStack_18,"OS_Version");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getOSVersion((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Device_Model");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getDeviceModel((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

