// Class: RechargeGiftConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftConfig::StaticClassInit() */

void RechargeGiftConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"RechargeGiftConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_049dc978,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeGiftConfig::StaticGetClass() */

long * RechargeGiftConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeGiftConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeGiftConfig::GetClass() const */

long * RechargeGiftConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeGiftConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeGiftConfig::RechargeGiftConfig() */

void __thiscall RechargeGiftConfig::RechargeGiftConfig(RechargeGiftConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06929bc0;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* RechargeGiftConfig::StaticNew() */

RechargeGiftConfig * RechargeGiftConfig::StaticNew(void)

{
  RechargeGiftConfig *this;
  
  this = ::operator_new(0x48);
  RechargeGiftConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftConfig::GetConfig(std::string const&) */

void RechargeGiftConfig::GetConfig(string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  RtObject *this;
  RechargeGiftConfig *pRVar6;
  int extraout_w1;
  int extraout_w1_00;
  int iVar7;
  int extraout_w1_01;
  int extraout_w1_02;
  int iVar8;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  long local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    iVar8 = 0;
  }
  else {
    local_28[0] = LawnApp::GetRealBeijingTime(gLawnApp);
    if (local_28[0] < 1) goto LAB_049dcea0;
    lVar4 = LawnApp::BeijingTime(gLawnApp,local_28);
    iVar8 = *(int *)(lVar4 + 0x10) * 100 + 100 + (*(int *)(lVar4 + 0x14) + 0x76c) * 10000 +
            *(int *)(lVar4 + 0xc);
  }
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar5,0x53);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar2) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pRVar6 = Sexy::RtObject::Cast<RechargeGiftConfig>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar7 = extraout_w1_01;
    if (pRVar6 != (RechargeGiftConfig *)0x0) {
      cVar1 = FUN_0547419c(param_1);
      if (cVar1 == '\0') {
        cVar1 = std::operator==((string *)(pRVar6 + 8),param_1);
        iVar7 = extraout_w1_02;
        if (cVar1 == '\0') goto LAB_049dcf14;
      }
      else {
        iVar3 = FUN_049dc738(*(undefined4 *)(pRVar6 + 0x40));
        iVar7 = extraout_w1;
        if ((iVar8 < iVar3) ||
           (iVar3 = FUN_049dc73c(*(undefined4 *)(pRVar6 + 0x44)), iVar7 = extraout_w1_00,
           iVar3 < iVar8)) goto LAB_049dcf14;
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
      goto LAB_049dcea4;
    }
LAB_049dcf14:
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,iVar7);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
LAB_049dcea0:
  pRVar6 = (RechargeGiftConfig *)0x0;
LAB_049dcea4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar6);
}


/* RechargeGiftConfig::~RechargeGiftConfig() */

void __thiscall RechargeGiftConfig::~RechargeGiftConfig(RechargeGiftConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06929bc0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* RechargeGiftConfig::~RechargeGiftConfig() */

void __thiscall RechargeGiftConfig::~RechargeGiftConfig(RechargeGiftConfig *this)

{
  ~RechargeGiftConfig(this);
  AK::FreeHook(this);
  return;
}

