// Class: MetricsRecordInserter


/* MetricsRecordInserter::~MetricsRecordInserter() */

void __thiscall MetricsRecordInserter::~MetricsRecordInserter(MetricsRecordInserter *this)

{
  *(undefined ***)this = &PTR__MetricsRecordInserter_067926f0;
  Sexy::MetricsManager::EndReport(*(MetricsManager **)(this + 8));
  return;
}


/* MetricsRecordInserter::~MetricsRecordInserter() */

void __thiscall MetricsRecordInserter::~MetricsRecordInserter(MetricsRecordInserter *this)

{
  ~MetricsRecordInserter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MetricsRecordInserter::MetricsRecordInserter(Sexy::MetricsManager*, std::string const&,
   std::string const&) */

void __thiscall
MetricsRecordInserter::MetricsRecordInserter
          (MetricsRecordInserter *this,MetricsManager *param_1,string *param_2,string *param_3)

{
  MetricsManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(MetricsManager **)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__MetricsRecordInserter_067926f0;
  Sexy::MetricsManager::BeginReport(param_1,param_2,param_3);
  this_00 = *(MetricsManager **)(this + 8);
  std::string::string(asStack_10,"DeviceID");
  Sexy::MetricsManager::ReportDeviceId(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MetricsRecordInserter::Add(std::string const&, int) */

MetricsRecordInserter * __thiscall
MetricsRecordInserter::Add(MetricsRecordInserter *this,string *param_1,int param_2)

{
  Sexy::MetricsManager::ReportInteger(*(MetricsManager **)(this + 8),param_1,(long)param_2);
  return this;
}


/* MetricsRecordInserter::Add(std::string const&, unsigned long) */

MetricsRecordInserter * __thiscall
MetricsRecordInserter::Add(MetricsRecordInserter *this,string *param_1,ulong param_2)

{
  Sexy::MetricsManager::ReportInteger(*(MetricsManager **)(this + 8),param_1,param_2);
  return this;
}


/* MetricsRecordInserter::Add(std::string const&, double) */

MetricsRecordInserter * __thiscall
MetricsRecordInserter::Add(MetricsRecordInserter *this,string *param_1,double param_2)

{
  Sexy::MetricsManager::ReportNumber(*(MetricsManager **)(this + 8),param_1,param_2);
  return this;
}


/* MetricsRecordInserter::Add(std::string const&, bool) */

MetricsRecordInserter * __thiscall
MetricsRecordInserter::Add(MetricsRecordInserter *this,string *param_1,bool param_2)

{
  Sexy::MetricsManager::ReportBoolean(*(MetricsManager **)(this + 8),param_1,param_2);
  return this;
}


/* MetricsRecordInserter::Add(std::string const&, std::string const&) */

MetricsRecordInserter * __thiscall
MetricsRecordInserter::Add(MetricsRecordInserter *this,string *param_1,string *param_2)

{
  Sexy::MetricsManager::ReportString(*(MetricsManager **)(this + 8),param_1,param_2);
  return this;
}

