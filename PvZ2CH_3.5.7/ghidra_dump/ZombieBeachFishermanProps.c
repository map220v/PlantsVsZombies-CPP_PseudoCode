// Class: ZombieBeachFishermanProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFishermanProps::StaticClassInit() */

void ZombieBeachFishermanProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBeachFishermanProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0463436c,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachFishermanProps::StaticGetClass() */

long * ZombieBeachFishermanProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBeachFishermanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachFishermanProps::GetClass() const */

long * ZombieBeachFishermanProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBeachFishermanProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachFishermanProps::ZombieBeachFishermanProps() */

void __thiscall
ZombieBeachFishermanProps::ZombieBeachFishermanProps(ZombieBeachFishermanProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x218) = 0xffffffff;
  *(undefined4 *)(this + 0x21c) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0687f450;
  *(undefined4 *)(this + 0x220) = 0xffffffff;
  *(undefined4 *)(this + 0x210) = 0xbf800000;
  *(undefined4 *)(this + 0x214) = 0xbf800000;
  *(undefined4 *)(this + 0x224) = 0xbf800000;
  *(undefined4 *)(this + 0x228) = 0xbf800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  return;
}


/* ZombieBeachFishermanProps::StaticNew() */

ZombieBeachFishermanProps * ZombieBeachFishermanProps::StaticNew(void)

{
  ZombieBeachFishermanProps *this;
  
  this = ::operator_new(0x260);
  ZombieBeachFishermanProps(this);
  return this;
}


/* ZombieBeachFishermanProps::~ZombieBeachFishermanProps() */

void __thiscall
ZombieBeachFishermanProps::~ZombieBeachFishermanProps(ZombieBeachFishermanProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f450;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x248));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x230));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBeachFishermanProps::~ZombieBeachFishermanProps() */

void __thiscall
ZombieBeachFishermanProps::~ZombieBeachFishermanProps(ZombieBeachFishermanProps *this)

{
  ~ZombieBeachFishermanProps(this);
  AK::FreeHook(this);
  return;
}

