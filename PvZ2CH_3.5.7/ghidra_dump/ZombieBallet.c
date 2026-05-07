// Class: ZombieBallet


/* ZombieBallet::updateState_Idle() */

void __thiscall ZombieBallet::updateState_Idle(ZombieBallet *this)

{
  (**(code **)(*(long *)this + 0x578))();
  return;
}


/* ZombieBallet::~ZombieBallet() */

void __thiscall ZombieBallet::~ZombieBallet(ZombieBallet *this)

{
  *(undefined ***)this = &PTR_GetClass_06886690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBallet_068870d8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBallet::~ZombieBallet() */

void __thiscall ZombieBallet::~ZombieBallet(ZombieBallet *this)

{
  ~ZombieBallet(this + -0x10);
  return;
}


/* ZombieBallet::~ZombieBallet() */

void __thiscall ZombieBallet::~ZombieBallet(ZombieBallet *this)

{
  ~ZombieBallet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBallet::~ZombieBallet() */

void __thiscall ZombieBallet::~ZombieBallet(ZombieBallet *this)

{
  ~ZombieBallet(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::GetStunnedEffectOffset() const */

void __thiscall ZombieBallet::GetStunnedEffectOffset(ZombieBallet *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar4 == 0x1f) {
    fVar5 = 40.0;
    fVar6 = 10.0;
    fVar7 = 5.0;
  }
  else {
    fVar5 = 0.0;
    fVar7 = 35.0;
    fVar6 = 0.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar5,fVar6,fVar7);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* ZombieBallet::setEndPosition(Sexy::SexyVector3 const&) */

void __thiscall ZombieBallet::setEndPosition(ZombieBallet *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),param_1);
  return;
}


/* ZombieBallet::getEndPosition() */

undefined4 __thiscall ZombieBallet::getEndPosition(ZombieBallet *this)

{
  undefined4 local_10;
  
  local_10 = (undefined4)*(undefined8 *)(this + 0x808);
  return local_10;
}


/* ZombieBallet::ZombieBallet() */

void __thiscall ZombieBallet::ZombieBallet(ZombieBallet *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06886690;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBallet_068870d8;
  DVec3::DVec3((DVec3 *)(this + 0x808));
  return;
}


/* ZombieBallet::StaticNew() */

ZombieBallet * ZombieBallet::StaticNew(void)

{
  ZombieBallet *this;
  
  this = ::operator_new(0x820);
  ZombieBallet(this);
  return this;
}


/* ZombieBallet::StartWalk() */

void __thiscall ZombieBallet::StartWalk(ZombieBallet *this)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieBallet::StopWalk() */

void __thiscall ZombieBallet::StopWalk(ZombieBallet *this)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 1) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::onExitState_Eat(ZombieState) */

void ZombieBallet::onExitState_Eat(long param_1)

{
  ZombieBalletSubSystem *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pZVar1 = *(ZombieBalletSubSystem **)(param_1 + 0x818);
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieBalletSubSystem::onZombieEatEnd(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::onAnimStop(std::string const&) */

void __thiscall ZombieBallet::onAnimStop(ZombieBallet *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
  if ((iVar2 != 5) && (iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 != 7)) {
    bVar1 = std::operator==(param_1,"slip");
    if (bVar1) {
      pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string(asStack_40,"sit");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x804) = fVar4 + 5.0;
    }
    else {
      bVar1 = std::operator==(param_1,"stand");
      if (bVar1) {
        this[0x800] = (ZombieBallet)0x0;
        Zombie::setZombieState((Zombie *)this,1,0);
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
/* ZombieBallet::onEnterState_Slip(ZombieState) */

void ZombieBallet::onEnterState_Slip(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  param_1[0x800] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"slip");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieBallet,void(ZombieBallet::*)(std::string_const&)>(aDStack_38,aCStack_50);
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
/* ZombieBallet::onEnterState_Stand(ZombieState) */

void ZombieBallet::onEnterState_Stand(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  param_1[0x800] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x168);
  std::string::string(asStack_58,"stand");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimStop);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieBallet,void(ZombieBallet::*)(std::string_const&)>(aDStack_38,aCStack_50);
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
/* ZombieBallet::collectionInit(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall ZombieBallet::collectionInit(ZombieBallet *this,RtWeakPtrBase *param_2)

{
  ZombieBalletSubSystem *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = *(ZombieBalletSubSystem **)(this + 0x818);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
  ZombieBalletSubSystem::OnBalletSegmentCreated(pZVar1,aRStack_18,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::spawnInitialSegments() */

void __thiscall ZombieBallet::spawnInitialSegments(ZombieBallet *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ZombieBalletProps *pZVar3;
  string *psVar4;
  SexyVector3 *pSVar5;
  ZombieBallet *pZVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  iVar7 = 3;
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  do {
    pZVar3 = Zombie::GetProps<ZombieBalletProps>((Zombie *)this);
    local_40 = CONCAT44(local_40._4_4_,(float)local_40 + *(float *)(pZVar3 + 0x210));
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    local_30[0] = *(undefined4 *)(this + 0x50);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_50,"renai_ballet_mid");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_60,(RtWeakPtr *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string(asStack_50);
    nop();
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)a_Stack_60);
    uVar1 = FUN_0464a9fc(*(undefined4 *)(this + 0x2b0));
    pSVar5 = (SexyVector3 *)(*pcVar9)(plVar8,aRStack_48,uVar1,(SpawnZombieParams *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    pZVar6 = (ZombieBallet *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)asStack_50);
    collectionInit(pZVar6,aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    BoardEntity::PlaceOnBoard(pSVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::StaticClassInit() */

void ZombieBallet::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBallet");
      (*pcVar4)(plVar1,asStack_150,FUN_0464f088,0x820,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBallet,void(ZombieBallet::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBallet,void(ZombieBallet::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBallet,void(ZombieBallet::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ballet_Slip");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0464e84c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBallet,void(ZombieBallet::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBallet,void(ZombieBallet::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBallet,void(ZombieBallet::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Ballet_Stand");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0464e84c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBallet::StaticGetClass() */

long * ZombieBallet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBallet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBallet::GetClass() const */

long * ZombieBallet::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBallet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::onZombieInitialize() */

void __thiscall ZombieBallet::onZombieInitialize(ZombieBallet *this)

{
  ZombieBalletSubSystem *pZVar1;
  RtObject *this_00;
  ZombieAnimRig_Ballet *this_01;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this[0x800] = (ZombieBallet)0x0;
  this[0x801] = (ZombieBallet)0x1;
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar2;
  pZVar1 = Board::GetGameSubSystem<ZombieBalletSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ZombieBalletSubSystem **)(this + 0x818) = pZVar1;
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
  this_01 = Sexy::RtObject::Cast<ZombieAnimRig_Ballet>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieAnimRig_Ski::SetOwner((ZombieAnimRig_Ski *)this_01,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::onPlaceOnBoard() */

void __thiscall ZombieBallet::onPlaceOnBoard(ZombieBallet *this)

{
  bool bVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  this_00 = (RtWeakPtr *)Zombie::GetType((Zombie *)this);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  bVar1 = std::operator==((string *)(pRVar2 + 8),"renai_ballet");
  if (bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    collectionInit(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    spawnInitialSegments(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::onUpdate() */

void __thiscall ZombieBallet::onUpdate(ZombieBallet *this)

{
  char cVar1;
  int iVar2;
  OliveOilSystem *pOVar3;
  float fVar4;
  undefined4 uVar5;
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = RealObject::IsOnTeam(this,2);
  if (((cVar1 != '\0') &&
      (((iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 == 1 ||
        (iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 == 0)) ||
       (iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 == 2)))) &&
     (pOVar3 = Board::GetGameSubSystem<OliveOilSystem>(*(Board **)(gLawnApp + 0x9f0)),
     pOVar3 != (OliveOilSystem *)0x0)) {
    Sexy::Point::Point(aPStack_10,aTStack_18);
    cVar1 = OliveOilSystem::IsThereOil(pOVar3,aPStack_10);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  fVar4 = (float)PVZ_T();
  if ((*(float *)(this + 0x804) < fVar4) &&
     (iVar2 = Zombie::getZombieStateSerialization((Zombie *)this), iVar2 == 0x1f)) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x804) = uVar5;
    Zombie::setZombieState((Zombie *)this,0x20,0);
  }
  Zombie::onUpdate((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBallet::onEnterState_Eat(ZombieState) */

void ZombieBallet::onEnterState_Eat(long param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x128))(*(long **)(param_1 + 0xc0));
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBallet::updateState_Eat() */

void __thiscall ZombieBallet::updateState_Eat(ZombieBallet *this)

{
  ZombieBalletSubSystem *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pZVar1 = *(ZombieBalletSubSystem **)(this + 0x818);
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieBalletSubSystem::onZombieEat(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Zombie::updateState_Eat((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

