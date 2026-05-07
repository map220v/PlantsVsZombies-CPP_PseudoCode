// Class: WizardFingerGameObject


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WizardFingerGameObject::StaticClassInit() */

void WizardFingerGameObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"WizardFingerGameObject");
    (*pcVar2)(plVar1,asStack_10,FUN_043183ac,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WizardFingerGameObject::StaticGetClass() */

long * WizardFingerGameObject::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WizardFingerGameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WizardFingerGameObject::GetClass() const */

long * WizardFingerGameObject::GetClass(void)

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
  (*pcVar3)(plVar1,"WizardFingerGameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WizardFingerGameObject::WizardFingerGameObject() */

void __thiscall WizardFingerGameObject::WizardFingerGameObject(WizardFingerGameObject *this)

{
  GameObject::GameObject((GameObject *)this);
  this[0x10] = (WizardFingerGameObject)0x0;
  *(undefined ***)this = &PTR_GetClass_068332d0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  this[0x38] = (WizardFingerGameObject)0x0;
  return;
}


/* WizardFingerGameObject::StaticNew() */

WizardFingerGameObject * WizardFingerGameObject::StaticNew(void)

{
  WizardFingerGameObject *this;
  
  this = ::operator_new(0x40);
  WizardFingerGameObject(this);
  return this;
}


/* WizardFingerGameObject::~WizardFingerGameObject() */

void __thiscall WizardFingerGameObject::~WizardFingerGameObject(WizardFingerGameObject *this)

{
  *(undefined ***)this = &PTR_GetClass_068332d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* WizardFingerGameObject::~WizardFingerGameObject() */

void __thiscall WizardFingerGameObject::~WizardFingerGameObject(WizardFingerGameObject *this)

{
  ~WizardFingerGameObject(this);
  AK::FreeHook(this);
  return;
}


/* WizardFingerGameObject::onDestroy() */

void __thiscall WizardFingerGameObject::onDestroy(WizardFingerGameObject *this)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  (**(code **)(*plVar1 + 0x48))();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  (**(code **)(*plVar1 + 0x48))();
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WizardFingerGameObject::SetLocation(Sexy::SexyVector2 const&) */

void __thiscall
WizardFingerGameObject::SetLocation(WizardFingerGameObject *this,SexyVector2 *param_1)

{
  StandaloneEffect *pSVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  StandaloneEffect::SetVisibility(pSVar1,true);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0x14),*(float *)(this + 0x18),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)aVStack_18,800000);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0x14),*(float *)(this + 0x18),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)aVStack_18,0xc3501);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0x14),*(float *)(this + 0x18),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar1,(SexyVector3 *)aVStack_18,0xc3502);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WizardFingerGameObject::SetActive(bool) */

void __thiscall WizardFingerGameObject::SetActive(WizardFingerGameObject *this,bool param_1)

{
  StandaloneEffect *pSVar1;
  
  this[0x10] = (WizardFingerGameObject)param_1;
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  StandaloneEffect::SetVisibility(pSVar1,(bool)this[0x10]);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  StandaloneEffect::SetVisibility(pSVar1,(bool)this[0x10]);
  pSVar1 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  StandaloneEffect::SetVisibility(pSVar1,(bool)this[0x10]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WizardFingerGameObject::onInitialized() */

void __thiscall WizardFingerGameObject::onInitialized(WizardFingerGameObject *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_02;
  char cVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  LineBreakCategory *pLVar5;
  undefined8 uVar6;
  long *plVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x4;
  Effect_PopAnim *pEVar10;
  undefined1 auVar9 [16];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28);
  this_02 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_02,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  std::string::string(asStack_18,"POPANIM_EFFECTS_POWER_UP_LIGHTNING");
  GetPAMByName(asStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Effect_PopAnim::SetCentered(pEVar2,true);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  std::string::string((string *)aRStack_10,"animation");
  pEVar10._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,aRStack_10,2);
  std::string::~string((string *)aRStack_10);
  nop();
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  StandaloneEffect::SetKeepAlive(pSVar4,true);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  StandaloneEffect::SetVisibility(pSVar4,false);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::string::string(asStack_18,"POPANIM_EFFECTS_POWER_UP_LIGHTNING");
  GetPAMByName(asStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_PopAnim::SetCentered(pEVar2,true);
  pLVar5 = (LineBreakCategory *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::string::string((string *)aRStack_10,"attack");
  Effect_PopAnim::PlayLoopingAnimation(pEVar10._0_4_,pLVar5,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetVisibility(pSVar4,false);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetKeepAlive(pSVar4,true);
  this[0x38] = (WizardFingerGameObject)0x0;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_18,"POPANIM_EFFECTS_POWER_UP_LIGHTNING");
  GetPAMByName(asStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar2,true);
  uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_10,"attack_top");
  pLVar8 = (LineBreakCategory *)0x0;
  Effect_PopAnim::PlayLoopingAnimation(pEVar10._0_4_,uVar6,aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar4,false);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  auVar9 = StandaloneEffect::SetKeepAlive(pSVar4,true);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar9._0_8_,auVar9._8_8_,pLVar8,pLVar5,in_x4);
  if (cVar1 == '\0') {
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar7 + 0x80))(0x40000000);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar7 + 0x80))(0x40000000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WizardFingerGameObject::GetClosestEntity(Sexy::SexyVector2 const&) */

void __thiscall
WizardFingerGameObject::GetClosestEntity(WizardFingerGameObject *this,SexyVector2 *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  string *psVar6;
  long lVar7;
  undefined8 *puVar8;
  Insets *pIVar9;
  long *extraout_x0;
  long *plVar10;
  ulong uVar11;
  long *extraout_x0_00;
  RtObject *this_00;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_48;
  int local_44;
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  float local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  lVar15 = 0;
  uVar4 = operator|(2,4);
  lVar14 = 0;
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  psVar6 = (string *)
           EntityFinder::GetEntitiesTouchingCircle2D
                     ((float)iVar5 * 1.75,
                      (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
                      uVar4,param_1,0xffffffff,0xffffffff);
  fVar16 = (float)CheatManager::GetVariableValue(psVar6);
  uVar12 = local_20;
  lVar7 = FUN_04317360(local_20,local_18);
  fVar18 = fVar16;
  if (lVar7 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_0431736c(uVar12,uVar13);
      this_00 = (RtObject *)*puVar8;
      pIVar9 = (Insets *)(**(code **)(*(long *)this_00 + 0x178))(this_00);
      Sexy::Insets::Insets(aIStack_30,pIVar9);
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_48,(TPoint *)&local_38);
      fVar17 = (float)local_44;
      Sexy::FastCurve::SetOutRange(aFStack_40,(float)local_48,fVar17);
      local_38 = Sexy::SexyVector2::operator-(param_1,(SexyVector2 *)aFStack_40);
      local_34 = fVar17;
      fVar17 = (float)VectorNorm((FPoint *)&local_38);
      bVar1 = Sexy::RtObject::IsA<Zombie>(this_00);
      if ((bVar1) && (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')) {
        nop();
        bVar3 = (**(code **)(*extraout_x0_00 + 0x328))();
        uVar12 = local_20;
        if ((((bVar3 < (fVar17 < fVar16)) &&
             (cVar2 = Zombie::HasCondition(extraout_x0_00,0x27), uVar12 = local_20, cVar2 == '\0'))
            && (cVar2 = Zombie::HasCondition(extraout_x0_00,0x25), uVar12 = local_20, cVar2 == '\0')
            ) && (cVar2 = Zombie::HasCondition(extraout_x0_00,0x2c), uVar12 = local_20,
                 cVar2 == '\0')) {
          plVar10 = (long *)FUN_0431736c(local_20,uVar13);
          lVar14 = *plVar10;
          fVar16 = fVar17;
        }
      }
      else {
        nop();
        cVar2 = (**(code **)(*extraout_x0 + 0x200))();
        uVar12 = local_20;
        if ((cVar2 != '\0') && (fVar17 < fVar18)) {
          plVar10 = (long *)FUN_0431736c(local_20,uVar13);
          lVar15 = *plVar10;
          fVar18 = fVar17;
        }
      }
      uVar13 = uVar13 + 1;
      uVar11 = FUN_04317360(uVar12,local_18);
    } while (uVar13 < uVar11);
  }
  if (lVar14 == 0) {
    lVar14 = lVar15;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WizardFingerGameObject::Update() */

void __thiscall WizardFingerGameObject::Update(WizardFingerGameObject *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  StandaloneEffect *pSVar3;
  Effect_PopAnim *pEVar4;
  float *pfVar5;
  long *plVar6;
  undefined8 uVar7;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long lVar9;
  float fVar10;
  Effect_PopAnim *pEVar12;
  float fVar11;
  FastCurve aFStack_88 [8];
  undefined4 local_80;
  float local_7c;
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x10] == (WizardFingerGameObject)0x0) goto LAB_043188f0;
  this_00 = (RtObject *)GetClosestEntity(this,(SexyVector2 *)(this + 0x14));
  if (this_00 == (RtObject *)0x0) {
    if (this[0x38] != (WizardFingerGameObject)0x0) {
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      StandaloneEffect::SetVisibility(pSVar3,false);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      StandaloneEffect::SetVisibility(pSVar3,false);
      this[0x38] = (WizardFingerGameObject)0x0;
    }
    goto LAB_043188f0;
  }
  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28);
  if (this[0x38] == (WizardFingerGameObject)0x0) {
    pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    std::string::string((string *)&local_68,"attack");
    pEVar12._0_4_ = (Effect_PopAnim *)PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,(string *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
    ;
    std::string::string((string *)&local_68,"attack_top");
    Effect_PopAnim::PlayLoopingAnimation(pEVar12._0_4_,uVar7,(string *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    this[0x38] = (WizardFingerGameObject)0x1;
  }
  pSVar3 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
  StandaloneEffect::SetVisibility(pSVar3,true);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  StandaloneEffect::SetVisibility(pSVar3,true);
  (**(code **)(*(long *)this_00 + 0x178))(this_00);
  Sexy::TRect<int>::GetCenter();
  (**(code **)(*(long *)this_00 + 0x178))(this_00);
  Sexy::TRect<int>::GetCenter();
  fVar11 = (float)local_64;
  Sexy::FastCurve::SetOutRange(aFStack_88,(float)(int)local_70,fVar11);
  local_80 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_88,(SexyVector2 *)(this + 0x14));
  local_7c = fVar11;
  pEVar4 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
  Effect_PopAnim::SetOrientation(pEVar4,(SexyVector2 *)&local_80);
  local_70 = (float)DVec2::getLength((DVec2 *)&local_80);
  local_70 = local_70 * 0.016666668;
  local_68 = 0x3e800000;
  pfVar5 = eastl::max_alt<float>(&local_70,(float *)&local_68);
  fVar11 = *pfVar5;
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
  (**(code **)(*plVar6 + 0xb8))(fVar11,0x3f800000);
  bVar1 = Sexy::RtObject::IsA<Zombie>(this_00);
  if (bVar1) {
    nop();
    pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_01);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    fVar11 = *(float *)(lVar9 + 0x2c) * 1100.0;
    cVar2 = Zombie::IsTargetable(this_01);
    if (cVar2 != '\0') goto LAB_04318a4c;
    fVar10 = (float)PVZ_Dt();
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar10 * fVar11),local_70,local_6c,(DamageInfo *)&local_68,0x80,0,
               aPStack_78,0);
  }
  else {
    fVar11 = 1100.0;
LAB_04318a4c:
    fVar10 = (float)PVZ_Dt();
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar10 * fVar11),local_70,local_6c,(DamageInfo *)&local_68,0x80,0,
               aPStack_78,0);
    (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
LAB_043188f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

