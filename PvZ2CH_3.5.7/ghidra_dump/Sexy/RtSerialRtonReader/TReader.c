// Class: Sexy::RtSerialRtonReader::TReader<int>


/* Sexy::RtSerialRtonReader::TReader<int>::Read(Sexy::RtSerialRtonReader*, Sexy::RtSerialRtonKey
   const&) */

void Sexy::RtSerialRtonReader::TReader<int>::Read
               (RtSerialRtonReader *param_1,RtSerialRtonKey *param_2)

{
  ReadInt32(param_1,param_2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonReader::TReader<std::string >::Read(Sexy::RtSerialRtonReader*,
   Sexy::RtSerialRtonKey const&) */

void __thiscall
Sexy::RtSerialRtonReader::TReader<std::string>::Read
          (TReader<std::string> *this,RtSerialRtonReader *param_1,RtSerialRtonKey *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  ReadString((RtSerialRtonKey *)this,(string *)param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonReader::TReader<unsigned int>::Read(Sexy::RtSerialRtonReader*,
   Sexy::RtSerialRtonKey const&) */

void Sexy::RtSerialRtonReader::TReader<unsigned_int>::Read
               (RtSerialRtonReader *param_1,RtSerialRtonKey *param_2)

{
  ReadUInt32(param_1,param_2,0);
  return;
}


/* Sexy::RtSerialRtonReader::TReader<bool>::Read(Sexy::RtSerialRtonReader*, Sexy::RtSerialRtonKey
   const&) */

void Sexy::RtSerialRtonReader::TReader<bool>::Read
               (RtSerialRtonReader *param_1,RtSerialRtonKey *param_2)

{
  ReadBool(param_1,param_2,false);
  return;
}

