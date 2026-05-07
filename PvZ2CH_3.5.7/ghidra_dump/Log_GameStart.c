// Class: Log_GameStart


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart::getTableName() */

void __thiscall Log_GameStart::getTableName(Log_GameStart *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"GameStart");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_GameStart::Log_GameStart() */

void __thiscall Log_GameStart::Log_GameStart(Log_GameStart *this)

{
  PublicBasicInfo::PublicBasicInfo((PublicBasicInfo *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26cf0;
  return;
}


/* Log_GameStart::getBasicInfo(DValue&) */

Log_GameStart * __thiscall Log_GameStart::getBasicInfo(Log_GameStart *this,DValue *param_1)

{
  PublicBasicInfo::getBasicInfo((PublicBasicInfo *)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart::getBehavior(DValue&) */

void __thiscall Log_GameStart::getBehavior(Log_GameStart *this,DValue *param_1)

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
    std::string::string(asStack_10,"Behavior_ID");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_10);
    ::DValue::operator=(pDVar2,"GameStart");
    std::string::~string(asStack_10);
    nop();
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
    std::string::string(asStack_18,"Connect_type");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getConnectType((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Local_IP");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getPublicIP((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Public_IP");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getPublicIP((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"CPU");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getCPU((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"GPU_Model");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getGPUModel((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Resolution_of_Screen");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getResolutionOfScreen((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Memory");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getMemory((PublicBasicInfo *)this);
    ::DValue::operator=(pDVar2,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"Storage");
    pDVar2 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    PublicBasicInfo::getStorage((PublicBasicInfo *)this);
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

