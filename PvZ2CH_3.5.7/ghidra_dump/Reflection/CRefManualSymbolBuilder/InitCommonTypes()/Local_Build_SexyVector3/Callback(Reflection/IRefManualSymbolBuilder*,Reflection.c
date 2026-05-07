// Class: Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_SexyVector3::Callback(Reflection::IRefManualSymbolBuilder*,Reflection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_SexyVector3::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*) */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_SexyVector3::
     Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass__
               (long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*param_1 + 0x58);
  std::string::string(asStack_10,"x");
  std::string::string(asStack_18,"float");
  uVar1 = thunk_FUN_0517eca4(param_1);
  (*pcVar2)(param_1,param_2,asStack_10,0,uVar1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*param_1 + 0x58);
  std::string::string(asStack_10,"y");
  std::string::string(asStack_18,"float");
  uVar1 = thunk_FUN_0517eca4(param_1);
  (*pcVar2)(param_1,param_2,asStack_10,4,uVar1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*param_1 + 0x58);
  std::string::string(asStack_10,"z");
  std::string::string(asStack_18,"float");
  uVar1 = thunk_FUN_0517eca4(param_1);
  (*pcVar2)(param_1,param_2,asStack_10,8,uVar1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

