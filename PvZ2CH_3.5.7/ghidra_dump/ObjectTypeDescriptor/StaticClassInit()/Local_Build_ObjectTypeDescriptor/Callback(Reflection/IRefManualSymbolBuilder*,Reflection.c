// Class: ObjectTypeDescriptor::StaticClassInit()::Local_Build_ObjectTypeDescriptor::Callback(Reflection::IRefManualSymbolBuilder*,Reflection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObjectTypeDescriptor::StaticClassInit()::Local_Build_ObjectTypeDescriptor::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*) */

void ObjectTypeDescriptor::StaticClassInit()::Local_Build_ObjectTypeDescriptor::Callback(Reflection
     ::IRefManualSymbolBuilder*,Reflection::RClass__(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ObjectTypeDescriptor::StaticGetClass();
  FUN_03f08c34(lVar1 + 0x40,param_2);
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  FUN_03f08c3c(param_2 + 0x90,uVar2);
  pcVar3 = *(code **)(*param_1 + 0x58);
  std::string::string(asStack_10,"TypeName");
  std::string::string(asStack_18,"std::string");
  uVar2 = thunk_FUN_03f08c6c(param_1);
  (*pcVar3)(param_1,param_2,asStack_10,8,uVar2);
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

