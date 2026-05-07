// Class: GridItemGravestonePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestonePropertySheet::GridItemGravestonePropertySheet() */

void __thiscall
GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
          (GridItemGravestonePropertySheet *this)

{
  long lVar1;
  size_t in_x2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06780880;
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0((string *)(this + 0xe0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xe8));
  Sexy::Point::Point((Point *)(this + 0xf8));
  std::string::append((string *)(this + 0xa0),"GravestoneAnimRig",in_x2);
  this[0xd0] = (GridItemGravestonePropertySheet)0x5;
  std::string::append((string *)(this + 0xd8),"",in_x2);
  std::string::append((string *)(this + 0xe0),"",in_x2);
  this[0xf0] = (GridItemGravestonePropertySheet)0x1;
  *(undefined4 *)(this + 0xf4) = 0xbf800000;
  Sexy::Point::Point((Point *)&local_10,1,1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = local_10;
  this[0x100] = (GridItemGravestonePropertySheet)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet() */

void __thiscall
GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
          (GridItemGravestonePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06780880;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet() */

void __thiscall
GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
          (GridItemGravestonePropertySheet *this)

{
  ~GridItemGravestonePropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestonePropertySheet::StaticClassInit() */

void GridItemGravestonePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestonePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03dff4ac,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestonePropertySheet::StaticGetClass() */

long * GridItemGravestonePropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestonePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestonePropertySheet::GetClass() const */

long * GridItemGravestonePropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestonePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestonePropertySheet::StaticNew() */

GridItemGravestonePropertySheet * GridItemGravestonePropertySheet::StaticNew(void)

{
  GridItemGravestonePropertySheet *this;
  
  this = ::operator_new(0x108);
  GridItemGravestonePropertySheet(this);
  return this;
}

