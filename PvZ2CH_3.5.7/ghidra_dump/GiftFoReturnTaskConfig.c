// Class: GiftFoReturnTaskConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnTaskConfig::StaticClassInit() */

void GiftFoReturnTaskConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiftFoReturnTaskConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03a774b8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnTaskConfig::StaticGetClass() */

long * GiftFoReturnTaskConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTaskConfig::GetClass() const */

long * GiftFoReturnTaskConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"GiftFoReturnTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiftFoReturnTaskConfig::GiftFoReturnTaskConfig() */

void __thiscall GiftFoReturnTaskConfig::GiftFoReturnTaskConfig(GiftFoReturnTaskConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670d360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* GiftFoReturnTaskConfig::StaticNew() */

GiftFoReturnTaskConfig * GiftFoReturnTaskConfig::StaticNew(void)

{
  GiftFoReturnTaskConfig *this;
  
  this = ::operator_new(0x20);
  GiftFoReturnTaskConfig(this);
  return this;
}


/* GiftFoReturnTaskConfig::~GiftFoReturnTaskConfig() */

void __thiscall GiftFoReturnTaskConfig::~GiftFoReturnTaskConfig(GiftFoReturnTaskConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d360;
  std::
  vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
  ::~vector((vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
             *)(this + 8));
  nop();
  return;
}


/* GiftFoReturnTaskConfig::~GiftFoReturnTaskConfig() */

void __thiscall GiftFoReturnTaskConfig::~GiftFoReturnTaskConfig(GiftFoReturnTaskConfig *this)

{
  ~GiftFoReturnTaskConfig(this);
  AK::FreeHook(this);
  return;
}

