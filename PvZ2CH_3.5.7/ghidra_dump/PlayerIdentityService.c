// Class: PlayerIdentityService


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::onUpdateAccountID(Sexy::StructuredData const*) */

void __thiscall
PlayerIdentityService::onUpdateAccountID(PlayerIdentityService *this,StructuredData *param_1)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.pcpid","NOPCPID");
  std::string::string(asStack_28,pcVar2);
  nop();
  iVar1 = FUN_0547490c(asStack_28,"NOPCPID");
  if (iVar1 != 0) {
    plVar3 = *(long **)(this + 0x20);
    pcVar4 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_18,"pcpid");
    (**(code **)(*(long *)this + 0x58))(asStack_20,this);
    pcVar2 = (char *)FUN_0547429c(asStack_20);
    pcVar2 = (char *)Sexy::StructuredData::StringForPath(param_1,"$.pcpid",pcVar2);
    std::string::string(asStack_10,pcVar2);
    (*pcVar4)(plVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_20);
    std::string::~string(asStack_18);
    nop();
    MessageRouter::Post(*(_func_void **)(this + 0x28));
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::CreateNewId() */

void PlayerIdentityService::CreateNewId(void)

{
  long in_x0;
  long *plVar1;
  code *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)**(undefined8 **)(in_x0 + 0x18))(*(undefined8 **)(in_x0 + 0x18));
  plVar1 = *(long **)(in_x0 + 0x20);
  pcVar2 = *(code **)(*plVar1 + 0x20);
  std::string::string(asStack_18,"pcpid");
  FUN_05475d88(asStack_10);
  (*pcVar2)(plVar1,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::accountStoredLocally() */

void PlayerIdentityService::accountStoredLocally(void)

{
  char cVar1;
  long in_x0;
  long *plVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)mutex);
  plVar2 = *(long **)(in_x0 + 0x20);
  pcVar3 = *(code **)(*plVar2 + 0x10);
  std::string::string(asStack_18,"pcpid");
  std::string::string(asStack_10,"");
  (*pcVar3)(plVar2,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  cVar1 = FUN_0547419c();
  if (cVar1 != '\0') {
    plVar2 = *(long **)(in_x0 + 0x20);
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_20,"pcpid");
    std::string::string(asStack_18,"");
    (*pcVar3)(asStack_10,plVar2,asStack_20,asStack_18);
    thunk_FUN_05475e00();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    cVar1 = FUN_0547419c();
    if (cVar1 != '\0') {
      (**(code **)**(undefined8 **)(in_x0 + 0x18))(asStack_10,*(undefined8 **)(in_x0 + 0x18));
      FUN_05474278();
      std::string::~string(asStack_10);
      plVar2 = *(long **)(in_x0 + 0x20);
      pcVar3 = *(code **)(*plVar2 + 0x20);
      std::string::string(asStack_18,"pcpid");
      FUN_05475d88(asStack_10);
      (*pcVar3)(plVar2,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerIdentityService::GetAccount() */

void __thiscall PlayerIdentityService::GetAccount(PlayerIdentityService *this)

{
  accountStoredLocally();
  return;
}


/* PlayerIdentityService::Init() */

void __thiscall PlayerIdentityService::Init(PlayerIdentityService *this)

{
  pthread_mutex_init((pthread_mutex_t *)mutex,(pthread_mutexattr_t *)0x0);
  if (*(code **)(**(long **)(this + 0x10) + 0x28) != ICloudWrapper::start) {
    (**(code **)(**(long **)(this + 0x10) + 0x28))();
  }
  return;
}


/* PlayerIdentityService::PlayerIdentityService(ICloudWrapper&, UUIDCreator&, UserPrefsWrapper&,
   MessageRouter&) */

void __thiscall
PlayerIdentityService::PlayerIdentityService
          (PlayerIdentityService *this,ICloudWrapper *param_1,UUIDCreator *param_2,
          UserPrefsWrapper *param_3,MessageRouter *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ICloudListener::ICloudListener((ICloudListener *)this);
  *(undefined ***)this = &PTR_iCloudDataServerChangeWithChangedKeys_068310e0;
  uVar1 = FakeHttpDriver::GetInstance();
  *(MessageRouter **)(this + 0x28) = param_4;
  *(UserPrefsWrapper **)(this + 0x20) = param_3;
  *(ICloudWrapper **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(UUIDCreator **)(this + 0x18) = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdateAccountID);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::StructuredData_const*,Sexy::CBMemberTranslatorX<PlayerIdentityService,void(PlayerIdentityService::*)(Sexy::StructuredData_const*)>>
            (param_4,Message::UpdateAccountId,&local_40);
  pcVar2 = *(code **)(**(long **)(this + 0x10) + 0x10);
  if (pcVar2 != ICloudWrapper::SetListener) {
    (*pcVar2)(*(long **)(this + 0x10),this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::postMergeRequest(std::string const&, std::string const&) */

void __thiscall
PlayerIdentityService::postMergeRequest(PlayerIdentityService *this,string *param_1,string *param_2)

{
  StructuredData *this_00;
  StructuredData *local_30;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x78);
  Sexy::StructuredData::StructuredData(this_00);
  local_30 = this_00;
  FUN_031f5e7c(asStack_20,"{\"boundpcpid\":\"",param_1);
  std::operator+(asStack_20,"\",\"requestedpcpid\":\"");
  std::operator+(asStack_18,param_2);
  std::operator+(asStack_10,"\"}");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  StringHelper::ReadJson(asStack_28,local_30);
  std::vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>>::push_back
            ((vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>> *)(this + 0x30),
             &local_30);
  MessageRouter::Post<Sexy::StructuredData_const*,Sexy::StructuredData*>
            (*(MessageRouter **)(this + 0x28),Message::BindAskForMerge,local_30);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::accountStoredInKvStore() */

void __thiscall PlayerIdentityService::accountStoredInKvStore(PlayerIdentityService *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)mutex);
  std::string::string(asStack_30,"pcpid");
  nop();
  (**(code **)(**(long **)(this + 0x10) + 0x20))(asStack_28,*(long **)(this + 0x10),asStack_30);
  plVar3 = *(long **)(this + 0x20);
  pcVar4 = *(code **)(*plVar3 + 0x10);
  std::string::string(asStack_18,"pcpid");
  std::string::string(asStack_10,"");
  (*pcVar4)(asStack_20,plVar3,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    plVar3 = *(long **)(this + 0x20);
    pcVar4 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_18,"pcpid");
    FUN_05475d88(asStack_10,asStack_28);
    (*pcVar4)(plVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    cVar1 = FUN_0547419c(asStack_20);
    if ((cVar1 == '\0') && (iVar2 = FUN_054748a4(asStack_28,asStack_20), iVar2 != 0)) {
      postMergeRequest(this,asStack_28,asStack_20);
    }
  }
  else {
    cVar1 = FUN_0547419c(asStack_20);
    if (cVar1 != '\0') {
      (**(code **)**(undefined8 **)(this + 0x18))(asStack_10,*(undefined8 **)(this + 0x18));
      FUN_05474278(asStack_20,asStack_10);
      std::string::~string(asStack_10);
    }
    plVar3 = *(long **)(this + 0x20);
    pcVar4 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_18,"pcpid");
    FUN_05475d88(asStack_10,asStack_20);
    (*pcVar4)(plVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    pcVar4 = *(code **)(**(long **)(this + 0x10) + 0x18);
    if (pcVar4 != ICloudWrapper::StoreStringValue) {
      (*pcVar4)(*(long **)(this + 0x10),asStack_30,asStack_20);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::iCloudDataServerChangeWithChangedKeys(char const**) */

void PlayerIdentityService::iCloudDataServerChangeWithChangedKeys(char **param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pthread_mutex_lock((pthread_mutex_t *)mutex);
  std::string::string(asStack_30,"pcpid");
  nop();
  (**(code **)(*(long *)param_1[2] + 0x20))(asStack_28,param_1[2],asStack_30);
  plVar3 = (long *)param_1[4];
  pcVar4 = *(code **)(*plVar3 + 0x10);
  std::string::string(asStack_18,"pcpid");
  std::string::string(asStack_10,"");
  (*pcVar4)(asStack_20,plVar3,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  cVar1 = FUN_0547419c(asStack_28);
  if (cVar1 == '\0') {
    plVar3 = (long *)param_1[4];
    pcVar4 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_18,"pcpid");
    FUN_05475d88(asStack_10,asStack_28);
    (*pcVar4)(plVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    cVar1 = FUN_0547419c(asStack_20);
    if ((cVar1 == '\0') && (iVar2 = FUN_054748a4(asStack_28,asStack_20), iVar2 != 0)) {
      postMergeRequest((PlayerIdentityService *)param_1,asStack_28,asStack_20);
    }
  }
  else {
    cVar1 = FUN_0547419c(asStack_20);
    if (cVar1 != '\0') {
      (*(code *)**(undefined8 **)param_1[3])(asStack_10,param_1[3]);
      FUN_05474278(asStack_20,asStack_10);
      std::string::~string(asStack_10);
    }
    plVar3 = (long *)param_1[4];
    pcVar4 = *(code **)(*plVar3 + 0x20);
    std::string::string(asStack_18,"pcpid");
    FUN_05475d88(asStack_10,asStack_20);
    (*pcVar4)(plVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    pcVar4 = *(code **)(*(long *)param_1[2] + 0x18);
    if (pcVar4 != ICloudWrapper::StoreStringValue) {
      (*pcVar4)(param_1[2],asStack_30,asStack_20);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)mutex);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerIdentityService::~PlayerIdentityService() */

void __thiscall PlayerIdentityService::~PlayerIdentityService(PlayerIdentityService *this)

{
  bool bVar1;
  undefined8 *puVar2;
  StructuredData *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  *(undefined ***)this = &PTR_iCloudDataServerChangeWithChangedKeys_068310e0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (StructuredData *)*puVar2;
    if (this_00 != (StructuredData *)0x0) {
      Sexy::StructuredData::~StructuredData(this_00);
      AK::FreeHook(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>>::clear
            ((vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>> *)this_01);
  std::vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>>::~vector
            ((vector<Sexy::StructuredData*,std::allocator<Sexy::StructuredData*>> *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerIdentityService::~PlayerIdentityService() */

void __thiscall PlayerIdentityService::~PlayerIdentityService(PlayerIdentityService *this)

{
  ~PlayerIdentityService(this);
  AK::FreeHook(this);
  return;
}

