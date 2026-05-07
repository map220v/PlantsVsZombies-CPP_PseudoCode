// Class: GridItemCardGameGravestonePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestonePropertySheet::StaticClassInit() */

void GridItemCardGameGravestonePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameGravestonePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5ff34,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestonePropertySheet::StaticGetClass() */

long * GridItemCardGameGravestonePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestonePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestonePropertySheet::GetClass() const */

long * GridItemCardGameGravestonePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestonePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestonePropertySheet::GridItemCardGameGravestonePropertySheet() */

void __thiscall
GridItemCardGameGravestonePropertySheet::GridItemCardGameGravestonePropertySheet
          (GridItemCardGameGravestonePropertySheet *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_0676bfb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  return;
}


/* GridItemCardGameGravestonePropertySheet::StaticNew() */

GridItemCardGameGravestonePropertySheet * GridItemCardGameGravestonePropertySheet::StaticNew(void)

{
  GridItemCardGameGravestonePropertySheet *this;
  
  this = ::operator_new(0xe8);
  GridItemCardGameGravestonePropertySheet(this);
  return this;
}


/* GridItemCardGameGravestonePropertySheet::~GridItemCardGameGravestonePropertySheet() */

void __thiscall
GridItemCardGameGravestonePropertySheet::~GridItemCardGameGravestonePropertySheet
          (GridItemCardGameGravestonePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0676bfb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemCardGameGravestonePropertySheet::~GridItemCardGameGravestonePropertySheet() */

void __thiscall
GridItemCardGameGravestonePropertySheet::~GridItemCardGameGravestonePropertySheet
          (GridItemCardGameGravestonePropertySheet *this)

{
  ~GridItemCardGameGravestonePropertySheet(this);
  AK::FreeHook(this);
  return;
}

