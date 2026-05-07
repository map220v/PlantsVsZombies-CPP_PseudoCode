// Class: Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,Reflection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*) */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_CurvedVal::
     Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass__
               (IRefManualSymbolBuilder *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  RType *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::getDelegate__ & 1) == 0)
     && (iVar1 = __cxa_guard_acquire(&Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)
                                      ::getDelegate__), iVar1 != 0)) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)
                          RClass*)::Local_CmdProperty_Data::CommandGet(Sexy::CurvedVal*,Sexy::
                          RtSerialCommand__);
    Sexy::Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*>::
    Delegate2<void(*)(Sexy::CurvedVal*,Sexy::RtSerialCommand*)>
              ((Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*> *)
               Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::getDelegate__,
               (CBFunctionTranslatorX *)&local_10);
    __cxa_guard_release(&Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::
                         getDelegate__);
  }
  pcVar6 = *(code **)(*(long *)param_1 + 0x68);
  std::string::string((string *)&local_10,"Data_CmdPropertyGet");
  std::string::string(asStack_20,"");
  uVar2 = thunk_FUN_0517ec38(param_1);
  std::string::string(asStack_18,"RtSerialCommand*");
  pRVar3 = IRefManualSymbolBuilder::GetType<GridItemShadowVanillaWhirlpool*>(param_1,asStack_18);
  uVar2 = IRefManualSymbolBuilder::GetFunctionType(param_1,6,param_2,uVar2,1,pRVar3);
  uVar2 = (*pcVar6)(param_1,param_2,(string *)&local_10,
                    Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::
                    getDelegate__,uVar2,1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string((string *)&local_10);
  nop();
  if (((Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::setDelegate__ & 1) == 0)
     && (iVar1 = __cxa_guard_acquire(&Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)
                                      ::setDelegate__), iVar1 != 0)) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)
                          RClass*)::Local_CmdProperty_Data::CommandSet(Sexy::CurvedVal*,Sexy::
                          RtSerialCommand__);
    Sexy::Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*>::
    Delegate2<void(*)(Sexy::CurvedVal*,Sexy::RtSerialCommand*)>
              ((Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*> *)
               Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::setDelegate__,
               (CBFunctionTranslatorX *)&local_10);
    __cxa_guard_release(&Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::
                         setDelegate__);
  }
  pcVar6 = *(code **)(*(long *)param_1 + 0x68);
  std::string::string((string *)&local_10,"Data_CmdPropertySet");
  std::string::string(asStack_20,"");
  uVar4 = thunk_FUN_0517ec38(param_1);
  std::string::string(asStack_18,"RtSerialCommand*");
  pRVar3 = IRefManualSymbolBuilder::GetType<GridItemShadowVanillaWhirlpool*>(param_1,asStack_18);
  uVar4 = IRefManualSymbolBuilder::GetFunctionType(param_1,6,param_2,uVar4,1,pRVar3);
  uVar4 = (*pcVar6)(param_1,param_2,(string *)&local_10,
                    Callback(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)::
                    setDelegate__,uVar4,1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string((string *)&local_10);
  nop();
  pcVar6 = *(code **)(*(long *)param_1 + 0x60);
  std::string::string((string *)&local_10,"Data");
  std::string::string(asStack_18,"std::string");
  uVar5 = thunk_FUN_0517f114(param_1);
  (*pcVar6)(param_1,param_2,(string *)&local_10,uVar5,uVar2,uVar4);
  std::string::~string(asStack_18);
  nop();
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

