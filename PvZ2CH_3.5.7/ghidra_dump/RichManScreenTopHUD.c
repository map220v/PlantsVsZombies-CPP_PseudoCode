// Class: RichManScreenTopHUD


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManScreenTopHUD::Open() */

void RichManScreenTopHUD::Open(void)

{
  bool bVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  long *extraout_x0;
  PVZDB *this;
  CLuaEngine *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)&UIWidget::m_mouseFocusWidget,(RtWeakPtr *)a_Stack_28)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(a_Stack_28,uVar2,0x24);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)a_Stack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)a_Stack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    if (pRVar3 != (ResourceInfo *)0x0) {
      nop();
      (**(code **)(*extraout_x0 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)a_Stack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)a_Stack_28);
  this = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::RunDeferredDeletions(this);
  this_00 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr();
  Lua::CLuaEngine::ExecuteTableFunction(this_00,"luaApp","ResetUIWidget");
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManScreenTopHUD::GetClass() const */

long * RichManScreenTopHUD::GetClass(void)

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
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"RichManScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RichManScreenTopHUD::~RichManScreenTopHUD() */

void __thiscall RichManScreenTopHUD::~RichManScreenTopHUD(RichManScreenTopHUD *this)

{
  *(undefined ***)this = &PTR_GetClass_066bccc0;
  PVZGameStateTopHUDController::~PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  return;
}


/* RichManScreenTopHUD::~RichManScreenTopHUD() */

void __thiscall RichManScreenTopHUD::~RichManScreenTopHUD(RichManScreenTopHUD *this)

{
  ~RichManScreenTopHUD(this);
  AK::FreeHook(this);
  return;
}


/* RichManScreenTopHUD::RichManScreenTopHUD() */

void __thiscall RichManScreenTopHUD::RichManScreenTopHUD(RichManScreenTopHUD *this)

{
  PVZGameStateTopHUDController::PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  *(undefined ***)this = &PTR_GetClass_066bccc0;
  return;
}


/* RichManScreenTopHUD::StaticNew() */

RichManScreenTopHUD * RichManScreenTopHUD::StaticNew(void)

{
  RichManScreenTopHUD *this;
  
  this = ::operator_new(0xe0);
  RichManScreenTopHUD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManScreenTopHUD::StaticClassInit() */

void RichManScreenTopHUD::StaticClassInit(void)

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
    std::string::string(asStack_10,"RichManScreenTopHUD");
    (*pcVar2)(plVar1,asStack_10,FUN_038e2f24,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichManScreenTopHUD::StaticGetClass() */

long * RichManScreenTopHUD::StaticGetClass(void)

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
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"RichManScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

