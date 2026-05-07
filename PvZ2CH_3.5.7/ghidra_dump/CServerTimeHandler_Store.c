// Class: CServerTimeHandler_Store


/* CServerTimeHandler_Store::OnServerTimeGet(bool, long) */

void CServerTimeHandler_Store::OnServerTimeGet(bool param_1,long param_2)

{
  LawnApp::ShowStoreUINow(gLawnApp,(string *)((ulong)param_1 + 8));
  return;
}


/* CServerTimeHandler_Store::~CServerTimeHandler_Store() */

void __thiscall CServerTimeHandler_Store::~CServerTimeHandler_Store(CServerTimeHandler_Store *this)

{
  *(undefined ***)this = &PTR__CServerTimeHandler_Store_06934690;
  std::string::~string((string *)(this + 8));
  return;
}


/* CServerTimeHandler_Store::~CServerTimeHandler_Store() */

void __thiscall CServerTimeHandler_Store::~CServerTimeHandler_Store(CServerTimeHandler_Store *this)

{
  ~CServerTimeHandler_Store(this);
  AK::FreeHook(this);
  return;
}


/* CServerTimeHandler_Store::CServerTimeHandler_Store(std::string const&) */

void __thiscall
CServerTimeHandler_Store::CServerTimeHandler_Store(CServerTimeHandler_Store *this,string *param_1)

{
  CServerTimeHandler::CServerTimeHandler((CServerTimeHandler *)this);
  *(undefined ***)this = &PTR__CServerTimeHandler_Store_06934690;
  FUN_05475d88(this + 8,param_1);
  return;
}

