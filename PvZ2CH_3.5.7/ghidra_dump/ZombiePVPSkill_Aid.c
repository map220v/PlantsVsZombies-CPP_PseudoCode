// Class: ZombiePVPSkill_Aid


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Aid::StaticClassInit() */

void ZombiePVPSkill_Aid::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_Aid");
    (*pcVar2)(plVar1,asStack_10,FUN_04a93938,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Aid::StaticGetClass() */

long * ZombiePVPSkill_Aid::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Aid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Aid::GetClass() const */

long * ZombiePVPSkill_Aid::GetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Aid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid() */

void __thiscall ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid(ZombiePVPSkill_Aid *this)

{
  *(undefined ***)this = &PTR_GetClass_06942c20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Aid_06943650;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid() */

void __thiscall ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid(ZombiePVPSkill_Aid *this)

{
  ~ZombiePVPSkill_Aid(this + -0x10);
  return;
}


/* ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid() */

void __thiscall ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid(ZombiePVPSkill_Aid *this)

{
  ~ZombiePVPSkill_Aid(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid() */

void __thiscall ZombiePVPSkill_Aid::~ZombiePVPSkill_Aid(ZombiePVPSkill_Aid *this)

{
  ~ZombiePVPSkill_Aid(this + -0x10);
  return;
}


/* ZombiePVPSkill_Aid::ZombiePVPSkill_Aid() */

void __thiscall ZombiePVPSkill_Aid::ZombiePVPSkill_Aid(ZombiePVPSkill_Aid *this)

{
  undefined4 uVar1;
  
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_06942c20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Aid_06943650;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  this[0x800] = (ZombiePVPSkill_Aid)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* ZombiePVPSkill_Aid::StaticNew() */

ZombiePVPSkill_Aid * ZombiePVPSkill_Aid::StaticNew(void)

{
  ZombiePVPSkill_Aid *this;
  
  this = ::operator_new(0x810);
  ZombiePVPSkill_Aid(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Aid::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_Aid::onEnterState_Playing(Zombie *param_1)

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
  std::string::string(asStack_58,"b");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimationDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPSkill_Aid,void(ZombiePVPSkill_Aid::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_50,"Play_PVP_Skill_aid");
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
/* ZombiePVPSkill_Aid::CreateAidEffect() */

void __thiscall ZombiePVPSkill_Aid::CreateAidEffect(ZombiePVPSkill_Aid *this)

{
  int iVar1;
  SexyVector3 *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar3 = 0;
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,0.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_ZOMBIE_ZOMBIE_PVPSKILL_AID");
  GetPAMByName(asStack_38);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  iVar1 = (**(code **)(*(long *)this + 200))(this);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,iVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Aid::updateState_Playing() */

void __thiscall ZombiePVPSkill_Aid::updateState_Playing(ZombiePVPSkill_Aid *this)

{
  PVPAidSubsystem *this_00;
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x804) != fVar3) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x804) < fVar4)) {
    *(float *)(this + 0x804) = fVar3;
    ZombiePVPSkill_Rage::DestroyRangeEffect((ZombiePVPSkill_Rage *)this);
    this_00 = Board::GetGameSubSystem<PVPAidSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
    PVPAidSubsystem::Unregister(this_00,(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar2 = *(code **)(*plVar1 + 0x168);
    std::string::string((string *)aRStack_58,"d");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimationDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombiePVPSkill_Aid,void(ZombiePVPSkill_Aid::*)(std::string_const&)>
              (aDStack_38,aRStack_50);
    (*pcVar2)(plVar1,aRStack_58,0,aDStack_38);
    std::string::~string((string *)aRStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Aid::onAnimationDone(std::string const&) */

void __thiscall ZombiePVPSkill_Aid::onAnimationDone(ZombiePVPSkill_Aid *this,string *param_1)

{
  bool bVar1;
  ZombiePVPSkillAidProps *pZVar2;
  PopAnimRig *pPVar3;
  Effect_PopAnim *pEVar4;
  PVPAidSubsystem *this_00;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"b");
  if (bVar1) {
    this[0x800] = (ZombiePVPSkill_Aid)0x1;
    fVar5 = (float)PVZ_T();
    pZVar2 = Zombie::GetProps<ZombiePVPSkillAidProps>((Zombie *)this);
    *(float *)(this + 0x804) = fVar5 + *(float *)(pZVar2 + 0x280);
    pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_40,"c");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    CreateAidEffect(this);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    std::string::string(asStack_40,"e");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_40,0);
    std::string::~string(asStack_40);
    nop();
    this_00 = Board::GetGameSubSystem<PVPAidSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_48);
    PVPInvisibleSubsystem::Register((PVPInvisibleSubsystem *)this_00,(RtWeakPtr *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    bVar1 = std::operator==(param_1,"d");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Aid::onDestroy() */

void __thiscall ZombiePVPSkill_Aid::onDestroy(ZombiePVPSkill_Aid *this)

{
  PVPAidSubsystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onDestroy((Zombie *)this);
  ZombiePVPSkill_Rage::DestroyRangeEffect((ZombiePVPSkill_Rage *)this);
  this_00 = Board::GetGameSubSystem<PVPAidSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PVPAidSubsystem::Unregister(this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Aid::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill_Aid::CalcRenderOrder(ZombiePVPSkill_Aid *this)

{
  if (this[0x800] == (ZombiePVPSkill_Aid)0x0) {
    ZombiePVPSkill::CalcRenderOrder((ZombiePVPSkill *)this);
    return;
  }
  ZombiePVPSkill_Rage::GetRenderOrderBelow((ZombiePVPSkill_Rage *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Aid::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill_Aid::CalcRenderOrder(ZombiePVPSkill_Aid *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}

