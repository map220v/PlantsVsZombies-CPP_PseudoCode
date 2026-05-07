// Class: ZombiePVPSkill_Rage


/* ZombiePVPSkill_Rage::GetRenderOrderBelow() */

void __thiscall ZombiePVPSkill_Rage::GetRenderOrderBelow(ZombiePVPSkill_Rage *this)

{
  undefined4 uVar1;
  float *pfVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Board::MakeRenderOrder(0x61a81,uVar1,(int)*pfVar2);
  return;
}


/* ZombiePVPSkill_Rage::DestroyRangeEffect() */

void __thiscall ZombiePVPSkill_Rage::DestroyRangeEffect(ZombiePVPSkill_Rage *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x808);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* ZombiePVPSkill_Rage::onDestroy() */

void __thiscall ZombiePVPSkill_Rage::onDestroy(ZombiePVPSkill_Rage *this)

{
  Zombie::onDestroy((Zombie *)this);
  DestroyRangeEffect(this);
  return;
}


/* ZombiePVPSkill_Rage::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill_Rage::CalcRenderOrder(ZombiePVPSkill_Rage *this)

{
  undefined4 uVar1;
  float *pfVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Board::MakeRenderOrder(0x639c0,uVar1,(int)*pfVar2);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Rage::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill_Rage::CalcRenderOrder(ZombiePVPSkill_Rage *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Rage::StaticClassInit() */

void ZombiePVPSkill_Rage::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_Rage");
    (*pcVar2)(plVar1,asStack_10,FUN_04a99c18,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Rage::StaticGetClass() */

long * ZombiePVPSkill_Rage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill_Rage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Rage::GetClass() const */

long * ZombiePVPSkill_Rage::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill_Rage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage() */

void __thiscall ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage(ZombiePVPSkill_Rage *this)

{
  *(undefined ***)this = &PTR_GetClass_069465c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Rage_06946ff0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage() */

void __thiscall ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage(ZombiePVPSkill_Rage *this)

{
  ~ZombiePVPSkill_Rage(this + -0x10);
  return;
}


/* ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage() */

void __thiscall ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage(ZombiePVPSkill_Rage *this)

{
  ~ZombiePVPSkill_Rage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage() */

void __thiscall ZombiePVPSkill_Rage::~ZombiePVPSkill_Rage(ZombiePVPSkill_Rage *this)

{
  ~ZombiePVPSkill_Rage(this + -0x10);
  return;
}


/* ZombiePVPSkill_Rage::ZombiePVPSkill_Rage() */

void __thiscall ZombiePVPSkill_Rage::ZombiePVPSkill_Rage(ZombiePVPSkill_Rage *this)

{
  undefined4 uVar1;
  
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_069465c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Rage_06946ff0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombiePVPSkill_Rage::StaticNew() */

ZombiePVPSkill_Rage * ZombiePVPSkill_Rage::StaticNew(void)

{
  ZombiePVPSkill_Rage *this;
  
  this = ::operator_new(0x810);
  ZombiePVPSkill_Rage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Rage::onZombiePostLoad() */

void __thiscall ZombiePVPSkill_Rage::onZombiePostLoad(ZombiePVPSkill_Rage *this)

{
  char cVar1;
  UIWidget *this_00;
  TimeChallengeEndLevelUI *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
  if (cVar1 != '\0') {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(this_00);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x880);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ZombiePVPSkill_Rage,void(ZombiePVPSkill_Rage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Rage::CreateRangeEffect() */

void __thiscall ZombiePVPSkill_Rage::CreateRangeEffect(ZombiePVPSkill_Rage *this)

{
  int iVar1;
  SexyVector3 *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar2;
  TimeChallengeEndLevelUI *this_02;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_78 [8];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  uVar3 = 0;
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_70,0.0,0.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_60 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_70);
  local_5c = uVar3;
  local_58 = uVar4;
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_78,"POPANIM_ZOMBIE_ZOMBIE_PVPSKILL_RAGE");
  GetPAMByName(asStack_78);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  iVar1 = GetRenderOrderBelow(this);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_60,iVar1);
  this_02 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_01);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x880);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ZombiePVPSkill_Rage,void(ZombiePVPSkill_Rage::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x808),(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Rage::onAnimationDone(std::string const&) */

void __thiscall ZombiePVPSkill_Rage::onAnimationDone(ZombiePVPSkill_Rage *this,string *param_1)

{
  bool bVar1;
  ZombiePVPSkillRageProps *pZVar2;
  PopAnimRig *pPVar3;
  UIWidget *this_00;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"device_on");
  if (bVar1) {
    fVar4 = (float)PVZ_T();
    pZVar2 = Zombie::GetProps<ZombiePVPSkillRageProps>((Zombie *)this);
    *(float *)(this + 0x800) = fVar4 + *(float *)(pZVar2 + 0x280);
    pPVar3 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    std::string::string(asStack_40,"device");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    CreateRangeEffect(this);
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    std::string::string(asStack_40,"effect_on");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"device_off");
    if (bVar1) {
      DestroyRangeEffect(this);
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
/* ZombiePVPSkill_Rage::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_Rage::onEnterState_Playing(Zombie *param_1)

{
  PopAnimRig *pPVar1;
  Effect_PopAnim *pEVar2;
  ZombiePVPSkillRageProps *pZVar3;
  float fVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  std::string::string(asStack_40,"device");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  CreateRangeEffect((ZombiePVPSkill_Rage *)param_1);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
  std::string::string(asStack_40,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_40,0);
  std::string::~string(asStack_40);
  nop();
  fVar4 = (float)PVZ_T();
  pZVar3 = Zombie::GetProps<ZombiePVPSkillRageProps>(param_1);
  *(float *)(param_1 + 0x800) = fVar4 + *(float *)(pZVar3 + 0x280);
  std::string::string(asStack_40,"Play_PVP_Skill_Rage");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_40,0.0);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Rage::updateState_Playing() */

void __thiscall ZombiePVPSkill_Rage::updateState_Playing(ZombiePVPSkill_Rage *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ZombiePVPSkillProps *pZVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  float fVar7;
  float fVar8;
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_EOT();
  if (*(float *)(this + 0x800) != fVar7) {
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0x800) < fVar8) {
      *(float *)(this + 0x800) = fVar7;
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      pZVar4 = Zombie::GetProps<ZombiePVPSkillProps>((Zombie *)this);
      if (pZVar4 != (ZombiePVPSkillProps *)0x0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar5,pfVar5[1]);
        fVar7 = *(float *)(pZVar4 + 0x214);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar3 * fVar7,avStack_20,2,aFStack_38,0xffffffff,0xffffffff);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar1) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
          if ((((this_00 != (Zombie *)0x0) &&
               (cVar2 = Zombie::HasCondition(this_00,0x3d), cVar2 == '\0')) &&
              (bVar1 = Sexy::RtObject::IsA<ZombiePVPSkill>((RtObject *)this_00), !bVar1)) &&
             (((cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
              ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
               (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')))))) {
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x3d,1);
            MessageRouter::Post<Zombie*,int,Zombie*,PlaybackAddParamsType>
                      ((MessageRouter *)gMessageRouter,Message::ZombiePlaybackAddParams,this_00,2);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Rage::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePVPSkill_Rage::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"");
  if (bVar1) {
    return;
  }
  ZombieFairyTaleImp::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

