// Class: Sexy::RtSerialRtonSync


/* Sexy::RtSerialRtonSync::SyncEndArray() */

void __thiscall Sexy::RtSerialRtonSync::SyncEndArray(RtSerialRtonSync *this)

{
  char cVar1;
  
  cVar1 = FUN_037c0d48(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::EndArray(*(RtSerialRtonWriter **)(this + 8));
    return;
  }
  RtSerialRtonReader::EndArray(*(RtSerialRtonReader **)this);
  return;
}


/* Sexy::RtSerialRtonSync::SyncEndObject() */

void __thiscall Sexy::RtSerialRtonSync::SyncEndObject(RtSerialRtonSync *this)

{
  char cVar1;
  
  cVar1 = FUN_037c0d48(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::EndObject(*(RtSerialRtonWriter **)(this + 8));
    return;
  }
  RtSerialRtonReader::EndObject(*(RtSerialRtonReader **)this);
  return;
}


/* Sexy::RtSerialRtonSync::SyncString(Sexy::RtSerialRtonKey const&, std::string&) */

void __thiscall
Sexy::RtSerialRtonSync::SyncString(RtSerialRtonSync *this,RtSerialRtonKey *param_1,string *param_2)

{
  char cVar1;
  char *__s;
  
  cVar1 = FUN_037c0d48(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::WriteString(*(RtSerialRtonWriter **)(this + 8),param_1,param_2,true);
    return;
  }
  __s = (char *)RtSerialRtonReader::ReadStringDirect(*(RtSerialRtonKey **)this);
  std::string::append(param_2,__s,(size_t)param_2);
  return;
}


/* Sexy::RtSerialRtonSync::SyncBeginArray(Sexy::RtSerialRtonKey const&, unsigned int&) */

undefined8 __thiscall
Sexy::RtSerialRtonSync::SyncBeginArray
          (RtSerialRtonSync *this,RtSerialRtonKey *param_1,uint *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_037c0d48(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::BeginArray(*(RtSerialRtonWriter **)(this + 8),param_1,*param_2,0xfd);
    return 1;
  }
  uVar2 = RtSerialRtonReader::BeginArray(*(RtSerialRtonReader **)this,param_1,param_2);
  return uVar2;
}


/* Sexy::RtSerialRtonSync::SyncBeginObject(Sexy::RtSerialRtonKey const&) */

undefined8 __thiscall
Sexy::RtSerialRtonSync::SyncBeginObject(RtSerialRtonSync *this,RtSerialRtonKey *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_037c0d48(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::BeginObject(*(RtSerialRtonWriter **)(this + 8),param_1);
    return 1;
  }
  uVar2 = RtSerialRtonReader::BeginObject(*(RtSerialRtonKey **)this);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonSync::SyncRtId(Sexy::RtSerialRtonKey const&, Sexy::RtId&) */

void __thiscall
Sexy::RtSerialRtonSync::SyncRtId(RtSerialRtonSync *this,RtSerialRtonKey *param_1,RtId *param_2)

{
  char cVar1;
  RtSerialRtonKey *pRVar2;
  exception_ptr aeStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_042f6e3c(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::WriteRtId(*(RtSerialRtonWriter **)(this + 8),param_1,param_2);
  }
  else {
    pRVar2 = *(RtSerialRtonKey **)this;
    std::__exception_ptr::exception_ptr::exception_ptr(aeStack_18,(_func_void *)param_1);
    RtSerialRtonReader::ReadRtId(pRVar2,(RtId *)param_1);
    RtId::operator=(param_2,aRStack_10);
    RtId::~RtId(aRStack_10);
    RtId::~RtId((RtId *)aeStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonSync::SyncInt32(Sexy::RtSerialRtonKey const&, int&) */

void __thiscall
Sexy::RtSerialRtonSync::SyncInt32(RtSerialRtonSync *this,RtSerialRtonKey *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_042f6e3c(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::WriteInt32(*(RtSerialRtonWriter **)(this + 8),param_1,*param_2);
    return;
  }
  iVar2 = RtSerialRtonReader::ReadInt32(*(RtSerialRtonReader **)this,param_1,0);
  *param_2 = iVar2;
  return;
}


/* Sexy::RtSerialRtonSync::SyncBool(Sexy::RtSerialRtonKey const&, bool&) */

void __thiscall
Sexy::RtSerialRtonSync::SyncBool(RtSerialRtonSync *this,RtSerialRtonKey *param_1,bool *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_042f6e3c(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::WriteBool(*(RtSerialRtonWriter **)(this + 8),param_1,*param_2);
    return;
  }
  bVar2 = (bool)RtSerialRtonReader::ReadBool(*(RtSerialRtonReader **)this,param_1,false);
  *param_2 = bVar2;
  return;
}


/* Sexy::RtSerialRtonSync::SyncFloat(Sexy::RtSerialRtonKey const&, float&) */

void __thiscall
Sexy::RtSerialRtonSync::SyncFloat(RtSerialRtonSync *this,RtSerialRtonKey *param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_042f6e3c(this[0x10]);
  if (cVar1 == '\0') {
    RtSerialRtonWriter::WriteFloat(*(RtSerialRtonWriter **)(this + 8),param_1,*param_2);
    return;
  }
  fVar2 = (float)RtSerialRtonReader::ReadFloat(*(RtSerialRtonKey **)this,0.0);
  *param_2 = fVar2;
  return;
}


/* Sexy::RtSerialRtonSync::RtSerialRtonSync(Sexy::RtSerialRtonReader*) */

void __thiscall
Sexy::RtSerialRtonSync::RtSerialRtonSync(RtSerialRtonSync *this,RtSerialRtonReader *param_1)

{
  *(RtSerialRtonReader **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (RtSerialRtonSync)0x1;
  return;
}


/* Sexy::RtSerialRtonSync::RtSerialRtonSync(Sexy::RtSerialRtonWriter*) */

void __thiscall
Sexy::RtSerialRtonSync::RtSerialRtonSync(RtSerialRtonSync *this,RtSerialRtonWriter *param_1)

{
  *(undefined8 *)this = 0;
  *(RtSerialRtonWriter **)(this + 8) = param_1;
  this[0x10] = (RtSerialRtonSync)0x0;
  return;
}

