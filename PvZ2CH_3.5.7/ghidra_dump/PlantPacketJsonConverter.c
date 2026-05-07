// Class: PlantPacketJsonConverter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPacketJsonConverter::SerializeJson(std::string const&) */

void __thiscall
PlantPacketJsonConverter::SerializeJson(PlantPacketJsonConverter *this,string *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x38);
  std::string::string(asStack_10,"d");
  uVar1 = (*pcVar2)(this,param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPacketJsonConverter::SerializeObj() */

void PlantPacketJsonConverter::SerializeObj(void)

{
  long *in_x0;
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  pcVar1 = *(code **)(*in_x0 + 0x40);
  std::string::string(asStack_10,"d");
  (*pcVar1)();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPacketJsonConverter::StaticClassInit() */

void PlantPacketJsonConverter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPacketJsonConverter");
    (*pcVar2)(plVar1,asStack_10,FUN_04d90c0c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPacketJsonConverter::StaticGetClass() */

long * PlantPacketJsonConverter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPacketJsonConverter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPacketJsonConverter::GetClass() const */

long * PlantPacketJsonConverter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPacketJsonConverter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPacketJsonConverter::PlantPacketJsonConverter() */

void __thiscall PlantPacketJsonConverter::PlantPacketJsonConverter(PlantPacketJsonConverter *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069ba2c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* PlantPacketJsonConverter::StaticNew() */

PlantPacketJsonConverter * PlantPacketJsonConverter::StaticNew(void)

{
  PlantPacketJsonConverter *this;
  
  this = ::operator_new(0x20);
  PlantPacketJsonConverter(this);
  return this;
}


/* PlantPacketJsonConverter::~PlantPacketJsonConverter() */

void __thiscall PlantPacketJsonConverter::~PlantPacketJsonConverter(PlantPacketJsonConverter *this)

{
  *(undefined ***)this = &PTR_GetClass_069ba2c0;
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 8));
  nop();
  return;
}


/* PlantPacketJsonConverter::~PlantPacketJsonConverter() */

void __thiscall PlantPacketJsonConverter::~PlantPacketJsonConverter(PlantPacketJsonConverter *this)

{
  ~PlantPacketJsonConverter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPacketJsonConverter::FillData(std::vector<std::vector<std::string,
   std::allocator<std::string > >, std::allocator<std::vector<std::string,
   std::allocator<std::string > > > >) */

void __thiscall
PlantPacketJsonConverter::FillData(PlantPacketJsonConverter *this,undefined8 *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::clear((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
           *)(this + 8));
  uVar4 = 0;
  while( true ) {
    uVar5 = *param_2;
    uVar3 = FUN_04d8c3cc(uVar5,param_2[1]);
    if (uVar3 <= uVar4) break;
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_04d8c3e0(uVar5,uVar4);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar1);
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_04d8c3e0(*param_2,uVar4);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar1);
    std::vector<std::string,std::allocator<std::string>>::
    vector<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
              (avStack_20,uVar5,uVar2,auStack_28);
    std::
    vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
    ::push_back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                 *)(this + 8),(vector *)avStack_20);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

