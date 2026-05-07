// Class: GridItemZombossPortal


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossPortal::StaticClassInit() */

void GridItemZombossPortal::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombossPortal");
    (*pcVar2)(plVar1,asStack_10,FUN_03d66c08,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombossPortal::StaticGetClass() */

long * GridItemZombossPortal::StaticGetClass(void)

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
  uVar2 = GridItemZombiePortal::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombossPortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombossPortal::GetClass() const */

long * GridItemZombossPortal::GetClass(void)

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
  uVar2 = GridItemZombiePortal::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombossPortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombossPortal::setZomBoss(Sexy::RtWeakPtr<ZombieWithActions>) */

void __thiscall GridItemZombossPortal::setZomBoss(GridItemZombossPortal *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossPortal::onZombieDied(Zombie*, DamageInfo const*) */

void GridItemZombossPortal::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  ZombieWithActions *pZVar2;
  ZombieWithActions *pZVar3;
  RtMixedPtr<Sexy::Image> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1e8));
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((cVar1 == '\0') && (param_2 != (DamageInfo *)0x0)) {
    pZVar2 = Sexy::RtObject::Cast<ZombieWithActions>((RtObject *)param_2);
    pZVar3 = (ZombieWithActions *)
             Sexy::RtWeakPtr<ZombieWithActions>::GetPtr
                       ((RtWeakPtr<ZombieWithActions> *)(param_1 + 0x1e8));
    if (pZVar2 == pZVar3) {
      (**(code **)(*(long *)param_1 + 0x2a8))(param_1,3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombossPortal::GridItemZombossPortal() */

void __thiscall GridItemZombossPortal::GridItemZombossPortal(GridItemZombossPortal *this)

{
  GridItemZombiePortal::GridItemZombiePortal((GridItemZombiePortal *)this);
  *(undefined ***)this = &PTR_GetClass_0676dbe0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombossPortal_0676deb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  return;
}


/* GridItemZombossPortal::StaticNew() */

GridItemZombossPortal * GridItemZombossPortal::StaticNew(void)

{
  GridItemZombossPortal *this;
  
  this = ::operator_new(0x1f0);
  GridItemZombossPortal(this);
  return this;
}


/* GridItemZombossPortal::~GridItemZombossPortal() */

void __thiscall GridItemZombossPortal::~GridItemZombossPortal(GridItemZombossPortal *this)

{
  *(undefined ***)this = &PTR_GetClass_0676dbe0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombossPortal_0676deb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  GridItemZombiePortal::~GridItemZombiePortal((GridItemZombiePortal *)this);
  return;
}


/* non-virtual thunk to GridItemZombossPortal::~GridItemZombossPortal() */

void __thiscall GridItemZombossPortal::~GridItemZombossPortal(GridItemZombossPortal *this)

{
  ~GridItemZombossPortal(this + -0x10);
  return;
}


/* GridItemZombossPortal::~GridItemZombossPortal() */

void __thiscall GridItemZombossPortal::~GridItemZombossPortal(GridItemZombossPortal *this)

{
  ~GridItemZombossPortal(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombossPortal::~GridItemZombossPortal() */

void __thiscall GridItemZombossPortal::~GridItemZombossPortal(GridItemZombossPortal *this)

{
  ~GridItemZombossPortal(this + -0x10);
  return;
}


/* GridItemZombossPortal::onGridItemInitialize() */

void __thiscall GridItemZombossPortal::onGridItemInitialize(GridItemZombossPortal *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemZombiePortal::onGridItemInitialize((GridItemZombiePortal *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GridItemZombossPortal,void(GridItemZombossPortal::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}

