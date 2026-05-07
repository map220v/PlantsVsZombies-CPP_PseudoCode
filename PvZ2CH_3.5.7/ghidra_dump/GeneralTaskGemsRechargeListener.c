// Class: GeneralTaskGemsRechargeListener


/* GeneralTaskGemsRechargeListener::~GeneralTaskGemsRechargeListener() */

void __thiscall
GeneralTaskGemsRechargeListener::~GeneralTaskGemsRechargeListener
          (GeneralTaskGemsRechargeListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e870;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskGemsRechargeListener::~GeneralTaskGemsRechargeListener() */

void __thiscall
GeneralTaskGemsRechargeListener::~GeneralTaskGemsRechargeListener
          (GeneralTaskGemsRechargeListener *this)

{
  ~GeneralTaskGemsRechargeListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskGemsRechargeListener::OnGemsRecharge(int) */

void GeneralTaskGemsRechargeListener::OnGemsRecharge(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x60))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskGemsRechargeListener::StaticClassInit() */

void GeneralTaskGemsRechargeListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskGemsRechargeListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8418c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskGemsRechargeListener::StaticGetClass() */

long * GeneralTaskGemsRechargeListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskGemsRechargeListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskGemsRechargeListener::GetClass() const */

long * GeneralTaskGemsRechargeListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskGemsRechargeListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskGemsRechargeListener::GeneralTaskGemsRechargeListener() */

void __thiscall
GeneralTaskGemsRechargeListener::GeneralTaskGemsRechargeListener
          (GeneralTaskGemsRechargeListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e870;
  return;
}


/* GeneralTaskGemsRechargeListener::StaticNew() */

GeneralTaskGemsRechargeListener * GeneralTaskGemsRechargeListener::StaticNew(void)

{
  GeneralTaskGemsRechargeListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskGemsRechargeListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskGemsRechargeListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskGemsRechargeListener::RegisterListener
          (GeneralTaskGemsRechargeListener *this,GeneralTask *param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_1c0 [8];
  undefined4 local_1b8;
  char local_1a8;
  HappyVaseBreakerData aHStack_140 [304];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a79ca4(local_1b8);
  if ((cVar1 != '\0') && (local_1a8 != '\0')) {
    HappyVaseBreakerData::HappyVaseBreakerData(aHStack_140);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1c0,(RtObject *)aHStack_140);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x60))(this,local_10);
    }
    HappyVaseBreakerData::~HappyVaseBreakerData(aHStack_140);
  }
  this[8] = (GeneralTaskGemsRechargeListener)0x0;
  ActiveItem::~ActiveItem(aAStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

