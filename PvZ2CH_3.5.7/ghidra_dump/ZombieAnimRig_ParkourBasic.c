// Class: ZombieAnimRig_ParkourBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourBasic::updateHelmLayerVisibility(HelmType) */

void __thiscall
ZombieAnimRig_ParkourBasic::updateHelmLayerVisibility(ZombieAnimRig_ParkourBasic *this,int param_2)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Basic::updateHelmLayerVisibility();
  if ((param_2 != 0) && (cVar1 = (**(code **)(*(long *)this + 0x300))(this,param_2), cVar1 != '\0'))
  {
    std::string::string(asStack_10,"_zombie_hat");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  (**(code **)(*(long *)this + 0x308))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic() */

void __thiscall
ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic(ZombieAnimRig_ParkourBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_06876180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourBasic_068764a0;
  ZombieAnimRig_Tutorial::~ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic() */

void __thiscall
ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic(ZombieAnimRig_ParkourBasic *this)

{
  ~ZombieAnimRig_ParkourBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic() */

void __thiscall
ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic(ZombieAnimRig_ParkourBasic *this)

{
  ~ZombieAnimRig_ParkourBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic() */

void __thiscall
ZombieAnimRig_ParkourBasic::~ZombieAnimRig_ParkourBasic(ZombieAnimRig_ParkourBasic *this)

{
  ~ZombieAnimRig_ParkourBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_ParkourBasic::ZombieAnimRig_ParkourBasic() */

void __thiscall
ZombieAnimRig_ParkourBasic::ZombieAnimRig_ParkourBasic(ZombieAnimRig_ParkourBasic *this)

{
  ZombieAnimRig_Tutorial::ZombieAnimRig_Tutorial((ZombieAnimRig_Tutorial *)this);
  *(undefined ***)this = &PTR_GetClass_06876180;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ParkourBasic_068764a0;
  return;
}


/* ZombieAnimRig_ParkourBasic::StaticNew() */

ZombieAnimRig_ParkourBasic * ZombieAnimRig_ParkourBasic::StaticNew(void)

{
  ZombieAnimRig_ParkourBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_ParkourBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourBasic::StaticClassInit() */

void ZombieAnimRig_ParkourBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ParkourBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0461215c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ParkourBasic::StaticGetClass() */

long * ZombieAnimRig_ParkourBasic::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ParkourBasic::GetClass() const */

long * ZombieAnimRig_ParkourBasic::GetClass(void)

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
  uVar2 = ZombieAnimRig_Tutorial::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ParkourBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ParkourBasic::hidePaint() */

void __thiscall ZombieAnimRig_ParkourBasic::hidePaint(ZombieAnimRig_ParkourBasic *this)

{
  int iVar1;
  string *this_00;
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b19880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b19880), iVar1 != 0)) {
    std::string::string(asStack_30,"zombie_paint01");
    this_00 = (string *)&local_8;
    std::string::string(asStack_28,"zombie_paint02");
    std::string::string(asStack_20,"zombie_paint03");
    std::string::string(asStack_18,"zombie_paint04");
    std::string::string(asStack_10,"zombie_paint05");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&DAT_06b19830,asStack_30,5,
               auStack_38);
    __cxa_guard_release(&DAT_06b19880);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19830,
                 &DAT_06a88000);
    do {
      this_00 = this_00 + -8;
      std::string::~string(this_00);
    } while (this_00 != asStack_30);
    nop();
    nop();
    nop();
    nop();
    nop();
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(vector *)&DAT_06b19830,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

