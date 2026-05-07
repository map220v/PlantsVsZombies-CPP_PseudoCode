// Class: Reflection::CRefManualTypeBuilder


/* Reflection::CRefManualTypeBuilder::BuildNamedType(Reflection::IRefManualSymbolBuilder*,
   std::string const&) */

void Reflection::CRefManualTypeBuilder::BuildNamedType
               (IRefManualSymbolBuilder *param_1,string *param_2)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualTypeBuilder::StripPointerFromTypeName(std::string const&) */

void __thiscall
Reflection::CRefManualTypeBuilder::StripPointerFromTypeName
          (CRefManualTypeBuilder *this,string *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_0547419c();
  if (cVar2 == '\0') {
    lVar3 = FUN_05474184(this);
    pcVar4 = (char *)FUN_054741b0(this,lVar3 + -1);
    if ((*pcVar4 - 0x26U & 0xfb) == 0) {
      FUN_05475ffc(this,0,lVar3 + -1);
    }
    else {
      FUN_05475d88();
    }
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "CRefManualTypeBuilder::StripPointerFromTypeName: empty type name, probably resulting from a GetType<T>() without an inTypeName argument"
              );
    std::string::string(in_x8,"");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualTypeBuilder::GetInnerTemplateTypeName(std::string const&) */

void __thiscall
Reflection::CRefManualTypeBuilder::GetInnerTemplateTypeName
          (CRefManualTypeBuilder *this,string *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  string *extraout_x1;
  string *in_x8;
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    lVar2 = FUN_05474184(this);
    pcVar3 = (char *)FUN_054741b0(this,lVar2 + -1);
    if (*pcVar3 == '>') {
      FUN_05475ffc(asStack_18,this,0,lVar2 + -1);
      lVar2 = FUN_054743b0(asStack_18,0x3c,0);
      if (lVar2 == -1) {
        FUN_05475d88();
      }
      else {
        FUN_05475ffc(aSStack_10,asStack_18,lVar2 + 1,0xffffffffffffffff);
        Sexy::Trim(aSStack_10,extraout_x1);
        std::string::~string((string *)aSStack_10);
      }
      std::string::~string(asStack_18);
    }
    else {
      FUN_05475d88();
    }
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "CRefManualTypeBuilder::GetInnerTemplateTypeName: empty type name, probably resulting from a GetType<T>() without an inTypeName argument"
              );
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualTypeBuilder::GetMapInnerTemplateTypeName(std::string const&) */

void __thiscall
Reflection::CRefManualTypeBuilder::GetMapInnerTemplateTypeName
          (CRefManualTypeBuilder *this,string *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    lVar2 = FUN_05474184(this);
    pcVar3 = (char *)FUN_054741b0(this,lVar2 + -1);
    if (((*pcVar3 == '>') && (lVar2 = FUN_054743b0(this,0x3c,0), lVar2 != -1)) &&
       (lVar2 = FUN_05474374(this,"RT_COMMA",0), lVar2 != -1)) {
      FUN_05475ffc(aSStack_18,this,lVar2 + 8,0xffffffffffffffff);
      lVar2 = FUN_05474184(aSStack_18);
      FUN_05475ffc(asStack_10,aSStack_18,0,lVar2 + -1);
      FUN_05474278(aSStack_18,asStack_10);
      std::string::~string(asStack_10);
      Sexy::Trim(aSStack_18,extraout_x1);
      std::string::~string((string *)aSStack_18);
    }
    else {
      FUN_05475d88();
    }
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "CRefManualTypeBuilder::GetMapInnerTemplateTypeName: empty type name, probably resulting from a GetType<T>() without an inTypeName argument"
              );
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::CRefManualTypeBuilder::GetEmbeddedInnerTemplateTypeName(std::string const&) */

void __thiscall
Reflection::CRefManualTypeBuilder::GetEmbeddedInnerTemplateTypeName
          (CRefManualTypeBuilder *this,string *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  string *extraout_x1;
  string *in_x8;
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    lVar2 = FUN_05474184(this);
    pcVar3 = (char *)FUN_054741b0(this,lVar2 + -1);
    if ((*pcVar3 == '>') && (lVar2 = FUN_05474374(this,"RT_COMMA",0), lVar2 != -1)) {
      FUN_05475ffc(asStack_18,this,0,lVar2 + -1);
      lVar2 = FUN_054743b0(asStack_18,0x3c,0);
      if (lVar2 == -1) {
        FUN_05475d88();
      }
      else {
        FUN_05475ffc(aSStack_10,asStack_18,lVar2 + 1,0xffffffffffffffff);
        Sexy::Trim(aSStack_10,extraout_x1);
        std::string::~string((string *)aSStack_10);
      }
      std::string::~string(asStack_18);
    }
    else {
      FUN_05475d88();
    }
  }
  else {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "CRefManualTypeBuilder::GetEmbeddedInnerTemplateTypeName: empty type name, probably resulting from a GetType<T>() without an inTypeName argument"
              );
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

