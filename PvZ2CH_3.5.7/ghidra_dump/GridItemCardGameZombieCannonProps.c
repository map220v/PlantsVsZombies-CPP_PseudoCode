// Class: GridItemCardGameZombieCannonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieCannonProps::StaticClassInit() */

void GridItemCardGameZombieCannonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieCannonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e216a0,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieCannonProps::StaticGetClass() */

long * GridItemCardGameZombieCannonProps::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieCannonProps::GetClass() const */

long * GridItemCardGameZombieCannonProps::GetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieCannonProps::GridItemCardGameZombieCannonProps() */

void __thiscall
GridItemCardGameZombieCannonProps::GridItemCardGameZombieCannonProps
          (GridItemCardGameZombieCannonProps *this)

{
  size_t in_x2;
  
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d81e0;
  Set8BytesTo0((string *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::string::append((string *)(this + 0x160),"fire_projectile",in_x2);
  *(undefined4 *)(this + 0x168) = 3;
  *(undefined4 *)(this + 0x16c) = 5;
  return;
}


/* GridItemCardGameZombieCannonProps::StaticNew() */

GridItemCardGameZombieCannonProps * GridItemCardGameZombieCannonProps::StaticNew(void)

{
  GridItemCardGameZombieCannonProps *this;
  
  this = ::operator_new(0x178);
  GridItemCardGameZombieCannonProps(this);
  return this;
}


/* GridItemCardGameZombieCannonProps::~GridItemCardGameZombieCannonProps() */

void __thiscall
GridItemCardGameZombieCannonProps::~GridItemCardGameZombieCannonProps
          (GridItemCardGameZombieCannonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d81e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::string::~string((string *)(this + 0x160));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieCannonProps::~GridItemCardGameZombieCannonProps() */

void __thiscall
GridItemCardGameZombieCannonProps::~GridItemCardGameZombieCannonProps
          (GridItemCardGameZombieCannonProps *this)

{
  ~GridItemCardGameZombieCannonProps(this);
  AK::FreeHook(this);
  return;
}

