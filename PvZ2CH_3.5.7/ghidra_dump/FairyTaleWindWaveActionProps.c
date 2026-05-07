// Class: FairyTaleWindWaveActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWindWaveActionProps::StaticClassInit() */

void FairyTaleWindWaveActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FairyTaleWindWaveActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04eccab4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleWindWaveActionProps::StaticGetClass() */

long * FairyTaleWindWaveActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleWindWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleWindWaveActionProps::GetClass() const */

long * FairyTaleWindWaveActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleWindWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleWindWaveActionProps::GetActionClass() const */

long * FairyTaleWindWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FairyTaleWindWaveAction::sClass != (long *)0x0) {
    return FairyTaleWindWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FairyTaleWindWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleWindWaveAction",uVar2,FairyTaleWindWaveAction::StaticNew);
  FairyTaleWindWaveAction::StaticClassInit();
  return FairyTaleWindWaveAction::sClass;
}


/* FairyTaleWindWaveActionProps::~FairyTaleWindWaveActionProps() */

void __thiscall
FairyTaleWindWaveActionProps::~FairyTaleWindWaveActionProps(FairyTaleWindWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7890;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* FairyTaleWindWaveActionProps::~FairyTaleWindWaveActionProps() */

void __thiscall
FairyTaleWindWaveActionProps::~FairyTaleWindWaveActionProps(FairyTaleWindWaveActionProps *this)

{
  ~FairyTaleWindWaveActionProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWindWaveActionProps::FairyTaleWindWaveActionProps() */

void __thiscall
FairyTaleWindWaveActionProps::FairyTaleWindWaveActionProps(FairyTaleWindWaveActionProps *this)

{
  undefined8 uVar1;
  bool bVar2;
  string *psVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069f7890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  uVar1 = DAT_06ba2588;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  local_18 = FUN_04ecc7d0(uVar1);
  local_10 = FUN_04ecc820(DAT_06ba2590);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),psVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleWindWaveActionProps::StaticNew() */

FairyTaleWindWaveActionProps * FairyTaleWindWaveActionProps::StaticNew(void)

{
  FairyTaleWindWaveActionProps *this;
  
  this = ::operator_new(0x60);
  FairyTaleWindWaveActionProps(this);
  return this;
}

