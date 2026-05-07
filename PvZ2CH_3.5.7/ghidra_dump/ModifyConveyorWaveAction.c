// Class: ModifyConveyorWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModifyConveyorWaveAction::StaticClassInit() */

void ModifyConveyorWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ModifyConveyorWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_03c75884,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ModifyConveyorWaveAction::StaticGetClass() */

long * ModifyConveyorWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ModifyConveyorWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ModifyConveyorWaveAction::ModifyConveyorWaveAction() */

void __thiscall ModifyConveyorWaveAction::ModifyConveyorWaveAction(ModifyConveyorWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0675a130;
  return;
}


/* ModifyConveyorWaveAction::StaticNew() */

ModifyConveyorWaveAction * ModifyConveyorWaveAction::StaticNew(void)

{
  ModifyConveyorWaveAction *this;
  
  this = ::operator_new(0x18);
  ModifyConveyorWaveAction(this);
  return this;
}


/* ModifyConveyorWaveAction::~ModifyConveyorWaveAction() */

void __thiscall ModifyConveyorWaveAction::~ModifyConveyorWaveAction(ModifyConveyorWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0675a130;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* ModifyConveyorWaveAction::~ModifyConveyorWaveAction() */

void __thiscall ModifyConveyorWaveAction::~ModifyConveyorWaveAction(ModifyConveyorWaveAction *this)

{
  ~ModifyConveyorWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* ModifyConveyorWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ModifyConveyorWaveAction::AddResourceRequirements(ModifyConveyorWaveAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  long lVar3;
  RtWeakPtr *this_00;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  uVar6 = 0;
  uVar7 = *(undefined8 *)(pFVar2 + 0x40);
  lVar3 = FUN_03c74f44(uVar7,*(undefined8 *)(pFVar2 + 0x48));
  if (lVar3 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_03c74f80(uVar7,uVar6);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_03c74f80(*(undefined8 *)(pFVar2 + 0x40),uVar6);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(pFVar2 + 0x40);
      uVar4 = FUN_03c74f44(uVar7,*(undefined8 *)(pFVar2 + 0x48));
    } while (uVar6 < uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModifyConveyorWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void ModifyConveyorWaveAction::WaveStart(WaveAction *param_1)

{
  undefined *puVar1;
  bool bVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  ConveyorAddSeedInstruction *pCVar4;
  ConveyorRemoveSeedInstruction *pCVar5;
  undefined8 local_50;
  undefined8 local_48;
  ConveyorAddSeedInstruction aCStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  local_50 = FUN_03c76834(*(undefined8 *)(pFVar3 + 0x40));
  local_48 = FUN_03c76884(*(undefined8 *)(pFVar3 + 0x48));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    pCVar4 = (ConveyorAddSeedInstruction *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    puVar1 = gMessageRouter;
    ConveyorAddSeedInstruction::ConveyorAddSeedInstruction(aCStack_40,pCVar4);
    MessageRouter::Broadcast<ConveyorAddSeedInstruction_const&,ConveyorAddSeedInstruction>
              ((MessageRouter *)puVar1,Message::ConveyorAddSeed,aCStack_40);
    ZombieWarningInfo::~ZombieWarningInfo((ZombieWarningInfo *)aCStack_40);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_50);
  }
  local_50 = FUN_03c768d4(*(undefined8 *)(pFVar3 + 0x58));
  local_48 = FUN_03c76924(*(undefined8 *)(pFVar3 + 0x60));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    pCVar5 = (ConveyorRemoveSeedInstruction *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    puVar1 = gMessageRouter;
    ConveyorRemoveSeedInstruction::ConveyorRemoveSeedInstruction
              ((ConveyorRemoveSeedInstruction *)aCStack_40,pCVar5);
    MessageRouter::Broadcast<ConveyorRemoveSeedInstruction_const&,ConveyorRemoveSeedInstruction>
              ((MessageRouter *)puVar1,Message::ConveyorRemoveSeed,
               (ConveyorRemoveSeedInstruction *)aCStack_40);
    ZombieWarningInfo::~ZombieWarningInfo((ZombieWarningInfo *)aCStack_40);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
  }
  WaveAction::notifyWaveEvents(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ModifyConveyorWaveAction::gatherSeedBankPlantTypes(std::set<Sexy::RtWeakPtr<PlantType const>,
   std::less<Sexy::RtWeakPtr<PlantType const> >, std::allocator<Sexy::RtWeakPtr<PlantType const> >
   >*) */

void __thiscall
ModifyConveyorWaveAction::gatherSeedBankPlantTypes(ModifyConveyorWaveAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  RtWeakPtr *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_03c76834(*(undefined8 *)(pFVar2 + 0x40));
  local_10 = FUN_03c76884(*(undefined8 *)(pFVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      std::
      set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::insert((set<Sexy::RtWeakPtr<PlantType_const>,std::less<Sexy::RtWeakPtr<PlantType_const>>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                *)param_1,this_00);
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

