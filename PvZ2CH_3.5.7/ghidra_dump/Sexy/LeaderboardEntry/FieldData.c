// Class: Sexy::LeaderboardEntry::FieldData


/* Sexy::LeaderboardEntry::FieldData::FieldData() */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this)

{
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(float) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,float param_1)

{
  *(undefined4 *)this = 2;
  *(float *)(this + 8) = param_1;
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(int) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,int param_1)

{
  *(undefined4 *)this = 0;
  *(int *)(this + 8) = param_1;
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(long) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,long param_1)

{
  *(long *)(this + 8) = param_1;
  *(undefined4 *)this = 1;
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(double) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,double param_1)

{
  *(undefined4 *)this = 3;
  *(double *)(this + 8) = param_1;
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(std::wstring const&) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,wstring *param_1)

{
  undefined4 uVar1;
  wchar_t *__src;
  
  *(undefined4 *)this = 4;
  uVar1 = FUN_054765d0(param_1);
  *(undefined4 *)(this + 8) = uVar1;
  __src = (wchar_t *)FUN_054766ec(param_1);
  wcscpy((wchar_t *)(this + 0xc),__src);
  return;
}


/* Sexy::LeaderboardEntry::FieldData::FieldData(Sexy::Buffer const&) */

void __thiscall Sexy::LeaderboardEntry::FieldData::FieldData(FieldData *this,Buffer *param_1)

{
  undefined4 uVar1;
  void *__src;
  
  *(undefined4 *)this = 5;
  uVar1 = Buffer::GetDataLen(param_1);
  *(undefined4 *)(this + 8) = uVar1;
  __src = (void *)Buffer::GetDataPtr(param_1);
  memcpy(this + 0xc,__src,(ulong)*(uint *)(this + 8));
  return;
}

