// Class: Sexy::BaseResource


/* Sexy::BaseResource::GetRtId() */

RtId * Sexy::BaseResource::GetRtId(void)

{
  long in_x0;
  RtId *in_x8;
  
  RtId::RtId(in_x8,(RtId *)(in_x0 + 8));
  return in_x8;
}


/* Sexy::BaseResource::BaseResource() */

void __thiscall Sexy::BaseResource::BaseResource(BaseResource *this)

{
  _func_void *extraout_x1;
  
  RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06a302a0;
  std::__exception_ptr::exception_ptr::exception_ptr
            ((exception_ptr *)(this + 8),(_func_void *)&PTR_GetClass_06a302a0);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x10),extraout_x1);
  return;
}


/* Sexy::BaseResource::~BaseResource() */

void __thiscall Sexy::BaseResource::~BaseResource(BaseResource *this)

{
  *(undefined ***)this = &PTR_GetClass_06a302a0;
  RtId::~RtId((RtId *)(this + 0x10));
  RtId::~RtId((RtId *)(this + 8));
  nop();
  return;
}


/* Sexy::BaseResource::~BaseResource() */

void __thiscall Sexy::BaseResource::~BaseResource(BaseResource *this)

{
  ~BaseResource(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseResource::TEMPNAMEPLACEHOLDERVALUE(Sexy::BaseResource const&) */

BaseResource * __thiscall Sexy::BaseResource::operator=(BaseResource *this,BaseResource *param_1)

{
  RtId::operator=((RtId *)(this + 8),(RtId *)(param_1 + 8));
  RtId::operator=((RtId *)(this + 0x10),(RtId *)(param_1 + 0x10));
  return this;
}


/* Sexy::BaseResource::GetResourceInfoRtId() */

RtId * Sexy::BaseResource::GetResourceInfoRtId(void)

{
  long in_x0;
  RtId *in_x8;
  
  RtId::RtId(in_x8,(RtId *)(in_x0 + 0x10));
  return in_x8;
}


/* Sexy::BaseResource::StaticNew() */

BaseResource * Sexy::BaseResource::StaticNew(void)

{
  BaseResource *this;
  
  this = ::operator_new(0x18);
  BaseResource(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResource::GetRegistrationType() */

void Sexy::BaseResource::GetRegistrationType(void)

{
  int iVar1;
  undefined4 uVar2;
  RtId aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetRtId();
  iVar1 = RtId::GetTableIndex(aRStack_10);
  if (iVar1 - 0x2006U < 3) {
    uVar2 = *(undefined4 *)(&DAT_05757080 + (ulong)(iVar1 - 0x2006U) * 4);
  }
  RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseResource::StaticClassInit() */

void Sexy::BaseResource::StaticClassInit(void)

{
  RtIdProtocol *this;
  RtClass *this_00;
  undefined8 local_40;
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x38);
  RtIdProtocol::RtIdProtocol(this);
  local_40 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)FUN_051a4b7c);
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet<Sexy::RtId(*)(Sexy::RtObject*)>
            (aDStack_38,(CBFunctionTranslatorX *)&local_40);
  RtIdProtocol::SetDelegate(this,(Delegate1wRet *)aDStack_38);
  this_00 = (RtClass *)StaticGetClass();
  RtClass::AddProtocol(this_00,(RtProtocol *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BaseResource::StaticGetClass() */

long * Sexy::BaseResource::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BaseResource",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::BaseResource::GetClass() const */

long * Sexy::BaseResource::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"BaseResource",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

