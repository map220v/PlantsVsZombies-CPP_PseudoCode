// Class: MagicCard


/* MagicCard::CalcRenderOrder() const */

undefined8 MagicCard::CalcRenderOrder(void)

{
  return 900000;
}


/* non-virtual thunk to MagicCard::CalcRenderOrder() const */

void __thiscall MagicCard::CalcRenderOrder(MagicCard *this)

{
  CalcRenderOrder();
  return;
}


/* MagicCard::SetTargetPos(Sexy::SexyVector3 const&) */

void __thiscall MagicCard::SetTargetPos(MagicCard *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x180),param_1);
  return;
}


/* MagicCard::isInState(MSCState) const */

bool __thiscall MagicCard::isInState(MagicCard *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_040d01b8(*(undefined4 *)(this + 0xb0));
  return iVar1 == param_2;
}


/* MagicCard::getMagicCardStateSerialization() */

void __thiscall MagicCard::getMagicCardStateSerialization(MagicCard *this)

{
  FUN_040d01b8(*(undefined4 *)(this + 0xb0));
  return;
}


/* MagicCard::onAnimCommand(std::string const&, float, std::string const&, std::string const&) */

bool MagicCard::onAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = isInState((MagicCard *)param_1,2);
  bVar2 = false;
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_4,"begin_fire1");
    if (!bVar2) {
      bVar2 = std::operator==(param_4,"begin_fire2");
      if (!bVar2) {
        bVar2 = std::operator==(param_4,"begin_fire3");
        if (!bVar2) {
          bVar2 = std::operator==(param_4,"begin_fire4");
          if (!bVar2) {
            bVar2 = std::operator==(param_4,"begin_fire5");
            if (!bVar2) {
              bVar2 = std::operator==(param_4,"begin_fire6");
              return bVar2;
            }
          }
        }
      }
    }
  }
  return bVar2;
}


/* MagicCard::~MagicCard() */

void __thiscall MagicCard::~MagicCard(MagicCard *this)

{
  *(undefined ***)this = &PTR_GetClass_067db020;
  *(undefined ***)(this + 0x10) = &PTR__MagicCard_067db280;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to MagicCard::~MagicCard() */

void __thiscall MagicCard::~MagicCard(MagicCard *this)

{
  ~MagicCard(this + -0x10);
  return;
}


/* MagicCard::~MagicCard() */

void __thiscall MagicCard::~MagicCard(MagicCard *this)

{
  ~MagicCard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MagicCard::~MagicCard() */

void __thiscall MagicCard::~MagicCard(MagicCard *this)

{
  ~MagicCard(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::onDraw(Sexy::Graphics*) */

void __thiscall MagicCard::onDraw(MagicCard *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  uVar7 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_040d0424(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_040d0880(fVar3 + 20.0);
  fVar9 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar8 +
       (float)(int)((fVar4 - fVar8) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_040d0880((int)uVar7);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar9 +
       (float)(int)((fVar4 - fVar9) * *(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    uVar5 = FUN_040d0880(0xc2b40000);
    uVar6 = FUN_040d0880(0xc2700000);
    FUN_040cffe0(uVar5,uVar6,auStack_28,auStack_1c);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar2,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  *(ulong *)(this + 0x150) = uVar7 << 0x20 | (ulong)(uint)(fVar3 + 20.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicCard::onUpdate() */

void __thiscall MagicCard::onUpdate(MagicCard *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  StateMachine<MSState>::UpdateState((StateMachine<MSState> *)(this + 0xb0));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* MagicCard::MagicCard() */

void __thiscall MagicCard::MagicCard(MagicCard *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067db020;
  *(undefined ***)(this + 0x10) = &PTR__MagicCard_067db280;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  StateMachine<MSCState>::StateMachine((StateMachine<MSCState> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  DVec3::DVec3((DVec3 *)(this + 0x180));
  this[0x15c] = (MagicCard)0x0;
  *(undefined4 *)(this + 0x17c) = 1;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return;
}


/* MagicCard::StaticNew() */

MagicCard * MagicCard::StaticNew(void)

{
  MagicCard *this;
  
  this = ::operator_new(400);
  MagicCard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::onEnterState_FLYAWAY(MSCState) */

void MagicCard::onEnterState_FLYAWAY(long param_1)

{
  ActionSubSystem *pAVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_60,*(float *)(param_1 + 0x160),*(float *)(param_1 + 0x164),0.0);
  pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onFlyAwayDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_78,asStack_70)
  ;
  ActionSubSystem::AddActionMoveTo
            ((ActionSubSystem *)0x3f000000,pAVar1,aRStack_68,aVStack_60,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::DealDamage() */

void __thiscall MagicCard::DealDamage(MagicCard *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  long *extraout_x0;
  RtObject *this_00;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_94 = 0;
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (*(float *)(this + 0x180),*(float *)(this + 0x184),&local_94,&local_98);
  DamageInfo::DamageInfo(aDStack_68);
  local_60 = *(undefined4 *)(this + 0x18c);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar3,local_94,local_98);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = (RtObject *)*puVar4;
    cVar2 = RealObject::IsOnOpposingTeam(this_00,1);
    if (cVar2 != '\0') {
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar5 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0')) {
          (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aDStack_68);
        }
      }
      else {
        uVar3 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(pZVar5,uVar3);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(long *)pZVar5 + 0xb8))(pZVar5,7), cVar2 != '\0')) {
          (**(code **)(*(long *)pZVar5 + 0x110))(pZVar5,aDStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::onEnterState_ATTACK(MSCState) */

void MagicCard::onEnterState_ATTACK(MagicCard *param_1)

{
  float *pfVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  float fVar3;
  float fVar4;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  DealDamage(param_1);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar4 = pfVar1[1];
  fVar3 = *pfVar1;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_MAGICSHROOM_CARD_EFFECT");
  GetPAMByName(asStack_68);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  std::string::~string(asStack_68);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,fVar3,fVar4 + 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
  FUN_040d0414(this + 0x1c);
  Effect_PopAnim::SetCentered(this,true);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"onAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::string((string *)aRStack_60,"idle");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::onEnterState_END(MSCState) */

void MagicCard::onEnterState_END(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x2e));
  puVar1 = gMessageRouter;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x2e));
    MessageRouter::Post<Plant*,int,Sexy::RtWeakPtr<Plant>,int>
              ((MessageRouter *)puVar1,Message::MagicCardReturn,aRStack_10,(int)param_1[0x2f]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::StaticClassInit() */

void MagicCard::StaticClassInit(void)

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
  Delegate1<MSCState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<MSCState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"MagicCard");
      (*pcVar4)(plVar1,asStack_150,FUN_040d576c,400,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<MSCState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSCState_INIT");
  StateDefinition<MSCState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d4edc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSCState_FLYTOTARGET");
  StateDefinition<MSCState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d4edc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSCState_ATTACK");
  StateDefinition<MSCState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d4edc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSCState_FLYAWAY");
  StateDefinition<MSCState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d4edc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<MagicCard,void(MagicCard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<MSCState>::Delegate1<MagicCard,void(MagicCard::*)(MSCState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"MSCState_END");
  StateDefinition<MSCState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_040d4edc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MagicCard::StaticGetClass() */

long * MagicCard::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"MagicCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicCard::GetClass() const */

long * MagicCard::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"MagicCard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::setState(MSCState) */

void __thiscall MagicCard::setState(MagicCard *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<MSCState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<MSCState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<MSCState>::GetStateDefinition
                     ((StateMachineTable<MSCState> *)pSVar2,param_2);
  StateDefinition<MSCState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<MSState>::SetContext((StateDefinition<MSState> *)aSStack_a8,this);
  StateMachine<MSState>::SetState
            ((StateMachine<MSState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::MagicCardInitialize(EMagicCardType, Sexy::RtWeakPtr<Plant>, int) */

void __thiscall
MagicCard::MagicCardInitialize
          (MagicCard *this,undefined4 param_2,RtWeakPtr *param_3,undefined4 param_4)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  long extraout_x0;
  Plant *this_02;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  TimeChallengeEndLevelUI *this_03;
  PopAnimRig *pPVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_3);
  *(undefined4 *)(this + 0x16c) = param_2;
  *(undefined4 *)(this + 0x178) = param_4;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)param_3);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    if (extraout_x0 != 0) {
      fVar8 = *(float *)(extraout_x0 + 0x2d4);
      this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar7 = (float)Plant::GetTotalDamageRate(this_02);
      *(float *)(this + 0x18c) = fVar7 * fVar8;
    }
    this_01 = (RtWeakPtr *)(this + 0xa8);
    setState(this,0);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar6 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    }
    std::string::string((string *)aRStack_50,"POPANIM_EFFECTS_MAGICSHROOM_CARD");
    GetPAMByName((string *)aRStack_50);
    std::string::~string((string *)aRStack_50);
    nop();
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
    pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    this_03 = (TimeChallengeEndLevelUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<MagicCard,void(MagicCard::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aRStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_03,aDStack_38);
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    std::string::string((string *)aRStack_50,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar5,aRStack_50,0,aDStack_38);
    std::string::~string((string *)aRStack_50);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::MoveToTarget(Sexy::SexyVector2) */

void MagicCard::MoveToTarget
               (float param_1,float param_2,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_3)

{
  SexyVector3 *pSVar1;
  ActionSubSystem *pAVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar4 = *(undefined4 *)(param_3 + 0x1c);
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_040d0424(*(undefined4 *)(param_3 + 0x18),uVar4,*(undefined4 *)(param_3 + 0x20));
  *(undefined4 *)(param_3 + 0x150) = uVar3;
  *(undefined4 *)(param_3 + 0x154) = uVar4;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0x160),pSVar1);
  EATextSquish::Vec3::Vec3(aVStack_60,param_1,param_2,0.0);
  pAVar2 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_78,asStack_70)
  ;
  ActionSubSystem::AddActionMoveTo
            ((ActionSubSystem *)0x3f000000,pAVar2,aRStack_68,aVStack_60,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  setState((MagicCard *)param_3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicCard::onFlyToTargetDone(BoardEntity*) */

void MagicCard::onFlyToTargetDone(BoardEntity *param_1)

{
  setState((MagicCard *)param_1,2);
  return;
}


/* MagicCard::onFlyAwayDone(BoardEntity*) */

void MagicCard::onFlyAwayDone(BoardEntity *param_1)

{
  setState((MagicCard *)param_1,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::onAttackAnimDone(StandaloneEffect*) */

void MagicCard::onAttackAnimDone(StandaloneEffect *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  setState((MagicCard *)param_1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicCard::setMagicCardStateSerialization(int) */

void __thiscall MagicCard::setMagicCardStateSerialization(MagicCard *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<MSCState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<MSCState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<MSCState>::GetStateDefinition
                     ((StateMachineTable<MSCState> *)pSVar2,param_1);
  StateDefinition<MSCState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<MSState>::SetContext((StateDefinition<MSState> *)aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

