// Class: EntityComponent_GroundEffect


/* EntityComponent_GroundEffect::GetEffect() const */

RtWeakPtr<Sexy::SoundResource> * EntityComponent_GroundEffect::GetEffect(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x10));
  return in_x8;
}


/* EntityComponent_GroundEffect::~EntityComponent_GroundEffect() */

void __thiscall
EntityComponent_GroundEffect::~EntityComponent_GroundEffect(EntityComponent_GroundEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067355b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  nop();
  return;
}


/* EntityComponent_GroundEffect::~EntityComponent_GroundEffect() */

void __thiscall
EntityComponent_GroundEffect::~EntityComponent_GroundEffect(EntityComponent_GroundEffect *this)

{
  ~EntityComponent_GroundEffect(this);
  AK::FreeHook(this);
  return;
}


/* EntityComponent_GroundEffect::EntityComponent_GroundEffect() */

void __thiscall
EntityComponent_GroundEffect::EntityComponent_GroundEffect(EntityComponent_GroundEffect *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067355b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[8] = (EntityComponent_GroundEffect)0x0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  return;
}


/* EntityComponent_GroundEffect::StaticNew() */

EntityComponent_GroundEffect * EntityComponent_GroundEffect::StaticNew(void)

{
  EntityComponent_GroundEffect *this;
  
  this = ::operator_new(0x20);
  EntityComponent_GroundEffect(this);
  return this;
}


/* EntityComponent_GroundEffect::Destroy() */

void __thiscall EntityComponent_GroundEffect::Destroy(EntityComponent_GroundEffect *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    (**(code **)(*plVar2 + 0x48))();
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x18));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* EntityComponent_GroundEffect::ClearGroundEffect(RealObject*) */

void __thiscall
EntityComponent_GroundEffect::ClearGroundEffect
          (EntityComponent_GroundEffect *this,RealObject *param_1)

{
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  this[8] = (EntityComponent_GroundEffect)0x0;
  Destroy(this);
  RealObject::SetUseGroundClipRect(param_1,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityComponent_GroundEffect::SetGroundEffect(RealObject*, GroundEffectType, bool) */

void __thiscall
EntityComponent_GroundEffect::SetGroundEffect
          (EntityComponent_GroundEffect *this,RealObject *param_1,int param_3,
          EntityComponent_GroundEffect param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  RtObject *this_00;
  PoolDaylightStage *pPVar4;
  SexyVector3 *pSVar5;
  void *pvVar6;
  AudioMgr *this_01;
  char *pcVar7;
  StandaloneEffect *pSVar8;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar9;
  RtClass *pRVar10;
  string asStack_40 [8];
  Vec3 aVStack_38 [16];
  float local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xc) == param_3) goto switchD_03b85ac0_default;
  ClearGroundEffect(this,param_1);
  *(int *)(this + 0xc) = param_3;
  this[8] = param_4;
  lVar3 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 == 0) {
    EATextSquish::Vec3::Vec3(aVStack_38,-95.0,-80.0,0.0);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,*(float *)pSVar5,*(float *)(pSVar5 + 4),0.0);
    EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_38);
    iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(pSVar5 + 4));
    switch(param_3) {
    case 0:
switchD_03b85cc0_caseD_0:
      attachGroundEffect_Tide(param_1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto LAB_03b85b28;
    case 1:
switchD_03b85cc0_caseD_1:
      attachGroundEffect_Tide_With_Tail(param_1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto LAB_03b85f48;
    case 2:
switchD_03b85cc0_caseD_2:
      attachGroundEffect_Tide_Gargantuar(param_1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto LAB_03b85de0;
    case 3:
      goto switchD_03b85ac0_caseD_3;
    case 4:
      goto switchD_03b85ac0_caseD_4;
    case 5:
      goto switchD_03b85ac0_caseD_5;
    case 6:
      goto switchD_03b85ac0_caseD_6;
    case 7:
      goto switchD_03b85ac0_caseD_7;
    case 8:
      goto switchD_03b85ac0_caseD_8;
    default:
      goto switchD_03b85ac0_default;
    }
  }
  this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  pPVar4 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
  EATextSquish::Vec3::Vec3(aVStack_38,-95.0,-80.0,0.0);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,*(float *)pSVar5,*(float *)(pSVar5 + 4),0.0);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_38);
  iVar1 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(pSVar5 + 4));
  switch(param_3) {
  case 0:
    if (pPVar4 == (PoolDaylightStage *)0x0) goto switchD_03b85cc0_caseD_0;
    attachGroundEffect_Tide(param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18);
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_03b857fc(0x307);
    local_c = FUN_03b857fc(0x1cc);
    pSVar8 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    StandaloneEffect::SetClipRect(pSVar8,(TRect *)&local_18);
LAB_03b85b28:
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_40,"POPANIM_EFFECTS_PLANT_DROWNING2");
    GetPAMByName(asStack_40);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    pRVar10 = (RtClass *)PopAnimRig::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar9,pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_40);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_28,-1);
    uVar2 = Board::MakeRenderOrder(0x639c0,iVar1,0);
    goto LAB_03b85bc0;
  case 1:
    if (pPVar4 == (PoolDaylightStage *)0x0) goto switchD_03b85cc0_caseD_1;
    attachGroundEffect_Tide_With_Tail(param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18);
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_03b857fc(0x307);
    local_c = FUN_03b857fc(0x1cc);
    pSVar8 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    StandaloneEffect::SetClipRect(pSVar8,(TRect *)&local_18);
LAB_03b85f48:
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_40,"POPANIM_EFFECTS_PLANT_DROWNING2");
    GetPAMByName(asStack_40);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    pRVar10 = (RtClass *)PopAnimRig::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar9,pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_40);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_28,-1);
    uVar2 = Board::MakeGroundRenderOrder(iVar1,0);
LAB_03b85bc0:
    FUN_03b857f4(this_02 + 0x1c,uVar2);
    std::string::string((string *)&local_18,"IDLE");
    Effect_PopAnim::PlaySingleAnimation(this_02,(string *)&local_18,2);
    std::string::~string((string *)&local_18);
    nop();
LAB_03b85c00:
    pvVar6 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::RegisterForAudio(pvVar6);
    this_01 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendPositionalAudioValue(this_01,this_02,pSVar5);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Plant_Water_Splash");
    pvVar6 = (void *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::UnregisterForAudio(pvVar6);
switchD_03b85ac0_caseD_4:
    RealObject::SetUseGroundClipRect(param_1,true);
    goto switchD_03b85ac0_default;
  case 2:
    if (pPVar4 == (PoolDaylightStage *)0x0) goto switchD_03b85cc0_caseD_2;
    attachGroundEffect_Tide_Gargantuar(param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18);
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_03b857fc(0x307);
    local_c = FUN_03b857fc(0x1cc);
    pSVar8 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    StandaloneEffect::SetClipRect(pSVar8,(TRect *)&local_18);
LAB_03b85de0:
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_40,"POPANIM_EFFECTS_PLANT_DROWNING2");
    GetPAMByName(asStack_40);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    pRVar10 = (RtClass *)PopAnimRig::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar9,pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_40);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,local_28,local_24 - 50.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_18,-1);
    uVar2 = Board::MakeGroundRenderOrder(iVar1,0);
    FUN_03b857f4(this_02 + 0x1c,uVar2);
    std::string::string((string *)&local_18,"IDLE");
    Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr *)&local_18,2);
    std::string::~string((string *)&local_18);
    nop();
    (**(code **)(*(long *)this_02 + 0x80))(0x3fc00000,this_02);
    goto LAB_03b85c00;
  case 3:
switchD_03b85ac0_caseD_3:
    attachGroundEffect_RiseFromGround(param_1);
    break;
  case 4:
    goto switchD_03b85ac0_caseD_4;
  case 5:
switchD_03b85ac0_caseD_5:
    attachGroundEffect_Surf(param_1);
    break;
  case 6:
switchD_03b85ac0_caseD_6:
    attachGroundEffect_StuckUnderGround(param_1);
    break;
  case 7:
switchD_03b85ac0_caseD_7:
    attachGroundEffect_StuckIntoGround(param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    RealObject::SetUseGroundClipRect(param_1,true);
    attachGroundEffect_StuckUnderGround(param_1);
    this = this + 0x18;
    goto LAB_03b85d08;
  case 8:
switchD_03b85ac0_caseD_8:
    attachGroundEffect_Burrowed(param_1);
    break;
  default:
    goto switchD_03b85ac0_default;
  }
  this = this + 0x10;
LAB_03b85d08:
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  RealObject::SetUseGroundClipRect(param_1,true);
switchD_03b85ac0_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityComponent_GroundEffect::StaticClassInit() */

void EntityComponent_GroundEffect::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"tide",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"tide_with_tail",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"tide_gargantuar",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"rise",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"surf",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"stuck_under_ground",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"stuck_into_ground",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"burrowed",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"GroundEffectType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"EntityComponent_GroundEffect");
    (*pcVar3)(plVar2,avStack_20,FUN_03b8637c,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityComponent_GroundEffect::StaticGetClass() */

long * EntityComponent_GroundEffect::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"EntityComponent_GroundEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EntityComponent_GroundEffect::GetClass() const */

long * EntityComponent_GroundEffect::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"EntityComponent_GroundEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EntityComponent_GroundEffect::EntityComponent_GroundEffect(EntityComponent_GroundEffect const&)
    */

void __thiscall
EntityComponent_GroundEffect::EntityComponent_GroundEffect
          (EntityComponent_GroundEffect *this,EntityComponent_GroundEffect *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  this[8] = param_1[8];
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined ***)this = &PTR_GetClass_067355b0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x18),(RtWeakPtrBase *)(param_1 + 0x18));
  return;
}

