// Class: Lua::StackClean


/* Lua::StackClean::~StackClean() */

void __thiscall Lua::StackClean::~StackClean(StackClean *this)

{
  lua_settop(*(undefined8 *)this,*(undefined4 *)(this + 8));
  return;
}

