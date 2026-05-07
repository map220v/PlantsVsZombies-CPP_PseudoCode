// Class: WaveManagerInfo


/* WaveManagerInfo::WaveManagerInfo(WaveManagerInfo const&) */

void __thiscall WaveManagerInfo::WaveManagerInfo(WaveManagerInfo *this,WaveManagerInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  return;
}


/* WaveManagerInfo::~WaveManagerInfo() */

void __thiscall WaveManagerInfo::~WaveManagerInfo(WaveManagerInfo *this)

{
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  return;
}


/* WaveManagerInfo::WaveManagerInfo(WaveManagerInfo&&) */

void __thiscall WaveManagerInfo::WaveManagerInfo(WaveManagerInfo *this,WaveManagerInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05476584(this + 0x10,param_1 + 0x10);
  FUN_05476584(this + 0x18,param_1 + 0x18);
  return;
}

