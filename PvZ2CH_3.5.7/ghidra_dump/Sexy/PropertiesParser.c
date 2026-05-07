// Class: Sexy::PropertiesParser


/* Sexy::PropertiesParser::~PropertiesParser() */

void __thiscall Sexy::PropertiesParser::~PropertiesParser(PropertiesParser *this)

{
  *(undefined ***)this = &PTR__PropertiesParser_06a2ef70;
  FUN_05476c50(this + 0x18);
  return;
}


/* Sexy::PropertiesParser::~PropertiesParser() */

void __thiscall Sexy::PropertiesParser::~PropertiesParser(PropertiesParser *this)

{
  ~PropertiesParser(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PropertiesParser::PropertiesParser(Sexy::SexyAppBase*) */

void __thiscall
Sexy::PropertiesParser::PropertiesParser(PropertiesParser *this,SexyAppBase *param_1)

{
  *(undefined ***)this = &PTR__PropertiesParser_06a2ef70;
  FUN_05476574(this + 0x18);
  this[0x20] = (PropertiesParser)0x0;
  *(SexyAppBase **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::Fail(std::wstring const&) */

void __thiscall Sexy::PropertiesParser::Fail(PropertiesParser *this,wstring *param_1)

{
  PropertiesParser *pPVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (PropertiesParser)0x0) {
    this[0x20] = (PropertiesParser)0x1;
    pPVar1 = this + 0x18;
    uVar3 = XMLParser::GetCurrentLineNum(*(XMLParser **)(this + 0x10));
    thunk_FUN_05477b9c(pPVar1,param_1);
    if (0 < (int)uVar3) {
      StrFormat(L" on Line %d",asStack_10,(ulong)uVar3);
      thunk_FUN_05477668(pPVar1,asStack_10);
      FUN_05476c50(asStack_10);
    }
    XMLParser::GetFileName();
    cVar2 = FUN_0547419c(asStack_10);
    std::string::~string(asStack_10);
    if (cVar2 == '\0') {
      XMLParser::GetFileName();
      ToSexyString(aSStack_20,extraout_x1);
      uVar4 = FUN_054766ec(auStack_18);
      StrFormat(L" in File \'%ls\'",asStack_10,uVar4);
      thunk_FUN_05477668(pPVar1,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(auStack_18);
      std::string::~string((string *)aSStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PropertiesParser::GetErrorText() */

undefined8 Sexy::PropertiesParser::GetErrorText(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::ParseSingleElement(std::wstring*) */

void __thiscall Sexy::PropertiesParser::ParseSingleElement(PropertiesParser *this,wstring *param_1)

{
  char cVar1;
  wstring awStack_c0 [8];
  wstring awStack_b8 [8];
  int local_b0 [4];
  undefined1 auStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_054772c4(param_1,&DAT_056f11a8);
  do {
    XMLElement::XMLElement((XMLElement *)local_b0);
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x50))
                      (*(long **)(this + 0x10),(XMLElement *)local_b0);
    if (cVar1 == '\0') {
LAB_0517c78c:
      XMLElement::~XMLElement((XMLElement *)local_b0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    if (local_b0[0] == 1) {
      cVar1 = '\0';
      FUN_036944b8(awStack_c0,L"Unexpected Section: \'",auStack_a0);
      std::operator+(awStack_c0,L"\'");
      Fail(this,awStack_b8);
      FUN_05476c50(awStack_b8);
      FUN_05476c50(awStack_c0);
      goto LAB_0517c78c;
    }
    if (local_b0[0] == 3) {
      thunk_FUN_05477b9c(param_1,auStack_a0);
    }
    else if (local_b0[0] == 2) goto LAB_0517c78c;
    XMLElement::~XMLElement((XMLElement *)local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::ParseStringArray(std::vector<std::string, std::allocator<std::string >
   >*) */

void __thiscall Sexy::PropertiesParser::ParseStringArray(PropertiesParser *this,vector *param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  bool *pbVar3;
  Sexy aSStack_c0 [8];
  string asStack_b8 [8];
  uint local_b0 [4];
  wstring awStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  do {
    XMLElement::XMLElement((XMLElement *)local_b0);
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x50))
                      (*(long **)(this + 0x10),(XMLElement *)local_b0);
    if (cVar1 == '\0') {
LAB_0517d230:
      XMLElement::~XMLElement((XMLElement *)local_b0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pbVar3 = (bool *)(ulong)local_b0[0];
    if (local_b0[0] == 1) {
      cVar1 = std::operator==(awStack_a0,L"String");
      if (!(bool)cVar1) {
        pwVar2 = L"Invalid Section \'";
LAB_0517d1fc:
        FUN_036944b8(aSStack_c0,pwVar2,awStack_a0);
        std::operator+((wstring *)aSStack_c0,L"\'");
        Fail(this,(wstring *)asStack_b8);
        FUN_05476c50((wstring *)asStack_b8);
        FUN_05476c50((wstring *)aSStack_c0);
        goto LAB_0517d230;
      }
      FUN_05476574(aSStack_c0);
      cVar1 = ParseSingleElement(this,(wstring *)aSStack_c0);
      if (cVar1 == '\0') {
        FUN_05476c50(aSStack_c0);
        cVar1 = '\0';
        goto LAB_0517d230;
      }
      WStringToString(aSStack_c0,(wstring *)0x0,pbVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_b8);
      std::string::~string(asStack_b8);
      FUN_05476c50(aSStack_c0);
    }
    else {
      if (local_b0[0] == 3) {
        pwVar2 = L"Element Not Expected \'";
        cVar1 = false;
        goto LAB_0517d1fc;
      }
      if (local_b0[0] == 2) goto LAB_0517d230;
    }
    XMLElement::~XMLElement((XMLElement *)local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::ParseProperties() */

void __thiscall Sexy::PropertiesParser::ParseProperties(PropertiesParser *this)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  Sexy *pSVar4;
  wchar_t *pwVar5;
  long lVar6;
  wstring *extraout_x1;
  bool *pbVar7;
  wstring *pwVar8;
  bool abStack_100 [8];
  int local_f8 [2];
  double local_f0;
  string asStack_e8 [24];
  wstring awStack_d0 [32];
  int local_b0 [4];
  wstring awStack_a0 [24];
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  amStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  do {
    XMLElement::XMLElement((XMLElement *)local_b0);
    cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x50))
                      (*(long **)(this + 0x10),(XMLElement *)local_b0);
    if (cVar1 == '\0') {
LAB_0517d910:
      XMLElement::~XMLElement((XMLElement *)local_b0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    if (local_b0[0] == 1) {
      bVar2 = std::operator==(awStack_a0,L"String");
      if (bVar2) {
        pwVar8 = (wstring *)&local_f0;
        FUN_05476574(pwVar8);
        cVar3 = ParseSingleElement(this,pwVar8);
        cVar1 = false;
        if (cVar3 == '\0') goto LAB_0517dad8;
        pbVar7 = (bool *)local_f8;
        FUN_05478178(awStack_d0,&DAT_0574dfd8);
        pSVar4 = (Sexy *)std::
                         map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                         ::operator[](amStack_88,awStack_d0);
        WStringToString(pSVar4,(wstring *)0x0,pbVar7);
        FUN_05476c50(awStack_d0);
        nop();
        SexyAppBase::SetString(*(SexyAppBase **)(this + 8),asStack_e8,pwVar8);
        std::string::~string(asStack_e8);
        FUN_05476c50(pwVar8);
      }
      else {
        cVar1 = std::operator==(awStack_a0,L"StringArray");
        if ((bool)cVar1) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_e8);
          cVar1 = ParseStringArray(this,(vector *)asStack_e8);
          if (cVar1 == '\0') {
            std::vector<std::string,std::allocator<std::string>>::~vector
                      ((vector<std::string,std::allocator<std::string>> *)asStack_e8);
            cVar1 = '\0';
            goto LAB_0517d910;
          }
          pbVar7 = (bool *)local_f8;
          FUN_05478178((pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>
                        *)awStack_d0,&DAT_0574dfd8);
          pSVar4 = (Sexy *)std::
                           map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                           ::operator[](amStack_88,awStack_d0);
          WStringToString(pSVar4,(wstring *)0x0,pbVar7);
          FUN_05476c50((pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>
                        *)awStack_d0);
          nop();
          lVar6 = *(long *)(this + 8);
          std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>::
          pair<std::string&,std::vector<std::string,std::allocator<std::string>>&,void>
                    ((pair<std::string_const,std::vector<std::string,std::allocator<std::string>>> *
                     )awStack_d0,(string *)&local_f0,(vector *)asStack_e8);
          std::
          map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
          ::
          insert<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>,void>
                    ((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                      *)(lVar6 + 0x818),(pair *)awStack_d0);
          std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>::~pair
                    ((pair<std::string_const,std::vector<std::string,std::allocator<std::string>>> *
                     )awStack_d0);
          std::string::~string((string *)&local_f0);
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)asStack_e8);
        }
        else {
          bVar2 = std::operator==(awStack_a0,L"Boolean");
          if (!bVar2) {
            cVar1 = std::operator==(awStack_a0,L"Integer");
            if (!(bool)cVar1) {
              bVar2 = std::operator==(awStack_a0,L"Double");
              if (!bVar2) {
                pwVar5 = L"Invalid Section \'";
                goto LAB_0517daac;
              }
              pwVar8 = (wstring *)local_f8;
              FUN_05476574(pwVar8);
              cVar3 = ParseSingleElement(this,pwVar8);
              if (cVar3 != '\0') {
                cVar3 = StringToDouble(pwVar8,&local_f0);
                if (cVar3 != '\0') {
                  pbVar7 = abStack_100;
                  FUN_05478178(awStack_d0,&DAT_0574dfd8);
                  pSVar4 = (Sexy *)std::
                                   map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                                   ::operator[](amStack_88,awStack_d0);
                  WStringToString(pSVar4,(wstring *)0x0,pbVar7);
                  FUN_05476c50(awStack_d0);
                  nop();
                  SexyAppBase::SetDouble(*(SexyAppBase **)(this + 8),asStack_e8,local_f0);
                  std::string::~string(asStack_e8);
                  FUN_05476c50(pwVar8);
                  goto LAB_0517d60c;
                }
                FUN_036944b8((wstring *)asStack_e8,L"Invalid Double Value: \'",pwVar8);
                std::operator+((wstring *)asStack_e8,L"\'");
                Fail(this,awStack_d0);
                FUN_05476c50(awStack_d0);
                FUN_05476c50((wstring *)asStack_e8);
              }
              goto LAB_0517dad8;
            }
            FUN_05476574((wstring *)&local_f0);
            cVar1 = ParseSingleElement(this,(wstring *)&local_f0);
            if (cVar1 != '\0') {
              cVar1 = StringToInt((wstring *)&local_f0,local_f8);
              if (cVar1 != '\0') {
                pbVar7 = abStack_100;
                FUN_05478178(awStack_d0,&DAT_0574dfd8);
                pSVar4 = (Sexy *)std::
                                 map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                                 ::operator[](amStack_88,awStack_d0);
                WStringToString(pSVar4,(wstring *)0x0,pbVar7);
                FUN_05476c50(awStack_d0);
                nop();
                SexyAppBase::SetInteger(*(SexyAppBase **)(this + 8),asStack_e8,local_f8[0]);
                std::string::~string(asStack_e8);
                FUN_05476c50((wstring *)&local_f0);
                goto LAB_0517d60c;
              }
              FUN_036944b8((wstring *)asStack_e8,L"Invalid Integer Value: \'",(wstring *)&local_f0);
              std::operator+((wstring *)asStack_e8,L"\'");
              Fail(this,awStack_d0);
              FUN_05476c50(awStack_d0);
              FUN_05476c50((wstring *)asStack_e8);
            }
            cVar1 = '\0';
            FUN_05476c50((wstring *)&local_f0);
            goto LAB_0517d910;
          }
          FUN_05476574((Sexy *)&local_f0);
          cVar3 = ParseSingleElement(this,(wstring *)&local_f0);
          if (cVar3 == '\0') {
LAB_0517d908:
            FUN_05476c50((Sexy *)&local_f0);
            goto LAB_0517d910;
          }
          Upper((Sexy *)&local_f0,extraout_x1);
          FUN_054766c8((Sexy *)&local_f0,awStack_d0);
          FUN_05476c50(awStack_d0);
          bVar2 = std::operator==((wstring *)&local_f0,L"1");
          if ((((bVar2) || (bVar2 = std::operator==((wstring *)&local_f0,L"YES"), bVar2)) ||
              (bVar2 = std::operator==((wstring *)&local_f0,L"ON"), bVar2)) ||
             (bVar2 = std::operator==((wstring *)&local_f0,L"TRUE"), bVar2)) {
            bVar2 = true;
          }
          else {
            bVar2 = std::operator==((wstring *)&local_f0,L"0");
            if (((!bVar2) && (bVar2 = std::operator==((wstring *)&local_f0,L"NO"), !bVar2)) &&
               ((bVar2 = std::operator==((wstring *)&local_f0,L"OFF"), !bVar2 &&
                (bVar2 = std::operator==((wstring *)&local_f0,L"FALSE"), !bVar2)))) {
              FUN_036944b8((wstring *)asStack_e8,L"Invalid Boolean Value: \'",(Sexy *)&local_f0);
              std::operator+((wstring *)asStack_e8,L"\'");
              Fail(this,awStack_d0);
              FUN_05476c50(awStack_d0);
              FUN_05476c50((wstring *)asStack_e8);
              goto LAB_0517d908;
            }
            bVar2 = false;
          }
          pbVar7 = (bool *)local_f8;
          FUN_05478178(awStack_d0,&DAT_0574dfd8);
          pSVar4 = (Sexy *)std::
                           map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                           ::operator[](amStack_88,awStack_d0);
          WStringToString(pSVar4,(wstring *)0x0,pbVar7);
          FUN_05476c50(awStack_d0);
          nop();
          SexyAppBase::SetBoolean(*(SexyAppBase **)(this + 8),asStack_e8,bVar2);
          std::string::~string(asStack_e8);
          FUN_05476c50((Sexy *)&local_f0);
        }
      }
    }
    else {
      if (local_b0[0] == 3) {
        pwVar5 = L"Element Not Expected \'";
        cVar1 = false;
LAB_0517daac:
        pwVar8 = (wstring *)asStack_e8;
        FUN_036944b8(asStack_e8,pwVar5,awStack_a0);
        std::operator+(pwVar8,L"\'");
        Fail(this,awStack_d0);
        FUN_05476c50(awStack_d0);
LAB_0517dad8:
        FUN_05476c50(pwVar8);
        goto LAB_0517d910;
      }
      if (local_b0[0] == 2) goto LAB_0517d910;
    }
LAB_0517d60c:
    XMLElement::~XMLElement((XMLElement *)local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::DoParseProperties() */

void __thiscall Sexy::PropertiesParser::DoParseProperties(PropertiesParser *this)

{
  char cVar1;
  bool bVar2;
  wstring awStack_c0 [8];
  wstring awStack_b8 [8];
  int local_b0 [4];
  wstring awStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = XMLParser::HasFailed(*(XMLParser **)(this + 0x10));
  if (cVar1 == '\0') {
    while( true ) {
      XMLElement::XMLElement((XMLElement *)local_b0);
      cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x50))
                        (*(long **)(this + 0x10),(XMLElement *)local_b0);
      if (cVar1 == '\0') break;
      if (local_b0[0] == 1) {
        bVar2 = std::operator==(awStack_a0,L"Properties");
        if (!bVar2) {
          FUN_036944b8(awStack_c0,L"Invalid Section \'",awStack_a0);
          std::operator+(awStack_c0,L"\'");
          Fail(this,awStack_b8);
          FUN_05476c50(awStack_b8);
          FUN_05476c50(awStack_c0);
          break;
        }
        cVar1 = ParseProperties(this);
        if (cVar1 == '\0') break;
      }
      else if (local_b0[0] == 3) {
        FUN_036944b8(awStack_c0,L"Element Not Expected \'",awStack_a0);
        std::operator+(awStack_c0,L"\'");
        Fail(this,awStack_b8);
        FUN_05476c50(awStack_b8);
        FUN_05476c50(awStack_c0);
        break;
      }
      XMLElement::~XMLElement((XMLElement *)local_b0);
    }
    XMLElement::~XMLElement((XMLElement *)local_b0);
  }
  cVar1 = XMLParser::HasFailed(*(XMLParser **)(this + 0x10));
  if (cVar1 != '\0') {
    XMLParser::GetErrorText();
    Fail(this,(wstring *)local_b0);
    FUN_05476c50((wstring *)local_b0);
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((byte)this[0x20] ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PropertiesParser::ParsePropertiesBuffer(Sexy::Buffer const&) */

void Sexy::PropertiesParser::ParsePropertiesBuffer(Buffer *param_1)

{
  XMLParser *this;
  code *pcVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x60);
  XMLParser::XMLParser(this);
  *(XMLParser **)(param_1 + 0x10) = this;
  pcVar1 = *(code **)(*(long *)this + 0x30);
  Buffer::UTF8ToWideString();
  (*pcVar1)(this,auStack_10);
  FUN_05476c50(auStack_10);
  DoParseProperties((PropertiesParser *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PropertiesParser::ParsePropertiesFile(std::string const&) */

void __thiscall Sexy::PropertiesParser::ParsePropertiesFile(PropertiesParser *this,string *param_1)

{
  XMLParser *this_00;
  
  this_00 = ::operator_new(0x60);
  XMLParser::XMLParser(this_00);
  *(XMLParser **)(this + 0x10) = this_00;
  (**(code **)(*(long *)this_00 + 0x18))(this_00,param_1);
  DoParseProperties(this);
  return;
}

