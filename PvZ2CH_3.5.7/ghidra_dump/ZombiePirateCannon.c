// Class: ZombiePirateCannon


/* ZombiePirateCannon::onPrepAnimStopped(std::string const&) */

void ZombiePirateCannon::onPrepAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x21);
  return;
}


/* ZombiePirateCannon::onExplodeAnimStopped(std::string const&) */

void ZombiePirateCannon::onExplodeAnimStopped(string *param_1)

{
  Zombie::TakeFatalDamage((Zombie *)param_1,(BoardEntity *)0x0);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* ZombiePirateCannon::onFiringAnimStopped(std::string const&) */

void ZombiePirateCannon::onFiringAnimStopped(string *param_1)

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
  Zombie::setZombieState((Zombie *)param_1,0x1f);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x828);
    uVar3 = FUN_046ab244(uVar5,*(undefined8 *)(param_1 + 0x830));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined4 *)FUN_046ab258(uVar5,uVar4);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(puVar2 + 2),0,param_1,*puVar2,1);
    uVar4 = uVar4 + 1;
  }
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(param_1 + 0x828))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::onEnterState_CannonPrepForFire(ZombieState) */

void ZombiePirateCannon::onEnterState_CannonPrepForFire(Zombie *param_1)

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
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(std::string_const&)>
            (aDStack_38,asStack_50);
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
/* ZombiePirateCannon::onEnterState_CannonExplode(ZombieState) */

void ZombiePirateCannon::onEnterState_CannonExplode(Zombie *param_1)

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
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
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
/* ZombiePirateCannon::chooseDeathState(DamageInfo const&) */

void __thiscall ZombiePirateCannon::chooseDeathState(ZombiePirateCannon *this,DamageInfo *param_1)

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
      std::string::string((string *)aRStack_10,"broadside_ch");
      Achievement::SubmitOneShotAchievement((string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateCannon::ZombiePirateCannon() */

void __thiscall ZombiePirateCannon::ZombiePirateCannon(ZombiePirateCannon *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068aca20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateCannon_068ad498;
  DVec3::DVec3((DVec3 *)(this + 0x804));
  DVec3::DVec3((DVec3 *)(this + 0x810));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x828));
  return;
}


/* ZombiePirateCannon::StaticNew() */

ZombiePirateCannon * ZombiePirateCannon::StaticNew(void)

{
  ZombiePirateCannon *this;
  
  this = ::operator_new(0x840);
  ZombiePirateCannon(this);
  return this;
}


/* ZombiePirateCannon::~ZombiePirateCannon() */

void __thiscall ZombiePirateCannon::~ZombiePirateCannon(ZombiePirateCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_068aca20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateCannon_068ad498;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateCannon::~ZombiePirateCannon() */

void __thiscall ZombiePirateCannon::~ZombiePirateCannon(ZombiePirateCannon *this)

{
  ~ZombiePirateCannon(this + -0x10);
  return;
}


/* ZombiePirateCannon::~ZombiePirateCannon() */

void __thiscall ZombiePirateCannon::~ZombiePirateCannon(ZombiePirateCannon *this)

{
  ~ZombiePirateCannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateCannon::~ZombiePirateCannon() */

void __thiscall ZombiePirateCannon::~ZombiePirateCannon(ZombiePirateCannon *this)

{
  ~ZombiePirateCannon(this + -0x10);
  return;
}


/* ZombiePirateCannon::updateState_CannonWaiting() */

void __thiscall ZombiePirateCannon::updateState_CannonWaiting(ZombiePirateCannon *this)

{
  ZombiePirateCannonProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (fVar2 <= *(float *)(this + 0x81c)) {
    return;
  }
  pZVar1 = Zombie::GetProps<ZombiePirateCannonProps>((Zombie *)this);
  *(undefined4 *)(this + 0x81c) = *(undefined4 *)(pZVar1 + 0x214);
  if (*(int *)(this + 0x800) != 0) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x22);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::updateState_Walk() */

void __thiscall ZombiePirateCannon::updateState_Walk(ZombiePirateCannon *this)

{
  ZombiePirateCannonProps *pZVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombiePirateCannonProps>((Zombie *)this);
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
/* ZombiePirateCannon::onEnterState_CannonFiring(ZombieState) */

void ZombiePirateCannon::onEnterState_CannonFiring
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,Zombie *param_4)

{
  int iVar1;
  int iVar2;
  ZombiePirateCannonProps *pZVar3;
  string *psVar4;
  SexyVector3 *pSVar5;
  SexyVector3 *this;
  long *extraout_x0;
  ZombiePirateCannonProps *pZVar6;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  string asStack_90 [8];
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined1 local_5b;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombiePirateCannonProps>(param_4);
  plVar7 = *(long **)(gLawnApp + 0x9f0);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_60);
  local_60 = *(undefined4 *)(param_4 + 0x50);
  local_5b = 1;
  pcVar8 = *(code **)(*plVar7 + 0x318);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_88,"pirate_imp");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  pSVar5 = (SexyVector3 *)
           (*pcVar8)(plVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_78,0xfffffffb,
                     (SpawnZombieParams *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  std::string::~string((string *)&local_88);
  nop();
  if (((DAT_06b1f6f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b1f6f0), iVar1 != 0)) {
    param_3 = 0x42140000;
    param_2 = 0x3f800000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1f720,-65.0,1.0,37.0);
    __cxa_guard_release(&DAT_06b1f6f0);
  }
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_4);
  local_78 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06b1f720);
  local_74 = param_2;
  local_70 = param_3;
  BoardEntity::PlaceOnBoard(pSVar5);
  nop();
  iVar1 = BoardTransforms::GridToBoardSpaceX(4);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar10 = (float)iVar1 + (float)iVar2 * 0.25;
  fVar9 = (float)(**(code **)(*(long *)param_4 + 0x308))(0x3f800000,param_4);
  pZVar6 = Zombie::GetProps<ZombiePirateCannonProps>(param_4);
  if (fVar9 <= *(float *)(pZVar6 + 0x218)) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar10 = fVar10 + (float)iVar1;
  }
  DVec3::DVec3((DVec3 *)&local_88);
  local_84 = *(undefined4 *)(this + 4);
  local_80 = 0;
  local_88 = fVar10;
  (**(code **)(*extraout_x0 + 0xa08))
            (fVar10,local_84,0,*(undefined4 *)(pZVar3 + 0x224),*(undefined4 *)(pZVar3 + 0x220),
             extraout_x0,0);
  plVar7 = (long *)Zombie::GetAnimRig(param_4);
  pcVar8 = *(code **)(*plVar7 + 0x168);
  std::string::string(asStack_90,"fire");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_4,onFiringAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(std::string_const&)>
            (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  (*pcVar8)(plVar7,asStack_90,0,aDStack_38);
  std::string::~string(asStack_90);
  nop();
  *(int *)(param_4 + 0x800) = *(int *)(param_4 + 0x800) + -1;
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::launchDeathImps() */

void ZombiePirateCannon::launchDeathImps(void)

{
  int iVar1;
  int iVar2;
  RealObject *in_x0;
  ZombiePirateCannonProps *pZVar3;
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
  pZVar3 = Zombie::GetProps<ZombiePirateCannonProps>((Zombie *)in_x0);
  if (0 < *(int *)(pZVar3 + 0x228)) {
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
      std::string::string(asStack_48,"pirate_imp");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
      pSVar5 = (SexyVector3 *)(*pcVar8)(plVar6,(DVec3 *)&local_40,0xfffffffb,(string *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string(asStack_48);
      nop();
      if (((DAT_06b1f6d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1f6d8), iVar2 != 0)) {
        in_s1 = 1.0;
        in_s2 = 0x428a0000;
        EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1f708,-55.0,1.0,69.0);
        __cxa_guard_release(&DAT_06b1f6d8);
      }
      iVar7 = iVar7 + 1;
      local_40 = (float)Sexy::SexyVector3::operator+(this,(SexyVector3 *)&DAT_06b1f708);
      local_3c = in_s1;
      local_38 = in_s2;
      BoardEntity::PlaceOnBoard(pSVar5);
      nop();
      iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar3 + 0x22c));
      iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar3 + 0x230));
      DVec3::DVec3((DVec3 *)&local_40);
      fVar9 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x3f800000);
      pcVar8 = *(code **)(*(long *)in_x0 + 0x300);
      local_40 = (float)iVar2 + fVar9 * (float)(iVar1 - iVar2);
      BoardConstants::NUMBER_OF_ROWS();
      iVar2 = (*pcVar8)();
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
      local_3c = (float)iVar2;
      fVar10 = *(float *)(pZVar3 + 0x238);
      fVar11 = *(float *)(pZVar3 + 0x23c);
      fVar9 = (float)(**(code **)(*(long *)in_x0 + 0x308))(0x40000000);
      in_s1 = local_3c;
      in_s2 = local_38;
      (**(code **)(*extraout_x0 + 0xa08))
                (local_40,local_3c,local_38,fVar10 + fVar11 * (fVar9 + -1.0),
                 *(undefined4 *)(pZVar3 + 0x234),extraout_x0,0);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    } while (iVar7 < *(int *)(pZVar3 + 0x228));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateCannon::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePirateCannon::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  param_1[0x820] = (string)0x1;
  launchDeathImps();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::StaticClassInit() */

void ZombiePirateCannon::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePirateCannon");
      (*pcVar4)(plVar1,asStack_150,FUN_046ac5d4,0x840,0);
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
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046ac16c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_PrepForFire");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046ac16c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Firing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046ac16c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombiePirateCannon,void(ZombiePirateCannon::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateCannon,void(ZombiePirateCannon::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PCannon_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046ac16c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePirateCannon::StaticGetClass() */

long * ZombiePirateCannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateCannon::GetClass() const */

long * ZombiePirateCannon::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::onPlaceOnBoard() */

void __thiscall ZombiePirateCannon::onPlaceOnBoard(ZombiePirateCannon *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ZombiePirateCannonProps *pZVar4;
  SexyVector3 *pSVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = Zombie::GetProps<ZombiePirateCannonProps>((Zombie *)this);
  *(undefined4 *)(this + 0x800) = *(undefined4 *)(pZVar4 + 0x30);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x804),pSVar5);
  fVar6 = (float)(**(code **)(*(long *)this + 0x308))(_FUN_046acb18,this);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)iVar2 + (fVar6 + 0.75) * (float)iVar3,*(float *)(this + 0x808),
             *(float *)(this + 0x80c));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x810),(SexyVector3 *)aVStack_18);
  pZVar4 = Zombie::GetProps<ZombiePirateCannonProps>((Zombie *)this);
  uVar1 = *(undefined4 *)(pZVar4 + 0x210);
  this[0x820] = (ZombiePirateCannon)0x0;
  *(undefined4 *)(this + 0x81c) = uVar1;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::clear
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828));
  Zombie::onPlaceOnBoard((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannon::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePirateCannon::onApplyCondition(ZombiePirateCannon *this,int param_2)

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
    cVar1 = Zombie::isInState((Zombie *)this,0x22);
    if (cVar1 != '\0') {
      Zombie::EndCondition((Zombie *)this,param_2);
    }
  }
  else {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
                             (pEVar2,param_2);
    uVar6 = *(undefined8 *)(this + 0x828);
    lVar3 = FUN_046ab244(uVar6,*(undefined8 *)(this + 0x830));
    for (lVar5 = 0; lVar5 != lVar3; lVar5 = lVar5 + 1) {
      piVar4 = (int *)FUN_046ab258(uVar6,lVar5);
      if (param_2 == *piVar4) {
        if (fVar7 <= (float)piVar4[2]) goto LAB_046acbdc;
        piVar4[2] = (int)fVar7;
        Zombie::EndCondition((Zombie *)this,param_2);
        goto LAB_046acbe8;
      }
    }
    GridItemConditionEntry::GridItemConditionEntry((GridItemConditionEntry *)local_18);
    local_18[0] = param_2;
    local_10 = fVar7;
    std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::push_back
              ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x828),
               (ZombieConditionEntry *)local_18);
LAB_046acbdc:
    Zombie::EndCondition((Zombie *)this,param_2);
  }
LAB_046acbe8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

