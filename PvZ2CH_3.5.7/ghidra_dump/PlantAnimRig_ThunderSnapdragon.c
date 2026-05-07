// Class: PlantAnimRig_ThunderSnapdragon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ThunderSnapdragon::getPlantFoodMainAnimName() */

void PlantAnimRig_ThunderSnapdragon::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood1";
  }
  else {
    __s = "plantfood2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon
          (PlantAnimRig_ThunderSnapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_068281b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ThunderSnapdragon_06828418;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon
          (PlantAnimRig_ThunderSnapdragon *this)

{
  ~PlantAnimRig_ThunderSnapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon
          (PlantAnimRig_ThunderSnapdragon *this)

{
  ~PlantAnimRig_ThunderSnapdragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::~PlantAnimRig_ThunderSnapdragon
          (PlantAnimRig_ThunderSnapdragon *this)

{
  ~PlantAnimRig_ThunderSnapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_ThunderSnapdragon::PlantAnimRig_ThunderSnapdragon() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::PlantAnimRig_ThunderSnapdragon(PlantAnimRig_ThunderSnapdragon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3bc] = (PlantAnimRig_ThunderSnapdragon)0x0;
  *(undefined ***)this = &PTR_GetClass_068281b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ThunderSnapdragon_06828418;
  *(undefined4 *)(this + 0x3b8) = 0x3e4ccccd;
  return;
}


/* PlantAnimRig_ThunderSnapdragon::StaticNew() */

PlantAnimRig_ThunderSnapdragon * PlantAnimRig_ThunderSnapdragon::StaticNew(void)

{
  PlantAnimRig_ThunderSnapdragon *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_ThunderSnapdragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ThunderSnapdragon::StaticClassInit() */

void PlantAnimRig_ThunderSnapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ThunderSnapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_04299f84,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ThunderSnapdragon::StaticGetClass() */

long * PlantAnimRig_ThunderSnapdragon::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ThunderSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ThunderSnapdragon::GetClass() const */

long * PlantAnimRig_ThunderSnapdragon::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ThunderSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ThunderSnapdragon::PlayLevel5Attack() */

void __thiscall
PlantAnimRig_ThunderSnapdragon::PlayLevel5Attack(PlantAnimRig_ThunderSnapdragon *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_5");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    this[0x3bc] = (PlantAnimRig_ThunderSnapdragon)0x1;
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

