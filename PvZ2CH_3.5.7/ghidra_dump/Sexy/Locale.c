// Class: Sexy::Locale


/* Sexy::Locale::SetSeperators(std::wstring const&, std::wstring const&) */

void Sexy::Locale::SetSeperators(wstring *param_1,wstring *param_2)

{
  thunk_FUN_05477b9c(&gGrouping,param_1);
  thunk_FUN_05477b9c(&gThousandSep,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Locale::SetLocale(std::wstring const&) */

void Sexy::Locale::SetLocale(wstring *param_1)

{
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  WStringToString((Sexy *)param_1,(wstring *)0x0,___stack_chk_guard);
  FUN_05474278(&gLocaleString,asStack_10);
  std::string::~string(asStack_10);
  FUN_054772c4(&gGrouping,&DAT_0574ed10);
  FUN_05477110(&gThousandSep,0x2c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Locale::StringToUpper(std::string const&) */

void __thiscall Sexy::Locale::StringToUpper(Locale *this,string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  Set8BytesTo0();
  FUN_05474184(this);
  FUN_0547570c();
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_05474184(this);
    pvVar1 = gCharCtype;
    if (uVar2 <= uVar3) break;
    FUN_054741b0(this,uVar3);
    EATextSquish::ColourFit::Compress(pvVar1);
    FUN_05475c50();
    uVar3 = uVar3 + 1;
  }
  return;
}


/* Sexy::Locale::StringToLower(std::string const&) */

void __thiscall Sexy::Locale::StringToLower(Locale *this,string *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  Set8BytesTo0();
  FUN_05474184(this);
  FUN_0547570c();
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_05474184(this);
    uVar1 = gCharCtype;
    if (uVar2 <= uVar3) break;
    FUN_054741b0(this,uVar3);
    std::ctype<char>::tolower((char)uVar1);
    FUN_05475c50();
    uVar3 = uVar3 + 1;
  }
  return;
}


/* Sexy::Locale::isalnum(char) */

void Sexy::Locale::isalnum(char param_1)

{
  FUN_051dccc4(*(undefined8 *)(gCharCtype + 0x30),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Locale::UCommaSeparate(unsigned int) */

void __thiscall Sexy::Locale::UCommaSeparate(Locale *this,uint param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  string asStack_110 [260];
  undefined4 local_c;
  long local_8;
  
  uVar10 = (ulong)this & 0xffffffff;
  local_8 = ___stack_chk_guard;
  if ((int)this == 0) {
    FUN_05478178();
    nop();
  }
  else {
    Sexy::ToString((wstring *)&gGrouping);
    pbVar3 = (byte *)FUN_0547429c(asStack_110);
    bVar1 = *pbVar3;
    if (bVar1 < 0x31) {
      plVar5 = &local_8;
      do {
        uVar2 = uVar10 / 10;
        iVar9 = (int)uVar10;
        uVar10 = uVar10 / 10;
        plVar5 = (long *)((long)plVar5 + -4);
        *(int *)plVar5 = iVar9 + (int)uVar2 * -10 + 0x30;
      } while ((int)uVar10 != 0);
    }
    else {
      piVar4 = (int *)FUN_05476f5c(&gThousandSep,0);
      iVar9 = *piVar4;
      cVar7 = '\0';
      if (iVar9 == 0) {
        iVar9 = 0xa0;
      }
      plVar5 = &local_8;
      while( true ) {
        plVar6 = plVar5;
        uVar2 = uVar10 / 10;
        iVar8 = (int)uVar10;
        uVar10 = uVar10 / 10;
        *(int *)((long)plVar6 + -4) = iVar8 + (int)uVar2 * -10 + 0x30;
        if ((int)uVar10 == 0) break;
        cVar7 = cVar7 + '\x01';
        plVar5 = (long *)((long)plVar6 + -4);
        if ((byte)(bVar1 - 0x30) == cVar7) {
          *(int *)(plVar6 + -1) = iVar9;
          cVar7 = '\0';
          plVar5 = plVar6 + -1;
        }
      }
    }
    FUN_05477edc();
    nop();
    std::string::~string(asStack_110);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Locale::UCommaSeparate64(unsigned long) */

void __thiscall Sexy::Locale::UCommaSeparate64(Locale *this,ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  long *plVar5;
  Locale *pLVar6;
  long *plVar7;
  string asStack_210 [516];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this == (Locale *)0x0) {
    FUN_05478178();
    nop();
  }
  else {
    Sexy::ToString((wstring *)&gGrouping);
    pbVar3 = (byte *)FUN_0547429c(asStack_210);
    if ((byte)(*pbVar3 - 1) < 0xfe) {
      puVar4 = (undefined4 *)FUN_05476f5c(&gThousandSep,0);
      uVar1 = *puVar4;
      uVar2 = 0;
      plVar5 = &local_8;
      while( true ) {
        plVar7 = plVar5;
        pLVar6 = (Locale *)((ulong)this / 10);
        *(int *)((long)plVar7 + -4) = (int)this + (int)pLVar6 * -10 + 0x30;
        if (pLVar6 == (Locale *)0x0) break;
        uVar2 = uVar2 + 1;
        plVar5 = (long *)((long)plVar7 + -4);
        this = pLVar6;
        if (uVar2 == *pbVar3) {
          *(undefined4 *)(plVar7 + -1) = uVar1;
          uVar2 = 0;
          plVar5 = plVar7 + -1;
          if (pbVar3[1] != 0) {
            pbVar3 = pbVar3 + 1;
          }
        }
      }
    }
    else {
      plVar5 = &local_8;
      do {
        pLVar6 = (Locale *)((ulong)this / 10);
        plVar5 = (long *)((long)plVar5 + -4);
        *(int *)plVar5 = (int)this + (int)pLVar6 * -10 + 0x30;
        this = pLVar6;
      } while (pLVar6 != (Locale *)0x0);
    }
    FUN_05477edc();
    nop();
    std::string::~string(asStack_210);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::Locale::StringToUpper(std::wstring const&) */

void __thiscall Sexy::Locale::StringToUpper(Locale *this,wstring *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_05476574();
  FUN_054765d0(this);
  FUN_054775b4();
  uVar2 = 0;
  while( true ) {
    uVar1 = FUN_054765d0(this);
    if (uVar1 <= uVar2) break;
    FUN_054765fc(this,uVar2);
    std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)gWCharCtype);
    FUN_054779f4();
    uVar2 = uVar2 + 1;
  }
  return;
}


/* Sexy::Locale::StringToLower(std::wstring const&) */

void __thiscall Sexy::Locale::StringToLower(Locale *this,wstring *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_05476574();
  FUN_054765d0(this);
  FUN_054775b4();
  uVar2 = 0;
  while( true ) {
    uVar1 = FUN_054765d0(this);
    if (uVar1 <= uVar2) break;
    FUN_054765fc(this,uVar2);
    std::__ctype_abstract_base<wchar_t>::tolower((wchar_t)gWCharCtype);
    FUN_054779f4();
    uVar2 = uVar2 + 1;
  }
  return;
}


/* Sexy::Locale::isalnum(wchar_t) */

void Sexy::Locale::isalnum(wchar_t param_1)

{
  std::__ctype_abstract_base<wchar_t>::is((char)gWCharCtype,L'\a');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Locale::CommaSeparate(int) */

void __thiscall Sexy::Locale::CommaSeparate(Locale *this,int param_1)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)this < 0) {
    UCommaSeparate((Locale *)(ulong)(uint)-(int)this,(uint)___stack_chk_guard);
    std::operator+(L"-",awStack_10);
    FUN_05476c50(awStack_10);
  }
  else {
    UCommaSeparate(this,(uint)___stack_chk_guard);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Locale::CommaSeparate64(long) */

void __thiscall Sexy::Locale::CommaSeparate64(Locale *this,long param_1)

{
  wstring awStack_10 [8];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  if ((long)this < 0) {
    UCommaSeparate64((Locale *)-(long)this,___stack_chk_guard);
    std::operator+(L"-",awStack_10);
    FUN_05476c50(awStack_10);
  }
  else {
    UCommaSeparate64(this,___stack_chk_guard);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

