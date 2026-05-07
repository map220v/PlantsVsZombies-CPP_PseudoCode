// Class: EventTimesRecord


/* EventTimesRecord::EventTimesRecord(EventTimesRecord const&) */

void __thiscall EventTimesRecord::EventTimesRecord(EventTimesRecord *this,EventTimesRecord *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* EventTimesRecord::EventTimesRecord(EventTimesRecord&&) */

void __thiscall EventTimesRecord::EventTimesRecord(EventTimesRecord *this,EventTimesRecord *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}


/* EventTimesRecord::TEMPNAMEPLACEHOLDERVALUE(EventTimesRecord const&) */

EventTimesRecord * __thiscall
EventTimesRecord::operator=(EventTimesRecord *this,EventTimesRecord *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  return this;
}

