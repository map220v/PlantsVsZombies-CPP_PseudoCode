// Class: Sexy::StructuredDataValidator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::LoadCoreMetaSchema(Sexy::StructuredData*) */

void Sexy::StructuredDataValidator::LoadCoreMetaSchema(StructuredData *param_1)

{
  Buffer *pBVar1;
  Base64 aBStack_58 [24];
  JsonReader aJStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Base64::Base64(aBStack_58);
  pBVar1 = (Buffer *)StructuredData::GetBufferForTextRead(param_1);
  Base64::Decode(aBStack_58,pBVar1,sCoreMetaSchemaBase64,0x9c1);
  nop();
  JsonReader::Read(aJStack_40,pBVar1,param_1,(StructuredData *)0x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::StructuredDataValidator::StructuredDataValidator() */

void __thiscall
Sexy::StructuredDataValidator::StructuredDataValidator(StructuredDataValidator *this)

{
  char cVar1;
  
  Set8BytesTo0(this + 8);
  this[0x18] = (StructuredDataValidator)0x0;
  cVar1 = StructuredData::Empty((StructuredData *)sDefaultSchema);
  if (cVar1 == '\0') {
    return;
  }
  StructuredData::BeginObject((StructuredData *)sDefaultSchema,StructuredData::noName);
  StructuredData::EndObject((StructuredData *)sDefaultSchema);
  return;
}


/* Sexy::StructuredDataValidator::SchemaValueTypeFromString(char const*) */

undefined8 Sexy::StructuredDataValidator::SchemaValueTypeFromString(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(kSchemaTypeStrings,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(PTR_s_string_06a8a928,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(PTR_s_number_06a8a930,param_1);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(PTR_s_integer_06a8a938,param_1);
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(PTR_s_boolean_06a8a940,param_1);
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(PTR_s_object_06a8a948,param_1);
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(PTR_s_array_06a8a950,param_1);
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(PTR_DAT_06a8a958,param_1);
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  uVar2 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* Sexy::StructuredDataValidator::AppendValidationError(std::string const&, std::string const&,
   std::string const&) */

void __thiscall
Sexy::StructuredDataValidator::AppendValidationError
          (StructuredDataValidator *this,string *param_1,string *param_2,string *param_3)

{
  if (*(StructuredData **)(this + 0x10) != (StructuredData *)0x0) {
    StructuredData::BeginObject(*(StructuredData **)(this + 0x10));
    StructuredData::AddString(*(StructuredData **)(this + 0x10),"property",param_1);
    StructuredData::AddString(*(StructuredData **)(this + 0x10),"schema",param_2);
    StructuredData::AddString(*(StructuredData **)(this + 0x10),"message",param_3);
    StructuredData::EndObject(*(StructuredData **)(this + 0x10));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ResolveSchemaRef(Sexy::StructuredData::Value const*, std::string&,
   std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ResolveSchemaRef
          (StructuredDataValidator *this,Value *param_1,string *param_2,string *param_3)

{
  int iVar1;
  long lVar2;
  char *__s1;
  string *__n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = StructuredData::Value::ValueForName(param_1,"$ref");
  if (lVar2 != 0) {
    __s1 = (char *)FUN_051e552c(*(undefined8 *)(lVar2 + 0x10));
    iVar1 = strcmp(__s1,"#");
    if (iVar1 == 0) {
      thunk_FUN_05475e00(param_3,this + 8);
      param_1 = *(Value **)this;
    }
    else {
      __n = (string *)0x0;
      if (*(long *)(this + 0x10) != 0) {
        StrFormat("unable to resolve $ref to \"%s\".",asStack_10,__s1);
        __n = param_3;
        AppendValidationError(this,param_2,param_3,asStack_10);
        std::string::~string(asStack_10);
      }
      std::string::append(param_3,"<default>",(size_t)__n);
      param_1 = (Value *)StructuredData::Root((StructuredData *)sDefaultSchema);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateSimpleType(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateSimpleType
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)FUN_051e552c(*(undefined8 *)(param_2 + 0x10));
  iVar3 = SchemaValueTypeFromString(pcVar5);
  if (iVar3 != 8) {
    uVar1 = *(undefined4 *)param_1;
    iVar4 = FUN_051e54dc(uVar1);
    if (iVar4 != iVar3) {
      if (iVar3 == 2) {
        bVar2 = FUN_051e5500(uVar1);
        uVar6 = (ulong)bVar2;
        if (bVar2 != 0) goto LAB_051e597c;
      }
      uVar6 = *(ulong *)(this + 0x10) & 0xffffffff;
      if (*(ulong *)(this + 0x10) != 0) {
        uVar7 = FUN_051e552c(*(undefined8 *)(param_2 + 0x10));
        StrFormat("%s value found, but a %s is required",asStack_10,(&kSchemaTypeStrings)[iVar4],
                  uVar7);
        AppendValidationError(this,param_3,param_4,asStack_10);
        std::string::~string(asStack_10);
        uVar6 = 0;
      }
      goto LAB_051e597c;
    }
  }
  uVar6 = 1;
LAB_051e597c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateString(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateString
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)FUN_051e552c(*(undefined8 *)(param_1 + 0x10));
  sVar2 = strlen(pcVar1);
  lVar3 = StructuredData::Value::ValueForName(param_2,"minLength");
  if ((lVar3 == 0) ||
     (uVar4 = FUN_051e5524(*(undefined8 *)(lVar3 + 0x10)), (int)uVar4 <= (int)sVar2)) {
    lVar3 = StructuredData::Value::ValueForName(param_2,"maxLength");
    if (lVar3 == 0) {
      uVar5 = 1;
      goto LAB_051e5abc;
    }
    uVar4 = FUN_051e5524(*(undefined8 *)(lVar3 + 0x10));
    uVar5 = 1;
    if ((int)sVar2 <= (int)uVar4) goto LAB_051e5abc;
    if (*(long *)(this + 0x10) != 0) {
      pcVar1 = "string length (%d) is greater than maxLength (%d)";
      goto LAB_051e5a94;
    }
  }
  else if (*(long *)(this + 0x10) != 0) {
    pcVar1 = "string length (%d) is less than minLength (%d)";
LAB_051e5a94:
    StrFormat(pcVar1,asStack_10,sVar2 & 0xffffffff,uVar4);
    AppendValidationError(this,param_3,param_4,asStack_10);
    std::string::~string(asStack_10);
  }
  uVar5 = 0;
LAB_051e5abc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateNumber(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateNumber
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Value *pVVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  double dVar8;
  double dVar9;
  double __x;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_051e5500(*(undefined4 *)param_1);
  if (cVar2 == '\0') {
    __x = (double)StructuredData::Value::GetNumber(param_1);
  }
  else {
    lVar3 = FUN_051e5524(*(undefined8 *)(param_1 + 0x10));
    __x = (double)lVar3;
  }
  pVVar4 = (Value *)StructuredData::Value::ValueForName(param_2,"minimum");
  if (pVVar4 == (Value *)0x0) {
LAB_051e5c28:
    pVVar4 = (Value *)StructuredData::Value::ValueForName(param_2,"maximum");
    if (pVVar4 != (Value *)0x0) {
      cVar2 = FUN_051e5500(*(undefined4 *)pVVar4);
      if (cVar2 == '\0') {
        dVar8 = (double)StructuredData::Value::GetNumber(pVVar4);
      }
      else {
        lVar3 = FUN_051e5524(*(undefined8 *)(pVVar4 + 0x10));
        dVar8 = (double)lVar3;
      }
      lVar3 = StructuredData::Value::ValueForName(param_2,"exclusiveMaximum");
      if ((lVar3 == 0) || (cVar2 = FUN_051e5528(*(undefined1 *)(lVar3 + 0x10)), cVar2 == '\0')) {
        cVar2 = '\0';
        bVar1 = __x <= dVar8;
      }
      else {
        bVar1 = __x < dVar8;
      }
      if (!bVar1) {
        if (*(long *)(this + 0x10) != 0) {
          if (cVar2 == '\0') {
            pcVar7 = "";
          }
          else {
            pcVar7 = " or equal to exclusive ";
          }
          pcVar5 = "number (%f) is less than%s maximum (%f)";
          goto LAB_051e5bd8;
        }
        goto LAB_051e5bf8;
      }
    }
    pVVar4 = (Value *)StructuredData::Value::ValueForName(param_2,"divisibleBy");
    if (pVVar4 == (Value *)0x0) {
      uVar6 = 1;
      goto LAB_051e5bfc;
    }
    cVar2 = FUN_051e5500(*(undefined4 *)pVVar4);
    if (cVar2 == '\0') {
      dVar8 = (double)StructuredData::Value::GetNumber(pVVar4);
    }
    else {
      lVar3 = FUN_051e5524(*(undefined8 *)(pVVar4 + 0x10));
      dVar8 = (double)lVar3;
    }
    dVar9 = fmod(__x,dVar8);
    uVar6 = 1;
    if (dVar9 == 0.0) goto LAB_051e5bfc;
    if (*(long *)(this + 0x10) != 0) {
      StrFormat("number (%f) is not evenly divisble by (%f)",asStack_10,__x,dVar8);
      goto LAB_051e5bdc;
    }
  }
  else {
    cVar2 = FUN_051e5500(*(undefined4 *)pVVar4);
    if (cVar2 == '\0') {
      dVar8 = (double)StructuredData::Value::GetNumber(pVVar4);
      lVar3 = StructuredData::Value::ValueForName(param_2,"exclusiveMinimum");
      if (lVar3 == 0) goto LAB_051e5cec;
LAB_051e5b90:
      cVar2 = FUN_051e5528(*(undefined1 *)(lVar3 + 0x10));
      if (cVar2 == '\0') goto LAB_051e5cec;
      bVar1 = dVar8 < __x;
    }
    else {
      lVar3 = FUN_051e5524(*(undefined8 *)(pVVar4 + 0x10));
      dVar8 = (double)lVar3;
      lVar3 = StructuredData::Value::ValueForName(param_2,"exclusiveMinimum");
      if (lVar3 != 0) goto LAB_051e5b90;
LAB_051e5cec:
      bVar1 = dVar8 <= __x;
      cVar2 = '\0';
    }
    if (bVar1) goto LAB_051e5c28;
    if (*(long *)(this + 0x10) != 0) {
      if (cVar2 == '\0') {
        pcVar7 = "";
      }
      else {
        pcVar7 = " or equal to exclusive";
      }
      pcVar5 = "number (%f) is less than%s minimum (%f)";
LAB_051e5bd8:
      StrFormat(pcVar5,asStack_10,__x,dVar8,pcVar7);
LAB_051e5bdc:
      AppendValidationError(this,param_3,param_4,asStack_10);
      std::string::~string(asStack_10);
    }
  }
LAB_051e5bf8:
  uVar6 = 0;
LAB_051e5bfc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateObject(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateObject
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  char cVar1;
  int iVar2;
  Value *pVVar3;
  Value *pVVar4;
  ulong uVar5;
  Value *this_00;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  Value *local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVVar3 = (Value *)StructuredData::Value::ValueForName(param_2,"properties");
  pVVar4 = (Value *)StructuredData::Value::ValueForName(param_2,"additionalProperties");
  uVar5 = FUN_051e54e0(*(undefined4 *)(param_1 + 0x10));
  this_00 = (Value *)StructuredData::Value::FirstChild(param_1);
  if ((uVar5 & 0xffffffff) == 0) {
    uVar11 = 1;
  }
  else {
    uVar10 = 0;
    uVar11 = 1;
    do {
      std::operator+(param_3,".");
      pcVar6 = (char *)FUN_051e54d8(*(undefined8 *)(this_00 + 8));
      std::operator+(asStack_10,pcVar6);
      std::string::~string(asStack_10);
      FUN_05475d88(asStack_18,param_4);
      if (pVVar3 == (Value *)0x0) {
LAB_051e5f78:
        if (pVVar4 == (Value *)0x0) {
          local_28 = (Value *)StructuredData::Root((StructuredData *)sDefaultSchema);
          FUN_05475aa4(asStack_18,".(additionalProperties)");
          if (local_28 != (Value *)0x0) goto LAB_051e5eec;
        }
        else {
          cVar1 = FUN_051e550c(*(undefined4 *)pVVar4);
          if (cVar1 != '\0') {
            FUN_05475aa4(asStack_18,".additionalProperties");
            local_28 = pVVar4;
            goto LAB_051e5eec;
          }
        }
        uVar11 = 0;
        if (*(long *)(this + 0x10) != 0) {
          uVar11 = 0;
          uVar7 = FUN_051e54d8(*(undefined8 *)(this_00 + 8));
          StrFormat("additional property \"%s\" found, but not allowed",asStack_10,uVar7);
          AppendValidationError(this,param_3,param_4,asStack_10);
          std::string::~string(asStack_10);
        }
      }
      else {
        pcVar6 = (char *)FUN_051e54d8(*(undefined8 *)(this_00 + 8));
        local_28 = (Value *)StructuredData::Value::ValueForName(pVVar3,pcVar6);
        if (local_28 == (Value *)0x0) goto LAB_051e5f78;
        uVar7 = FUN_051e54d8(*(undefined8 *)(local_28 + 8));
        StrFormat(".properties.%s",asStack_10,uVar7);
        FUN_054757c0(asStack_18,asStack_10);
        std::string::~string(asStack_10);
LAB_051e5eec:
        cVar1 = Validate(this,this_00,local_28,asStack_20,asStack_18);
        if (cVar1 == '\0') {
          uVar11 = 0;
        }
      }
      uVar10 = uVar10 + 1;
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      this_00 = (Value *)StructuredData::Value::Next(this_00);
    } while ((uVar5 & 0xffffffff) != uVar10);
  }
  if (pVVar3 != (Value *)0x0) {
    iVar2 = FUN_051e54e0(*(undefined4 *)(pVVar3 + 0x10));
    pVVar3 = (Value *)StructuredData::Value::FirstChild(pVVar3);
    if (iVar2 != 0) {
      iVar9 = 0;
      do {
        while ((lVar8 = StructuredData::Value::ValueForName(pVVar3,"required"), lVar8 == 0 ||
               (cVar1 = FUN_051e5528(*(undefined1 *)(lVar8 + 0x10)), cVar1 == '\0'))) {
LAB_051e6014:
          iVar9 = iVar9 + 1;
          pVVar3 = (Value *)StructuredData::Value::Next(pVVar3);
          if (iVar9 == iVar2) goto LAB_051e60c0;
        }
        pcVar6 = (char *)FUN_051e54d8(*(undefined8 *)(pVVar3 + 8));
        lVar8 = StructuredData::Value::ValueForName(param_1,pcVar6);
        if ((lVar8 != 0) || (*(long *)(this + 0x10) == 0)) goto LAB_051e6014;
        uVar11 = 0;
        iVar9 = iVar9 + 1;
        uVar7 = FUN_051e54d8(*(undefined8 *)(pVVar3 + 8),0);
        StrFormat("required property \"%s\" is missing.",asStack_10,uVar7);
        AppendValidationError(this,param_3,param_4,asStack_10);
        std::string::~string(asStack_10);
        pVVar3 = (Value *)StructuredData::Value::Next(pVVar3);
      } while (iVar9 != iVar2);
    }
  }
LAB_051e60c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


/* Sexy::StructuredDataValidator::Validate(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

bool __thiscall
Sexy::StructuredDataValidator::Validate
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Value *pVVar5;
  ulong extraout_x0;
  undefined8 uVar6;
  
  pVVar5 = (Value *)ResolveSchemaRef(this,param_2,param_3,param_4);
  iVar4 = ValidateType(this,param_1,pVVar5,param_3,param_4);
  if (iVar4 == 1) {
    uVar1 = *(undefined4 *)param_1;
    cVar3 = FUN_051e54e4(uVar1);
    if (cVar3 == '\0') {
      cVar3 = FUN_051e54f0(uVar1);
      if ((cVar3 == '\0') && (cVar3 = FUN_051e5500(uVar1), cVar3 == '\0')) {
        cVar3 = FUN_051e550c(uVar1);
        if (cVar3 == '\0') {
          cVar3 = FUN_051e5518(uVar1);
          if (cVar3 == '\0') goto LAB_051e6230;
          cVar3 = ValidateArray(this,param_1,pVVar5,param_3,param_4);
        }
        else {
          cVar3 = ValidateObject(this,param_1,pVVar5,param_3,param_4);
        }
      }
      else {
        cVar3 = ValidateNumber(this,param_1,pVVar5,param_3,param_4);
      }
    }
    else {
      cVar3 = ValidateString(this,param_1,pVVar5,param_3,param_4);
    }
    bVar2 = false;
    if (cVar3 != '\0') {
LAB_051e6230:
      if (this[0x18] != (StructuredDataValidator)0x0) {
        nop();
        uVar6 = FUN_0545ff04(&DAT_06c4a410,extraout_x0 & 0xffffffff);
        uVar6 = FUN_0545ec84(uVar6,param_3);
        uVar6 = FUN_054603b8(uVar6,&DAT_056e5ab0);
        uVar6 = FUN_0545ec84(uVar6,param_4);
        FUN_0545f9e8(uVar6,FUN_0545fdc8);
      }
      *(Value **)(param_1 + 0x18) = pVVar5;
      return true;
    }
  }
  else {
    bVar2 = iVar4 == 2;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::Validate(Sexy::StructuredData*, Sexy::StructuredData const*,
   Sexy::StructuredData*) */

void __thiscall
Sexy::StructuredDataValidator::Validate
          (StructuredDataValidator *this,StructuredData *param_1,StructuredData *param_2,
          StructuredData *param_3)

{
  char cVar1;
  Value *pVVar2;
  Value *pVVar3;
  StructuredData *this_00;
  undefined8 uVar4;
  uint unaff_w27;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  if (param_2 == (StructuredData *)0x0) {
    param_2 = param_1;
  }
  local_8 = ___stack_chk_guard;
  pVVar2 = (Value *)StructuredData::Root(param_1);
  pVVar3 = (Value *)StructuredData::Root(param_2);
  std::string::string(asStack_18,"$");
  nop();
  std::string::string(asStack_10,"$");
  nop();
  *(Value **)this = pVVar3;
  thunk_FUN_05475e00(this + 8,asStack_10);
  *(StructuredData **)(this + 0x10) = param_3;
  if (param_3 != (StructuredData *)0x0) {
    unaff_w27 = StructuredData::Size(param_3);
    StructuredData::BeginArray(*(StructuredData **)(this + 0x10),"validationErrors");
  }
  if (this[0x18] != (StructuredDataValidator)0x0) {
    uVar4 = FUN_054603b8(&DAT_06c4a410,"--- begin validation ---");
    FUN_0545f9e8(uVar4,FUN_0545fdc8);
  }
  cVar1 = Validate(this,pVVar2,pVVar3,asStack_18,asStack_10);
  this_00 = *(StructuredData **)(this + 0x10);
  if (this_00 != (StructuredData *)0x0) {
    if (cVar1 == '\0') {
      StructuredData::EndArray(this_00);
    }
    else {
      StructuredData::Rewind(this_00,unaff_w27);
    }
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateType(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateType
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  Value *pVVar4;
  ulong uVar5;
  ulong uVar6;
  uint unaff_s8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVVar4 = (Value *)StructuredData::Value::ValueForName(param_2,"type");
  if (pVVar4 != (Value *)0x0) {
    uVar1 = *(undefined4 *)pVVar4;
    cVar2 = FUN_051e54e4(uVar1);
    if (cVar2 != '\0') {
      uVar3 = ValidateSimpleType(this,param_1,pVVar4,param_3,param_4);
      goto LAB_051e6610;
    }
    cVar2 = FUN_051e5518(uVar1);
    if (cVar2 != '\0') {
      if (*(StructuredData **)(this + 0x10) != (StructuredData *)0x0) {
        unaff_s8 = StructuredData::Size(*(StructuredData **)(this + 0x10));
      }
      uVar6 = 0;
      uVar5 = FUN_051e54e0(*(undefined4 *)(pVVar4 + 0x10));
      uVar5 = uVar5 & 0xffffffff;
      pVVar4 = (Value *)StructuredData::Value::FirstChild(pVVar4);
      if (uVar5 != 0) {
        do {
          while (cVar2 = FUN_051e54e4(*(undefined4 *)pVVar4), cVar2 == '\0') {
            StrFormat(".type[%u]",asStack_10,uVar6);
            std::operator+(param_4,asStack_10);
            std::string::~string(asStack_10);
            cVar2 = Validate(this,param_1,pVVar4,param_3,asStack_18);
            if (cVar2 != '\0') {
              if (*(StructuredData **)(this + 0x10) != (StructuredData *)0x0) {
                StructuredData::Rewind(*(StructuredData **)(this + 0x10),unaff_s8);
              }
              std::string::~string(asStack_18);
              uVar3 = 2;
              goto LAB_051e6610;
            }
            uVar6 = uVar6 + 1;
            std::string::~string(asStack_18);
            pVVar4 = (Value *)StructuredData::Value::Next(pVVar4);
            if (uVar6 == uVar5) goto LAB_051e65f4;
          }
          cVar2 = ValidateSimpleType(this,param_1,pVVar4,param_3,param_4);
          if (cVar2 != '\0') {
            if (*(StructuredData **)(this + 0x10) != (StructuredData *)0x0) {
              StructuredData::Rewind(*(StructuredData **)(this + 0x10),unaff_s8);
            }
            goto LAB_051e660c;
          }
          uVar6 = uVar6 + 1;
          pVVar4 = (Value *)StructuredData::Value::Next(pVVar4);
        } while (uVar6 != uVar5);
      }
LAB_051e65f4:
      uVar3 = 0;
      goto LAB_051e6610;
    }
  }
LAB_051e660c:
  uVar3 = 1;
LAB_051e6610:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::StructuredDataValidator::ValidateArray(Sexy::StructuredData::Value const*,
   Sexy::StructuredData::Value const*, std::string&, std::string&) */

void __thiscall
Sexy::StructuredDataValidator::ValidateArray
          (StructuredDataValidator *this,Value *param_1,Value *param_2,string *param_3,
          string *param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  Value *this_00;
  Value *pVVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  Value *this_01;
  undefined4 uVar9;
  Value *local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Value *)StructuredData::Value::ValueForName(param_2,"items");
  pVVar5 = (Value *)StructuredData::Value::ValueForName(param_2,"additionalItems");
  lVar6 = StructuredData::Value::ValueForName(param_2,"minItems");
  lVar7 = StructuredData::Value::ValueForName(param_2,"maxItems");
  uVar3 = FUN_051e54e0(*(undefined4 *)(param_1 + 0x10));
  if (lVar6 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = 1;
    uVar8 = FUN_051e5524(*(undefined8 *)(lVar6 + 0x10));
    if ((uVar3 < uVar8) && (uVar9 = 0, *(long *)(this + 0x10) != 0)) {
      uVar9 = 0;
      StrFormat("array contains %u items, but the minimum is %d.",asStack_10,(ulong)uVar3);
      AppendValidationError(this,param_3,param_4,asStack_10);
      std::string::~string(asStack_10);
    }
  }
  if (((lVar7 != 0) && (uVar8 = FUN_051e5524(*(undefined8 *)(lVar7 + 0x10)), uVar8 < uVar3)) &&
     (uVar9 = 0, *(long *)(this + 0x10) != 0)) {
    uVar9 = 0;
    StrFormat("array contains %u items, but the maximum is %d.",asStack_10,(ulong)uVar3);
    AppendValidationError(this,param_3,param_4,asStack_10);
    std::string::~string(asStack_10);
  }
  this_01 = (Value *)StructuredData::Value::FirstChild(param_1);
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      StrFormat("[%u]",asStack_10,uVar8 & 0xffffffff);
      std::operator+(param_3,asStack_10);
      std::string::~string(asStack_10);
      FUN_05475d88(asStack_18,param_4);
      if (this_00 == (Value *)0x0) {
        local_28 = (Value *)StructuredData::Root((StructuredData *)sDefaultSchema);
        FUN_05475aa4(asStack_18,".(items)");
        if (local_28 == (Value *)0x0) goto LAB_051e683c;
LAB_051e6904:
        cVar2 = Validate(this,this_01,local_28,asStack_20,asStack_18);
        if (cVar2 == '\0') {
          uVar9 = 0;
        }
      }
      else {
        uVar1 = *(undefined4 *)this_00;
        cVar2 = FUN_051e550c(uVar1);
        if (cVar2 != '\0') {
          FUN_05475aa4(asStack_18,".items");
          local_28 = this_00;
          goto LAB_051e6904;
        }
        cVar2 = FUN_051e5518(uVar1);
        if (cVar2 != '\0') {
          uVar4 = FUN_051e54e0(*(undefined4 *)(this_00 + 0x10));
          if ((uint)uVar8 < uVar4) {
            local_28 = (Value *)StructuredData::Value::ValueAtIndex(this_00,uVar8);
            FUN_05475980(asStack_18,".items[%u]",uVar8);
          }
          else {
            if (pVVar5 != (Value *)0x0) {
              cVar2 = FUN_051e550c(*(undefined4 *)pVVar5);
              if (cVar2 != '\0') {
                FUN_05475aa4(asStack_18,".additionalItems");
                local_28 = pVVar5;
                goto LAB_051e6904;
              }
              goto LAB_051e683c;
            }
            local_28 = (Value *)StructuredData::Root((StructuredData *)sDefaultSchema);
            FUN_05475aa4(asStack_18,".(additionalItems)");
          }
          if (local_28 != (Value *)0x0) goto LAB_051e6904;
        }
LAB_051e683c:
        uVar9 = 0;
        StrFormat("additional item [%u] found, but not allowed",asStack_10,uVar8 & 0xffffffff);
        AppendValidationError(this,param_3,param_4,asStack_10);
        std::string::~string(asStack_10);
      }
      uVar8 = uVar8 + 1;
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      this_01 = (Value *)StructuredData::Value::Next(this_01);
    } while ((uint)uVar8 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

