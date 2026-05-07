// Class: TGALuckBagData


/* TGALuckBagData::~TGALuckBagData() */

void __thiscall TGALuckBagData::~TGALuckBagData(TGALuckBagData *this)

{
  TGALuckBagData *this_00;
  string *this_01;
  
  this_01 = (string *)(this + 0x48);
  std::string::~string(this_01);
  this_00 = this + 0x38;
  if (this_00 != (TGALuckBagData *)0x0) {
    do {
      this_01 = this_01 + -8;
      std::string::~string(this_01);
    } while (this_00 != (TGALuckBagData *)this_01);
  }
  if (this != (TGALuckBagData *)0xfffffffffffffff8) {
    do {
      this_00 = this_00 + -8;
      std::string::~string((string *)this_00);
    } while (this + 8 != this_00);
  }
  std::string::~string((string *)this);
  return;
}


/* TGALuckBagData::TGALuckBagData(TGALuckBagData const&) */

void __thiscall TGALuckBagData::TGALuckBagData(TGALuckBagData *this,TGALuckBagData *param_1)

{
  TGALuckBagData *pTVar1;
  TGALuckBagData *pTVar2;
  TGALuckBagData *pTVar3;
  
  FUN_05475d88();
  pTVar2 = param_1 + 8;
  pTVar3 = this;
  do {
    pTVar3 = pTVar3 + 8;
    pTVar1 = pTVar2 + 8;
    FUN_05475d88(pTVar3,pTVar2);
    pTVar2 = pTVar1;
  } while (pTVar1 != param_1 + 0x38);
  FUN_05475d88(this + 0x38,pTVar1);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  return;
}

