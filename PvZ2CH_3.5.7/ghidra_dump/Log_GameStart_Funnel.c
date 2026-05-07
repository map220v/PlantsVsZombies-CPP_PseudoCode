// Class: Log_GameStart_Funnel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart_Funnel::getTableName() */

void __thiscall Log_GameStart_Funnel::getTableName(Log_GameStart_Funnel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"GameStart_Funnel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_GameStart_Funnel::Log_GameStart_Funnel() */

void __thiscall Log_GameStart_Funnel::Log_GameStart_Funnel(Log_GameStart_Funnel *this)

{
  PublicBasicInfo::PublicBasicInfo((PublicBasicInfo *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26d20;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart_Funnel::funnel(std::string const&, DValue&) */

void __thiscall
Log_GameStart_Funnel::funnel(Log_GameStart_Funnel *this,string *param_1,DValue *param_2)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (*(code *)**(undefined8 **)this)(this,param_2);
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  std::string::string(asStack_10,"Behavior_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Duration_Time");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart_Funnel::funnelStart(std::string const&, DValue&) */

void __thiscall
Log_GameStart_Funnel::funnelStart(Log_GameStart_Funnel *this,string *param_1,DValue *param_2)

{
  long lVar1;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (*(code *)**(undefined8 **)this)(this,param_2);
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  std::string::string(asStack_18,"Behavior_ID");
  pDVar2 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_18);
  std::operator+(param_1,"_start");
  ::DValue::operator=(pDVar2,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_10,"Duration_Time");
  pDVar2 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar2,0);
  std::string::~string(asStack_10);
  nop();
  uVar3 = FUN_04fa5894();
  puVar4 = (undefined8 *)
           std::
           unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
           ::operator[]((unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                         *)s_startTimeMap,param_1);
  lVar1 = ___stack_chk_guard;
  *puVar4 = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart_Funnel::funnelEnd(std::string const&, DValue&) */

void __thiscall
Log_GameStart_Funnel::funnelEnd(Log_GameStart_Funnel *this,string *param_1,DValue *param_2)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (*(code *)**(undefined8 **)this)(this,param_2);
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  std::string::string(asStack_18,"Behavior_ID");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_18);
  std::operator+(param_1,"_end");
  ::DValue::operator=(pDVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  lVar2 = FUN_04fa5894();
  plVar3 = (long *)std::
                   unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                   ::operator[]((unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                 *)s_startTimeMap,param_1);
  lVar4 = *plVar3;
  std::string::string(asStack_10,"Duration_Time");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,lVar2 - lVar4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_GameStart_Funnel::funnelEnd(std::string const&, DValue&, bool) */

void __thiscall
Log_GameStart_Funnel::funnelEnd
          (Log_GameStart_Funnel *this,string *param_1,DValue *param_2,bool param_3)

{
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (*(code *)**(undefined8 **)this)(this,param_2);
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  if (param_3) {
    std::string::string(asStack_18,"Behavior_ID");
    pDVar1 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    pcVar4 = "_end_succeed";
  }
  else {
    std::string::string(asStack_18,"Behavior_ID");
    pDVar1 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_18);
    pcVar4 = "_end_failed";
  }
  std::operator+(param_1,pcVar4);
  ::DValue::operator=(pDVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  lVar2 = FUN_04fa5894();
  plVar3 = (long *)std::
                   unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                   ::operator[]((unordered_map<std::string,unsigned_long,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                                 *)s_startTimeMap,param_1);
  lVar5 = *plVar3;
  std::string::string(asStack_10,"Duration_Time");
  pDVar1 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_10);
  ::DValue::operator=(pDVar1,lVar2 - lVar5);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

