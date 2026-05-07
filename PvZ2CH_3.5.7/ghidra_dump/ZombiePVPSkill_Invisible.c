// Class: ZombiePVPSkill_Invisible


/* ZombiePVPSkill_Invisible::onZombieInitialize() */

void ZombiePVPSkill_Invisible::onZombieInitialize(void)

{
  Zombie *in_x0;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0xdc8) != '\0')
     ) {
    Zombie::buildProjectileSets(in_x0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Invisible::StaticClassInit() */

void ZombiePVPSkill_Invisible::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_Invisible");
    (*pcVar2)(plVar1,asStack_10,FUN_04a97614,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Invisible::StaticGetClass() */

long * ZombiePVPSkill_Invisible::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill_Invisible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Invisible::GetClass() const */

long * ZombiePVPSkill_Invisible::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill_Invisible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible() */

void __thiscall ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible(ZombiePVPSkill_Invisible *this)

{
  *(undefined ***)this = &PTR_GetClass_06944f40;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Invisible_06945970;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible() */

void __thiscall ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible(ZombiePVPSkill_Invisible *this)

{
  ~ZombiePVPSkill_Invisible(this + -0x10);
  return;
}


/* ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible() */

void __thiscall ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible(ZombiePVPSkill_Invisible *this)

{
  ~ZombiePVPSkill_Invisible(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible() */

void __thiscall ZombiePVPSkill_Invisible::~ZombiePVPSkill_Invisible(ZombiePVPSkill_Invisible *this)

{
  ~ZombiePVPSkill_Invisible(this + -0x10);
  return;
}


/* ZombiePVPSkill_Invisible::ZombiePVPSkill_Invisible() */

void __thiscall ZombiePVPSkill_Invisible::ZombiePVPSkill_Invisible(ZombiePVPSkill_Invisible *this)

{
  undefined4 uVar1;
  
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_06944f40;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Invisible_06945970;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombiePVPSkill_Invisible::StaticNew() */

ZombiePVPSkill_Invisible * ZombiePVPSkill_Invisible::StaticNew(void)

{
  ZombiePVPSkill_Invisible *this;
  
  this = ::operator_new(0x810);
  ZombiePVPSkill_Invisible(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Invisible::onAnimationDone(std::string const&) */

void __thiscall
ZombiePVPSkill_Invisible::onAnimationDone(ZombiePVPSkill_Invisible *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"a");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_40,"b");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"c");
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
/* ZombiePVPSkill_Invisible::CreateRangeEffect() */

void __thiscall ZombiePVPSkill_Invisible::CreateRangeEffect(ZombiePVPSkill_Invisible *this)

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
  std::string::string(asStack_38,"POPANIM_ZOMBIE_ZOMBIE_PVPSKILL_INVISIBLE");
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
/* ZombiePVPSkill_Invisible::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_Invisible::onEnterState_Playing(Zombie *param_1)

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
  std::string::string(asStack_58,"a");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onAnimationDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPSkill_Invisible,void(ZombiePVPSkill_Invisible::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  (*pcVar2)(plVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  CreateRangeEffect((ZombiePVPSkill_Invisible *)param_1);
  std::string::string(asStack_50,"Play_PVP_Skill_Fog");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_50,0.0);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Invisible::GetSkillTime() */

undefined4 __thiscall ZombiePVPSkill_Invisible::GetSkillTime(ZombiePVPSkill_Invisible *this)

{
  int iVar1;
  ZombiePVPSkillInvisibleProps *pZVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pZVar2 = Zombie::GetProps<ZombiePVPSkillInvisibleProps>((Zombie *)this);
  iVar1 = FUN_04a965b8(*(undefined4 *)(this + 0x50));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(pZVar2 + 0x280);
    uVar3 = FUN_04a965bc(uVar5,*(undefined8 *)(pZVar2 + 0x288));
    if ((ulong)(long)iVar1 < uVar3) {
      puVar4 = (undefined4 *)FUN_04a965cc(uVar5,(long)iVar1);
      return *puVar4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Invisible::updateState_Playing() */

void __thiscall ZombiePVPSkill_Invisible::updateState_Playing(ZombiePVPSkill_Invisible *this)

{
  PVPInvisibleSubsystem *this_00;
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
  if ((*(float *)(this + 0x800) != fVar3) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x800) < fVar4)) {
    *(float *)(this + 0x800) = fVar3;
    ZombiePVPSkill_Rage::DestroyRangeEffect((ZombiePVPSkill_Rage *)this);
    this_00 = Board::GetGameSubSystem<PVPInvisibleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
    PVPInvisibleSubsystem::Unregister(this_00,(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    plVar1 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar2 = *(code **)(*plVar1 + 0x168);
    std::string::string((string *)aRStack_58,"c");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimationDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombiePVPSkill_Invisible,void(ZombiePVPSkill_Invisible::*)(std::string_const&)>
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
/* ZombiePVPSkill_Invisible::onDestroy() */

void __thiscall ZombiePVPSkill_Invisible::onDestroy(ZombiePVPSkill_Invisible *this)

{
  PVPInvisibleSubsystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onDestroy((Zombie *)this);
  ZombiePVPSkill_Rage::DestroyRangeEffect((ZombiePVPSkill_Rage *)this);
  this_00 = Board::GetGameSubSystem<PVPInvisibleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PVPInvisibleSubsystem::Unregister(this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Invisible::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombiePVPSkill_Invisible::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  PVPInvisibleSubsystem *this;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"broken");
  if (bVar1) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)GetSkillTime((ZombiePVPSkill_Invisible *)param_1);
    *(float *)(param_1 + 0x800) = fVar4 + fVar3;
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    this = Board::GetGameSubSystem<PVPInvisibleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    PVPInvisibleSubsystem::Register(this,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    ZombieFairyTaleImp::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

