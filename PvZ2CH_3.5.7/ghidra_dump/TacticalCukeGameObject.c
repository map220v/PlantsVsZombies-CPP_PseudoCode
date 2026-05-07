// Class: TacticalCukeGameObject


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TacticalCukeGameObject::StaticClassInit() */

void TacticalCukeGameObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"TacticalCukeGameObject");
    (*pcVar2)(plVar1,asStack_10,FUN_0431a258,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TacticalCukeGameObject::StaticGetClass() */

long * TacticalCukeGameObject::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"TacticalCukeGameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TacticalCukeGameObject::GetClass() const */

long * TacticalCukeGameObject::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"TacticalCukeGameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TacticalCukeGameObject::Draw(Sexy::Graphics*) */

void __thiscall TacticalCukeGameObject::Draw(TacticalCukeGameObject *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0x20)) {
    Sexy::Color::Color(aCStack_18,1);
    local_c = (int)(*(float *)(this + 0x20) * 255.0);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TacticalCukeGameObject::reset() */

void __thiscall TacticalCukeGameObject::reset(TacticalCukeGameObject *this)

{
  this[0x10] = (TacticalCukeGameObject)0x0;
  this[0x11] = (TacticalCukeGameObject)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* TacticalCukeGameObject::TacticalCukeGameObject() */

void __thiscall TacticalCukeGameObject::TacticalCukeGameObject(TacticalCukeGameObject *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06833440;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  reset(this);
  return;
}


/* TacticalCukeGameObject::StaticNew() */

TacticalCukeGameObject * TacticalCukeGameObject::StaticNew(void)

{
  TacticalCukeGameObject *this;
  
  this = ::operator_new(0x40);
  TacticalCukeGameObject(this);
  return this;
}


/* TacticalCukeGameObject::~TacticalCukeGameObject() */

void __thiscall TacticalCukeGameObject::~TacticalCukeGameObject(TacticalCukeGameObject *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_01;
  
  this_01 = (RtWeakPtr *)(this + 0x28);
  *(undefined ***)this = &PTR_GetClass_06833440;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 0x30);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* TacticalCukeGameObject::~TacticalCukeGameObject() */

void __thiscall TacticalCukeGameObject::~TacticalCukeGameObject(TacticalCukeGameObject *this)

{
  ~TacticalCukeGameObject(this);
  AK::FreeHook(this);
  return;
}


/* TacticalCukeGameObject::onDestroy() */

void __thiscall TacticalCukeGameObject::onDestroy(TacticalCukeGameObject *this)

{
  bool bVar1;
  long *plVar2;
  WorldMapCamera *this_00;
  
  if (*(int *)(this + 0x14) == 0) {
    this_00 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(this_00,false);
  }
  reset(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TacticalCukeGameObject::onInitialized() */

void TacticalCukeGameObject::onInitialized(void)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  char cVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  StandaloneEffect *pSVar6;
  long *plVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auVar9 [16];
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x28);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  std::string::string(asStack_60,"POPANIM_EFFECTS_POWER_UP_TACTICALCUKE");
  GetPAMByName(asStack_60);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_58);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::~string(asStack_60);
  nop();
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_PopAnim::SetCentered(pEVar4,true);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetKeepAlive(pSVar6,false);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetVisibility(pSVar6,false);
  pSVar6 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onAnimStopped");
  pRVar8 = aRStack_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60);
  StandaloneEffect::SetCompletionCallback(pSVar6,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  auVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar9._0_8_,auVar9._8_8_,(LineBreakCategory *)pRVar8,in_x3,in_x4);
  if (cVar1 == '\0') {
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar7 + 0x80))(0x40000000);
  }
  iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2 + 1);
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  *(float *)(in_x0 + 0x38) = (float)iVar2 + DAT_06af97d0;
  iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3 / 2 + 1);
  *(float *)(in_x0 + 0x3c) = (float)iVar3 + DAT_06af97d4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TacticalCukeGameObject::setState(TacticalCukeGameObject::CukeState) */

void TacticalCukeGameObject::setState
               (long param_1,int param_2,undefined8 param_3,LineBreakCategory *param_4,
               LineBreakCategory *param_5)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  char cVar1;
  WorldMapCamera *pWVar2;
  StandaloneEffect *pSVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  char *pcVar6;
  PopAnimRig *this_00;
  long *plVar7;
  LineBreakCategory *pLVar8;
  float fVar9;
  undefined1 auVar10 [16];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 1) {
    pWVar2 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(pWVar2,false);
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_60,*(float *)(param_1 + 0x38),*(float *)(param_1 + 0x3c),0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)asStack_60,800000);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    std::string::string(asStack_60,"attack");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,(Vec3 *)asStack_60,0);
    std::string::~string(asStack_60);
    nop();
  }
  else if (param_2 == 2) {
    this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    std::string::string(asStack_68,"POPANIM_EFFECTS_POWER_UP_TACTICALCUKE_EXPLOSION");
    GetPAMByName(asStack_68);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_60);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    std::string::~string(asStack_68);
    nop();
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Effect_PopAnim::SetCentered(pEVar4,true);
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_60,*(float *)(param_1 + 0x38),*(float *)(param_1 + 0x3c),0.0);
    pLVar8 = (LineBreakCategory *)0xc3500;
    auVar10 = StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)asStack_60,800000);
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar10._0_8_,auVar10._8_8_,pLVar8,param_4,param_5);
    if (cVar1 == '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar7 + 0x80))(0x40000000);
    }
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    StandaloneEffect::SetKeepAlive(pSVar3,false);
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
               (RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    std::string::string(asStack_60,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_60,0);
    std::string::~string(asStack_60);
    nop();
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_UI_PowerUp_Cuke");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    Effect_PopAnim::GetPopAnimRigPtr();
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::string(asStack_60,"animation");
    fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_60);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Board::ExplosionShakeBoard(*(Board **)(gLawnApp + 0x9f0),0x14,5,fVar9);
  }
  else if (param_2 == 0) {
    pWVar2 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(pWVar2,true);
    pSVar3 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    StandaloneEffect::SetVisibility(pSVar3,true);
    pEVar4 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    std::string::string(asStack_60,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_60,0);
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TacticalCukeGameObject::Activate(bool, float, int) */

void __thiscall
TacticalCukeGameObject::Activate
          (TacticalCukeGameObject *this,bool param_1,float param_2,int param_3)

{
  char cVar1;
  
  if (this[0x11] != (TacticalCukeGameObject)param_1) {
    if (param_1) {
      *(float *)(this + 0x1c) = param_2;
      *(int *)(this + 0x24) = param_3;
      this[0x11] = (TacticalCukeGameObject)0x1;
      *(undefined4 *)(this + 0x18) = 0;
      setState(this,0);
      cVar1 = LawnApp::IsInModule(gLawnApp,1);
      if (cVar1 != '\0') {
        Board::DestroyAllZombieProjectiles();
      }
    }
    this[0x11] = (TacticalCukeGameObject)param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TacticalCukeGameObject::Update() */

void __thiscall TacticalCukeGameObject::Update(TacticalCukeGameObject *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  StandaloneEffect *this_00;
  PopAnimRig *this_01;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  Vec3 aVStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x11] != (TacticalCukeGameObject)0x0) {
    if (*(int *)(this + 0x14) == 0) {
      lVar4 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar9 = (float)FUN_04318fa0(*(undefined4 *)(lVar4 + 0x3c));
      fVar10 = *(float *)(this + 0x1c);
      fVar9 = fVar9 + *(float *)(this + 0x18);
      *(float *)(this + 0x18) = fVar9;
      if (fVar10 <= fVar9) {
        setState(this,1);
      }
      else {
        this_00 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
        EATextSquish::Vec3::Vec3
                  (aVStack_68,*(float *)(this + 0x38),(fVar9 / fVar10) * *(float *)(this + 0x3c),0.0
                  );
        StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aVStack_68,800000);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      Effect_PopAnim::GetPopAnimRigPtr();
      this_01 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_68);
      lVar4 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar9 = (float)FUN_04318f9c(*(undefined4 *)(lVar4 + 0x38));
      lVar4 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar10 = (float)FUN_04318fa0(*(undefined4 *)(lVar4 + 0x3c));
      PopAnimRig::UpdateAnim(this_01,fVar9,fVar10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_68);
    }
    else if (*(int *)(this + 0x14) == 2) {
      if (0.0 < *(float *)(this + 0x20)) {
        fVar9 = (float)PVZ_Dt();
        fVar9 = *(float *)(this + 0x20) - fVar9;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        *(float *)(this + 0x20) = fVar9;
      }
      if (this[0x10] == (TacticalCukeGameObject)0x0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
        uVar3 = operator|(2,4);
        EntityFinder::GetEntities
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3)
        ;
        iVar1 = *(int *)(this + 0x24);
        uVar5 = operator|(0x1000,0x20000);
        uVar5 = operator|(uVar5,8);
        uVar5 = operator|(uVar5,0x200);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((float)iVar1 + 6300.0),local_88,local_84,(DamageInfo *)aVStack_68,
                   uVar5,0,aPStack_90,0);
        uVar8 = 0;
        while (uVar5 = local_80, uVar6 = FUN_04319058(local_80,local_78), uVar8 < uVar6) {
          puVar7 = (undefined8 *)FUN_04319064(uVar5,uVar8);
          cVar2 = RealObject::IsOnOpposingTeam(*puVar7,1);
          if (cVar2 == '\0') {
            uVar8 = uVar8 + 1;
          }
          else {
            puVar7 = (undefined8 *)FUN_04319064(local_80,uVar8);
            (**(code **)(*(long *)*puVar7 + 0x110))((long *)*puVar7,(DamageInfo *)aVStack_68);
            uVar8 = uVar8 + 1;
          }
        }
        this[0x10] = (TacticalCukeGameObject)0x1;
        MessageRouter::Post((_func_void *)gMessageRouter);
        DamageInfo::~DamageInfo((DamageInfo *)aVStack_68);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TacticalCukeGameObject::onAnimStopped(StandaloneEffect*) */

void TacticalCukeGameObject::onAnimStopped(StandaloneEffect *param_1)

{
  StandaloneEffect *this;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    this = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
    StandaloneEffect::SetVisibility(this,false);
    setState(param_1,2);
    return;
  }
  if (*(int *)(param_1 + 0x14) == 2) {
    reset((TacticalCukeGameObject *)param_1);
    return;
  }
  return;
}

