// Class: ZombiePVPCannon


/* ZombiePVPCannon::modifyBodyDamage(DamageInfo const&) */

DamageInfo * ZombiePVPCannon::modifyBodyDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (param_1[0x820] != (DamageInfo)0x0) {
    *(undefined4 *)(in_x8 + 8) = 0;
  }
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onEnterState_Walk(ZombieState) */

void ZombiePVPCannon::onEnterState_Walk(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::string(asStack_58,"Play_Zomb_Pirate_Imp_Mvmt_Cannon_Roll");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::playDeathAnimation() */

void __thiscall ZombiePVPCannon::playDeathAnimation(ZombiePVPCannon *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x820] == (ZombiePVPCannon)0x0) {
    plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
    (**(code **)(*plVar1 + 0x178))(plVar1,this);
  }
  std::string::string(asStack_10,"Play_Zomb_Pirate_Imp_Mvmt_Cannon_Death");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::playDeathAnimation((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPCannon::onPrepAnimStopped(std::string const&) */

void ZombiePVPCannon::onPrepAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x21);
  return;
}


/* ZombiePVPCannon::onExplodeAnimStopped(std::string const&) */

void ZombiePVPCannon::onExplodeAnimStopped(string *param_1)

{
  Zombie::TakeFatalDamage((Zombie *)param_1,(BoardEntity *)0x0);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* ZombiePVPCannon::onFiringAnimStopped(std::string const&) */

void ZombiePVPCannon::onFiringAnimStopped(string *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = Zombie::isInState((Zombie *)param_1,0x22);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
  }
  Zombie::setZombieState((Zombie *)param_1,0x1f,0);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x840);
    uVar3 = FUN_0499e738(uVar5,*(undefined8 *)(param_1 + 0x848));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined4 *)FUN_0499e74c(uVar5,uVar4);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(puVar2 + 2),0,param_1,*puVar2,1);
    uVar4 = uVar4 + 1;
  }
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(param_1 + 0x840))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onEnterState_CannonPrepForFire(ZombieState) */

void ZombiePVPCannon::onEnterState_CannonPrepForFire(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"prep");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onPrepAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(std::string_const&)>(aDStack_38,asStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_50,"Play_PVZ_IMPCannon_PF");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_50,0.0);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onEnterState_CannonBigFiring(ZombieState) */

void ZombiePVPCannon::onEnterState_CannonBigFiring(Zombie *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar2 + 0x168);
  std::string::string(asStack_58,"plantfood");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onFiringAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onEnterState_CannonExplode(ZombieState) */

void ZombiePVPCannon::onEnterState_CannonExplode(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x2f0))();
  Zombie::ClearConditions(param_1);
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"final_die");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onExplodeAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::chooseDeathState(DamageInfo const&) */

void __thiscall ZombiePVPCannon::chooseDeathState(ZombiePVPCannon *this,DamageInfo *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  Zombie::setZombieState((Zombie *)this,5,0);
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (pPVar2 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), pPVar2 != (Plant *)0x0)) {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar3 + 8),"coconutcannon");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      std::string::string((string *)aRStack_10,"broadside_ch");
      Achievement::Queue((string *)aRStack_10,100.0);
      std::string::~string((string *)aRStack_10);
      nop();
      Achievement::ShowAll();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPCannon::ZombiePVPCannon() */

void __thiscall ZombiePVPCannon::ZombiePVPCannon(ZombiePVPCannon *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0691f7f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPCannon_06920280;
  DVec3::DVec3((DVec3 *)(this + 0x804));
  DVec3::DVec3((DVec3 *)(this + 0x810));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x828));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x840));
  return;
}


/* ZombiePVPCannon::StaticNew() */

ZombiePVPCannon * ZombiePVPCannon::StaticNew(void)

{
  ZombiePVPCannon *this;
  
  this = ::operator_new(0x858);
  ZombiePVPCannon(this);
  return this;
}


/* ZombiePVPCannon::~ZombiePVPCannon() */

void __thiscall ZombiePVPCannon::~ZombiePVPCannon(ZombiePVPCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_0691f7f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPCannon_06920280;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x840));
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(this + 0x828));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePVPCannon::~ZombiePVPCannon() */

void __thiscall ZombiePVPCannon::~ZombiePVPCannon(ZombiePVPCannon *this)

{
  ~ZombiePVPCannon(this + -0x10);
  return;
}


/* ZombiePVPCannon::~ZombiePVPCannon() */

void __thiscall ZombiePVPCannon::~ZombiePVPCannon(ZombiePVPCannon *this)

{
  ~ZombiePVPCannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPCannon::~ZombiePVPCannon() */

void __thiscall ZombiePVPCannon::~ZombiePVPCannon(ZombiePVPCannon *this)

{
  ~ZombiePVPCannon(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::getImpTargetPos() */

void __thiscall ZombiePVPCannon::getImpTargetPos(ZombiePVPCannon *this)

{
  int iVar1;
  int iVar2;
  ZombiePVPCannonProps *pZVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar1 = BoardTransforms::GridToBoardSpaceX(4);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar6 = (float)iVar1 + (float)iVar2 * 0.25;
  fVar5 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
  pZVar3 = Zombie::GetProps<ZombiePVPCannonProps>((Zombie *)this);
  if (fVar5 <= *(float *)(pZVar3 + 0x218)) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = fVar6 + (float)iVar1;
  }
  local_28 = fVar6;
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  uStack_24 = *(undefined4 *)(lVar4 + 4);
  local_10 = 0;
  local_18 = CONCAT44(uStack_24,local_28);
  local_20 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::updateState_Walk() */

void __thiscall ZombiePVPCannon::updateState_Walk(ZombiePVPCannon *this)

{
  ZombiePVPCannonProps *pZVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombiePVPCannonProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar1 + 0x21c);
  if (fVar2 <= fVar3) {
    local_18 = CurveLerp(0,this + 0x804,this + 0x810,2);
    local_14 = fVar3;
    local_10 = fVar2;
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::launchDeathImps() */

void ZombiePVPCannon::launchDeathImps(void)

{
  int iVar1;
  int iVar2;
  RealObject *in_x0;
  ZombiePVPCannonProps *pZVar3;
  SexyVector3 *this;
  long *extraout_x0;
  string *psVar4;
  SexyVector3 *pSVar5;
  long *plVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  float in_s1;
  undefined4 in_s2;
  float fVar10;
  float fVar11;
  string asStack_48 [8];
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_30,"Play_Zomb_Pirate_Imp_Mvmt_Cannon_Final");
  RealObject::PlayPositionalSound(in_x0,(string *)&local_30,0.0);
  std::string::~string((string *)&local_30);
  nop();
  pZVar3 = Zombie::GetProps<ZombiePVPCannonProps>((Zombie *)in_x0);
  if (0 < *(int *)(pZVar3 + 0x22c)) {
    iVar7 = 0;
    this = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)in_x0);
    do {
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
      local_30 = *(undefined4 *)(in_x0 + 0x50);
      local_2b = 1;
      plVar6 = *(long **)(gLawnApp + 0x9f0);
      pcVar8 = *(code **)(*plVar6 + 0x318);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string(asStack_48,"pvp_cannonimp");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
      pSVar5 = (SexyVector3 *)(*pcVar8)(plVar6,(DVec3 *)&local_40,0xfffffffb,(string *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string(asStack_48);
      nop();
      if (((DAT_06b73d28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73d28), iVar2 != 0)) {
        in_s1 = 1.0;
        in_s2 = 0x428a0000;
        EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b73cd8,-55.0,1.0,69.0);
        __cxa_guard_release(&DAT_06b73d28);
      }
      iVar7 = iVar7 + 1;
      local_40 = (float)Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06b73cd8);
      local_3c = in_s1;
      local_38 = in_s2;
      BoardEntity::PlaceOnBoard(pSVar5);
      FUN_0499e758(pSVar5 + 0x59b);
      nop();
      iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar3 + 0x230));
      iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar3 + 0x234));
      DVec3::DVec3((DVec3 *)&local_40);
      fVar9 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x3f800000);
      pcVar8 = *(code **)(*(long *)in_x0 + 0x300);
      local_40 = (float)iVar2 + fVar9 * (float)(iVar1 - iVar2);
      BoardConstants::NUMBER_OF_ROWS();
      iVar2 = (*pcVar8)();
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
      local_3c = (float)iVar2;
      fVar10 = *(float *)(pZVar3 + 0x23c);
      fVar11 = *(float *)(pZVar3 + 0x240);
      fVar9 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x40000000);
      in_s1 = local_3c;
      in_s2 = local_38;
      (**(code **)(*extraout_x0 + 0xa08))
                (local_40,local_3c,local_38,fVar10 + fVar11 * (fVar9 + -1.0),
                 *(undefined4 *)(pZVar3 + 0x238),extraout_x0,0);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    } while (iVar7 < *(int *)(pZVar3 + 0x22c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::FireZombieImp() */

void ZombiePVPCannon::FireZombieImp(void)

{
  vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *this;
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombiePVPCannonProps *pZVar3;
  string *psVar4;
  SexyVector3 *pSVar5;
  SexyVector3 *this_00;
  long *extraout_x0;
  long *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombiePVPCannonProps>(in_x0);
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = *(undefined4 *)(in_x0 + 0x50);
  local_2b = 1;
  pcVar7 = *(code **)(*plVar6 + 0x318);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_50,"pvp_cannonimp");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  pSVar5 = (SexyVector3 *)
           (*pcVar7)(plVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0xfffffffb,
                     (SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string((string *)&local_50);
  nop();
  if (((DAT_06b73d48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b73d48), iVar2 != 0)) {
    in_s2 = 0x42140000;
    in_s1 = 0x3f800000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b73cc8,-65.0,1.0,37.0);
    __cxa_guard_release(&DAT_06b73d48);
  }
  this = (vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(in_x0 + 0x828);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  uVar8 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&DAT_06b73cc8);
  local_40 = CONCAT44(in_s1,uVar8);
  local_38 = in_s2;
  BoardEntity::PlaceOnBoard(pSVar5);
  FUN_0499e758(pSVar5 + 0x59b);
  nop();
  DVec3::DVec3((DVec3 *)&local_50);
  cVar1 = std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::empty(this);
  if (cVar1 == '\0') {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    pSVar5 = (SexyVector3 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,pSVar5);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_58);
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::erase(this,local_40);
  }
  else {
    uVar8 = getImpTargetPos((ZombiePVPCannon *)in_x0);
    local_40 = CONCAT44(in_s1,uVar8);
    local_38 = in_s2;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
  }
  (**(code **)(*extraout_x0 + 0xa08))
            (local_50,local_4c,local_48,*(undefined4 *)(pZVar3 + 0x224),
             *(undefined4 *)(pZVar3 + 0x220),extraout_x0,0);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onEnterState_CannonFiring(ZombieState) */

void ZombiePVPCannon::onEnterState_CannonFiring(Zombie *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FireZombieImp();
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar2 + 0x168);
  std::string::string(asStack_58,"fire");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onFiringAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(std::string_const&)>(aDStack_38,aCStack_50);
  (*pcVar3)(plVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePVPCannon::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    cVar2 = Zombie::isInState((Zombie *)param_1,0x22);
    if (cVar2 == '\0') {
      param_1[0x820] = (string)0x1;
      launchDeathImps();
    }
    else {
      std::string::string(asStack_10,"Play_PVZ_IMPCannon_PF");
      RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      FireZombieImp();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::updateState_CannonWaiting() */

void ZombiePVPCannon::updateState_CannonWaiting(void)

{
  vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *this;
  PlaybackController *this_00;
  char cVar1;
  bool bVar2;
  Zombie *in_x0;
  ZombiePVPCannonProps *pZVar3;
  SexyVector3 *pSVar4;
  uchar uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)Zombie::getTimeInState(in_x0);
  fVar8 = *(float *)(in_x0 + 0x81c);
  if (fVar8 < fVar6) {
    pZVar3 = Zombie::GetProps<ZombiePVPCannonProps>(in_x0);
    *(undefined4 *)(in_x0 + 0x81c) = *(undefined4 *)(pZVar3 + 0x214);
    if (*(int *)(in_x0 + 0x800) == 0) {
      Zombie::setZombieState();
    }
    else {
      this = (vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)(in_x0 + 0x828);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::clear(this);
      cVar1 = (**(code **)(*(long *)in_x0 + 0x4c0))();
      if (cVar1 == '\0') {
        cVar1 = FUN_0499e728(in_x0[0x174]);
        if (cVar1 == '\0') {
          uVar7 = getImpTargetPos((ZombiePVPCannon *)in_x0);
        }
        else {
          uVar7 = PlaybackController::GetParamVector3((PlaybackController *)(in_x0 + 0x140),'\n');
        }
        local_18 = CONCAT44(fVar8,uVar7);
        std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                  (this,(SexyVector3 *)&local_18);
        Zombie::setZombieState();
      }
      else {
        cVar1 = FUN_0499e728(in_x0[0x174]);
        if (cVar1 == '\0') {
          uVar7 = getImpTargetPos((ZombiePVPCannon *)in_x0);
          local_18 = CONCAT44(fVar8,uVar7);
          std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                    (this,(SexyVector3 *)&local_18);
          uVar7 = getImpTargetPos((ZombiePVPCannon *)in_x0);
          local_18 = CONCAT44(fVar8,uVar7);
          std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                    (this,(SexyVector3 *)&local_18);
          uVar7 = getImpTargetPos((ZombiePVPCannon *)in_x0);
        }
        else {
          this_00 = (PlaybackController *)(in_x0 + 0x140);
          uVar7 = PlaybackController::GetParamVector3(this_00,'\n');
          local_18 = CONCAT44(fVar8,uVar7);
          std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                    (this,(SexyVector3 *)&local_18);
          uVar7 = PlaybackController::GetParamVector3(this_00,'\v');
          local_18 = CONCAT44(fVar8,uVar7);
          std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                    (this,(SexyVector3 *)&local_18);
          uVar7 = PlaybackController::GetParamVector3(this_00,'\f');
        }
        local_18 = CONCAT44(fVar8,uVar7);
        std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                  (this,(SexyVector3 *)&local_18);
        Zombie::setZombieState();
      }
      cVar1 = FUN_0499e728(in_x0[0x174]);
      if (cVar1 == '\0') {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
        uVar5 = '\n';
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
              bVar2) {
          pSVar4 = (SexyVector3 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          PlaybackController::SetParam((PlaybackController *)(in_x0 + 0x140),uVar5,pSVar4);
          if ((uchar)(uVar5 + '\x01') == '\x14') break;
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_20);
          uVar5 = uVar5 + '\x01';
        }
        MessageRouter::Post<Zombie*,int,ZombiePVPCannon*,PlaybackAddParamsType>
                  ((MessageRouter *)gMessageRouter,Message::ZombiePlaybackAddParams);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::StaticClassInit() */

void ZombiePVPCannon::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombiePVPCannon");
      (*pcVar4)(plVar1,asStack_150,FUN_049a01b4,0x858,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499fa00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_PrepForFire");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499fa00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Firing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499fa00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_BigFiring");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499fa00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombiePVPCannon,void(ZombiePVPCannon::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPCannon,void(ZombiePVPCannon::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499fa00(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPCannon::StaticGetClass() */

long * ZombiePVPCannon::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPCannon::GetClass() const */

long * ZombiePVPCannon::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onPlaceOnBoard() */

void __thiscall ZombiePVPCannon::onPlaceOnBoard(ZombiePVPCannon *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ZombiePVPCannonProps *pZVar4;
  SexyVector3 *pSVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = Zombie::GetProps<ZombiePVPCannonProps>((Zombie *)this);
  *(undefined4 *)(this + 0x800) = *(undefined4 *)(pZVar4 + 0x30);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x804),pSVar5);
  fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3e4ccccd,this);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar2 + fVar6 * (float)iVar3,*(float *)(this + 0x808),
             *(float *)(this + 0x80c));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x810),(SexyVector3 *)aVStack_18);
  pZVar4 = Zombie::GetProps<ZombiePVPCannonProps>((Zombie *)this);
  uVar1 = *(undefined4 *)(pZVar4 + 0x210);
  this[0x820] = (ZombiePVPCannon)0x0;
  *(undefined4 *)(this + 0x81c) = uVar1;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x840));
  Zombie::onPlaceOnBoard((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannon::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePVPCannon::onApplyCondition(ZombiePVPCannon *this,int param_2)

{
  char cVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  int local_18 [2];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onApplyCondition();
  cVar1 = Zombie::isInState((Zombie *)this,0x21);
  if (cVar1 == '\0') {
    cVar1 = Zombie::isInState((Zombie *)this,0x23);
    if (cVar1 != '\0') {
      Zombie::EndCondition((Zombie *)this,param_2);
    }
  }
  else {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
                             (pEVar2,param_2);
    uVar6 = *(undefined8 *)(this + 0x840);
    lVar3 = FUN_0499e738(uVar6,*(undefined8 *)(this + 0x848));
    for (lVar5 = 0; lVar5 != lVar3; lVar5 = lVar5 + 1) {
      piVar4 = (int *)FUN_0499e74c(uVar6,lVar5);
      if (param_2 == *piVar4) {
        if (fVar7 <= (float)piVar4[2]) goto LAB_049a0704;
        piVar4[2] = (int)fVar7;
        Zombie::EndCondition((Zombie *)this,param_2);
        goto LAB_049a0710;
      }
    }
    GridItemConditionEntry::GridItemConditionEntry((GridItemConditionEntry *)local_18);
    local_18[0] = param_2;
    local_10 = fVar7;
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::push_back
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x840),
               (ZombieConditionEntry *)local_18);
LAB_049a0704:
    Zombie::EndCondition((Zombie *)this,param_2);
  }
LAB_049a0710:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

