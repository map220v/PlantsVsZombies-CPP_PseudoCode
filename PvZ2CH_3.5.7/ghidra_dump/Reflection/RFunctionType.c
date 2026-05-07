// Class: Reflection::RFunctionType


/* Reflection::RFunctionType::StaticGetTypeCategory() */

undefined8 Reflection::RFunctionType::StaticGetTypeCategory(void)

{
  return 3;
}


/* Reflection::RFunctionType::GetTypeCategory() const */

undefined8 Reflection::RFunctionType::GetTypeCategory(void)

{
  return 3;
}


/* Reflection::RFunctionType::GetArgTypeCount() const */

void __thiscall Reflection::RFunctionType::GetArgTypeCount(RFunctionType *this)

{
  FUN_0517ed0c(*(undefined8 *)(this + 0x88),*(undefined8 *)(this + 0x90));
  return;
}


/* Reflection::RFunctionType::GetArgTypeIndexed(unsigned int) const */

undefined8 __thiscall Reflection::RFunctionType::GetArgTypeIndexed(RFunctionType *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0517ed18(*(undefined8 *)(this + 0x88),param_1);
  return *puVar1;
}


/* Reflection::RFunctionType::TypeEquals(Reflection::RType*, bool, bool) const */

bool __thiscall
Reflection::RFunctionType::TypeEquals(RFunctionType *this,RType *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((param_1 != (RType *)0x0) &&
     (iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1), iVar5 == 3)) {
    if (param_2) {
      cVar2 = FUN_0517e270(*(undefined4 *)(this + 100));
      cVar3 = FUN_0517e270(*(undefined4 *)(param_1 + 100));
      if (cVar2 != cVar3) {
        return false;
      }
    }
    iVar5 = FUN_0517eaa0(*(undefined4 *)(this + 0x70));
    iVar6 = FUN_0517eaa0(*(undefined4 *)(param_1 + 0x70));
    if (iVar5 == iVar6) {
      plVar9 = (long *)FUN_0517eaa8(*(undefined8 *)(this + 0x80));
      uVar10 = FUN_0517eaa8(*(undefined8 *)(param_1 + 0x80));
      cVar2 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar10,param_2,param_3);
      if (cVar2 != '\0') {
        uVar7 = GetArgTypeCount(this);
        uVar8 = GetArgTypeCount((RFunctionType *)param_1);
        if (uVar7 == uVar8) {
          uVar8 = 0;
          if (uVar7 != 0) {
            do {
              plVar9 = (long *)GetArgTypeIndexed(this,uVar8);
              uVar1 = uVar8 + 1;
              uVar10 = GetArgTypeIndexed((RFunctionType *)param_1,uVar8);
              cVar3 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar10,1,0);
              if (cVar3 == '\0') {
                return false;
              }
              uVar8 = uVar1;
            } while (uVar1 != uVar7);
          }
          if (!param_3) {
            return (bool)cVar2;
          }
          iVar5 = FUN_0517e26c(*(undefined4 *)(this + 0x6c));
          iVar6 = FUN_0517e26c(*(undefined4 *)(param_1 + 0x6c));
          if (iVar5 == iVar6) {
            plVar9 = (long *)FUN_0517eaa4(*(undefined8 *)(this + 0x78));
            if (plVar9 == (long *)0x0) {
              lVar11 = FUN_0517eaa4(*(undefined8 *)(param_1 + 0x78));
              return lVar11 == 0;
            }
            uVar10 = FUN_0517eaa4(*(undefined8 *)(param_1 + 0x78));
            uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar10,param_2,1);
            return (bool)uVar4;
          }
        }
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RFunctionType::TypeToString(bool) const */

void Reflection::RFunctionType::TypeToString(bool param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  RFunctionType *this;
  long *plVar6;
  undefined8 uVar7;
  char in_w1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (RFunctionType *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  uVar2 = FUN_0517e26c(*(undefined4 *)(this + 0x6c));
  if (uVar2 != 0) {
    Sexy::StrFormat("thisadj(%d) ",asStack_10,(ulong)uVar2);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  if ((in_w1 == '\0') || (cVar1 = FUN_0517e270(*(undefined4 *)(this + 100)), cVar1 == '\0')) {
    plVar6 = (long *)FUN_0517eaa4(*(undefined8 *)(this + 0x78));
  }
  else {
    FUN_05475ad8();
    plVar6 = (long *)FUN_0517eaa4(*(undefined8 *)(this + 0x78));
  }
  if (plVar6 == (long *)0x0) {
    FUN_05475ad8();
    plVar6 = (long *)FUN_0517eaa8(*(undefined8 *)(this + 0x80));
  }
  else {
    (**(code **)(*plVar6 + 0x58))(asStack_18,plVar6,in_w1);
    uVar7 = FUN_0547429c(asStack_18);
    Sexy::StrFormat("method<%s, ",asStack_10,uVar7);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    plVar6 = (long *)FUN_0517eaa8(*(undefined8 *)(this + 0x80));
  }
  if (plVar6 == (long *)0x0) {
    std::string::string(asStack_10,"FIXME_FUNCTYPE_NULLRETTYPE");
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
    nop();
  }
  else {
    (**(code **)(*plVar6 + 0x58))(asStack_10,plVar6,in_w1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  FUN_05475ad8();
  uVar3 = FUN_0517eaa0(*(undefined4 *)(this + 0x70));
  switch(uVar3) {
  case 1:
    FUN_05475ad8();
    break;
  case 2:
    FUN_05475ad8();
    break;
  case 3:
    FUN_05475ad8();
    break;
  case 4:
    FUN_05475ad8();
    break;
  case 5:
    FUN_05475ad8();
    break;
  case 6:
    FUN_05475ad8();
    break;
  default:
    FUN_05475ad8();
  }
  uVar2 = 0;
  FUN_05475ad8();
  iVar4 = GetArgTypeCount(this);
  if (iVar4 != 0) {
    do {
      if (uVar2 != 0) {
        FUN_05475ad8();
      }
      plVar6 = (long *)GetArgTypeIndexed(this,uVar2);
      if (plVar6 == (long *)0x0) {
        std::string::string(asStack_10,"FIXME_FUNCTYPE_NULLARGTYPE");
        thunk_FUN_054757c0();
        std::string::~string(asStack_10);
        nop();
      }
      else {
        (**(code **)(*plVar6 + 0x58))(asStack_10,plVar6,in_w1);
        thunk_FUN_054757c0();
        std::string::~string(asStack_10);
      }
      uVar2 = uVar2 + 1;
      uVar5 = GetArgTypeCount(this);
    } while (uVar2 < uVar5);
  }
  FUN_05475ad8();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Reflection::RFunctionType::StaticGetClass() */

long * Reflection::RFunctionType::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RFunctionType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RFunctionType::GetClass() const */

long * Reflection::RFunctionType::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RFunctionType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RFunctionType::RFunctionType() */

void __thiscall Reflection::RFunctionType::RFunctionType(RFunctionType *this)

{
  RType::RType((RType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f2c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* Reflection::RFunctionType::StaticNew() */

RFunctionType * Reflection::RFunctionType::StaticNew(void)

{
  RFunctionType *this;
  
  this = ::operator_new(0xa0);
  RFunctionType(this);
  return this;
}


/* Reflection::RFunctionType::~RFunctionType() */

void __thiscall Reflection::RFunctionType::~RFunctionType(RFunctionType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f2c0;
  std::vector<Reflection::RSymbol::UTypePtr,std::allocator<Reflection::RSymbol::UTypePtr>>::~vector
            ((vector<Reflection::RSymbol::UTypePtr,std::allocator<Reflection::RSymbol::UTypePtr>> *)
             (this + 0x88));
  RType::~RType((RType *)this);
  return;
}


/* Reflection::RFunctionType::~RFunctionType() */

void __thiscall Reflection::RFunctionType::~RFunctionType(RFunctionType *this)

{
  ~RFunctionType(this);
  AK::FreeHook(this);
  return;
}

