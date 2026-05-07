// Class: MarigoldGameSystem


/* MarigoldGameSystem::~MarigoldGameSystem() */

void __thiscall MarigoldGameSystem::~MarigoldGameSystem(MarigoldGameSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067bdf00;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MarigoldGameSystem::~MarigoldGameSystem() */

void __thiscall MarigoldGameSystem::~MarigoldGameSystem(MarigoldGameSystem *this)

{
  ~MarigoldGameSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarigoldGameSystem::StaticClassInit() */

void MarigoldGameSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"MarigoldGameSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04047664,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MarigoldGameSystem::StaticGetClass() */

long * MarigoldGameSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MarigoldGameSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MarigoldGameSystem::GetClass() const */

long * MarigoldGameSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MarigoldGameSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MarigoldGameSystem::MarigoldGameSystem() */

void __thiscall MarigoldGameSystem::MarigoldGameSystem(MarigoldGameSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067bdf00;
  return;
}


/* MarigoldGameSystem::StaticNew() */

MarigoldGameSystem * MarigoldGameSystem::StaticNew(void)

{
  MarigoldGameSystem *this;
  
  this = ::operator_new(0x18);
  MarigoldGameSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarigoldGameSystem::onInitialized() */

void __thiscall MarigoldGameSystem::onInitialized(MarigoldGameSystem *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x10) = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (lVar1 != 0) {
    lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_10,(RtWeakPtr *)(lVar1 + 0xa0));
  }
  Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  *(undefined4 *)(this + 0x14) = 0;
  Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarigoldGameSystem::AssociateWithSubSystem(Sexy::RtWeakPtr<Sexy::RtObject>) */

void __thiscall
MarigoldGameSystem::AssociateWithSubSystem(MarigoldGameSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  PlantMarigold *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  cVar1 = FUN_040472d8(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  if (cVar1 == '\0') {
    PlantMarigold::PutToSleep(this_00);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

