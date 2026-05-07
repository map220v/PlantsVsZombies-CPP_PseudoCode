// Class: GridItemBronze


/* GridItemBronze::ShouldDrawShadow() const */

GridItemBronze __thiscall GridItemBronze::ShouldDrawShadow(GridItemBronze *this)

{
  return this[0x1ac];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::TakeFatalDamage(DamageInfo const&) */

void __thiscall GridItemBronze::TakeFatalDamage(GridItemBronze *this,DamageInfo *param_1)

{
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    local_60 = GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    local_60 = (**(code **)(*(long *)this + 0x1d8))();
  }
  operator|=(auStack_58,2);
  (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBronze::CollidesWithType(CollisionTypeFlags) const */

undefined1 GridItemBronze::CollidesWithType(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ad);
}


/* GridItemBronze::CalcRenderOrder() const */

void __thiscall GridItemBronze::CalcRenderOrder(GridItemBronze *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03e0a10c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemBronze::CalcRenderOrder() const */

void __thiscall GridItemBronze::CalcRenderOrder(GridItemBronze *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::StaticClassInit() */

void GridItemBronze::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBronze");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0b30c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBronze::StaticGetClass() */

long * GridItemBronze::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBronze::GetClass() const */

long * GridItemBronze::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBronze::setState(BronzeState) */

void __thiscall GridItemBronze::setState(GridItemBronze *this,int param_2)

{
  if (*(int *)(this + 0x1a4) != param_2) {
    *(int *)(this + 0x1a4) = param_2;
  }
  return;
}


/* GridItemBronze::onArmrackInEnd() */

void __thiscall GridItemBronze::onArmrackInEnd(GridItemBronze *this)

{
  this[0x1ad] = (GridItemBronze)0x1;
  RealObject::JoinTeam((RealObject *)this,2);
  setState(this,1);
  return;
}


/* GridItemBronze::CanSpawnBronze() const */

bool __thiscall GridItemBronze::CanSpawnBronze(GridItemBronze *this)

{
  return *(int *)(this + 0x1a4) == 1;
}


/* GridItemBronze::GridItemBronze() */

void __thiscall GridItemBronze::GridItemBronze(GridItemBronze *this)

{
  undefined4 uVar1;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06782630;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBronze_067828c8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 1;
  this[0x1ac] = (GridItemBronze)0x0;
  *(undefined4 *)(this + 0x1a4) = 0xffffffff;
  this[0x1ad] = (GridItemBronze)0x0;
  *(undefined4 *)(this + 0x194) = uVar1;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 4;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* GridItemBronze::StaticNew() */

GridItemBronze * GridItemBronze::StaticNew(void)

{
  GridItemBronze *this;
  
  this = ::operator_new(0x1c8);
  GridItemBronze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::onDraw(Sexy::Graphics*) */

void __thiscall GridItemBronze::onDraw(GridItemBronze *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  PopAnimRig *pPVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_50 [8];
  int local_48;
  int local_44;
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a4) == 1) {
    fVar9 = (float)PVZ_T();
    if (0.25 <= fVar9 - *(float *)(this + 0x1a8)) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
      if (bVar1) {
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
        Sexy::Color::Color((Color *)aIStack_40,1);
        PopAnimRig::SetPAMColor(pPVar6,(Color *)aIStack_40);
      }
    }
    else {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_48,param_1);
      fVar9 = (float)PVZ_T();
      fVar9 = (float)ClampFloat((fVar9 - *(float *)(this + 0x1a8)) * 4.0,0.0,1.0);
      Sexy::Graphics::SetDrawMode(param_1,1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      iVar7 = (int)(((1.0 - fVar9) * 0.3 + 0.7) * 255.0);
      Sexy::Insets::Insets(aIStack_40,iVar7,iVar7,iVar7,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_40);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
      if (bVar1) {
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
        Sexy::Insets::Insets(aIStack_40,iVar7,iVar7,iVar7,0xff);
        PopAnimRig::SetPAMColor(pPVar6,(Color *)aIStack_40);
      }
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_48);
    }
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
    GridItem::GetGridLocation();
    BoardTransforms::GridToBoardSpace((Point *)aIStack_40);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar9 = pfVar5[1];
    local_48 = (int)*pfVar5;
    local_44 = (int)fVar9;
    iVar7 = FUN_03e0a230(local_48 + DAT_06adc8c8);
    iVar2 = FUN_03e0a230((int)fVar9 + DAT_06adc8cc + -10);
    Sexy::Graphics::Translate(param_1,iVar7,iVar2);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    PopAnimRig::SetRenderTransform(pPVar6,aSStack_30);
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    PopAnimRig::Draw(pPVar6,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
    if (*(int *)(this + 0x1a4) == 1) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_48,param_1);
      lVar8 = *(long *)this;
      if (*(code **)(lVar8 + 0x1d8) == GridItem::GetHitpoints) {
        fVar9 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar9 = (float)(**(code **)(lVar8 + 0x1d8))();
        lVar8 = *(long *)this;
      }
      if (*(code **)(lVar8 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
      }
      else {
        fVar10 = (float)(**(code **)(lVar8 + 0x1e0))();
      }
      iVar7 = FUN_03e0a230(0x3c);
      iVar2 = FUN_03e0a230(10);
      iVar3 = FUN_03e0a230(0xffffffe2);
      iVar4 = FUN_03e0a230(0xffffff9c);
      Sexy::Graphics::Translate(param_1,iVar3,iVar4);
      Sexy::Color::Color((Color *)aIStack_40,0);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_40);
      fVar11 = (float)FUN_03e0a244(*pfVar5);
      fVar12 = (float)FUN_03e0a244(pfVar5[1]);
      Sexy::Graphics::FillRect(param_1,(int)fVar11,(int)fVar12,iVar7,iVar2);
      Sexy::Color::Color((Color *)aIStack_40,0xff0000);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_40);
      fVar11 = (float)FUN_03e0a244(*pfVar5 + 2.0);
      fVar12 = (float)FUN_03e0a244(pfVar5[1] + 2.0);
      iVar3 = FUN_03e0a230(4);
      Sexy::Graphics::FillRect
                (param_1,(int)fVar11,(int)fVar12,(int)((float)(iVar7 - iVar3) * (fVar9 / fVar10)),
                 iVar2 - iVar3);
      Sexy::Color::Color((Color *)aIStack_40,-1);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_40);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBronze::onTakeDamage(DamageInfo const&) */

void GridItemBronze::onTakeDamage(DamageInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::playBrokenAnimation(int) */

void __thiscall GridItemBronze::playBrokenAnimation(GridItemBronze *this,int param_1)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("cracking%d",asStack_58);
  *(int *)(this + 0x1bc) = param_1;
  if (param_1 < *(int *)(this + 0x1c0)) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,(DummyInit *)aDStack_38);
  }
  else {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,spawnZombie);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemBronze,void(GridItemBronze::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBronze::~GridItemBronze() */

void __thiscall GridItemBronze::~GridItemBronze(GridItemBronze *this)

{
  LevelModuleManager *this_00;
  BronzeModule *this_01;
  
  *(undefined ***)this = &PTR_GetClass_06782630;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBronze_067828c8;
  this_00 = (LevelModuleManager *)FUN_03e0a140(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  if ((this_00 != (LevelModuleManager *)0x0) &&
     (this_01 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_00),
     this_01 != (BronzeModule *)0x0)) {
    BronzeModule::decreaseBronzeStumpCount(this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemBronze::~GridItemBronze() */

void __thiscall GridItemBronze::~GridItemBronze(GridItemBronze *this)

{
  ~GridItemBronze(this + -0x10);
  return;
}


/* GridItemBronze::~GridItemBronze() */

void __thiscall GridItemBronze::~GridItemBronze(GridItemBronze *this)

{
  ~GridItemBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBronze::~GridItemBronze() */

void __thiscall GridItemBronze::~GridItemBronze(GridItemBronze *this)

{
  ~GridItemBronze(this + -0x10);
  return;
}


/* GridItemBronze::onGridItemInitialize() */

void __thiscall GridItemBronze::onGridItemInitialize(GridItemBronze *this)

{
  LevelModuleManager *this_00;
  BronzeModule *this_01;
  float fVar1;
  undefined4 uVar2;
  
  this[0x1ac] = (GridItemBronze)0x0;
  this[0x1ad] = (GridItemBronze)0x0;
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x1a4) = 0xffffffff;
  *(float *)(this + 0x1a8) = fVar1 + 0.25;
  setState(this,0);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x194) = uVar2;
  this_00 = (LevelModuleManager *)FUN_03e0a140(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_00);
  if (this_01 != (BronzeModule *)0x0) {
    BronzeModule::increaseBronzeStumpCount(this_01);
  }
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1c0) = 4;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::spawnTransitionAnimation() */

void __thiscall GridItemBronze::spawnTransitionAnimation(GridItemBronze *this)

{
  int iVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  int local_50;
  int local_4c;
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [16];
  CachedResourcePtr<Sexy::PopAnim> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06adc7f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06adc7f8), iVar1 != 0)) {
    Sexy::Point::Point((Point *)&DAT_06adc848,-0x8c,-0xb6);
    __cxa_guard_release(&DAT_06adc7f8);
  }
  CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr(aCStack_30,"POPANIM_EFFECTS_MOWER_SPAWN");
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::Point::Point((Point *)&local_50,(int)*pfVar2,(int)pfVar2[1]);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_48,"POPANIM_EFFECTS_MOWER_SPAWN");
  GetPAMByName(asStack_48);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_40,(float)(local_50 + DAT_06adc848),(float)(local_4c + DAT_06adc84c),
             0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_40,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03e0a0f4(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_40,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_40,0);
  std::string::~string((string *)aRStack_40);
  nop();
  (**(code **)(*(long *)this_00 + 0x80))(0x3fb33333,this_00);
  std::string::string((string *)aRStack_40,"Play_Dirt_Rise");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_40,0.0);
  std::string::~string((string *)aRStack_40);
  nop();
  CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::initializeAnimRig() */

void __thiscall GridItemBronze::initializeAnimRig(GridItemBronze *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06adc900);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0))
  ;
  std::string::string((string *)aRStack_40,"cracking");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar3,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBronze::spawnBronze() */

void __thiscall GridItemBronze::spawnBronze(GridItemBronze *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x1a0) == 0) {
    iVar1 = Sexy::Rand(3);
    *(int *)(this + 0x1a0) = iVar1 + 1;
  }
  initializeAnimRig(this);
  onArmrackInEnd(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::onUpdate() */

void __thiscall GridItemBronze::onUpdate(GridItemBronze *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *this_00;
  undefined8 *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a4) == 0) {
    if (this[0x1ac] == (GridItemBronze)0x0) {
      spawnBronze(this);
      this[0x1ac] = (GridItemBronze)0x1;
    }
  }
  else if ((*(int *)(this + 0x1a4) == 1) &&
          (iVar3 = FUN_03e0a144(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104)), iVar3 == 5))
  {
    fVar6 = *(float *)(this + 0x194);
    iVar3 = *(int *)(this + 0x19c);
    if ((((int)fVar6 == iVar3) || ((int)fVar6 == 10)) && (0.0 < fVar6)) {
      fVar6 = (float)PVZ_T();
      if (fVar6 - *(float *)(this + 0x1b8) <= 5.0) {
        fVar6 = *(float *)(this + 0x194);
        iVar3 = *(int *)(this + 0x19c);
      }
      else {
        uVar8 = PVZ_T();
        *(undefined4 *)(this + 0x1b8) = uVar8;
        FUN_05478178(awStack_28,L"[ADVICE_BRONZE_GRID_TIME]",&local_18);
        nop();
        FUN_05478178(awStack_20,&DAT_056f11a8,&local_18);
        nop();
        Sexy::StrFormat(L"%d",&local_18,(ulong)(uint)(int)*(float *)(this + 0x194));
        FUN_054766c8(awStack_20,&local_18);
        FUN_05476c50(&local_18);
        TodReplaceString(awStack_28,L"{BRONZE_TIME_NUMBER}",awStack_20);
        FUN_054766c8(awStack_28,&local_18);
        FUN_05476c50(&local_18);
        Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),awStack_28,0x11,0);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
        iVar3 = *(int *)(this + 0x19c);
        fVar6 = *(float *)(this + 0x194);
      }
    }
    iVar1 = 0;
    if (*(int *)(this + 0x1c0) != 0) {
      iVar1 = iVar3 / *(int *)(this + 0x1c0);
    }
    iVar3 = (int)(((float)iVar3 - fVar6) / (float)iVar1);
    if (*(int *)(this + 0x1c4) < iVar3) {
      *(int *)(this + 0x1c4) = iVar3;
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        fVar6 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar6 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
      if (0.0 < fVar6) {
        playBrokenAnimation(this,iVar3);
      }
    }
    pcVar5 = *(code **)(*(long *)this + 0x1f0);
    GridItem::GetGridLocation();
    (*pcVar5)(this,&local_18,1);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar4;
    local_10 = *(undefined4 *)(puVar4 + 1);
    fVar6 = (float)Sexy::Rand((float)(*(int *)(this + 0x1bc) + 1) * *(float *)(this + 0x198));
    local_18._0_4_ = fVar6 + (float)local_18;
    fVar6 = (float)Sexy::Rand((float)(*(int *)(this + 0x1bc) + 1) * *(float *)(this + 0x198));
    local_18 = CONCAT44(fVar6 + local_18._4_4_,(float)local_18);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    fVar6 = (float)PVZ_Dt();
    *(float *)(this + 0x194) = *(float *)(this + 0x194) - fVar6;
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
  if (bVar2) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar6,fVar7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemBronze::onDrawShadow(GridItemBronze *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x1ac] != (GridItemBronze)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    GridItem::GetGridLocation();
    pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06adc850);
    fVar4 = (float)FUN_03e0a244((float)(int)fVar4 - 40.0);
    fVar5 = (float)FUN_03e0a244((float)(int)fVar5 - 24.0);
    Sexy::Graphics::DrawImage(param_1,pIVar3,(int)fVar4,(int)fVar5);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::MowDown() */

void __thiscall GridItemBronze::MowDown(GridItemBronze *this)

{
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  operator|=(auStack_58,0x4000);
  (**(code **)(*(long *)this + 0x120))(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::getZombieBronzeType() const */

void GridItemBronze::getZombieBronzeType(void)

{
  int iVar1;
  long in_x0;
  string *psVar2;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  iVar1 = *(int *)(in_x0 + 0x1a0);
  if (iVar1 == 3) {
    std::string::append(asStack_10,"kongfu_magic_bronze",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_10,"kongfu_agile_bronze",(size_t)__n);
  }
  else if (iVar1 == 1) {
    std::string::append(asStack_10,"kongfu_strong_bronze",(size_t)__n);
  }
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::initBronzeType(GridItemBronze::BronzeType) */

void __thiscall GridItemBronze::initBronzeType(GridItemBronze *this,undefined4 param_2)

{
  ZombieType *this_00;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1a0) = param_2;
  local_8 = ___stack_chk_guard;
  getZombieBronzeType();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar1 = ZombieType::GetProps(this_00);
  FUN_03e0a0fc(*(undefined4 *)(lVar1 + 0x18),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e0a104(this + 0x128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::spawnZombie(std::string const&) */

void GridItemBronze::spawnZombie(string *param_1)

{
  int iVar1;
  ZombieType *this;
  SexyVector3 *this_00;
  LevelModuleManager *this_01;
  BronzeModule *this_02;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03e0a144(*(undefined4 *)(lVar2 + 0x104));
  if (iVar1 == 5) {
    this_01 = (LevelModuleManager *)FUN_03e0a140(*(undefined8 *)(lVar2 + 0xad8));
    this_02 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_01);
    if (this_02 != (BronzeModule *)0x0) {
      BronzeModule::increaseBronzeStumpCount(this_02);
    }
  }
  getZombieBronzeType();
  this = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(this);
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  this_00 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_10,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_1);
  BoardEntity::PlaceOnBoard(this_00);
  if (*(code **)(*(long *)param_1 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)param_1 + 0x1e0))();
  }
  Zombie::SetHitpoints((Zombie *)this_00,fVar5);
  spawnTransitionAnimation((GridItemBronze *)param_1);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBronze::onDestroy() */

void __thiscall GridItemBronze::onDestroy(GridItemBronze *this)

{
  bool bVar1;
  LevelModuleManager *this_00;
  BronzeModule *this_01;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
  if (bVar1) {
    this_00 = (LevelModuleManager *)
              FUN_03e0a140(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_01 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_00);
    if (this_01 != (BronzeModule *)0x0) {
      BronzeModule::onBronzeStumpDestroy(this_01,this);
    }
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    (**(code **)(*plVar2 + 0x48))();
    std::string::string(asStack_10,"Play_Zomb_Kongfu_Armrack_Death");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  GridItem::onDestroy((GridItem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

