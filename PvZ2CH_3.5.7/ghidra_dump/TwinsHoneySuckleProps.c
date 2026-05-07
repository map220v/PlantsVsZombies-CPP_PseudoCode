// Class: TwinsHoneySuckleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwinsHoneySuckleProps::StaticClassInit() */

void TwinsHoneySuckleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TwinsHoneySuckleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d420d8,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TwinsHoneySuckleProps::StaticGetClass() */

long * TwinsHoneySuckleProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsHoneySuckleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsHoneySuckleProps::GetClass() const */

long * TwinsHoneySuckleProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TwinsHoneySuckleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TwinsHoneySuckleProps::TwinsHoneySuckleProps() */

void __thiscall TwinsHoneySuckleProps::TwinsHoneySuckleProps(TwinsHoneySuckleProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069af350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  *(undefined4 *)(this + 0x2b8) = 8;
  return;
}


/* TwinsHoneySuckleProps::StaticNew() */

TwinsHoneySuckleProps * TwinsHoneySuckleProps::StaticNew(void)

{
  TwinsHoneySuckleProps *this;
  
  this = ::operator_new(0x310);
  TwinsHoneySuckleProps(this);
  return this;
}


/* TwinsHoneySuckleProps::~TwinsHoneySuckleProps() */

void __thiscall TwinsHoneySuckleProps::~TwinsHoneySuckleProps(TwinsHoneySuckleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069af350;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2f0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2d8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TwinsHoneySuckleProps::~TwinsHoneySuckleProps() */

void __thiscall TwinsHoneySuckleProps::~TwinsHoneySuckleProps(TwinsHoneySuckleProps *this)

{
  ~TwinsHoneySuckleProps(this);
  AK::FreeHook(this);
  return;
}

