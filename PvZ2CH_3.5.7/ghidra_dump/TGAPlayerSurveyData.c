// Class: TGAPlayerSurveyData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAPlayerSurveyData::TGAPlayerSurveyData() */

void __thiscall TGAPlayerSurveyData::TGAPlayerSurveyData(TGAPlayerSurveyData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::string::string((string *)(this + 0x20),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGAPlayerSurveyData::~TGAPlayerSurveyData() */

void __thiscall TGAPlayerSurveyData::~TGAPlayerSurveyData(TGAPlayerSurveyData *this)

{
  std::string::~string((string *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* TGAPlayerSurveyData::TGAPlayerSurveyData(TGAPlayerSurveyData const&) */

void __thiscall
TGAPlayerSurveyData::TGAPlayerSurveyData(TGAPlayerSurveyData *this,TGAPlayerSurveyData *param_1)

{
  FUN_05475d88();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  return;
}

