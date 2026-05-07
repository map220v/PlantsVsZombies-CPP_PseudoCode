// Class: Reflection::CRefManualSymbolBuilder


/* Reflection::CRefManualSymbolBuilder::BuildEnum(Reflection::REnum*) */

void Reflection::CRefManualSymbolBuilder::BuildEnum(REnum *param_1)

{
  return;
}


/* Reflection::CRefManualSymbolBuilder::~CRefManualSymbolBuilder() */

void __thiscall
Reflection::CRefManualSymbolBuilder::~CRefManualSymbolBuilder(CRefManualSymbolBuilder *this)

{
  *(undefined ***)this = &PTR_BuilderDestroy_06a2fa40;
  std::
  map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
  ::~map((map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
          *)(this + 0x130));
  std::
  map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
  ::~map((map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
          *)(this + 0x100));
  std::
  map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
  ::~map((map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
          *)(this + 0xd0));
  std::
  map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
  ::~map((map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
          *)(this + 0xa0));
  std::
  map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
  ::~map((map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
          *)(this + 0x70));
  std::
  map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
  ::~map((map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
          *)(this + 0x40));
  std::
  map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
  ::~map((map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
          *)(this + 0x10));
  return;
}


/* Reflection::CRefManualSymbolBuilder::BuilderDestroy() */

void __thiscall Reflection::CRefManualSymbolBuilder::BuilderDestroy(CRefManualSymbolBuilder *this)

{
  if (this != (CRefManualSymbolBuilder *)0x0) {
    ~CRefManualSymbolBuilder(this);
    AK::FreeHook(this);
    return;
  }
  return;
}


/* Reflection::CRefManualSymbolBuilder::CRefManualSymbolBuilder(Reflection::CRefSymbolDb*) */

void __thiscall
Reflection::CRefManualSymbolBuilder::CRefManualSymbolBuilder
          (CRefManualSymbolBuilder *this,CRefSymbolDb *param_1)

{
  IRefManualSymbolBuilder::IRefManualSymbolBuilder((IRefManualSymbolBuilder *)this);
  *(CRefSymbolDb **)(this + 8) = param_1;
  *(undefined ***)this = &PTR_BuilderDestroy_06a2fa40;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xd0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x100));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x130));
  return;
}


/* Reflection::CRefManualSymbolBuilder::BuildAttribute(std::string const&,
   Reflection::CRefAttributeVariant const&) */

RAttribute * __thiscall
Reflection::CRefManualSymbolBuilder::BuildAttribute
          (CRefManualSymbolBuilder *this,string *param_1,CRefAttributeVariant *param_2)

{
  RAttribute *this_00;
  
  this_00 = ::operator_new(0x90);
  RAttribute::RAttribute(this_00);
  thunk_FUN_05475e00(this_00 + 0x60,param_1);
  *(undefined8 *)(this_00 + 0x68) = 0;
  CRefAttributeVariant::operator=((CRefAttributeVariant *)(this_00 + 0x70),param_2);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::InitCommonTypes() */

void Reflection::CRefManualSymbolBuilder::InitCommonTypes(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Point");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_Point::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FPoint");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_FPoint::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DPoint");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_DPoint::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Rect");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_Rect::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FRect");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_FRect::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DRect");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_DRect::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Color");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_Color::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SexyVector2");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_SexyVector2::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SexyVector3");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_SexyVector3::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)CRefSymbolDb::GetManualSymbolBuilder(pCVar1), plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CurvedVal");
    (*pcVar3)(plVar2,asStack_10,
              InitCommonTypes()::Local_Build_CurvedVal::Callback(Reflection::
              IRefManualSymbolBuilder*,Reflection::RClass__,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::GetNamedType(std::string const&) */

void __thiscall
Reflection::CRefManualSymbolBuilder::GetNamedType(CRefManualSymbolBuilder *this,string *param_1)

{
  map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
  *this_00;
  map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
  *this_01;
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  RAncestor *this_02;
  undefined8 *puVar4;
  CRefNamedSymbolCollection *this_03;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_04;
  RClass *local_28;
  REnum *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (RClass *)
             TRefNamedSymbolCollection<Reflection::RClass>::GetNamed
                       ((TRefNamedSymbolCollection<Reflection::RClass> *)
                        (*(long *)(this + 8) + 0x50),param_1,false);
  if (local_28 == (RClass *)0x0) {
    local_20 = (REnum *)TRefNamedSymbolCollection<Reflection::REnum>::GetNamed
                                  ((TRefNamedSymbolCollection<Reflection::REnum> *)
                                   (*(long *)(this + 8) + 0xa0),param_1,false);
    if (local_20 == (REnum *)0x0) {
      this_02 = ::operator_new(0x78);
      RUnknownNamedType::RUnknownNamedType((RUnknownNamedType *)this_02);
      thunk_FUN_05475e00((RUnknownNamedType *)(this_02 + 0x70),param_1);
      *(undefined4 *)(this_02 + 0x68) = 0;
    }
    else {
      this_01 = (map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
                 *)(this + 0x130);
      local_18 = std::
                 map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
                 ::find(this_01,&local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_01);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        this_02 = *(RAncestor **)(lVar3 + 8);
        goto LAB_0518de30;
      }
      this_02 = ::operator_new(0x80);
      REnumRef::REnumRef((REnumRef *)this_02);
      thunk_FUN_05475e00((REnumRef *)(this_02 + 0x70),param_1);
      *(REnum **)(this_02 + 0x78) = local_20;
      uVar2 = FUN_0517e268(*(undefined4 *)(local_20 + 0x68));
      *(undefined4 *)(this_02 + 0x68) = uVar2;
      puVar4 = (undefined8 *)
               std::
               map<Reflection::REnum*,Reflection::REnumRef*,std::less<Reflection::REnum*>,std::allocator<std::pair<Reflection::REnum*const,Reflection::REnumRef*>>>
               ::operator[](this_01,&local_20);
      *puVar4 = this_02;
    }
  }
  else {
    this_00 = (map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
               *)(this + 0x100);
    local_18 = std::
               map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
               ::find(this_00,&local_28);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      this_02 = *(RAncestor **)(lVar3 + 8);
      goto LAB_0518de30;
    }
    this_02 = ::operator_new(0x80);
    RClassRef::RClassRef((RClassRef *)this_02);
    thunk_FUN_05475e00((RClassRef *)(this_02 + 0x70),param_1);
    *(RClass **)(this_02 + 0x78) = local_28;
    uVar2 = FUN_0517e268(*(undefined4 *)(local_28 + 0x68));
    *(undefined4 *)(this_02 + 0x68) = uVar2;
    puVar4 = (undefined8 *)
             std::
             map<Reflection::RClass*,Reflection::RClassRef*,std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,Reflection::RClassRef*>>>
             ::operator[](this_00,&local_28);
    *puVar4 = this_02;
  }
  this_04 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
  nop();
  uVar2 = CRefNamedSymbolCollection::GetCount(this_03);
  *(undefined4 *)(this_02 + 100) = 0;
  *(undefined4 *)(this_02 + 0x60) = uVar2;
  *(undefined4 *)(this_02 + 0x6c) = 0;
  std::string::string((string *)&local_10,"");
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(this_04,(string *)&local_10,this_02);
  std::string::~string((string *)&local_10);
  nop();
LAB_0518de30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::GetCustomType(Reflection::RCustomType::ECustomTypeCategory,
   Reflection::RType*, Reflection::RCustomType::IStdManipulator*) */

void __thiscall
Reflection::CRefManualSymbolBuilder::GetCustomType
          (CRefManualSymbolBuilder *this,uint param_2,long param_3,undefined8 param_4)

{
  map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  RCustomType *this_01;
  CRefNamedSymbolCollection *this_02;
  undefined8 *puVar4;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_03;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    local_20 = 0xffffffff;
  }
  else {
    local_20 = (ulong)*(uint *)(param_3 + 0x60);
  }
  local_20 = local_20 | (ulong)param_2 << 0x20;
  this_00 = (map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
             *)(this + 0xd0);
  local_18 = std::
             map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
             ::find(this_00,&local_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_01 = *(RCustomType **)(lVar3 + 8);
  }
  else {
    this_01 = ::operator_new(0x88);
    RCustomType::RCustomType(this_01);
    nop();
    uVar2 = CRefNamedSymbolCollection::GetCount(this_02);
    *(undefined4 *)(this_01 + 100) = 0;
    *(undefined4 *)(this_01 + 0x60) = uVar2;
    switch(param_2) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 8:
      *(undefined4 *)(this_01 + 0x68) = 8;
      break;
    case 2:
      *(undefined4 *)(this_01 + 0x68) = 0x18;
      break;
    case 5:
      *(undefined4 *)(this_01 + 0x68) = 0x50;
      break;
    case 6:
    case 7:
      *(undefined4 *)(this_01 + 0x68) = 0x30;
      break;
    default:
      *(uint *)(this_01 + 0x68) = (uint)bVar1;
    }
    *(undefined4 *)(this_01 + 0x6c) = 0;
    *(uint *)(this_01 + 0x70) = param_2;
    *(long *)(this_01 + 0x78) = param_3;
    *(undefined8 *)(this_01 + 0x80) = param_4;
    puVar4 = (undefined8 *)
             std::
             map<unsigned_long,Reflection::RCustomType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RCustomType*>>>
             ::operator[](this_00,&local_20);
    *puVar4 = this_01;
    this_03 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
    std::string::string((string *)&local_10,"");
    TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
              (this_03,(string *)&local_10,(RAncestor *)this_01);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_01);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::GetReferenceType(Reflection::RReferenceType::EReferenceTypeCategory,
   Reflection::RType*, unsigned int) */

void __thiscall
Reflection::CRefManualSymbolBuilder::GetReferenceType
          (CRefManualSymbolBuilder *this,int param_2,RType *param_3,int param_4)

{
  map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
  *this_00;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  RAncestor *this_01;
  CRefNamedSymbolCollection *this_02;
  CRefNamedSymbolCollection *this_03;
  undefined8 *puVar4;
  long lVar5;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_04;
  RType *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_3;
  if (param_2 == 1) {
    this_00 = (map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
               *)(this + 0x70);
    local_18 = std::
               map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
               ::find(this_00,local_28);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar2) {
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      this_01 = *(RAncestor **)(lVar5 + 8);
      goto LAB_0518e260;
    }
    this_01 = ::operator_new(0x88);
    RReferenceType::RReferenceType((RReferenceType *)this_01);
    nop();
    uVar3 = CRefNamedSymbolCollection::GetCount(this_03);
    *(undefined4 *)(this_01 + 100) = 0;
    *(undefined4 *)(this_01 + 0x60) = uVar3;
    *(undefined4 *)(this_01 + 0x68) = 8;
    *(undefined4 *)(this_01 + 0x6c) = 0;
    *(undefined4 *)(this_01 + 0x70) = 1;
    *(RType **)(this_01 + 0x78) = local_28[0];
    *(undefined4 *)(this_01 + 0x80) = 1;
    puVar4 = (undefined8 *)
             std::
             map<Reflection::RType*,Reflection::RReferenceType*,std::less<Reflection::RType*>,std::allocator<std::pair<Reflection::RType*const,Reflection::RReferenceType*>>>
             ::operator[](this_00,local_28);
    *puVar4 = this_01;
    this_04 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
  }
  else {
    this_01 = ::operator_new(0x88);
    RReferenceType::RReferenceType((RReferenceType *)this_01);
    this_04 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
    nop();
    uVar3 = CRefNamedSymbolCollection::GetCount(this_02);
    *(undefined4 *)(this_01 + 100) = 0;
    *(undefined4 *)(this_01 + 0x60) = uVar3;
    if (param_2 == 2) {
      iVar1 = *(int *)(local_28[0] + 0x68);
      *(undefined4 *)(this_01 + 0x6c) = 0;
      *(undefined4 *)(this_01 + 0x70) = 2;
      *(int *)(this_01 + 0x68) = param_4 * iVar1;
      *(RType **)(this_01 + 0x78) = local_28[0];
      *(int *)(this_01 + 0x80) = param_4;
    }
    else {
      *(undefined4 *)(this_01 + 0x68) = 8;
      *(RType **)(this_01 + 0x78) = local_28[0];
      *(undefined4 *)(this_01 + 0x6c) = 0;
      *(int *)(this_01 + 0x70) = param_2;
      *(undefined4 *)(this_01 + 0x80) = 1;
    }
  }
  std::string::string((string *)&local_10,"");
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(this_04,(string *)&local_10,this_01);
  std::string::~string((string *)&local_10);
  nop();
LAB_0518e260:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::GetSimpleType(Reflection::RSimpleType::ESimpleTypeCategory,
   unsigned int) */

void __thiscall
Reflection::CRefManualSymbolBuilder::GetSimpleType
          (CRefManualSymbolBuilder *this,uint param_2,int param_3)

{
  map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  RSimpleType *this_01;
  CRefNamedSymbolCollection *this_02;
  undefined8 *puVar4;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_03;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_1c = param_2 | param_3 << 0x10;
  this_00 = (map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
             ::find(this_00,&local_1c);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_01 = *(RSimpleType **)(lVar3 + 8);
  }
  else {
    this_01 = ::operator_new(0x78);
    RSimpleType::RSimpleType(this_01);
    nop();
    uVar2 = CRefNamedSymbolCollection::GetCount(this_02);
    *(undefined4 *)(this_01 + 100) = 0;
    *(undefined4 *)(this_01 + 0x60) = uVar2;
    *(int *)(this_01 + 0x68) = param_3;
    *(uint *)(this_01 + 0x6c) = (uint)bVar1;
    *(uint *)(this_01 + 0x70) = param_2;
    puVar4 = (undefined8 *)
             std::
             map<unsigned_int,Reflection::RSimpleType*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Reflection::RSimpleType*>>>
             ::operator[](this_00,&local_1c);
    *puVar4 = this_01;
    this_03 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
    std::string::string((string *)&local_10,"");
    TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
              (this_03,(string *)&local_10,(RAncestor *)this_01);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* Reflection::CRefManualSymbolBuilder::BuildField(Reflection::RClass*, std::string const&, unsigned
   int, Reflection::RType*) */

RField * __thiscall
Reflection::CRefManualSymbolBuilder::BuildField
          (CRefManualSymbolBuilder *this,RClass *param_1,string *param_2,uint param_3,RType *param_4
          )

{
  RField *this_00;
  
  this_00 = ::operator_new(0x88);
  RField::RField(this_00);
  thunk_FUN_05475e00((string *)(this_00 + 0x60),param_2);
  *(RClass **)(this_00 + 0x70) = param_1;
  *(undefined4 *)(this_00 + 0x68) = 2;
  *(uint *)(this_00 + 0x7c) = param_3;
  *(RType **)(this_00 + 0x80) = param_4;
  *(undefined4 *)(this_00 + 0x78) = 0;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)(param_1 + 0x98),
             (string *)(this_00 + 0x60),(RAncestor *)this_00);
  return this_00;
}


/* Reflection::CRefManualSymbolBuilder::BuildMethod(Reflection::RClass*, std::string const&,
   Sexy::DelegateBase*, Reflection::RFunctionType*, bool) */

RMethod * __thiscall
Reflection::CRefManualSymbolBuilder::BuildMethod
          (CRefManualSymbolBuilder *this,RClass *param_1,string *param_2,DelegateBase *param_3,
          RFunctionType *param_4,bool param_5)

{
  RMethod *this_00;
  undefined4 uVar1;
  
  this_00 = ::operator_new(0xa8);
  RMethod::RMethod(this_00);
  thunk_FUN_05475e00((string *)(this_00 + 0x60),param_2);
  *(RClass **)(this_00 + 0x70) = param_1;
  uVar1 = 0x40;
  if (!param_5) {
    uVar1 = 0;
  }
  *(undefined4 *)(this_00 + 0x78) = uVar1;
  *(undefined4 *)(this_00 + 0x68) = 2;
  *(undefined4 *)(this_00 + 0x80) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x7c) = 0;
  *(RFunctionType **)(this_00 + 0x90) = param_4;
  *(DelegateBase **)(this_00 + 0xa0) = param_3;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)(param_1 + 0x138),
             (string *)(this_00 + 0x60),(RAncestor *)this_00);
  return this_00;
}


/* Reflection::CRefManualSymbolBuilder::BuildProperty(Reflection::RClass*, std::string const&,
   Reflection::RType*, Reflection::RMethod*, Reflection::RMethod*) */

RProperty * __thiscall
Reflection::CRefManualSymbolBuilder::BuildProperty
          (CRefManualSymbolBuilder *this,RClass *param_1,string *param_2,RType *param_3,
          RMethod *param_4,RMethod *param_5)

{
  RProperty *this_00;
  
  this_00 = ::operator_new(0x98);
  RProperty::RProperty(this_00);
  thunk_FUN_05475e00((string *)(this_00 + 0x60),param_2);
  *(RClass **)(this_00 + 0x70) = param_1;
  *(undefined4 *)(this_00 + 0x68) = 2;
  *(RType **)(this_00 + 0x90) = param_3;
  *(RMethod **)(this_00 + 0x80) = param_4;
  *(RMethod **)(this_00 + 0x88) = param_5;
  *(undefined4 *)(this_00 + 0x78) = 0;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)(param_1 + 0xe8),
             (string *)(this_00 + 0x60),(RAncestor *)this_00);
  return this_00;
}


/* Reflection::CRefManualSymbolBuilder::BuildEvent(Reflection::RClass*, std::string const&, unsigned
   int, Reflection::RFunctionType*, bool) */

REvent * __thiscall
Reflection::CRefManualSymbolBuilder::BuildEvent
          (CRefManualSymbolBuilder *this,RClass *param_1,string *param_2,uint param_3,
          RFunctionType *param_4,bool param_5)

{
  REvent *this_00;
  undefined4 uVar1;
  
  this_00 = ::operator_new(0x88);
  REvent::REvent(this_00);
  thunk_FUN_05475e00((string *)(this_00 + 0x60),param_2);
  *(RClass **)(this_00 + 0x70) = param_1;
  uVar1 = 2;
  *(undefined4 *)(this_00 + 0x68) = 2;
  if (!param_5) {
    uVar1 = 0;
  }
  *(uint *)(this_00 + 0x7c) = param_3;
  *(undefined4 *)(this_00 + 0x78) = uVar1;
  *(RFunctionType **)(this_00 + 0x80) = param_4;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)(param_1 + 0x188),
             (string *)(this_00 + 0x60),(RAncestor *)this_00);
  return this_00;
}


/* Reflection::CRefManualSymbolBuilder::BuildAncestor(Reflection::RClass*, Reflection::RClass*,
   unsigned int) */

RAncestor * __thiscall
Reflection::CRefManualSymbolBuilder::BuildAncestor
          (CRefManualSymbolBuilder *this,RClass *param_1,RClass *param_2,uint param_3)

{
  RAncestor *this_00;
  char *__s;
  RClass *__n;
  
  __n = param_2;
  this_00 = ::operator_new(0x88);
  RAncestor::RAncestor(this_00);
  __s = (char *)RNamedType::GetName((RNamedType *)param_2);
  std::string::append((string *)(this_00 + 0x60),__s,(size_t)__n);
  *(RClass **)(this_00 + 0x70) = param_1;
  *(undefined4 *)(this_00 + 0x68) = 2;
  *(uint *)(this_00 + 0x7c) = param_3;
  *(undefined4 *)(this_00 + 0x78) = 0;
  *(RClass **)(this_00 + 0x80) = param_2;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)(param_1 + 0x1d8),
             (string *)(this_00 + 0x60),this_00);
  return this_00;
}


/* Reflection::CRefManualSymbolBuilder::AddEnum(std::string const&,
   std::vector<std::pair<std::string, unsigned int>, std::allocator<std::pair<std::string, unsigned
   int> > > const&, bool) */

void __thiscall
Reflection::CRefManualSymbolBuilder::AddEnum
          (CRefManualSymbolBuilder *this,string *param_1,vector *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  REnum *this_00;
  CRefNamedSymbolCollection *this_01;
  REnumMember *this_02;
  undefined8 uVar4;
  long lVar5;
  CRefNamedSymbolCollection *this_03;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_04;
  
  this_00 = ::operator_new(0x108);
  memset(this_00,0,0x108);
  REnum::REnum(this_00);
  TRefNamedSymbolCollection<Reflection::REnum>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(*(long *)(this + 8) + 0xa0),param_1,
             this_00);
  *(undefined4 *)(this_00 + 100) = 0;
  *(undefined4 *)(this_00 + 0x68) = 4;
  *(undefined4 *)(this_00 + 0x6c) = 0;
  thunk_FUN_05475e00(this_00 + 0x70,param_1);
  this_04 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
  *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this_00 + 0x78) = this_04;
  this_01 = (CRefNamedSymbolCollection *)
            PlantWarsNetworkMgr::GetEndPlayData((PlantWarsNetworkMgr *)this_04);
  iVar2 = CRefNamedSymbolCollection::GetCount(this_01);
  *(int *)(this_00 + 0x80) = iVar2 + -1;
  if (param_3) {
    *(undefined4 *)(this_00 + 0x84) = 0x80000001;
  }
  else {
    *(undefined4 *)(this_00 + 0x84) = 0x80000000;
  }
  iVar2 = FUN_0517f05c(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      this_02 = ::operator_new(0x80);
      REnumMember::REnumMember(this_02);
      uVar4 = FUN_0517f068(*(undefined8 *)param_2,lVar5);
      thunk_FUN_05475e00((string *)(this_02 + 0x60),uVar4);
      lVar1 = lVar5 + 1;
      lVar5 = FUN_0517f068(*(undefined8 *)param_2,lVar5);
      *(undefined4 *)(this_02 + 0x68) = *(undefined4 *)(lVar5 + 8);
      *(REnum **)(this_02 + 0x70) = this_00;
      *(undefined4 *)(this_02 + 0x78) = 0;
      TRefNamedSymbolCollection<Reflection::REnumMember>::AddSymbol
                ((TRefNamedSymbolCollection<Reflection::REnumMember> *)(this_00 + 0x88),
                 (string *)(this_02 + 0x60),this_02);
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
    this_04 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
  }
  nop();
  uVar3 = CRefNamedSymbolCollection::GetCount(this_03);
  *(undefined4 *)(this_00 + 0x60) = uVar3;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol(this_04,param_1,(RAncestor *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::AddClass(std::string const&, void
   (*)(Reflection::IRefManualSymbolBuilder*, Reflection::RClass*), unsigned int, unsigned int) */

void __thiscall
Reflection::CRefManualSymbolBuilder::AddClass
          (CRefManualSymbolBuilder *this,string *param_1,
          _func_void_IRefManualSymbolBuilder_ptr_RClass_ptr *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  RClass *pRVar3;
  CRefNamedSymbolCollection *this_00;
  CRefNamedSymbolCollection *this_01;
  undefined8 *puVar4;
  CRefSymbolDb *this_02;
  RClass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = ::operator_new(0x3d0);
  RClass::RClass(pRVar3);
  local_10 = pRVar3;
  TRefNamedSymbolCollection<Reflection::RClass>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RClass> *)(*(long *)(this + 8) + 0x50),param_1,
             pRVar3);
  *(undefined4 *)(local_10 + 100) = 0;
  *(uint *)(local_10 + 0x68) = param_3;
  *(undefined4 *)(local_10 + 0x6c) = 0;
  thunk_FUN_05475e00(local_10 + 0x70,param_1);
  pRVar3 = local_10;
  this_02 = *(CRefSymbolDb **)(this + 8);
  *(CRefSymbolDb **)(local_10 + 0x78) = this_02;
  this_00 = (CRefNamedSymbolCollection *)CRefSymbolDb::GetClasses(this_02);
  iVar1 = CRefNamedSymbolCollection::GetCount(this_00);
  *(uint *)(pRVar3 + 0x88) = param_4;
  *(int *)(pRVar3 + 0x80) = iVar1 + -1;
  *(undefined4 *)(pRVar3 + 0x84) = 0;
  nop();
  uVar2 = CRefNamedSymbolCollection::GetCount(this_01);
  *(undefined4 *)(pRVar3 + 0x60) = uVar2;
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            ((TRefNamedSymbolCollection<Reflection::RAncestor> *)this_02,param_1,(RAncestor *)pRVar3
            );
  puVar4 = (undefined8 *)
           std::
           map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
           ::operator[]((map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
                         *)(this + 0x10),&local_10);
  *puVar4 = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::BuildClass(Reflection::RClass*) */

void __thiscall
Reflection::CRefManualSymbolBuilder::BuildClass(CRefManualSymbolBuilder *this,RClass *param_1)

{
  uint uVar1;
  TRefNamedSymbolCollection<Reflection::RAncestor> *pTVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  CRefNamedSymbolCollection *pCVar10;
  RAttribute *pRVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  RClass *this_00;
  long lVar15;
  RClass *local_48 [2];
  RClass *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48[0] = param_1;
  if (-1 < *(int *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 0x80000000;
    puVar7 = (undefined8 *)
             std::
             map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
             ::operator[]((map<Reflection::RClass*,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*),std::less<Reflection::RClass*>,std::allocator<std::pair<Reflection::RClass*const,void(*)(Reflection::IRefManualSymbolBuilder*,Reflection::RClass*)>>>
                           *)(this + 0x10),local_48);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(this,local_48[0]);
    }
    uVar5 = 0;
    RClass::ResolveVirtualBases(local_48[0]);
    pCVar10 = (CRefNamedSymbolCollection *)(local_48[0] + 0x138);
    iVar4 = CRefNamedSymbolCollection::GetCount(pCVar10);
    if (0 < iVar4) {
      do {
        lVar8 = TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                          ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar10,uVar5);
        if (*(long *)(lVar8 + 0xa0) != 0) {
          lVar9 = FUN_0517ebec(*(undefined8 *)(lVar8 + 0x90));
          lVar9 = FUN_0517eaa4(*(undefined8 *)(lVar9 + 0x78));
          uVar14 = 0x20;
          if (lVar9 == 0) {
            uVar14 = 0x10;
          }
          *(uint *)(lVar8 + 0x78) = *(uint *)(lVar8 + 0x78) | uVar14;
          iVar4 = CRefNamedSymbolCollection::GetCount(pCVar10);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar4);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_38 = local_48[0];
    if (local_48[0] != (RClass *)0x0) {
      do {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        std::vector<Reflection::RClass*,std::allocator<Reflection::RClass*>>::insert
                  ((vector<Reflection::RClass*,std::allocator<Reflection::RClass*>> *)&local_20,
                   local_28,&local_38);
        local_38 = (RClass *)RClass::GetPrimaryAncestor(local_38);
      } while (local_38 != (RClass *)0x0);
    }
    uVar13 = local_20;
    lVar8 = 0;
    iVar4 = FUN_0517f048(local_20,local_18);
    if (0 < iVar4) {
      do {
        puVar7 = (undefined8 *)FUN_0517f054(uVar13,lVar8);
        pCVar10 = (CRefNamedSymbolCollection *)RClass::GetFields((RClass *)*puVar7,false);
        uVar5 = CRefNamedSymbolCollection::GetCount(pCVar10);
        if (uVar5 != 0) {
          uVar14 = 0;
          do {
            uVar6 = uVar14 + 1;
            pRVar11 = (RAttribute *)
                      TRefNamedSymbolCollection<Reflection::RField>::GetIndexed
                                ((TRefNamedSymbolCollection<Reflection::RField> *)pCVar10,uVar14);
            pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x240);
            pcVar12 = (char *)RAttribute::GetName(pRVar11);
            std::string::string((string *)&local_28,pcVar12);
            TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                      (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
            std::string::~string((string *)&local_28);
            nop();
            uVar13 = local_20;
            uVar14 = uVar6;
          } while (uVar6 != uVar5);
          iVar4 = FUN_0517f048(local_20,local_18);
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar4);
    }
    uVar5 = iVar4 - 1;
    if (-1 < (int)uVar5) {
      lVar15 = (long)(int)uVar5 + -1;
      lVar8 = (long)(int)uVar5;
      lVar9 = lVar15;
      do {
        puVar7 = (undefined8 *)FUN_0517f054(uVar13,lVar8);
        this_00 = (RClass *)*puVar7;
        uVar14 = 0;
        pCVar10 = (CRefNamedSymbolCollection *)RClass::GetMethods(this_00,false);
        uVar6 = CRefNamedSymbolCollection::GetCount(pCVar10);
        if (uVar6 != 0) {
          do {
            while( true ) {
              pRVar11 = (RAttribute *)
                        TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                  ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar10,uVar14);
              pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x2e0);
              pcVar12 = (char *)RAttribute::GetName(pRVar11);
              std::string::string((string *)&local_28,pcVar12);
              cVar3 = TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                                (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
              std::string::~string((string *)&local_28);
              nop();
              if (cVar3 != '\0') break;
              pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x2e0);
              uVar14 = uVar14 + 1;
              std::string::string((string *)&local_28,"");
              TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                        (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
              std::string::~string((string *)&local_28);
              nop();
              *(uint *)(pRVar11 + 0x78) = *(uint *)(pRVar11 + 0x78) | 0x80;
              if (uVar14 == uVar6) goto LAB_05191a80;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar6);
        }
LAB_05191a80:
        uVar14 = 0;
        pCVar10 = (CRefNamedSymbolCollection *)RClass::GetProperties(this_00,false);
        uVar6 = CRefNamedSymbolCollection::GetCount(pCVar10);
        if (uVar6 != 0) {
          do {
            while( true ) {
              pRVar11 = (RAttribute *)
                        TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                  ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar10,uVar14);
              pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x290);
              pcVar12 = (char *)RAttribute::GetName(pRVar11);
              std::string::string((string *)&local_28,pcVar12);
              cVar3 = TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                                (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
              std::string::~string((string *)&local_28);
              nop();
              if (cVar3 != '\0') break;
              pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x290);
              uVar14 = uVar14 + 1;
              std::string::string((string *)&local_28,"");
              TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                        (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
              std::string::~string((string *)&local_28);
              nop();
              *(uint *)(pRVar11 + 0x78) = *(uint *)(pRVar11 + 0x78) | 0x80;
              if (uVar14 == uVar6) goto LAB_05191b54;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar6);
        }
LAB_05191b54:
        pCVar10 = (CRefNamedSymbolCollection *)RClass::GetAttributes(this_00,false);
        uVar6 = CRefNamedSymbolCollection::GetCount(pCVar10);
        uVar14 = 0;
        if (uVar6 != 0) {
          do {
            uVar1 = uVar14 + 1;
            pRVar11 = (RAttribute *)
                      TRefNamedSymbolCollection<Reflection::RType>::GetIndexed
                                ((TRefNamedSymbolCollection<Reflection::RType> *)pCVar10,uVar14);
            pTVar2 = (TRefNamedSymbolCollection<Reflection::RAncestor> *)(local_48[0] + 0x380);
            pcVar12 = (char *)RAttribute::GetName(pRVar11);
            std::string::string((string *)&local_28,pcVar12);
            TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
                      (pTVar2,(string *)&local_28,(RAncestor *)pRVar11);
            std::string::~string((string *)&local_28);
            nop();
            uVar14 = uVar1;
          } while (uVar1 != uVar6);
        }
        if (lVar9 == lVar15 - (ulong)uVar5) break;
        uVar13 = local_20;
        lVar8 = lVar9;
        lVar9 = lVar9 + -1;
      } while( true );
    }
    std::vector<Reflection::RClass*,std::allocator<Reflection::RClass*>>::~vector
              ((vector<Reflection::RClass*,std::allocator<Reflection::RClass*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualSymbolBuilder::GetFunctionType(Reflection::RFunctionType::ECallType,
   Reflection::RType*, Reflection::RType*, std::vector<Reflection::RType*,
   std::allocator<Reflection::RType*> > const&) */

void __thiscall
Reflection::CRefManualSymbolBuilder::GetFunctionType
          (CRefManualSymbolBuilder *this,undefined4 param_2,long param_3,long param_4,
          undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  RFunctionType *this_00;
  CRefNamedSymbolCollection *this_01;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  TRefNamedSymbolCollection<Reflection::RAncestor> *this_02;
  undefined8 uVar14;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar14 = *param_5;
  local_8 = ___stack_chk_guard;
  uVar5 = FUN_0517f070(uVar14,param_5[1]);
  if (uVar5 < 3) {
    lVar10 = 0;
    lVar13 = 0;
    if (uVar5 != 0) {
      plVar6 = (long *)FUN_0517f07c(uVar14,0);
      lVar10 = 0;
      lVar13 = *plVar6;
      if (uVar5 == 2) {
        plVar6 = (long *)FUN_0517f07c(uVar14,1);
        lVar10 = *plVar6;
      }
    }
    if (((((param_3 != 0) && (0xfffe < *(uint *)(param_3 + 0x60))) ||
         ((param_4 != 0 && (0xfffe < *(uint *)(param_4 + 0x60))))) ||
        ((lVar13 != 0 && (0xfffe < *(uint *)(lVar13 + 0x60))))) ||
       ((lVar10 != 0 && (0xfffe < *(uint *)(lVar10 + 0x60))))) goto LAB_05192810;
    if (param_3 == 0) {
      uVar5 = 0xffff000000000000;
    }
    else {
      uVar5 = (ulong)*(uint *)(param_3 + 0x60) << 0x30;
    }
    if (param_4 == 0) {
      uVar8 = 0xffff00000000;
    }
    else {
      uVar8 = (ulong)*(uint *)(param_4 + 0x60) << 0x20;
    }
    if (lVar13 == 0) {
      uVar12 = 0xffff0000;
    }
    else {
      uVar12 = (ulong)*(uint *)(lVar13 + 0x60) << 0x10;
    }
    if (lVar10 == 0) {
      local_20 = 0xffff;
    }
    else {
      local_20 = (ulong)*(uint *)(lVar10 + 0x60);
    }
    local_20 = uVar8 | uVar5 | uVar12 | local_20;
    bVar1 = true;
    local_18 = std::
               map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
               ::find((map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
                       *)(this + 0xa0),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0xa0));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar2) {
      lVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      this_00 = *(RFunctionType **)(lVar10 + 8);
      goto LAB_051928f8;
    }
  }
  else {
LAB_05192810:
    bVar1 = false;
  }
  this_00 = ::operator_new(0xa0);
  RFunctionType::RFunctionType(this_00);
  nop();
  uVar3 = CRefNamedSymbolCollection::GetCount(this_01);
  *(long *)(this_00 + 0x78) = param_3;
  *(long *)(this_00 + 0x80) = param_4;
  *(undefined4 *)(this_00 + 0x60) = uVar3;
  uVar11 = param_5[1];
  uVar14 = *param_5;
  *(undefined4 *)(this_00 + 100) = 0;
  *(undefined4 *)(this_00 + 0x68) = 8;
  *(undefined4 *)(this_00 + 0x6c) = 0;
  *(undefined4 *)(this_00 + 0x70) = param_2;
  iVar4 = FUN_0517f070(uVar14,uVar11);
  std::vector<Reflection::RSymbol::UTypePtr,std::allocator<Reflection::RSymbol::UTypePtr>>::resize
            ((vector<Reflection::RSymbol::UTypePtr,std::allocator<Reflection::RSymbol::UTypePtr>> *)
             (this_00 + 0x88),(long)iVar4);
  lVar10 = 0;
  while( true ) {
    uVar14 = *param_5;
    iVar4 = FUN_0517f070(uVar14,param_5[1]);
    if (iVar4 <= (int)lVar10) break;
    puVar9 = (undefined8 *)FUN_0517f084(*(undefined8 *)(this_00 + 0x88),lVar10);
    puVar7 = (undefined8 *)FUN_0517f07c(uVar14,lVar10);
    *puVar9 = *puVar7;
    lVar10 = lVar10 + 1;
  }
  if (bVar1) {
    puVar9 = (undefined8 *)
             std::
             map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
             ::operator[]((map<unsigned_long,Reflection::RFunctionType*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Reflection::RFunctionType*>>>
                           *)(this + 0xa0),&local_20);
    *puVar9 = this_00;
  }
  this_02 = *(TRefNamedSymbolCollection<Reflection::RAncestor> **)(this + 8);
  std::string::string((string *)&local_10,"");
  TRefNamedSymbolCollection<Reflection::RAncestor>::AddSymbol
            (this_02,(string *)&local_10,(RAncestor *)this_00);
  std::string::~string((string *)&local_10);
  nop();
LAB_051928f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

