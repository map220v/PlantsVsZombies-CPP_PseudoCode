// Class: ZombieMirrorQueenProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenProps::StaticClassInit() */

void ZombieMirrorQueenProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f09970,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenProps::StaticGetClass() */

long * ZombieMirrorQueenProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenProps::GetClass() const */

long * ZombieMirrorQueenProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenProps::ZombieMirrorQueenProps() */

void __thiscall ZombieMirrorQueenProps::ZombieMirrorQueenProps(ZombieMirrorQueenProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined ***)this = &PTR_GetClass_06a0cf60;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x230) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  return;
}


/* ZombieMirrorQueenProps::StaticNew() */

ZombieMirrorQueenProps * ZombieMirrorQueenProps::StaticNew(void)

{
  ZombieMirrorQueenProps *this;
  
  this = ::operator_new(0x268);
  ZombieMirrorQueenProps(this);
  return this;
}


/* ZombieMirrorQueenProps::~ZombieMirrorQueenProps() */

void __thiscall ZombieMirrorQueenProps::~ZombieMirrorQueenProps(ZombieMirrorQueenProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0cf60;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x250));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x238));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieMirrorQueenProps::~ZombieMirrorQueenProps() */

void __thiscall ZombieMirrorQueenProps::~ZombieMirrorQueenProps(ZombieMirrorQueenProps *this)

{
  ~ZombieMirrorQueenProps(this);
  AK::FreeHook(this);
  return;
}

