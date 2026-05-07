// Class: Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::Local_CmdProperty_Data::CommandGet(Sexy::CurvedVal*,Sexy


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*)::Local_CmdProperty_Data::CommandGet(Sexy::CurvedVal*,
   Sexy::RtSerialCommand*) */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::
     Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::Local_CmdProperty_Data::
     CommandGet(Sexy::CurvedVal*,Sexy::RtSerialCommand__(undefined8 param_1,long param_2)

{
  RtSerialRtonWriter *this;
  string asStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  this = *(RtSerialRtonWriter **)(param_2 + 0x18);
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_10,(TGABagData *)(param_2 + 0x20));
  LocalCurvedValProperties::GetCurveStr(Sexy::CurvedVal__(asStack_18,param_1);
  Sexy::RtSerialRtonWriter::Write<std::string>(this,(RtSerialRtonKey *)aTStack_10,asStack_18);
  std::string::~string(asStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

