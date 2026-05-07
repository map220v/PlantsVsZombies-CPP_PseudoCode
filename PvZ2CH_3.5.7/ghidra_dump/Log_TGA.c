// Class: Log_TGA


/* Log_TGA::Log_TGA() */

void __thiscall Log_TGA::Log_TGA(Log_TGA *this)

{
  PublicBasicInfo::PublicBasicInfo((PublicBasicInfo *)this);
  *(undefined ***)this = &PTR_getBasicInfo_06a26e60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_TGA::getLogInfo(std::string const&, DValue&) */

void __thiscall Log_TGA::getLogInfo(Log_TGA *this,string *param_1,DValue *param_2)

{
  string asStack_38 [8];
  DValue aDStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  PublicBasicInfo::getClientTime((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_30,asStack_38);
  std::vector<DValue,std::allocator<DValue>>::push_back
            ((vector<DValue,std::allocator<DValue>> *)avStack_20,aDStack_30);
  ::DValue::~DValue(aDStack_30);
  std::string::~string(asStack_38);
  ::DValue::DValue(aDStack_30,param_1);
  std::vector<DValue,std::allocator<DValue>>::push_back
            ((vector<DValue,std::allocator<DValue>> *)avStack_20,aDStack_30);
  ::DValue::~DValue(aDStack_30);
  ::DValue::operator=(param_2,(vector *)avStack_20);
  std::vector<DValue,std::allocator<DValue>>::~vector
            ((vector<DValue,std::allocator<DValue>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_TGA::getBasicInfoForLogin(DValue&) */

void __thiscall Log_TGA::getBasicInfoForLogin(Log_TGA *this,DValue *param_1)

{
  vector<DValue,std::allocator<DValue>> *this_00;
  string asStack_20 [8];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<DValue,std::allocator<DValue>> *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
  PublicBasicInfo::getTargetPlatform((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getDefineID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getCharacterID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getUniqueCharacterID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getChannelID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getProfileCreatedTime((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getVersionID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getSignature((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_TGA::getBasicInfo(DValue&) */

void __thiscall Log_TGA::getBasicInfo(Log_TGA *this,DValue *param_1)

{
  vector<DValue,std::allocator<DValue>> *this_00;
  string asStack_20 [8];
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<DValue,std::allocator<DValue>> *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
  PublicBasicInfo::getTargetPlatform((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getDefineID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getUserID();
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getCharacterID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getChannelID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getProfileCreatedTime((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getVersionID((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  PublicBasicInfo::getSignature((PublicBasicInfo *)this);
  ::DValue::DValue(aDStack_18,asStack_20);
  std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
  ::DValue::~DValue(aDStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Log_TGA::getOtherInfo(std::vector<std::string, std::allocator<std::string > > const&, DValue&) */

void __thiscall Log_TGA::getOtherInfo(Log_TGA *this,vector *param_1,DValue *param_2)

{
  bool bVar1;
  vector<DValue,std::allocator<DValue>> *this_00;
  string *psVar2;
  undefined8 local_28;
  undefined8 local_20;
  DValue aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<DValue,std::allocator<DValue>> *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_2);
  local_28 = FUN_04fa6834(*(undefined8 *)param_1);
  local_20 = FUN_04fa6884(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ::DValue::DValue(aDStack_18,psVar2);
    std::vector<DValue,std::allocator<DValue>>::push_back(this_00,aDStack_18);
    ::DValue::~DValue(aDStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

