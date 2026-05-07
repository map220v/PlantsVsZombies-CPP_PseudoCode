// Class: ZombieElectricProjectileActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElectricProjectileActionDefinition::StaticClassInit() */

void ZombieElectricProjectileActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieElectricProjectileActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047a7a00,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElectricProjectileActionDefinition::StaticGetClass() */

long * ZombieElectricProjectileActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElectricProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElectricProjectileActionDefinition::GetClass() const */

long * ZombieElectricProjectileActionDefinition::GetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElectricProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElectricProjectileActionDefinition::ZombieElectricProjectileActionDefinition() */

void __thiscall
ZombieElectricProjectileActionDefinition::ZombieElectricProjectileActionDefinition
          (ZombieElectricProjectileActionDefinition *this)

{
  ZombieProjectileActionDefinition::ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068e0270;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  return;
}


/* ZombieElectricProjectileActionDefinition::StaticNew() */

ZombieElectricProjectileActionDefinition * ZombieElectricProjectileActionDefinition::StaticNew(void)

{
  ZombieElectricProjectileActionDefinition *this;
  
  this = ::operator_new(0x88);
  ZombieElectricProjectileActionDefinition(this);
  return this;
}


/* ZombieElectricProjectileActionDefinition::~ZombieElectricProjectileActionDefinition() */

void __thiscall
ZombieElectricProjectileActionDefinition::~ZombieElectricProjectileActionDefinition
          (ZombieElectricProjectileActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068e0270;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  return;
}


/* ZombieElectricProjectileActionDefinition::~ZombieElectricProjectileActionDefinition() */

void __thiscall
ZombieElectricProjectileActionDefinition::~ZombieElectricProjectileActionDefinition
          (ZombieElectricProjectileActionDefinition *this)

{
  ~ZombieElectricProjectileActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047a81ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieElectricProjectileActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieElectricProjectileActionDefinition::TryStartAction
          (undefined8 param_1,RtWeakPtrBase *param_2,long *param_3)

{
  ZombieWithActions *pZVar1;
  code *pcVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*param_3 + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pZVar1 = (ZombieWithActions *)(*pcVar2)(param_3,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (pZVar1 != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,param_2);
    ZombieWithActions::QueueAction<ZombieElectricProjectileActionHandler>(pZVar1,avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar1 != (ZombieWithActions *)0x0);
  }
  return;
}

