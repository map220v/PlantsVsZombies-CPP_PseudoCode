// Class: GridItemCardGameZombieMirrorQueenProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueenProps::StaticClassInit() */

void GridItemCardGameZombieMirrorQueenProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieMirrorQueenProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e25c00,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueenProps::StaticGetClass() */

long * GridItemCardGameZombieMirrorQueenProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMirrorQueenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieMirrorQueenProps::GetClass() const */

long * GridItemCardGameZombieMirrorQueenProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMirrorQueenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMirrorQueenProps::GridItemCardGameZombieMirrorQueenProps() */

void __thiscall
GridItemCardGameZombieMirrorQueenProps::GridItemCardGameZombieMirrorQueenProps
          (GridItemCardGameZombieMirrorQueenProps *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d9160;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  *(undefined4 *)(this + 0x160) = 1;
  *(undefined4 *)(this + 0x180) = 2;
  Sexy::Point::Point(aPStack_10,9,2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,9,4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,5);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMirrorQueenProps::StaticNew() */

GridItemCardGameZombieMirrorQueenProps * GridItemCardGameZombieMirrorQueenProps::StaticNew(void)

{
  GridItemCardGameZombieMirrorQueenProps *this;
  
  this = ::operator_new(400);
  GridItemCardGameZombieMirrorQueenProps(this);
  return this;
}


/* GridItemCardGameZombieMirrorQueenProps::~GridItemCardGameZombieMirrorQueenProps() */

void __thiscall
GridItemCardGameZombieMirrorQueenProps::~GridItemCardGameZombieMirrorQueenProps
          (GridItemCardGameZombieMirrorQueenProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d9160;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x168));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieMirrorQueenProps::~GridItemCardGameZombieMirrorQueenProps() */

void __thiscall
GridItemCardGameZombieMirrorQueenProps::~GridItemCardGameZombieMirrorQueenProps
          (GridItemCardGameZombieMirrorQueenProps *this)

{
  ~GridItemCardGameZombieMirrorQueenProps(this);
  AK::FreeHook(this);
  return;
}

