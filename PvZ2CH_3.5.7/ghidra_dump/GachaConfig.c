// Class: GachaConfig


/* GachaConfig::GetGachaPlantRewardList() */

GachaConfig * __thiscall GachaConfig::GetGachaPlantRewardList(GachaConfig *this)

{
  return this + 0x38;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaConfig::StaticClassInit() */

void GachaConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GachaReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03dede1c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GachaConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03dee574,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaConfig::StaticGetClass() */

long * GachaConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GachaConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GachaConfig::GetClass() const */

long * GachaConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"GachaConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaConfig::GetGachaRewardType(std::string const&) */

void GachaConfig::GetGachaRewardType(string *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  string *psVar4;
  string *in_x1;
  string *in_x8;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = ___stack_chk_guard;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = FUN_03dedd34(uVar6,*(undefined8 *)(param_1 + 0x28));
  lVar5 = 0;
  do {
    if (lVar5 == lVar3) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      lVar3 = FUN_03dedd34(uVar6,*(undefined8 *)(param_1 + 0x40));
      lVar5 = 0;
      goto LAB_03dee370;
    }
    psVar4 = (string *)FUN_03dedd64(uVar6,lVar5);
    cVar2 = std::operator==(psVar4,in_x1);
    lVar5 = lVar5 + 1;
  } while (cVar2 == '\0');
  goto LAB_03dee3e4;
  while( true ) {
    psVar4 = (string *)FUN_03dedd64(uVar6,lVar5);
    cVar2 = std::operator==(psVar4,in_x1);
    lVar5 = lVar5 + 1;
    if (cVar2 != '\0') break;
LAB_03dee370:
    if (lVar5 == lVar3) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      lVar3 = FUN_03dedd34(uVar6,*(undefined8 *)(param_1 + 0x58));
      lVar5 = 0;
      goto LAB_03dee3b8;
    }
  }
  goto LAB_03dee3e4;
  while( true ) {
    psVar4 = (string *)FUN_03dedd64(uVar6,lVar5);
    cVar2 = std::operator==(psVar4,in_x1);
    lVar5 = lVar5 + 1;
    if (cVar2 != '\0') break;
LAB_03dee3b8:
    if (lVar5 == lVar3) {
      std::string::string(in_x8,"");
      nop();
      goto LAB_03dee3f0;
    }
  }
LAB_03dee3e4:
  FUN_05475d88();
LAB_03dee3f0:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaConfig::GachaConfig() */

void __thiscall GachaConfig::GachaConfig(GachaConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0677f400;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* GachaConfig::StaticNew() */

GachaConfig * GachaConfig::StaticNew(void)

{
  GachaConfig *this;
  
  this = ::operator_new(0x68);
  GachaConfig(this);
  return this;
}


/* GachaConfig::~GachaConfig() */

void __thiscall GachaConfig::~GachaConfig(GachaConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0677f400;
  std::vector<GachaReward,std::allocator<GachaReward>>::~vector
            ((vector<GachaReward,std::allocator<GachaReward>> *)(this + 0x50));
  std::vector<GachaReward,std::allocator<GachaReward>>::~vector
            ((vector<GachaReward,std::allocator<GachaReward>> *)(this + 0x38));
  std::vector<GachaReward,std::allocator<GachaReward>>::~vector
            ((vector<GachaReward,std::allocator<GachaReward>> *)(this + 0x20));
  nop();
  return;
}


/* GachaConfig::~GachaConfig() */

void __thiscall GachaConfig::~GachaConfig(GachaConfig *this)

{
  ~GachaConfig(this);
  AK::FreeHook(this);
  return;
}

