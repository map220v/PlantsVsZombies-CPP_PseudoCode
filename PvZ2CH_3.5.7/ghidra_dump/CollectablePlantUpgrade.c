// Class: CollectablePlantUpgrade


/* CollectablePlantUpgrade::~CollectablePlantUpgrade() */

void __thiscall CollectablePlantUpgrade::~CollectablePlantUpgrade(CollectablePlantUpgrade *this)

{
  *(undefined ***)this = &PTR_GetClass_067559b0;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantUpgrade_06755c00;
  std::string::~string((string *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectablePlantUpgrade::~CollectablePlantUpgrade() */

void __thiscall CollectablePlantUpgrade::~CollectablePlantUpgrade(CollectablePlantUpgrade *this)

{
  ~CollectablePlantUpgrade(this + -0x10);
  return;
}


/* CollectablePlantUpgrade::~CollectablePlantUpgrade() */

void __thiscall CollectablePlantUpgrade::~CollectablePlantUpgrade(CollectablePlantUpgrade *this)

{
  ~CollectablePlantUpgrade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectablePlantUpgrade::~CollectablePlantUpgrade() */

void __thiscall CollectablePlantUpgrade::~CollectablePlantUpgrade(CollectablePlantUpgrade *this)

{
  ~CollectablePlantUpgrade(this + -0x10);
  return;
}


/* CollectablePlantUpgrade::CollectablePlantUpgrade() */

void __thiscall CollectablePlantUpgrade::CollectablePlantUpgrade(CollectablePlantUpgrade *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067559b0;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantUpgrade_06755c00;
  Set8BytesTo0(this + 0x1f0);
  return;
}


/* CollectablePlantUpgrade::StaticNew() */

CollectablePlantUpgrade * CollectablePlantUpgrade::StaticNew(void)

{
  CollectablePlantUpgrade *this;
  
  this = ::operator_new(0x1f8);
  CollectablePlantUpgrade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantUpgrade::StaticClassInit() */

void CollectablePlantUpgrade::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePlantUpgrade");
    (*pcVar2)(plVar1,asStack_10,FUN_03c64af4,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePlantUpgrade::StaticGetClass() */

long * CollectablePlantUpgrade::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantUpgrade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePlantUpgrade::GetClass() const */

long * CollectablePlantUpgrade::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantUpgrade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantUpgrade::onFinishMotion() */

void __thiscall CollectablePlantUpgrade::onFinishMotion(CollectablePlantUpgrade *this)

{
  undefined *puVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::onFinishMotion((Collectable *)this);
  iVar2 = Collectable::getState((Collectable *)this);
  puVar1 = gMessageRouter;
  if (iVar2 == 1) {
    FUN_05475d88(asStack_10,this + 0x1f0);
    MessageRouter::Post<std::string_const&,std::string>
              ((MessageRouter *)puVar1,Message::TakePlantWeapon,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

