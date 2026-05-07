// Class: Reflection::RMethod


/* Reflection::RMethod::StaticGetClass() */

long * Reflection::RMethod::StaticGetClass(void)

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
  uVar2 = RClassMember::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RMethod",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RMethod::GetClass() const */

long * Reflection::RMethod::GetClass(void)

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
  uVar2 = RClassMember::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RMethod",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RMethod::RMethod() */

void __thiscall Reflection::RMethod::RMethod(RMethod *this)

{
  RClassMember::RClassMember((RClassMember *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f860;
  return;
}


/* Reflection::RMethod::StaticNew() */

RMethod * Reflection::RMethod::StaticNew(void)

{
  RMethod *this;
  
  this = ::operator_new(0xa8);
  RMethod(this);
  return this;
}


/* Reflection::RMethod::~RMethod() */

void __thiscall Reflection::RMethod::~RMethod(RMethod *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f860;
  RClassMember::~RClassMember((RClassMember *)this);
  return;
}


/* Reflection::RMethod::~RMethod() */

void __thiscall Reflection::RMethod::~RMethod(RMethod *this)

{
  ~RMethod(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RMethod::Invoke(Sexy::RtInvokeVariant*, void*, std::vector<Sexy::RtInvokeVariant,
   std::allocator<Sexy::RtInvokeVariant> > const&) */

void __thiscall
Reflection::RMethod::Invoke(RMethod *this,RtInvokeVariant *param_1,void *param_2,vector *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  RtInvokeVariant *pRVar5;
  DelegateBase *this_00;
  undefined8 *puVar6;
  undefined8 local_40;
  undefined8 local_38;
  RtInvokeVariant aRStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = *(DelegateBase **)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  if (this_00 == (DelegateBase *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_0517ebec(*(undefined8 *)(this + 0x90));
    lVar3 = FUN_0517eaa4(*(undefined8 *)(lVar3 + 0x78));
    if ((lVar3 == 0) || (iVar2 = FUN_0517e1dc(*(undefined4 *)(this_00 + 0x20)), iVar2 != 0)) {
      cVar1 = std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::empty
                        ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                         param_3);
      pRVar5 = (RtInvokeVariant *)0x0;
      if (cVar1 == '\0') {
        pRVar5 = (RtInvokeVariant *)FUN_0517f64c(*(undefined8 *)param_3);
      }
      Sexy::DelegateBase::Invoke(this_00,param_2,param_1,pRVar5);
      uVar4 = 1;
    }
    else {
      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::vector
                ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)local_20,
                 param_3);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_38,(__normal_iterator *)&local_40);
      Sexy::RtInvokeVariant::RtInvokeVariant(aRStack_30,param_2);
      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::insert
                ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)local_20,
                 local_38,aRStack_30);
      puVar6 = *(undefined8 **)(this + 0xa0);
      uVar4 = FUN_0517f650(local_20[0]);
      (**(code **)*puVar6)(puVar6,param_1,uVar4);
      std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::~vector
                ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)local_20);
      uVar4 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RMethod::StaticInvokeSerialCommand(Sexy::RtSerialRtonReader*,
   Sexy::RtSerialRtonWriter*) */

void Reflection::RMethod::StaticInvokeSerialCommand
               (RtSerialRtonReader *param_1,RtSerialRtonWriter *param_2)

{
  RtSerialRtonReader *pRVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  RtId *pRVar5;
  RtObject *this;
  RMethod *this_00;
  void *pvVar6;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  uint local_6c;
  RtId aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [16];
  RtSerialRtonKey aRStack_48 [24];
  exception_ptr aeStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = (uint)(param_1 == (RtSerialRtonReader *)0x0 || param_2 == (RtSerialRtonWriter *)0x0);
  if ((uVar2 != 0) ||
     (cVar3 = Sexy::RtSerialRtonReader::BeginDocumentObject(param_1), cVar3 == '\0')) {
    cVar3 = '\0';
    goto LAB_05193ec0;
  }
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_48,"method");
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_30,extraout_x1);
  Sexy::RtSerialRtonReader::ReadRtId((RtSerialRtonKey *)param_1,(RtId *)aRStack_48);
  Sexy::RtId::~RtId((RtId *)aeStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_48);
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_48,"this");
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_30,extraout_x1_00);
  Sexy::RtSerialRtonReader::ReadRtId((RtSerialRtonKey *)param_1,(RtId *)aRStack_48);
  Sexy::RtId::~RtId((RtId *)aeStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_48);
  pRVar5 = (RtId *)Sexy::RtDb::GetDb();
  this = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar5);
  this_00 = Sexy::RtObject::Cast<Reflection::RMethod>(this);
  pRVar5 = (RtId *)Sexy::RtDb::GetDb();
  pvVar6 = (void *)Sexy::RtDb::GetObjectForId(pRVar5);
  if (this_00 == (RMethod *)0x0) {
LAB_05194168:
    Sexy::RtSerialRtonReader::EndDocumentObject(param_1);
    cVar3 = '\0';
  }
  else {
    cVar3 = FUN_0517ec0c(*(undefined4 *)(this_00 + 0x78),pvVar6 != (void *)0x0);
    if (cVar3 == '\0') goto LAB_05194168;
    local_6c = uVar2;
    Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aeStack_30,"args");
    cVar4 = Sexy::RtSerialRtonReader::BeginArray(param_1,(RtSerialRtonKey *)aeStack_30,&local_6c);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aeStack_30);
    Sexy::RtSerialRtonWriter::BeginDocumentObject(param_2);
    Sexy::RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)aeStack_30,"returns");
    Sexy::RtSerialRtonWriter::BeginObject(param_2,(RtSerialRtonKey *)aeStack_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aeStack_30);
    uVar2 = local_6c;
    pRVar1 = param_1;
    if (cVar4 == '\0') {
      pRVar1 = (RtSerialRtonReader *)0x0;
    }
    std::string::string(asStack_58,"");
    std::string::string((string *)aRStack_48,"*");
    Sexy::RtSerialCommand::RtSerialCommand
              ((RtSerialCommand *)aeStack_30,uVar2,pRVar1,param_2,asStack_58,(string *)aRStack_48);
    std::string::~string((string *)aRStack_48);
    nop();
    std::string::~string(asStack_58);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_48);
    Sexy::RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)asStack_58,(wchar_t *)aeStack_30);
    std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::push_back
              ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)aRStack_48,
               (RtInvokeVariant *)asStack_58);
    Sexy::RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)asStack_58);
    Invoke(this_00,(RtInvokeVariant *)asStack_58,pvVar6,(vector *)aRStack_48);
    std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::~vector
              ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)aRStack_48);
    Sexy::RtSerialCommand::~RtSerialCommand((RtSerialCommand *)aeStack_30);
    Sexy::RtSerialRtonWriter::EndObject(param_2);
    Sexy::RtSerialRtonWriter::EndDocumentObject(param_2);
    if (cVar4 != '\0') {
      Sexy::RtSerialRtonReader::EndArray(param_1);
    }
    Sexy::RtSerialRtonReader::EndDocumentObject(param_1);
  }
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtId::~RtId(aRStack_68);
LAB_05193ec0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

