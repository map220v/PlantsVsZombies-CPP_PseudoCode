// Class: AdaptorNewPVPUpperTrainingBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPUpperTrainingBoard::StaticClassInit() */

void AdaptorNewPVPUpperTrainingBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPUpperTrainingBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_034bdb50,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPUpperTrainingBoard::StaticGetClass() */

long * AdaptorNewPVPUpperTrainingBoard::StaticGetClass(void)

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
  uVar2 = AdaptorNewPVPTrainingBoard::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPUpperTrainingBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPUpperTrainingBoard::GetClass() const */

long * AdaptorNewPVPUpperTrainingBoard::GetClass(void)

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
  uVar2 = AdaptorNewPVPTrainingBoard::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPUpperTrainingBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPUpperTrainingBoard::AdaptorNewPVPUpperTrainingBoard() */

void __thiscall
AdaptorNewPVPUpperTrainingBoard::AdaptorNewPVPUpperTrainingBoard
          (AdaptorNewPVPUpperTrainingBoard *this)

{
  AdaptorNewPVPTrainingBoard::AdaptorNewPVPTrainingBoard((AdaptorNewPVPTrainingBoard *)this);
  *(undefined ***)this = &PTR_GetClass_0664a030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664a3a0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a3e8;
  return;
}


/* AdaptorNewPVPUpperTrainingBoard::StaticNew() */

AdaptorNewPVPUpperTrainingBoard * AdaptorNewPVPUpperTrainingBoard::StaticNew(void)

{
  AdaptorNewPVPUpperTrainingBoard *this;
  
  this = ::operator_new(0x160);
  AdaptorNewPVPUpperTrainingBoard(this);
  return this;
}


/* AdaptorNewPVPUpperTrainingBoard::~AdaptorNewPVPUpperTrainingBoard() */

void __thiscall
AdaptorNewPVPUpperTrainingBoard::~AdaptorNewPVPUpperTrainingBoard
          (AdaptorNewPVPUpperTrainingBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_0664a030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664a3a0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a3e8;
  AdaptorNewPVPTrainingBoard::~AdaptorNewPVPTrainingBoard((AdaptorNewPVPTrainingBoard *)this);
  return;
}


/* AdaptorNewPVPUpperTrainingBoard::~AdaptorNewPVPUpperTrainingBoard() */

void __thiscall
AdaptorNewPVPUpperTrainingBoard::~AdaptorNewPVPUpperTrainingBoard
          (AdaptorNewPVPUpperTrainingBoard *this)

{
  ~AdaptorNewPVPUpperTrainingBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPUpperTrainingBoard::fillEntries() */

void __thiscall AdaptorNewPVPUpperTrainingBoard::fillEntries(AdaptorNewPVPUpperTrainingBoard *this)

{
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorNewPVPTrainingEntryConfig *pAVar1;
  AdaptorNewPVPUpperTrainingEntry *this_01;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  AdaptorNewPVPUpperTrainingEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"ZombieLevelUpInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  nop();
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x140);
    uVar2 = FUN_034b0524(uVar4,*(undefined8 *)(this + 0x148));
    if (uVar2 <= uVar3) break;
    pAVar1 = (AdaptorNewPVPTrainingEntryConfig *)FUN_034b0530(uVar4,uVar3);
    this_01 = ::operator_new(0x158);
    AdaptorNewPVPUpperTrainingEntry::AdaptorNewPVPUpperTrainingEntry(this_01);
    local_10 = this_01;
    AdaptorNewPVPTrainingEntry::Configure((AdaptorNewPVPTrainingEntry *)this_01,extraout_x0,pAVar1);
    std::vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>>::push_back
              ((vector<AdaptorNewPVPTrainingEntry*,std::allocator<AdaptorNewPVPTrainingEntry*>> *)
               (this + 0x128),(AdaptorNewPVPTrainingEntry **)&local_10);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
    FUN_034ad870((HotUIAdaptor *)(local_10 + 0x150),*(undefined8 *)(this + 0x158));
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

