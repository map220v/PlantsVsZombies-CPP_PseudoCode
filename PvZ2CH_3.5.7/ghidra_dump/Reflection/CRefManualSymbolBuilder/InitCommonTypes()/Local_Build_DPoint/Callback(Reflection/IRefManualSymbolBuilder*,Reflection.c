// Class: Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_DPoint::Callback(Reflection::IRefManualSymbolBuilder*,Reflection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_DPoint::Callback(Reflection::IRefManualSymbolBuilder*,
   Reflection::RClass*) */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes()::Local_Build_DPoint::Callback(Reflection
     ::IRefManualSymbolBuilder*,Reflection::RClass__
               (long *param_1,
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *param_2)

{
  TRefNamedSymbolCollection<Reflection::RAncestor> *pTVar1;
  RAncestor *pRVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var4;
  code *pcVar5;
  string asStack_38 [8];
  string asStack_30 [8];
  CRefAttributeVariant aCStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(param_2);
  std::string::string(asStack_30,"PropGrid.PodType");
  pcVar5 = *(code **)(*param_1 + 0x78);
  std::string::string(asStack_38,"PropGrid.PodType");
  CRefAttributeVariant::CRefAttributeVariant(aCStack_28,"true");
  pRVar2 = (RAncestor *)(*pcVar5)(param_1,asStack_38,aCStack_28);
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(pTVar1,asStack_30,pRVar2);
  CRefAttributeVariant::~CRefAttributeVariant(aCStack_28);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_30);
  nop();
  pcVar5 = *(code **)(*param_1 + 0x58);
  std::string::string((string *)aCStack_28,"mX");
  std::string::string(asStack_30,"double");
  uVar3 = thunk_FUN_0517ecc8(param_1);
  p_Var4 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)(*pcVar5)(param_1,param_2,aCStack_28,0,uVar3);
  std::string::~string(asStack_30);
  nop();
  std::string::~string((string *)aCStack_28);
  nop();
  pTVar1 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var4);
  std::string::string(asStack_30,"DisplayName");
  pcVar5 = *(code **)(*param_1 + 0x78);
  std::string::string(asStack_38,"DisplayName");
  CRefAttributeVariant::CRefAttributeVariant(aCStack_28,"X");
  pRVar2 = (RAncestor *)(*pcVar5)(param_1,asStack_38,aCStack_28);
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(pTVar1,asStack_30,pRVar2);
  CRefAttributeVariant::~CRefAttributeVariant(aCStack_28);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_30);
  nop();
  pcVar5 = *(code **)(*param_1 + 0x58);
  std::string::string((string *)aCStack_28,"mY");
  std::string::string(asStack_30,"double");
  uVar3 = thunk_FUN_0517ecc8(param_1);
  p_Var4 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)(*pcVar5)(param_1,param_2,aCStack_28,8,uVar3);
  std::string::~string(asStack_30);
  nop();
  std::string::~string((string *)aCStack_28);
  nop();
  pTVar1 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var4);
  std::string::string(asStack_30,"DisplayName");
  pcVar5 = *(code **)(*param_1 + 0x78);
  std::string::string(asStack_38,"DisplayName");
  CRefAttributeVariant::CRefAttributeVariant(aCStack_28,"Y");
  pRVar2 = (RAncestor *)(*pcVar5)(param_1,asStack_38,aCStack_28);
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(pTVar1,asStack_30,pRVar2);
  CRefAttributeVariant::~CRefAttributeVariant(aCStack_28);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

