// Class: CthulhuPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuPropertySheet::StaticClassInit() */

void CthulhuPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04d6f138,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuPropertySheet::StaticGetClass() */

long * CthulhuPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuPropertySheet::GetClass() const */

long * CthulhuPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuPropertySheet::~CthulhuPropertySheet() */

void __thiscall CthulhuPropertySheet::~CthulhuPropertySheet(CthulhuPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069b66a0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CthulhuPropertySheet::~CthulhuPropertySheet() */

void __thiscall CthulhuPropertySheet::~CthulhuPropertySheet(CthulhuPropertySheet *this)

{
  ~CthulhuPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* CthulhuPropertySheet::CthulhuPropertySheet() */

void __thiscall CthulhuPropertySheet::CthulhuPropertySheet(CthulhuPropertySheet *this)

{
  size_t in_x2;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_069b66a0;
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),&DAT_05755a50,3);
  *(undefined4 *)(this + 0x30) = 0x42700000;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),&DAT_05755a60,3);
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x50),&DAT_05755a40,3);
  return;
}


/* CthulhuPropertySheet::StaticNew() */

CthulhuPropertySheet * CthulhuPropertySheet::StaticNew(void)

{
  CthulhuPropertySheet *this;
  
  this = ::operator_new(0x68);
  CthulhuPropertySheet(this);
  return this;
}

