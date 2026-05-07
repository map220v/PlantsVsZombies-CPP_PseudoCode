// Class: WorldGateLevelKey


/* WorldGateLevelKey::SetValue(std::string, int, int) */

void __thiscall
WorldGateLevelKey::SetValue
          (WorldGateLevelKey *this,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_05475e00();
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  return;
}


/* WorldGateLevelKey::TEMPNAMEPLACEHOLDERVALUE(WorldGateLevelKey const&) const */

undefined8 __thiscall
WorldGateLevelKey::operator==(WorldGateLevelKey *this,WorldGateLevelKey *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = std::operator==((string *)this,(string *)param_1);
  return uVar1;
}

