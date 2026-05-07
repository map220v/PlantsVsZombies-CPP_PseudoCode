// Class: PurchaseConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfig::StaticClassInit() */

void PurchaseConfig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PurchaseConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_048f9950,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseConfig::StaticGetClass() */

long * PurchaseConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PurchaseConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PurchaseConfig::GetClass() const */

long * PurchaseConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"PurchaseConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfig::GetPurchaseChannel(int) */

void __thiscall PurchaseConfig::GetPurchaseChannel(PurchaseConfig *this,int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  string *psVar6;
  string *extraout_x1;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"i_province: %d");
  uVar8 = *(undefined8 *)(this + 8);
  lVar3 = FUN_048f7b00(uVar8,*(undefined8 *)(this + 0x10));
  lVar7 = 0;
  do {
    if (lVar7 == lVar3) {
      uVar8 = *(undefined8 *)(this + 0x20);
      lVar3 = FUN_048f7b00(uVar8,*(undefined8 *)(this + 0x28));
      lVar7 = 0;
      goto LAB_048f9554;
    }
    piVar4 = (int *)FUN_048f7b0c(uVar8,lVar7);
    lVar7 = lVar7 + 1;
  } while (param_1 != *piVar4);
LAB_048f9610:
  uVar2 = 2;
  goto LAB_048f9614;
  while( true ) {
    piVar4 = (int *)FUN_048f7b0c(uVar8,lVar7);
    lVar7 = lVar7 + 1;
    if (param_1 == *piVar4) break;
LAB_048f9554:
    if (lVar7 == lVar3) {
      uVar8 = *(undefined8 *)(this + 0x38);
      lVar3 = FUN_048f7b00(uVar8,*(undefined8 *)(this + 0x40));
      lVar7 = 0;
      goto LAB_048f9594;
    }
  }
  uVar2 = 3;
  goto LAB_048f9614;
  while( true ) {
    piVar4 = (int *)FUN_048f7b0c(uVar8,lVar7);
    lVar7 = lVar7 + 1;
    if (param_1 == *piVar4) break;
LAB_048f9594:
    if (lVar7 == lVar3) {
      uVar8 = *(undefined8 *)(this + 0x50);
      auVar9 = FUN_048f7b00(uVar8,*(undefined8 *)(this + 0x58));
      psVar6 = auVar9._8_8_;
      lVar7 = 0;
      goto LAB_048f95d4;
    }
  }
  uVar2 = 0;
  goto LAB_048f9614;
  while( true ) {
    puVar5 = (uint *)FUN_048f7b0c(uVar8,lVar7);
    psVar6 = (string *)(ulong)*puVar5;
    lVar7 = lVar7 + 1;
    if (param_1 == *puVar5) break;
LAB_048f95d4:
    if (lVar7 == auVar9._0_8_) {
      Sexy::StringToLower((Sexy *)(this + 0x68),psVar6);
      bVar1 = std::operator==(asStack_10,"chinamobilemm");
      std::string::~string(asStack_10);
      if (bVar1) goto LAB_048f9610;
      Sexy::StringToLower((Sexy *)(this + 0x68),extraout_x1);
      uVar2 = std::operator==(asStack_10,"chinamobile");
      std::string::~string(asStack_10);
      goto LAB_048f9614;
    }
  }
  uVar2 = 1;
LAB_048f9614:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PurchaseConfig::PurchaseConfig() */

void __thiscall PurchaseConfig::PurchaseConfig(PurchaseConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0690bf80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  Set8BytesTo0(this + 0x68);
  return;
}


/* PurchaseConfig::StaticNew() */

PurchaseConfig * PurchaseConfig::StaticNew(void)

{
  PurchaseConfig *this;
  
  this = ::operator_new(0x78);
  PurchaseConfig(this);
  return this;
}


/* PurchaseConfig::~PurchaseConfig() */

void __thiscall PurchaseConfig::~PurchaseConfig(PurchaseConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0690bf80;
  std::string::~string((string *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  nop();
  return;
}


/* PurchaseConfig::~PurchaseConfig() */

void __thiscall PurchaseConfig::~PurchaseConfig(PurchaseConfig *this)

{
  ~PurchaseConfig(this);
  AK::FreeHook(this);
  return;
}

