// Class: ZombieBeachFisherman


/* ZombieBeachFisherman::onEnterState_FishermanReel(ZombieState) */

void ZombieBeachFisherman::onEnterState_FishermanReel(long param_1)

{
  *(undefined1 *)(param_1 + 0x811) = 1;
  return;
}


/* ZombieBeachFisherman::onIntroCompleted(std::string const&) */

void ZombieBeachFisherman::onIntroCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x20);
  return;
}


/* ZombieBeachFisherman::onAttackCompleted(std::string const&) */

void ZombieBeachFisherman::onAttackCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x20);
  return;
}


/* ZombieBeachFisherman::ZombieBeachFisherman() */

void __thiscall ZombieBeachFisherman::ZombieBeachFisherman(ZombieBeachFisherman *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0687f4e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachFisherman_0687ff88;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x808));
  this[0x811] = (ZombieBeachFisherman)0x0;
  this[0x810] = (ZombieBeachFisherman)0x1;
  return;
}


/* ZombieBeachFisherman::StaticNew() */

ZombieBeachFisherman * ZombieBeachFisherman::StaticNew(void)

{
  ZombieBeachFisherman *this;
  
  this = ::operator_new(0x818);
  ZombieBeachFisherman(this);
  return this;
}


/* ZombieBeachFisherman::~ZombieBeachFisherman() */

void __thiscall ZombieBeachFisherman::~ZombieBeachFisherman(ZombieBeachFisherman *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f4e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachFisherman_0687ff88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBeachFisherman::~ZombieBeachFisherman() */

void __thiscall ZombieBeachFisherman::~ZombieBeachFisherman(ZombieBeachFisherman *this)

{
  ~ZombieBeachFisherman(this + -0x10);
  return;
}


/* ZombieBeachFisherman::~ZombieBeachFisherman() */

void __thiscall ZombieBeachFisherman::~ZombieBeachFisherman(ZombieBeachFisherman *this)

{
  ~ZombieBeachFisherman(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBeachFisherman::~ZombieBeachFisherman() */

void __thiscall ZombieBeachFisherman::~ZombieBeachFisherman(ZombieBeachFisherman *this)

{
  ~ZombieBeachFisherman(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::blockGravestoneSpawning(Sexy::Point const&, bool*) */

void __thiscall
ZombieBeachFisherman::blockGravestoneSpawning
          (ZombieBeachFisherman *this,Point *param_1,bool *param_2)

{
  char cVar1;
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,aTStack_10);
  if (cVar1 != '\0') {
    *param_2 = true;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachFisherman::updateState_FishermanCast() */

void __thiscall ZombieBeachFisherman::updateState_FishermanCast(ZombieBeachFisherman *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x800);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    fVar7 = *(float *)(this + 0x808);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    fVar5 = *pfVar3;
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar6 = *(float *)(this + 0x808);
    fVar8 = *pfVar3;
    cVar1 = std::signbit(fVar7 - fVar5);
    cVar2 = std::signbit(fVar6 - fVar8);
    if (cVar1 != cVar2) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x110))(plVar4,0);
      return;
    }
  }
  return;
}


/* ZombieBeachFisherman::onHookReachedTarget() */

void __thiscall ZombieBeachFisherman::onHookReachedTarget(ZombieBeachFisherman *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x21);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  cVar1 = FUN_046336f8(*(undefined4 *)(lVar2 + 0x1a8));
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)this,0x22);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* ZombieBeachFisherman::chooseDeathState(DamageInfo const&) */

void __thiscall
ZombieBeachFisherman::chooseDeathState(ZombieBeachFisherman *this,DamageInfo *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  cVar1 = Zombie::HasArm((Zombie *)this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x238))(this);
  }
  this_00 = (RtMixedPtrBase *)(this + 0x800);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  Zombie::setZombieState((Zombie *)this,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onHookReeledIn() */

void __thiscall ZombieBeachFisherman::onHookReeledIn(ZombieBeachFisherman *this)

{
  PopAnimRig *this_00;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_10,"zombie_fishingpole_hook");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  (**(code **)(*plVar1 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x800));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onCastCompleted(std::string const&) */

void ZombieBeachFisherman::onCastCompleted(string *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)param_1,0x21);
  if (cVar1 != '\0') {
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    std::string::string(asStack_40,"cast_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onEnterState_FishermanWait(ZombieState) */

void ZombieBeachFisherman::onEnterState_FishermanWait(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"cast_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachFisherman::updateState_FishermanAttackAdjacent() */

void __thiscall
ZombieBeachFisherman::updateState_FishermanAttackAdjacent(ZombieBeachFisherman *this)

{
  bool bVar1;
  RtObject *this_00;
  undefined8 extraout_x0;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Zombie>(this_00), bVar1)) {
    nop();
    (**(code **)(*(long *)this + 0x960))(this,extraout_x0);
  }
  return;
}


/* ZombieBeachFisherman::updateState_FishermanWait() */

void __thiscall ZombieBeachFisherman::updateState_FishermanWait(ZombieBeachFisherman *this)

{
  ZombieBeachFishermanProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
  if (fVar2 <= *(float *)(pZVar1 + 0x214)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::isValidTargetForAttackType(Sexy::RtWeakPtr<PlantGroup>,
   ZombieBeachFisherman::AttackType const&) const */

void __thiscall
ZombieBeachFisherman::isValidTargetForAttackType
          (ZombieBeachFisherman *this,RtMixedPtrBase *param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  PlantGroup *pPVar4;
  long *plVar5;
  ZombieBeachFishermanProps *pZVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pPVar4 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    std::string::string(asStack_10,"magicbeans");
    cVar1 = PlantGroup::HasPlant(pPVar4,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 == '\0') {
      if (*param_3 == 1) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        iVar3 = (**(code **)(*plVar5 + 0x180))();
        if (iVar3 != 1) {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          iVar3 = (**(code **)(*plVar5 + 0x180))();
          if (iVar3 != 0) goto LAB_04634bf0;
        }
        pPVar4 = (PlantGroup *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pZVar6 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
        cVar1 = PlantGroup::DoAllPlantsMatchTypeList(pPVar4,(vector *)(pZVar6 + 0x248),true);
        if (cVar1 == '\0') goto LAB_04634b68;
      }
LAB_04634bf0:
      pPVar4 = (PlantGroup *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar2 = PlantGroup::CanAttackRelocateGroup(pPVar4,(BoardEntity *)this);
      goto LAB_04634b6c;
    }
  }
LAB_04634b68:
  uVar2 = 0;
LAB_04634b6c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* ZombieBeachFisherman::registerForEvents() */

void __thiscall ZombieBeachFisherman::registerForEvents(ZombieBeachFisherman *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,blockGravestoneSpawning);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,bool*,Sexy::CBMemberTranslatorX<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,bool*)>>
            ((MessageRouter *)puVar1,Message::BlockGravestoneSpawning,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onEnterState_FishermanCast(ZombieState) */

void ZombieBeachFisherman::onEnterState_FishermanCast(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"cast");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onCastCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onEnterState_FishermanAttackAdjacent(ZombieState) */

void ZombieBeachFisherman::onEnterState_FishermanAttackAdjacent(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"toss");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAttackCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::castHook() */

void __thiscall ZombieBeachFisherman::castHook(ZombieBeachFisherman *this)

{
  undefined4 uVar1;
  int iVar2;
  ZombieBeachFishermanProps *pZVar3;
  undefined8 uVar4;
  PopAnimRig *pPVar5;
  Projectile *this_00;
  SexyVector3 *this_01;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Board *pBVar10;
  undefined4 uVar9;
  float local_8c;
  float local_88 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  string asStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
  uVar9 = *(undefined4 *)(pZVar3 + 0x224);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_78,"FishHookDefault");
  Sexy::ToWString(asStack_78);
  Sexy::RtName::RtName((RtName *)&local_60,(wstring *)&local_70);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_80,uVar4,0xc,(RtName *)&local_60);
  Sexy::RtName::~RtName((RtName *)&local_60);
  FUN_05476c50((SexyVector3 *)&local_70);
  std::string::~string(asStack_78);
  nop();
  local_8c = 0.0;
  local_88[0] = 0.0;
  pPVar5 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)&local_60,"zombie_fishingpole_hook");
  PopAnimRig::CalcLayerTranslation(pPVar5,(string *)&local_60,&local_8c,local_88);
  std::string::~string((string *)&local_60);
  nop();
  pPVar5 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string((string *)&local_60,"zombie_fishingpole_hook");
  PopAnimRig::SetLayerVisibility(pPVar5,(string *)&local_60,false);
  std::string::~string((string *)&local_60);
  nop();
  fVar6 = (float)FUN_04633734(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  uVar7 = *(undefined4 *)(this + 0x80c);
  pBVar10._0_4_ = (Board *)(fVar6 + local_8c);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_80);
  this_00 = (Projectile *)Board::AddProjectile(pBVar10._0_4_,uVar4,(RtName *)&local_60,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  uVar1 = FUN_0463364c(*(undefined4 *)(this + 0x24));
  FUN_04633650(this_00 + 0x24,uVar1);
  iVar2 = Zombie::GetFacing((Zombie *)this);
  FUN_046336f0(this_00 + 0xd4,iVar2 == 1);
  ProjectileHelpers::RandomizeVelocities(this_00);
  Projectile::SetShadow(this_00,false);
  this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
  fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  local_70 = Sexy::SexyVector3::operator*(this_01,fVar6);
  local_6c = uVar7;
  local_68 = uVar8;
  local_60 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_70,-1.0);
  local_5c = uVar7;
  local_58 = uVar8;
  Projectile::SetVelocity(this_00,(SexyVector3 *)&local_60);
  FUN_04633720(this_00 + 0xd5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x800),(RtWeakPtrBase *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_78);
  std::string::string((string *)&local_60,"onHookReachedTarget");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            (aRStack_50,(SexyVector3 *)&local_70,(RtName *)&local_60);
  FishHookProjectile::CastHook(uVar9,uVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::pullRowWhileBlacklistingSelf(Sexy::RtWeakPtr<PlantGroup>) */

void __thiscall
ZombieBeachFisherman::pullRowWhileBlacklistingSelf
          (ZombieBeachFisherman *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  string asStack_38 [8];
  BoardEntityPusher aBStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  std::string::string(asStack_38,"Play_Zomb_Future_Football_Mvmt_Fling");
  BoardEntityPusher::BoardEntityPusher(aBStack_30,(BoardEntity *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar4[1]);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar3 = FUN_04633704(*(undefined4 *)(lVar5 + 0xa4));
  if (iVar3 == iVar1) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar3 = FUN_04633708(*(undefined4 *)(lVar5 + 0xa8));
    if (iVar3 == iVar2) goto LAB_04635658;
  }
  BoardEntityPusher::BlacklistBoardLocation(aBStack_30,iVar1,iVar2);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = FUN_04633704(*(undefined4 *)(lVar5 + 0xa4));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar2 = FUN_04633708(*(undefined4 *)(lVar5 + 0xa8));
  BoardEntityPusher::PullRowRight(aBStack_30,iVar1,iVar2);
LAB_04635658:
  BoardEntityPusher::~BoardEntityPusher(aBStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::updateState_FishermanReel() */

void __thiscall ZombieBeachFisherman::updateState_FishermanReel(ZombieBeachFisherman *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  FishHookProjectile *this_01;
  ZombieBeachFishermanProps *pZVar2;
  PopAnimRig *pPVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined4 local_70;
  float local_6c;
  RtMixedPtr aRStack_68 [8];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x811] == (ZombieBeachFisherman)0x0) {
    pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x20);
    }
  }
  else {
    this_00 = (RtMixedPtrBase *)(this + 0x800);
    this[0x811] = (ZombieBeachFisherman)0x0;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      this_01 = (FishHookProjectile *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      FishHookProjectile::GetHookedPlantGroup(this_01);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
      local_60[0] = 1;
      cVar1 = isValidTargetForAttackType
                        (this,(RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtId *)local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
        pullRowWhileBlacklistingSelf(this,(RtWeakPtr<Sexy::SoundResource> *)&local_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      }
      pZVar2 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
      uVar9 = *(undefined4 *)(pZVar2 + 0x228);
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string((string *)&local_58,"reel");
      fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar3,(string *)&local_58);
      std::string::~string((string *)&local_58);
      nop();
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_70);
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string((string *)&local_58,"zombie_fishingpole_hook");
      PopAnimRig::CalcLayerTranslation(pPVar3,(string *)&local_58,(SexyVector2 *)&local_70);
      std::string::~string((string *)&local_58);
      nop();
      uVar8 = *(undefined4 *)(this + 0x1c);
      local_6c = -local_6c;
      local_58 = FUN_04633734(*(undefined4 *)(this + 0x18),uVar8,*(undefined4 *)(this + 0x20));
      local_54 = uVar8;
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_70,(TPoint *)&local_58);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar1 == '\0') {
        Zombie::setZombieState((Zombie *)this,0x20);
      }
      else {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)&local_58,"onHookReeledIn");
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,(RtId *)local_60,
                   (RtWeakPtr<Sexy::SoundResource> *)&local_58);
        FishHookProjectile::ReelHook(uVar9,fVar7 * 0.2,local_70,local_6c,uVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_58);
        nop();
        Sexy::RtId::~RtId((RtId *)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        plVar5 = (long *)Zombie::GetAnimRig((Zombie *)this);
        pcVar6 = *(code **)(*plVar5 + 0x168);
        std::string::string((string *)&local_58,"reel");
        Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
        (*pcVar6)(plVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_58,0,aRStack_50);
        std::string::~string((string *)&local_58);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::clearSpawnLocation() */

void __thiscall ZombieBeachFisherman::clearSpawnLocation(ZombieBeachFisherman *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  RtObject *this_00;
  code *pcVar7;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  string asStack_80 [24];
  BoardEntityPusher aBStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar4 = Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),local_a8,local_a4);
  if (lVar4 != 0) {
    cVar1 = PlantGroup::HasPlantfoodedPlant();
    if (cVar1 == '\0') {
      std::string::string(asStack_80,"Play_Zomb_Future_Football_Mvmt_Fling");
      BoardEntityPusher::BoardEntityPusher(aBStack_68,(BoardEntity *)this,asStack_80);
      std::string::~string(asStack_80);
      nop();
      iVar6 = local_a8;
      while( true ) {
        iVar6 = iVar6 + 1;
        iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
        if (iVar3 <= iVar6) break;
        BoardEntityPusher::BlacklistBoardLocation(aBStack_68,iVar6,local_a4);
      }
      BoardEntityPusher::PullRowRight(aBStack_68,local_a8,local_a4);
      BoardEntityPusher::~BoardEntityPusher(aBStack_68);
    }
    else {
      pcVar7 = *(code **)(*(long *)this + 0x120);
      DamageInfo::DamageInfo((DamageInfo *)aBStack_68);
      (*pcVar7)(this,(DamageInfo *)aBStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aBStack_68);
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
  Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),local_a8,local_a4,(vector *)asStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_00 = (RtObject *)*puVar5;
    if (((this_00 != (RtObject *)0x0) &&
        (bVar2 = Sexy::RtObject::IsA<GridItemGravestone>(this_00), bVar2)) ||
       (bVar2 = Sexy::RtObject::IsA<GridItemLilyPad>(this_00), bVar2)) {
      pcVar7 = *(code **)(*(long *)this_00 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)aBStack_68,this,aPStack_90,0);
      (*pcVar7)(this_00,(DamageInfo *)aBStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aBStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::findTargetForAttackType(ZombieBeachFisherman::AttackType const&) */

void __thiscall
ZombieBeachFisherman::findTargetForAttackType(ZombieBeachFisherman *this,AttackType *param_1)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  float *pfVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  ZombieBeachFishermanProps *pZVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    clearSpawnLocation(this);
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets((Insets *)&local_30);
    if (*(int *)param_1 == 0) {
      local_30 = local_58 + -1;
      local_2c = local_54;
      local_28 = 1;
      local_24 = 1;
    }
    else if (*(int *)param_1 == 1) {
      pZVar6 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
      local_24 = *(int *)(pZVar6 + 0x220);
      local_30 = local_58 - *(int *)(pZVar6 + 0x21c);
      local_2c = local_54 - local_24 / 2;
      local_28 = (*(int *)(pZVar6 + 0x21c) - *(int *)(pZVar6 + 0x218)) + 1;
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,0x10,(Insets *)&local_30);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar1 = isValidTargetForAttackType(this,aRStack_38,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      p_Var5 = this_01;
      if ((cVar1 != '\0') &&
         (p_Var5 = this_00,
         this_01 !=
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)0x0)) {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_01);
        p_Var5 = this_01;
        if (*pfVar3 < *pfVar4) {
          p_Var5 = this_00;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      this_01 = p_Var5;
    }
    p_Var5 = this_01;
    if (((this_01 ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) && (*(int *)param_1 == 0)) &&
       ((p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)(**(code **)(*(long *)this + 0x228))(this),
        p_Var5 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)0x0 || (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)p_Var5), !bVar2)))) {
      p_Var5 = this_01;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::findTargetAndCast() */

void __thiscall ZombieBeachFisherman::findTargetAndCast(ZombieBeachFisherman *this)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = findTargetForAttackType(this,(AttackType *)&local_10);
  if (lVar1 == 0) {
    local_10 = 1;
    lVar1 = findTargetForAttackType(this,(AttackType *)&local_10);
    if (lVar1 != 0) {
      nop();
      pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      lVar1 = (**(code **)(*(long *)this_00 + 0x178))(this_00);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,*pfVar2 + (float)*(int *)(lVar1 + 8) * 0.5,
                 pfVar2[1] - (float)*(int *)(lVar1 + 0xc) * 0.5);
      *(ulong *)(this + 0x808) = CONCAT44(uStack_c,local_10);
      Zombie::setZombieState((Zombie *)this,0x21,0);
    }
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x24,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachFisherman::updateState_FishermanIdle() */

void __thiscall ZombieBeachFisherman::updateState_FishermanIdle(ZombieBeachFisherman *this)

{
  ZombieBeachFishermanProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
  if (fVar2 <= *(float *)(pZVar1 + 0x210)) {
    return;
  }
  findTargetAndCast(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::throwAdjacentPlant() */

void __thiscall ZombieBeachFisherman::throwAdjacentPlant(ZombieBeachFisherman *this)

{
  bool bVar1;
  RtObject *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)findTargetForAttackType(this,(AttackType *)local_10);
  if ((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<PlantGroup>(this_00), bVar1)) {
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)aRStack_18);
    pullRowWhileBlacklistingSelf(this,(AttackType *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieBeachFisherman::gatherPlantingRestrictions
          (ZombieBeachFisherman *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  ZombieBeachFishermanProps *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_10,(TPoint *)param_1);
  if (cVar1 != '\0') {
    pZVar3 = Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
    uVar4 = FUN_04634904(*(undefined8 *)(pZVar3 + 0x230));
    uVar5 = FUN_04634954(*(undefined8 *)(pZVar3 + 0x238));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,param_2 + 8);
    local_10 = FUN_04634954(*(undefined8 *)(pZVar3 + 0x238));
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      local_10 = CONCAT44(local_10._4_4_,0x29);
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::StaticClassInit() */

void ZombieBeachFisherman::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBeachFisherman");
      (*pcVar4)(plVar1,asStack_150,FUN_04636a9c,0x818,0);
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
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanIntro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanCast");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanWait");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanReel");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieBeachFisherman,void(ZombieBeachFisherman::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_FISHERMAN_FishermanAttackAdjacent");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046363e0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBeachFisherman::StaticGetClass() */

long * ZombieBeachFisherman::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachFisherman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachFisherman::GetClass() const */

long * ZombieBeachFisherman::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachFisherman",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::selectSpawnRow() const */

void __thiscall ZombieBeachFisherman::selectSpawnRow(ZombieBeachFisherman *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)local_20,(long)iVar3);
  local_28 = (ulong)local_28._4_4_ << 0x20;
  while( true ) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 <= (int)local_28) break;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_20,(int *)&local_28);
    local_28 = CONCAT44(local_28._4_4_,(int)local_28 + 1);
  }
  puVar5 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  local_50 = FUN_046349a4(*puVar5);
  local_48 = FUN_046349f4(puVar5[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieBeachFisherman>((RtObject *)*puVar5), bVar1)) &&
       ((ZombieBeachFisherman *)*puVar5 != this)) {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
      lVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)*puVar5);
      local_54 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar6 + 4));
      local_40 = std::
                 remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar7,uVar8,&local_54);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_30,(__normal_iterator *)&local_40);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_38);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)local_20,local_30,local_28);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  uVar4 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar6 + 4));
  local_38._0_4_ = uVar4;
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  local_30 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar7,uVar8,(__normal_iterator *)&local_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_20);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)local_20)
    ;
    if (cVar2 == '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar7,uVar8);
      puVar9 = (undefined4 *)FUN_0463371c(local_20[0]);
      local_38._0_4_ = *puVar9;
    }
    else {
      local_38._0_4_ = 0xffffffff;
    }
  }
  uVar4 = (undefined4)local_38;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* ZombieBeachFisherman::onZombieInitialize() */

void __thiscall ZombieBeachFisherman::onZombieInitialize(ZombieBeachFisherman *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  Zombie::GetProps<ZombieBeachFishermanProps>((Zombie *)this);
  nop();
  this[0x811] = (ZombieBeachFisherman)0x0;
  this[0x810] = (ZombieBeachFisherman)0x1;
  return;
}


/* ZombieBeachFisherman::GetTideEffect() const */

undefined8 __thiscall ZombieBeachFisherman::GetTideEffect(ZombieBeachFisherman *this)

{
  undefined8 uVar1;
  
  if (this[0x810] == (ZombieBeachFisherman)0x0) {
    return 4;
  }
  uVar1 = Zombie::GetTideEffect((Zombie *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onPlaceOnBoard() */

void __thiscall ZombieBeachFisherman::onPlaceOnBoard(ZombieBeachFisherman *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  iVar1 = selectSpawnRow(this);
  if (iVar1 < 0) {
    pcVar4 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_70,local_6c,(DamageInfo *)&local_68,4,aPStack_78,0);
    (*pcVar4)(this,(DamageInfo *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  else {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_68 = *puVar3;
    local_60 = *(undefined4 *)(puVar3 + 1);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
    local_68 = CONCAT44(local_68._4_4_,(float)iVar2);
    iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
    local_68 = CONCAT44((float)iVar1,(undefined4)local_68);
    (**(code **)(*(long *)this + 0x78))(this,&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onDraw(Sexy::Graphics*) */

void __thiscall ZombieBeachFisherman::onDraw(ZombieBeachFisherman *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *this_02;
  Graphics3D *pGVar6;
  Image *pIVar7;
  SalesProgressBar *this_03;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined4 uVar12;
  GraphicsAutoState aGStack_78 [8];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x21);
  if (((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,0x22), cVar1 != '\0')) ||
     (cVar1 = Zombie::isInState((Zombie *)this,0x23), cVar1 != '\0')) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x800));
    if (cVar1 != '\0') {
      Sexy::Insets::Insets(aIStack_40);
      this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string((string *)&local_50,"line_tag");
      PopAnimRig::CalcSymbolRect(this_00,(string *)&local_50,(TRect *)aIStack_40);
      std::string::~string((string *)&local_50);
      nop();
      fVar11 = *(float *)(this + 0x1c);
      fVar8 = (float)FUN_04633734(*(undefined4 *)(this + 0x18),fVar11,*(undefined4 *)(this + 0x20));
      Sexy::TRect<int>::GetCenter();
      iVar2 = FUN_046339e0(local_50);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      fVar9 = *(float *)(lVar5 + 0xc4);
      Sexy::TRect<int>::GetCenter();
      iVar3 = FUN_046339e0(local_4c);
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      EATextSquish::Vec3::Vec3
                (aVStack_70,(float)(int)((fVar8 - fVar9) + (float)iVar2),
                 (float)(int)((fVar11 - *(float *)(lVar5 + 200)) + (float)iVar3),0.0);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
      this_02 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this_01);
      uVar12 = 0;
      fVar8 = 5.0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_50,4.0,5.0,0.0);
      local_60 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_50);
      local_5c = fVar8;
      local_58 = uVar12;
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
      local_50 = (float)Sexy::SexyVector3::operator-
                                  ((SexyVector3 *)aVStack_70,(SexyVector3 *)&local_60);
      local_4c = fVar8;
      local_48 = uVar12;
      dVar10 = atan2((double)-fVar8,(double)local_50);
      uVar12 = DVec3::getLength((DVec3 *)&local_50);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,(float)dVar10);
      fVar8 = (float)FUN_046339d0(local_60);
      fVar11 = *(float *)(param_1 + 0x10);
      fVar9 = (float)FUN_046339d0(local_5c);
      FUN_04633624(fVar8 + fVar11,fVar9 + *(float *)(param_1 + 0x14),auStack_28,auStack_1c);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PushTransform(pGVar6,(SexyMatrix3 *)aSStack_30,true);
      pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b1bcd8);
      fVar8 = (float)FUN_046339d0(uVar12);
      this_03 = (SalesProgressBar *)
                CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06b1bcd8);
      iVar2 = SalesProgressBar::GetCurrentLevel(this_03);
      Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,(int)fVar8,iVar2);
      pGVar6 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
      Sexy::Graphics3D::PopTransform(pGVar6);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
    }
  }
  Zombie::onDraw((Graphics *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachFisherman::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieBeachFisherman::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  long lVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  SexyVector3 *pSVar4;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"hit_ground");
  if (bVar1) {
    clearSpawnLocation((ZombieBeachFisherman *)param_1);
  }
  else {
    bVar1 = std::operator==(param_4,"use_action");
    if (bVar1) {
      bVar1 = std::operator==(param_3,"cast");
      if (bVar1) {
        castHook((ZombieBeachFisherman *)param_1);
      }
      else {
        bVar1 = std::operator==(param_3,"toss");
        if (bVar1) {
          throwAdjacentPlant((ZombieBeachFisherman *)param_1);
        }
        else {
          lVar2 = FUN_05474374(param_3,&DAT_055c4210,0);
          if (lVar2 != -1) {
            this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_18,"POPANIM_EFFECTS_ZOMBIE_FISHERMAN_BUBBLES");
            GetPAMByName(asStack_18);
            pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
            Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            std::string::~string(asStack_18);
            nop();
            Effect_PopAnim::SetCentered(this,true);
            pSVar4 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_1);
            StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,pSVar4,-1);
            std::string::string((string *)aRStack_10,"animation");
            Effect_PopAnim::PlaySingleAnimation(this,aRStack_10,0);
            std::string::~string((string *)aRStack_10);
            nop();
            param_1[0x810] = (string)0x0;
          }
        }
      }
    }
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

