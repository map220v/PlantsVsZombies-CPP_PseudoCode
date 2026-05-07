// Class: Lua::CLuaEngine


/* Lua::CLuaEngine::Initialize() */

void Lua::CLuaEngine::Initialize(void)

{
  return;
}


/* non-virtual thunk to Lua::CLuaEngine::Initialize() */

void __thiscall Lua::CLuaEngine::Initialize(CLuaEngine *this)

{
  Initialize();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::GetDefineId() */

void __thiscall Lua::CLuaEngine::GetDefineId(CLuaEngine *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"CLuaEngine");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* non-virtual thunk to Lua::CLuaEngine::GetDefineId() */

void __thiscall Lua::CLuaEngine::GetDefineId(CLuaEngine *this)

{
  GetDefineId(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 8) = &PTR__CLuaEngine_06a2c8e8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__CLuaEngine_06a2c890;
  *(undefined ***)(this + 0x10) = &PTR__CLuaEngine_06a2c908;
  lua_close(*(undefined8 *)(this + 0xe48));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"InitLua");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  INetworkMsgProcess::~INetworkMsgProcess((INetworkMsgProcess *)(this + 0x10));
  Sexy::LazySingleton<Lua::CLuaEngine>::~LazySingleton((LazySingleton<Lua::CLuaEngine> *)(this + 8))
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  ~CLuaEngine(this + -0x10);
  return;
}


/* non-virtual thunk to Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  ~CLuaEngine(this + -8);
  return;
}


/* Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  ~CLuaEngine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  ~CLuaEngine(this + -0x10);
  return;
}


/* non-virtual thunk to Lua::CLuaEngine::~CLuaEngine() */

void __thiscall Lua::CLuaEngine::~CLuaEngine(CLuaEngine *this)

{
  ~CLuaEngine(this + -8);
  return;
}


/* Lua::CLuaEngine::ReloadScripts() */

void __thiscall Lua::CLuaEngine::ReloadScripts(CLuaEngine *this)

{
  this[0xe50] = (CLuaEngine)0x1;
  return;
}


/* Lua::CLuaEngine::GetDataFolderPath() */

void __thiscall Lua::CLuaEngine::GetDataFolderPath(CLuaEngine *this)

{
  GetFolder(0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::OnNetworkMsg(std::string, _NetWorkMsg&) */

void __thiscall
Lua::CLuaEngine::OnNetworkMsg(CLuaEngine *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar2 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar2);
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"OnNetworkMsg");
    iVar3 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    bVar1 = false;
    if (iVar3 == 6) {
      uVar4 = FUN_0547429c(param_2);
      tolua_pushstring(*(undefined8 *)(this + 0xe48),uVar4);
      tolua_pushusertype(*(undefined8 *)(this + 0xe48),param_3,"_NetWorkMsg");
      iVar3 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),2,1,0);
      if (iVar3 != 0) {
        lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
      }
      iVar3 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
      if (iVar3 == 1) {
        iVar3 = lua_toboolean(*(undefined8 *)(this + 0xe48),0xffffffff);
        bVar1 = iVar3 != 0;
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::ExecuteFile(char const*) */

void __thiscall Lua::CLuaEngine::ExecuteFile(CLuaEngine *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *__s;
  CLuaEngine CVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  TextRun aTStack_18 [16];
  long local_8;
  
  CVar4 = this[0xe51];
  local_8 = ___stack_chk_guard;
  if (CVar4 == (CLuaEngine)0x0) {
    uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
    std::string::string(asStack_30,param_1);
    nop();
    uVar3 = FUN_0547429c(asStack_30);
    Sexy::StrFormat(" require \"%s\"",asStack_28,uVar3);
    uVar3 = FUN_0547429c(asStack_28);
    luaL_loadstring(*(undefined8 *)(this + 0xe48),uVar3);
    iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),0,1,0);
    if (iVar2 == 0) {
      CVar4 = (CLuaEngine)0x1;
    }
    else {
      __s = (char *)lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
      std::string::string(asStack_20,__s);
      nop();
      std::string::~string(asStack_20);
    }
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CVar4);
}


/* Lua::CLuaEngine::AddSearchPath(char const*) */

void __thiscall Lua::CLuaEngine::AddSearchPath(CLuaEngine *this,char *param_1)

{
  undefined8 uVar1;
  
  lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"package");
  lua_getfield(*(undefined8 *)(this + 0xe48),0xffffffff,&DAT_05636378);
  uVar1 = lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
  lua_pushfstring(*(undefined8 *)(this + 0xe48),"%s?.lua;%s",param_1,uVar1);
  lua_setfield(*(undefined8 *)(this + 0xe48),0xfffffffd,&DAT_05636378);
  lua_settop(*(undefined8 *)(this + 0xe48),0xfffffffd);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::ExecuteListener(int, std::string, int) */

void __thiscall
Lua::CLuaEngine::ExecuteListener(CLuaEngine *this,undefined4 param_1,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
    toluafix_get_function_by_refid(*(undefined8 *)(this + 0xe48),param_1);
    iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    if (iVar2 == 6) {
      uVar3 = FUN_0547429c(param_3);
      lua_pushstring(*(undefined8 *)(this + 0xe48),uVar3);
      lua_pushinteger(*(undefined8 *)(this + 0xe48),(long)param_4);
      iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),2,0,0);
      if (iVar2 != 0) {
        lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
      }
      StackClean::~StackClean((StackClean *)aTStack_18);
    }
    else {
      lua_settop(*(undefined8 *)(this + 0xe48),0xfffffffe);
      StackClean::~StackClean((StackClean *)aTStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CLuaEngine::ExecuteByHandler(int, int) */

undefined8 __thiscall Lua::CLuaEngine::ExecuteByHandler(CLuaEngine *this,int param_1,int param_2)

{
  int iVar1;
  
  toluafix_get_function_by_refid(*(undefined8 *)(this + 0xe48),param_1);
  iVar1 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
  if (iVar1 != 6) {
    lua_settop(*(undefined8 *)(this + 0xe48),0xfffffffe);
    return 0;
  }
  if (0 < param_2) {
    lua_insert(*(undefined8 *)(this + 0xe48),~param_2);
  }
  iVar1 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),param_2,0,0);
  if (iVar1 == 0) {
    return 1;
  }
  lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
  return 0;
}


/* Lua::CLuaEngine::RemoveScriptHandler(int) */

void Lua::CLuaEngine::RemoveScriptHandler(int param_1)

{
  toluafix_remove_function_by_refid(*(undefined8 *)((ulong)(uint)param_1 + 0xe48));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::OnWorldMapUIMsg(std::string, int, int) */

void Lua::CLuaEngine::OnWorldMapUIMsg(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(param_1 + 0xe51) == '\0') {
    uVar2 = lua_gettop(*(undefined8 *)(param_1 + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(param_1 + 0xe48),uVar2);
    lua_getfield(*(undefined8 *)(param_1 + 0xe48),0xffffd8ee,"OnWorldMapUIMsg");
    iVar3 = lua_type(*(undefined8 *)(param_1 + 0xe48),0xffffffff);
    bVar1 = false;
    if (iVar3 == 6) {
      uVar4 = FUN_0547429c(param_2);
      tolua_pushstring(*(undefined8 *)(param_1 + 0xe48),uVar4);
      iVar3 = popcap_lua_xpcall(*(lua_State **)(param_1 + 0xe48),1,1,0);
      if (iVar3 != 0) {
        lua_tolstring(*(undefined8 *)(param_1 + 0xe48),0xffffffff,0);
      }
      iVar3 = lua_type(*(undefined8 *)(param_1 + 0xe48),0xffffffff);
      if (iVar3 == 1) {
        iVar3 = lua_toboolean(*(undefined8 *)(param_1 + 0xe48),0xffffffff);
        bVar1 = iVar3 != 0;
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::ProcessWorldMapTouchEvent(char const*, int, int, unsigned char) */

void __thiscall
Lua::CLuaEngine::ProcessWorldMapTouchEvent
          (CLuaEngine *this,char *param_1,int param_2,int param_3,uchar param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar2 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar2);
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"luaApp");
    iVar3 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    bVar1 = false;
    if (iVar3 == 5) {
      lua_getfield(*(undefined8 *)(this + 0xe48),0xffffffff,param_1);
      iVar3 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
      if (iVar3 == 6) {
        lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"luaApp");
        tolua_pushnumber((double)param_2,*(undefined8 *)(this + 0xe48));
        tolua_pushnumber((double)param_3,*(undefined8 *)(this + 0xe48));
        tolua_pushnumber((double)param_4,*(undefined8 *)(this + 0xe48));
        iVar3 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),4,1,0);
        if (iVar3 == 0) {
          iVar3 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
          if (iVar3 == 1) {
            iVar3 = lua_toboolean(*(undefined8 *)(this + 0xe48),0xffffffff);
            bVar1 = iVar3 != 0;
          }
        }
        else {
          lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
        }
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::OnFileDownload(char const*) */

void __thiscall Lua::CLuaEngine::OnFileDownload(CLuaEngine *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"OnFileCompleted");
    iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    uVar3 = 0;
    if (iVar2 == 6) {
      tolua_pushstring(*(undefined8 *)(this + 0xe48),param_1);
      iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),1,0,0);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::ExecuteGlobalFunction(char const*) */

void __thiscall Lua::CLuaEngine::ExecuteGlobalFunction(CLuaEngine *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,param_1);
    iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    uVar3 = 0;
    if (iVar2 == 6) {
      iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),1,0,0);
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::ExecuteTableFunction(char const*, char const*) */

void __thiscall Lua::CLuaEngine::ExecuteTableFunction(CLuaEngine *this,char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] == (CLuaEngine)0x0) {
    uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
    EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,param_1);
    iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    uVar3 = 0;
    if (iVar2 == 5) {
      lua_getfield(*(undefined8 *)(this + 0xe48),0xffffffff,param_2);
      iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
      if (iVar2 == 6) {
        lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,param_1);
        iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),1,0,0);
        if (iVar2 == 0) {
          uVar3 = 1;
        }
        else {
          lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff,0);
        }
      }
    }
    StackClean::~StackClean((StackClean *)aTStack_18);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::CreateWorldMap(char const*, char const*) */

void __thiscall Lua::CLuaEngine::CreateWorldMap(CLuaEngine *this,char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe51] != (CLuaEngine)0x0) {
    uVar3 = 0;
    goto LAB_04fdc61c;
  }
  uVar1 = lua_gettop(*(undefined8 *)(this + 0xe48));
  EA::Text::TextRun::TextRun(aTStack_18,*(wchar16 **)(this + 0xe48),uVar1);
  lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,param_1);
  iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
  if (iVar2 == 5) {
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffffff,param_2);
    iVar2 = lua_type(*(undefined8 *)(this + 0xe48),0xffffffff);
    if (iVar2 != 6) goto LAB_04fdc610;
    iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 0xe48),0,1,0);
    if (iVar2 == 0) {
      iVar2 = lua_isuserdata(*(undefined8 *)(this + 0xe48),0xffffffff);
      if (iVar2 == 0) goto LAB_04fdc610;
      uVar3 = tolua_touserdata(*(undefined8 *)(this + 0xe48),0xffffffff,0);
    }
    else {
      uVar3 = 0;
      lua_tolstring(*(undefined8 *)(this + 0xe48),0xffffffff);
    }
  }
  else {
LAB_04fdc610:
    uVar3 = 0;
  }
  StackClean::~StackClean((StackClean *)aTStack_18);
LAB_04fdc61c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Lua::CLuaEngine::EnableRun(bool) */

void __thiscall Lua::CLuaEngine::EnableRun(CLuaEngine *this,bool param_1)

{
  this[0xe51] = (CLuaEngine)!param_1;
  return;
}


/* Lua::CLuaEngine::AddLuaLoader(int (*)(lua_State*)) */

void __thiscall Lua::CLuaEngine::AddLuaLoader(CLuaEngine *this,_func_int_lua_State_ptr *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (_func_int_lua_State_ptr *)0x0) {
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffd8ee,"package");
    lua_getfield(*(undefined8 *)(this + 0xe48),0xffffffff,"loaders");
    lua_pushcclosure(*(undefined8 *)(this + 0xe48),param_1,0);
    iVar1 = lua_objlen(*(undefined8 *)(this + 0xe48),0xfffffffe);
    iVar2 = iVar1 + 1;
    if (2 < iVar1 + 1) {
      do {
        iVar1 = iVar2 + -1;
        lua_rawgeti(*(undefined8 *)(this + 0xe48),0xfffffffe,iVar1);
        lua_rawseti(*(undefined8 *)(this + 0xe48),0xfffffffd,iVar2);
        iVar2 = iVar1;
      } while (iVar1 != 2);
    }
    lua_rawseti(*(undefined8 *)(this + 0xe48),0xfffffffe,2);
    lua_setfield(*(undefined8 *)(this + 0xe48),0xfffffffe,"loaders");
    lua_settop(*(undefined8 *)(this + 0xe48),0xfffffffe);
    return;
  }
  return;
}


/* Lua::CLuaEngine::LoadBuffer(lua_State*, char const*, int, char const*) */

void __thiscall
Lua::CLuaEngine::LoadBuffer
          (CLuaEngine *this,lua_State *param_1,char *param_2,int param_3,char *param_4)

{
  luaL_loadbuffer(param_1,param_2,(long)param_3,param_4);
  return;
}


/* Lua::CLuaEngine::CheckUpdate() */

undefined8 __thiscall Lua::CLuaEngine::CheckUpdate(CLuaEngine *this)

{
  *(undefined4 *)(this + 0xe54) = 3;
  return 1;
}


/* Lua::CLuaEngine::DoReUpdate() */

undefined8 __thiscall Lua::CLuaEngine::DoReUpdate(CLuaEngine *this)

{
  *(undefined4 *)(this + 0xe54) = 3;
  return 1;
}


/* Lua::CLuaEngine::ReUpdate() */

void __thiscall Lua::CLuaEngine::ReUpdate(CLuaEngine *this)

{
  this[0xe52] = (CLuaEngine)0x1;
  return;
}


/* Lua::CLuaEngine::OnUpdateFinish() */

void __thiscall Lua::CLuaEngine::OnUpdateFinish(CLuaEngine *this)

{
  if (*(int *)(this + 0xe54) != 2) {
    return;
  }
  *(undefined4 *)(this + 0xe54) = 3;
  return;
}


/* Lua::CLuaEngine::IsGameRunning() */

bool __thiscall Lua::CLuaEngine::IsGameRunning(CLuaEngine *this)

{
  return *(int *)(this + 0xe54) == 4;
}


/* Lua::CLuaEngine::CLuaEngine() */

void __thiscall Lua::CLuaEngine::CLuaEngine(CLuaEngine *this)

{
  undefined8 uVar1;
  
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)this);
  Sexy::LazySingleton<Lua::CLuaEngine>::LazySingleton((LazySingleton<Lua::CLuaEngine> *)(this + 8));
  INetworkMsgProcess::INetworkMsgProcess((INetworkMsgProcess *)(this + 0x10));
  *(undefined8 *)(this + 0xe48) = 0;
  *(undefined ***)this = &PTR__CLuaEngine_06a2c890;
  *(undefined ***)(this + 8) = &PTR__CLuaEngine_06a2c8e8;
  *(undefined ***)(this + 0x10) = &PTR__CLuaEngine_06a2c908;
  this[0xe50] = (CLuaEngine)0x0;
  this[0xe52] = (CLuaEngine)0x0;
  *(undefined4 *)(this + 0xe54) = 0;
  uVar1 = luaL_newstate();
  *(undefined8 *)(this + 0xe48) = uVar1;
  luaL_openlibs();
  tolua_pvz2_Android_open(*(lua_State **)(this + 0xe48));
  toluafix_open(*(undefined8 *)(this + 0xe48));
  AddLuaLoader(this,popcap_lua_loader);
  this[0xe51] = (CLuaEngine)0x1;
  gLuaEngine = this;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::DidFinishPrepair() */

void Lua::CLuaEngine::DidFinishPrepair(void)

{
  undefined4 uVar1;
  LawnApp *pLVar2;
  bool bVar3;
  LMMessageRouter *this;
  CLuaEngine *pCVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LMMessageRouter *)LMMessageRouter::GetInstance();
  LMMessageRouter::Init(this);
  pLVar2 = gLawnApp;
  std::string::string(asStack_10,"LUA_Scripts_Src");
  LawnApp::LoadGroup(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pCVar4 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  EnableRun(pCVar4,true);
  pCVar4 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  ExecuteFile(pCVar4,"main.lua");
  pLVar2 = gLawnApp;
  uVar1 = *(undefined4 *)(*(long *)(gLawnApp + 0x848) + 0x20c);
  *(undefined4 *)(*(long *)(gLawnApp + 0x848) + 0x20c) = 0;
  std::string::string(asStack_10,"properties/LawnStringsLUA.txt");
  LawnApp::AddLocalizedLawnStringFile(pLVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar3 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(*(long *)(gLawnApp + 0x848) + 0x20c) = uVar1;
  if (bVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::GetScriptDebugFolderPath() const */

void __thiscall Lua::CLuaEngine::GetScriptDebugFolderPath(CLuaEngine *this)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Resources::GetExternalFilesDirectory((AndroidAppDriver *)0x0);
  thunk_FUN_05475e00(asStack_18,asStack_10);
  std::operator+(asStack_18,"lua_debug/");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CLuaEngine::LoadDLCRSB() */

void Lua::CLuaEngine::LoadDLCRSB(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LuaUpdater *this;
  ulong uVar5;
  ResourceManager *this_00;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LuaUpdater *)LuaUpdater::GetInst();
  LuaUpdater::GetDLCVersion(this);
  bVar1 = std::operator==(asStack_38,"");
  if (!bVar1) {
    uVar5 = Android::Info::SysGetProductVersionCode();
    Sexy::StrFormat("%d",asStack_10,uVar5 & 0xffffffff);
    iVar3 = AssetsManagerManifest::getVersionToInt(asStack_10);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,asStack_38);
    iVar4 = AssetsManagerManifest::getVersionToInt(asStack_10);
    std::string::~string(asStack_10);
    if (iVar3 < iVar4) {
      LuaUpdater::GetInst();
      Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
      std::operator+(asStack_18,"update/rsb/");
      std::operator+(asStack_10,"DLCUpdate.rsb");
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      cVar2 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_30);
      if (cVar2 != '\0') {
        this_00 = *(ResourceManager **)(gLawnApp + 0x848);
        LuaUpdater::GetInst();
        Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
        std::operator+(asStack_28,"update/rsb/");
        std::string::string(asStack_18,"DLCUpdate.rsb");
        std::string::string(asStack_10,"properties\\resourcesDLCUpdate.rton");
        Sexy::ResourceManager::AddRsb(this_00,asStack_20,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        std::string::~string(asStack_20);
        std::string::~string(asStack_28);
      }
      std::string::~string(asStack_30);
    }
  }
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

