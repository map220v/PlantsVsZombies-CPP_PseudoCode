// Class: Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::Local_CmdProperty_Data::CommandSet(Sexy::CurvedVal*,Sexy


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*)::Local_CmdProperty_Data::CommandSet(Sexy::CurvedVal*,
   Sexy::RtSerialCommand*) */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::
     Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::Local_CmdProperty_Data::
     CommandSet(Sexy::CurvedVal*,Sexy::RtSerialCommand__(void *param_1,long param_2)

{
  RtSerialRtonKey *pRVar1;
  TGABagData aTStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pRVar1 = *(RtSerialRtonKey **)(param_2 + 8);
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_18,(TGABagData *)(param_2 + 0x10));
  Sexy::RtSerialRtonReader::Read<std::string>(pRVar1);
  LocalCurvedValProperties::SetCurveStr(Sexy::CurvedVal*,std::string_const__(param_1,asStack_10);
  std::string::~string(asStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

