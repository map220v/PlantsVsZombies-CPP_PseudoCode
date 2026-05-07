// Class: MiniGamePerkItemBowling


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemBowling::StaticClassInit() */

void MiniGamePerkItemBowling::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemBowling");
    (*pcVar2)(plVar1,asStack_10,FUN_03898d2c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemBowling::StaticGetClass() */

long * MiniGamePerkItemBowling::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemBowling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemBowling::GetClass() const */

long * MiniGamePerkItemBowling::GetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemBowling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemBowling::~MiniGamePerkItemBowling() */

void __thiscall MiniGamePerkItemBowling::~MiniGamePerkItemBowling(MiniGamePerkItemBowling *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0940;
  MiniGamePerkItem::~MiniGamePerkItem((MiniGamePerkItem *)this);
  return;
}


/* MiniGamePerkItemBowling::~MiniGamePerkItemBowling() */

void __thiscall MiniGamePerkItemBowling::~MiniGamePerkItemBowling(MiniGamePerkItemBowling *this)

{
  ~MiniGamePerkItemBowling(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemBowling::MiniGamePerkItemBowling() */

void __thiscall MiniGamePerkItemBowling::MiniGamePerkItemBowling(MiniGamePerkItemBowling *this)

{
  MiniGamePerkItem::MiniGamePerkItem((MiniGamePerkItem *)this);
  *(undefined ***)this = &PTR_GetClass_066b0940;
  return;
}


/* MiniGamePerkItemBowling::StaticNew() */

MiniGamePerkItemBowling * MiniGamePerkItemBowling::StaticNew(void)

{
  MiniGamePerkItemBowling *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItemBowling(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemBowling::tryRefill() */

void MiniGamePerkItemBowling::tryRefill(void)

{
  undefined *puVar1;
  string asStack_48 [8];
  string asStack_40 [8];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"tool_projectile_wallnut_explode");
  std::string::string(asStack_40,"tool_projectile_wallnut_primeval");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_38,asStack_48,2,avStack_20);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  nop();
  puVar1 = gMessageRouter;
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,(vector *)avStack_38);
  MessageRouter::
  Post<std::vector<std::string,std::allocator<std::string>>const&,float,std::vector<std::string,std::allocator<std::string>>,float>
            ((MessageRouter *)0x41200000,puVar1,Message::NotifyBowlingRefill,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemBowling::Use() */

void __thiscall MiniGamePerkItemBowling::Use(MiniGamePerkItemBowling *this)

{
  MiniGamePerkItem::Use((MiniGamePerkItem *)this);
  tryRefill();
  return;
}

