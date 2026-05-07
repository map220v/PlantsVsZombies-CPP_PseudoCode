// Class: Reflection::RSymbol


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RSymbol::StaticClassInit() */

void Reflection::RSymbol::StaticClassInit(void)

{
  RtIdProtocol *this;
  RtClass *this_00;
  undefined8 local_40;
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x38);
  Sexy::RtIdProtocol::RtIdProtocol(this);
  local_40 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)FUN_05183cec);
  Sexy::Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet<Sexy::RtId(*)(Sexy::RtObject*)>
            (aDStack_38,(CBFunctionTranslatorX *)&local_40);
  Sexy::RtIdProtocol::SetDelegate(this,(Delegate1wRet *)aDStack_38);
  this_00 = (RtClass *)StaticGetClass();
  Sexy::RtClass::AddProtocol(this_00,(RtProtocol *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Reflection::RSymbol::StaticGetClass() */

long * Reflection::RSymbol::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RSymbol",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Reflection::RSymbol::GetClass() const */

long * Reflection::RSymbol::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RSymbol",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RSymbol::RSymbol() */

void __thiscall Reflection::RSymbol::RSymbol(RSymbol *this)

{
  RtDb *pRVar1;
  long lVar2;
  _func_void *extraout_x1;
  size_t in_x2;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  string asStack_18 [8];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f0b0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 8),extraout_x1);
  TRefNamedSymbolCollection<Reflection::REnum>::TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::REnum> *)(this + 0x10));
  pRVar1 = (RtDb *)Sexy::RtDb::GetDb();
  lVar2 = Sexy::RtDb::GetTable(pRVar1,0x2001);
  if (lVar2 == 0) {
    Sexy::RtDbTable::TableOptions::TableOptions((TableOptions *)aRStack_30);
    Sexy::RtName::operator=(aRStack_28,L"System.ReflectionSymbols");
    std::string::append(asStack_18,"System.ReflectionSymbols",in_x2);
    local_10 = 1;
    pRVar1 = (RtDb *)Sexy::RtDb::GetDb();
    lVar2 = Sexy::RtDb::CreateTable(pRVar1,0x2001,(TableOptions *)aRStack_30);
    Sexy::RtDbTable::TableOptions::~TableOptions((TableOptions *)aRStack_30);
  }
  Sexy::RtDbTable::AllocId(aRStack_30,lVar2,this,2,1,0);
  Sexy::RtId::operator=((RtId *)(this + 8),aRStack_30);
  Sexy::RtId::~RtId(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Reflection::RSymbol::StaticNew() */

RSymbol * Reflection::RSymbol::StaticNew(void)

{
  RSymbol *this;
  
  this = ::operator_new(0x60);
  RSymbol(this);
  return this;
}


/* Reflection::RSymbol::~RSymbol() */

void __thiscall Reflection::RSymbol::~RSymbol(RSymbol *this)

{
  RtDb *this_00;
  RtDbTable *this_01;
  
  *(undefined ***)this = &PTR_GetClass_06a2f0b0;
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,0x2001);
  Sexy::RtDbTable::ReleaseId(this_01,(RtId *)(this + 8));
  TRefNamedSymbolCollection<Reflection::RType>::~TRefNamedSymbolCollection
            ((TRefNamedSymbolCollection<Reflection::RType> *)(this + 0x10));
  Sexy::RtId::~RtId((RtId *)(this + 8));
  nop();
  return;
}


/* Reflection::RSymbol::~RSymbol() */

void __thiscall Reflection::RSymbol::~RSymbol(RSymbol *this)

{
  ~RSymbol(this);
  AK::FreeHook(this);
  return;
}

