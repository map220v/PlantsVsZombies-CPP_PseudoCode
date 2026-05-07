// Class: Sexy::RtSerialRtonReader


/* Sexy::RtSerialRtonReader::EndArray() */

void __thiscall Sexy::RtSerialRtonReader::EndArray(RtSerialRtonReader *this)

{
  FUN_0320674c(this + 0x18);
  return;
}


/* Sexy::RtSerialRtonReader::GetInnerScopeValue(Sexy::RtSerialRtonKey const&) */

undefined8 Sexy::RtSerialRtonReader::GetInnerScopeValue(RtSerialRtonKey *param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  cVar1 = std::
          vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
          ::empty((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                   *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    puVar3 = (uint *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(param_1 + 0x10));
    if (-1 < (int)puVar3[1]) {
      uVar4 = GetArrayIndexValue((RtSerialRtonReader *)param_1,*puVar3,puVar3[1]);
      puVar3[1] = puVar3[1] + 1;
      return uVar4;
    }
    uVar2 = GetChildNamed((uint)param_1,(string *)(ulong)*puVar3);
    if (uVar2 != 0) {
      uVar4 = GetKeyValue((RtSerialRtonReader *)param_1,uVar2);
      return uVar4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::BeginArray(Sexy::RtSerialRtonKey const&, unsigned int&) */

void __thiscall
Sexy::RtSerialRtonReader::BeginArray
          (RtSerialRtonReader *this,RtSerialRtonKey *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint local_14;
  ReaderScope aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  local_14 = GetInnerScopeValue((RtSerialRtonKey *)this);
  if (local_14 != 0) {
    cVar1 = GetValueIsArray(this,local_14);
    if (cVar1 != '\0') {
      ReaderScope::ReaderScope(aRStack_10,&local_14,0);
      std::
      vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
      ::push_back((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                   *)(this + 0x10),aRStack_10);
      uVar2 = GetArrayCount(this,local_14);
      *param_2 = uVar2;
      goto LAB_0323c804;
    }
  }
  cVar1 = '\0';
LAB_0323c804:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* Sexy::RtSerialRtonReader::EndObject() */

void __thiscall Sexy::RtSerialRtonReader::EndObject(RtSerialRtonReader *this)

{
  FUN_032fbd88(this + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetCurrentScope() const */

void __thiscall Sexy::RtSerialRtonReader::GetCurrentScope(RtSerialRtonReader *this)

{
  char cVar1;
  uint *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
          ::empty((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                   *)(this + 0x10));
  if (cVar1 == '\0') {
    puVar2 = (uint *)std::
                     vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                     ::back((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                             *)(this + 0x10));
    EA::Text::TextRun::TextRun((TextRun *)&local_18,(wchar16 *)this,*puVar2);
  }
  else {
    EA::Text::TextRun::TextRun((TextRun *)&local_18,(wchar16 *)this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::BeginObject(Sexy::RtSerialRtonKey const&) */

void Sexy::RtSerialRtonReader::BeginObject(RtSerialRtonKey *param_1)

{
  char cVar1;
  uint local_14;
  ReaderScope aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = GetInnerScopeValue(param_1);
  if (local_14 != 0) {
    cVar1 = GetValueIsObject((RtSerialRtonReader *)param_1,local_14);
    if (cVar1 != '\0') {
      ReaderScope::ReaderScope(aRStack_10,&local_14,-1);
      std::
      vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
      ::push_back((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                   *)(param_1 + 0x10),aRStack_10);
      goto LAB_03351f44;
    }
  }
  cVar1 = '\0';
LAB_03351f44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::RtSerialRtonReader::ReadInt32(Sexy::RtSerialRtonKey const&, int) */

void __thiscall
Sexy::RtSerialRtonReader::ReadInt32(RtSerialRtonReader *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue((RtSerialRtonKey *)this);
  GetInt32(this,uVar1,param_2);
  return;
}


/* int Sexy::RtSerialRtonReader::Read<int>(Sexy::RtSerialRtonKey const&) */

int __thiscall
Sexy::RtSerialRtonReader::Read<int>(RtSerialRtonReader *this,RtSerialRtonKey *param_1)

{
  int iVar1;
  
  iVar1 = ReadInt32(this,param_1,0);
  return iVar1;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* Sexy::RtSerialRtonReader::ReadString(Sexy::RtSerialRtonKey const&, std::string const&) */

void Sexy::RtSerialRtonReader::ReadString(RtSerialRtonKey *param_1,string *param_2)

{
  ulong uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetString((uint)param_1,(string *)(uVar1 & 0xffffffff));
  return;
}


/* std::string Sexy::RtSerialRtonReader::Read<std::string >(Sexy::RtSerialRtonKey const&) */

void Sexy::RtSerialRtonReader::Read<std::string>(RtSerialRtonKey *param_1)

{
  RtSerialRtonReader *in_x1;
  RtSerialRtonKey *in_x2;
  
  TReader<std::string>::Read((TReader<std::string> *)param_1,in_x1,in_x2);
  return;
}


/* Sexy::RtSerialRtonReader::ReadStringDirect(Sexy::RtSerialRtonKey const&) */

void Sexy::RtSerialRtonReader::ReadStringDirect(RtSerialRtonKey *param_1)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetStringDirect((RtSerialRtonReader *)param_1,uVar1);
  return;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* Sexy::RtSerialRtonReader::ReadUInt32(Sexy::RtSerialRtonKey const&, unsigned int) */

void __thiscall
Sexy::RtSerialRtonReader::ReadUInt32(RtSerialRtonReader *this,RtSerialRtonKey *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue((RtSerialRtonKey *)this);
  GetUInt32(this,uVar1,param_2);
  return;
}


/* unsigned int Sexy::RtSerialRtonReader::Read<unsigned int>(Sexy::RtSerialRtonKey const&) */

uint __thiscall
Sexy::RtSerialRtonReader::Read<unsigned_int>(RtSerialRtonReader *this,RtSerialRtonKey *param_1)

{
  uint uVar1;
  
  uVar1 = ReadUInt32(this,param_1,0);
  return uVar1;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* Sexy::RtSerialRtonReader::ReadRtId(Sexy::RtSerialRtonKey const&, Sexy::RtId const&) */

void Sexy::RtSerialRtonReader::ReadRtId(RtSerialRtonKey *param_1,RtId *param_2)

{
  ulong uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetRtId((uint)param_1,(RtId *)(uVar1 & 0xffffffff));
  return;
}


/* Sexy::RtSerialRtonReader::ReadBool(Sexy::RtSerialRtonKey const&, bool) */

void __thiscall
Sexy::RtSerialRtonReader::ReadBool(RtSerialRtonReader *this,RtSerialRtonKey *param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue((RtSerialRtonKey *)this);
  GetBool(this,uVar1,param_2);
  return;
}


/* Sexy::RtSerialRtonReader::ReadFloat(Sexy::RtSerialRtonKey const&, float) */

void Sexy::RtSerialRtonReader::ReadFloat(RtSerialRtonKey *param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetFloat((RtSerialRtonReader *)param_1,uVar1,param_2);
  return;
}


/* bool Sexy::RtSerialRtonReader::Read<bool>(Sexy::RtSerialRtonKey const&) */

bool __thiscall
Sexy::RtSerialRtonReader::Read<bool>(RtSerialRtonReader *this,RtSerialRtonKey *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ReadBool(this,param_1,false);
  return bVar1;
}


long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* Sexy::RtSerialRtonReader::EndDocumentObject() */

void __thiscall Sexy::RtSerialRtonReader::EndDocumentObject(RtSerialRtonReader *this)

{
  FUN_04b70190(this + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::BeginDocumentObject() */

void __thiscall Sexy::RtSerialRtonReader::BeginDocumentObject(RtSerialRtonReader *this)

{
  bool bVar1;
  uint local_14;
  ReaderScope aRStack_10 [8];
  long local_8;
  
  local_14 = *(uint *)(this + 0xc);
  local_8 = ___stack_chk_guard;
  bVar1 = local_14 != 0;
  if (bVar1) {
    ReaderScope::ReaderScope(aRStack_10,&local_14,-1);
    std::
    vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
    ::push_back((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
                 *)(this + 0x10),aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* Sexy::RtSerialRtonReader::ReadInt64(Sexy::RtSerialRtonKey const&, long) */

void __thiscall
Sexy::RtSerialRtonReader::ReadInt64(RtSerialRtonReader *this,RtSerialRtonKey *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue((RtSerialRtonKey *)this);
  GetInt64(this,uVar1,param_2);
  return;
}


/* Sexy::RtSerialRtonReader::ReadUInt64(Sexy::RtSerialRtonKey const&, unsigned long) */

void __thiscall
Sexy::RtSerialRtonReader::ReadUInt64
          (RtSerialRtonReader *this,RtSerialRtonKey *param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue((RtSerialRtonKey *)this);
  GetUInt64(this,uVar1,param_2);
  return;
}


/* Sexy::RtSerialRtonReader::ReadDouble(Sexy::RtSerialRtonKey const&, double) */

void Sexy::RtSerialRtonReader::ReadDouble(RtSerialRtonKey *param_1,double param_2)

{
  uint uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetDouble((RtSerialRtonReader *)param_1,uVar1,param_2);
  return;
}


/* Sexy::RtSerialRtonReader::ReadWString(Sexy::RtSerialRtonKey const&, std::wstring const&) */

void Sexy::RtSerialRtonReader::ReadWString(RtSerialRtonKey *param_1,wstring *param_2)

{
  ulong uVar1;
  
  uVar1 = GetInnerScopeValue(param_1);
  GetWString((uint)param_1,(wstring *)(uVar1 & 0xffffffff));
  return;
}


/* Sexy::RtSerialRtonReader::InitDecodeBuffer() */

undefined8 __thiscall Sexy::RtSerialRtonReader::InitDecodeBuffer(RtSerialRtonReader *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  RtSerialBuffer *this_00;
  
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28,0);
  FUN_051c7378(this_00 + 0x2d);
  iVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
  if (((iVar2 == 0x4e4f5452) && (sVar1 = RtSerialBuffer::ReadInt16Fixed(this_00), sVar1 == 1)) &&
     (sVar1 = RtSerialBuffer::ReadInt16Fixed(this_00), sVar1 == 1)) {
    uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
    *(undefined4 *)(this + 0xc) = uVar3;
    return 1;
  }
  return 0;
}


/* Sexy::RtSerialRtonReader::GetKeyValue(unsigned int) */

undefined8 __thiscall Sexy::RtSerialRtonReader::GetKeyValue(RtSerialRtonReader *this,uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    uVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    switch(uVar1) {
    case 0xb4:
    case 0xb6:
      iVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      RtSerialBuffer::SeekCurrent(this_00,iVar2);
      RtSerialBuffer::ReadInt32Fixed(this_00);
      uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      return uVar3;
    case 0xb5:
    case 0xb7:
      RtSerialBuffer::ReadInt32Fixed(this_00);
      RtSerialBuffer::ReadInt32Fixed(this_00);
      uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      return uVar3;
    }
  }
  return 0;
}


/* Sexy::RtSerialRtonReader::GetArrayCount(unsigned int) */

undefined8 __thiscall Sexy::RtSerialRtonReader::GetArrayCount(RtSerialRtonReader *this,uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (cVar1 == -0x47) {
      RtSerialBuffer::ReadInt8Fixed(this_00);
      uVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      return uVar2;
    }
  }
  return 0;
}


/* Sexy::RtSerialRtonReader::GetArrayIndexValue(unsigned int, unsigned int) */

undefined8 __thiscall
Sexy::RtSerialRtonReader::GetArrayIndexValue(RtSerialRtonReader *this,uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (cVar1 == -0x47) {
      RtSerialBuffer::ReadInt8Fixed(this_00);
      uVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      if (param_2 < uVar2) {
        RtSerialBuffer::SeekCurrent(this_00,param_2 << 2);
        uVar3 = RtSerialBuffer::ReadInt32Fixed(this_00);
        return uVar3;
      }
    }
  }
  return 0;
}


/* Sexy::RtSerialRtonReader::PeekTag() */

undefined1 __thiscall Sexy::RtSerialRtonReader::PeekTag(RtSerialRtonReader *this)

{
  long lVar1;
  ulong uVar2;
  RtSerialBuffer *this_00;
  
  this_00 = *(RtSerialBuffer **)this;
  lVar1 = RtSerialBuffer::GetDataPtr(this_00);
  uVar2 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
  return *(undefined1 *)(lVar1 + (uVar2 & 0xffffffff));
}


/* Sexy::RtSerialRtonReader::GetValueTag(unsigned int) */

undefined8 __thiscall Sexy::RtSerialRtonReader::GetValueTag(RtSerialRtonReader *this,uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xff;
  }
  FUN_051c6944(*(long *)this + 0x28);
  uVar1 = PeekTag(this);
  return uVar1;
}


/* Sexy::RtSerialRtonReader::GetValueIsObject(unsigned int) */

bool __thiscall Sexy::RtSerialRtonReader::GetValueIsObject(RtSerialRtonReader *this,uint param_1)

{
  int iVar1;
  
  iVar1 = GetValueTag(this,param_1);
  return iVar1 == 0xb8;
}


/* Sexy::RtSerialRtonReader::GetValueIsArray(unsigned int) */

bool __thiscall Sexy::RtSerialRtonReader::GetValueIsArray(RtSerialRtonReader *this,uint param_1)

{
  int iVar1;
  
  iVar1 = GetValueTag(this,param_1);
  return iVar1 == 0xb9;
}


/* Sexy::RtSerialRtonReader::GetFirstChild(unsigned int) */

undefined8 __thiscall Sexy::RtSerialRtonReader::GetFirstChild(RtSerialRtonReader *this,uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if ((cVar1 == -0x48) && (iVar2 = PeekTag(this), iVar2 != 0xff)) {
      uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      return uVar3;
    }
  }
  return 0;
}


/* Sexy::RtSerialRtonReader::GetNextSibling(unsigned int) */

undefined8 __thiscall
Sexy::RtSerialRtonReader::GetNextSibling(RtSerialRtonReader *this,uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RtSerialBuffer *this_00;
  
  if (param_1 == 0) {
    return 0;
  }
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    iVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
    RtSerialBuffer::SeekCurrent(this_00,iVar2);
    break;
  case 0xb5:
  case 0xb7:
    RtSerialBuffer::ReadInt32Fixed(this_00);
    break;
  default:
    goto switchD_051c9060_default;
  }
  uVar3 = RtSerialBuffer::ReadInt32Fixed(this_00);
  FUN_051c6944(this_00 + 0x28,uVar3);
switchD_051c9060_default:
  iVar2 = PeekTag(this);
  if (iVar2 == 0xff) {
    return 0;
  }
  uVar4 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
  return uVar4;
}


/* Sexy::RtSerialRtonReader::GetKeyName(unsigned int) */

long Sexy::RtSerialRtonReader::GetKeyName(uint param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  RtSerialBuffer *this;
  
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  lVar2 = 0;
  switch(uVar1) {
  case 0xb4:
  case 0xb6:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    uVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    return lVar2 + (uVar3 & 0xffffffff);
  case 0xb5:
  case 0xb7:
    uVar3 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar2 = RtSerialBuffer::GetDataPtr(this);
    lVar2 = lVar2 + (uVar3 & 0xffffffff);
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetBool(unsigned int, bool) */

void __thiscall
Sexy::RtSerialRtonReader::GetBool(RtSerialRtonReader *this,uint param_1,bool param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar8;
  double dVar9;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) goto LAB_051c9164;
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28);
  bVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
  if (bVar1 == 0x40) {
    lVar6 = RtSerialBuffer::ReadInt64Fixed(this_00);
    param_2 = lVar6 != 0;
    goto LAB_051c9164;
  }
  if (bVar1 < 0x41) {
    if (bVar1 == 0x12) {
      sVar3 = RtSerialBuffer::ReadUInt16Fixed(this_00);
      param_2 = sVar3 != 0;
      goto LAB_051c9164;
    }
    if (0x12 < bVar1) {
      if (bVar1 == 0x22) {
        fVar8 = (float)RtSerialBuffer::ReadFloat(this_00);
        param_2 = fVar8 != 0.0;
      }
      else if (bVar1 == 0x26) {
        iVar4 = RtSerialBuffer::ReadUInt32Fixed(this_00);
        param_2 = iVar4 != 0;
      }
      else if (bVar1 == 0x20) {
        iVar4 = RtSerialBuffer::ReadInt32Fixed(this_00);
        param_2 = iVar4 != 0;
      }
      goto LAB_051c9164;
    }
    if (bVar1 == 10) {
      cVar2 = RtSerialBuffer::ReadUInt8Fixed(this_00);
      param_2 = cVar2 != '\0';
      goto LAB_051c9164;
    }
    if (bVar1 == 0x10) {
      sVar3 = RtSerialBuffer::ReadInt16Fixed(this_00);
      param_2 = sVar3 != 0;
      goto LAB_051c9164;
    }
    if (bVar1 != 8) goto LAB_051c9164;
LAB_051c91d8:
    cVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
    param_2 = cVar2 != '\0';
  }
  else {
    if (bVar1 == 0xb1) {
      uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar6 = RtSerialBuffer::GetDataPtr(this_00);
      uVar5 = (uint)*(byte *)(lVar6 + (uVar7 & 0xffffffff));
    }
    else if (bVar1 < 0xb2) {
      if (bVar1 == 0x46) {
        lVar6 = RtSerialBuffer::ReadUInt64Fixed(this_00);
        param_2 = lVar6 != 0;
        goto LAB_051c9164;
      }
      if (bVar1 != 0xb0) {
        if (bVar1 == 0x42) {
          dVar9 = (double)RtSerialBuffer::ReadDouble(this_00);
          param_2 = dVar9 != 0.0;
        }
        goto LAB_051c9164;
      }
      RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar6 = RtSerialBuffer::GetDataPtr(this_00);
      uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      uVar5 = (uint)*(byte *)(lVar6 + (uVar7 & 0xffffffff));
    }
    else if (bVar1 == 0xb3) {
      uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar6 = RtSerialBuffer::GetDataPtr(this_00);
      uVar5 = *(uint *)(lVar6 + (uVar7 & 0xffffffff));
    }
    else {
      if (0xb2 < bVar1) {
        if (bVar1 == 0xba) {
          std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
          RtId::Serialize((RtId *)aeStack_10,this_00);
          param_2 = (bool)CompiledMap::Initialized((CompiledMap *)aeStack_10);
          RtId::~RtId((RtId *)aeStack_10);
          goto LAB_051c9164;
        }
        if (bVar1 != 0xbc) goto LAB_051c9164;
        goto LAB_051c91d8;
      }
      RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar6 = RtSerialBuffer::GetDataPtr(this_00);
      uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      uVar5 = *(uint *)(lVar6 + (uVar7 & 0xffffffff));
    }
    param_2 = uVar5 != 0x30 && uVar5 != 0;
  }
LAB_051c9164:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetInt64(unsigned int, long) */

void __thiscall
Sexy::RtSerialRtonReader::GetInt64(RtSerialRtonReader *this,uint param_1,long param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  char *__s;
  long lVar7;
  ulong uVar8;
  wchar_t *__s_00;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar9;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) goto LAB_051c93fc;
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28);
  bVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
  if (bVar2 == 0x40) {
    param_2 = RtSerialBuffer::ReadInt64Fixed(this_00);
    goto LAB_051c93fc;
  }
  if (bVar2 < 0x41) {
    if (bVar2 == 0x12) {
      uVar5 = RtSerialBuffer::ReadUInt16Fixed(this_00);
      param_2 = (long)uVar5;
      goto LAB_051c93fc;
    }
    if (0x12 < bVar2) {
      if (bVar2 == 0x22) {
        fVar9 = (float)RtSerialBuffer::ReadFloat(this_00);
        param_2 = (long)fVar9;
      }
      else if (bVar2 == 0x26) {
        uVar8 = RtSerialBuffer::ReadUInt32Fixed(this_00);
        param_2 = uVar8 & 0xffffffff;
      }
      else if (bVar2 == 0x20) {
        iVar6 = RtSerialBuffer::ReadInt32Fixed(this_00);
        param_2 = (long)iVar6;
      }
      goto LAB_051c93fc;
    }
    if (bVar2 == 10) {
      bVar2 = RtSerialBuffer::ReadUInt8Fixed(this_00);
      param_2 = (long)bVar2;
      goto LAB_051c93fc;
    }
    if (bVar2 == 0x10) {
      sVar4 = RtSerialBuffer::ReadInt16Fixed(this_00);
      param_2 = (long)sVar4;
      goto LAB_051c93fc;
    }
    if (bVar2 != 8) goto LAB_051c93fc;
LAB_051c9478:
    cVar3 = RtSerialBuffer::ReadInt8Fixed(this_00);
    param_2 = (long)cVar3;
  }
  else {
    if (bVar2 == 0xb1) {
      uVar8 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar7 = RtSerialBuffer::GetDataPtr(this_00);
      __s = (char *)(lVar7 + (uVar8 & 0xffffffff));
    }
    else {
      if (0xb1 < bVar2) {
        if (bVar2 == 0xb3) {
          uVar8 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar7 = RtSerialBuffer::GetDataPtr(this_00);
          __s_00 = (wchar_t *)(lVar7 + (uVar8 & 0xffffffff));
        }
        else {
          if (0xb2 < bVar2) {
            if (bVar2 == 0xba) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)&local_10,extraout_x1);
              RtId::Serialize((RtId *)&local_10,this_00);
              param_2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
              RtId::~RtId((RtId *)&local_10);
              goto LAB_051c93fc;
            }
            if (bVar2 != 0xbc) goto LAB_051c93fc;
            goto LAB_051c9478;
          }
          RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar7 = RtSerialBuffer::GetDataPtr(this_00);
          uVar8 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
          __s_00 = (wchar_t *)(lVar7 + (uVar8 & 0xffffffff));
        }
        local_10 = 0;
        swscanf(__s_00,L"%lld");
        param_2 = local_10;
        goto LAB_051c93fc;
      }
      if (bVar2 == 0x46) {
        param_2 = RtSerialBuffer::ReadUInt64Fixed(this_00);
        goto LAB_051c93fc;
      }
      if (bVar2 != 0xb0) {
        if (bVar2 == 0x42) {
          dVar1 = (double)RtSerialBuffer::ReadDouble(this_00);
          param_2 = (long)dVar1;
        }
        goto LAB_051c93fc;
      }
      RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar7 = RtSerialBuffer::GetDataPtr(this_00);
      uVar8 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      __s = (char *)(lVar7 + (uVar8 & 0xffffffff));
    }
    local_10 = 0;
    sscanf(__s,"%lld");
    param_2 = local_10;
  }
LAB_051c93fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetUInt64(unsigned int, unsigned long) */

void __thiscall
Sexy::RtSerialRtonReader::GetUInt64(RtSerialRtonReader *this,uint param_1,ulong param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  char *__s;
  long lVar7;
  ulong uVar8;
  wchar_t *__s_00;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar9;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) goto LAB_051c9688;
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28);
  bVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
  if (bVar2 == 0x40) {
    param_2 = RtSerialBuffer::ReadInt64Fixed(this_00);
    goto LAB_051c9688;
  }
  if (bVar2 < 0x41) {
    if (bVar2 == 0x12) {
      uVar5 = RtSerialBuffer::ReadUInt16Fixed(this_00);
      param_2 = (ulong)uVar5;
      goto LAB_051c9688;
    }
    if (0x12 < bVar2) {
      if (bVar2 == 0x22) {
        fVar9 = (float)RtSerialBuffer::ReadFloat(this_00);
        param_2 = (ulong)fVar9;
      }
      else if (bVar2 == 0x26) {
        uVar8 = RtSerialBuffer::ReadUInt32Fixed(this_00);
        param_2 = uVar8 & 0xffffffff;
      }
      else if (bVar2 == 0x20) {
        iVar6 = RtSerialBuffer::ReadInt32Fixed(this_00);
        param_2 = (ulong)iVar6;
      }
      goto LAB_051c9688;
    }
    if (bVar2 == 10) {
      bVar2 = RtSerialBuffer::ReadUInt8Fixed(this_00);
      param_2 = (ulong)bVar2;
      goto LAB_051c9688;
    }
    if (bVar2 == 0x10) {
      sVar4 = RtSerialBuffer::ReadInt16Fixed(this_00);
      param_2 = (ulong)sVar4;
      goto LAB_051c9688;
    }
    if (bVar2 != 8) goto LAB_051c9688;
LAB_051c9704:
    cVar3 = RtSerialBuffer::ReadInt8Fixed(this_00);
    param_2 = (ulong)cVar3;
  }
  else {
    if (bVar2 == 0xb1) {
      uVar8 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar7 = RtSerialBuffer::GetDataPtr(this_00);
      __s = (char *)(lVar7 + (uVar8 & 0xffffffff));
    }
    else {
      if (0xb1 < bVar2) {
        if (bVar2 == 0xb3) {
          uVar8 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar7 = RtSerialBuffer::GetDataPtr(this_00);
          __s_00 = (wchar_t *)(lVar7 + (uVar8 & 0xffffffff));
        }
        else {
          if (0xb2 < bVar2) {
            if (bVar2 == 0xba) {
              std::__exception_ptr::exception_ptr::exception_ptr
                        ((exception_ptr *)&local_10,extraout_x1);
              RtId::Serialize((RtId *)&local_10,this_00);
              param_2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
              RtId::~RtId((RtId *)&local_10);
              goto LAB_051c9688;
            }
            if (bVar2 != 0xbc) goto LAB_051c9688;
            goto LAB_051c9704;
          }
          RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar7 = RtSerialBuffer::GetDataPtr(this_00);
          uVar8 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
          __s_00 = (wchar_t *)(lVar7 + (uVar8 & 0xffffffff));
        }
        local_10 = 0;
        swscanf(__s_00,L"%llu");
        param_2 = local_10;
        goto LAB_051c9688;
      }
      if (bVar2 == 0x46) {
        param_2 = RtSerialBuffer::ReadUInt64Fixed(this_00);
        goto LAB_051c9688;
      }
      if (bVar2 != 0xb0) {
        if (bVar2 == 0x42) {
          dVar1 = (double)RtSerialBuffer::ReadDouble(this_00);
          param_2 = (ulong)dVar1;
        }
        goto LAB_051c9688;
      }
      RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar7 = RtSerialBuffer::GetDataPtr(this_00);
      uVar8 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
      __s = (char *)(lVar7 + (uVar8 & 0xffffffff));
    }
    local_10 = 0;
    sscanf(__s,"%llu");
    param_2 = local_10;
  }
LAB_051c9688:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetFloat(unsigned int, float) */

void __thiscall
Sexy::RtSerialRtonReader::GetFloat(RtSerialRtonReader *this,uint param_1,float param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  undefined4 in_register_00005004;
  double dVar9;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  uVar7 = CONCAT44(in_register_00005004,param_2);
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) goto LAB_051c9918;
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(uVar7,this_00 + 0x28);
  bVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
  if (bVar1 == 0x40) {
    lVar8 = RtSerialBuffer::ReadInt64Fixed(this_00);
    uVar7 = (ulong)(uint)(float)lVar8;
    goto LAB_051c9918;
  }
  if (bVar1 < 0x41) {
    if (bVar1 == 0x12) {
      uVar4 = RtSerialBuffer::ReadUInt16Fixed(this_00);
      uVar7 = (ulong)(uint)(float)uVar4;
      goto LAB_051c9918;
    }
    if (bVar1 < 0x13) {
      if (bVar1 == 10) {
        bVar1 = RtSerialBuffer::ReadUInt8Fixed(this_00);
        uVar7 = (ulong)(uint)(float)bVar1;
        goto LAB_051c9918;
      }
      if (bVar1 == 0x10) {
        sVar3 = RtSerialBuffer::ReadInt16Fixed(this_00);
        uVar7 = (ulong)(uint)(float)(int)sVar3;
        goto LAB_051c9918;
      }
      if (bVar1 == 8) {
LAB_051c998c:
        cVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
        uVar7 = (ulong)(uint)(float)(int)cVar2;
        goto LAB_051c9918;
      }
    }
    else {
      if (bVar1 == 0x22) {
        uVar7 = RtSerialBuffer::ReadFloat(this_00);
        goto LAB_051c9918;
      }
      if (bVar1 == 0x26) {
        uVar6 = RtSerialBuffer::ReadUInt32Fixed(this_00);
        uVar7 = (ulong)(uint)(float)uVar6;
        goto LAB_051c9918;
      }
      if (bVar1 == 0x20) {
        iVar5 = RtSerialBuffer::ReadInt32Fixed(this_00);
        uVar7 = (ulong)(uint)(float)iVar5;
        goto LAB_051c9918;
      }
    }
  }
  else {
    if (bVar1 == 0xb1) {
      uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar8 = RtSerialBuffer::GetDataPtr(this_00);
      dVar9 = atof((char *)(lVar8 + (uVar7 & 0xffffffff)));
      uVar7 = (ulong)(uint)(float)dVar9;
      goto LAB_051c9918;
    }
    if (bVar1 < 0xb2) {
      if (bVar1 == 0x46) {
        uVar7 = RtSerialBuffer::ReadUInt64Fixed(this_00);
        uVar7 = (ulong)(uint)(float)uVar7;
        goto LAB_051c9918;
      }
      if (bVar1 == 0xb0) {
        RtSerialBuffer::ReadInt32Fixed(this_00);
        lVar8 = RtSerialBuffer::GetDataPtr(this_00);
        uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        dVar9 = atof((char *)(lVar8 + (uVar7 & 0xffffffff)));
        uVar7 = (ulong)(uint)(float)dVar9;
        goto LAB_051c9918;
      }
      if (bVar1 == 0x42) {
        dVar9 = (double)RtSerialBuffer::ReadDouble(this_00);
        uVar7 = (ulong)(uint)(float)dVar9;
        goto LAB_051c9918;
      }
    }
    else {
      if (bVar1 == 0xb3) {
        uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
        lVar8 = RtSerialBuffer::GetDataPtr(this_00);
        uVar7 = _wtof((wchar_t *)(lVar8 + (uVar7 & 0xffffffff)));
        goto LAB_051c9918;
      }
      if (bVar1 < 0xb3) {
        RtSerialBuffer::ReadInt32Fixed(this_00);
        lVar8 = RtSerialBuffer::GetDataPtr(this_00);
        uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        uVar7 = _wtof((wchar_t *)(lVar8 + (uVar7 & 0xffffffff)));
        goto LAB_051c9918;
      }
      if (bVar1 == 0xba) {
        std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
        RtId::Serialize((RtId *)aeStack_10,this_00);
        uVar7 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
        uVar7 = (ulong)(uint)(float)uVar7;
        RtId::~RtId((RtId *)aeStack_10);
        goto LAB_051c9918;
      }
      if (bVar1 == 0xbc) goto LAB_051c998c;
    }
  }
  uVar7 = (ulong)(uint)param_2;
LAB_051c9918:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetDouble(unsigned int, double) */

void __thiscall
Sexy::RtSerialRtonReader::GetDouble(RtSerialRtonReader *this,uint param_1,double param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar9;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    bVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (bVar1 == 0x40) {
      lVar8 = RtSerialBuffer::ReadInt64Fixed(this_00);
      param_2 = (double)lVar8;
    }
    else {
      if (bVar1 < 0x41) {
        if (bVar1 == 0x12) {
          uVar4 = RtSerialBuffer::ReadUInt16Fixed(this_00);
          param_2 = (double)uVar4;
          goto LAB_051c9b94;
        }
        if (0x12 < bVar1) {
          if (bVar1 == 0x22) {
            fVar9 = (float)RtSerialBuffer::ReadFloat(this_00);
            param_2 = (double)fVar9;
          }
          else if (bVar1 == 0x26) {
            uVar6 = RtSerialBuffer::ReadUInt32Fixed(this_00);
            param_2 = (double)uVar6;
          }
          else if (bVar1 == 0x20) {
            iVar5 = RtSerialBuffer::ReadInt32Fixed(this_00);
            param_2 = (double)iVar5;
          }
          goto LAB_051c9b94;
        }
        if (bVar1 == 10) {
          bVar1 = RtSerialBuffer::ReadUInt8Fixed(this_00);
          param_2 = (double)bVar1;
          goto LAB_051c9b94;
        }
        if (bVar1 == 0x10) {
          sVar3 = RtSerialBuffer::ReadInt16Fixed(this_00);
          param_2 = (double)(int)sVar3;
          goto LAB_051c9b94;
        }
        if (bVar1 != 8) goto LAB_051c9b94;
      }
      else {
        if (bVar1 == 0xb1) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar8 = RtSerialBuffer::GetDataPtr(this_00);
          param_2 = atof((char *)(lVar8 + (uVar7 & 0xffffffff)));
          goto LAB_051c9b94;
        }
        if (bVar1 < 0xb2) {
          if (bVar1 == 0x46) {
            uVar7 = RtSerialBuffer::ReadUInt64Fixed(this_00);
            param_2 = (double)uVar7;
          }
          else if (bVar1 == 0xb0) {
            RtSerialBuffer::ReadInt32Fixed(this_00);
            lVar8 = RtSerialBuffer::GetDataPtr(this_00);
            uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
            param_2 = atof((char *)(lVar8 + (uVar7 & 0xffffffff)));
          }
          else if (bVar1 == 0x42) {
            param_2 = (double)RtSerialBuffer::ReadDouble(this_00);
          }
          goto LAB_051c9b94;
        }
        if (bVar1 == 0xb3) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar8 = RtSerialBuffer::GetDataPtr(this_00);
          fVar9 = (float)_wtof((wchar_t *)(lVar8 + (uVar7 & 0xffffffff)));
          param_2 = (double)fVar9;
          goto LAB_051c9b94;
        }
        if (bVar1 < 0xb3) {
          RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar8 = RtSerialBuffer::GetDataPtr(this_00);
          uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
          fVar9 = (float)_wtof((wchar_t *)(lVar8 + (uVar7 & 0xffffffff)));
          param_2 = (double)fVar9;
          goto LAB_051c9b94;
        }
        if (bVar1 == 0xba) {
          std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
          RtId::Serialize((RtId *)aeStack_10,this_00);
          uVar7 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
          param_2 = (double)uVar7;
          RtId::~RtId((RtId *)aeStack_10);
          goto LAB_051c9b94;
        }
        if (bVar1 != 0xbc) goto LAB_051c9b94;
      }
      cVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
      param_2 = (double)(int)cVar2;
    }
  }
LAB_051c9b94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* Sexy::RtSerialRtonReader::GetStringDirect(unsigned int) */

long __thiscall Sexy::RtSerialRtonReader::GetStringDirect(RtSerialRtonReader *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (cVar1 == -0x50) {
      uVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      if (1 < uVar2) {
        lVar4 = RtSerialBuffer::GetDataPtr(this_00);
        uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        return lVar4 + (uVar3 & 0xffffffff);
      }
      lVar4 = FUN_0547429c(&DAT_06bbdc08);
      return lVar4;
    }
    if (cVar1 == -0x4f) {
      uVar3 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar4 = RtSerialBuffer::GetDataPtr(this_00);
      return lVar4 + (uVar3 & 0xffffffff);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetString(unsigned int, std::string const&) */

void Sexy::RtSerialRtonReader::GetString(uint param_1,string *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  wstring *extraout_x1;
  string *in_x8;
  RtSerialBuffer *this;
  float fVar11;
  exception_ptr aeStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_2 == 0) {
switchD_051c9f3c_caseD_9:
    FUN_05475d88();
    goto LAB_051c9efc;
  }
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  switch(uVar1) {
  case 8:
    cVar2 = RtSerialBuffer::ReadInt8Fixed(this);
    StrFormat("%d",(ulong)(uint)(int)cVar2);
    break;
  default:
    goto switchD_051c9f3c_caseD_9;
  case 10:
    bVar3 = RtSerialBuffer::ReadUInt8Fixed(this);
    StrFormat("%d",(ulong)bVar3);
    break;
  case 0x10:
    sVar4 = RtSerialBuffer::ReadInt16Fixed(this);
    StrFormat("%d",(ulong)(uint)(int)sVar4);
    break;
  case 0x12:
    uVar5 = RtSerialBuffer::ReadUInt16Fixed(this);
    StrFormat("%d",(ulong)uVar5);
    break;
  case 0x20:
    uVar8 = RtSerialBuffer::ReadInt32Fixed(this);
    goto LAB_051c9ffc;
  case 0x22:
    fVar11 = (float)RtSerialBuffer::ReadFloat(this);
    StrFormat("%f",(double)fVar11);
    break;
  case 0x26:
    uVar8 = RtSerialBuffer::ReadUInt32Fixed(this);
LAB_051c9ffc:
    StrFormat("%d",uVar8 & 0xffffffff);
    break;
  case 0x40:
    uVar7 = RtSerialBuffer::ReadInt64Fixed(this);
    goto LAB_051ca048;
  case 0x42:
    RtSerialBuffer::ReadDouble(this);
    StrFormat("%f");
    break;
  case 0x46:
    uVar7 = RtSerialBuffer::ReadUInt64Fixed(this);
LAB_051ca048:
    StrFormat("%li",uVar7);
    break;
  case 0xb0:
    uVar6 = RtSerialBuffer::ReadInt32Fixed(this);
    if (uVar6 < 2) {
LAB_051ca22c:
      FUN_05475d88();
      break;
    }
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    uVar8 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    pcVar10 = (char *)(lVar9 + (uVar8 & 0xffffffff));
    goto LAB_051ca0b4;
  case 0xb1:
    uVar8 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    pcVar10 = (char *)(lVar9 + (uVar8 & 0xffffffff));
LAB_051ca0b4:
    std::string::string(in_x8,pcVar10);
    nop();
    break;
  case 0xb2:
    uVar6 = RtSerialBuffer::ReadInt32Fixed(this);
    if (uVar6 < 2) goto LAB_051ca22c;
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    uVar8 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    lVar9 = lVar9 + (uVar8 & 0xffffffff);
    goto LAB_051ca11c;
  case 0xb3:
    uVar8 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    lVar9 = lVar9 + (uVar8 & 0xffffffff);
LAB_051ca11c:
    FUN_05478178(aSStack_10,lVar9,aeStack_18);
    WStringToUTF8String(aSStack_10,extraout_x1);
    FUN_05476c50(aSStack_10);
    nop();
    break;
  case 0xb8:
    std::string::string(in_x8,"<Object>");
    nop();
    break;
  case 0xb9:
    std::string::string(in_x8,"<Array>");
    nop();
    break;
  case 0xba:
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_18,(_func_void *)0x51c9f40);
    RtId::Serialize((RtId *)aeStack_18,this);
    Set8BytesTo0((string *)aSStack_10);
    RtId::ToString((RtId *)aeStack_18,(string *)aSStack_10,false);
    FUN_05474148();
    std::string::~string((string *)aSStack_10);
    RtId::~RtId((RtId *)aeStack_18);
    break;
  case 0xbb:
    std::string::string(in_x8,"<BinaryBlob>");
    nop();
    break;
  case 0xbc:
    cVar2 = RtSerialBuffer::ReadInt8Fixed(this);
    if (cVar2 == '\0') {
      pcVar10 = "false";
    }
    else {
      pcVar10 = "true";
    }
    std::string::string(in_x8,pcVar10);
    nop();
  }
LAB_051c9efc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonReader::GetWStringDirect(unsigned int) */

long __thiscall Sexy::RtSerialRtonReader::GetWStringDirect(RtSerialRtonReader *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  RtSerialBuffer *this_00;
  
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (cVar1 == -0x4e) {
      uVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      if (1 < uVar2) {
        lVar4 = RtSerialBuffer::GetDataPtr(this_00);
        uVar3 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        return lVar4 + (uVar3 & 0xffffffff);
      }
      lVar4 = FUN_054766ec(&DAT_06bbdc10);
      return lVar4;
    }
    if (cVar1 == -0x4d) {
      uVar3 = RtSerialBuffer::ReadInt32Fixed(this_00);
      lVar4 = RtSerialBuffer::GetDataPtr(this_00);
      return lVar4 + (uVar3 & 0xffffffff);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetWString(unsigned int, std::wstring const&) */

void Sexy::RtSerialRtonReader::GetWString(uint param_1,wstring *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *__s;
  string *extraout_x1;
  RtSerialBuffer *this;
  float fVar10;
  exception_ptr aeStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_2 == 0) {
switchD_051ca3a8_caseD_9:
    FUN_05477b24();
    goto LAB_051ca368;
  }
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  switch(uVar1) {
  case 8:
    cVar2 = RtSerialBuffer::ReadInt8Fixed(this);
    StrFormat(L"%d",(ulong)(uint)(int)cVar2);
    break;
  default:
    goto switchD_051ca3a8_caseD_9;
  case 10:
    bVar3 = RtSerialBuffer::ReadUInt8Fixed(this);
    StrFormat(L"%d",(ulong)bVar3);
    break;
  case 0x10:
    sVar4 = RtSerialBuffer::ReadInt16Fixed(this);
    StrFormat(L"%d",(ulong)(uint)(int)sVar4);
    break;
  case 0x12:
    uVar5 = RtSerialBuffer::ReadUInt16Fixed(this);
    StrFormat(L"%d",(ulong)uVar5);
    break;
  case 0x20:
    uVar8 = RtSerialBuffer::ReadInt32Fixed(this);
    goto LAB_051ca468;
  case 0x22:
    fVar10 = (float)RtSerialBuffer::ReadFloat(this);
    StrFormat(L"%f",(double)fVar10);
    break;
  case 0x26:
    uVar8 = RtSerialBuffer::ReadUInt32Fixed(this);
LAB_051ca468:
    StrFormat(L"%d",uVar8 & 0xffffffff);
    break;
  case 0x40:
    uVar7 = RtSerialBuffer::ReadInt64Fixed(this);
    goto LAB_051ca4b4;
  case 0x42:
    RtSerialBuffer::ReadDouble(this);
    StrFormat(L"%f");
    break;
  case 0x46:
    uVar7 = RtSerialBuffer::ReadUInt64Fixed(this);
LAB_051ca4b4:
    StrFormat(L"%li",uVar7);
    break;
  case 0xb0:
    uVar6 = RtSerialBuffer::ReadInt32Fixed(this);
    if (uVar6 < 2) {
LAB_051ca698:
      FUN_05477b24();
      break;
    }
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    uVar8 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    __s = (char *)(lVar9 + (uVar8 & 0xffffffff));
    goto LAB_051ca524;
  case 0xb1:
    uVar8 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar9 = RtSerialBuffer::GetDataPtr(this);
    __s = (char *)(lVar9 + (uVar8 & 0xffffffff));
LAB_051ca524:
    std::string::string(asStack_10,__s);
    UTF8StringToWString((Sexy *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    break;
  case 0xb2:
    uVar6 = RtSerialBuffer::ReadInt32Fixed(this);
    if (uVar6 < 2) goto LAB_051ca698;
    RtSerialBuffer::GetDataPtr(this);
    FUN_051c694c(*(undefined4 *)(this + 0x28));
    goto LAB_051ca5a0;
  case 0xb3:
    RtSerialBuffer::ReadInt32Fixed(this);
    RtSerialBuffer::GetDataPtr(this);
LAB_051ca5a0:
    FUN_05478178();
    nop();
    break;
  case 0xb8:
    FUN_05478178();
    nop();
    break;
  case 0xb9:
    FUN_05478178();
    nop();
    break;
  case 0xba:
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_18,(_func_void *)0x51ca3ac);
    RtId::Serialize((RtId *)aeStack_18,this);
    FUN_05476574((wstring *)asStack_10);
    RtId::ToString((RtId *)aeStack_18,(wstring *)asStack_10,false);
    FUN_05476584();
    FUN_05476c50((wstring *)asStack_10);
    RtId::~RtId((RtId *)aeStack_18);
    break;
  case 0xbb:
    FUN_05478178();
    nop();
    break;
  case 0xbc:
    RtSerialBuffer::ReadInt8Fixed(this);
    FUN_05478178();
    nop();
  }
LAB_051ca368:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetRtId(unsigned int, Sexy::RtId const&) */

void Sexy::RtSerialRtonReader::GetRtId(uint param_1,RtId *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  wstring *extraout_x1;
  char *__s;
  string *extraout_x1_00;
  RtId *in_x2;
  RtId *in_x8;
  RtSerialBuffer *this;
  undefined1 auStack_18 [8];
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_2 == 0) {
switchD_051ca760_caseD_9:
    RtId::RtId(in_x8,in_x2);
    goto LAB_051ca720;
  }
  this = *(RtSerialBuffer **)(ulong)param_1;
  FUN_051c6944(this + 0x28);
  uVar1 = RtSerialBuffer::ReadInt8Fixed(this);
  switch(uVar1) {
  case 8:
  case 10:
  case 0x10:
  case 0x12:
  case 0x20:
  case 0x22:
  case 0x26:
  case 0x42:
  case 0xbc:
    std::__exception_ptr::exception_ptr::exception_ptr
              ((exception_ptr *)in_x8,(_func_void *)0x51ca764);
    break;
  default:
    goto switchD_051ca760_caseD_9;
  case 0x40:
    uVar2 = RtSerialBuffer::ReadInt64Fixed(this);
    RtId::RtId(in_x8,uVar2);
    break;
  case 0x46:
    uVar2 = RtSerialBuffer::ReadUInt64Fixed(this);
    RtId::RtId(in_x8,uVar2);
    break;
  case 0xb0:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar3 = RtSerialBuffer::GetDataPtr(this);
    uVar2 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    __s = (char *)(lVar3 + (uVar2 & 0xffffffff));
    goto LAB_051ca850;
  case 0xb1:
    uVar2 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar3 = RtSerialBuffer::GetDataPtr(this);
    __s = (char *)(lVar3 + (uVar2 & 0xffffffff));
LAB_051ca850:
    std::string::string((string *)aeStack_10,__s);
    RtId::StaticParse((RtId *)aeStack_10,extraout_x1_00);
    std::string::~string((string *)aeStack_10);
    nop();
    break;
  case 0xb2:
    RtSerialBuffer::ReadInt32Fixed(this);
    lVar3 = RtSerialBuffer::GetDataPtr(this);
    uVar2 = FUN_051c694c(*(undefined4 *)(this + 0x28));
    lVar3 = lVar3 + (uVar2 & 0xffffffff);
    goto LAB_051ca7d8;
  case 0xb3:
    uVar2 = RtSerialBuffer::ReadInt32Fixed(this);
    lVar3 = RtSerialBuffer::GetDataPtr(this);
    lVar3 = lVar3 + (uVar2 & 0xffffffff);
LAB_051ca7d8:
    FUN_05478178((RtId *)aeStack_10,lVar3,auStack_18);
    RtId::StaticParse((RtId *)aeStack_10,extraout_x1);
    FUN_05476c50((RtId *)aeStack_10);
    nop();
    break;
  case 0xba:
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,(_func_void *)0x51ca764);
    RtId::Serialize((RtId *)aeStack_10,this);
    RtId::RtId(in_x8,(RtId *)aeStack_10);
    RtId::~RtId((RtId *)aeStack_10);
  }
LAB_051ca720:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetInvokeVariant(unsigned int, Sexy::RtInvokeVariant&) */

void __thiscall
Sexy::RtSerialRtonReader::GetInvokeVariant
          (RtSerialRtonReader *this,uint param_1,RtInvokeVariant *param_2)

{
  double dVar1;
  undefined1 uVar2;
  uchar uVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  wchar_t *pwVar12;
  RtSerialBuffer *this_00;
  float fVar13;
  exception_ptr aeStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
LAB_051ca920:
    LeaderboardEntry::FieldData::FieldData((FieldData *)&local_18,0);
    uVar9 = 0;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    goto LAB_051ca934;
  }
  this_00 = *(RtSerialBuffer **)this;
  FUN_051c6944(this_00 + 0x28);
  uVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
  switch(uVar2) {
  case 8:
    uVar7 = RtSerialBuffer::ReadInt8Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar7);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  default:
    goto LAB_051ca920;
  case 10:
    uVar3 = RtSerialBuffer::ReadUInt8Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar3);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x10:
    sVar5 = RtSerialBuffer::ReadInt16Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,sVar5);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x12:
    uVar6 = RtSerialBuffer::ReadUInt16Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar6);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x20:
    iVar8 = RtSerialBuffer::ReadInt32Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,iVar8);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x22:
    fVar13 = (float)RtSerialBuffer::ReadFloat(this_00);
    LeaderboardEntry::FieldData::FieldData((FieldData *)&local_18,fVar13);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x26:
    iVar8 = RtSerialBuffer::ReadUInt32Fixed(this_00);
    LeaderboardEntry::FieldData::FieldData((FieldData *)&local_18,iVar8);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x40:
    lVar11 = RtSerialBuffer::ReadInt64Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,lVar11);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x42:
    dVar1 = (double)RtSerialBuffer::ReadDouble(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,dVar1);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0x46:
    uVar10 = RtSerialBuffer::ReadUInt64Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar10);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0xb0:
    RtSerialBuffer::ReadInt32Fixed(this_00);
    lVar11 = RtSerialBuffer::GetDataPtr(this_00);
    uVar10 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
    pwVar12 = (wchar_t *)(lVar11 + (uVar10 & 0xffffffff));
    goto LAB_051cab68;
  case 0xb1:
    uVar10 = RtSerialBuffer::ReadInt32Fixed(this_00);
    lVar11 = RtSerialBuffer::GetDataPtr(this_00);
    pwVar12 = (wchar_t *)(lVar11 + (uVar10 & 0xffffffff));
LAB_051cab68:
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,pwVar12);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0xb2:
    RtSerialBuffer::ReadInt32Fixed(this_00);
    lVar11 = RtSerialBuffer::GetDataPtr(this_00);
    uVar10 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
    pwVar12 = (wchar_t *)(lVar11 + (uVar10 & 0xffffffff));
    goto LAB_051cabc4;
  case 0xb3:
    uVar10 = RtSerialBuffer::ReadInt32Fixed(this_00);
    lVar11 = RtSerialBuffer::GetDataPtr(this_00);
    pwVar12 = (wchar_t *)(lVar11 + (uVar10 & 0xffffffff));
LAB_051cabc4:
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,pwVar12);
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    break;
  case 0xba:
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_20,(_func_void *)0x51ca974);
    RtId::Serialize((RtId *)aeStack_20,this_00);
    uVar10 = std::__exception_ptr::exception_ptr::_M_get(aeStack_20);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,uVar10);
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
    RtId::~RtId((RtId *)aeStack_20);
    uVar9 = 1;
    break;
  case 0xbc:
    cVar4 = RtSerialBuffer::ReadInt8Fixed(this_00);
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,cVar4 != '\0');
    uVar9 = 1;
    *(undefined8 *)param_2 = local_18;
    *(undefined8 *)(param_2 + 8) = uStack_10;
  }
LAB_051ca934:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* Sexy::RtSerialRtonReader::RtSerialRtonReader(Sexy::RtSerialRtonDecodeBuffer*) */

void __thiscall
Sexy::RtSerialRtonReader::RtSerialRtonReader
          (RtSerialRtonReader *this,RtSerialRtonDecodeBuffer *param_1)

{
  *(RtSerialRtonDecodeBuffer **)this = param_1;
  this[8] = (RtSerialRtonReader)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  InitDecodeBuffer(this);
  return;
}


/* Sexy::RtSerialRtonReader::~RtSerialRtonReader() */

void __thiscall Sexy::RtSerialRtonReader::~RtSerialRtonReader(RtSerialRtonReader *this)

{
  RtSerialRtonDecodeBuffer *this_00;
  
  if ((this[8] != (RtSerialRtonReader)0x0) &&
     (this_00 = *(RtSerialRtonDecodeBuffer **)this, this_00 != (RtSerialRtonDecodeBuffer *)0x0)) {
    RtSerialRtonDecodeBuffer::~RtSerialRtonDecodeBuffer(this_00);
    AK::FreeHook(this_00);
  }
  std::
  vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
  ::~vector((vector<Sexy::RtSerialRtonReader::ReaderScope,std::allocator<Sexy::RtSerialRtonReader::ReaderScope>>
             *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetChildNamed(unsigned int, std::string const&) */

void Sexy::RtSerialRtonReader::GetChildNamed(uint param_1,string *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  RtSerialBuffer *this;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  plVar5 = (long *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if ((int)param_2 != 0) {
    FUN_051cb130(local_28,*(undefined8 *)(*plVar5 + 0x38),*(undefined8 *)(*plVar5 + 0x40));
    FUN_051c8cac(local_18,*(undefined8 *)(*plVar5 + 0x38),*(undefined8 *)(*plVar5 + 0x40));
    cVar1 = FUN_051c6988(local_28[0],local_18[0]);
    if (cVar1 == '\0') {
      this = (RtSerialBuffer *)*plVar5;
      FUN_051c6944(this + 0x28,(ulong)param_2 & 0xffffffff);
      cVar1 = RtSerialBuffer::ReadInt8Fixed(this);
      if (cVar1 == -0x48) {
        uVar2 = FUN_051c694c(*(undefined4 *)(this + 0x28));
        cVar1 = RtSerialBuffer::ReadInt8Fixed(this);
        while (cVar1 != -1) {
          switch(cVar1) {
          case -0x4c:
          case -0x4a:
            iVar4 = RtSerialBuffer::ReadInt32Fixed(this);
            lVar6 = FUN_051c696c(local_28[0]);
            iVar3 = FUN_051c694c(*(undefined4 *)(this + 0x28));
            if (*(int *)(lVar6 + 8) == iVar3) goto LAB_051cb1f4;
            RtSerialBuffer::SeekCurrent(this,iVar4);
            break;
          case -0x4b:
          case -0x49:
            iVar4 = RtSerialBuffer::ReadInt32Fixed(this);
            lVar6 = FUN_051c696c(local_28[0]);
            if (iVar4 == *(int *)(lVar6 + 8)) goto LAB_051cb1f4;
            break;
          default:
            goto switchD_051cb2c4_default;
          }
          uVar2 = RtSerialBuffer::ReadInt32Fixed(this);
          FUN_051c6944(this + 0x28,uVar2);
switchD_051cb2c4_default:
          uVar2 = FUN_051c694c(*(undefined4 *)(this + 0x28));
          cVar1 = RtSerialBuffer::ReadInt8Fixed(this);
        }
      }
    }
  }
  uVar2 = 0;
LAB_051cb1f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetBinaryBlob(unsigned int, Sexy::RtSerialBuffer*, std::string&) */

void __thiscall
Sexy::RtSerialRtonReader::GetBinaryBlob
          (RtSerialRtonReader *this,uint param_1,RtSerialBuffer *param_2,string *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  RtSerialBuffer *__n;
  RtSerialBuffer *this_00;
  char *__s;
  RtSerialBuffer aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    __n = param_2;
    FUN_051c6944(this_00 + 0x28);
    cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (cVar1 == -0x45) {
      cVar1 = RtSerialBuffer::ReadInt8Fixed(this_00);
      if (cVar1 == -0x50) {
        iVar3 = RtSerialBuffer::ReadInt32Fixed(this_00);
        lVar5 = RtSerialBuffer::GetDataPtr(this_00);
        uVar6 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        __s = (char *)(lVar5 + (uVar6 & 0xffffffff));
        RtSerialBuffer::SeekCurrent(this_00,iVar3);
      }
      else if (cVar1 == -0x4f) {
        uVar6 = RtSerialBuffer::ReadInt32Fixed(this_00);
        lVar5 = RtSerialBuffer::GetDataPtr(this_00);
        __s = (char *)(lVar5 + (uVar6 & 0xffffffff));
      }
      else {
        __s = "";
      }
      std::string::append(param_3,__s,(size_t)__n);
      uVar2 = RtSerialBuffer::ReadInt32Fixed(this_00);
      if (param_2 == (RtSerialBuffer *)0x0) {
        uVar4 = 1;
      }
      else {
        lVar5 = RtSerialBuffer::GetDataPtr(this_00);
        uVar6 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
        RtSerialBuffer::RtSerialBuffer(aRStack_38,(uchar *)(lVar5 + (uVar6 & 0xffffffff)),uVar2);
        RtSerialBuffer::operator=(param_2,aRStack_38);
        RtSerialBuffer::~RtSerialBuffer(aRStack_38);
        uVar4 = 1;
      }
      goto LAB_051cb88c;
    }
  }
  uVar4 = 0;
LAB_051cb88c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetInt32(unsigned int, int) */

void __thiscall
Sexy::RtSerialRtonReader::GetInt32(RtSerialRtonReader *this,uint param_1,int param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar8;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    bVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (bVar2 == 0x40) {
      param_2 = RtSerialBuffer::ReadInt64Fixed(this_00);
    }
    else {
      if (bVar2 < 0x41) {
        if (bVar2 == 0x12) {
          uVar5 = RtSerialBuffer::ReadUInt16Fixed(this_00);
          param_2 = (int)uVar5;
          goto LAB_051cba34;
        }
        if (0x12 < bVar2) {
          if (bVar2 == 0x22) {
            fVar8 = (float)RtSerialBuffer::ReadFloat(this_00);
            param_2 = (int)fVar8;
          }
          else if (bVar2 == 0x26) {
            param_2 = RtSerialBuffer::ReadUInt32Fixed(this_00);
          }
          else if (bVar2 == 0x20) {
            param_2 = RtSerialBuffer::ReadInt32Fixed(this_00);
          }
          goto LAB_051cba34;
        }
        if (bVar2 == 10) {
          bVar2 = RtSerialBuffer::ReadUInt8Fixed(this_00);
          param_2 = (int)bVar2;
          goto LAB_051cba34;
        }
        if (bVar2 == 0x10) {
          sVar4 = RtSerialBuffer::ReadInt16Fixed(this_00);
          param_2 = (int)sVar4;
          goto LAB_051cba34;
        }
        if (bVar2 != 8) goto LAB_051cba34;
      }
      else {
        if (bVar2 == 0xb1) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          param_2 = atoi((char *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cba34;
        }
        if (bVar2 < 0xb2) {
          if (bVar2 == 0x46) {
            param_2 = RtSerialBuffer::ReadUInt64Fixed(this_00);
          }
          else if (bVar2 == 0xb0) {
            RtSerialBuffer::ReadInt32Fixed(this_00);
            lVar6 = RtSerialBuffer::GetDataPtr(this_00);
            uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
            param_2 = atoi((char *)(lVar6 + (uVar7 & 0xffffffff)));
          }
          else if (bVar2 == 0x42) {
            dVar1 = (double)RtSerialBuffer::ReadDouble(this_00);
            param_2 = (int)dVar1;
          }
          goto LAB_051cba34;
        }
        if (bVar2 == 0xb3) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          param_2 = _wtoi((wchar_t *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cba34;
        }
        if (bVar2 < 0xb3) {
          RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
          param_2 = _wtoi((wchar_t *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cba34;
        }
        if (bVar2 == 0xba) {
          std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
          RtId::Serialize((RtId *)aeStack_10,this_00);
          param_2 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
          RtId::~RtId((RtId *)aeStack_10);
          goto LAB_051cba34;
        }
        if (bVar2 != 0xbc) goto LAB_051cba34;
      }
      cVar3 = RtSerialBuffer::ReadInt8Fixed(this_00);
      param_2 = (int)cVar3;
    }
  }
LAB_051cba34:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::GetUInt32(unsigned int, unsigned int) */

void __thiscall
Sexy::RtSerialRtonReader::GetUInt32(RtSerialRtonReader *this,uint param_1,uint param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  _func_void *extraout_x1;
  RtSerialBuffer *this_00;
  float fVar8;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    this_00 = *(RtSerialBuffer **)this;
    FUN_051c6944(this_00 + 0x28);
    bVar2 = RtSerialBuffer::ReadInt8Fixed(this_00);
    if (bVar2 == 0x40) {
      param_2 = RtSerialBuffer::ReadInt64Fixed(this_00);
    }
    else {
      if (bVar2 < 0x41) {
        if (bVar2 == 0x12) {
          uVar5 = RtSerialBuffer::ReadUInt16Fixed(this_00);
          param_2 = (uint)uVar5;
          goto LAB_051cbca8;
        }
        if (0x12 < bVar2) {
          if (bVar2 == 0x22) {
            fVar8 = (float)RtSerialBuffer::ReadFloat(this_00);
            param_2 = (uint)fVar8;
          }
          else if (bVar2 == 0x26) {
            param_2 = RtSerialBuffer::ReadUInt32Fixed(this_00);
          }
          else if (bVar2 == 0x20) {
            param_2 = RtSerialBuffer::ReadInt32Fixed(this_00);
          }
          goto LAB_051cbca8;
        }
        if (bVar2 == 10) {
          bVar2 = RtSerialBuffer::ReadUInt8Fixed(this_00);
          param_2 = (uint)bVar2;
          goto LAB_051cbca8;
        }
        if (bVar2 == 0x10) {
          sVar4 = RtSerialBuffer::ReadInt16Fixed(this_00);
          param_2 = (uint)sVar4;
          goto LAB_051cbca8;
        }
        if (bVar2 != 8) goto LAB_051cbca8;
      }
      else {
        if (bVar2 == 0xb1) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          param_2 = atoi((char *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cbca8;
        }
        if (bVar2 < 0xb2) {
          if (bVar2 == 0x46) {
            param_2 = RtSerialBuffer::ReadUInt64Fixed(this_00);
          }
          else if (bVar2 == 0xb0) {
            RtSerialBuffer::ReadInt32Fixed(this_00);
            lVar6 = RtSerialBuffer::GetDataPtr(this_00);
            uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
            param_2 = atoi((char *)(lVar6 + (uVar7 & 0xffffffff)));
          }
          else if (bVar2 == 0x42) {
            dVar1 = (double)RtSerialBuffer::ReadDouble(this_00);
            param_2 = (uint)dVar1;
          }
          goto LAB_051cbca8;
        }
        if (bVar2 == 0xb3) {
          uVar7 = RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          param_2 = _wtoi((wchar_t *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cbca8;
        }
        if (bVar2 < 0xb3) {
          RtSerialBuffer::ReadInt32Fixed(this_00);
          lVar6 = RtSerialBuffer::GetDataPtr(this_00);
          uVar7 = FUN_051c694c(*(undefined4 *)(this_00 + 0x28));
          param_2 = _wtoi((wchar_t *)(lVar6 + (uVar7 & 0xffffffff)));
          goto LAB_051cbca8;
        }
        if (bVar2 == 0xba) {
          std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
          RtId::Serialize((RtId *)aeStack_10,this_00);
          param_2 = std::__exception_ptr::exception_ptr::_M_get(aeStack_10);
          RtId::~RtId((RtId *)aeStack_10);
          goto LAB_051cbca8;
        }
        if (bVar2 != 0xbc) goto LAB_051cbca8;
      }
      cVar3 = RtSerialBuffer::ReadInt8Fixed(this_00);
      param_2 = (uint)cVar3;
    }
  }
LAB_051cbca8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* Sexy::RtSerialRtonReader::RtSerialRtonReader(unsigned char*, unsigned int) */

void __thiscall
Sexy::RtSerialRtonReader::RtSerialRtonReader(RtSerialRtonReader *this,uchar *param_1,uint param_2)

{
  char cVar1;
  RtSerialRtonDecodeBuffer *this_00;
  
  this[8] = (RtSerialRtonReader)0x1;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this_00 = ::operator_new(0x90);
  RtSerialRtonDecodeBuffer::RtSerialRtonDecodeBuffer(this_00);
  *(RtSerialRtonDecodeBuffer **)this = this_00;
  cVar1 = RtSerialRtonDecodeBuffer::Build(this_00,param_1,param_2);
  if (cVar1 == '\0') {
    return;
  }
  InitDecodeBuffer(this);
  return;
}


/* Sexy::RtSerialRtonReader::RtSerialRtonReader(Sexy::RtSerialBuffer*) */

void __thiscall
Sexy::RtSerialRtonReader::RtSerialRtonReader(RtSerialRtonReader *this,RtSerialBuffer *param_1)

{
  char cVar1;
  uint uVar2;
  RtSerialRtonDecodeBuffer *this_00;
  uchar *puVar3;
  
  *(undefined4 *)(this + 0xc) = 0;
  this[8] = (RtSerialRtonReader)0x1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this_00 = ::operator_new(0x90);
  RtSerialRtonDecodeBuffer::RtSerialRtonDecodeBuffer(this_00);
  *(RtSerialRtonDecodeBuffer **)this = this_00;
  if (param_1 != (RtSerialBuffer *)0x0) {
    puVar3 = (uchar *)RtSerialBuffer::GetDataPtr(param_1);
    uVar2 = RtSerialBuffer::GetDataSize(param_1);
    cVar1 = RtSerialRtonDecodeBuffer::Build(this_00,puVar3,uVar2);
    if (cVar1 != '\0') {
      InitDecodeBuffer(this);
      return;
    }
  }
  return;
}

