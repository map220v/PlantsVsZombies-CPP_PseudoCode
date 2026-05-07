// Class: ZombieAnimRig_RenaiCarver


/* ZombieAnimRig_RenaiCarver::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_RenaiCarver::onPopAnimInitialized(ZombieAnimRig_RenaiCarver *this)

{
  undefined4 uVar1;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0;
  this[0x230] = (ZombieAnimRig_RenaiCarver)0x0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x22c) = uVar1;
  (**(code **)(*(long *)this + 0x1b8))(this);
  ZombieAnimRig::SetButterVisibility((ZombieAnimRig *)this,false);
  ZombieAnimRig::SetInkVisibility((ZombieAnimRig *)this,false);
  (**(code **)(*(long *)this + 0x1f8))(this);
  return;
}


/* ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver() */

void __thiscall
ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver(ZombieAnimRig_RenaiCarver *this)

{
  *(undefined ***)this = &PTR_GetClass_069002c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiCarver_06900560;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver() */

void __thiscall
ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver(ZombieAnimRig_RenaiCarver *this)

{
  ~ZombieAnimRig_RenaiCarver(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver() */

void __thiscall
ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver(ZombieAnimRig_RenaiCarver *this)

{
  ~ZombieAnimRig_RenaiCarver(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver() */

void __thiscall
ZombieAnimRig_RenaiCarver::~ZombieAnimRig_RenaiCarver(ZombieAnimRig_RenaiCarver *this)

{
  ~ZombieAnimRig_RenaiCarver(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiCarver::ZombieAnimRig_RenaiCarver() */

void __thiscall
ZombieAnimRig_RenaiCarver::ZombieAnimRig_RenaiCarver(ZombieAnimRig_RenaiCarver *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_069002c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiCarver_06900560;
  return;
}


/* ZombieAnimRig_RenaiCarver::StaticNew() */

ZombieAnimRig_RenaiCarver * ZombieAnimRig_RenaiCarver::StaticNew(void)

{
  ZombieAnimRig_RenaiCarver *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_RenaiCarver(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiCarver::StaticClassInit() */

void ZombieAnimRig_RenaiCarver::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_RenaiCarver");
    (*pcVar2)(plVar1,asStack_10,FUN_0480c9c4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RenaiCarver::StaticGetClass() */

long * ZombieAnimRig_RenaiCarver::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiCarver",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RenaiCarver::GetClass() const */

long * ZombieAnimRig_RenaiCarver::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiCarver",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiCarver::PlayCarve(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_RenaiCarver::PlayCarve(ZombieAnimRig_RenaiCarver *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"carve");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiCarver::PlayCarve() */

void __thiscall ZombieAnimRig_RenaiCarver::PlayCarve(ZombieAnimRig_RenaiCarver *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"carve");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiCarver::getHeadLayerNames() */

void ZombieAnimRig_RenaiCarver::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29870 & 1;
  if (((DAT_06b29870 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29870), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29908,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b29910,"zombie_imp_jaw");
    nop();
    std::string::string((string *)&DAT_06b29918,"_zombie_imp_head_top");
    nop();
    __cxa_guard_release(&DAT_06b29870);
    __cxa_atexit(FUN_0480c364,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b298c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b298c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b298f0,(string *)&DAT_06b29908,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b298c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b298f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b298f0);
}

