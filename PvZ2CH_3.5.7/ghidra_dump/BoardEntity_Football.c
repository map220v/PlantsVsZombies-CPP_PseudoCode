// Class: BoardEntity_Football


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntity_Football::StaticClassInit() */

void BoardEntity_Football::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardEntity_Football");
    (*pcVar2)(plVar1,asStack_10,FUN_03937f70,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardEntity_Football::StaticGetClass() */

long * BoardEntity_Football::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardEntity_Football",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardEntity_Football::GetClass() const */

long * BoardEntity_Football::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardEntity_Football",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardEntity_Football::~BoardEntity_Football() */

void __thiscall BoardEntity_Football::~BoardEntity_Football(BoardEntity_Football *this)

{
  *(undefined ***)this = &PTR_GetClass_066cad20;
  *(undefined ***)(this + 0x10) = &PTR__BoardEntity_Football_066caf08;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to BoardEntity_Football::~BoardEntity_Football() */

void __thiscall BoardEntity_Football::~BoardEntity_Football(BoardEntity_Football *this)

{
  ~BoardEntity_Football(this + -0x10);
  return;
}


/* BoardEntity_Football::~BoardEntity_Football() */

void __thiscall BoardEntity_Football::~BoardEntity_Football(BoardEntity_Football *this)

{
  ~BoardEntity_Football(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardEntity_Football::~BoardEntity_Football() */

void __thiscall BoardEntity_Football::~BoardEntity_Football(BoardEntity_Football *this)

{
  ~BoardEntity_Football(this + -0x10);
  return;
}


/* BoardEntity_Football::BoardEntity_Football() */

void __thiscall BoardEntity_Football::BoardEntity_Football(BoardEntity_Football *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_066cad20;
  *(undefined ***)(this + 0x10) = &PTR__BoardEntity_Football_066caf08;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  return;
}


/* BoardEntity_Football::StaticNew() */

BoardEntity_Football * BoardEntity_Football::StaticNew(void)

{
  BoardEntity_Football *this;
  
  this = ::operator_new(0xb8);
  BoardEntity_Football(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntity_Football::onPlantDied(Plant*) */

void __thiscall BoardEntity_Football::onPlantDied(BoardEntity_Football *this,Plant *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) &&
     (pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00), param_1 == (Plant *)pRVar2)
     ) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardEntity_Football::PassToTargetDone(BoardEntity*) */

void BoardEntity_Football::PassToTargetDone(BoardEntity *param_1)

{
  SoccerGameModule *this;
  
  this = (SoccerGameModule *)FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (SoccerGameModule *)0x0) {
    SoccerGameModule::CreateSoccerCursor(this);
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntity_Football::PassToTargetShooter(BoardEntity*) */

void BoardEntity_Football::PassToTargetShooter(BoardEntity *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  long lVar2;
  SoccerGameModule *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0xb0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    (**(code **)(**(long **)(lVar2 + 0xa8) + 0x220))(*(long **)(lVar2 + 0xa8));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,param_1);
    this_00 = (SoccerGameModule *)FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
    ;
    if (this_00 != (SoccerGameModule *)0x0) {
      SoccerGameModule::CreateSoccerCursor(this_00);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardEntity_Football::SetShooter(Sexy::RtWeakPtr<Plant>) */

void __thiscall BoardEntity_Football::SetShooter(BoardEntity_Football *this,RtWeakPtr *param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),param_2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<BoardEntity_Football,void(BoardEntity_Football::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntity_Football::Pass(BoardEntity*, BoardEntity*) */

void __thiscall
BoardEntity_Football::Pass(BoardEntity_Football *this,BoardEntity *param_1,BoardEntity *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  char *__s;
  ActionSubSystem *pAVar9;
  float fVar6;
  float fVar7;
  float fVar8;
  ActionSubSystem *local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  (**(code **)(*(long *)this + 0x78))(this,pfVar4);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,*pfVar5,pfVar5[1]);
  local_68 = local_70;
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_2);
  if (iVar2 == iVar3) {
    fVar7 = *pfVar4;
    fVar6 = *pfVar5;
    fVar8 = pfVar5[1];
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_70,(fVar6 + fVar7) * 0.5,fVar8 - (float)(iVar2 * 3));
    local_58 = local_70;
  }
  else {
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    iVar3 = SharkMinion::getRow((SharkMinion *)param_2);
    if (iVar3 < iVar2) {
      fVar6 = pfVar5[1];
    }
    else {
      fVar6 = pfVar4[1];
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,(*pfVar5 + *pfVar4) * 0.5,fVar6);
    local_58 = local_70;
  }
  local_60 = local_58;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (bVar1) {
    local_b8 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
                    /* WARNING: Load size is inaccurate */
    pAVar9._0_4_ = *(ActionSubSystem **)(this + 0xa4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    __s = "PassToTargetShooter";
  }
  else {
    local_b8 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
                    /* WARNING: Load size is inaccurate */
    pAVar9._0_4_ = *(ActionSubSystem **)(this + 0xa4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
    __s = "PassToTargetDone";
  }
  std::string::string(asStack_78,__s);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,asStack_78)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar9._0_4_,local_b8,(FastCurve *)&local_70,(_ccBezierConfig *)&local_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntity_Football::onInitialized() */

void __thiscall BoardEntity_Football::onInitialized(BoardEntity_Football *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  ResourceInfo *pRVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *pSVar3;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  BoardEntity::onInitialized((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0x3f4ccccd;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::string((string *)aRStack_18,"POPANIM_EFFECTS_FOOTBALL");
  GetPAMByName((string *)aRStack_18);
  std::string::~string((string *)aRStack_18);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar1,(RtClass *)0x0);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar2,true);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetAttached(pSVar3,(RealObject *)this,(SexyVector3 *)aRStack_18,1);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetDestroyWhenUnattached(pSVar3,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

