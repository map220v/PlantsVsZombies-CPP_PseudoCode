// Class: ZombieAnimRig_Ballet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ballet::StaticClassInit() */

void ZombieAnimRig_Ballet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Ballet");
    (*pcVar2)(plVar1,asStack_10,FUN_0464cef4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Ballet::StaticGetClass() */

long * ZombieAnimRig_Ballet::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ballet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Ballet::GetClass() const */

long * ZombieAnimRig_Ballet::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ballet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet() */

void __thiscall ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet(ZombieAnimRig_Ballet *this)

{
  *(undefined ***)this = &PTR_GetClass_06887110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ballet_06887388;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet() */

void __thiscall ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet(ZombieAnimRig_Ballet *this)

{
  ~ZombieAnimRig_Ballet(this + -0x10);
  return;
}


/* ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet() */

void __thiscall ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet(ZombieAnimRig_Ballet *this)

{
  ~ZombieAnimRig_Ballet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet() */

void __thiscall ZombieAnimRig_Ballet::~ZombieAnimRig_Ballet(ZombieAnimRig_Ballet *this)

{
  ~ZombieAnimRig_Ballet(this + -0x10);
  return;
}


/* ZombieAnimRig_Ballet::ZombieAnimRig_Ballet() */

void __thiscall ZombieAnimRig_Ballet::ZombieAnimRig_Ballet(ZombieAnimRig_Ballet *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06887110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ballet_06887388;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x240));
  return;
}


/* ZombieAnimRig_Ballet::StaticNew() */

ZombieAnimRig_Ballet * ZombieAnimRig_Ballet::StaticNew(void)

{
  ZombieAnimRig_Ballet *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Ballet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ballet::getDieAnimationName() */

void ZombieAnimRig_Ballet::getDieAnimationName(void)

{
  RtWeakPtr *this;
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  long lVar4;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (RtWeakPtr *)(in_x0 + 0x240);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (((bVar2) && (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this), cVar3 != '\0')) &&
     (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this),
     *(char *)(lVar4 + 0x800) != '\0')) {
    std::string::string(in_x8,"die2");
    nop();
  }
  else {
    std::string::string(in_x8,"die1");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ballet::getHeadLayerNames() */

void ZombieAnimRig_Ballet::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ca00 & 1;
  if (((DAT_06b1ca00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ca00), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c9d8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1c9e0,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1ca00);
    __cxa_atexit(FUN_0464a8a8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c990 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c990), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c998,(string *)&DAT_06b1c9d8,(allocator *)&DAT_06b1c9e8);
    __cxa_guard_release(&DAT_06b1c990);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c998,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c998);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ballet::getArmLayerNames() */

void ZombieAnimRig_Ballet::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c988 & 1;
  if (((DAT_06b1c988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c988), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c8f0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1c8f8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c900,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1c908,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1c910,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1c988);
    __cxa_atexit(FUN_0464a8d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c9d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c9d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c918,(string *)&DAT_06b1c8f0,(allocator *)&DAT_06b1c918);
    __cxa_guard_release(&DAT_06b1c9d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c918,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c918);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ballet::getArmReplacementPairNames() */

void ZombieAnimRig_Ballet::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1c958 & 1;
  if (((DAT_06b1c958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c958), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1c9e8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1c9f0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1c958);
    __cxa_atexit(FUN_0464a90c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1c9f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1c9f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1c940,(string *)&DAT_06b1c9e8,(allocator *)&DAT_06b1c9f8);
    __cxa_guard_release(&DAT_06b1c9f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1c940,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1c940);
}

