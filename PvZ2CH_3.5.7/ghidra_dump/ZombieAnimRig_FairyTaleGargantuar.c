// Class: ZombieAnimRig_FairyTaleGargantuar


/* ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar
          (ZombieAnimRig_FairyTaleGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069f9c10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleGargantuar_069f9e88;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar
          (ZombieAnimRig_FairyTaleGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar
          (ZombieAnimRig_FairyTaleGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleGargantuar::~ZombieAnimRig_FairyTaleGargantuar
          (ZombieAnimRig_FairyTaleGargantuar *this)

{
  ~ZombieAnimRig_FairyTaleGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_FairyTaleGargantuar::ZombieAnimRig_FairyTaleGargantuar() */

void __thiscall
ZombieAnimRig_FairyTaleGargantuar::ZombieAnimRig_FairyTaleGargantuar
          (ZombieAnimRig_FairyTaleGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069f9c10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FairyTaleGargantuar_069f9e88;
  return;
}


/* ZombieAnimRig_FairyTaleGargantuar::StaticNew() */

ZombieAnimRig_FairyTaleGargantuar * ZombieAnimRig_FairyTaleGargantuar::StaticNew(void)

{
  ZombieAnimRig_FairyTaleGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_FairyTaleGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleGargantuar::StaticClassInit() */

void ZombieAnimRig_FairyTaleGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FairyTaleGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed35d8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FairyTaleGargantuar::StaticGetClass() */

long * ZombieAnimRig_FairyTaleGargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FairyTaleGargantuar::GetClass() const */

long * ZombieAnimRig_FairyTaleGargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_FairyTaleGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FairyTaleGargantuar::getHeadLayerNames() */

void ZombieAnimRig_FairyTaleGargantuar::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba2780 & 1;
  if (((DAT_06ba2780 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba2780), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba2728,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06ba2730,"Zombie_gargantuar_jaw");
    nop();
    std::string::string((string *)&DAT_06ba2738,"Zombie_gargantuar_feather_back");
    nop();
    std::string::string((string *)&DAT_06ba2740,"Zombie_gargantuar_feather_front");
    nop();
    __cxa_guard_release(&DAT_06ba2780);
    __cxa_atexit(FUN_04ed2344,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba28f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba28f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba2938,(string *)&DAT_06ba2728,(allocator *)&DAT_06ba2748);
    __cxa_guard_release(&DAT_06ba28f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba2938,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba2938);
}

