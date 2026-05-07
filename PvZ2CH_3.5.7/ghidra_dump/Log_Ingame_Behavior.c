// Class: Log_Ingame_Behavior


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Ingame_Behavior::getTableName() */

void __thiscall Log_Ingame_Behavior::getTableName(Log_Ingame_Behavior *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Ingame_Behavior");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Log_Ingame_Behavior::Log_Ingame_Behavior() */

void __thiscall Log_Ingame_Behavior::Log_Ingame_Behavior(Log_Ingame_Behavior *this)

{
  Log_Register::Log_Register((Log_Register *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26e20;
  return;
}


/* Log_Ingame_Behavior::getBasicInfo(DValue&) */

Log_Ingame_Behavior * __thiscall
Log_Ingame_Behavior::getBasicInfo(Log_Ingame_Behavior *this,DValue *param_1)

{
  Log_Register::getBasicInfo((Log_Register *)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_Ingame_Behavior::getBehaviorInfo(std::string const&, std::vector<std::string,
   std::allocator<std::string > > const&, DValue&) */

void __thiscall
Log_Ingame_Behavior::getBehaviorInfo
          (Log_Ingame_Behavior *this,string *param_1,vector *param_2,DValue *param_3)

{
  uint uVar1;
  bool bVar2;
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  *this_00;
  DValue *pDVar3;
  string *psVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_3);
  std::string::string(asStack_18,"Behavior_ID");
  pDVar3 = (DValue *)
           std::
           unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
           ::operator[](this_00,asStack_18);
  ::DValue::operator=(pDVar3,param_1);
  std::string::~string(asStack_18);
  nop();
  local_30 = FUN_04fa6834(*(undefined8 *)param_2);
  local_28 = FUN_04fa6884(*(undefined8 *)(param_2 + 8));
  uVar6 = 1;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    DString::DString((DString *)asStack_18);
    DString::format((char *)asStack_18,&DAT_0569f6e8,uVar6);
    pcVar5 = (char *)DString::c_str((DString *)asStack_18);
    std::string::string(asStack_20,pcVar5);
    pDVar3 = (DValue *)
             std::
             unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
             ::operator[](this_00,asStack_20);
    ::DValue::operator=(pDVar3,psVar4);
    std::string::~string(asStack_20);
    nop();
    DString::~DString((DString *)asStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  if ((int)uVar6 < 5) {
    do {
      DString::DString((DString *)asStack_18);
      uVar1 = (int)uVar6 + 1;
      DString::format((char *)asStack_18,&DAT_0569f6e8,uVar6);
      pcVar5 = (char *)DString::c_str((DString *)asStack_18);
      std::string::string(asStack_20,pcVar5);
      pDVar3 = (DValue *)
               std::
               unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
               ::operator[](this_00,asStack_20);
      ::DValue::operator=(pDVar3,"");
      std::string::~string(asStack_20);
      nop();
      DString::~DString((DString *)asStack_18);
      uVar6 = (ulong)uVar1;
    } while (uVar1 != 5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

