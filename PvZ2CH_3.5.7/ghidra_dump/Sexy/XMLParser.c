// Class: Sexy::XMLParser


/* Sexy::XMLParser::GetCurrentLineNum() */

undefined4 __thiscall Sexy::XMLParser::GetCurrentLineNum(XMLParser *this)

{
  return *(undefined4 *)(this + 0x50);
}


/* Sexy::XMLParser::~XMLParser() */

void __thiscall Sexy::XMLParser::~XMLParser(XMLParser *this)

{
  *(undefined ***)this = &PTR__XMLParser_06a326b0;
  FUN_05476c50(this + 0x58);
  FUN_05476c50(this + 0x48);
  std::string::~string((string *)(this + 0x40));
  EncodingParser::~EncodingParser((EncodingParser *)this);
  return;
}


/* Sexy::XMLParser::~XMLParser() */

void __thiscall Sexy::XMLParser::~XMLParser(XMLParser *this)

{
  ~XMLParser(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::XMLParser::XMLParser() */

void __thiscall Sexy::XMLParser::XMLParser(XMLParser *this)

{
  EncodingParser::EncodingParser((EncodingParser *)this);
  *(undefined ***)this = &PTR__XMLParser_06a326b0;
  Set8BytesTo0(this + 0x40);
  FUN_05476574(this + 0x48);
  FUN_05476574(this + 0x58);
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x55] = (XMLParser)0x0;
  return;
}


/* Sexy::XMLParser::Fail(std::wstring const&) */

void Sexy::XMLParser::Fail(wstring *param_1)

{
  param_1[0x54] = (wstring)0x1;
  thunk_FUN_05477b9c(param_1 + 0x48);
  return;
}


/* Sexy::XMLParser::Init() */

void __thiscall Sexy::XMLParser::Init(XMLParser *this)

{
  FUN_054772c4(this + 0x58,&DAT_056f11a8);
  this[0x54] = (XMLParser)0x0;
  *(undefined4 *)(this + 0x50) = 1;
  FUN_054772c4(this + 0x48,&DAT_056f11a8);
  return;
}


/* Sexy::XMLParser::HasFailed() */

XMLParser __thiscall Sexy::XMLParser::HasFailed(XMLParser *this)

{
  return this[0x54];
}


/* Sexy::XMLParser::GetErrorText() */

undefined8 Sexy::XMLParser::GetErrorText(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* Sexy::XMLParser::GetFileName() */

undefined8 Sexy::XMLParser::GetFileName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::XMLParser::AddAttribute(Sexy::XMLElement*, std::wstring const&, std::wstring const&) */

void __thiscall
Sexy::XMLParser::AddAttribute(XMLParser *this,XMLElement *param_1,wstring *param_2,wstring *param_3)

{
  bool bVar1;
  long lVar2;
  pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool> apStack_38 [8]
  ;
  char local_30;
  pair<std::wstring_const,std::wstring> apStack_28 [16];
  pair local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::pair();
  std::pair<std::wstring_const,std::wstring>::pair(apStack_28,param_2,param_3);
  local_18 = (pair  [16])
             std::
             map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             ::insert<std::pair<std::wstring_const,std::wstring>,void>
                       ((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                         *)(param_1 + 0x28),(pair *)apStack_28);
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::
  operator=(apStack_38,local_18);
  std::pair<std::wstring,std::wstring>::~pair((pair<std::wstring,std::wstring> *)apStack_28);
  if (local_30 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)apStack_38);
    thunk_FUN_05477b9c(lVar2 + 8,param_3);
  }
  else {
    bVar1 = std::operator!=(param_2,L"/");
    if (bVar1) {
      std::
      list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
      ::push_back((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
                   *)(param_1 + 0x88),apStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::XMLParser::AddAttributeEncoded(Sexy::XMLElement*, std::wstring const&, std::wstring const&)
    */

void __thiscall
Sexy::XMLParser::AddAttributeEncoded
          (XMLParser *this,XMLElement *param_1,wstring *param_2,wstring *param_3)

{
  bool bVar1;
  long lVar2;
  pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool> apStack_38 [8]
  ;
  char local_30;
  pair<std::wstring_const,std::wstring> apStack_28 [16];
  pair local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::pair();
  std::pair<std::wstring_const,std::wstring>::pair(apStack_28,param_2,param_3);
  local_18 = (pair  [16])
             std::
             map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             ::insert<std::pair<std::wstring_const,std::wstring>,void>
                       ((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                         *)(param_1 + 0x58),(pair *)apStack_28);
  std::pair<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,bool>::
  operator=(apStack_38,local_18);
  std::pair<std::wstring,std::wstring>::~pair((pair<std::wstring,std::wstring> *)apStack_28);
  if (local_30 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)apStack_38);
    thunk_FUN_05477b9c(lVar2 + 8,param_3);
  }
  else {
    bVar1 = std::operator!=(param_2,L"/");
    if (bVar1) {
      std::
      list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
      ::push_back((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
                   *)(param_1 + 0x98),apStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::XMLParser::NextElement(Sexy::XMLElement*) */

void __thiscall Sexy::XMLParser::NextElement(XMLParser *this,XMLElement *param_1)

{
  XMLParser *pXVar1;
  wstring *this_00;
  wstring *pwVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  Sexy *pSVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  wint_t __wc;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  wstring *extraout_x1_01;
  wstring *extraout_x1_02;
  wstring *extraout_x1_03;
  wstring *extraout_x1_04;
  wstring *extraout_x1_05;
  wstring *extraout_x1_06;
  wstring *extraout_x1_07;
  wstring *extraout_x1_08;
  wstring *extraout_x1_09;
  wchar_t *pwVar16;
  wstring *extraout_x1_10;
  wstring *pwVar17;
  wstring *extraout_x1_11;
  wstring *extraout_x1_12;
  wstring *extraout_x1_13;
  wstring *extraout_x1_14;
  wstring *extraout_x1_15;
  wstring *extraout_x1_16;
  wstring *extraout_x1_17;
  wstring *extraout_x1_18;
  XMLParser XVar18;
  undefined1 auVar19 [16];
  wstring *local_b8;
  wint_t local_54;
  Sexy aSStack_50 [8];
  Sexy aSStack_48 [8];
  Sexy aSStack_40 [8];
  Sexy aSStack_38 [8];
  wstring awStack_30 [8];
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  pXVar1 = this + 0x58;
  this_00 = (wstring *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  pwVar2 = (wstring *)(param_1 + 0x20);
LAB_052c76a4:
  *(undefined4 *)param_1 = 0;
  bVar4 = false;
  thunk_FUN_05477b9c(param_1 + 8,pXVar1);
  bVar3 = false;
  bVar6 = false;
  bVar8 = false;
  bVar5 = false;
  FUN_054772c4(this_00,&DAT_056f11a8);
  FUN_054772c4(param_1 + 0x18,&DAT_056f11a8);
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::clear((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
           *)(param_1 + 0x28));
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::clear((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
           *)(param_1 + 0x58));
  FUN_05476fac(pwVar2,0,0xffffffffffffffff);
  std::
  list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
  ::clear((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
           *)(param_1 + 0x88));
  std::
  list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
  ::clear((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
           *)(param_1 + 0x98));
  FUN_05476574(aSStack_50);
  FUN_05476574(aSStack_48);
  FUN_05476574(aSStack_40);
  FUN_05476574(aSStack_38);
LAB_052c7754:
  iVar9 = (**(code **)(*(long *)this + 0x38))(this,&local_54);
  __wc = local_54;
  do {
    if (iVar9 == 1) {
LAB_052c78ec:
      pwVar16 = L"Illegal Character";
      goto LAB_052c7794;
    }
    if (iVar9 != 0) {
      if (iVar9 == 3) {
        pwVar16 = L"Internal Error";
LAB_052c7794:
        FUN_05478178(&local_10,pwVar16,awStack_18);
        Fail((wstring *)this);
        FUN_05476c50(&local_10);
        nop();
      }
      else if (*(int *)param_1 != 0) {
        pwVar16 = L"Unexpected End of File";
        goto LAB_052c7794;
      }
LAB_052c77b4:
      XVar18 = (XMLParser)0x0;
      goto LAB_052c77b8;
    }
    local_54 = __wc;
    if (__wc == 10) {
      iVar9 = *(int *)param_1;
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
      if (iVar9 != 5) goto LAB_052c7834;
LAB_052c7944:
      FUN_05477a88(pwVar2);
      iVar9 = FUN_054765d0(pwVar2);
      if (((iVar9 < 3) || (local_54 != 0x3e)) ||
         (piVar15 = (int *)FUN_05476f5c(pwVar2,(long)(iVar9 + -2)), *piVar15 != 0x2d))
      goto LAB_052c7754;
      piVar15 = (int *)FUN_05476f5c(pwVar2,(long)(iVar9 + -3));
      if (*piVar15 != 0x2d) goto LAB_052c7754;
      FUN_05477da4(&local_10,pwVar2,0,(long)(iVar9 + -3));
      FUN_054766c8(pwVar2,&local_10);
      FUN_05476c50(&local_10);
LAB_052c79e0:
      lVar11 = FUN_054765d0(aSStack_50);
      if (lVar11 != 0) {
        XMLDecodeString(aSStack_50,awStack_18);
        ToWString(aSStack_28,extraout_x1_05);
        XMLDecodeString(aSStack_48,extraout_x1_06);
        ToWString((Sexy *)awStack_18,extraout_x1_07);
        AddAttribute(this,param_1,awStack_20,(wstring *)&local_10);
        FUN_05476c50((wstring *)&local_10);
        FUN_05476c50(awStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(aSStack_28);
        ToWString(aSStack_50,extraout_x1_08);
        ToWString(aSStack_48,extraout_x1_09);
        AddAttribute(this,param_1,awStack_18,(wstring *)&local_10);
        FUN_05476c50((wstring *)&local_10);
        FUN_05476c50(awStack_18);
      }
      thunk_FUN_05477b9c(param_1 + 0x18,this_00);
      XMLDecodeString((Sexy *)this_00,extraout_x1);
      FUN_054766c8(this_00,(wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      if (*(int *)param_1 == 5) {
        XVar18 = this[0x55];
        if (XVar18 == (XMLParser)0x0) {
          FUN_05476c50(aSStack_38);
          FUN_05476c50(aSStack_40);
          FUN_05476c50(aSStack_48);
          FUN_05476c50(aSStack_50);
          goto LAB_052c76a4;
        }
      }
      else {
        XVar18 = (XMLParser)0x1;
      }
LAB_052c77b8:
      FUN_05476c50(aSStack_38);
      FUN_05476c50(aSStack_40);
      FUN_05476c50(aSStack_48);
      FUN_05476c50(aSStack_50);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(XVar18);
      }
      return;
    }
    iVar9 = *(int *)param_1;
    if (iVar9 == 5) goto LAB_052c7944;
LAB_052c7834:
    if (iVar9 == 4) {
      lVar11 = FUN_054765d0(pwVar2);
      pwVar17 = pwVar2;
      if (lVar11 == 0) {
        iVar9 = iswspace(__wc);
        if (iVar9 == 0) {
          pwVar17 = this_00;
        }
        FUN_05477a88(pwVar17,__wc);
        iVar9 = FUN_054765d0(pwVar17);
      }
      else {
        FUN_05477a88(pwVar2);
        iVar9 = FUN_054765d0(pwVar2);
      }
      if ((1 < iVar9) && (local_54 == 0x3e)) {
        piVar15 = (int *)FUN_05476f5c(pwVar17,(long)(iVar9 + -2));
        if (*piVar15 == 0x3f) {
          FUN_05477da4(&local_10,pwVar17,0,(long)(iVar9 + -2));
          FUN_054766c8(pwVar17,&local_10);
          FUN_05476c50(&local_10);
          goto LAB_052c79e0;
        }
      }
      goto LAB_052c7754;
    }
    if (__wc == 0x22) {
      if (bVar5) {
        bVar6 = true;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      if (iVar9 != 3 && iVar9 != 0) goto LAB_052c7754;
      if (iVar9 == 0) goto LAB_052c78b4;
LAB_052c7b18:
      if (iVar9 == 1) break;
    }
    else {
      if (!bVar5) {
        if (__wc == 0x3c) {
          if (iVar9 == 3) {
            (**(code **)(*(long *)this + 0x40))(this,&local_54);
            goto LAB_052c79e0;
          }
          if (iVar9 != 0) {
            pwVar16 = L"Unexpected \'<\'";
            goto LAB_052c7794;
          }
          *(undefined4 *)param_1 = 1;
        }
        else {
          if (__wc == 0x3e) {
            if (iVar9 != 1) {
              if (iVar9 != 2) {
                pwVar16 = L"Unexpected \'>\'";
                goto LAB_052c7794;
              }
              iVar9 = FUN_05476868(pXVar1,0x2f,0xffffffffffffffff);
              if (iVar9 == -1) {
                lVar11 = FUN_054765d0(pXVar1);
                if (lVar11 == 0) {
                  pwVar16 = L"Unexpected End";
                  goto LAB_052c7794;
                }
                FUN_05477da4(awStack_30,pXVar1,0,0xffffffffffffffff);
                bVar8 = std::operator!=(awStack_30,this_00);
                if (bVar8) goto LAB_052c8144;
                uVar13 = FUN_05476ef0(pXVar1);
              }
              else {
                FUN_05477da4(awStack_30,pXVar1,(long)(iVar9 + 1),0xffffffffffffffff);
                bVar8 = std::operator!=(awStack_30,this_00);
                if (bVar8) {
LAB_052c8144:
                  FUN_036944b8((wstring *)aSStack_28,L"End \'",this_00);
                  std::operator+((wstring *)aSStack_28,L"\' Doesn\'t Match Start \'");
                  std::operator+(awStack_20,awStack_30);
                  std::operator+(awStack_18,L"\'");
                  Fail((wstring *)this);
                  FUN_05476c50(&local_10);
                  FUN_05476c50(awStack_18);
                  FUN_05476c50(awStack_20);
                  FUN_05476c50((wstring *)aSStack_28);
                  FUN_05476c50(awStack_30);
                  goto LAB_052c77b4;
                }
                local_10 = FUN_05476ef0(pXVar1);
                uVar13 = __gnu_cxx::
                         __normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
                         operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                                    *)&local_10,(long)iVar9);
              }
              uVar14 = FUN_05476f24(pXVar1);
              FUN_05477010(pXVar1,uVar13,uVar14);
              FUN_05476c50(awStack_30);
              goto LAB_052c79e0;
            }
            bVar8 = std::operator==((wstring *)aSStack_50,L"/");
            if (bVar8) {
LAB_052c8010:
              local_b8 = awStack_18;
              FUN_036944b8((wstring *)&local_10,&DAT_0574ede8,this_00);
              std::operator+((wstring *)&local_10,L">");
              FUN_05476c50((wstring *)&local_10);
              (**(code **)(*(long *)this + 0x48))(this,local_b8);
              FUN_054772c4(aSStack_50,&DAT_056f11a8);
              FUN_05476c50(local_b8);
            }
            else {
              lVar11 = FUN_054765d0(aSStack_50);
              if (lVar11 != 0) {
                XMLDecodeString(aSStack_50,awStack_18);
                FUN_054766c8(aSStack_40,(wstring *)&local_10);
                FUN_05476c50((wstring *)&local_10);
                thunk_FUN_05477b9c(aSStack_38,aSStack_50);
                XMLDecodeString(aSStack_50,extraout_x1_11);
                ToWString(aSStack_28,extraout_x1_12);
                XMLDecodeString(aSStack_48,extraout_x1_13);
                ToWString((Sexy *)awStack_18,extraout_x1_14);
                AddAttribute(this,param_1,awStack_20,(wstring *)&local_10);
                FUN_05476c50((wstring *)&local_10);
                FUN_05476c50(awStack_18);
                FUN_05476c50(awStack_20);
                FUN_05476c50(aSStack_28);
                ToWString(aSStack_50,extraout_x1_15);
                ToWString(aSStack_48,extraout_x1_16);
                AddAttributeEncoded(this,param_1,awStack_18,(wstring *)&local_10);
                FUN_05476c50((wstring *)&local_10);
                FUN_05476c50(awStack_18);
                FUN_054772c4(aSStack_50,&DAT_056f11a8);
                FUN_054772c4(aSStack_48,&DAT_056f11a8);
              }
              lVar11 = FUN_054765d0(aSStack_40);
              if (lVar11 == 0) {
                iVar9 = FUN_054765d0(this_00);
                if (0 < iVar9) {
                  piVar15 = (int *)FUN_05476f5c(this_00,(long)(iVar9 + -1));
                  if (*piVar15 == 0x2f) {
                    FUN_05477da4((wstring *)&local_10,this_00,0,(long)(iVar9 + -1));
                    FUN_054766c8(this_00,(wstring *)&local_10);
                    FUN_05476c50((wstring *)&local_10);
                    goto LAB_052c8010;
                  }
                }
              }
              else {
                ToWString(aSStack_40,(wstring *)aSStack_28);
                uVar13 = std::
                         map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                         ::operator[]((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                                       *)(param_1 + 0x28),(wstring *)&local_10);
                FUN_05477b24((wstring *)aSStack_28,uVar13);
                FUN_05476c50((wstring *)&local_10);
                iVar9 = FUN_054765d0((wstring *)aSStack_28);
                pwVar17 = extraout_x1_10;
                if (iVar9 < 1) {
LAB_052c8264:
                  bVar8 = false;
                }
                else {
                  auVar19 = FUN_05476f5c((wstring *)aSStack_28,(long)(iVar9 + -1));
                  pwVar17 = auVar19._8_8_;
                  if (*auVar19._0_8_ != 0x2f) goto LAB_052c8264;
                  bVar8 = true;
                  ToWString(aSStack_40,awStack_18);
                  FUN_05477da4(awStack_18,(wstring *)aSStack_28,0,(long)(iVar9 + -1));
                  XMLDecodeString((Sexy *)awStack_18,extraout_x1_17);
                  AddAttribute(this,param_1,awStack_20,(wstring *)&local_10);
                  FUN_05476c50((wstring *)&local_10);
                  FUN_05476c50(awStack_18);
                  FUN_05476c50(awStack_20);
                  pwVar17 = extraout_x1_18;
                }
                ToWString(aSStack_38,pwVar17);
                uVar13 = std::
                         map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                         ::operator[]((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                                       *)(param_1 + 0x58),(wstring *)&local_10);
                thunk_FUN_05477b9c((wstring *)aSStack_28,uVar13);
                FUN_05476c50((wstring *)&local_10);
                iVar9 = FUN_054765d0((wstring *)aSStack_28);
                if (0 < iVar9) {
                  piVar15 = (int *)FUN_05476f5c((wstring *)aSStack_28,(long)(iVar9 + -1));
                  if (*piVar15 == 0x2f) {
                    ToWString(aSStack_38,awStack_18);
                    FUN_05477da4((wstring *)&local_10,(wstring *)aSStack_28,0,(long)(iVar9 + -1));
                    AddAttributeEncoded(this,param_1,awStack_18,(wstring *)&local_10);
                    FUN_05476c50((wstring *)&local_10);
                    FUN_05476c50(awStack_18);
                    FUN_05476c50((wstring *)aSStack_28);
                    goto LAB_052c8010;
                  }
                }
                FUN_05476c50((wstring *)aSStack_28);
                if (bVar8) goto LAB_052c8010;
              }
            }
            lVar11 = FUN_054765d0(pXVar1);
            if (lVar11 != 0) {
              FUN_05477888(pXVar1,&DAT_0574b800);
            }
            thunk_FUN_05477668(pXVar1,this_00);
            goto LAB_052c79e0;
          }
          if (((__wc == 0x2f) && (iVar9 == 1)) && (bVar7 = std::operator==(this_00,L""), bVar7)) {
            *(undefined4 *)param_1 = 2;
          }
          else {
            __wc = local_54;
            if (local_54 == 0x3f) {
              iVar9 = *(int *)param_1;
              if (iVar9 == 1) {
                bVar7 = std::operator==(this_00,L"");
                if (!bVar7) goto LAB_052c7890;
                *(undefined4 *)param_1 = 4;
                goto LAB_052c7754;
              }
              iVar10 = iswspace(0x3f);
              if (iVar10 == 0) goto LAB_052c78b0;
            }
            else {
LAB_052c7890:
              __wc = local_54;
              iVar9 = iswspace(local_54);
              if (iVar9 == 0) {
                if (__wc < 0x21) goto LAB_052c78ec;
                iVar9 = *(int *)param_1;
                goto LAB_052c78b0;
              }
            }
            bVar7 = std::operator!=(this_00,L"");
            if (bVar7) {
              bVar8 = true;
            }
            if ((*(int *)param_1 == 1) && (bVar7 = std::operator==(this_00,L"!--"), bVar7)) {
              *(undefined4 *)param_1 = 5;
            }
          }
        }
        goto LAB_052c7754;
      }
LAB_052c78b0:
      if (iVar9 != 0) goto LAB_052c7b18;
LAB_052c78b4:
      *(undefined4 *)param_1 = 3;
    }
    if (bVar8) {
      FUN_05477888(this_00,&DAT_0570f658);
      __wc = local_54;
    }
    bVar8 = false;
    FUN_05477a88(this_00,__wc);
    iVar9 = (**(code **)(*(long *)this + 0x38))(this,&local_54);
    __wc = local_54;
  } while( true );
  if (bVar8) {
    if (bVar3) {
      if (bVar4) {
        lVar11 = FUN_054765d0(aSStack_48);
        if ((lVar11 == 0) && (!bVar6)) goto LAB_052c7cbc;
      }
      else if (__wc == 0x3d) goto LAB_052c7d0c;
      XMLDecodeString(aSStack_50,awStack_18);
      ToWString(aSStack_28,extraout_x1_00);
      XMLDecodeString(aSStack_48,extraout_x1_01);
      ToWString((Sexy *)awStack_18,extraout_x1_02);
      AddAttribute(this,param_1,awStack_20,(wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(aSStack_28);
      ToWString(aSStack_50,extraout_x1_03);
      ToWString(aSStack_48,extraout_x1_04);
      AddAttributeEncoded(this,param_1,awStack_18,(wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      FUN_05476c50(awStack_18);
      FUN_054772c4(aSStack_50,&DAT_056f11a8);
      FUN_054772c4(aSStack_48,&DAT_056f11a8);
      FUN_054772c4(aSStack_40,&DAT_056f11a8);
      FUN_054772c4(aSStack_38,&DAT_056f11a8);
      __wc = local_54;
    }
    if (__wc == 0x3d) {
LAB_052c7d0c:
      bVar6 = false;
      bVar4 = true;
      bVar3 = true;
      bVar8 = false;
      goto LAB_052c7754;
    }
    bVar4 = false;
    pSVar12 = aSStack_50;
  }
  else {
    if (!bVar3) {
      FUN_05477a88(this_00);
      bVar8 = false;
      goto LAB_052c7754;
    }
LAB_052c7cbc:
    if (__wc == 0x3d) goto LAB_052c7d0c;
    pSVar12 = aSStack_48;
    if (!bVar4) {
      pSVar12 = aSStack_50;
    }
  }
  bVar8 = false;
  bVar3 = true;
  FUN_05477a88(pSVar12);
  goto LAB_052c7754;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::XMLParser::OpenFile(std::string const&) */

void __thiscall Sexy::XMLParser::OpenFile(XMLParser *this,string *param_1)

{
  char cVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EncodingParser::OpenFile((EncodingParser *)this,param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x50) = 0;
    FUN_031f5e7c(asStack_18,"Unable to open file ",param_1);
    ToWString(asStack_18);
    Fail((wstring *)this);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
  }
  else {
    thunk_FUN_05475e00(this + 0x40,param_1);
    Init(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* Sexy::XMLParser::SetStringSource(std::wstring const&) */

void __thiscall Sexy::XMLParser::SetStringSource(XMLParser *this,wstring *param_1)

{
  Init(this);
  EncodingParser::SetStringSource((EncodingParser *)this,param_1);
  return;
}

