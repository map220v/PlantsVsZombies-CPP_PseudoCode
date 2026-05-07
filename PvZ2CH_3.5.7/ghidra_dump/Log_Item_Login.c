// Class: Log_Item_Login


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Item_Login::getTableName() */

void __thiscall Log_Item_Login::getTableName(Log_Item_Login *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Item_Login");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_Item_Login::Log_Item_Login() */

void __thiscall Log_Item_Login::Log_Item_Login(Log_Item_Login *this)

{
  Log_Register::Log_Register((Log_Register *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26da0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Item_Login::getItems(std::string const&, DValue&) */

void __thiscall Log_Item_Login::getItems(Log_Item_Login *this,string *param_1,DValue *param_2)

{
  char cVar1;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04fa5918(*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
               *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
    std::string::string(asStack_10,"Item");
    this_01 = (DValue *)
              std::
              unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
              ::operator[](this_00,asStack_10);
    ::DValue::operator=(this_01,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

