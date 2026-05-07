// Class: Shield


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Shield::StaticClassInit() */

void Shield::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShieldProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03f6837c,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Shield");
    (*pcVar3)(plVar2,asStack_10,FUN_03f68990,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Shield::StaticGetClass() */

long * Shield::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"Shield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Shield::GetClass() const */

long * Shield::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"Shield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Shield::SetProps(ShieldProps const&) */

void __thiscall Shield::SetProps(Shield *this,ShieldProps *param_1)

{
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)param_1;
  return;
}


/* Shield::GetProps() */

Shield * __thiscall Shield::GetProps(Shield *this)

{
  return this + 0x1c;
}


/* Shield::hasShield() */

bool __thiscall Shield::hasShield(Shield *this)

{
  return 0.0 < *(float *)(this + 0x18);
}


/* Shield::getCurrentHitPoint() */

int __thiscall Shield::getCurrentHitPoint(Shield *this)

{
  return (int)*(float *)(this + 0x18);
}


/* Shield::setCurrentHitPoint(int) */

void __thiscall Shield::setCurrentHitPoint(Shield *this,int param_1)

{
  *(float *)(this + 0x18) = (float)param_1;
  return;
}


/* Shield::isExcessiveDamage(DamageInfo const&) */

bool __thiscall Shield::isExcessiveDamage(Shield *this,DamageInfo *param_1)

{
  return *(float *)(this + 0x18) < *(float *)(param_1 + 8);
}


/* Shield::CanDeployShield() */

bool __thiscall Shield::CanDeployShield(Shield *this)

{
  return *(float *)(this + 0x18) != *(float *)(this + 0x1c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Shield::GetShieldInfo() */

void Shield::GetShieldInfo(void)

{
  long in_x0;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Sexy::StrFormat(L"%d/%d",auStack_10,(ulong)(uint)(int)*(float *)(in_x0 + 0x18),
                  (ulong)(uint)(int)*(float *)(in_x0 + 0x1c));
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Shield::GetShieldPercent() */

void Shield::GetShieldPercent(void)

{
  long in_x0;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Sexy::StrFormat(L"[%.2f%%]",auStack_10,
                  (double)((*(float *)(in_x0 + 0x18) * 100.0) / *(float *)(in_x0 + 0x1c)));
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Shield::getDamageIndex(int) */

int __thiscall Shield::getDamageIndex(Shield *this,int param_1)

{
  return (int)((float)param_1 *
              ((*(float *)(this + 0x1c) - *(float *)(this + 0x18)) / *(float *)(this + 0x1c)));
}


/* Shield::Shield() */

void __thiscall Shield::Shield(Shield *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_067a1c30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined4 *)(this + 0x18) = 0;
  ShieldProps::ShieldProps((ShieldProps *)(this + 0x1c));
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return;
}


/* Shield::StaticNew() */

Shield * Shield::StaticNew(void)

{
  Shield *this;
  
  this = ::operator_new(0x28);
  Shield(this);
  return this;
}


/* Shield::~Shield() */

void __thiscall Shield::~Shield(Shield *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1c30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* Shield::~Shield() */

void __thiscall Shield::~Shield(Shield *this)

{
  ~Shield(this);
  AK::FreeHook(this);
  return;
}


/* Shield::updateLayers() */

void __thiscall Shield::updateLayers(Shield *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  iVar1 = (**(code **)(*plVar2 + 600))();
  iVar1 = getDamageIndex(this,iVar1);
  if (*(int *)(this + 0x20) != iVar1) {
    *(int *)(this + 0x20) = iVar1;
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    (**(code **)(*plVar2 + 0x260))(plVar2,*(undefined4 *)(this + 0x20));
  }
  return;
}


/* Shield::SetAnimRig(Sexy::RtWeakPtr<PlantAnimRig_Shielded>) */

void __thiscall Shield::SetAnimRig(Shield *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_2);
  updateLayers(this);
  return;
}


/* Shield::TakeSmashAttack(BoardEntity*) */

char Shield::TakeSmashAttack(BoardEntity *param_1)

{
  char cVar1;
  
  cVar1 = hasShield((Shield *)param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    updateLayers((Shield *)param_1);
  }
  return cVar1;
}


/* Shield::TryBlockZombossRush(Zombie*) */

char Shield::TryBlockZombossRush(Zombie *param_1)

{
  char cVar1;
  
  cVar1 = hasShield((Shield *)param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    updateLayers((Shield *)param_1);
  }
  return cVar1;
}


/* Shield::DeployShield() */

void __thiscall Shield::DeployShield(Shield *this)

{
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x1c);
  updateLayers(this);
  return;
}


/* Shield::ReduceDamage(DamageInfo const&) */

void Shield::ReduceDamage(DamageInfo *param_1)

{
  char cVar1;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  cVar1 = hasShield((Shield *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = isExcessiveDamage((Shield *)param_1,in_x1);
  if (cVar1 == '\0') {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - *(float *)(in_x1 + 8);
    *(undefined4 *)(in_x8 + 8) = 0;
  }
  else {
    *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) - *(float *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  updateLayers((Shield *)param_1);
  return;
}


/* Shield::Undamaged() */

bool __thiscall Shield::Undamaged(Shield *this)

{
  return 0.0 < *(float *)(this + 0x18);
}

