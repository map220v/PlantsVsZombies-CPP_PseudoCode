// Class: CurrencyTableInserter


/* CurrencyTableInserter::~CurrencyTableInserter() */

void __thiscall CurrencyTableInserter::~CurrencyTableInserter(CurrencyTableInserter *this)

{
  *(undefined ***)this = &PTR__CurrencyTableInserter_06792630;
  MetricsRecordInserter::~MetricsRecordInserter((MetricsRecordInserter *)this);
  return;
}


/* CurrencyTableInserter::~CurrencyTableInserter() */

void __thiscall CurrencyTableInserter::~CurrencyTableInserter(CurrencyTableInserter *this)

{
  ~CurrencyTableInserter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurrencyTableInserter::CurrencyTableInserter(Sexy::MetricsManager*, std::string const&,
   std::string const&, std::string const&) */

void __thiscall
CurrencyTableInserter::CurrencyTableInserter
          (CurrencyTableInserter *this,MetricsManager *param_1,string *param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  string *psVar2;
  string *psVar3;
  undefined8 uVar4;
  wchar16 *extraout_x1;
  wstring *extraout_x1_00;
  string *psVar5;
  undefined **ppuVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"GameCurrency");
  std::string::string(asStack_10,"1.0");
  psVar5 = asStack_10;
  MetricsRecordInserter::MetricsRecordInserter
            ((MetricsRecordInserter *)this,param_1,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  ppuVar6 = &PTR__CurrencyTableInserter_06792630;
  *(undefined ***)this = &PTR__CurrencyTableInserter_06792630;
  std::string::string(asStack_10,"Environment");
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,param_2);
  std::string::~string(asStack_10);
  nop();
  psVar2 = std::string::string(asStack_18,"SNSUserID");
  PublicBasicInfo::getPublicIP((PublicBasicInfo *)psVar2);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  psVar2 = asStack_18;
  psVar3 = std::string::string(asStack_10,"Connected");
  bVar1 = (bool)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          ((wchar16 *)psVar3,extraout_x1,(LineBreakCategory *)psVar2,
                           (LineBreakCategory *)psVar5,(LineBreakCategory *)ppuVar6);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  psVar2 = std::string::string(asStack_18,"PvZPopCapID");
  PublicBasicInfo::getPCPID((PublicBasicInfo *)psVar2);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"PvZPopCapIDSubtype");
  ProfileUtils::Profile();
  PlayerInfo::AM_GetName();
  Sexy::SexyStringToUTF8String((Sexy *)asStack_10,extraout_x1_00);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_20,asStack_18);
  std::string::~string(asStack_18);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_10,"DeviceID");
  psVar2 = (string *)Sexy::MetricsManager::DeviceId(*(MetricsManager **)(this + 8));
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_10,psVar2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"SessionID");
  uVar4 = Sexy::MetricsManager::DeviceId(*(MetricsManager **)(this + 8));
  FUN_05475ffc(asStack_10,uVar4,0,0x18);
  std::operator+(asStack_10,param_3);
  MetricsRecordInserter::Add((MetricsRecordInserter *)this,asStack_20,asStack_18);
  std::string::~string(asStack_18);
  std::string::~string(asStack_10);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

