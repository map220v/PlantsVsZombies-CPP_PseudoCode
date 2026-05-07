// Class: ZombieDarkKingElitePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKingElitePropertySheet::StaticClassInit() */

void ZombieDarkKingElitePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDarkKingElitePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0466e89c,0x270,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkKingElitePropertySheet::StaticGetClass() */

long * ZombieDarkKingElitePropertySheet::StaticGetClass(void)

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
  uVar2 = ZombieDarkKingProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkKingElitePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkKingElitePropertySheet::GetClass() const */

long * ZombieDarkKingElitePropertySheet::GetClass(void)

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
  uVar2 = ZombieDarkKingProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDarkKingElitePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkKingElitePropertySheet::ZombieDarkKingElitePropertySheet() */

void __thiscall
ZombieDarkKingElitePropertySheet::ZombieDarkKingElitePropertySheet
          (ZombieDarkKingElitePropertySheet *this)

{
  ZombieDarkKingProps::ZombieDarkKingProps((ZombieDarkKingProps *)this);
  *(undefined ***)this = &PTR_GetClass_06893a10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 600));
  return;
}


/* ZombieDarkKingElitePropertySheet::StaticNew() */

ZombieDarkKingElitePropertySheet * ZombieDarkKingElitePropertySheet::StaticNew(void)

{
  ZombieDarkKingElitePropertySheet *this;
  
  this = ::operator_new(0x270);
  ZombieDarkKingElitePropertySheet(this);
  return this;
}


/* ZombieDarkKingElitePropertySheet::~ZombieDarkKingElitePropertySheet() */

void __thiscall
ZombieDarkKingElitePropertySheet::~ZombieDarkKingElitePropertySheet
          (ZombieDarkKingElitePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06893a10;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 600));
  ZombieDarkKingProps::~ZombieDarkKingProps((ZombieDarkKingProps *)this);
  return;
}


/* ZombieDarkKingElitePropertySheet::~ZombieDarkKingElitePropertySheet() */

void __thiscall
ZombieDarkKingElitePropertySheet::~ZombieDarkKingElitePropertySheet
          (ZombieDarkKingElitePropertySheet *this)

{
  ~ZombieDarkKingElitePropertySheet(this);
  AK::FreeHook(this);
  return;
}

