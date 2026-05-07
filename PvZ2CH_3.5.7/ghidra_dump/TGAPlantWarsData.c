// Class: TGAPlantWarsData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAPlantWarsData::TGAPlantWarsData() */

void __thiscall TGAPlantWarsData::TGAPlantWarsData(TGAPlantWarsData *this)

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
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGAPlantWarsData::~TGAPlantWarsData() */

void __thiscall TGAPlantWarsData::~TGAPlantWarsData(TGAPlantWarsData *this)

{
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

