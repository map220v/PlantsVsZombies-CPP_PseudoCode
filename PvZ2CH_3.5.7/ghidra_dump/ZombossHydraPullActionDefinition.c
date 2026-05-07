// Class: ZombossHydraPullActionDefinition


/* ZombossHydraPullActionDefinition::~ZombossHydraPullActionDefinition() */

void __thiscall
ZombossHydraPullActionDefinition::~ZombossHydraPullActionDefinition
          (ZombossHydraPullActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e430;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossHydraPullActionDefinition::~ZombossHydraPullActionDefinition() */

void __thiscall
ZombossHydraPullActionDefinition::~ZombossHydraPullActionDefinition
          (ZombossHydraPullActionDefinition *this)

{
  ~ZombossHydraPullActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionDefinition::StaticClassInit() */

void ZombossHydraPullActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraPullActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f51eec,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraPullActionDefinition::StaticGetClass() */

long * ZombossHydraPullActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraPullActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraPullActionDefinition::GetClass() const */

long * ZombossHydraPullActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraPullActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionDefinition::FindTargetsInFrontOfFan(ZombieZombossMech_Hydra*,
   BoardEntityTypeFlag, std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) const */

void __thiscall
ZombossHydraPullActionDefinition::FindTargetsInFrontOfFan
          (undefined8 param_1_00,long *param_1,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [4];
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_1 + 400))(auStack_28,param_1);
  Sexy::Insets::Insets(aIStack_18,0,local_24 + -1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),2);
  EntityFinder::GetEntitiesInGridSquares(param_4,param_3,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraPullActionDefinition::ZombossHydraPullActionDefinition() */

void __thiscall
ZombossHydraPullActionDefinition::ZombossHydraPullActionDefinition
          (ZombossHydraPullActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_06a1e430;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0x42c80000;
  *(undefined4 *)(this + 0x40) = 0x3dcccccd;
  return;
}


/* ZombossHydraPullActionDefinition::StaticNew() */

ZombossHydraPullActionDefinition * ZombossHydraPullActionDefinition::StaticNew(void)

{
  ZombossHydraPullActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombossHydraPullActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f5e43c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossHydraPullActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossHydraPullActionDefinition::TryStartAction
          (ZombossHydraPullActionDefinition *this,RtWeakPtrBase *param_2)

{
  bool bVar1;
  ulong uVar2;
  Plant *this_00;
  undefined8 extraout_x0;
  ZombieWithActions *pZVar3;
  int extraout_w1;
  undefined1 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar2,0x2c);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
        uVar2 = Plant::IsInPlantFoodState(this_00);
      }
      else {
        uVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
      }
      if ((uVar2 & 0xff) != 0) {
        uVar4 = 0;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
        goto LAB_04f5e3c8;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28);
    } while (bVar1);
  }
  uVar4 = (undefined1)uVar2;
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_28);
  nop();
  FindTargetsInFrontOfFan(this,extraout_x0,1,(Iterator *)&local_28);
  pZVar3 = (ZombieWithActions *)FUN_04f50f94(local_28,local_20);
  if (pZVar3 != (ZombieWithActions *)0x0) {
    uVar4 = 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,param_2);
    ZombieWithActions::QueueAction<ZombossHydraPullActionHandler>
              (pZVar3,(RtWeakPtr<Sexy::SoundResource> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_28);
LAB_04f5e3c8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

