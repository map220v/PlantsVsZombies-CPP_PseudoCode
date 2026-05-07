// Class: GridItemLava


/* GridItemLava::SetLifeTime(float) */

void __thiscall GridItemLava::SetLifeTime(GridItemLava *this,float param_1)

{
  *(float *)(this + 0x1ac) = param_1;
  return;
}


/* GridItemLava::GetLifeTime() */

undefined4 __thiscall GridItemLava::GetLifeTime(GridItemLava *this)

{
  return *(undefined4 *)(this + 0x1ac);
}


/* GridItemLava::onCauseDamage(Zombie*) */

void GridItemLava::onCauseDamage(Zombie *param_1)

{
  return;
}


/* GridItemLava::onSplatFaded(std::string const&) */

void GridItemLava::onSplatFaded(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,4);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* GridItemLava::CalcRenderOrder() const */

void __thiscall GridItemLava::CalcRenderOrder(GridItemLava *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemLava::CalcRenderOrder() const */

void __thiscall GridItemLava::CalcRenderOrder(GridItemLava *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::StaticClassInit() */

void GridItemLava::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLava");
    (*pcVar2)(plVar1,asStack_10,FUN_04127b88,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLava::StaticGetClass() */

long * GridItemLava::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLava::GetClass() const */

long * GridItemLava::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLava::canSpawnTinyLava(GridItemLava::TinyLavaDirection) */

bool __thiscall GridItemLava::canSpawnTinyLava(GridItemLava *this,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_04121294(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04121298(*(undefined4 *)(this + 0x134));
  bVar1 = false;
  switch(param_2) {
  case 0:
    return 0 < iVar2;
  case 1:
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    return iVar2 < iVar3 + -1;
  case 2:
    return 0 < iVar3;
  case 3:
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    bVar1 = iVar3 < iVar2 + -1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::onAnimStopped(std::string const&) */

void __thiscall GridItemLava::onAnimStopped(GridItemLava *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  Board *this_01;
  float local_18;
  float local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04121294(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04121298(*(undefined4 *)(this + 0x134));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar2,(float)iVar3);
  bVar1 = std::operator==(param_1,"split_left");
  if (bVar1) {
    uVar4 = *(undefined8 *)(this + 0x1c8);
    uVar7 = 0;
    local_18 = local_18 - 1.0;
  }
  else {
    bVar1 = std::operator==(param_1,"split_right");
    if (bVar1) {
      uVar4 = *(undefined8 *)(this + 0x1c8);
      uVar7 = 1;
      local_18 = local_18 + 1.0;
    }
    else {
      bVar1 = std::operator==(param_1,"split_up");
      if (bVar1) {
        uVar4 = *(undefined8 *)(this + 0x1c8);
        uVar7 = 2;
        local_14 = local_14 - 1.0;
      }
      else {
        bVar1 = std::operator==(param_1,"split_down");
        if (!bVar1) goto LAB_04122d00;
        uVar4 = *(undefined8 *)(this + 0x1c8);
        uVar7 = 3;
        local_14 = local_14 + 1.0;
      }
    }
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(uVar4,uVar7);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar5 + 0x48))();
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"tiny_lava");
  lVar6 = Board::AddGridItem(this_01,asStack_10,(int)local_18,(int)local_14,1);
  std::string::~string(asStack_10);
  nop();
  FUN_04121278(lVar6 + 0x24,1);
LAB_04122d00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::onGridItemInitialize() */

void __thiscall GridItemLava::onGridItemInitialize(GridItemLava *this)

{
  long lVar1;
  GridItemLavaProps *pGVar2;
  ComponentWarmingRadius *this_00;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemLavaProps>();
  GameObject::Create<ComponentWarmingRadius>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(pGVar2 + 0xd8));
  uVar3 = *(undefined4 *)(pGVar2 + 0xd4);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pGVar2 + 0xd0);
  *(undefined4 *)(this + 0x1b0) = uVar3;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2c0))(this,1);
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a8) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::setState(GridItemLavaState) */

void __thiscall GridItemLava::setState(GridItemLava *this,int param_2)

{
  char *__s;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"spawn");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onSplatFinished";
  }
  else {
    if (param_2 != 3) goto LAB_04125a9c;
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onSplatFaded";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_04125a9c:
  *(int *)(this + 0x1b4) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::spawnTinyLava(GridItemLava::TinyLavaDirection) */

void __thiscall GridItemLava::spawnTinyLava(GridItemLava *this,undefined4 param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  PopAnimRig *pPVar5;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_78);
  switch(param_2) {
  case 0:
    std::string::append(asStack_78,"split_left",param_3);
    break;
  case 1:
    std::string::append(asStack_78,"split_right",param_3);
    break;
  case 2:
    std::string::append(asStack_78,"split_up",param_3);
    break;
  case 3:
    std::string::append(asStack_78,"split_down",param_3);
  }
  cVar1 = FUN_0547419c(asStack_78);
  if (cVar1 == '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_68,"POPANIM_EFFECTS_LAVAGUAVA_TINYLAVA");
    GetPAMByName(asStack_68);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::~string(asStack_68);
    nop();
    iVar2 = FUN_04121294(*(undefined4 *)(this + 0x130));
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
    iVar3 = FUN_04121298(*(undefined4 *)(this + 0x134));
    iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)iVar2,(float)iVar3,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    FUN_0412126c(this_00 + 0x1c,0x61e67);
    pPVar5 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_60,"onAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_68,
               aRStack_60);
    PopAnimRig::PlayAndStop(pPVar5,asStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
              FUN_0412130c(*(undefined8 *)(this + 0x1c8),param_2);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  std::string::~string(asStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::onSplatFinished(std::string const&) */

void GridItemLava::onSplatFinished(string *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (param_1[0x1c0] != (string)0x0) {
    do {
      cVar1 = canSpawnTinyLava((GridItemLava *)param_1,iVar3);
      if (cVar1 != '\0') {
        spawnTinyLava((GridItemLava *)param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
  }
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::causeDamage() */

void __thiscall GridItemLava::causeDamage(GridItemLava *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetProps<GridItemLavaProps>();
  fVar10 = *(float *)(this + 0x1b0);
  fVar9 = (float)PVZ_Dt();
  uVar5 = operator|(0x400,0x1000);
  uVar5 = operator|(uVar5,0x10000);
  Sexy::Point::Point((Point *)local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  iVar8 = 0;
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * fVar10),local_80,local_7c,aDStack_68,uVar5,this,
             (Point *)local_90);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar6 = FUN_04121294(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04121298(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar6 & 0xffffffff),iVar3,1,1,iVar8);
  uVar4 = FUN_04121298(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesTouchingRectangle((FastCurve *)&local_80,2,(Point *)local_90,uVar4,uVar4)
  ;
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_80);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if (this_00 != (Zombie *)0x0) {
      uVar4 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar4);
      if (((cVar2 == '\0') && (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) &&
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
         cVar2 != '\0')) {
        if (*(code **)(*(long *)this + 0x2d0) != onCauseDamage) {
          (**(code **)(*(long *)this + 0x2d0))(this,this_00);
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::~GridItemLava() */

void __thiscall GridItemLava::~GridItemLava(GridItemLava *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067e9aa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLava_067e9d88;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemLava::~GridItemLava() */

void __thiscall GridItemLava::~GridItemLava(GridItemLava *this)

{
  ~GridItemLava(this + -0x10);
  return;
}


/* GridItemLava::~GridItemLava() */

void __thiscall GridItemLava::~GridItemLava(GridItemLava *this)

{
  ~GridItemLava(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemLava::~GridItemLava() */

void __thiscall GridItemLava::~GridItemLava(GridItemLava *this)

{
  ~GridItemLava(this + -0x10);
  return;
}


/* GridItemLava::OnWashedOut() */

void __thiscall GridItemLava::OnWashedOut(GridItemLava *this)

{
  char *pcVar1;
  
  if (*(int *)(this + 0x1b4) != 3) {
    (**(code **)(*(long *)this + 0x2c0))(this,3);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Plant_LavaGuava_Attack_Stop");
    return;
  }
  return;
}


/* GridItemLava::GridItemLava() */

void __thiscall GridItemLava::GridItemLava(GridItemLava *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067e9aa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLava_067e9d88;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0x3f000000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  this[0x1c0] = (GridItemLava)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  resize((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
         (this + 0x1c8),4);
  return;
}


/* GridItemLava::StaticNew() */

GridItemLava * GridItemLava::StaticNew(void)

{
  GridItemLava *this;
  
  this = ::operator_new(0x1e0);
  GridItemLava(this);
  return this;
}


/* GridItemLava::onUpdate() */

void __thiscall GridItemLava::onUpdate(GridItemLava *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  causeDamage(this);
  if ((*(int *)(this + 0x1b4) == 2) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1ac) < fVar1 - *(float *)(this + 0x1a8))) {
    (**(code **)(*(long *)this + 0x2c0))(this,3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLava::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemLava::GatherPlantingRestrictions(GridItemLava *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 10;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

