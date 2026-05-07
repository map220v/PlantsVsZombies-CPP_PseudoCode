// Class: WorldMap_LuaButtonsImpl


/* WorldMap_LuaButtonsImpl::RegisterHandler(int) */

void __thiscall WorldMap_LuaButtonsImpl::RegisterHandler(WorldMap_LuaButtonsImpl *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  return;
}


/* WorldMap_LuaButtonsImpl::~WorldMap_LuaButtonsImpl() */

void __thiscall WorldMap_LuaButtonsImpl::~WorldMap_LuaButtonsImpl(WorldMap_LuaButtonsImpl *this)

{
  DAT_06b12cb8 = 0;
  return;
}


/* WorldMap_LuaButtonsImpl::~WorldMap_LuaButtonsImpl() */

void __thiscall WorldMap_LuaButtonsImpl::~WorldMap_LuaButtonsImpl(WorldMap_LuaButtonsImpl *this)

{
  ~WorldMap_LuaButtonsImpl(this);
  AK::FreeHook(this);
  return;
}


/* WorldMap_LuaButtonsImpl::WorldMap_LuaButtonsImpl() */

void __thiscall WorldMap_LuaButtonsImpl::WorldMap_LuaButtonsImpl(WorldMap_LuaButtonsImpl *this)

{
  DAT_06b12cb8 = this;
  *(undefined ***)this = &PTR__WorldMap_LuaButtonsImpl_06860e60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsImpl::NotifyLua(char const*, int) */

void __thiscall
WorldMap_LuaButtonsImpl::NotifyLua(WorldMap_LuaButtonsImpl *this,char *param_1,int param_2)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  iVar1 = *(int *)(this + 8);
  local_8 = ___stack_chk_guard;
  if ((param_1 != (char *)0x0) && (iVar1 != 0)) {
    std::string::string(asStack_10,param_1);
    Lua::CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,param_2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

