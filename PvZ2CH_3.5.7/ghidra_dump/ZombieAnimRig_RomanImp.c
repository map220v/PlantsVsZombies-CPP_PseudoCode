// Class: ZombieAnimRig_RomanImp


/* ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp() */

void __thiscall ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp(ZombieAnimRig_RomanImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0688a310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanImp_0688a5b0;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp() */

void __thiscall ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp(ZombieAnimRig_RomanImp *this)

{
  ~ZombieAnimRig_RomanImp(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp() */

void __thiscall ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp(ZombieAnimRig_RomanImp *this)

{
  ~ZombieAnimRig_RomanImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp() */

void __thiscall ZombieAnimRig_RomanImp::~ZombieAnimRig_RomanImp(ZombieAnimRig_RomanImp *this)

{
  ~ZombieAnimRig_RomanImp(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanImp::ZombieAnimRig_RomanImp() */

void __thiscall ZombieAnimRig_RomanImp::ZombieAnimRig_RomanImp(ZombieAnimRig_RomanImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0688a310;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanImp_0688a5b0;
  return;
}


/* ZombieAnimRig_RomanImp::StaticNew() */

ZombieAnimRig_RomanImp * ZombieAnimRig_RomanImp::StaticNew(void)

{
  ZombieAnimRig_RomanImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RomanImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanImp::StaticClassInit() */

void ZombieAnimRig_RomanImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_RomanImp");
    (*pcVar2)(plVar1,asStack_10,FUN_04658648,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RomanImp::StaticGetClass() */

long * ZombieAnimRig_RomanImp::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RomanImp::GetClass() const */

long * ZombieAnimRig_RomanImp::GetClass(void)

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
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanImp::SetHasNet(bool) */

void __thiscall ZombieAnimRig_RomanImp::SetHasNet(ZombieAnimRig_RomanImp *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"impnet_ball");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"impnet_rope");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanImp::getHeadLayerNames() */

void ZombieAnimRig_RomanImp::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ce68 & 1;
  if (((DAT_06b1ce68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ce68), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ce48,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b1ce50,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06b1ce58,"imp_roman_helm_back");
    nop();
    std::string::string((string *)&DAT_06b1ce60,"zombie_roman_imp_helm_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1ce68);
    __cxa_atexit(FUN_04657de4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ce88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ce88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cee0,(string *)&DAT_06b1ce48,(allocator *)&DAT_06b1ce68);
    __cxa_guard_release(&DAT_06b1ce88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cee0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cee0);
}

