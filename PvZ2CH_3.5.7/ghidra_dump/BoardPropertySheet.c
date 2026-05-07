// Class: BoardPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardPropertySheet::StaticClassInit() */

void BoardPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03b81204,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardPropertySheet::StaticGetClass() */

long * BoardPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardPropertySheet::GetClass() const */

long * BoardPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardPropertySheet::BoardPropertySheet() */

void __thiscall BoardPropertySheet::BoardPropertySheet(BoardPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06734ce0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  *(undefined4 *)(this + 0x90) = 0x40a00000;
  *(undefined4 *)(this + 0x94) = 0x42340000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  this[0x30] = (BoardPropertySheet)0x0;
  *(undefined2 *)(this + 0x14) = 0x26ac;
  *(undefined4 *)(this + 0x34) = 1000;
  *(undefined4 *)(this + 0x10) = 0x444d0000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x50) = 0x3e99999a;
  *(undefined4 *)(this + 0x54) = 0x3e99999a;
  *(undefined4 *)(this + 0x58) = 0x43960000;
  *(undefined4 *)(this + 200) = 0x3f800000;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0x3f000000;
  *(undefined4 *)(this + 0xd8) = 0x3e99999a;
  return;
}


/* BoardPropertySheet::StaticNew() */

BoardPropertySheet * BoardPropertySheet::StaticNew(void)

{
  BoardPropertySheet *this;
  
  this = ::operator_new(0xe0);
  BoardPropertySheet(this);
  return this;
}


/* BoardPropertySheet::~BoardPropertySheet() */

void __thiscall BoardPropertySheet::~BoardPropertySheet(BoardPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06734ce0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xb0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x98));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x78));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* BoardPropertySheet::~BoardPropertySheet() */

void __thiscall BoardPropertySheet::~BoardPropertySheet(BoardPropertySheet *this)

{
  ~BoardPropertySheet(this);
  AK::FreeHook(this);
  return;
}

