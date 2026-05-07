// Class: BowlingJackfruit


/* BowlingJackfruit::~BowlingJackfruit() */

void __thiscall BowlingJackfruit::~BowlingJackfruit(BowlingJackfruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069d3e10;
  *(undefined ***)(this + 0x10) = &PTR__BowlingJackfruit_069d40a8;
  GridItemJackFruit::~GridItemJackFruit((GridItemJackFruit *)this);
  return;
}


/* non-virtual thunk to BowlingJackfruit::~BowlingJackfruit() */

void __thiscall BowlingJackfruit::~BowlingJackfruit(BowlingJackfruit *this)

{
  ~BowlingJackfruit(this + -0x10);
  return;
}


/* BowlingJackfruit::~BowlingJackfruit() */

void __thiscall BowlingJackfruit::~BowlingJackfruit(BowlingJackfruit *this)

{
  ~BowlingJackfruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingJackfruit::~BowlingJackfruit() */

void __thiscall BowlingJackfruit::~BowlingJackfruit(BowlingJackfruit *this)

{
  ~BowlingJackfruit(this + -0x10);
  return;
}


/* BowlingJackfruit::BowlingJackfruit() */

void __thiscall BowlingJackfruit::BowlingJackfruit(BowlingJackfruit *this)

{
  GridItemJackFruit::GridItemJackFruit((GridItemJackFruit *)this);
  *(undefined ***)this = &PTR_GetClass_069d3e10;
  *(undefined ***)(this + 0x10) = &PTR__BowlingJackfruit_069d40a8;
  return;
}


/* BowlingJackfruit::StaticNew() */

BowlingJackfruit * BowlingJackfruit::StaticNew(void)

{
  BowlingJackfruit *this;
  
  this = ::operator_new(0x1a0);
  BowlingJackfruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruit::StaticClassInit() */

void BowlingJackfruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingJackfruit");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0b97c,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingJackfruit::StaticGetClass() */

long * BowlingJackfruit::StaticGetClass(void)

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
  uVar2 = GridItemJackFruit::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingJackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingJackfruit::GetClass() const */

long * BowlingJackfruit::GetClass(void)

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
  uVar2 = GridItemJackFruit::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingJackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingJackfruit::onGridItemInitialize() */

void __thiscall BowlingJackfruit::onGridItemInitialize(BowlingJackfruit *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  undefined4 uVar1;
  GridItemJackFruitPropertySheet *pGVar2;
  float *pfVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  StandaloneEffect *this_01;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_30;
  float fStack_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  pGVar2 = GridItem::GetProps<GridItemJackFruitPropertySheet>();
  FUN_049a88b0(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_049a88b8(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&fStack_30,0.0,-30.0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar9 = *pfVar3;
  fVar8 = pfVar3[1];
  fVar7 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar7 = (float)Board::calculateRoofOffsetZ((float)(int)(fStack_30 + fVar9));
    fVar7 = (float)(int)fVar7;
  }
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x198);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_28,"POPANIM_EFFECTS_JACKFRUIT_HIT");
  GetPAMByName(asStack_28);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar4,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_20,(float)(int)(fStack_30 + fVar9),(float)(int)(fStack_2c + fVar8),
             fVar7);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_20,-1);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_049a88a8(lVar6 + 0x1c,uVar1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"R1");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"R2");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::PlayAnimationSequence(pEVar4,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

