// Class: LogDBInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogDBInfo::LogDBInfo() */

void __thiscall LogDBInfo::LogDBInfo(LogDBInfo *this)

{
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__LogDBInfo_06a26eb0;
  std::
  unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
  ::unordered_map((ulong)(this + 8),(hash *)0xa,aeStack_20,aaStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogDBInfo::sendMsg(std::string const&, DValue const&) */

void __thiscall LogDBInfo::sendMsg(LogDBInfo *this,string *param_1,DValue *param_2)

{
  exception_ptr *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  LogServer *this_01;
  unordered_map *puVar4;
  long lVar5;
  DString *this_02;
  char *__s;
  pair *ppVar6;
  undefined8 uVar7;
  vector *pvVar8;
  DValue *pDVar9;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  string asStack_208 [8];
  undefined4 local_200 [6];
  unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
  auStack_1e8 [56];
  undefined8 local_1b0 [7];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04faa8cc(*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    local_238 = std::
                unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
                ::find((unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
                        *)(this + 8),param_1);
    local_1b0[0] = FUN_04faac98();
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_238,(rbtree_iterator *)local_1b0);
    if (bVar2) {
      this_01 = (LogServer *)LogServer::Instance();
      FUN_05475d88((string *)local_1b0,param_1);
      LogServer::AppendMsg(this_01,(string *)local_1b0);
      std::string::~string((string *)local_1b0);
      puVar4 = (unordered_map *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::unordered_map(auStack_1e8,puVar4);
      lVar5 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::operator*
                        ((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_238);
      local_230 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar5 + 8));
      local_228 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar5 + 8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_230,(__normal_iterator *)&local_228)
      ;
      if (bVar2) {
        do {
          this_02 = (DString *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_230);
          __s = (char *)DString::c_str(this_02);
          std::string::string((string *)local_1b0,__s);
          local_220 = std::
                      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                      ::find(auStack_1e8,(string *)local_1b0);
          std::string::~string((string *)local_1b0);
          nop();
          local_1b0[0] = FUN_04faacf8();
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_220,(rbtree_iterator *)local_1b0);
          if (bVar2) {
            lVar5 = std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                    operator*((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_220)
            ;
            this_00 = (exception_ptr *)(lVar5 + 8);
            uVar3 = *(undefined4 *)(lVar5 + 0x10);
            cVar1 = FUN_04faa8c0(uVar3);
            if (cVar1 == '\0') {
              cVar1 = FUN_04faa8cc(uVar3);
              if (cVar1 == '\0') {
                cVar1 = FUN_04faa8d8(uVar3);
                if (cVar1 == '\0') {
                  ::DValue::asString();
                  LogServer::AppendMsg(this_01,(string *)local_1b0);
                  std::string::~string((string *)local_1b0);
                }
                else {
                  uVar3 = operator|(0x10,8);
                  FUN_05462470(auStack_178,uVar3);
                  std::string::string((string *)local_1b0,"");
                  FUN_05462980(auStack_178,(string *)local_1b0);
                  std::string::~string((string *)local_1b0);
                  nop();
                  puVar4 = (unordered_map *)std::__exception_ptr::exception_ptr::_M_get(this_00);
                  std::
                  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                  ::unordered_map((unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                                   *)local_1b0,puVar4);
                  local_218 = std::
                              unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                              ::begin((unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                                       *)local_1b0);
                  local_210 = FUN_04faae3c();
                  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_218,
                                                   (rbtree_iterator *)&local_210), bVar2) {
                    ppVar6 = (pair *)std::__detail::
                                     _Node_iterator<std::pair<int_const,DValue>,false,false>::
                                     operator*((_Node_iterator<std::pair<int_const,DValue>,false,false>
                                                *)&local_218);
                    std::pair<int_const,DValue>::pair((pair<int_const,DValue> *)local_200,ppVar6);
                    uVar7 = FUN_0546065c(auStack_168,local_200[0]);
                    uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
                    ::DValue::asString();
                    uVar7 = FUN_0545ec84(uVar7,asStack_208);
                    FUN_054603b8(uVar7,&DAT_05594620);
                    std::string::~string(asStack_208);
                    std::pair<int_const,DValue>::~pair((pair<int_const,DValue> *)local_200);
                    std::__detail::_Node_iterator<std::pair<int_const,DValue>,false,false>::
                    operator++((_Node_iterator<std::pair<int_const,DValue>,false,false> *)&local_218
                              );
                  }
                  FUN_05462824((pair<int_const,DValue> *)local_200,auStack_178);
                  LogServer::AppendMsg(this_01,(pair<int_const,DValue> *)local_200);
                  std::string::~string((string *)local_200);
                  std::
                  unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                  ::~unordered_map((unordered_map<int,DValue,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,DValue>>>
                                    *)local_1b0);
                  FUN_054617bc(auStack_178);
                }
              }
              else {
                uVar3 = operator|(0x10,8);
                FUN_05462470(auStack_178,uVar3);
                std::string::string((string *)local_1b0,"");
                FUN_05462980(auStack_178,(string *)local_1b0);
                std::string::~string((string *)local_1b0);
                nop();
                puVar4 = (unordered_map *)std::__exception_ptr::exception_ptr::_M_get(this_00);
                std::
                unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                ::unordered_map((unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                                 *)local_1b0,puVar4);
                local_218 = std::
                            unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                            ::begin((unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                                     *)local_1b0);
                local_210 = FUN_04faacf8();
                while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_218,
                                                 (rbtree_iterator *)&local_210), bVar2) {
                  ppVar6 = (pair *)std::__detail::
                                   _Node_iterator<std::pair<int_const,DValue>,false,false>::
                                   operator*((_Node_iterator<std::pair<int_const,DValue>,false,false>
                                              *)&local_218);
                  std::pair<std::string_const,DValue>::pair
                            ((pair<std::string_const,DValue> *)local_200,ppVar6);
                  uVar7 = FUN_0545ec84(auStack_168,(pair<int_const,DValue> *)local_200);
                  uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
                  ::DValue::asString();
                  uVar7 = FUN_0545ec84(uVar7,asStack_208);
                  FUN_054603b8(uVar7,&DAT_05594620);
                  std::string::~string(asStack_208);
                  std::pair<std::string_const,DValue>::~pair
                            ((pair<std::string_const,DValue> *)local_200);
                  std::__detail::_Node_iterator<std::pair<std::string_const,DValue>,false,true>::
                  operator++((_Node_iterator<std::pair<std::string_const,DValue>,false,true> *)
                             &local_218);
                }
                FUN_05462824((pair<int_const,DValue> *)local_200,auStack_178);
                LogServer::AppendMsg(this_01,(pair<int_const,DValue> *)local_200);
                std::string::~string((string *)local_200);
                std::
                unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                ::~unordered_map((unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
                                  *)local_1b0);
                FUN_054617bc(auStack_178);
              }
            }
            else {
              uVar3 = operator|(0x10,8);
              FUN_05462470(auStack_178,uVar3);
              std::string::string((string *)local_1b0,"");
              FUN_05462980(auStack_178,(string *)local_1b0);
              std::string::~string((string *)local_1b0);
              nop();
              pvVar8 = (vector *)std::__exception_ptr::exception_ptr::_M_get(this_00);
              std::vector<DValue,std::allocator<DValue>>::vector
                        ((vector<DValue,std::allocator<DValue>> *)local_1b0,pvVar8);
              local_218 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)local_1b0);
              local_210 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)local_1b0);
              while (bVar2 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_218,
                                        (__normal_iterator *)&local_210), bVar2) {
                pDVar9 = (DValue *)
                         std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_218);
                ::DValue::DValue((DValue *)local_200,pDVar9);
                ::DValue::asString();
                uVar7 = FUN_0545ec84(auStack_168,asStack_208);
                FUN_054603b8(uVar7,&DAT_05593348);
                std::string::~string(asStack_208);
                ::DValue::~DValue((DValue *)local_200);
                std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                          ((move_iterator<Sexy::CharDataHashEntry*> *)&local_218);
              }
              FUN_054603b8(auStack_168,&DAT_05594620);
              FUN_05462824((pair<int_const,DValue> *)local_200,auStack_178);
              LogServer::AppendMsg(this_01,(pair<int_const,DValue> *)local_200);
              std::string::~string((string *)local_200);
              std::vector<DValue,std::allocator<DValue>>::~vector
                        ((vector<DValue,std::allocator<DValue>> *)local_1b0);
              FUN_054617bc(auStack_178);
            }
          }
          else {
            std::string::string((string *)local_1b0,"");
            LogServer::AppendMsg(this_01,(string *)local_1b0);
            std::string::~string((string *)local_1b0);
            nop();
          }
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_230);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_230,(__normal_iterator *)&local_228);
        } while (bVar2);
      }
      LogServer::SendMsg(this_01);
      std::
      unordered_map<std::string,DValue,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,DValue>>>
      ::~unordered_map(auStack_1e8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LogDBInfo::~LogDBInfo() */

void __thiscall LogDBInfo::~LogDBInfo(LogDBInfo *this)

{
  *(undefined ***)this = &PTR__LogDBInfo_06a26eb0;
  std::
  unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
  ::~unordered_map((unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
                    *)(this + 8));
  return;
}


/* LogDBInfo::~LogDBInfo() */

void __thiscall LogDBInfo::~LogDBInfo(LogDBInfo *this)

{
  ~LogDBInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogDBInfo::load(std::string const&) */

void LogDBInfo::load(string *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  map *pmVar4;
  string *psVar5;
  vector<DString,std::allocator<DString>> *this_00;
  undefined8 local_c8;
  undefined8 local_c0;
  DString aDStack_b8 [16];
  DString aDStack_a8 [16];
  vector avStack_98 [24];
  string asStack_80 [48];
  DIniFile aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
  ::clear((unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
           *)(param_1 + 8));
  DIniFile::DIniFile(aDStack_50);
  DString::DString(aDStack_b8,
                   "[TabaleColumns]\n        GameStart=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Session_ID,Project_Code,Behavior_ID,OS_Version,Device_Model,Connect_type,Local_IP,Public_IP,CPU,GPU_Model,Resolution_of_Screen,Memory,Storage\n            GameStart_Funnel=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Session_ID,Project_Code,Behavior_ID,Duration_Time\n            Register=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Server_ID,Session_ID,Project_Code,Device_Model,OS_Version\n            Item_Login=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Server_ID,Session_ID,Project_Code,Item\n        Recharge_Info=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Server_ID,Session_ID,Project_Code,Pay_SN,Is_success,SKU_ID,Unit_price,Pay_Source,Platform,Return_code,Level,VIP_level_before,VIP_level_after,Result\n        Ingame_Behavior=Device_ID,User_ID,Character_ID,Client_time,Version_ID,Channel_ID,Server_ID,Session_ID,Project_Code,Behavior_ID,D1,D2,D3,D4,Result"
                  );
  pcVar3 = (char *)DString::c_str(aDStack_b8);
  std::string::string(asStack_80,pcVar3);
  cVar1 = DFileHandler::initWithString((DFileHandler *)aDStack_50,asStack_80,false);
  std::string::~string(asStack_80);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_80,"TabaleColumns");
    this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)DIniFile::getField(aDStack_50,asStack_80);
    std::string::~string(asStack_80);
    nop();
    if (this != (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 *)0x0) {
      pmVar4 = (map *)std::
                      _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      ::_M_root(this);
      std::
      map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
      ::map((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
             *)asStack_80,pmVar4);
      local_c8 = std::
                 map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
                 ::begin((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
                          *)asStack_80);
      local_c0 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)asStack_80);
      while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)&local_c0),
            bVar2) {
        psVar5 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)(psVar5 + 8));
        pcVar3 = (char *)FUN_0547429c();
        DString::DString(aDStack_a8,pcVar3);
        DString::split((char *)aDStack_a8,0x5593348);
        this_00 = (vector<DString,std::allocator<DString>> *)
                  std::
                  unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
                  ::operator[]((unordered_map<std::string,std::vector<DString,std::allocator<DString>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string_const,std::vector<DString,std::allocator<DString>>>>>
                                *)(param_1 + 8),psVar5);
        std::vector<DString,std::allocator<DString>>::operator=(this_00,avStack_98);
        std::vector<DString,std::allocator<DString>>::~vector
                  ((vector<DString,std::allocator<DString>> *)avStack_98);
        DString::~DString(aDStack_a8);
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
      }
      std::
      map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
      ::~map((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
              *)asStack_80);
      DString::~DString(aDStack_b8);
      DIniFile::~DIniFile(aDStack_50);
      goto LAB_04fac32c;
    }
  }
  cVar1 = '\0';
  DString::~DString(aDStack_b8);
  DIniFile::~DIniFile(aDStack_50);
LAB_04fac32c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LogDBInfo::loadDB() */

void __thiscall LogDBInfo::loadDB(LogDBInfo *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"LogServerTable.cfg");
  uVar1 = load((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LogDBInfo::getInstance() */

LogDBInfo * LogDBInfo::getInstance(void)

{
  LogDBInfo *this;
  
  if (s_pInstance != (LogDBInfo *)0x0) {
    return s_pInstance;
  }
  this = ::operator_new(0x40);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  LogDBInfo(this);
  s_pInstance = this;
  loadDB(this);
  return s_pInstance;
}

