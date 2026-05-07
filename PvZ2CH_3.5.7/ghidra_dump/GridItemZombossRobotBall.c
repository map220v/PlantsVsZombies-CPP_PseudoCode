// Class: GridItemZombossRobotBall


/* GridItemZombossRobotBall::onDraw(Sexy::Graphics*) */

void GridItemZombossRobotBall::onDraw(Graphics *param_1)

{
  char cVar1;
  Graphics *in_x1;
  
  GridItemAnimation::drawAnimation((GridItemAnimation *)param_1,in_x1);
  cVar1 = GridItemAnimation::GetHealthBarVisible((GridItemAnimation *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  GridItemAnimation::drawHealthBar((GridItemAnimation *)param_1,in_x1);
  return;
}


/* GridItemZombossRobotBall::CalcRenderOrder() const */

void __thiscall GridItemZombossRobotBall::CalcRenderOrder(GridItemZombossRobotBall *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemZombossRobotBall::CalcRenderOrder() const */

void __thiscall GridItemZombossRobotBall::CalcRenderOrder(GridItemZombossRobotBall *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemZombossRobotBall::~GridItemZombossRobotBall() */

void __thiscall GridItemZombossRobotBall::~GridItemZombossRobotBall(GridItemZombossRobotBall *this)

{
  *(undefined ***)this = &PTR_GetClass_06a105a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombossRobotBall_06a10858;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombossRobotBall::~GridItemZombossRobotBall() */

void __thiscall GridItemZombossRobotBall::~GridItemZombossRobotBall(GridItemZombossRobotBall *this)

{
  ~GridItemZombossRobotBall(this + -0x10);
  return;
}


/* GridItemZombossRobotBall::~GridItemZombossRobotBall() */

void __thiscall GridItemZombossRobotBall::~GridItemZombossRobotBall(GridItemZombossRobotBall *this)

{
  ~GridItemZombossRobotBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombossRobotBall::~GridItemZombossRobotBall() */

void __thiscall GridItemZombossRobotBall::~GridItemZombossRobotBall(GridItemZombossRobotBall *this)

{
  ~GridItemZombossRobotBall(this + -0x10);
  return;
}


/* GridItemZombossRobotBall::GridItemZombossRobotBall() */

void __thiscall GridItemZombossRobotBall::GridItemZombossRobotBall(GridItemZombossRobotBall *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (GridItemZombossRobotBall)0x0;
  this[0x1a6] = (GridItemZombossRobotBall)0x0;
  *(undefined ***)this = &PTR_GetClass_06a105a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombossRobotBall_06a10858;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemZombossRobotBall::StaticNew() */

GridItemZombossRobotBall * GridItemZombossRobotBall::StaticNew(void)

{
  GridItemZombossRobotBall *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombossRobotBall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::StaticClassInit() */

void GridItemZombossRobotBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombossRobotBall");
    (*pcVar2)(plVar1,asStack_10,FUN_04f18020,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombossRobotBall::StaticGetClass() */

long * GridItemZombossRobotBall::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombossRobotBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombossRobotBall::GetClass() const */

long * GridItemZombossRobotBall::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombossRobotBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombossRobotBall::initializeHitpoints(float) */

void GridItemZombossRobotBall::initializeHitpoints(float param_1)

{
  GridItem *in_x0;
  
  FUN_04f11eac(in_x0 + 300);
  if (*(code **)(*(long *)in_x0 + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints(in_x0);
    FUN_04f11eb4(in_x0 + 0x128);
    return;
  }
  (**(code **)(*(long *)in_x0 + 0x1e0))();
  FUN_04f11eb4(in_x0 + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::checkAndCreateBurntEffect() */

void __thiscall GridItemZombossRobotBall::checkAndCreateBurntEffect(GridItemZombossRobotBall *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  GridItemZombossRobotBallProps *pGVar4;
  float *pfVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  fVar9 = *(float *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (fVar9 < fVar7) {
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x1a8) = fVar7 + 0.45;
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"pvz1_robot_ball");
    pGVar4 = GridItem::GetProps<GridItemZombossRobotBallProps>();
    if (*(int *)(pGVar4 + 0xd0) == 0) {
      pcVar3 = "POPANIM_EFFECTS_ZOMBOSS_PVZ1_ROBOT_FIREBALL_FLOOR_EFFECT";
    }
    else {
      pcVar3 = "POPANIM_EFFECTS_ZOMBOSS_PVZ1_ROBOT_ICEBALL_FLOOR_EFFECT";
    }
    std::string::string(asStack_20,pcVar3);
    nop();
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar7 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar8 = pfVar5[2];
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_20);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Effect_PopAnim::SetCentered(this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7,fVar9,fVar8);
    iVar1 = SharkMinion::getRow((SharkMinion *)this);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar1 = Board::MakeGroundRenderOrder(iVar1,iVar2);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    if ((*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') &&
       (iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this), iVar1 < 5)) {
      Effect_PopAnim::SetOrientation(this_00,0.20943952);
    }
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::doBreaking() */

void __thiscall GridItemZombossRobotBall::doBreaking(GridItemZombossRobotBall *this)

{
  char cVar1;
  GridItemZombossRobotBallProps *pGVar2;
  PopAnimRig *pPVar3;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (GridItemZombossRobotBall)0x0) {
    pGVar2 = GridItem::GetProps<GridItemZombossRobotBallProps>();
    FUN_05475d88(asStack_78,pGVar2 + 0xd8);
    this[0x1a5] = (GridItemZombossRobotBall)0x1;
    cVar1 = FUN_0547419c(asStack_78);
    if (cVar1 == '\0') {
      GridItemAnimation::GetAnimRig();
      pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop(pPVar3,asStack_78,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      std::string::~string(asStack_78);
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
      std::string::~string(asStack_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::crushEntities() */

void __thiscall GridItemZombossRobotBall::crushEntities(GridItemZombossRobotBall *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  GridItemZombossRobotBallProps *pGVar6;
  float *pfVar7;
  undefined8 *puVar8;
  Plant *pPVar9;
  long lVar10;
  GridItem *pGVar11;
  code *pcVar12;
  RtObject *this_00;
  float fVar13;
  float fVar14;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar6 = GridItem::GetProps<GridItemZombossRobotBallProps>();
  iVar1 = *(int *)(pGVar6 + 0xd0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar13 = pfVar7[1];
  fVar14 = *pfVar7;
  Sexy::Insets::Insets((Insets *)&local_90);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_90 = (int)(fVar14 - (float)(iVar4 / 2));
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_8c = (int)((fVar13 - (float)(iVar4 / 2)) - 24.0);
  local_88 = BoardConstants::GRIDSQUARE_WIDTH();
  local_84 = BoardConstants::GRIDSQUARE_HEIGHT();
  uVar5 = operator|(4,1);
  EntityFinder::GetEntitiesInRectangle(avStack_80,uVar5,(Insets *)&local_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar2) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_00 = (RtObject *)*puVar8;
    pPVar9 = Sexy::RtObject::Cast<Plant>(this_00);
    if (pPVar9 == (Plant *)0x0) {
      pGVar11 = Sexy::RtObject::Cast<GridItem>(this_00);
      if (((pGVar11 != (GridItem *)0x0) &&
          (cVar3 = (**(code **)(*(long *)pGVar11 + 0x1f8))(), cVar3 != '\0')) &&
         (this != (GridItemZombossRobotBall *)pGVar11)) {
        pcVar12 = *(code **)(*(long *)pGVar11 + 0x120);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_98,local_94,aRStack_68,0x200000,0,aPStack_a0,0);
        (*pcVar12)(pGVar11,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
    }
    else {
      Plant::GetType();
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      bVar2 = std::operator==((string *)(lVar10 + 8),"iceburg");
      if ((bVar2) && (iVar1 == 0)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        doBreaking(this);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      }
      pcVar12 = *(code **)(*(long *)pPVar9 + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aRStack_68,0x200000,0,aPStack_a0,0)
      ;
      (*pcVar12)(pPVar9,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombossRobotBall::onBreakFireBallOnScreen() */

void __thiscall GridItemZombossRobotBall::onBreakFireBallOnScreen(GridItemZombossRobotBall *this)

{
  GridItemZombossRobotBallProps *pGVar1;
  
  if ((this[0x1a5] == (GridItemZombossRobotBall)0x0) &&
     (pGVar1 = GridItem::GetProps<GridItemZombossRobotBallProps>(), *(int *)(pGVar1 + 0xd0) == 0)) {
    doBreaking(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::onBreakIceBallInGridRect(Sexy::TRect<int>) */

void __thiscall
GridItemZombossRobotBall::onBreakIceBallInGridRect
          (GridItemZombossRobotBall *this,BoardTransforms *param_2)

{
  char cVar1;
  float *pfVar2;
  GridItemZombossRobotBallProps *pGVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (GridItemZombossRobotBall)0x0) {
    BoardTransforms::GridRectToBoardSpaceRect(param_2,(TRect *)param_2);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    cVar1 = Sexy::TRect<int>::Contains(aTStack_18,(int)*pfVar2,(int)pfVar2[1]);
    if ((cVar1 != '\0') &&
       (pGVar3 = GridItem::GetProps<GridItemZombossRobotBallProps>(), *(int *)(pGVar3 + 0xd0) == 1))
    {
      doBreaking(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::onAnimStopped(std::string const&) */

void __thiscall
GridItemZombossRobotBall::onAnimStopped(GridItemZombossRobotBall *this,string *param_1)

{
  char cVar1;
  GridItemZombossRobotBallProps *pGVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemZombossRobotBallProps>();
  FUN_05475d88(asStack_10,pGVar2 + 0xd8);
  cVar1 = std::operator==(param_1,asStack_10);
  if (cVar1 == '\0') {
    std::string::~string(asStack_10);
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::onGridItemInitialize() */

void __thiscall GridItemZombossRobotBall::onGridItemInitialize(GridItemZombossRobotBall *this)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  RtObject *this_00;
  GridItemZombossRobotBallProps *pGVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04f12ed8(this + 0x195);
  FUN_04f12f24(this + 0x24);
  GridItemAnimation::GetAnimRig();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  (**(code **)(*plVar2 + 0x80))(0x3f19999a);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  GridItem::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x30));
  pGVar4 = Sexy::RtObject::Cast<GridItemZombossRobotBallProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  GridItemAnimation::GetAnimRig();
  pPVar5 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,pGVar4 + 0xe8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  this[0x1a6] = (GridItemZombossRobotBall)0x1;
  fVar6 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1a8) = fVar6 + 0.45;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::onUpdate() */

void __thiscall GridItemZombossRobotBall::onUpdate(GridItemZombossRobotBall *this)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (this[0x1a5] == (GridItemZombossRobotBall)0x0) {
    if (this[0x1a6] != (GridItemZombossRobotBall)0x0) {
      puVar1 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_18 = *puVar1;
      local_10 = *(undefined4 *)(puVar1 + 1);
      fVar2 = (float)PVZ_Dt();
      fVar2 = (float)local_18 - fVar2 * 60.0;
      local_18 = CONCAT44(local_18._4_4_,fVar2);
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        local_10 = Board::calculateRoofOffsetZ(fVar2);
      }
      (**(code **)(*(long *)this + 0x78))(this,&local_18);
      if ((float)local_18 < 230.0) {
        doBreaking(this);
        goto LAB_04f25304;
      }
    }
    crushEntities(this);
    checkAndCreateBurntEffect(this);
  }
LAB_04f25304:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::registerForEvents() */

void __thiscall GridItemZombossRobotBall::registerForEvents(GridItemZombossRobotBall *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBreakFireBallOnScreen);
  Sexy::Delegate0::Delegate0<GridItemZombossRobotBall,void(GridItemZombossRobotBall::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BreakFireBallOnScreen,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBreakIceBallInGridRect);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::TRect<int>&,Sexy::CBMemberTranslatorX<GridItemZombossRobotBall,void(GridItemZombossRobotBall::*)(Sexy::TRect<int>)>>
            ((MessageRouter *)puVar1,Message::BreakIceBallInGridRect,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombossRobotBall::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemZombossRobotBall::TakeDamage(GridItemZombossRobotBall *this,DamageInfo *param_1)

{
  bool bVar1;
  GridItemZombossRobotBallProps *pGVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  RtObject *this_02;
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemZombossRobotBallProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  if (*(int *)(pGVar2 + 0xd0) == 0) {
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)avStack_80,
               (vector *)(pGVar2 + 0xf0));
  }
  else if (*(int *)(pGVar2 + 0xd0) == 1) {
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)avStack_80,
               (vector *)(pGVar2 + 0x108));
  }
  DamageInfo::DamageInfo(aDStack_68,param_1);
  std::string::string(asStack_98,"");
  nop();
  this_02 = *(RtObject **)param_1;
  if (this_02 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Plant>(this_02);
    if (bVar1) {
      Sexy::RtObject::Cast<Plant>(this_02);
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      thunk_FUN_05475e00(asStack_98,lVar3 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>(this_02);
      if (bVar1) {
        this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        thunk_FUN_05475e00(asStack_98,lVar3 + 8);
      }
      else {
        bVar1 = Sexy::RtObject::IsA<Creature>(this_02);
        if (bVar1) {
          Sexy::RtObject::Cast<Creature>(this_02);
          TwinsAssistPerson::GetPopAnimRig();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
          thunk_FUN_05475e00(asStack_98,lVar3 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        }
      }
    }
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_80);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_80);
    local_90 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,asStack_98);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (!bVar1) goto LAB_04f255b0;
  }
  local_60 = 0;
LAB_04f255b0:
  GridItem::TakeDamage((GridItem *)this,aDStack_68);
  std::string::~string(asStack_98);
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

