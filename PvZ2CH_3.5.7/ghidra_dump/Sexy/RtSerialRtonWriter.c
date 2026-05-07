// Class: Sexy::RtSerialRtonWriter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteKey(Sexy::RtSerialRtonKey const&) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteKey(RtSerialRtonWriter *this,RtSerialRtonKey *param_1)

{
  char cVar1;
  RtSerialRtonKey aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RtSerialRtonKey::IsValid();
  if (cVar1 != '\0') {
    RtSerialRtonKey::RtSerialRtonKey(aRStack_10,(char *)0x0);
    WriteString(this,aRStack_10,(string *)param_1,true);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonWriter::PopScope() */

void __thiscall Sexy::RtSerialRtonWriter::PopScope(RtSerialRtonWriter *this)

{
  std::vector<bool,std::allocator<bool>>::pop_back((vector<bool,std::allocator<bool>> *)(this + 8));
  return;
}


/* Sexy::RtSerialRtonWriter::EndArray() */

void __thiscall Sexy::RtSerialRtonWriter::EndArray(RtSerialRtonWriter *this)

{
  PopScope(this);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0xfe);
  return;
}


/* Sexy::RtSerialRtonWriter::PushScope(bool) */

void __thiscall Sexy::RtSerialRtonWriter::PushScope(RtSerialRtonWriter *this,bool param_1)

{
  std::vector<bool,std::allocator<bool>>::push_back
            ((vector<bool,std::allocator<bool>> *)(this + 8),param_1);
  return;
}


/* Sexy::RtSerialRtonWriter::BeginArray(Sexy::RtSerialRtonKey const&, unsigned int,
   Sexy::RtSerialRtonTag::ETag) */

void __thiscall
Sexy::RtSerialRtonWriter::BeginArray
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2,undefined4 param_4)

{
  WriteKey(this,param_1);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x86);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,param_4);
  RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
  PushScope(this,true);
  return;
}


/* Sexy::RtSerialRtonWriter::EndObject() */

void __thiscall Sexy::RtSerialRtonWriter::EndObject(RtSerialRtonWriter *this)

{
  PopScope(this);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0xff);
  return;
}


/* Sexy::RtSerialRtonWriter::BeginObject(Sexy::RtSerialRtonKey const&) */

void __thiscall
Sexy::RtSerialRtonWriter::BeginObject(RtSerialRtonWriter *this,RtSerialRtonKey *param_1)

{
  WriteKey(this,param_1);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x85);
  PushScope(this,false);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* void Sexy::RtSerialRtonWriter::Write<std::string >(Sexy::RtSerialRtonKey const&, std::string
   const&) */

void __thiscall
Sexy::RtSerialRtonWriter::Write<std::string>
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,string *param_2)

{
  WriteString(this,param_1,param_2,false);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt32
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x27);
    return;
  }
  uVar1 = (ulong)param_2;
  uVar2 = 0;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while ((int)uVar1 != 0);
  if (uVar2 < 4) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x28);
    RtSerialBuffer::WriteUInt32VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x26);
  RtSerialBuffer::WriteUInt32Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt32
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x27);
    return;
  }
  uVar1 = (ulong)param_2;
  uVar2 = 0;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while ((int)uVar1 != 0);
  if (uVar2 < 4) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x28);
    RtSerialBuffer::WriteUInt32VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x26);
  RtSerialBuffer::WriteUInt32Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::RtSerialRtonWriter(Sexy::RtSerialBuffer*) */

void __thiscall
Sexy::RtSerialRtonWriter::RtSerialRtonWriter(RtSerialRtonWriter *this,RtSerialBuffer *param_1)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(RtSerialBuffer **)this = param_1;
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 8));
  eastl::
  hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x30));
  *(undefined4 *)(this + 0x60) = 0;
  eastl::
  hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x68));
  *(undefined4 *)(this + 0x98) = 0;
  this[0x9c] = (RtSerialRtonWriter)0x0;
  FUN_03f09764(*(long *)this + 0x2d);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonWriter::~RtSerialRtonWriter() */

void __thiscall Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(RtSerialRtonWriter *this)

{
  RtSerialBuffer *this_00;
  
  if ((this[0x9c] != (RtSerialRtonWriter)0x0) &&
     (this_00 = *(RtSerialBuffer **)this, this_00 != (RtSerialBuffer *)0x0)) {
    RtSerialBuffer::~RtSerialBuffer(this_00);
    AK::FreeHook(this_00);
  }
  eastl::
  hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
  ::~hash_map((hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
               *)(this + 0x68));
  eastl::
  hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
  ::~hash_map((hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
               *)(this + 0x30));
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)(this + 8));
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteBool(Sexy::RtSerialRtonKey const&, bool) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteBool(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,bool param_2)

{
  WriteKey(this,param_1);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteFloat(Sexy::RtSerialRtonKey const&, float) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteFloat
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,float param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0.0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x23);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x22);
  RtSerialBuffer::WriteFloat(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::RtSerialRtonWriter() */

void __thiscall Sexy::RtSerialRtonWriter::RtSerialRtonWriter(RtSerialRtonWriter *this)

{
  long lVar1;
  RtSerialBuffer *this_00;
  
  lVar1 = ___stack_chk_guard;
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 8));
  eastl::
  hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x30));
  *(undefined4 *)(this + 0x60) = 0;
  eastl::
  hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x68));
  *(undefined4 *)(this + 0x98) = 0;
  this[0x9c] = (RtSerialRtonWriter)0x1;
  this_00 = ::operator_new(0x30);
  RtSerialBuffer::RtSerialBuffer(this_00,(uchar *)0x0,0);
  *(RtSerialBuffer **)this = this_00;
  FUN_043e22a0(this_00 + 0x2d);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt32
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x27);
    return;
  }
  uVar1 = (ulong)param_2;
  uVar2 = 0;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while ((int)uVar1 != 0);
  if (uVar2 < 4) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x28);
    RtSerialBuffer::WriteUInt32VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x26);
  RtSerialBuffer::WriteUInt32Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt32
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x27);
    return;
  }
  uVar1 = (ulong)param_2;
  uVar2 = 0;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while ((int)uVar1 != 0);
  if (uVar2 < 4) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x28);
    RtSerialBuffer::WriteUInt32VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x26);
  RtSerialBuffer::WriteUInt32Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteBool(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,bool param_2)

{
  WriteKey(this,param_1);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteBool(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,bool param_2)

{
  WriteKey(this,param_1);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt8Fixed(Sexy::RtSerialRtonKey const&, signed char) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt8Fixed
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,char param_3)

{
  WriteKey(this,param_1);
  if (param_3 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,9);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,8);
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,(int)param_3);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteUInt8Fixed(Sexy::RtSerialRtonKey const&, unsigned char) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt8Fixed
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uchar param_2)

{
  WriteKey(this,param_1);
  if (param_2 == '\0') {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0xb);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,10);
  RtSerialBuffer::WriteUInt8Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt16Fixed(Sexy::RtSerialRtonKey const&, short) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt16Fixed
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,short param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x11);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x10);
  RtSerialBuffer::WriteInt16Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteUInt16Fixed(Sexy::RtSerialRtonKey const&, unsigned short) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt16Fixed
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,ushort param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x13);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x12);
  RtSerialBuffer::WriteUInt16Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteDouble(Sexy::RtSerialRtonKey const&, double) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteDouble
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,double param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0.0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x43);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x42);
  RtSerialBuffer::WriteDouble(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt32VarU(Sexy::RtSerialRtonKey const&, int) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32VarU
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
  RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt64VarU(Sexy::RtSerialRtonKey const&, long) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt64VarU
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,long param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x41);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x44);
  RtSerialBuffer::WriteInt64VarU(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt32VarS(Sexy::RtSerialRtonKey const&, int) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32VarS
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt64VarS(Sexy::RtSerialRtonKey const&, long) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt64VarS
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,long param_2)

{
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x41);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x45);
  RtSerialBuffer::WriteInt64VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::EndDocumentObject() */

void __thiscall Sexy::RtSerialRtonWriter::EndDocumentObject(RtSerialRtonWriter *this)

{
  EndObject(this);
  RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,0x454e4f44);
  return;
}


/* Sexy::RtSerialRtonWriter::BeginDocumentObject() */

void __thiscall Sexy::RtSerialRtonWriter::BeginDocumentObject(RtSerialRtonWriter *this)

{
  eastl::
  hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<std::string,eastl::pair<std::string_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::string_const,unsigned_int>>,eastl::equal_to<std::string>,eastl::string_hash<std::string>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)(this + 0x30));
  *(undefined4 *)(this + 0x60) = 0;
  eastl::
  hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<std::wstring,eastl::pair<std::wstring_const,unsigned_int>,eastl::allocator,eastl::use_first<eastl::pair<std::wstring_const,unsigned_int>>,eastl::equal_to<std::wstring>,eastl::string_hash<std::wstring>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)(this + 0x68));
  *(undefined4 *)(this + 0x98) = 0;
  RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,0x4e4f5452);
  RtSerialBuffer::WriteInt16Fixed(*(RtSerialBuffer **)this,1);
  RtSerialBuffer::WriteInt16Fixed(*(RtSerialBuffer **)this,0);
  PushScope(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteTrackedUTF8String(std::wstring const&) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteTrackedUTF8String(RtSerialRtonWriter *this,wstring *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  long lVar4;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_051cb5a8(local_28,this + 0x70,this + 0x78,param_1);
  FUN_051c8ce4(local_18,*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x78));
  cVar2 = FUN_051c6970(local_28[0],local_18[0]);
  if (cVar2 == '\0') {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x92);
    RtSerialBuffer::WriteUTF8String(*(RtSerialBuffer **)this,param_1);
    piVar3 = (int *)eastl::
                    hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
                    ::operator[]((wstring *)(this + 0x68));
    iVar1 = *(int *)(this + 0x98);
    *(int *)(this + 0x98) = iVar1 + 1;
    *piVar3 = iVar1;
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x93);
    lVar4 = FUN_051c697c(local_28[0]);
    RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,*(int *)(lVar4 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteTrackedString(std::string const&) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteTrackedString(RtSerialRtonWriter *this,string *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  long lVar4;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_051cb130(local_28,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),param_1);
  FUN_051c8cac(local_18,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  cVar2 = FUN_051c6960(local_28[0],local_18[0]);
  if (cVar2 == '\0') {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x90);
    RtSerialBuffer::WriteString(*(RtSerialBuffer **)this,param_1);
    piVar3 = (int *)eastl::
                    hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
                    ::operator[]((string *)(this + 0x30));
    iVar1 = *(int *)(this + 0x60);
    *(int *)(this + 0x60) = iVar1 + 1;
    *piVar3 = iVar1;
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x91);
    lVar4 = FUN_051c696c(local_28[0]);
    RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,*(int *)(lVar4 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonWriter::WriteString(Sexy::RtSerialRtonKey const&, std::string const&, bool) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteString
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,string *param_2,bool param_3)

{
  WriteKey(this,param_1);
  if (!param_3) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x81);
    RtSerialBuffer::WriteString(*(RtSerialBuffer **)this,param_2);
    return;
  }
  WriteTrackedString(this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteUTF8String(Sexy::RtSerialRtonKey const&, std::wstring const&,
   bool) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUTF8String
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,wstring *param_2,bool param_3)

{
  WriteKey(this,param_1);
  if (!param_3) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x82);
    RtSerialBuffer::WriteUTF8String(*(RtSerialBuffer **)this,param_2);
    return;
  }
  WriteTrackedUTF8String(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteUTF8String(Sexy::RtSerialRtonKey const&, wchar_t const*, bool) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUTF8String
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,wchar_t *param_2,bool param_3)

{
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WriteKey(this,param_1);
  if (param_3) {
    FUN_05478178(awStack_10,param_2,auStack_18);
    WriteTrackedUTF8String(this,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x82);
    RtSerialBuffer::WriteUTF8String(*(RtSerialBuffer **)this,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteRtId(Sexy::RtSerialRtonKey const&, Sexy::RtId const&) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteRtId(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,RtId *param_2)

{
  char cVar1;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WriteKey(this,param_1);
  cVar1 = CompiledMap::Initialized((CompiledMap *)param_2);
  if (cVar1 == '\0') {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x84);
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x83);
    RtId::RtId(aRStack_10,param_2);
    RtId::Serialize(aRStack_10,*(RtSerialBuffer **)this);
    RtId::~RtId(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteRtId(Sexy::RtSerialRtonKey const&, Sexy::RtId::OfflineId const&)
    */

void __thiscall
Sexy::RtSerialRtonWriter::WriteRtId
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,OfflineId *param_2)

{
  bool bVar1;
  OfflineId aOStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WriteKey(this,param_1);
  bVar1 = RtId::OfflineId::operator_cast_to_bool(param_2);
  if (bVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x83);
    RtId::OfflineId::OfflineId(aOStack_38,param_2);
    RtId::OfflineId::Serialize(aOStack_38,*(RtSerialBuffer **)this);
    RtId::OfflineId::~OfflineId(aOStack_38);
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x84);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonWriter::WriteString(Sexy::RtSerialRtonKey const&, char const*, bool) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteString
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,char *param_2,bool param_3)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WriteKey(this,param_1);
  if (param_3) {
    std::string::string(asStack_10,param_2);
    WriteTrackedString(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x81);
    RtSerialBuffer::WriteString(*(RtSerialBuffer **)this,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonWriter::WriteInt32(Sexy::RtSerialRtonKey const&, int) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt32(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x21);
    return;
  }
  uVar2 = (ulong)(uint)param_2;
  uVar4 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar4 = uVar4 + 1;
  } while ((int)uVar2 != 0);
  uVar3 = (ulong)(uint)(param_2 << 1 ^ param_2 >> 0x1f);
  do {
    uVar3 = uVar3 >> 7;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulong)uVar1;
  } while ((int)uVar3 != 0);
  if (uVar4 < 4) {
    if (uVar4 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x24);
      RtSerialBuffer::WriteInt32VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (3 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x20);
    RtSerialBuffer::WriteInt32Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x25);
  RtSerialBuffer::WriteInt32VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteUInt32(Sexy::RtSerialRtonKey const&, unsigned int) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt32
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x27);
    return;
  }
  uVar1 = (ulong)param_2;
  uVar2 = 0;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while ((int)uVar1 != 0);
  if (uVar2 < 4) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x28);
    RtSerialBuffer::WriteUInt32VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x26);
  RtSerialBuffer::WriteUInt32Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteInt64(Sexy::RtSerialRtonKey const&, long) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteInt64(RtSerialRtonWriter *this,RtSerialRtonKey *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x41);
    return;
  }
  uVar3 = 0;
  uVar1 = param_2;
  do {
    uVar1 = uVar1 >> 7;
    uVar3 = uVar3 + 1;
  } while (uVar1 != 0);
  uVar2 = param_2 << 1 ^ param_2 >> 0x3f;
  uVar1 = 0;
  do {
    uVar2 = uVar2 >> 7;
    uVar1 = uVar1 + 1;
  } while (uVar2 != 0);
  if (uVar3 < 8) {
    if (uVar3 <= uVar1) {
      RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x44);
      RtSerialBuffer::WriteInt64VarU(*(RtSerialBuffer **)this,param_2);
      return;
    }
  }
  else if (7 < uVar1) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x40);
    RtSerialBuffer::WriteInt64Fixed(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x45);
  RtSerialBuffer::WriteInt64VarS(*(RtSerialBuffer **)this,param_2);
  return;
}


/* Sexy::RtSerialRtonWriter::WriteUInt64(Sexy::RtSerialRtonKey const&, unsigned long) */

void __thiscall
Sexy::RtSerialRtonWriter::WriteUInt64
          (RtSerialRtonWriter *this,RtSerialRtonKey *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  WriteKey(this,param_1);
  if (param_2 == 0) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x47);
    return;
  }
  uVar2 = 0;
  uVar1 = param_2;
  do {
    uVar1 = uVar1 >> 7;
    uVar2 = uVar2 + 1;
  } while (uVar1 != 0);
  if (uVar2 < 8) {
    RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x48);
    RtSerialBuffer::WriteUInt64VarU(*(RtSerialBuffer **)this,param_2);
    return;
  }
  RtSerialBuffer::WriteInt8Fixed(*(RtSerialBuffer **)this,0x46);
  RtSerialBuffer::WriteUInt64Fixed(*(RtSerialBuffer **)this,param_2);
  return;
}

