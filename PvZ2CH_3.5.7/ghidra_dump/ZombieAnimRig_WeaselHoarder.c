// Class: ZombieAnimRig_WeaselHoarder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getWalkAnimationName() */

void ZombieAnimRig_WeaselHoarder::getWalkAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_045f9834(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "walk";
  }
  else {
    __s = "tree_walk";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getIdleAnimationName() */

void ZombieAnimRig_WeaselHoarder::getIdleAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_045f9834(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "idle";
  }
  else {
    __s = "tree_idle";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getEatAnimationName() */

void ZombieAnimRig_WeaselHoarder::getEatAnimationName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_045f9834(*(undefined1 *)(in_x0 + 0x240));
  if (cVar2 == '\0') {
    __s = "eat";
  }
  else {
    __s = "tree_eat";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::StaticClassInit() */

void ZombieAnimRig_WeaselHoarder::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_WeaselHoarder");
    (*pcVar2)(plVar1,asStack_10,FUN_045fa384,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_WeaselHoarder::StaticGetClass() */

long * ZombieAnimRig_WeaselHoarder::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_WeaselHoarder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WeaselHoarder::GetClass() const */

long * ZombieAnimRig_WeaselHoarder::GetClass(void)

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
  uVar2 = ZombieAnimRig_ChickenFarmer::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_WeaselHoarder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_WeaselHoarder::SetZombie(Sexy::RtWeakPtr<ZombieChickenFarmer>) */

void __thiscall
ZombieAnimRig_WeaselHoarder::SetZombie(ZombieAnimRig_WeaselHoarder *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x248),param_2);
  return;
}


/* ZombieAnimRig_WeaselHoarder::ZombieAnimRig_WeaselHoarder() */

void __thiscall
ZombieAnimRig_WeaselHoarder::ZombieAnimRig_WeaselHoarder(ZombieAnimRig_WeaselHoarder *this)

{
  ZombieAnimRig_ChickenFarmer::ZombieAnimRig_ChickenFarmer((ZombieAnimRig_ChickenFarmer *)this);
  *(undefined ***)this = &PTR_GetClass_0686e5c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WeaselHoarder_0686e838;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  return;
}


/* ZombieAnimRig_WeaselHoarder::StaticNew() */

ZombieAnimRig_WeaselHoarder * ZombieAnimRig_WeaselHoarder::StaticNew(void)

{
  ZombieAnimRig_WeaselHoarder *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_WeaselHoarder(this);
  return this;
}


/* ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder() */

void __thiscall
ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder(ZombieAnimRig_WeaselHoarder *this)

{
  *(undefined ***)this = &PTR_GetClass_0686e5c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_WeaselHoarder_0686e838;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  ZombieAnimRig_ChickenFarmer::~ZombieAnimRig_ChickenFarmer((ZombieAnimRig_ChickenFarmer *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder() */

void __thiscall
ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder(ZombieAnimRig_WeaselHoarder *this)

{
  ~ZombieAnimRig_WeaselHoarder(this + -0x10);
  return;
}


/* ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder() */

void __thiscall
ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder(ZombieAnimRig_WeaselHoarder *this)

{
  ~ZombieAnimRig_WeaselHoarder(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder() */

void __thiscall
ZombieAnimRig_WeaselHoarder::~ZombieAnimRig_WeaselHoarder(ZombieAnimRig_WeaselHoarder *this)

{
  ~ZombieAnimRig_WeaselHoarder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::PlayResilienceBreak(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_WeaselHoarder::PlayResilienceBreak
          (ZombieAnimRig_WeaselHoarder *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *__s;
  code *pcVar5;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    cVar2 = FUN_045f9830(*(undefined1 *)(lVar4 + 0x800));
    if (cVar2 != '\0') {
      __s = "break_enter";
      goto LAB_045f9f10;
    }
  }
  __s = "tree_break_enter";
LAB_045f9f10:
  std::string::string(asStack_58,__s);
  nop();
  pcVar5 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar3 = (*pcVar5)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::PlayResilienceRecover(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_WeaselHoarder::PlayResilienceRecover
          (ZombieAnimRig_WeaselHoarder *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *__s;
  code *pcVar5;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x248));
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    cVar2 = FUN_045f9830(*(undefined1 *)(lVar4 + 0x800));
    if (cVar2 != '\0') {
      __s = "break_recover";
      goto LAB_045fa00c;
    }
  }
  __s = "tree_break_recover";
LAB_045fa00c:
  std::string::string(asStack_58,__s);
  nop();
  pcVar5 = *(code **)(*(long *)this + 0x170);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar3 = (*pcVar5)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::PlayResilienceStandstill(std::string const&) */

void ZombieAnimRig_WeaselHoarder::PlayResilienceStandstill(string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x248));
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
    cVar2 = FUN_045f9830(*(undefined1 *)(lVar4 + 0x800));
    if (cVar2 != '\0') {
      __s = "break_loop";
      goto LAB_045fa104;
    }
  }
  __s = "tree_break_loop";
LAB_045fa104:
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar3 = PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::PlayWeaselAttack(Sexy::Delegate1<std::string const&>) */

void __thiscall
ZombieAnimRig_WeaselHoarder::PlayWeaselAttack(ZombieAnimRig_WeaselHoarder *this,Delegate1 *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  Delegate1<std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"WEASEL_ATTACK");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 == -1) {
    pcVar2 = *(code **)(*(long *)this + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aDStack_50);
    (*pcVar2)(this,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::PlayWeaselAttackSpecial(Sexy::Delegate1<std::string const&>) */

void __thiscall
ZombieAnimRig_WeaselHoarder::PlayWeaselAttackSpecial
          (ZombieAnimRig_WeaselHoarder *this,Delegate1 *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  Delegate1<std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_58,"WEASEL_SPECIAL");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 == -1) {
    pcVar2 = *(code **)(*(long *)this + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aDStack_50);
    (*pcVar2)(this,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getHeadLayerNames() */

void ZombieAnimRig_WeaselHoarder::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17100 & 1;
  if (((DAT_06b17100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17100), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b170b8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b170c0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b170c8,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b170d0,"zombie_skull_tree");
    nop();
    __cxa_guard_release(&DAT_06b17100);
    __cxa_atexit(FUN_045f967c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b170f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b170f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b170d8,(string *)&DAT_06b170b8,(allocator *)&DAT_06b170d8);
    __cxa_guard_release(&DAT_06b170f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b170d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b170d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getArmLayerNames() */

void ZombieAnimRig_WeaselHoarder::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17070 & 1;
  if (((DAT_06b17070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17070), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17028,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17030,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b17038,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b17040,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b17070);
    __cxa_atexit(FUN_045f96b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b170a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b170a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17010,(string *)&DAT_06b17028,(allocator *)&DAT_06b17048);
    __cxa_guard_release(&DAT_06b170a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17010,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17010);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_WeaselHoarder::getArmReplacementPairNames() */

void ZombieAnimRig_WeaselHoarder::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17068 & 1;
  if (((DAT_06b17068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17068), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17058,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b17060,"zombie_farmer_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b17068);
    __cxa_atexit(FUN_045f96f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17090 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17090), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17120,(string *)&DAT_06b17058,(allocator *)&DAT_06b17068);
    __cxa_guard_release(&DAT_06b17090);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17120,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17120);
}

