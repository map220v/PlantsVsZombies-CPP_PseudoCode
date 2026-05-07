// Class: TGALogEndlessData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogEndlessData::TGALogEndlessData() */

void __thiscall TGALogEndlessData::TGALogEndlessData(TGALogEndlessData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::string::string((string *)(this + 0x28),"");
  nop();
  std::string::string((string *)(this + 0x30),"");
  nop();
  std::string::string((string *)(this + 0x38),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::string::string((string *)(this + 0x58),"");
  nop();
  std::string::string((string *)(this + 0x60),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGALogEndlessData::~TGALogEndlessData() */

void __thiscall TGALogEndlessData::~TGALogEndlessData(TGALogEndlessData *this)

{
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* TGALogEndlessData::TGALogEndlessData(TGALogEndlessData const&) */

void __thiscall
TGALogEndlessData::TGALogEndlessData(TGALogEndlessData *this,TGALogEndlessData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  return;
}

