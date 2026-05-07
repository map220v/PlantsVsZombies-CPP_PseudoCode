// Class: GeraniiFencerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeraniiFencerProps::StaticClassInit() */

void GeraniiFencerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeraniiFencerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d11618,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeraniiFencerProps::StaticGetClass() */

long * GeraniiFencerProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GeraniiFencerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeraniiFencerProps::GetClass() const */

long * GeraniiFencerProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GeraniiFencerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeraniiFencerProps::GetCollisionRect(Plant*) const */

void GeraniiFencerProps::GetCollisionRect(Plant *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long extraout_x0;
  long in_x1;
  Point *extraout_x1;
  Insets *in_x8;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((extraout_x0 == 0) ||
     (cVar4 = FUN_04d113fc(*(undefined1 *)(extraout_x0 + 0x30)), cVar4 == '\0')) {
    PlantPropertySheet::GetCollisionRect(param_1);
  }
  else {
    Sexy::Point::Point(aPStack_10,*(int *)(in_x1 + 0x114) + 1,*(int *)(in_x1 + 0x110));
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_10,extraout_x1);
    iVar5 = Plant::GetWidth();
    iVar1 = *(int *)(param_1 + 0xa4);
    iVar6 = Plant::GetHeight();
    iVar2 = *(int *)(param_1 + 0xa8);
    iVar7 = Plant::GetWidth();
    iVar3 = *(int *)(param_1 + 0xac);
    iVar8 = Plant::GetHeight();
    Sexy::Insets::Insets
              (in_x8,(local_18 - iVar5 / 2) + iVar1,(local_14 - iVar6) + iVar2,iVar7 + iVar3,
               iVar8 + *(int *)(param_1 + 0xb0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeraniiFencerProps::GeraniiFencerProps() */

void __thiscall GeraniiFencerProps::GeraniiFencerProps(GeraniiFencerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a7e30;
  return;
}


/* GeraniiFencerProps::StaticNew() */

GeraniiFencerProps * GeraniiFencerProps::StaticNew(void)

{
  GeraniiFencerProps *this;
  
  this = ::operator_new(0x2d0);
  GeraniiFencerProps(this);
  return this;
}


/* GeraniiFencerProps::~GeraniiFencerProps() */

void __thiscall GeraniiFencerProps::~GeraniiFencerProps(GeraniiFencerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a7e30;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GeraniiFencerProps::~GeraniiFencerProps() */

void __thiscall GeraniiFencerProps::~GeraniiFencerProps(GeraniiFencerProps *this)

{
  ~GeraniiFencerProps(this);
  AK::FreeHook(this);
  return;
}

