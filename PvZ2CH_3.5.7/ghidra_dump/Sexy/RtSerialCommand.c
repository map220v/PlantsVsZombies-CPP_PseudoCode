// Class: Sexy::RtSerialCommand


/* Sexy::RtSerialCommand::RtSerialCommand(unsigned int, Sexy::RtSerialRtonReader*,
   Sexy::RtSerialRtonWriter*, std::string const&, std::string const&) */

void __thiscall
Sexy::RtSerialCommand::RtSerialCommand
          (RtSerialCommand *this,uint param_1,RtSerialRtonReader *param_2,
          RtSerialRtonWriter *param_3,string *param_4,string *param_5)

{
  *(uint *)this = param_1;
  *(RtSerialRtonReader **)(this + 8) = param_2;
  FUN_05475d88(this + 0x10,param_4);
  *(RtSerialRtonWriter **)(this + 0x18) = param_3;
  FUN_05475d88(this + 0x20,param_5);
  return;
}


/* Sexy::RtSerialCommand::~RtSerialCommand() */

void __thiscall Sexy::RtSerialCommand::~RtSerialCommand(RtSerialCommand *this)

{
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  return;
}

