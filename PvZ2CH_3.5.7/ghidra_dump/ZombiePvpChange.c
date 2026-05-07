// Class: ZombiePvpChange


/* ZombiePvpChange::~ZombiePvpChange() */

void __thiscall ZombiePvpChange::~ZombiePvpChange(ZombiePvpChange *this)

{
  *(undefined ***)this = &PTR_GetClass_0691d750;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpChange_0691e178;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombiePvpChange::~ZombiePvpChange() */

void __thiscall ZombiePvpChange::~ZombiePvpChange(ZombiePvpChange *this)

{
  ~ZombiePvpChange(this + -0x10);
  return;
}


/* ZombiePvpChange::~ZombiePvpChange() */

void __thiscall ZombiePvpChange::~ZombiePvpChange(ZombiePvpChange *this)

{
  ~ZombiePvpChange(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePvpChange::~ZombiePvpChange() */

void __thiscall ZombiePvpChange::~ZombiePvpChange(ZombiePvpChange *this)

{
  ~ZombiePvpChange(this + -0x10);
  return;
}


/* ZombiePvpChange::ZombiePvpChange() */

void __thiscall ZombiePvpChange::ZombiePvpChange(ZombiePvpChange *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0691d750;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpChange_0691e178;
  return;
}


/* ZombiePvpChange::StaticNew() */

ZombiePvpChange * ZombiePvpChange::StaticNew(void)

{
  ZombiePvpChange *this;
  
  this = ::operator_new(0x810);
  ZombiePvpChange(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpChange::StaticClassInit() */

void ZombiePvpChange::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpChange");
    (*pcVar2)(plVar1,asStack_10,FUN_0499a9dc,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpChange::StaticGetClass() */

long * ZombiePvpChange::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpChange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpChange::GetClass() const */

long * ZombiePvpChange::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpChange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpChange::onUpdate() */

void __thiscall ZombiePvpChange::onUpdate(ZombiePvpChange *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  ZombieBasic::onUpdate((ZombieBasic *)this);
  cVar1 = (**(code **)(*(long *)this + 0x4c0))(this);
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x80c);
    *(float *)(this + 0x80c) = fVar3 - fVar2;
    if (fVar3 - fVar2 <= 0.0) {
      (**(code **)(*(long *)this + 0x4b8))(this);
    }
  }
  return;
}


/* ZombiePvpChange::onZombieInitialize() */

void __thiscall ZombiePvpChange::onZombieInitialize(ZombiePvpChange *this)

{
  ZombiePvpChangeProps *pZVar1;
  
  ZombieBasic::onZombieInitialize((ZombieBasic *)this);
  pZVar1 = Zombie::GetProps<ZombiePvpChangeProps>((Zombie *)this);
  *(undefined4 *)(this + 0x80c) = *(undefined4 *)(pZVar1 + 0x210);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpChange::ApplyZombieFood() */

void __thiscall ZombiePvpChange::ApplyZombieFood(ZombiePvpChange *this)

{
  char cVar1;
  ZombiePvpChangeProps *pZVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      pZVar2 = Zombie::GetProps<ZombiePvpChangeProps>((Zombie *)this);
      *(undefined4 *)(this + 0x80c) = *(undefined4 *)(pZVar2 + 0x210);
      pZVar2 = Zombie::GetProps<ZombiePvpChangeProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
      Zombie::setHelm(*(Zombie **)(pZVar2 + 0x214),this,2);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_10 = *(undefined4 *)(puVar3 + 1);
      fStack_14 = (float)((ulong)*puVar3 >> 0x20);
      _local_18 = CONCAT44(fStack_14 - 30.0,(int)*puVar3);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_28,"POPANIM_EFFECTS_SMOKE_EFFECT");
      GetPAMByName(asStack_28);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      nop();
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1)
      ;
      Effect_PopAnim::SetCentered(this_00,true);
      FUN_0499a4d8(this_00 + 0x1c);
      std::string::string((string *)aRStack_20,"idle");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
      std::string::~string((string *)aRStack_20);
      nop();
      Zombie::ApplyZombieFood((Zombie *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpChange::CancelZombieFood() */

void __thiscall ZombiePvpChange::CancelZombieFood(ZombiePvpChange *this)

{
  char cVar1;
  ZombiePvpChangeProps *pZVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      pZVar2 = Zombie::GetProps<ZombiePvpChangeProps>((Zombie *)this);
      *(undefined4 *)(this + 0x80c) = *(undefined4 *)(pZVar2 + 0x210);
      Zombie::setHelm((Zombie *)0x0,this,0);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_10 = *(undefined4 *)(puVar3 + 1);
      fStack_14 = (float)((ulong)*puVar3 >> 0x20);
      _local_18 = CONCAT44(fStack_14 - 30.0,(int)*puVar3);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_28,"POPANIM_EFFECTS_SMOKE_EFFECT");
      GetPAMByName(asStack_28);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      std::string::~string(asStack_28);
      nop();
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1)
      ;
      Effect_PopAnim::SetCentered(this_00,true);
      FUN_0499a4d8(this_00 + 0x1c);
      std::string::string((string *)aRStack_20,"idle");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
      std::string::~string((string *)aRStack_20);
      nop();
      Zombie::CancelZombieFood((Zombie *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

