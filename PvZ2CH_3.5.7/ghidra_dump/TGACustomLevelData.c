// Class: TGACustomLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGACustomLevelData::TGACustomLevelData() */

void __thiscall TGACustomLevelData::TGACustomLevelData(TGACustomLevelData *this)

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
  std::string::string((string *)(this + 0x40),"");
  nop();
  std::string::string((string *)(this + 0x48),"");
  nop();
  std::string::string((string *)(this + 0x50),"");
  nop();
  std::string::string((string *)(this + 0x58),"");
  nop();
  std::string::string((string *)(this + 0x60),"");
  nop();
  std::string::string((string *)(this + 0x68),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGACustomLevelData::~TGACustomLevelData() */

void __thiscall TGACustomLevelData::~TGACustomLevelData(TGACustomLevelData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
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


/* TGACustomLevelData::TGACustomLevelData(TGACustomLevelData const&) */

void __thiscall
TGACustomLevelData::TGACustomLevelData(TGACustomLevelData *this,TGACustomLevelData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  FUN_05475d88(this + 0x50,param_1 + 0x50);
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  FUN_05475d88(this + 0x68,param_1 + 0x68);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70),
             (vector *)(param_1 + 0x70));
  return;
}


/* TGACustomLevelData::TEMPNAMEPLACEHOLDERVALUE(TGACustomLevelData const&) */

TGACustomLevelData * __thiscall
TGACustomLevelData::operator=(TGACustomLevelData *this,TGACustomLevelData *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  thunk_FUN_05475e00(this + 0x50,param_1 + 0x50);
  thunk_FUN_05475e00(this + 0x58,param_1 + 0x58);
  thunk_FUN_05475e00(this + 0x60,param_1 + 0x60);
  thunk_FUN_05475e00(this + 0x68,param_1 + 0x68);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70),
             (vector *)(param_1 + 0x70));
  return this;
}

