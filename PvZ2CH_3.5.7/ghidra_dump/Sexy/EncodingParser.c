// Class: Sexy::EncodingParser


/* Sexy::EncodingParser::SetEncodingType(Sexy::EncodingParser::EncodingType) */

void __thiscall Sexy::EncodingParser::SetEncodingType(EncodingParser *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *(code **)(this + 0x28) = GetAsciiChar;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x38] = (EncodingParser)0x1;
    return;
  case 1:
    *(code **)(this + 0x28) = GetUTF8Char;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x38] = (EncodingParser)0x1;
    return;
  case 2:
    *(code **)(this + 0x28) = GetUTF16Char;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x38] = (EncodingParser)0x1;
    return;
  case 3:
    *(code **)(this + 0x28) = GetUTF16LEChar;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x38] = (EncodingParser)0x1;
    return;
  case 4:
    *(code **)(this + 0x28) = GetUTF16BEChar;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x38] = (EncodingParser)0x1;
  }
  return;
}


/* Sexy::EncodingParser::CloseFile() */

undefined8 __thiscall Sexy::EncodingParser::CloseFile(EncodingParser *this)

{
  if (*(long *)(this + 8) != 0) {
    FUN_0514c4e0(*(long *)(this + 8));
    *(undefined8 *)(this + 8) = 0;
    return 1;
  }
  return 0;
}


/* Sexy::EncodingParser::EndOfFile() */

bool __thiscall Sexy::EncodingParser::EndOfFile(EncodingParser *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_0514c588(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  bVar1 = false;
  if (lVar3 == 0) {
    if (*(long *)(this + 8) == 0) {
      return true;
    }
    iVar2 = FUN_0514c3cc();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetUTF16BEChar(wchar_t*, bool*) */

void __thiscall
Sexy::EncodingParser::GetUTF16BEChar(EncodingParser *this,wchar_t *param_1,bool *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0514c664(local_10,2,*(undefined8 *)(this + 8));
  uVar3 = 0;
  if (lVar2 != 1) goto LAB_0514c780;
  uVar1 = (local_10[0] & 0xff) << 8;
  local_10[0] = uVar1 | local_10[0] >> 8 & 0xff;
  if ((uVar1 & 0xfc00) == 0xd800) {
    uVar3 = *(undefined8 *)(this + 8);
    *param_2 = true;
    local_10[1] = 0;
    lVar2 = FUN_0514c664(local_10 + 1,2,uVar3);
    if (lVar2 == 1) {
      uVar1 = (local_10[0] & 0xff) << 8;
      if ((uVar1 & 0xfc00) == 0xdc00) {
        *param_1 = (uVar1 & 0x3ff | local_10[0] >> 8 & 0xff | (local_10[0] & 0x3ff) << 10) + L'𐀀'
        ;
        goto LAB_0514c7cc;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0514c7cc:
    *param_2 = false;
    uVar3 = 1;
  }
LAB_0514c780:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetUTF16LEChar(wchar_t*, bool*) */

void __thiscall
Sexy::EncodingParser::GetUTF16LEChar(EncodingParser *this,wchar_t *param_1,bool *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0514c664(local_10,2,*(undefined8 *)(this + 8));
  uVar2 = 0;
  if (lVar1 == 1) {
    if ((local_10[0] & 0xfc00) == 0xd800) {
      uVar2 = *(undefined8 *)(this + 8);
      *param_2 = true;
      local_10[1] = 0;
      lVar1 = FUN_0514c664(local_10 + 1,2,uVar2);
      if ((lVar1 != 1) || ((local_10[0] & 0xfc00) != 0xdc00)) {
        uVar2 = 0;
        goto LAB_0514c890;
      }
      *param_1 = (local_10[0] & 0x3ff | (local_10[0] & 0x3ff) << 10) + L'𐀀';
    }
    *param_2 = false;
    uVar2 = 1;
  }
LAB_0514c890:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetUTF16Char(wchar_t*, bool*) */

void __thiscall
Sexy::EncodingParser::GetUTF16Char(EncodingParser *this,wchar_t *param_1,bool *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  wchar_t local_10;
  uint local_c;
  long local_8;
  
  local_10 = L'\0';
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0514c664(&local_10,2,*(undefined8 *)(this + 8));
  uVar1 = 0;
  if (lVar2 != 1) goto LAB_0514c980;
  if (this[0x39] != (EncodingParser)0x0) {
    this[0x39] = (EncodingParser)0x0;
    if (local_10 == L'\xfeff') {
      this[0x3a] = (EncodingParser)0x0;
    }
    else {
      if (local_10 != L'\xfffe') goto LAB_0514c9d0;
      this[0x3a] = (EncodingParser)0x1;
    }
    uVar1 = GetUTF16Char(this,param_1,param_2);
    goto LAB_0514c980;
  }
LAB_0514c9d0:
  if (this[0x3a] != (EncodingParser)0x0) {
    local_10 = (uint)local_10 >> 8 & 0xff | (local_10 & 0xffU) << 8;
  }
  if ((local_10 & 0xfc00U) == 0xd800) {
    uVar3 = *(undefined8 *)(this + 8);
    *param_2 = true;
    local_c = 0;
    lVar2 = FUN_0514c664(&local_c,2,uVar3);
    if (lVar2 == 1) {
      if (this[0x3a] != (EncodingParser)0x0) {
        local_c = local_c >> 8 & 0xff | (local_c & 0xff) << 8;
      }
      if ((local_c & 0xfc00) == 0xdc00) {
        *param_1 = (local_c & 0x3ff | (local_10 & 0x3ffU) << 10) + L'𐀀';
        goto LAB_0514c9ec;
      }
    }
    uVar1 = 0;
  }
  else {
    *param_1 = local_10;
LAB_0514c9ec:
    *param_2 = false;
    uVar1 = 1;
  }
LAB_0514c980:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetUTF8Char(wchar_t*, bool*) */

void __thiscall
Sexy::EncodingParser::GetUTF8Char(EncodingParser *this,wchar_t *param_1,bool *param_2)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t wVar6;
  uint *puVar7;
  uint *puVar8;
  byte local_21;
  uint local_20 [6];
  long local_8;
  
  local_21 = 0;
  local_8 = ___stack_chk_guard;
  uVar4 = *(undefined8 *)(this + 8);
  *param_2 = true;
  lVar2 = FUN_0514c664(&local_21,1,uVar4);
  if (lVar2 != 1) {
    *param_2 = false;
    uVar1 = 0;
    goto LAB_0514cb18;
  }
  wVar6 = (wchar_t)local_21;
  if ((char)local_21 < '\0') {
    if ((local_21 & 0xc0) == 0xc0) {
      local_20[0] = (uint)local_21;
      if (((local_20[0] ^ 0x180) & 0xc0) == 0) {
        wVar6 = wVar6 & 0xffffff3f;
      }
      else {
        if (((wVar6 ^ 0x1c0U) & 0xe0U) == 0) {
          iVar5 = 1;
          uVar3 = 0xe0;
        }
        else if (((local_20[0] ^ 0x1e0) & 0xf0) == 0) {
          iVar5 = 2;
          uVar3 = 0xf0;
        }
        else if (((local_20[0] ^ 0x1f0) & 0xf8) == 0) {
          iVar5 = 3;
          uVar3 = 0xf8;
        }
        else {
          if (((wVar6 ^ 0x1f8U) & 0xfcU) != 0) goto LAB_0514cba8;
          iVar5 = 4;
          uVar3 = 0xfc;
        }
        wVar6 = wVar6 & (uVar3 ^ 0xffffffff);
        puVar8 = local_20 + 1;
        do {
          lVar2 = FUN_0514c664(&local_21,1,*(undefined8 *)(this + 8));
          if (lVar2 != 1) {
            uVar1 = 0;
            goto LAB_0514cb18;
          }
          if ((local_21 & 0xc0) != 0x80) goto LAB_0514cba8;
          puVar7 = puVar8 + 1;
          *puVar8 = (uint)local_21;
          wVar6 = local_21 & 0x3f | wVar6 << 6;
          puVar8 = puVar7;
        } while (puVar7 != local_20 + (ulong)(iVar5 - 1) + 2);
        if (iVar5 == 3) {
          if (((local_20[0] & 0xf) == 0) && ((local_20[1] & 0x30) == 0)) {
            uVar1 = 0;
            goto LAB_0514cb18;
          }
        }
        else if (iVar5 == 4) {
          if (((local_20[0] & 7) == 0) && ((local_20[1] & 0x38) == 0)) {
            uVar1 = 0;
            goto LAB_0514cb18;
          }
        }
        else if (iVar5 == 2) {
          if (((local_20[0] & 0x1f) == 0) && ((local_20[1] >> 5 & 1) == 0)) {
            uVar1 = 0;
            goto LAB_0514cb18;
          }
        }
        else if ((local_20[0] & 0x3e) == 0) {
          uVar1 = 0;
          goto LAB_0514cb18;
        }
      }
      goto LAB_0514cb50;
    }
  }
  else {
LAB_0514cb50:
    if ((1 < (uint)(wVar6 + L'\xffff0002')) && (0x7ff < (uint)(wVar6 + L'\xffff2800'))) {
      if ((this[0x39] == (EncodingParser)0x0) ||
         (this[0x39] = (EncodingParser)0x0, wVar6 != L'\xfeff')) {
        *param_1 = wVar6;
        uVar1 = 1;
        *param_2 = false;
      }
      else {
        uVar1 = GetUTF8Char(this,param_1,param_2);
      }
      goto LAB_0514cb18;
    }
  }
LAB_0514cba8:
  uVar1 = 0;
LAB_0514cb18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetAsciiChar(wchar_t*, bool*) */

void Sexy::EncodingParser::GetAsciiChar(wchar_t *param_1,bool *param_2)

{
  long lVar1;
  byte local_9;
  long local_8;
  
  local_9 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0514c664(&local_9,1,*(undefined8 *)(param_1 + 2));
  if (lVar1 == 1) {
    *(uint *)param_2 = (uint)local_9;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 == 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::OpenFile(std::string const&) */

void __thiscall Sexy::EncodingParser::OpenFile(EncodingParser *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ResStreamsManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(ResStreamsManager **)(gSexyAppBase + 0x908);
  if (this_00 == (ResStreamsManager *)0x0) {
LAB_0514cfa4:
    lVar5 = *(long *)(this + 8);
  }
  else {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 == '\0') ||
       (uVar2 = ResStreamsManager::GetGroupForFile
                          (*(ResStreamsManager **)(gSexyAppBase + 0x908),param_1,true,true),
       uVar2 == 0xffffffff)) goto LAB_0514cfa4;
    lVar5 = ResStreamsManager::GetPakFileFromResidentBuffer
                      (*(ResStreamsManager **)(gSexyAppBase + 0x908),uVar2,param_1);
    *(long *)(this + 8) = lVar5;
  }
  if (lVar5 == 0) {
    FUN_0547429c(param_1);
    lVar5 = FUN_0514ce38();
    *(long *)(this + 8) = lVar5;
    uVar6 = 0;
    if (lVar5 == 0) goto LAB_0514cf78;
  }
  if (this[0x38] == (EncodingParser)0x0) {
    FUN_0514cd98(lVar5,2);
    iVar3 = FUN_0514c280(*(undefined8 *)(this + 8));
    FUN_0514cd98(*(undefined8 *)(this + 8),0);
    *(code **)(this + 0x28) = GetAsciiChar;
    *(undefined8 *)(this + 0x30) = 0;
    if (1 < iVar3) {
      iVar4 = FUN_0514c2dc(*(undefined8 *)(this + 8));
      uVar6 = FUN_0514c2dc(*(undefined8 *)(this + 8));
      if ((((int)uVar6 == 0xfe) && (iVar4 == 0xff)) || (((int)uVar6 == 0xff && (iVar4 == 0xfe)))) {
        *(code **)(this + 0x28) = GetUTF16Char;
        *(undefined8 *)(this + 0x30) = 0;
      }
      FUN_0514c35c(uVar6,*(undefined8 *)(this + 8));
      FUN_0514c35c(iVar4,*(undefined8 *)(this + 8));
      if (*(code **)(this + 0x28) != GetAsciiChar) goto LAB_0514cf6c;
    }
    if ((2 < iVar3) && (*(long *)(this + 0x30) == 0)) {
      iVar3 = FUN_0514c2dc(*(undefined8 *)(this + 8));
      iVar4 = FUN_0514c2dc(*(undefined8 *)(this + 8));
      uVar6 = FUN_0514c2dc(*(undefined8 *)(this + 8));
      if ((iVar4 == 0xbb && iVar3 == 0xef) && ((int)uVar6 == 0xbf)) {
        *(code **)(this + 0x28) = GetUTF8Char;
        *(undefined8 *)(this + 0x30) = 0;
      }
      FUN_0514c35c(uVar6,*(undefined8 *)(this + 8));
      FUN_0514c35c(iVar4,*(undefined8 *)(this + 8));
      FUN_0514c35c(iVar3,*(undefined8 *)(this + 8));
    }
  }
LAB_0514cf6c:
  uVar6 = 1;
  this[0x39] = (EncodingParser)0x1;
LAB_0514cf78:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::SetStringSource(std::string const&) */

void __thiscall Sexy::EncodingParser::SetStringSource(EncodingParser *this,string *param_1)

{
  code *pcVar1;
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x30);
  StringToWString((Sexy *)param_1,___stack_chk_guard);
  (*pcVar1)(this,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EncodingParser::~EncodingParser() */

void __thiscall Sexy::EncodingParser::~EncodingParser(EncodingParser *this)

{
  *(undefined ***)this = &PTR__EncodingParser_06a2e3e0;
  if (*(long *)(this + 8) != 0) {
    FUN_0514c4e0();
  }
  std::vector<wchar_t,std::allocator<wchar_t>>::~vector
            ((vector<wchar_t,std::allocator<wchar_t>> *)(this + 0x10));
  return;
}


/* Sexy::EncodingParser::~EncodingParser() */

void __thiscall Sexy::EncodingParser::~EncodingParser(EncodingParser *this)

{
  ~EncodingParser(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::GetChar(wchar_t*) */

void __thiscall Sexy::EncodingParser::GetChar(EncodingParser *this,wchar_t *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  char local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar_t *)0x0) {
    uVar4 = 3;
  }
  else {
    lVar3 = FUN_0514c588(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if (lVar3 == 0) {
      if ((*(long *)(this + 8) != 0) && (iVar2 = FUN_0514c3cc(), iVar2 == 0)) {
        local_9 = '\0';
        lVar3 = (long)*(ulong *)(this + 0x30) >> 1;
        if ((*(ulong *)(this + 0x30) & 1) == 0) {
          pcVar6 = *(code **)(this + 0x28);
        }
        else {
          pcVar6 = *(code **)(*(long *)(this + lVar3) + *(long *)(this + 0x28));
        }
        cVar1 = (*pcVar6)(this + lVar3,param_1,&local_9);
        uVar4 = 0;
        if ((cVar1 != '\0') || (uVar4 = 1, local_9 != '\0')) goto LAB_0514d2f8;
      }
      uVar4 = 2;
    }
    else {
      pwVar5 = (wchar_t *)
               std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                         ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x10));
      *param_1 = *pwVar5;
      FUN_0514c5f8(this + 0x18);
      uVar4 = 0;
    }
  }
LAB_0514d2f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Sexy::EncodingParser::EncodingParser() */

void __thiscall Sexy::EncodingParser::EncodingParser(EncodingParser *this)

{
  *(undefined ***)this = &PTR__EncodingParser_06a2e3e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined8 *)(this + 8) = 0;
  *(code **)(this + 0x28) = GetUTF8Char;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (EncodingParser)0x0;
  this[0x39] = (EncodingParser)0x0;
  this[0x3a] = (EncodingParser)0x0;
  return;
}


/* Sexy::EncodingParser::SetStringSource(std::wstring const&) */

void __thiscall Sexy::EncodingParser::SetStringSource(EncodingParser *this,wstring *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_054765c4(param_1);
  std::vector<wchar_t,std::allocator<wchar_t>>::resize
            ((vector<wchar_t,std::allocator<wchar_t>> *)(this + 0x10),(long)iVar1);
  if (0 < iVar1) {
    uVar6 = *(undefined8 *)(this + 0x10);
    lVar5 = 0;
    do {
      puVar2 = (undefined4 *)FUN_0514c5f0(uVar6,lVar5);
      lVar4 = ((long)iVar1 - 1U) - lVar5;
      lVar5 = lVar5 + 1;
      puVar3 = (undefined4 *)FUN_054765fc(param_1,lVar4);
      *puVar2 = *puVar3;
    } while ((int)lVar5 < iVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EncodingParser::PutString(std::wstring const&) */

void __thiscall Sexy::EncodingParser::PutString(EncodingParser *this,wstring *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0514c588(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  lVar2 = FUN_054765d0(param_1);
  std::vector<wchar_t,std::allocator<wchar_t>>::resize
            ((vector<wchar_t,std::allocator<wchar_t>> *)(this + 0x10),lVar2 + lVar1);
  FUN_0547659c(auStack_20,param_1);
  FUN_054765b4(auStack_18,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  uVar3 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
          operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>> *)
                    &local_10,lVar1);
  std::
  copy<std::reverse_iterator<__gnu_cxx::__normal_iterator<wchar_t_const*,std::wstring>>,__gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>>
            (auStack_20,auStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::EncodingParser::PutChar(wchar_t const&) */

undefined8 __thiscall Sexy::EncodingParser::PutChar(EncodingParser *this,wchar_t *param_1)

{
  std::vector<wchar_t,std::allocator<wchar_t>>::push_back
            ((vector<wchar_t,std::allocator<wchar_t>> *)(this + 0x10),param_1);
  return 1;
}

