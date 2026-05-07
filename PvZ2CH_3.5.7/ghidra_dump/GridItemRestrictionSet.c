// Class: GridItemRestrictionSet


/* GridItemRestrictionSet::GridItemRestrictionSet() */

void __thiscall GridItemRestrictionSet::GridItemRestrictionSet(GridItemRestrictionSet *this)

{
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)this);
  *(undefined ***)this = &PTR_GetClass_06916ae0;
  return;
}


/* GridItemRestrictionSet::~GridItemRestrictionSet() */

void __thiscall GridItemRestrictionSet::~GridItemRestrictionSet(GridItemRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_06916ae0;
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)this);
  return;
}


/* GridItemRestrictionSet::~GridItemRestrictionSet() */

void __thiscall GridItemRestrictionSet::~GridItemRestrictionSet(GridItemRestrictionSet *this)

{
  ~GridItemRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRestrictionSet::StaticClassInit() */

void GridItemRestrictionSet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRestrictionSet");
    (*pcVar2)(plVar1,asStack_10,FUN_0496e7c0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRestrictionSet::StaticNew() */

GridItemRestrictionSet * GridItemRestrictionSet::StaticNew(void)

{
  GridItemRestrictionSet *this;
  
  this = ::operator_new(0x28);
  GridItemRestrictionSet(this);
  return this;
}


/* GridItemRestrictionSet::IsExcluded(Sexy::RtWeakPtr<GridItemType const>) const */

void __thiscall
GridItemRestrictionSet::IsExcluded
          (GridItemRestrictionSet *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  StringRestrictionSet::IsExcluded((StringRestrictionSet *)this,(string *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRestrictionSet::IsExcluded(GridItem const*) const */

void GridItemRestrictionSet::IsExcluded(GridItem *param_1)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)param_1,(string *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* GridItemRestrictionSet::IsIncluded(Sexy::RtWeakPtr<GridItemType const>) const */

void __thiscall
GridItemRestrictionSet::IsIncluded
          (GridItemRestrictionSet *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  long lVar1;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  StringRestrictionSet::IsIncluded((StringRestrictionSet *)this,(string *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRestrictionSet::IsIncluded(GridItem const*) const */

void GridItemRestrictionSet::IsIncluded(GridItem *param_1)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)param_1,(string *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* GridItemRestrictionSet::StaticGetClass() */

long * GridItemRestrictionSet::StaticGetClass(void)

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
  uVar2 = StringRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRestrictionSet::GetClass() const */

long * GridItemRestrictionSet::GetClass(void)

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
  uVar2 = StringRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRestrictionSet::GridItemRestrictionSet(GridItemRestrictionSet const&) */

void __thiscall
GridItemRestrictionSet::GridItemRestrictionSet
          (GridItemRestrictionSet *this,GridItemRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_06916ae0;
  return;
}

