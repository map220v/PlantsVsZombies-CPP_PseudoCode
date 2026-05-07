// Class: ZombieDropZombiesOnBoardActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionDefinition::StaticClassInit() */

void ZombieDropZombiesOnBoardActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDropZombiesOnBoardActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04632430,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionDefinition::ZombieDropZombiesOnBoardActionDefinition() */

void __thiscall
ZombieDropZombiesOnBoardActionDefinition::ZombieDropZombiesOnBoardActionDefinition
          (ZombieDropZombiesOnBoardActionDefinition *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR_GetClass_0687f170;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (ZombieDropZombiesOnBoardActionDefinition)0x0;
  this[0x4d] = (ZombieDropZombiesOnBoardActionDefinition)0x0;
  Set8BytesTo0(this + 0x50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  Set8BytesTo0(this + 0x90);
  Set8BytesTo0(this + 0x98);
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  std::string::string((string *)(this + 0xb0),
                      "Play_Zomb_LostCity_Zomboss_ZombieDrop_Lever_AirStrike");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDropZombiesOnBoardActionDefinition::StaticNew() */

ZombieDropZombiesOnBoardActionDefinition * ZombieDropZombiesOnBoardActionDefinition::StaticNew(void)

{
  ZombieDropZombiesOnBoardActionDefinition *this;
  
  this = ::operator_new(0xb8);
  ZombieDropZombiesOnBoardActionDefinition(this);
  return this;
}


/* ZombieDropZombiesOnBoardActionDefinition::~ZombieDropZombiesOnBoardActionDefinition() */

void __thiscall
ZombieDropZombiesOnBoardActionDefinition::~ZombieDropZombiesOnBoardActionDefinition
          (ZombieDropZombiesOnBoardActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f170;
  std::string::~string((string *)(this + 0xb0));
  std::string::~string((string *)(this + 0xa8));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieDropZombiesOnBoardActionDefinition::~ZombieDropZombiesOnBoardActionDefinition() */

void __thiscall
ZombieDropZombiesOnBoardActionDefinition::~ZombieDropZombiesOnBoardActionDefinition
          (ZombieDropZombiesOnBoardActionDefinition *this)

{
  ~ZombieDropZombiesOnBoardActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombieDropZombiesOnBoardActionDefinition::GatherResourceRequirements
          (ZombieDropZombiesOnBoardActionDefinition *this,set *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  ulong uVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_0462d7b4(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_0462d7c0(*(undefined8 *)(this + 0x58),uVar3);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    ZombieType::AddInGameResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04631358 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieDropZombiesOnBoardActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieDropZombiesOnBoardActionDefinition::TryStartAction
          (ZombieDropZombiesOnBoardActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieDropZombiesOnBoardActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZombieDropZombiesOnBoardActionDefinition::StaticGetClass() */

long * ZombieDropZombiesOnBoardActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDropZombiesOnBoardActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDropZombiesOnBoardActionDefinition::GetClass() const */

long * ZombieDropZombiesOnBoardActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDropZombiesOnBoardActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

