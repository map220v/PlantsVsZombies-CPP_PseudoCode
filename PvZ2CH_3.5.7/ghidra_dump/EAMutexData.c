// Class: EAMutexData


/* EAMutexData::EAMutexData() */

void __thiscall EAMutexData::EAMutexData(EAMutexData *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


/* EAMutexData::SimulateLock(bool) */

void __thiscall EAMutexData::SimulateLock(EAMutexData *this,bool param_1)

{
  if (!param_1) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    return;
  }
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
  return;
}

