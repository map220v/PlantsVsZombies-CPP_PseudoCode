// Class: PlantAnimRig_Pineapple


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::getIdleAnimationName() */

void __thiscall PlantAnimRig_Pineapple::getIdleAnimationName(PlantAnimRig_Pineapple *this)

{
  long lVar1;
  int iVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = Sexy::Rand(3);
  if (iVar2 == 2) {
    std::string::string(in_x8,"idle3");
    nop();
  }
  else if (iVar2 == 1) {
    std::string::string(in_x8,"idle2");
    nop();
  }
  else {
    std::string::string(in_x8,"idle");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::StaticClassInit() */

void PlantAnimRig_Pineapple::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Pineapple");
    (*pcVar2)(plVar1,asStack_10,FUN_0410cf14,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pineapple::StaticGetClass() */

long * PlantAnimRig_Pineapple::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pineapple",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Pineapple::GetClass() const */

long * PlantAnimRig_Pineapple::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Pineapple",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Pineapple::IsSleeping() */

bool __thiscall PlantAnimRig_Pineapple::IsSleeping(PlantAnimRig_Pineapple *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  bVar1 = false;
  if (0xe < iVar2) {
    iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
    bVar1 = iVar2 < 0x12;
  }
  return bVar1;
}


/* PlantAnimRig_Pineapple::IsAttacking() */

bool __thiscall PlantAnimRig_Pineapple::IsAttacking(PlantAnimRig_Pineapple *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  bVar1 = false;
  if (0x11 < iVar2) {
    iVar2 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
    bVar1 = iVar2 < 0x15;
  }
  return bVar1;
}


/* PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple() */

void __thiscall PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple(PlantAnimRig_Pineapple *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4d70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pineapple_067e4fd8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple() */

void __thiscall PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple(PlantAnimRig_Pineapple *this)

{
  ~PlantAnimRig_Pineapple(this + -0x10);
  return;
}


/* PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple() */

void __thiscall PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple(PlantAnimRig_Pineapple *this)

{
  ~PlantAnimRig_Pineapple(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple() */

void __thiscall PlantAnimRig_Pineapple::~PlantAnimRig_Pineapple(PlantAnimRig_Pineapple *this)

{
  ~PlantAnimRig_Pineapple(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlaySleepEnd() */

void __thiscall PlantAnimRig_Pineapple::PlaySleepEnd(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"cd_off");
  uVar1 = PlantAnimRig_Jackfruit::PlayOnceCommon((PlantAnimRig_Jackfruit *)this,0x11,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlayAttackEnd() */

void __thiscall PlantAnimRig_Pineapple::PlayAttackEnd(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"attack_off");
  uVar1 = PlantAnimRig_Jackfruit::PlayOnceCommon((PlantAnimRig_Jackfruit *)this,0x14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_Pineapple::PlantAnimRig_Pineapple() */

void __thiscall PlantAnimRig_Pineapple::PlantAnimRig_Pineapple(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067e4d70;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pineapple_067e4fd8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c0) = uVar1;
  *(undefined4 *)(this + 0x3c4) = uVar1;
  return;
}


/* PlantAnimRig_Pineapple::StaticNew() */

PlantAnimRig_Pineapple * PlantAnimRig_Pineapple::StaticNew(void)

{
  PlantAnimRig_Pineapple *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Pineapple(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlaySleepLoop() */

void __thiscall PlantAnimRig_Pineapple::PlaySleepLoop(PlantAnimRig_Pineapple *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"cd");
  PlantAnimRig_Jackfruit::PlayLoopCommon((PlantAnimRig_Jackfruit *)this,0x10,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlayAttackLoop() */

void __thiscall PlantAnimRig_Pineapple::PlayAttackLoop(PlantAnimRig_Pineapple *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"attack");
  PlantAnimRig_Jackfruit::PlayLoopCommon((PlantAnimRig_Jackfruit *)this,0x13,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pineapple::GetNormalDamgeTime() */

undefined4 __thiscall PlantAnimRig_Pineapple::GetNormalDamgeTime(PlantAnimRig_Pineapple *this)

{
  RtObject *this_00;
  Plant *pPVar1;
  PlantPineapple *this_01;
  long lVar2;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  pPVar1 = Sexy::RtObject::Cast<Plant>(this_00);
  this_01 = Sexy::RtObject::Cast<PlantPineapple>(*(RtObject **)(pPVar1 + 0xa8));
  lVar2 = PlantPineapple::GetMyProps(this_01);
  return *(undefined4 *)(lVar2 + 700);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlayAttackBegin() */

void __thiscall PlantAnimRig_Pineapple::PlayAttackBegin(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)GetNormalDamgeTime(this);
  *(float *)(this + 0x3c0) = fVar3 + fVar2;
  std::string::string(asStack_10,"attack_on");
  uVar1 = PlantAnimRig_Jackfruit::PlayOnceCommon((PlantAnimRig_Jackfruit *)this,0x12,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAnimRig_Pineapple::GetSleepTime() */

undefined4 __thiscall PlantAnimRig_Pineapple::GetSleepTime(PlantAnimRig_Pineapple *this)

{
  RtObject *this_00;
  Plant *pPVar1;
  PlantPineapple *this_01;
  long lVar2;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  pPVar1 = Sexy::RtObject::Cast<Plant>(this_00);
  this_01 = Sexy::RtObject::Cast<PlantPineapple>(*(RtObject **)(pPVar1 + 0xa8));
  lVar2 = PlantPineapple::GetMyProps(this_01);
  return *(undefined4 *)(lVar2 + 0x2c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::PlaySleepBegin() */

void __thiscall PlantAnimRig_Pineapple::PlaySleepBegin(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)GetSleepTime(this);
  *(float *)(this + 0x3c0) = fVar3 + fVar2;
  std::string::string(asStack_10,"cd_on");
  uVar1 = PlantAnimRig_Jackfruit::PlayOnceCommon((PlantAnimRig_Jackfruit *)this,0xf,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pineapple::onUpdate() */

void __thiscall PlantAnimRig_Pineapple::onUpdate(PlantAnimRig_Pineapple *this)

{
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Plant *pPVar4;
  PlantPineapple *this_00;
  float fVar5;
  undefined4 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x3c0) < fVar5) {
    cVar1 = IsAttacking(this);
    if (cVar1 == '\0') {
      cVar1 = IsSleeping(this);
      if (cVar1 != '\0') {
        uVar6 = PVZ_EOT();
        *(undefined4 *)(this + 0x3c0) = uVar6;
        PlaySleepEnd(this);
      }
    }
    else {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x3c0) = uVar6;
      *(undefined4 *)(this + 0x3c4) = uVar6;
      PlayAttackEnd(this);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
      if (bVar2) {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
        pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
        this_00 = Sexy::RtObject::Cast<PlantPineapple>(*(RtObject **)(pPVar4 + 0xa8));
        PlantPineapple::ClearStore(this_00);
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x3b8));
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
      pPVar4 = Sexy::RtObject::Cast<Plant>(pRVar3);
      if (((pPVar4 != (Plant *)0x0) && (cVar1 = Plant::IsSuspended(pPVar4), cVar1 == '\0')) &&
         (fVar5 = (float)PVZ_T(), *(float *)(this + 0x3c4) < fVar5)) {
        std::string::string(asStack_10,"Play_Plant_BonkChoy_Nitro");
        RealObject::PlayPositionalSound((RealObject *)pPVar4,asStack_10,0.0);
        std::string::~string(asStack_10);
        nop();
        fVar5 = (float)PVZ_T();
        *(float *)(this + 0x3c4) = fVar5 + _FUN_0410eaac;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pineapple::onAnimStopped() */

void __thiscall PlantAnimRig_Pineapple::onAnimStopped(PlantAnimRig_Pineapple *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x218);
  if (iVar1 == 0xf) {
    PlaySleepLoop(this);
  }
  else if (iVar1 == 0x11) {
    (**(code **)(*(long *)this + 0x118))();
  }
  else if (iVar1 == 0x12) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x3c4) = uVar2;
    PlayAttackLoop(this);
  }
  else if (iVar1 == 0x14) {
    PlaySleepBegin(this);
  }
  else if (iVar1 == 4) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x3c4) = uVar2;
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  return;
}


/* PlantAnimRig_Pineapple::playPlantFoodMain() */

void __thiscall PlantAnimRig_Pineapple::playPlantFoodMain(PlantAnimRig_Pineapple *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x3c4) = uVar1;
  PlantAnimRig::playPlantFoodMain((PlantAnimRig *)this);
  return;
}

