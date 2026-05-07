// Class: Sexy::DescParser


/* Sexy::DescParser::Error(std::wstring const&) */

undefined8 __thiscall Sexy::DescParser::Error(DescParser *this,wstring *param_1)

{
  long lVar1;
  
  lVar1 = FUN_054765d0(this + 0x40);
  if (lVar1 == 0) {
    thunk_FUN_05477b9c(this + 0x40,param_1);
  }
  return 0;
}


/* Sexy::DescParser::IsImmediate(std::wstring const&) */

bool __thiscall Sexy::DescParser::IsImmediate(DescParser *this,wstring *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_054765fc(param_1,0);
  uVar1 = *puVar2;
  if (uVar1 < 0x30) {
    if (uVar1 == 0x2d) {
      return true;
    }
  }
  else if (uVar1 < 0x3a) {
    return true;
  }
  return (uVar1 - 0x27 & 0xfffffffb) == 0 || uVar1 == 0x22;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::Unquote(std::wstring const&) */

void Sexy::DescParser::Unquote(wstring *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar4 = (int *)FUN_054765fc();
  iVar1 = *piVar4;
  if ((iVar1 == 0x27) || (iVar1 == 0x22)) {
    uVar7 = 1;
    bVar2 = false;
    bVar3 = true;
    FUN_05476574(auStack_10);
    lVar5 = FUN_054765d0();
    uVar8 = lVar5 - 1;
    if (1 < uVar8) {
      do {
        if (bVar2) {
          piVar4 = (int *)FUN_054765fc();
          iVar6 = *piVar4;
          if (iVar6 == 0x6e) {
            iVar6 = 10;
          }
          else if (iVar6 == 0x74) {
            iVar6 = 9;
          }
          bVar2 = false;
          FUN_05477a88(auStack_10,iVar6);
          lVar5 = FUN_054765d0();
          uVar8 = lVar5 - 1;
        }
        else {
          piVar4 = (int *)FUN_054765fc();
          if (iVar1 == *piVar4) {
            if (bVar3) {
              FUN_05477a88(auStack_10,iVar1);
              lVar5 = FUN_054765d0();
              uVar8 = lVar5 - 1;
            }
            else {
              bVar3 = true;
            }
          }
          else if (*piVar4 == 0x5c) {
            bVar2 = true;
            bVar3 = false;
          }
          else {
            FUN_05477a88(auStack_10);
            lVar5 = FUN_054765d0();
            uVar8 = lVar5 - 1;
            bVar3 = bVar2;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    FUN_05476584();
    FUN_05476c50(auStack_10);
  }
  else {
    FUN_05477b24();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToString(Sexy::DataElement*, std::wstring*) */

void __thiscall
Sexy::DescParser::DataToString(DescParser *this,DataElement *param_1,wstring *param_2)

{
  long lVar1;
  long extraout_x1;
  undefined1 uVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(param_2,&DAT_056f11a8);
  if (param_1[8] == (DataElement)0x0) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_05477b24(auStack_18,param_1 + 0x10);
      lVar1 = (**(code **)(*(long *)this + 0x58))(this,auStack_18);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) {
        Unquote((wstring *)this);
        uVar2 = 1;
        FUN_054766c8(param_2,auStack_10);
        FUN_05476c50(auStack_10);
        lVar1 = extraout_x1;
      }
      FUN_05476c50(auStack_18,lVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToKeyAndValue(Sexy::DataElement*, std::wstring*, Sexy::DataElement**) */

void __thiscall
Sexy::DescParser::DataToKeyAndValue
          (DescParser *this,DataElement *param_1,wstring *param_2,DataElement **param_3)

{
  long lVar1;
  long extraout_x1;
  undefined1 uVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(param_2,&DAT_056f11a8);
  if (param_1[8] == (DataElement)0x0) {
    uVar2 = 0;
    if (*(DataElement **)(param_1 + 0x18) != (DataElement *)0x0) {
      *param_3 = *(DataElement **)(param_1 + 0x18);
      FUN_05477b24(auStack_18,param_1 + 0x10);
      lVar1 = (**(code **)(*(long *)this + 0x58))(this,auStack_18);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) {
        Unquote((wstring *)this);
        uVar2 = 1;
        FUN_054766c8(param_2,auStack_10);
        FUN_05476c50(auStack_10);
        lVar1 = extraout_x1;
      }
      FUN_05476c50(auStack_18,lVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToInt(Sexy::DataElement*, int*) */

void __thiscall Sexy::DescParser::DataToInt(DescParser *this,DataElement *param_1,int *param_2)

{
  char cVar1;
  int local_14;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  FUN_05476574(awStack_10);
  cVar1 = DataToString(this,param_1,awStack_10);
  if (cVar1 != '\0') {
    cVar1 = StringToInt(awStack_10,&local_14);
    if (cVar1 != '\0') {
      *param_2 = local_14;
      goto LAB_05443178;
    }
  }
  cVar1 = '\0';
LAB_05443178:
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToDouble(Sexy::DataElement*, double*) */

void __thiscall
Sexy::DescParser::DataToDouble(DescParser *this,DataElement *param_1,double *param_2)

{
  char cVar1;
  undefined1 uVar2;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0.0;
  FUN_05476574(awStack_10);
  cVar1 = DataToString(this,param_1,awStack_10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = StringToDouble(awStack_10,param_2);
  }
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToBoolean(Sexy::DataElement*, bool*) */

void __thiscall Sexy::DescParser::DataToBoolean(DescParser *this,DataElement *param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = false;
  FUN_05476574(awStack_10);
  cVar1 = DataToString(this,param_1,awStack_10);
  if (cVar1 != '\0') {
    pwVar3 = (wchar_t *)FUN_054766ec(awStack_10);
    iVar2 = wcscasecmp_prime(pwVar3,L"false");
    if (((iVar2 == 0) || (iVar2 = wcscasecmp_prime(pwVar3,L"no"), iVar2 == 0)) ||
       (iVar2 = wcscasecmp_prime(pwVar3,L"0"), iVar2 == 0)) {
      *param_2 = false;
    }
    else {
      iVar2 = wcscasecmp_prime(pwVar3,L"true");
      if (((iVar2 == 0) || (iVar2 = wcscasecmp_prime(pwVar3,L"yes"), iVar2 == 0)) ||
         (iVar2 = wcscasecmp_prime(pwVar3,L"1"), iVar2 == 0)) {
        *param_2 = true;
      }
      else {
        cVar1 = '\0';
      }
    }
  }
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataElementToString(Sexy::DataElement const*, bool) */

void Sexy::DescParser::DataElementToString(DataElement *param_1,bool param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char in_w2;
  undefined8 uVar5;
  ulong uVar6;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  uVar3 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  if (*(char *)(uVar3 + 8) == '\0') {
    if (*(long *)(uVar3 + 0x18) == 0) {
      FUN_05477b24();
    }
    else {
      std::operator+((wstring *)(uVar3 + 0x10),L"=");
      DataElementToString(param_1,SUB81(*(undefined8 *)(uVar3 + 0x18),0));
      std::operator+(awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      FUN_05476c50(awStack_18);
    }
  }
  else {
    if (in_w2 == '\0') {
      FUN_05478178(awStack_18,&DAT_056f11a8,awStack_10);
      nop();
      uVar6 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(uVar3 + 0x10);
        uVar2 = FUN_05442acc(uVar5,*(undefined8 *)(uVar3 + 0x18));
        if (uVar2 <= uVar6) break;
        if (uVar6 != 0) {
          FUN_05477888(awStack_18,&DAT_0570f658);
          uVar5 = *(undefined8 *)(uVar3 + 0x10);
        }
        puVar1 = (undefined8 *)FUN_05442ad8(uVar5,uVar6);
        DataElementToString(param_1,SUB81(*puVar1,0));
        thunk_FUN_05477668(awStack_18,awStack_10);
        FUN_05476c50(awStack_10);
        uVar6 = uVar6 + 1;
      }
      puVar4 = &DAT_056f11a8;
    }
    else {
      FUN_05478178(awStack_18,&DAT_05750398,awStack_10);
      nop();
      uVar6 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(uVar3 + 0x10);
        uVar2 = FUN_05442acc(uVar5,*(undefined8 *)(uVar3 + 0x18));
        if (uVar2 <= uVar6) break;
        if (uVar6 != 0) {
          FUN_05477888(awStack_18,&DAT_05750380);
          uVar5 = *(undefined8 *)(uVar3 + 0x10);
        }
        puVar1 = (undefined8 *)FUN_05442ad8(uVar5,uVar6);
        DataElementToString(param_1,SUB81(*puVar1,0));
        thunk_FUN_05477668(awStack_18,awStack_10);
        FUN_05476c50(awStack_10);
        uVar6 = uVar6 + 1;
      }
      puVar4 = &DAT_0573d6e0;
    }
    FUN_05477888(awStack_18,puVar4);
    FUN_05476584();
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DescParser::DescParser() */

void __thiscall Sexy::DescParser::DescParser(DescParser *this)

{
  EncodingParser::EncodingParser((EncodingParser *)this);
  *(undefined **)this = &DAT_06a38300;
  FUN_05476574(this + 0x40);
  FUN_05476574(this + 0x50);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x58));
  *(undefined4 *)(this + 0x3c) = 1;
  return;
}


/* Sexy::DescParser::~DescParser() */

void __thiscall Sexy::DescParser::~DescParser(DescParser *this)

{
  *(undefined **)this = &DAT_06a38300;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::~map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
          *)(this + 0x58));
  FUN_05476c50(this + 0x50);
  FUN_05476c50(this + 0x40);
  EncodingParser::~EncodingParser((EncodingParser *)this);
  return;
}


/* Sexy::DescParser::~DescParser() */

void __thiscall Sexy::DescParser::~DescParser(DescParser *this)

{
  ~DescParser(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::Dereference(std::wstring const&) */

void __thiscall Sexy::DescParser::Dereference(DescParser *this,wstring *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  wstring *local_8;
  
  local_8 = ___stack_chk_guard;
  StringToUpper((Sexy *)param_1,___stack_chk_guard);
  local_18 = std::
             map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             ::find((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                     *)(this + 0x58),awStack_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x58));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::GetValues(Sexy::ListDataElement*, Sexy::ListDataElement*) */

void __thiscall
Sexy::DescParser::GetValues(DescParser *this,ListDataElement *param_1,ListDataElement *param_2)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  ListDataElement *this_01;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  SingleDataElement *pSVar7;
  wstring *extraout_x1;
  ulong uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  wstring awStack_18 [8];
  ListDataElement *local_10;
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(param_2 + 0x10);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::clear(this_00);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = 0;
  lVar2 = FUN_05442acc(uVar10,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    do {
      plVar3 = (long *)FUN_05442ad8(uVar10,uVar8);
      if (*(char *)(*plVar3 + 8) == '\0') {
        FUN_05477b24(awStack_30,*plVar3 + 0x10);
        lVar2 = FUN_054765d0(awStack_30);
        if (lVar2 != 0) {
          piVar6 = (int *)FUN_05476f5c(awStack_30,0);
          if ((*piVar6 == 0x27) || (piVar6 = (int *)FUN_05476f5c(awStack_30,0), *piVar6 == 0x22)) {
            Unquote((wstring *)this);
            pSVar7 = ::operator_new(0x20);
            SingleDataElement::SingleDataElement(pSVar7,(wstring *)&local_10);
            FUN_05476c50((wstring *)&local_10);
            local_10 = (ListDataElement *)pSVar7;
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                      (this_00,(DataElement **)&local_10);
          }
          else {
            cVar1 = IsImmediate(this,awStack_30);
            if (cVar1 == '\0') {
              StringToUpper((Sexy *)awStack_30,extraout_x1);
              local_20 = std::
                         map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                         ::find((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                                 *)(this + 0x58),awStack_28);
              local_10 = (ListDataElement *)
                         std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)(this + 0x58));
              cVar1 = std::__exception_ptr::operator==
                                ((exception_ptr *)&local_20,(exception_ptr *)&local_10);
              if (cVar1 != '\0') {
                pcVar11 = *(code **)(*(long *)this + 0x50);
                FUN_036944b8(awStack_18,L"Unable to Dereference \"",awStack_30);
                std::operator+(awStack_18,L"\"");
                (*pcVar11)(this,(wstring *)&local_10);
                FUN_05476c50((wstring *)&local_10);
                FUN_05476c50(awStack_18);
                FUN_05476c50(awStack_28);
                FUN_05476c50(awStack_30);
                uVar9 = 0;
                goto LAB_05443c50;
              }
              lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
              local_10 = (ListDataElement *)
                         (**(code **)(**(long **)(lVar2 + 8) + 0x10))(*(long **)(lVar2 + 8));
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                        (this_00,(DataElement **)&local_10);
              FUN_05476c50(awStack_28);
            }
            else {
              pSVar7 = ::operator_new(0x20);
              SingleDataElement::SingleDataElement(pSVar7,awStack_30);
              local_10 = (ListDataElement *)pSVar7;
              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                        (this_00,(DataElement **)&local_10);
            }
          }
        }
        FUN_05476c50(awStack_30);
      }
      else {
        this_01 = ::operator_new(0x28);
        ListDataElement::ListDataElement(this_01);
        local_10 = this_01;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                  (this_00,(DataElement **)&local_10);
        puVar4 = (undefined8 *)FUN_05442ad8(*(undefined8 *)(param_1 + 0x10),uVar8);
        cVar1 = GetValues(this,(ListDataElement *)*puVar4,this_01);
        uVar9 = 0;
        if (cVar1 == '\0') goto LAB_05443c50;
      }
      uVar8 = uVar8 + 1;
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = FUN_05442acc(uVar10,*(undefined8 *)(param_1 + 0x18));
    } while (uVar8 < uVar5);
  }
  uVar9 = 1;
LAB_05443c50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToStringVector(Sexy::DataElement*, std::vector<std::wstring,
   std::allocator<std::wstring > >*) */

void __thiscall
Sexy::DescParser::DataToStringVector(DescParser *this,DataElement *param_1,vector *param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  ListDataElement *pLVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  undefined1 auStack_38 [8];
  ListDataElement aLStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)param_2);
  ListDataElement::ListDataElement(aLStack_30);
  if (param_1[8] == (DataElement)0x0) {
    FUN_05477b24(auStack_48,param_1 + 0x10);
    pLVar4 = (ListDataElement *)(**(code **)(*(long *)this + 0x58))(this,auStack_48);
    if (pLVar4 == (ListDataElement *)0x0) {
      pcVar8 = *(code **)(*(long *)this + 0x50);
      FUN_036944b8(awStack_40,L"Unable to Dereference \"",auStack_48);
      std::operator+(awStack_40,L"\"");
      (*pcVar8)(this,auStack_38);
      FUN_05476c50(auStack_38);
      FUN_05476c50(awStack_40);
    }
    else if (pLVar4[8] != (ListDataElement)0x0) {
      FUN_05476c50(auStack_48);
      goto LAB_05443ea0;
    }
    FUN_05476c50(auStack_48);
    uVar5 = 0;
  }
  else {
    cVar1 = GetValues(this,(ListDataElement *)param_1,aLStack_30);
    uVar5 = 0;
    pLVar4 = aLStack_30;
    if (cVar1 == '\0') goto LAB_05443eec;
LAB_05443ea0:
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(pLVar4 + 0x10);
      uVar3 = FUN_05442acc(uVar7,*(undefined8 *)(pLVar4 + 0x18));
      if (uVar3 <= uVar6) break;
      plVar2 = (long *)FUN_05442ad8(uVar7,uVar6);
      if (*(char *)(*plVar2 + 8) != '\0') {
        uVar5 = 0;
        std::vector<std::wstring,std::allocator<std::wstring>>::clear
                  ((vector<std::wstring,std::allocator<std::wstring>> *)param_2);
        goto LAB_05443eec;
      }
      uVar6 = uVar6 + 1;
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)param_2,
                 (wstring *)(*plVar2 + 0x10));
    }
    uVar5 = 1;
  }
LAB_05443eec:
  ListDataElement::~ListDataElement(aLStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToIntVector(Sexy::DataElement*, std::vector<int, std::allocator<int> >*) */

void __thiscall
Sexy::DescParser::DataToIntVector(DescParser *this,DataElement *param_1,vector *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  wstring *pwVar4;
  ulong uVar5;
  ulong uVar6;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar2 = DataToStringVector(this,param_1,(vector *)&local_20);
  if (cVar2 != '\0') {
    while( true ) {
      uVar1 = local_20;
      uVar5 = FUN_05442ae8(local_20,local_18);
      if (uVar5 <= uVar6) break;
      pwVar4 = (wstring *)FUN_05442af4(uVar1,uVar6);
      cVar3 = StringToInt(pwVar4,&local_28);
      if (cVar3 == '\0') {
        cVar2 = '\0';
        break;
      }
      uVar6 = uVar6 + 1;
      local_24 = local_28;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_2,&local_24);
    }
  }
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::DataToDoubleVector(Sexy::DataElement*, std::vector<double,
   std::allocator<double> >*) */

void __thiscall
Sexy::DescParser::DataToDoubleVector(DescParser *this,DataElement *param_1,vector *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  wstring *pwVar4;
  ulong uVar5;
  ulong uVar6;
  double dStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<double,std::allocator<double>>::clear
            ((vector<double,std::allocator<double>> *)param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar2 = DataToStringVector(this,param_1,(vector *)&local_20);
  if (cVar2 != '\0') {
    for (; uVar1 = local_20, uVar5 = FUN_05442ae8(local_20,local_18), uVar6 < uVar5;
        uVar6 = uVar6 + 1) {
      pwVar4 = (wstring *)FUN_05442af4(uVar1,uVar6);
      cVar3 = StringToDouble(pwVar4,&dStack_28);
      if (cVar3 == '\0') {
        cVar2 = '\0';
        break;
      }
      std::vector<double,std::allocator<double>>::push_back
                ((vector<double,std::allocator<double>> *)param_2,&dStack_28);
    }
  }
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* Sexy::DescParser::DataToList(Sexy::DataElement*, Sexy::ListDataElement*) */

ulong __thiscall
Sexy::DescParser::DataToList(DescParser *this,DataElement *param_1,ListDataElement *param_2)

{
  ListDataElement LVar1;
  ListDataElement *pLVar2;
  ulong uVar3;
  
  if (param_1[8] != (DataElement)0x0) {
    uVar3 = GetValues(this,(ListDataElement *)param_1,param_2);
    return uVar3;
  }
  pLVar2 = (ListDataElement *)(**(code **)(*(long *)this + 0x58))(this,param_1 + 0x10);
  LVar1 = (ListDataElement)0x0;
  if (pLVar2 != (ListDataElement *)0x0) {
    LVar1 = pLVar2[8];
    if ((byte)LVar1 != 0) {
      ListDataElement::operator=(param_2,pLVar2);
      return (ulong)(uint)(byte)LVar1;
    }
  }
  return (ulong)(byte)LVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::ParseToList(std::wstring const&, Sexy::ListDataElement*, bool, int*) */

void __thiscall
Sexy::DescParser::ParseToList
          (DescParser *this,wstring *param_1,ListDataElement *param_2,bool param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  SingleDataElement *this_00;
  ListDataElement *this_01;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  SingleDataElement *pSVar16;
  undefined1 auStack_18 [4];
  int local_14;
  SingleDataElement *local_10;
  long local_8;
  
  local_14 = 0;
  local_8 = ___stack_chk_guard;
  if (param_4 == (int *)0x0) {
    iVar13 = 0;
    param_4 = &local_14;
  }
  else {
    iVar13 = *param_4;
  }
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  this_00 = (SingleDataElement *)0x0;
  pSVar16 = (SingleDataElement *)0x0;
  bVar5 = false;
LAB_054442c4:
  iVar9 = FUN_054765d0(param_1);
  iVar14 = iVar13;
  if (iVar13 < iVar9) {
    while( true ) {
      iVar13 = iVar14 + 1;
      *param_4 = iVar13;
      piVar10 = (int *)FUN_054765fc(param_1,(long)iVar14);
      iVar14 = *piVar10;
      if ((iVar14 == 9) || (iVar14 == 0x20)) {
        bVar1 = true;
      }
      else {
        bVar1 = iVar14 == 0x2c || iVar14 == 10;
      }
      if (bVar2) goto LAB_054443e4;
      if (bVar4 < (iVar14 == 0x27)) {
        bVar3 = (bool)(bVar3 ^ 1);
        bVar4 = false;
      }
      else if (bVar3 < (iVar14 == 0x22)) {
        bVar4 = (bool)(bVar4 ^ 1);
        bVar3 = false;
      }
      if (iVar14 == 0x5c) {
        bVar2 = true;
        goto LAB_054442c4;
      }
      bVar6 = bVar3;
      if ((bVar4 ^ 1U) <= bVar3) break;
      if (iVar14 == 0x29) {
        if (param_3) goto LAB_0544439c;
        pwVar12 = L"Unexpected List End";
        lVar11 = *(long *)this;
        goto LAB_054445b4;
      }
      if (iVar14 == 0x28) {
        if (bVar5 < (this_00 != (SingleDataElement *)0x0)) {
          pwVar12 = L"Unexpected List Start";
          lVar11 = *(long *)this;
          goto LAB_054445b4;
        }
        this_01 = ::operator_new(0x28);
        ListDataElement::ListDataElement(this_01);
        cVar8 = ParseToList(this,param_1,this_01,true,param_4);
        uVar7 = 0;
        if (cVar8 == '\0') goto LAB_054443a0;
        if (pSVar16 == (SingleDataElement *)0x0) {
          bVar3 = false;
          local_10 = (SingleDataElement *)this_01;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                     (param_2 + 0x10),(DataElement **)&local_10);
          iVar13 = *param_4;
          this_00 = pSVar16;
          bVar5 = bVar3;
        }
        else {
          iVar13 = *param_4;
          *(ListDataElement **)(pSVar16 + 0x18) = this_01;
          pSVar16 = (SingleDataElement *)0x0;
          bVar3 = false;
          this_00 = pSVar16;
          bVar5 = bVar3;
        }
        goto LAB_054442c4;
      }
      if (iVar14 == 0x3d) {
        bVar3 = false;
        pSVar16 = this_00;
        bVar5 = true;
        goto LAB_054442c4;
      }
      bVar3 = bVar5;
      bVar6 = bVar1;
      if (!bVar1) break;
      if ((this_00 != (SingleDataElement *)0x0) &&
         (lVar11 = FUN_054765d0(this_00 + 0x10), lVar11 != 0)) {
        bVar5 = true;
      }
      bVar3 = false;
      iVar9 = FUN_054765d0(param_1);
      iVar14 = iVar13;
      if (iVar9 <= iVar13) goto LAB_0544438c;
    }
    if (bVar5) {
      bVar5 = false;
      bVar3 = bVar6;
LAB_05444418:
      this_00 = ::operator_new(0x20);
      SingleDataElement::SingleDataElement(this_00);
      if (pSVar16 == (SingleDataElement *)0x0) {
        local_10 = this_00;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(param_2 + 0x10)
                   ,(DataElement **)&local_10);
      }
      else {
        *(SingleDataElement **)(pSVar16 + 0x18) = this_00;
        pSVar16 = (SingleDataElement *)0x0;
      }
    }
    else {
LAB_054443e4:
      if (this_00 == (SingleDataElement *)0x0) goto LAB_05444418;
    }
    if (bVar2) {
      FUN_05477888(this_00 + 0x10,&DAT_057504a8);
    }
    bVar2 = false;
    FUN_05477a88(this_00 + 0x10,iVar14);
    iVar13 = *param_4;
    goto LAB_054442c4;
  }
LAB_0544438c:
  if (bVar3) {
    pwVar12 = L"Unterminated Single Quotes";
    lVar11 = *(long *)this;
LAB_054445b4:
    pcVar15 = *(code **)(lVar11 + 0x50);
    FUN_05478178(&local_10,pwVar12,auStack_18);
  }
  else {
    if (!bVar4) {
      if (param_3) {
        pcVar15 = *(code **)(*(long *)this + 0x50);
        FUN_05478178(&local_10,L"Unterminated List",auStack_18);
        (*pcVar15)(this,&local_10);
        FUN_05476c50(&local_10);
        nop();
        uVar7 = 0;
      }
      else {
LAB_0544439c:
        uVar7 = 1;
      }
      goto LAB_054443a0;
    }
    pcVar15 = *(code **)(*(long *)this + 0x50);
    FUN_05478178(&local_10,L"Unterminated Double Quotes",auStack_18);
  }
  (*pcVar15)(this,&local_10);
  FUN_05476c50(&local_10);
  nop();
  uVar7 = 0;
LAB_054443a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::ParseDescriptorLine(std::wstring const&) */

void __thiscall Sexy::DescParser::ParseDescriptorLine(DescParser *this,wstring *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  ListDataElement aLStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ListDataElement::ListDataElement(aLStack_30);
  cVar1 = ParseToList(this,param_1,aLStack_30,false,(int *)0x0);
  if (cVar1 != '\0') {
    lVar2 = FUN_05442acc(local_20,local_18);
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_05442ad8(local_20,0);
      if (*(char *)(*plVar3 + 8) == '\0') {
        cVar1 = (**(code **)(*(long *)this + 0x60))(this,aLStack_30);
      }
      else {
        pcVar4 = *(code **)(*(long *)this + 0x50);
        cVar1 = '\0';
        FUN_05478178(auStack_38,L"Missing Command",auStack_40);
        (*pcVar4)(this,auStack_38);
        FUN_05476c50(auStack_38);
        nop();
      }
    }
  }
  ListDataElement::~ListDataElement(aLStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::LoadDescriptor(std::string const&) */

void __thiscall Sexy::DescParser::LoadDescriptor(DescParser *this,string *param_1)

{
  wstring *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  wchar_t *pwVar14;
  int iVar15;
  code *pcVar16;
  int iVar17;
  undefined1 auStack_20 [8];
  int local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x48) = 0;
  pwVar1 = (wstring *)(this + 0x50);
  iVar17 = 0;
  FUN_05476fac(this + 0x40,0,0xffffffffffffffff);
  FUN_054772c4(pwVar1,&DAT_056f11a8);
  cVar10 = EncodingParser::OpenFile((EncodingParser *)this,param_1);
  if (cVar10 == '\0') {
    pcVar16 = *(code **)(*(string **)this + 0x50);
    UTF8StringToWString((Sexy *)param_1,*(string **)this);
    std::operator+(L"Unable to open file: ",(wstring *)local_18);
    cVar10 = (*pcVar16)(this,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50((wstring *)local_18);
  }
  else {
    while( true ) {
      cVar10 = (**(code **)(*(long *)this + 0x28))(this);
      if (cVar10 != '\0') break;
      bVar2 = true;
      bVar7 = 0;
      bVar3 = false;
      bVar5 = false;
      bVar6 = 0;
      bVar4 = false;
LAB_0544482c:
      iVar12 = (**(code **)(*(long *)this + 0x38))(this,local_18);
      if (iVar12 != 2) {
        do {
          iVar15 = local_18[0];
          if (iVar12 == 1) {
            lVar13 = *(long *)this;
            pwVar14 = L"Invalid Character";
LAB_05444a08:
            pcVar16 = *(code **)(lVar13 + 0x50);
            FUN_05478178(auStack_10,pwVar14,auStack_20);
            cVar10 = (*pcVar16)(this,auStack_10);
            FUN_05476c50(auStack_10);
            nop();
            goto LAB_05444a30;
          }
          if (iVar12 != 0) {
            lVar13 = *(long *)this;
            pwVar14 = L"Internal Error";
            goto LAB_05444a08;
          }
          if (local_18[0] == 0xd) goto LAB_0544482c;
          bVar8 = bVar6;
          bVar9 = bVar7;
          if (local_18[0] == 10) {
            iVar17 = iVar17 + 1;
            if (bVar2) goto LAB_05444888;
            bVar2 = true;
            bVar3 = false;
            if (bVar4) {
              bVar4 = false;
              goto LAB_0544498c;
            }
          }
          else {
            if (bVar2) {
              if (local_18[0] == 9 || local_18[0] == 0x20) {
                bVar3 = true;
              }
LAB_05444888:
              if ((local_18[0] - 9U < 2) || (local_18[0] == 0x20)) {
LAB_0544498c:
                bVar2 = true;
                goto LAB_0544482c;
              }
              if (((!bVar3) && ((*(uint *)(this + 0x3c) >> 1 & 1) != 0)) &&
                 (lVar13 = FUN_054765c4(pwVar1), lVar13 != 0)) {
                (**(code **)(*(long *)this + 0x40))(this,local_18);
                break;
              }
              if (iVar15 == 0x23) {
                bVar2 = false;
                bVar4 = true;
                goto LAB_0544482c;
              }
            }
            bVar2 = false;
            if (bVar4) goto LAB_0544482c;
            if (iVar15 == 0x5c) {
              if (bVar5 < (bVar7 | bVar6)) goto code_r0x054449a4;
            }
            else if (iVar15 == 0x27) {
              bVar2 = false;
              bVar8 = bVar6 ^ 1;
              if ((bVar5 ^ 1U) <= bVar7) {
                bVar8 = bVar6;
              }
            }
            else if (iVar15 == 0x22) {
              bVar2 = false;
              bVar9 = bVar7 ^ 1;
              if ((bVar5 ^ 1U) <= bVar6) {
                bVar9 = bVar7;
              }
            }
            else if (((iVar15 == 0x3b) && ((*(uint *)(this + 0x3c) & 1) != 0)) &&
                    (bVar6 < (bVar7 ^ 1))) break;
          }
          bVar7 = bVar9;
          bVar6 = bVar8;
          if (bVar5) {
            FUN_05477a88(pwVar1,0x5c);
            iVar15 = local_18[0];
          }
          lVar13 = FUN_054765c4(pwVar1);
          if (lVar13 == 0) {
            *(int *)(this + 0x48) = iVar17 + 1;
          }
          bVar5 = false;
          FUN_05477a88(pwVar1,iVar15);
          bVar4 = false;
          iVar12 = (**(code **)(*(long *)this + 0x38))(this,local_18);
          if (iVar12 == 2) break;
        } while( true );
      }
      lVar13 = FUN_054765d0(pwVar1);
      if (lVar13 != 0) {
        cVar11 = ParseDescriptorLine(this,pwVar1);
        cVar10 = '\0';
        if (cVar11 == '\0') break;
        FUN_05476fac(pwVar1,0,0xffffffffffffffff);
      }
    }
    FUN_05476fac(pwVar1,0,0xffffffffffffffff);
    *(undefined4 *)(this + 0x48) = 0;
    (**(code **)(*(long *)this + 0x20))(this);
  }
LAB_05444a30:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar10);
  }
  return;
code_r0x054449a4:
  bVar5 = true;
  bVar2 = false;
  goto LAB_0544482c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DescParser::LoadDescriptorBuffered(std::string const&) */

void __thiscall Sexy::DescParser::LoadDescriptorBuffered(DescParser *this,string *param_1)

{
  wstring *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  wchar_t *pwVar18;
  int iVar19;
  code *pcVar20;
  undefined1 auStack_50 [8];
  int local_48 [2];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x48) = 0;
  pwVar1 = (wstring *)(this + 0x50);
  FUN_05476fac(this + 0x40,0,0xffffffffffffffff);
  iVar14 = 0;
  FUN_054772c4(pwVar1,&DAT_056f11a8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  cVar10 = EncodingParser::OpenFile((EncodingParser *)this,param_1);
  if (cVar10 == '\0') {
    pcVar20 = *(code **)(*(string **)this + 0x50);
    UTF8StringToWString((Sexy *)param_1,*(string **)this);
    std::operator+(L"Unable to open file: ",(wstring *)local_48);
    cVar10 = (*pcVar20)(this,auStack_40);
    FUN_05476c50(auStack_40);
    FUN_05476c50((wstring *)local_48);
  }
  else {
    while( true ) {
      cVar11 = (**(code **)(*(long *)this + 0x28))(this);
      if (cVar11 != '\0') break;
      bVar2 = true;
      bVar3 = false;
      bVar6 = 0;
      bVar5 = false;
      bVar8 = 0;
      bVar4 = false;
LAB_05444c24:
      iVar13 = (**(code **)(*(long *)this + 0x38))(this,local_48);
      if (iVar13 != 2) {
        do {
          iVar19 = local_48[0];
          if (iVar13 == 1) {
            lVar15 = *(long *)this;
            pwVar18 = L"Invalid Character";
LAB_05444e0c:
            pcVar20 = *(code **)(lVar15 + 0x50);
            FUN_05478178(auStack_40,pwVar18,auStack_50);
            cVar10 = (*pcVar20)(this,auStack_40);
            FUN_05476c50(auStack_40);
            nop();
            goto LAB_05444e34;
          }
          if (iVar13 != 0) {
            lVar15 = *(long *)this;
            pwVar18 = L"Internal Error";
            goto LAB_05444e0c;
          }
          if (local_48[0] == 0xd) goto LAB_05444c24;
          if (local_48[0] == 10) {
            iVar14 = iVar14 + 1;
            if (bVar2) goto LAB_05444c80;
            if (bVar4) goto LAB_05444d98;
            bVar2 = true;
            bVar3 = false;
          }
          else {
            if (bVar2) {
              if (local_48[0] == 9 || local_48[0] == 0x20) {
                bVar3 = true;
              }
LAB_05444c80:
              if ((local_48[0] - 9U < 2) || (local_48[0] == 0x20)) goto LAB_05444da0;
              if (((!bVar3) && ((*(uint *)(this + 0x3c) >> 1 & 1) != 0)) &&
                 (lVar15 = FUN_054765c4(pwVar1), lVar15 != 0)) {
                (**(code **)(*(long *)this + 0x40))(this,local_48);
                break;
              }
              if (iVar19 == 0x23) {
                bVar2 = false;
                bVar4 = true;
                goto LAB_05444c24;
              }
            }
            bVar2 = false;
            if (bVar4) goto LAB_05444c24;
            bVar7 = bVar6;
            bVar9 = bVar8;
            if (iVar19 == 0x5c) {
              if (bVar5 < (bVar8 | bVar6)) {
                bVar5 = true;
                bVar2 = false;
                goto LAB_05444c24;
              }
            }
            else if (iVar19 == 0x27) {
              bVar7 = bVar6 ^ 1;
              if ((bVar5 ^ 1U) <= bVar8) {
                bVar7 = bVar6;
              }
            }
            else if (iVar19 == 0x22) {
              bVar9 = bVar8 ^ 1;
              if ((bVar5 ^ 1U) <= bVar6) {
                bVar9 = bVar8;
              }
            }
            else if (((iVar19 == 0x3b) && ((*(uint *)(this + 0x3c) & 1) != 0)) &&
                    (bVar6 < (bVar8 ^ 1))) break;
            bVar2 = false;
            bVar6 = bVar7;
            bVar8 = bVar9;
          }
          if (bVar5) {
            FUN_05477a88(pwVar1,0x5c);
            iVar19 = local_48[0];
          }
          lVar15 = FUN_054765c4(pwVar1);
          if (lVar15 == 0) {
            *(int *)(this + 0x48) = iVar14 + 1;
          }
          bVar5 = false;
          FUN_05477a88(pwVar1,iVar19);
          bVar4 = false;
          iVar13 = (**(code **)(*(long *)this + 0x38))(this,local_48);
          if (iVar13 == 2) break;
        } while( true );
      }
      lVar15 = FUN_054765d0(pwVar1);
      if (lVar15 != 0) {
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                  ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38,pwVar1);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_20,(int *)(this + 0x48));
        FUN_05476fac(pwVar1,0,0xffffffffffffffff);
      }
    }
    FUN_05476fac(pwVar1,0,0xffffffffffffffff);
    *(undefined4 *)(this + 0x48) = 0;
    (**(code **)(*(long *)this + 0x20))(this);
    uVar17 = local_38;
    iVar14 = FUN_05442ae8(local_38,local_30);
    cVar10 = cVar11;
    if (0 < iVar14) {
      lVar15 = 0;
      do {
        puVar16 = (undefined4 *)FUN_05442afc(local_20[0],lVar15);
        *(undefined4 *)(this + 0x48) = *puVar16;
        uVar17 = FUN_05442af4(uVar17,lVar15);
        thunk_FUN_05477b9c(pwVar1,uVar17);
        cVar12 = ParseDescriptorLine(this,pwVar1);
        cVar10 = '\0';
        if (cVar12 == '\0') break;
        lVar15 = lVar15 + 1;
        uVar17 = local_38;
        cVar10 = cVar11;
      } while ((int)lVar15 < iVar14);
    }
    FUN_05476fac(pwVar1,0,0xffffffffffffffff);
    *(undefined4 *)(this + 0x48) = 0;
  }
LAB_05444e34:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar10);
LAB_05444d98:
  bVar4 = false;
  bVar3 = false;
LAB_05444da0:
  bVar2 = true;
  goto LAB_05444c24;
}

