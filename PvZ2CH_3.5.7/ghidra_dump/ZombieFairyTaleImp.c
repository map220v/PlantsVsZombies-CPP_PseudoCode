// Class: ZombieFairyTaleImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieFairyTaleImp::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr *this;
  RtObject *pRVar3;
  undefined8 extraout_x0;
  code *pcVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x1e8))(asStack_20,*(long **)(param_1 + 0xc0));
  cVar1 = std::operator==(param_3,asStack_20);
  if ((cVar1 == '\0') || (bVar2 = std::operator==(param_4,"attack_action"), !bVar2)) {
    std::string::~string(asStack_20);
  }
  else {
    std::string::~string(asStack_20);
    cVar1 = Zombie::isInState((Zombie *)param_1,3);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x938))(asStack_20,param_1);
      uStack_40 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)asStack_20);
      uStack_38 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)asStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&uStack_40,(__normal_iterator *)&uStack_38),
            bVar2) {
        this = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_40)
        ;
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
        if (bVar2) {
          pRVar3 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          bVar2 = Sexy::RtObject::IsA<Plant>(pRVar3);
          if (!bVar2) goto LAB_045d59e8;
          pcVar4 = *(code **)(*(long *)param_1 + 0x978);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          nop();
          (*pcVar4)(param_1,extraout_x0);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
          if (bVar2) goto LAB_045d5a80;
        }
        else {
LAB_045d59e8:
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
          if (bVar2) {
            pRVar3 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar3);
            if (bVar2) {
              pcVar4 = *(code **)(*(long *)param_1 + 0x980);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
              nop();
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_28,(RtWeakPtrBase *)aRStack_30);
              (*pcVar4)(param_1,aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            }
          }
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
          if (bVar2) {
LAB_045d5a80:
            pRVar3 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar3);
            if (bVar2) {
              pcVar4 = *(code **)(*(long *)param_1 + 0x988);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
              nop();
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_28,(RtWeakPtrBase *)aRStack_30);
              (*pcVar4)(param_1,aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_40);
      }
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              asStack_20);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleImp::updateState_Ash() */

void __thiscall ZombieFairyTaleImp::updateState_Ash(ZombieFairyTaleImp *this)

{
  Zombie::setZombieState((Zombie *)this,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::onEnterState_Walk(ZombieState) */

void ZombieFairyTaleImp::onEnterState_Walk(long param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(param_1,0x55);
  if (cVar1 == '\0') {
    cVar1 = Zombie::HasCondition(param_1,0x37);
  }
  else {
    cVar1 = Zombie::HasCondition(param_1,0x8c);
    if (cVar1 != '\0') goto LAB_045ba254;
    cVar1 = Zombie::HasCondition(param_1,0x37);
  }
  if (cVar1 == '\0') {
    plVar2 = *(long **)(param_1 + 0xc0);
    pcVar3 = *(code **)(*plVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x128))(*(long **)(param_1 + 0xc0));
  }
LAB_045ba254:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFairyTaleImp::onWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombieFairyTaleImp::onWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  return;
}


/* ZombieFairyTaleImp::onLandingAnimStopped(std::string const&) */

void ZombieFairyTaleImp::onLandingAnimStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x24);
      return;
    }
  }
  return;
}


/* ZombieFairyTaleImp::onInitialized() */

void __thiscall ZombieFairyTaleImp::onInitialized(ZombieFairyTaleImp *this)

{
  undefined4 uVar1;
  
  Zombie::onInitialized((Zombie *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x818) = uVar1;
  return;
}


/* ZombieFairyTaleImp::~ZombieFairyTaleImp() */

void __thiscall ZombieFairyTaleImp::~ZombieFairyTaleImp(ZombieFairyTaleImp *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7e00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleImp_069f88f0;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleImp::~ZombieFairyTaleImp() */

void __thiscall ZombieFairyTaleImp::~ZombieFairyTaleImp(ZombieFairyTaleImp *this)

{
  ~ZombieFairyTaleImp(this + -0x10);
  return;
}


/* ZombieFairyTaleImp::~ZombieFairyTaleImp() */

void __thiscall ZombieFairyTaleImp::~ZombieFairyTaleImp(ZombieFairyTaleImp *this)

{
  ~ZombieFairyTaleImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieFairyTaleImp::~ZombieFairyTaleImp() */

void __thiscall ZombieFairyTaleImp::~ZombieFairyTaleImp(ZombieFairyTaleImp *this)

{
  ~ZombieFairyTaleImp(this + -0x10);
  return;
}


/* ZombieFairyTaleImp::ZombieFairyTaleImp() */

void __thiscall ZombieFairyTaleImp::ZombieFairyTaleImp(ZombieFairyTaleImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_069f7e00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieFairyTaleImp_069f88f0;
  return;
}


/* ZombieFairyTaleImp::StaticNew() */

ZombieFairyTaleImp * ZombieFairyTaleImp::StaticNew(void)

{
  ZombieFairyTaleImp *this;
  
  this = ::operator_new(0x820);
  ZombieFairyTaleImp(this);
  return this;
}


/* ZombieFairyTaleImp::updateState_Entering() */

void __thiscall ZombieFairyTaleImp::updateState_Entering(ZombieFairyTaleImp *this)

{
  char cVar1;
  
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x25,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::onEnterState_Running(ZombieState) */

void ZombieFairyTaleImp::onEnterState_Running(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  long *plVar2;
  ZombieFairyTaleImpProps *pZVar3;
  ZombieAnimRig *this_00;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetFacing(param_1,1);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this,true);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    this_00 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
    pZVar3 = Zombie::GetProps<ZombieFairyTaleImpProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar3 + 0x210));
  }
  fVar5 = (float)PVZ_T();
  pZVar3 = Zombie::GetProps<ZombieFairyTaleImpProps>(param_1);
  *(float *)(param_1 + 0x818) = fVar5 + *(float *)(pZVar3 + 0x214);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::spawnZombie(std::string const&, Sexy::Point const&) */

void __thiscall
ZombieFairyTaleImp::spawnZombie(ZombieFairyTaleImp *this,string *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  ZombieType *this_00;
  SexyVector3 *pSVar4;
  long *plVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x300))(this,0x28);
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(param_2 + 4));
  EATextSquish::Vec3::Vec3(aVStack_40,(float)(iVar1 + 0x334),(float)iVar2,0.0);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = FUN_04ed0c2c(*(undefined4 *)(this + 0x50));
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
  pSVar4 = (SexyVector3 *)
           (*pcVar6)(plVar5,aRStack_48,0xfffffffb,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Zombie::SetHasPlantFood(SUB81(pSVar4,0));
  BoardEntity::PlaceOnBoard(pSVar4);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::callKnight() */

void __thiscall ZombieFairyTaleImp::callKnight(ZombieFairyTaleImp *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ZombieFairyTaleImpProps *pZVar5;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  local_10[0] = iVar3 + -1;
  local_14 = 0;
  piVar4 = eastl::max_alt<int>(&local_14,local_10);
  local_14 = iVar3 + 2;
  iVar3 = *piVar4;
  local_10[0] = BoardConstants::NUMBER_OF_ROWS();
  piVar4 = eastl::min_alt<int>(&local_14,local_10);
  iVar2 = *piVar4;
  if (iVar3 < iVar2) {
    do {
      pZVar5 = Zombie::GetProps<ZombieFairyTaleImpProps>((Zombie *)this);
      iVar1 = iVar3 + 1;
      Sexy::Point::Point((Point *)local_10,0,iVar3);
      spawnZombie(this,(string *)(pZVar5 + 0x218),(Point *)local_10);
      iVar3 = iVar1;
    } while (iVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieFairyTaleImp::updateState_Running() */

void __thiscall ZombieFairyTaleImp::updateState_Running(ZombieFairyTaleImp *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x818) < fVar1) {
    callKnight(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x818) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieFairyTaleImp::StaticClassInit() */

void ZombieFairyTaleImp::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieFairyTaleImp");
      (*pcVar4)(plVar1,asStack_150,FUN_04ed1f58,0x820,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_FAIRYTALE_IMP_Entering");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ed1c54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate0::Delegate0<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieFairyTaleImp,void(ZombieFairyTaleImp::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_FAIRYTALE_IMP_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04ed1c54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieFairyTaleImp::StaticGetClass() */

long * ZombieFairyTaleImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieFairyTaleImp::GetClass() const */

long * ZombieFairyTaleImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieFairyTaleImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

