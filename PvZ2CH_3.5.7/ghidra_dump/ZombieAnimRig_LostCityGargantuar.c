// Class: ZombieAnimRig_LostCityGargantuar


/* ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar() */

void __thiscall
ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar
          (ZombieAnimRig_LostCityGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068ebf90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityGargantuar_068ec208;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar() */

void __thiscall
ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar
          (ZombieAnimRig_LostCityGargantuar *this)

{
  ~ZombieAnimRig_LostCityGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar() */

void __thiscall
ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar
          (ZombieAnimRig_LostCityGargantuar *this)

{
  ~ZombieAnimRig_LostCityGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar() */

void __thiscall
ZombieAnimRig_LostCityGargantuar::~ZombieAnimRig_LostCityGargantuar
          (ZombieAnimRig_LostCityGargantuar *this)

{
  ~ZombieAnimRig_LostCityGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityGargantuar::ZombieAnimRig_LostCityGargantuar() */

void __thiscall
ZombieAnimRig_LostCityGargantuar::ZombieAnimRig_LostCityGargantuar
          (ZombieAnimRig_LostCityGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  this[0x240] = (ZombieAnimRig_LostCityGargantuar)0x1;
  *(undefined ***)this = &PTR_GetClass_068ebf90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityGargantuar_068ec208;
  return;
}


/* ZombieAnimRig_LostCityGargantuar::StaticNew() */

ZombieAnimRig_LostCityGargantuar * ZombieAnimRig_LostCityGargantuar::StaticNew(void)

{
  ZombieAnimRig_LostCityGargantuar *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_LostCityGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityGargantuar::StaticClassInit() */

void ZombieAnimRig_LostCityGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_LostCityGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_047dbae8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityGargantuar::StaticGetClass() */

long * ZombieAnimRig_LostCityGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityGargantuar::GetClass() const */

long * ZombieAnimRig_LostCityGargantuar::GetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityGargantuar::SetTorchLayers(bool) */

void __thiscall
ZombieAnimRig_LostCityGargantuar::SetTorchLayers
          (ZombieAnimRig_LostCityGargantuar *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x240] != (ZombieAnimRig_LostCityGargantuar)param_1) {
    this[0x240] = (ZombieAnimRig_LostCityGargantuar)param_1;
    std::string::string(asStack_10,"torch_end_lit");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"torch_fire_frame_01");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"torch_fire_fire_frame_01");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"torch_fire_frame_02");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"torch_fire_frame_03");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"torch_fire_frame_04");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,(bool)this[0x240]);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

