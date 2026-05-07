// Class: NotificationManagerGame


/* NotificationManagerGame::AddListener(Sexy::NotificationListener*) */

void __thiscall
NotificationManagerGame::AddListener(NotificationManagerGame *this,NotificationListener *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)EA::Thread::GetModuleHandleFromAddress(this);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  return;
}


/* NotificationManagerGame::Init() */

void __thiscall NotificationManagerGame::Init(NotificationManagerGame *this)

{
  long *plVar1;
  
  plVar1 = (long *)EA::Thread::GetModuleHandleFromAddress(this);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&DAT_06ae1af8,&DAT_06ae1ab0);
    (**(code **)(*plVar1 + 0x20))(plVar1,&DAT_06ae1ab8);
  }
  AddListener(this,(NotificationListener *)this);
  return;
}


/* NotificationManagerGame::NotificationManagerGame() */

void __thiscall NotificationManagerGame::NotificationManagerGame(NotificationManagerGame *this)

{
  Sexy::NotificationListener::NotificationListener((NotificationListener *)this);
  *(undefined ***)this = &PTR_DidRegisterForRemoteNotifications_067934e0;
  Init(this);
  return;
}


/* NotificationManagerGame::Register() */

void __thiscall NotificationManagerGame::Register(NotificationManagerGame *this)

{
  long *plVar1;
  
  plVar1 = (long *)EA::Thread::GetModuleHandleFromAddress(this);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  return;
}


/* NotificationManagerGame::GetCurrentEndpoint() */

void NotificationManagerGame::GetCurrentEndpoint(void)

{
  void *in_x0;
  long *plVar1;
  
  plVar1 = (long *)EA::Thread::GetModuleHandleFromAddress(in_x0);
  (**(code **)(*plVar1 + 0x28))();
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NotificationManagerGame::DidRegisterForRemoteNotifications(std::string const&) */

void NotificationManagerGame::DidRegisterForRemoteNotifications(string *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  void *local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)EA::Thread::GetModuleHandleFromAddress(___stack_chk_guard);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x58);
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetAccountName();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar2)(plVar1,asStack_28,avStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NotificationManagerGame::TestPushNotification(std::string const&, std::string const&) */

void __thiscall
NotificationManagerGame::TestPushNotification
          (NotificationManagerGame *this,string *param_1,string *param_2)

{
  long lVar1;
  char *pcVar2;
  void *pvVar3;
  long *plVar4;
  time_t tVar5;
  code *pcVar6;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474184(param_2);
  if (lVar1 != 0) {
    Sexy::StructuredData::StructuredData(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80);
    Sexy::StructuredData::BeginObject(aSStack_80,"aps");
    pcVar2 = (char *)FUN_0547429c(param_1);
    Sexy::StructuredData::AddString(aSStack_80,"alert",pcVar2);
    Sexy::StructuredData::AddString(aSStack_80,"sound","default");
    Sexy::StructuredData::EndObject(aSStack_80);
    pvVar3 = (void *)Sexy::StructuredData::EndObject(aSStack_80);
    plVar4 = (long *)EA::Thread::GetModuleHandleFromAddress(pvVar3);
    if (plVar4 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar4 + 0x40);
      pcVar2 = (char *)FUN_0547429c(param_2);
      std::string::string(asStack_88,pcVar2);
      tVar5 = time((time_t *)0x0);
      (*pcVar6)(plVar4,asStack_88,tVar5 + 0x15180,aSStack_80);
      std::string::~string(asStack_88);
      nop();
    }
    Sexy::StructuredData::~StructuredData(aSStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

