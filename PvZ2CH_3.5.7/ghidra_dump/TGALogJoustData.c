// Class: TGALogJoustData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGALogJoustData::TGALogJoustData() */

void __thiscall TGALogJoustData::TGALogJoustData(TGALogJoustData *this)

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
  std::string::string((string *)(this + 0x70),"");
  nop();
  std::string::string((string *)(this + 0x78),"");
  nop();
  std::string::string((string *)(this + 0x80),"");
  nop();
  std::string::string((string *)(this + 0x88),"");
  nop();
  std::string::string((string *)(this + 0x90),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGALogJoustData::~TGALogJoustData() */

void __thiscall TGALogJoustData::~TGALogJoustData(TGALogJoustData *this)

{
  string *this_00;
  
  this_00 = (string *)(this + 0x90);
  std::string::~string(this_00);
  if (this != (TGALogJoustData *)0xffffffffffffffb0) {
    do {
      this_00 = this_00 + -8;
      std::string::~string(this_00);
    } while (this + 0x50 != (TGALogJoustData *)this_00);
  }
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


/* TGALogJoustData::TGALogJoustData(TGALogJoustData const&) */

void __thiscall TGALogJoustData::TGALogJoustData(TGALogJoustData *this,TGALogJoustData *param_1)

{
  TGALogJoustData *pTVar1;
  TGALogJoustData *pTVar2;
  TGALogJoustData *pTVar3;
  
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
  pTVar2 = this + 0x50;
  pTVar3 = param_1 + 0x50;
  do {
    pTVar1 = pTVar2 + 8;
    FUN_05475d88(pTVar2,pTVar3);
    pTVar2 = pTVar1;
    pTVar3 = pTVar3 + 8;
  } while (pTVar1 != this + 0x90);
  FUN_05475d88(pTVar1,param_1 + 0x90);
  return;
}

