// Class: GridItemZombieMirrorQueenMirrorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenMirrorProps::StaticClassInit() */

void GridItemZombieMirrorQueenMirrorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieMirrorQueenMirrorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f09ca0,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenMirrorProps::StaticGetClass() */

long * GridItemZombieMirrorQueenMirrorProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieMirrorQueenMirrorProps::GetClass() const */

long * GridItemZombieMirrorQueenMirrorProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenMirrorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieMirrorQueenMirrorProps::GridItemZombieMirrorQueenMirrorProps() */

void __thiscall
GridItemZombieMirrorQueenMirrorProps::GridItemZombieMirrorQueenMirrorProps
          (GridItemZombieMirrorQueenMirrorProps *this)

{
  undefined4 uVar1;
  
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e5d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xe8) = uVar1;
  return;
}


/* GridItemZombieMirrorQueenMirrorProps::StaticNew() */

GridItemZombieMirrorQueenMirrorProps * GridItemZombieMirrorQueenMirrorProps::StaticNew(void)

{
  GridItemZombieMirrorQueenMirrorProps *this;
  
  this = ::operator_new(0xf0);
  GridItemZombieMirrorQueenMirrorProps(this);
  return this;
}


/* GridItemZombieMirrorQueenMirrorProps::~GridItemZombieMirrorQueenMirrorProps() */

void __thiscall
GridItemZombieMirrorQueenMirrorProps::~GridItemZombieMirrorQueenMirrorProps
          (GridItemZombieMirrorQueenMirrorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e5d0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemZombieMirrorQueenMirrorProps::~GridItemZombieMirrorQueenMirrorProps() */

void __thiscall
GridItemZombieMirrorQueenMirrorProps::~GridItemZombieMirrorQueenMirrorProps
          (GridItemZombieMirrorQueenMirrorProps *this)

{
  ~GridItemZombieMirrorQueenMirrorProps(this);
  AK::FreeHook(this);
  return;
}

