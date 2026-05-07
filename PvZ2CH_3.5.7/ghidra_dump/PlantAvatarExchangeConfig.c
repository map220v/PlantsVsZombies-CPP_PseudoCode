// Class: PlantAvatarExchangeConfig


/* PlantAvatarExchangeConfig::PlantAvatarExchangeConfig() */

void __thiscall
PlantAvatarExchangeConfig::PlantAvatarExchangeConfig(PlantAvatarExchangeConfig *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0673a270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantAvatarExchangeConfig::~PlantAvatarExchangeConfig() */

void __thiscall
PlantAvatarExchangeConfig::~PlantAvatarExchangeConfig(PlantAvatarExchangeConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0673a270;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlantAvatarExchangeConfig::~PlantAvatarExchangeConfig() */

void __thiscall
PlantAvatarExchangeConfig::~PlantAvatarExchangeConfig(PlantAvatarExchangeConfig *this)

{
  ~PlantAvatarExchangeConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarExchangeConfig::StaticClassInit() */

void PlantAvatarExchangeConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAvatarExchangeConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc5038,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarExchangeConfig::StaticGetClass() */

long * PlantAvatarExchangeConfig::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAvatarExchangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAvatarExchangeConfig::GetClass() const */

long * PlantAvatarExchangeConfig::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAvatarExchangeConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAvatarExchangeConfig::GetAvatarExchangeCost(int) */

undefined4 __thiscall
PlantAvatarExchangeConfig::GetAvatarExchangeCost(PlantAvatarExchangeConfig *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
    return *(undefined4 *)(this + 0x28);
  case 1:
    return *(undefined4 *)(this + 0x2c);
  case 2:
    return *(undefined4 *)(this + 0x30);
  case 3:
    return *(undefined4 *)(this + 0x34);
  case 4:
    uVar1 = *(undefined4 *)(this + 0x38);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarExchangeConfig::IsSellPlantAvatar(std::string const&) */

void __thiscall
PlantAvatarExchangeConfig::IsSellPlantAvatar(PlantAvatarExchangeConfig *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      uVar3 = 1;
LAB_03bc546c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      uVar3 = 0;
      goto LAB_03bc546c;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* PlantAvatarExchangeConfig::StaticNew() */

PlantAvatarExchangeConfig * PlantAvatarExchangeConfig::StaticNew(void)

{
  PlantAvatarExchangeConfig *this;
  
  this = ::operator_new(0x40);
  PlantAvatarExchangeConfig(this);
  return this;
}

