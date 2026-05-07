// Class: TGALogTransGenosisData


/* TGALogTransGenosisData::~TGALogTransGenosisData() */

void __thiscall TGALogTransGenosisData::~TGALogTransGenosisData(TGALogTransGenosisData *this)

{
  string *this_00;
  
  this_00 = (string *)(this + 0x28);
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string(this_00);
  if (this != (TGALogTransGenosisData *)0x0) {
    do {
      this_00 = this_00 + -8;
      std::string::~string(this_00);
    } while (this != (TGALogTransGenosisData *)this_00);
  }
  return;
}


/* TGALogTransGenosisData::TGALogTransGenosisData(TGALogTransGenosisData const&) */

void __thiscall
TGALogTransGenosisData::TGALogTransGenosisData
          (TGALogTransGenosisData *this,TGALogTransGenosisData *param_1)

{
  TGALogTransGenosisData *pTVar1;
  TGALogTransGenosisData *pTVar2;
  TGALogTransGenosisData *pTVar3;
  
  pTVar2 = this;
  pTVar3 = param_1;
  do {
    pTVar1 = pTVar2 + 8;
    FUN_05475d88(pTVar2,pTVar3);
    pTVar2 = pTVar1;
    pTVar3 = pTVar3 + 8;
  } while (pTVar1 != this + 0x28);
  FUN_05475d88(pTVar1,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  return;
}

