// Class: ZombieAnimRig_Explodenut


/* ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut() */

void __thiscall ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut(ZombieAnimRig_Explodenut *this)

{
  *(undefined ***)this = &PTR_GetClass_06a02360;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Explodenut_06a02678;
  AnimRigLayerSet::~AnimRigLayerSet((AnimRigLayerSet *)(this + 600));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut() */

void __thiscall ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut(ZombieAnimRig_Explodenut *this)

{
  ~ZombieAnimRig_Explodenut(this + -0x10);
  return;
}


/* ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut() */

void __thiscall ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut(ZombieAnimRig_Explodenut *this)

{
  ~ZombieAnimRig_Explodenut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut() */

void __thiscall ZombieAnimRig_Explodenut::~ZombieAnimRig_Explodenut(ZombieAnimRig_Explodenut *this)

{
  ~ZombieAnimRig_Explodenut(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::getIdleAnimationName() */

void __thiscall ZombieAnimRig_Explodenut::getIdleAnimationName(ZombieAnimRig_Explodenut *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle_stage1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::getWalkAnimationName() */

void __thiscall ZombieAnimRig_Explodenut::getWalkAnimationName(ZombieAnimRig_Explodenut *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"walk_stage1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::getEatAnimationName() */

void __thiscall ZombieAnimRig_Explodenut::getEatAnimationName(ZombieAnimRig_Explodenut *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"eat_stage1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Explodenut::SetObjectPtr(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieAnimRig_Explodenut::SetObjectPtr(ZombieAnimRig_Explodenut *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x250),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::StaticClassInit() */

void ZombieAnimRig_Explodenut::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Explodenut");
    (*pcVar2)(plVar1,asStack_10,FUN_04eee1d0,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Explodenut::StaticGetClass() */

long * ZombieAnimRig_Explodenut::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Explodenut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Explodenut::GetClass() const */

long * ZombieAnimRig_Explodenut::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Explodenut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::ShowLayerSet(std::string) */

void ZombieAnimRig_Explodenut::ShowLayerSet(long param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  AnimRigLayerSet::ShowSet((AnimRigLayerSet *)(param_1 + 600),param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::ZombieAnimRig_Explodenut() */

void __thiscall ZombieAnimRig_Explodenut::ZombieAnimRig_Explodenut(ZombieAnimRig_Explodenut *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_06a02360;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Explodenut_06a02678;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x250));
  AnimRigLayerSet::AnimRigLayerSet((AnimRigLayerSet *)(this + 600));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x250),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Explodenut::StaticNew() */

ZombieAnimRig_Explodenut * ZombieAnimRig_Explodenut::StaticNew(void)

{
  ZombieAnimRig_Explodenut *this;
  
  this = ::operator_new(0x2a0);
  ZombieAnimRig_Explodenut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::getHeadLayerNames() */

void ZombieAnimRig_Explodenut::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba39d0 & 1;
  if (((DAT_06ba39d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba39d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3900,"_zombie_head_idle1");
    nop();
    std::string::string((string *)&DAT_06ba3908,"_zombie_head_idle2");
    nop();
    std::string::string((string *)&DAT_06ba3910,"_zombie_head_idle3");
    nop();
    std::string::string((string *)&DAT_06ba3918,"_zombie_head_walk1");
    nop();
    std::string::string((string *)&DAT_06ba3920,"_zombie_head_walk2");
    nop();
    std::string::string((string *)&DAT_06ba3928,"_zombie_head_walk3");
    nop();
    std::string::string((string *)&DAT_06ba3930,"_zombie_head_eat1");
    nop();
    std::string::string((string *)&DAT_06ba3938,"_zombie_head_eat2");
    nop();
    std::string::string((string *)&DAT_06ba3940,"_zombie_head_eat3");
    nop();
    __cxa_guard_release(&DAT_06ba39d0);
    __cxa_atexit(FUN_04eed4f4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba38e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba38e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3968,(string *)&DAT_06ba3900,(allocator *)&DAT_06ba3948);
    __cxa_guard_release(&DAT_06ba38e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3968,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3968);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::getArmLayerNames() */

void ZombieAnimRig_Explodenut::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba38f0 & 1;
  if (((DAT_06ba38f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba38f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba38b0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba38b8,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba38c0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06ba38c8,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06ba38d0,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06ba38f0);
    __cxa_atexit(FUN_04eed52c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba39c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba39c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba39a0,(string *)&DAT_06ba38b0,(allocator *)&DAT_06ba38d8);
    __cxa_guard_release(&DAT_06ba39c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba39a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba39a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::AddLayerSet(std::string, std::vector<std::string,
   std::allocator<std::string > >) */

void __thiscall
ZombieAnimRig_Explodenut::AddLayerSet
          (ZombieAnimRig_Explodenut *this,undefined8 param_2,vector *param_3)

{
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,param_3);
  AnimRigLayerSet::AddSet((AnimRigLayerSet *)(this + 600),asStack_28,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Explodenut::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Explodenut::onPopAnimInitialized(ZombieAnimRig_Explodenut *this)

{
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  FUN_05475d88(asStack_40,&DAT_06ba38d8);
  std::string::string(asStack_38,"_zombie_head_idle1");
  std::string::string(asStack_30,"_zombie_head_walk1");
  std::string::string(asStack_28,"_zombie_head_eat1");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_48);
  AddLayerSet(this,asStack_40,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  nop();
  nop();
  std::string::~string(asStack_40);
  FUN_05475d88(asStack_40,&DAT_06ba39e0);
  std::string::string(asStack_38,"_zombie_head_idle2");
  std::string::string(asStack_30,"_zombie_head_walk2");
  std::string::string(asStack_28,"_zombie_head_eat2");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_48);
  AddLayerSet(this,asStack_40,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  nop();
  nop();
  std::string::~string(asStack_40);
  FUN_05475d88(asStack_40,&DAT_06ba38e8);
  std::string::string(asStack_38,"_zombie_head_idle3");
  std::string::string(asStack_30,"_zombie_head_walk3");
  std::string::string(asStack_28,"_zombie_head_eat3");
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_20,asStack_38,3,auStack_48);
  AddLayerSet(this,asStack_40,avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  nop();
  nop();
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

