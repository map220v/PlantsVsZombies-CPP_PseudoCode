// Class: ZombieSwashbuckler


/* ZombieSwashbuckler::IsSwingingIn() const */

ZombieSwashbuckler __thiscall ZombieSwashbuckler::IsSwingingIn(ZombieSwashbuckler *this)

{
  return this[0x800];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::SwingEnd() */

void __thiscall ZombieSwashbuckler::SwingEnd(ZombieSwashbuckler *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  onSwingSucceedAnimDone((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSwashbuckler::updateState_SwingFail() */

void __thiscall ZombieSwashbuckler::updateState_SwingFail(ZombieSwashbuckler *this)

{
  SetFlag<DebugLogFlags>(this + 0x70,4,0);
  return;
}


/* ZombieSwashbuckler::onZombieInitialize() */

void __thiscall ZombieSwashbuckler::onZombieInitialize(ZombieSwashbuckler *this)

{
  this[0x801] = (ZombieSwashbuckler)0x0;
  this[0x800] = (ZombieSwashbuckler)0x0;
  this[0x802] = (ZombieSwashbuckler)0x0;
  this[0x803] = (ZombieSwashbuckler)0x0;
  return;
}


/* ZombieSwashbuckler::onSwingIntroAnimDone(std::string const&) */

void ZombieSwashbuckler::onSwingIntroAnimDone(string *param_1)

{
  if (param_1[0x801] == (string)0x0) {
    Zombie::setZombieState((Zombie *)param_1,0x20);
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x21,0);
  return;
}


/* ZombieSwashbuckler::onApplyCondition(ZombieConditions) */

void __thiscall ZombieSwashbuckler::onApplyCondition(ZombieSwashbuckler *this,int param_2)

{
  if (param_2 == 3) {
    if (this[0x800] != (ZombieSwashbuckler)0x0) {
      Zombie::EndCondition();
    }
  }
  else {
    if (param_2 == 4) {
      if (this[0x800] == (ZombieSwashbuckler)0x0) {
        return;
      }
      Zombie::EndCondition();
      return;
    }
    if ((param_2 == 2) || (param_2 == 0x38)) {
      if (this[0x800] != (ZombieSwashbuckler)0x0) {
        Zombie::EndCondition();
      }
      goto LAB_046d3d8c;
    }
  }
  if (param_2 - 0x40U < 2) {
    if (this[0x800] != (ZombieSwashbuckler)0x0) {
      Zombie::EndCondition((Zombie *)this,0x40);
      Zombie::EndCondition((Zombie *)this,0x41);
      this[0x803] = (ZombieSwashbuckler)0x1;
    }
  }
  else if (param_2 == 0x60) {
    if (this[0x800] == (ZombieSwashbuckler)0x0) {
      return;
    }
    Zombie::EndCondition((Zombie *)this,0x60);
    this[0x803] = (ZombieSwashbuckler)0x1;
  }
LAB_046d3d8c:
  if ((param_2 - 0x42U < 3) && (this[0x800] != (ZombieSwashbuckler)0x0)) {
    Zombie::EndCondition((Zombie *)this,0x42);
    Zombie::EndCondition((Zombie *)this,0x43);
    Zombie::EndCondition((Zombie *)this,0x44);
    this[0x803] = (ZombieSwashbuckler)0x1;
  }
  return;
}


/* ZombieSwashbuckler::~ZombieSwashbuckler() */

void __thiscall ZombieSwashbuckler::~ZombieSwashbuckler(ZombieSwashbuckler *this)

{
  *(undefined ***)this = &PTR_GetClass_068b46e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSwashbuckler_068b5148;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSwashbuckler::~ZombieSwashbuckler() */

void __thiscall ZombieSwashbuckler::~ZombieSwashbuckler(ZombieSwashbuckler *this)

{
  ~ZombieSwashbuckler(this + -0x10);
  return;
}


/* ZombieSwashbuckler::~ZombieSwashbuckler() */

void __thiscall ZombieSwashbuckler::~ZombieSwashbuckler(ZombieSwashbuckler *this)

{
  ~ZombieSwashbuckler(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSwashbuckler::~ZombieSwashbuckler() */

void __thiscall ZombieSwashbuckler::~ZombieSwashbuckler(ZombieSwashbuckler *this)

{
  ~ZombieSwashbuckler(this + -0x10);
  return;
}


/* ZombieSwashbuckler::ZombieSwashbuckler() */

void __thiscall ZombieSwashbuckler::ZombieSwashbuckler(ZombieSwashbuckler *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b46e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSwashbuckler_068b5148;
  return;
}


/* ZombieSwashbuckler::StaticNew() */

ZombieSwashbuckler * ZombieSwashbuckler::StaticNew(void)

{
  ZombieSwashbuckler *this;
  
  this = ::operator_new(0x808);
  ZombieSwashbuckler(this);
  return this;
}


/* ZombieSwashbuckler::onSwingSucceedAnimDone(std::string const&) */

void ZombieSwashbuckler::onSwingSucceedAnimDone(string *param_1)

{
  Zombie::SetIsFlying((Zombie *)param_1,false);
  param_1[0x800] = (string)0x0;
  BoardEntity::invalidateCollisionRect((BoardEntity *)param_1);
  if (param_1[0x802] == (string)0x0) {
    if (param_1[0x803] != (string)0x0) {
      Zombie::ApplyCondition((Zombie *)0x3f800000,0,param_1,0x40,1);
    }
    Zombie::SetIsControlled((Zombie *)param_1,false);
    Zombie::setZombieState((Zombie *)param_1,1,0);
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,5,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieSwashbuckler::CanBeTargetedByPlant
          (ZombieSwashbuckler *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined1 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x800] == (ZombieSwashbuckler)0x0) {
LAB_046d4fa8:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar2 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar1 = std::operator==((string *)(lVar3 + 8),"squash");
    if (!bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar1 = std::operator==((string *)(lVar3 + 8),"lightningreed");
      if (!bVar1) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        bVar1 = std::operator==((string *)(lVar3 + 8),"coldsnapdragon");
        if (!bVar1) {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar1 = std::operator==((string *)(lVar3 + 8),"bonkchoy");
          if (!bVar1) {
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            uVar2 = std::operator==((string *)(lVar3 + 8),"orchidmage");
            if (!(bool)uVar2) {
              lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              bVar1 = std::operator==((string *)(lVar3 + 8),"toadstool");
              if (bVar1) goto LAB_046d4fd4;
              goto LAB_046d4fa8;
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
LAB_046d4fd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::calcMidSwingOffset() const */

void ZombieSwashbuckler::calcMidSwingOffset(void)

{
  float fVar1;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar3;
  float in_s1;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  local_18 = (**(code **)(*(long *)pZVar2 + 0x268))();
  fStack_14 = in_s1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)local_10);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  local_10[0] = (**(code **)(*(long *)pZVar2 + 0x270))();
  fVar1 = fStack_14;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(in_x0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_18,(SexyVector2 *)(lVar3 + 0xc4));
  fStack_14 = (in_s1 + fStack_14) - fVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,fStack_14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::fallOffRope() */

void ZombieSwashbuckler::fallOffRope(void)

{
  long lVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  
  lVar1 = ___stack_chk_guard;
  calcMidSwingOffset();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(in_x0);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::onSwingFailAnimDone(std::string const&) */

void ZombieSwashbuckler::onSwingFailAnimDone(string *param_1)

{
  char cVar1;
  long lVar2;
  RtObject *this;
  PirateStage *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    fallOffRope();
    lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar2 != 0) {
      this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      pPVar3 = Sexy::RtObject::Cast<PirateStage>(this);
      if (pPVar3 != (PirateStage *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        PirateStage::DropZombieInOcean(pPVar3,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
    }
    Zombie::SetIsFlying((Zombie *)param_1,false);
    param_1[0x800] = (string)0x0;
    BoardEntity::invalidateCollisionRect((BoardEntity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::onPlaceOnBoard() */

void __thiscall ZombieSwashbuckler::onPlaceOnBoard(ZombieSwashbuckler *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  RtObject *this_00;
  PirateStage *this_01;
  ZombieSwashbucklerProps *pZVar5;
  int iVar6;
  ZombieSwashbuckler *pZVar7;
  float fVar8;
  float fVar9;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < *(int *)(this + 0x50)) {
    (**(code **)(*(long *)this + 0x430))(this,0);
  }
  pZVar7 = this;
  MessageRouter::Broadcast<Zombie*,ZombieSwashbuckler*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  iVar6 = (int)pZVar7;
  uVar3 = (**(code **)(*(long *)this + 0xa08))(this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(uVar3 & 0xffffffff),iVar2,iVar6);
  DVec3::DVec3((DVec3 *)&local_18);
  local_18 = (float)local_20;
  local_14 = (float)local_1c;
  local_10 = 0;
  lVar4 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar4 != 0) {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    this_01 = Sexy::RtObject::Cast<PirateStage>(this_00);
    if ((this_01 != (PirateStage *)0x0) &&
       (cVar1 = PirateStage::IsPlankOnRow(this_01,iVar2), cVar1 == '\0')) {
      pZVar5 = Zombie::GetProps<ZombieSwashbucklerProps>((Zombie *)this);
      fVar9 = *(float *)(pZVar5 + 0x214);
      fVar8 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      if (fVar8 < fVar9) {
        this[0x801] = (ZombieSwashbuckler)0x1;
        local_18 = local_18 + 25.0;
      }
    }
  }
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSwashbuckler::GetLandingColumn() */

void __thiscall ZombieSwashbuckler::GetLandingColumn(ZombieSwashbuckler *this)

{
  ZombieSwashbucklerProps ZVar1;
  ZombieSwashbucklerProps *pZVar2;
  
  pZVar2 = Zombie::GetProps<ZombieSwashbucklerProps>((Zombie *)this);
  ZVar1 = pZVar2[0x210];
  pZVar2 = Zombie::GetProps<ZombieSwashbucklerProps>((Zombie *)this);
  RandRangeInt((int)(char)ZVar1,(int)(char)pZVar2[0x211]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::onEnterState_SwingIntro(ZombieState) */

void ZombieSwashbuckler::onEnterState_SwingIntro(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  param_1[0x800] = (Zombie)0x1;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSwingIntroAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Swashbuckler::PlaySwingBack((ZombieAnimRig_Swashbuckler *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Swashbucklers_Swing");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  Zombie::SetIsControlled(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::onEnterState_SwingSucceed(ZombieState) */

void ZombieSwashbuckler::onEnterState_SwingSucceed(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSwingSucceedAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Swashbuckler::PlaySwingSuccess((ZombieAnimRig_Swashbuckler *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::onEnterState_SwingFail(ZombieState) */

void ZombieSwashbuckler::onEnterState_SwingFail(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSwingFailAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Swashbuckler::PlaySwingFail((ZombieAnimRig_Swashbuckler *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::StaticClassInit() */

void ZombieSwashbuckler::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieSwashbuckler");
      (*pcVar4)(plVar1,asStack_150,FUN_046d6744,0x808,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombieSwashbuckler,void(ZombieSwashbuckler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SB_Intro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046d6390(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate0::Delegate0<ZombieSwashbuckler,void(ZombieSwashbuckler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SB_SwingSucceed");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046d6390(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieSwashbuckler,void(ZombieSwashbuckler::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieSwashbuckler,void(ZombieSwashbuckler::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SB_SwingFail");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046d6390(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSwashbuckler::StaticGetClass() */

long * ZombieSwashbuckler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSwashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSwashbuckler::GetClass() const */

long * ZombieSwashbuckler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSwashbuckler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSwashbuckler::onEnterState_BleedingOut(ZombieState) */

void ZombieSwashbuckler::onEnterState_BleedingOut(long *param_1)

{
  if ((char)param_1[0x100] == '\0') {
    Zombie::onEnterState_BleedingOut();
    return;
  }
  (**(code **)(*param_1 + 0x240))();
  *(undefined1 *)((long)param_1 + 0x802) = 1;
  return;
}


/* ZombieSwashbuckler::chooseDeathState(DamageInfo const&) */

void __thiscall ZombieSwashbuckler::chooseDeathState(ZombieSwashbuckler *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  
  if (this[0x800] == (ZombieSwashbuckler)0x0) {
    Zombie::chooseDeathState((Zombie *)this,param_1);
    return;
  }
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),4);
  if (!bVar1) {
    cVar2 = Zombie::HasArm((Zombie *)this);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x238))(this);
    }
    cVar2 = Zombie::HasHead((Zombie *)this);
    if (cVar2 == '\0') {
      return;
    }
    (**(code **)(*(long *)this + 0x240))(this);
    this[0x802] = (ZombieSwashbuckler)0x1;
    MessageRouter::Post<Zombie*,ZombieSwashbuckler*>
              ((MessageRouter *)gMessageRouter,Message::MidasTouchSpecialDied,this);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::calcCollisionRect() */

void ZombieSwashbuckler::calcCollisionRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float in_s1;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x800) == '\0') {
    Zombie::calcCollisionRect();
  }
  else {
    Zombie::calcCollisionRect();
    fVar1 = (float)calcMidSwingOffset();
    local_18 = (int)((float)local_18 + fVar1);
    local_14 = (int)((float)local_14 + in_s1);
    Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbuckler::CalcZombieAttackRect() */

void ZombieSwashbuckler::CalcZombieAttackRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float in_s1;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x800) == '\0') {
    Zombie::CalcZombieAttackRect();
  }
  else {
    Zombie::CalcZombieAttackRect();
    fVar1 = (float)calcMidSwingOffset();
    local_18 = (int)((float)local_18 + fVar1);
    local_14 = (int)((float)local_14 + in_s1);
    Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSwashbuckler::CalcProjectileTargetLocation(float) */

float __thiscall
ZombieSwashbuckler::CalcProjectileTargetLocation(ZombieSwashbuckler *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (this[0x800] != (ZombieSwashbuckler)0x0) {
    fVar1 = (float)Zombie::CalcProjectileTargetLocation(param_1);
    fVar2 = (float)calcMidSwingOffset();
    return fVar2 + fVar1;
  }
  fVar1 = (float)Zombie::CalcProjectileTargetLocation(param_1);
  return fVar1;
}


/* ZombieSwashbuckler::ShouldDrawShadow() const */

byte __thiscall ZombieSwashbuckler::ShouldDrawShadow(ZombieSwashbuckler *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Zombie::ShouldDrawShadow((Zombie *)this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (byte)this[0x800] ^ 1;
  }
  return bVar2;
}

