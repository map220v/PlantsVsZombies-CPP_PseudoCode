// Class: Reflection::REvent


/* Reflection::REvent::Connect(void*, void*, Reflection::RMethod*) */

char __thiscall
Reflection::REvent::Connect(REvent *this,void *param_1,void *param_2,RMethod *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  RFunctionType *this_00;
  long lVar5;
  RFunctionType *this_01;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_3 != (RMethod *)0x0) && (lVar9 = *(long *)(param_3 + 0xa0), lVar9 != 0)) {
    this_00 = (RFunctionType *)FUN_0517ebec(*(undefined8 *)(param_3 + 0x90));
    lVar5 = FUN_0517eaa4(*(undefined8 *)(this_00 + 0x78));
    uVar3 = FUN_0517e1dc(*(undefined4 *)(lVar9 + 0x20));
    if ((lVar5 != 0) == uVar3) {
      this_01 = (RFunctionType *)FUN_0517ec30(*(undefined8 *)(this + 0x80));
      plVar6 = (long *)FUN_0517eaa8(*(undefined8 *)(this_00 + 0x80));
      uVar7 = FUN_0517eaa8(*(undefined8 *)(this_01 + 0x80));
      cVar1 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,1,0);
      if (cVar1 != '\0') {
        uVar3 = RFunctionType::GetArgTypeCount(this_00);
        uVar4 = RFunctionType::GetArgTypeCount(this_01);
        if (uVar3 == uVar4) {
          uVar3 = 0;
          while( true ) {
            if (uVar4 <= uVar3) {
              lVar9 = *(long *)(param_3 + 0xa0);
              uVar7 = FUN_0517e1e0(*(undefined8 *)(lVar9 + 0x18));
              FUN_0517e1e4((undefined8 *)(lVar9 + 0x18),param_2);
              uVar8 = FUN_0517ec2c(*(undefined4 *)(this + 0x7c));
              (*(code *)**(undefined8 **)((long)param_1 + (uVar8 & 0xffffffff)))
                        ((long)param_1 + (uVar8 & 0xffffffff),*(undefined8 *)(param_3 + 0xa0),0);
              FUN_0517e1e4(*(long *)(param_3 + 0xa0) + 0x18,uVar7);
              return cVar1;
            }
            plVar6 = (long *)RFunctionType::GetArgTypeIndexed(this_00,uVar3);
            uVar7 = RFunctionType::GetArgTypeIndexed(this_01,uVar3);
            cVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,1,0);
            if (cVar2 == '\0') break;
            uVar4 = RFunctionType::GetArgTypeCount(this_00);
            uVar3 = uVar3 + 1;
          }
        }
      }
    }
  }
  return '\0';
}


/* Reflection::REvent::Disconnect(void*, void*, Reflection::RMethod*) */

char __thiscall
Reflection::REvent::Disconnect(REvent *this,void *param_1,void *param_2,RMethod *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  RFunctionType *this_00;
  long lVar5;
  RFunctionType *this_01;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_3 != (RMethod *)0x0) && (lVar9 = *(long *)(param_3 + 0xa0), lVar9 != 0)) {
    this_00 = (RFunctionType *)FUN_0517ebec(*(undefined8 *)(param_3 + 0x90));
    lVar5 = FUN_0517eaa4(*(undefined8 *)(this_00 + 0x78));
    uVar3 = FUN_0517e1dc(*(undefined4 *)(lVar9 + 0x20));
    if ((lVar5 != 0) == uVar3) {
      this_01 = (RFunctionType *)FUN_0517ec30(*(undefined8 *)(this + 0x80));
      plVar6 = (long *)FUN_0517eaa8(*(undefined8 *)(this_00 + 0x80));
      uVar7 = FUN_0517eaa8(*(undefined8 *)(this_01 + 0x80));
      cVar1 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,1,0);
      if (cVar1 != '\0') {
        uVar3 = RFunctionType::GetArgTypeCount(this_00);
        uVar4 = RFunctionType::GetArgTypeCount(this_01);
        if (uVar3 == uVar4) {
          uVar3 = 0;
          while( true ) {
            if (uVar4 <= uVar3) {
              lVar9 = *(long *)(param_3 + 0xa0);
              uVar7 = FUN_0517e1e0(*(undefined8 *)(lVar9 + 0x18));
              FUN_0517e1e4((undefined8 *)(lVar9 + 0x18),param_2);
              uVar8 = FUN_0517ec2c(*(undefined4 *)(this + 0x7c));
              (**(code **)(*(long *)((long)param_1 + (uVar8 & 0xffffffff)) + 8))
                        ((long)param_1 + (uVar8 & 0xffffffff),*(undefined8 *)(param_3 + 0xa0));
              FUN_0517e1e4(*(long *)(param_3 + 0xa0) + 0x18,uVar7);
              return cVar1;
            }
            plVar6 = (long *)RFunctionType::GetArgTypeIndexed(this_00,uVar3);
            uVar7 = RFunctionType::GetArgTypeIndexed(this_01,uVar3);
            cVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,1,0);
            if (cVar2 == '\0') break;
            uVar4 = RFunctionType::GetArgTypeCount(this_00);
            uVar3 = uVar3 + 1;
          }
        }
      }
    }
  }
  return '\0';
}


/* Reflection::REvent::StaticGetClass() */

long * Reflection::REvent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REvent",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REvent::GetClass() const */

long * Reflection::REvent::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REvent",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REvent::Invoke(Sexy::RtInvokeVariant*, void*, std::vector<Sexy::RtInvokeVariant,
   std::allocator<Sexy::RtInvokeVariant> > const&) */

undefined8 __thiscall
Reflection::REvent::Invoke(REvent *this,RtInvokeVariant *param_1,void *param_2,vector *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_2 != (void *)0x0) {
    uVar2 = FUN_0517ec2c(*(undefined4 *)(this + 0x7c));
    pcVar4 = *(code **)(*(long *)((long)param_2 + (uVar2 & 0xffffffff)) + 0x10);
    cVar1 = std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>::empty
                      ((vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>> *)
                       param_3);
    uVar3 = 0;
    if (cVar1 == '\0') {
      uVar3 = FUN_0517f64c(*(undefined8 *)param_3,param_1,0);
    }
    (*pcVar4)((long)param_2 + (uVar2 & 0xffffffff),param_1,uVar3);
    return 1;
  }
  return 0;
}


/* Reflection::REvent::REvent() */

void __thiscall Reflection::REvent::REvent(REvent *this)

{
  RClassMember::RClassMember((RClassMember *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f8c0;
  return;
}


/* Reflection::REvent::StaticNew() */

REvent * Reflection::REvent::StaticNew(void)

{
  REvent *this;
  
  this = ::operator_new(0x88);
  REvent(this);
  return this;
}


/* Reflection::REvent::~REvent() */

void __thiscall Reflection::REvent::~REvent(REvent *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f8c0;
  RClassMember::~RClassMember((RClassMember *)this);
  return;
}


/* Reflection::REvent::~REvent() */

void __thiscall Reflection::REvent::~REvent(REvent *this)

{
  ~REvent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::REvent::StaticInvokeSerialCommand(Sexy::RtSerialRtonReader*,
   Sexy::RtSerialRtonWriter*) */

void Reflection::REvent::StaticInvokeSerialCommand
               (RtSerialRtonReader *param_1,RtSerialRtonWriter *param_2)

{
  RtSerialRtonReader *pRVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  RtId *pRVar5;
  RtObject *this;
  REvent *this_00;
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
  if ((param_1 == (RtSerialRtonReader *)0x0 || param_2 == (RtSerialRtonWriter *)0x0) ||
     (cVar3 = Sexy::RtSerialRtonReader::BeginDocumentObject(param_1), cVar3 == '\0')) {
    cVar3 = '\0';
    goto LAB_05192c70;
  }
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_48,"event");
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
  this_00 = Sexy::RtObject::Cast<Reflection::REvent>(this);
  pRVar5 = (RtId *)Sexy::RtDb::GetDb();
  pvVar6 = (void *)Sexy::RtDb::GetObjectForId(pRVar5);
  if (pvVar6 == (void *)0x0) {
LAB_05192d88:
    Sexy::RtSerialRtonReader::EndDocumentObject(param_1);
    cVar3 = '\0';
  }
  else {
    if (this_00 == (REvent *)0x0) goto LAB_05192d88;
    cVar3 = FUN_0517ec24(*(undefined4 *)(this_00 + 0x78));
    if (cVar3 == '\0') goto LAB_05192d88;
    local_6c = 0;
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
LAB_05192c70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}

