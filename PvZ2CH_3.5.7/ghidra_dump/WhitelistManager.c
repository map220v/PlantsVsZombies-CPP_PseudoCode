// Class: WhitelistManager


/* WhitelistManager::WhitelistManager() */

void __thiscall WhitelistManager::WhitelistManager(WhitelistManager *this)

{
  Sexy::LazySingleton<WhitelistManager>::LazySingleton((LazySingleton<WhitelistManager> *)this);
  *(undefined ***)this = &PTR__WhitelistManager_06673ff0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* WhitelistManager::~WhitelistManager() */

void __thiscall WhitelistManager::~WhitelistManager(WhitelistManager *this)

{
  *(undefined ***)this = &PTR__WhitelistManager_06673ff0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  Sexy::LazySingleton<WhitelistManager>::~LazySingleton((LazySingleton<WhitelistManager> *)this);
  return;
}


/* WhitelistManager::~WhitelistManager() */

void __thiscall WhitelistManager::~WhitelistManager(WhitelistManager *this)

{
  ~WhitelistManager(this);
  AK::FreeHook(this);
  return;
}


/* WhitelistManager::DisableWhitelisting() */

void __thiscall WhitelistManager::DisableWhitelisting(WhitelistManager *this)

{
  this[8] = (WhitelistManager)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhitelistManager::IsDisabledByWhitelisting(std::string const&) */

void __thiscall WhitelistManager::IsDisabledByWhitelisting(WhitelistManager *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = '\0';
  if (this[8] != (WhitelistManager)0x0) {
    cVar1 = FUN_0547419c(param_1);
    if (cVar1 == '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x10);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar2,uVar3,param_1);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      cVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WhitelistManager::EnableWhitelisting(std::vector<std::string, std::allocator<std::string > >
   const&) */

void __thiscall WhitelistManager::EnableWhitelisting(WhitelistManager *this,vector *param_1)

{
  DisableWhitelisting(this);
  this[8] = (WhitelistManager)0x1;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),param_1);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhitelistManager::DisableAllInput() */

void __thiscall WhitelistManager::DisableAllInput(WhitelistManager *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EnableWhitelisting(this,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhitelistManager::EnableWhitelisting(std::string const&) */

void __thiscall WhitelistManager::EnableWhitelisting(WhitelistManager *this,string *param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_1);
  EnableWhitelisting(this,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

