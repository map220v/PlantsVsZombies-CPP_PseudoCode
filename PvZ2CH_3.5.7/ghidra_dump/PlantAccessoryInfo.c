// Class: PlantAccessoryInfo


/* PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo const&) */

void __thiscall
PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* PlantAccessoryInfo::PlantAccessoryInfo() */

void __thiscall PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  *(undefined4 *)this = 0xffffffff;
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


void __thiscall
PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


void __thiscall
PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo&&) */

void __thiscall
PlantAccessoryInfo::PlantAccessoryInfo(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* PlantAccessoryInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAccessoryInfo&&) */

PlantAccessoryInfo * __thiscall
PlantAccessoryInfo::operator=(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474278(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}


/* PlantAccessoryInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAccessoryInfo const&) */

PlantAccessoryInfo * __thiscall
PlantAccessoryInfo::operator=(PlantAccessoryInfo *this,PlantAccessoryInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}


/* PlantAccessoryInfo::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

void __thiscall PlantAccessoryInfo::operator==(PlantAccessoryInfo *this,string *param_1)

{
  std::operator==(param_1,(string *)(this + 8));
  return;
}

