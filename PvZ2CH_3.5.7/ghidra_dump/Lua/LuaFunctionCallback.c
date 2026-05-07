// Class: Lua::LuaFunctionCallback


/* Lua::LuaFunctionCallback::Begin(lua_State*, lua_State*) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::Begin(LuaFunctionCallback *this,lua_State *param_1,lua_State *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if (cVar1 == '\0') {
    *(lua_State **)this = param_1;
    uVar2 = toluafix_gettop(param_1);
    *(lua_State **)(this + 8) = param_2;
    *(undefined4 *)(this + 0x10) = uVar2;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return this;
}


/* Lua::LuaFunctionCallback::Begin() */

void __thiscall Lua::LuaFunctionCallback::Begin(LuaFunctionCallback *this)

{
  Begin(this,*(lua_State **)(gLuaEngine + 0xe48),*(lua_State **)(gLuaEngine + 0xe48));
  return;
}


/* Lua::LuaFunctionCallback::End() */

void __thiscall Lua::LuaFunctionCallback::End(LuaFunctionCallback *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    if (0 < (int)*(uint *)(this + 0x18)) {
      lua_settop(*(undefined8 *)(this + 8),~*(uint *)(this + 0x18));
    }
    lua_settop(*(undefined8 *)this,*(undefined4 *)(this + 0x10));
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}


/* Lua::LuaFunctionCallback::~LuaFunctionCallback() */

void __thiscall Lua::LuaFunctionCallback::~LuaFunctionCallback(LuaFunctionCallback *this)

{
  if ((*(long *)this == 0) && (*(long *)(this + 8) == 0)) {
    return;
  }
  End(this);
  return;
}


/* Lua::LuaFunctionCallback::Execute(int, int, bool*) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::Execute(LuaFunctionCallback *this,int param_1,int param_2,bool *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if ((cVar1 == '\0') && (*(long *)(this + 8) != 0)) {
    toluafix_get_function_by_refid(*(long *)(this + 8),param_1);
    iVar2 = lua_type(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 == 6) {
      uVar4 = *(uint *)(this + 0x14);
      if (0 < (int)uVar4) {
        lua_insert(*(undefined8 *)(this + 8),~uVar4);
        uVar4 = *(uint *)(this + 0x14);
      }
      if (10 < (uint)param_2) {
        param_2 = 0;
      }
      *(int *)(this + 0x18) = param_2;
      iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 8),uVar4,param_2,0);
      if (iVar2 == 0) {
        if (param_3 == (bool *)0x0) {
          return this;
        }
        *param_3 = true;
        return this;
      }
      lua_tolstring(*(undefined8 *)(this + 8),0xffffffff,0);
    }
    else {
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
    }
    if (param_3 == (bool *)0x0) {
      return this;
    }
  }
  else if (param_3 == (bool *)0x0) {
    return this;
  }
  *param_3 = false;
  return this;
}


/* Lua::LuaFunctionCallback::PushParamBool(long) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamBool(LuaFunctionCallback *this,long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    tolua_pushboolean(*(undefined8 *)(this + 8),param_1);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PushParamInt(long) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamInt(LuaFunctionCallback *this,long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    lua_pushinteger(*(undefined8 *)(this + 8),param_1);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PushParamNumber(double) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamNumber(LuaFunctionCallback *this,double param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    tolua_pushnumber(param_1,*(undefined8 *)(this + 8));
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PushParamCString(char const*) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamCString(LuaFunctionCallback *this,char *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    tolua_pushstring(*(undefined8 *)(this + 8),param_1);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PushParamStdString(std::string const&) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamStdString(LuaFunctionCallback *this,string *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(param_1);
    tolua_pushstring(*(undefined8 *)(this + 8),uVar3);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PushParamUserTypePtr(void const*, char const*) */

LuaFunctionCallback * __thiscall
Lua::LuaFunctionCallback::PushParamUserTypePtr
          (LuaFunctionCallback *this,void *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    tolua_pushusertype(*(undefined8 *)(this + 8),param_1,param_2);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return this;
}


/* Lua::LuaFunctionCallback::PopParamBool(bool) */

undefined1 __thiscall Lua::LuaFunctionCallback::PopParamBool(LuaFunctionCallback *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if ((cVar1 == '\0') && (0 < *(int *)(this + 0x18))) {
    iVar2 = lua_type(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 == 1) {
      iVar2 = lua_toboolean(*(undefined8 *)(this + 8),0xffffffff);
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
      param_1 = iVar2 != 0;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    }
    else {
      Sexy::OutputDebugStrF((wchar_t *)"[LUA ERROR] return value is not bool type");
    }
  }
  return param_1;
}


/* Lua::LuaFunctionCallback::PopParamInt(int) */

int __thiscall Lua::LuaFunctionCallback::PopParamInt(LuaFunctionCallback *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if ((cVar1 == '\0') && (0 < *(int *)(this + 0x18))) {
    iVar2 = lua_isnumber(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 != 0) {
      dVar4 = (double)lua_tonumber(*(undefined8 *)(this + 8),0xffffffff);
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
      return (int)dVar4;
    }
    Sexy::OutputDebugStrF((wchar_t *)"[LUA ERROR] return value is not int type");
  }
  return param_1;
}


/* Lua::LuaFunctionCallback::PopParamNumber(float) */

float __thiscall Lua::LuaFunctionCallback::PopParamNumber(LuaFunctionCallback *this,float param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar2 = FUN_04fdb678(*(undefined1 *)(lVar4 + 0xe51));
  if ((cVar2 == '\0') && (0 < *(int *)(this + 0x18))) {
    iVar3 = lua_isnumber(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar3 != 0) {
      dVar1 = (double)lua_tonumber(*(undefined8 *)(this + 8),0xffffffff);
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
      return (float)dVar1;
    }
    Sexy::OutputDebugStrF((wchar_t *)"[LUA ERROR] return value is not number type");
  }
  return param_1;
}


/* Lua::LuaFunctionCallback::PopParamUserTypePtr() */

undefined8 __thiscall Lua::LuaFunctionCallback::PopParamUserTypePtr(LuaFunctionCallback *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  uVar4 = 0;
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if ((cVar1 == '\0') && (0 < *(int *)(this + 0x18))) {
    iVar2 = lua_isuserdata(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 == 0) {
      Sexy::OutputDebugStrF((wchar_t *)"[LUA ERROR] return value is not userdata type");
    }
    else {
      uVar4 = tolua_touserdata(*(undefined8 *)(this + 8),0xffffffff,0);
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    }
  }
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaFunctionCallback::PopParamStdString(std::string const&) */

void __thiscall
Lua::LuaFunctionCallback::PopParamStdString(LuaFunctionCallback *this,string *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar2 = FUN_04fdb678(*(undefined1 *)(lVar4 + 0xe51));
  if ((cVar2 == '\0') && (0 < *(int *)(this + 0x18))) {
    iVar3 = lua_isstring(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar3 != 0) {
      __s = (char *)lua_tolstring(*(undefined8 *)(this + 8),0xffffffff,0);
      lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
      if (__s == (char *)0x0) {
        __s = "";
      }
      std::string::string(in_x8,__s);
      nop();
      goto LAB_04fdcfec;
    }
    Sexy::OutputDebugStrF((wchar_t *)"[LUA ERROR] return value is not string type");
  }
  std::string::string(in_x8,"");
  nop();
LAB_04fdcfec:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::LuaFunctionCallback::Execute(std::string const&, int, bool*) */

void __thiscall
Lua::LuaFunctionCallback::Execute
          (LuaFunctionCallback *this,string *param_1,int param_2,bool *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_04fdb678(*(undefined1 *)(lVar3 + 0xe51));
  if ((cVar1 != '\0') || (*(long *)(this + 8) == 0)) {
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
    goto LAB_04fdd29c;
  }
  Set8BytesTo0(asStack_20);
  Set8BytesTo0(asStack_18);
  lVar3 = FUN_054743b0(param_1,0x3a,0);
  if (lVar3 == -1) {
    thunk_FUN_05475e00(asStack_20,param_1);
  }
  else {
    FUN_05475ffc(asStack_10,param_1,0,lVar3);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475ffc(asStack_10,param_1,lVar3 + 1,0xffffffffffffffff);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
  }
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    uVar4 = FUN_0547429c(asStack_18);
    lua_getfield(*(undefined8 *)(this + 8),0xffffd8ee,uVar4);
    uVar4 = FUN_0547429c(asStack_20);
    lua_getfield(*(undefined8 *)(this + 8),0xffffffff,uVar4);
    lua_pushvalue(*(undefined8 *)(this + 8),0xfffffffe);
    lua_remove(*(undefined8 *)(this + 8),0xfffffffd);
    lua_insert(*(undefined8 *)(this + 8),-2 - *(int *)(this + 0x14));
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    iVar2 = lua_type(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 == 6) goto LAB_04fdd34c;
LAB_04fdd254:
    uVar4 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF
              ((wchar_t *)"[LUA ERROR] function [%s] does not reference a lua function",uVar4);
    lua_settop(*(undefined8 *)(this + 8),0xfffffffe);
joined_r0x04fdd278:
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
  }
  else {
    uVar4 = FUN_0547429c(asStack_20);
    lua_getfield(*(undefined8 *)(this + 8),0xffffd8ee,uVar4);
    iVar2 = lua_type(*(undefined8 *)(this + 8),0xffffffff);
    if (iVar2 != 6) goto LAB_04fdd254;
LAB_04fdd34c:
    uVar5 = *(uint *)(this + 0x14);
    if (0 < (int)uVar5) {
      lua_insert(*(undefined8 *)(this + 8),~uVar5);
      uVar5 = *(uint *)(this + 0x14);
    }
    if (10 < (uint)param_2) {
      param_2 = 0;
    }
    *(int *)(this + 0x18) = param_2;
    iVar2 = popcap_lua_xpcall(*(lua_State **)(this + 8),uVar5,param_2,0);
    if (iVar2 != 0) {
      lua_tolstring(*(undefined8 *)(this + 8),0xffffffff,0);
      goto joined_r0x04fdd278;
    }
    if (param_3 != (bool *)0x0) {
      *param_3 = true;
    }
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
LAB_04fdd29c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

