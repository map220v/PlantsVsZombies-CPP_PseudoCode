// Class: HotUIMultiImageProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMultiImageProperties::StaticClassInit() */

void HotUIMultiImageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIMultiImageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036487d4,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMultiImageProperties::StaticGetClass() */

long * HotUIMultiImageProperties::StaticGetClass(void)

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
  uVar2 = HotUIImageProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIMultiImageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIMultiImageProperties::GetClass() const */

long * HotUIMultiImageProperties::GetClass(void)

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
  uVar2 = HotUIImageProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIMultiImageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIMultiImageProperties::GetWidgetClass() const */

long * HotUIMultiImageProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIMultiImage::sClass != (long *)0x0) {
    return HotUIMultiImage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIMultiImage::sClass = plVar1;
  uVar2 = HotUIImage::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIMultiImage",uVar2,HotUIMultiImage::StaticNew);
  HotUIMultiImage::StaticClassInit();
  return HotUIMultiImage::sClass;
}


/* HotUIMultiImageProperties::HotUIMultiImageProperties() */

void __thiscall
HotUIMultiImageProperties::HotUIMultiImageProperties(HotUIMultiImageProperties *this)

{
  HotUIImageProperties::HotUIImageProperties((HotUIImageProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0666fbc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  return;
}


/* HotUIMultiImageProperties::StaticNew() */

HotUIMultiImageProperties * HotUIMultiImageProperties::StaticNew(void)

{
  HotUIMultiImageProperties *this;
  
  this = ::operator_new(0x1b8);
  HotUIMultiImageProperties(this);
  return this;
}


/* HotUIMultiImageProperties::~HotUIMultiImageProperties() */

void __thiscall
HotUIMultiImageProperties::~HotUIMultiImageProperties(HotUIMultiImageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0666fbc0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a0));
  HotUIImageProperties::~HotUIImageProperties((HotUIImageProperties *)this);
  return;
}


/* HotUIMultiImageProperties::~HotUIMultiImageProperties() */

void __thiscall
HotUIMultiImageProperties::~HotUIMultiImageProperties(HotUIMultiImageProperties *this)

{
  ~HotUIMultiImageProperties(this);
  AK::FreeHook(this);
  return;
}

