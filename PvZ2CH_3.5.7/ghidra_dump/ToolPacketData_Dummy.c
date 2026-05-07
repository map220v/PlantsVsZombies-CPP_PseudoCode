// Class: ToolPacketData_Dummy


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_Dummy::GetCursorAnimRigOffset() const */

void ToolPacketData_Dummy::GetCursorAnimRigOffset(void)

{
  ResistenceValueInfo local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* ToolPacketData_Dummy::StaticGetClass() */

long * ToolPacketData_Dummy::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_Dummy",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_Dummy::GetClass() const */

long * ToolPacketData_Dummy::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_Dummy",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_Dummy::ToolPacketData_Dummy() */

void __thiscall ToolPacketData_Dummy::ToolPacketData_Dummy(ToolPacketData_Dummy *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849910;
  return;
}


/* ToolPacketData_Dummy::StaticNew() */

ToolPacketData_Dummy * ToolPacketData_Dummy::StaticNew(void)

{
  ToolPacketData_Dummy *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_Dummy(this);
  return this;
}


/* ToolPacketData_Dummy::~ToolPacketData_Dummy() */

void __thiscall ToolPacketData_Dummy::~ToolPacketData_Dummy(ToolPacketData_Dummy *this)

{
  *(undefined ***)this = &PTR_GetClass_06849910;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_Dummy::~ToolPacketData_Dummy() */

void __thiscall ToolPacketData_Dummy::~ToolPacketData_Dummy(ToolPacketData_Dummy *this)

{
  ~ToolPacketData_Dummy(this);
  AK::FreeHook(this);
  return;
}

