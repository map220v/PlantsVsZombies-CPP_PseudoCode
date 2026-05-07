// Class: GridItemJackFruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruit::TakeDamage(DamageInfo const&) */

void __thiscall GridItemJackFruit::TakeDamage(GridItemJackFruit *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x0;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_70 [8];
  DamageInfo aDStack_68 [8];
  float fStack_60;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = AccessoryContent::IsUnlocked((AccessoryContent *)this);
  if ((cVar1 != '\0') || (cVar1 = (**(code **)(*(long *)this + 0x1f8))(this), cVar1 == '\0'))
  goto LAB_03df9574;
  if (*(RealObject **)param_1 != (RealObject *)0x0) {
    cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,*(RealObject **)param_1);
    if (cVar1 == '\0') goto LAB_03df9574;
    bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1);
    if (bVar2) {
      cVar1 = (**(code **)(*(long *)this + 0x200))(this);
      if (cVar1 == '\0') goto LAB_03df9574;
      nop();
      cVar1 = (**(code **)(*(long *)this + 0x210))(this,extraout_x0);
      if (cVar1 == '\0') goto LAB_03df9574;
    }
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = FUN_03df64e8(uVar6,*(undefined8 *)(param_1 + 0x40));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_03df64f4(uVar6,uVar5);
                    /* WARNING: Load size is inaccurate */
    GridItem::ApplyCondition(*(GridItem **)(puVar3 + 1),this,*puVar3);
    uVar5 = uVar5 + 1;
  }
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
  if (bVar2) {
    fVar8 = *(float *)(this + 0x128);
    fVar7 = 0.0;
  }
  else {
    fVar8 = *(float *)(param_1 + 8);
    fVar7 = *(float *)(this + 0x128) - fVar8;
  }
  *(float *)(this + 0x128) = fVar7;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  fStack_60 = fVar8;
  (**(code **)(*(long *)this + 0x278))(this,aDStack_68);
  if (*(float *)(this + 0x128) <= 0.0) {
    ToolPacketData::GetProps();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    if (bVar2) {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
LAB_03df9574:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruit::StaticClassInit() */

void GridItemJackFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemJackFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_049aa2d8,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemJackFruit::StaticGetClass() */

long * GridItemJackFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemJackFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJackFruit::GetClass() const */

long * GridItemJackFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemJackFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJackFruit::GridItemJackFruit() */

void __thiscall GridItemJackFruit::GridItemJackFruit(GridItemJackFruit *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06923e00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemJackFruit_06924098;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  return;
}


/* GridItemJackFruit::StaticNew() */

GridItemJackFruit * GridItemJackFruit::StaticNew(void)

{
  GridItemJackFruit *this;
  
  this = ::operator_new(0x1a0);
  GridItemJackFruit(this);
  return this;
}


/* GridItemJackFruit::~GridItemJackFruit() */

void __thiscall GridItemJackFruit::~GridItemJackFruit(GridItemJackFruit *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  *(undefined ***)this = &PTR_GetClass_06923e00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemJackFruit_06924098;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemJackFruit::~GridItemJackFruit() */

void __thiscall GridItemJackFruit::~GridItemJackFruit(GridItemJackFruit *this)

{
  ~GridItemJackFruit(this + -0x10);
  return;
}


/* GridItemJackFruit::~GridItemJackFruit() */

void __thiscall GridItemJackFruit::~GridItemJackFruit(GridItemJackFruit *this)

{
  ~GridItemJackFruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemJackFruit::~GridItemJackFruit() */

void __thiscall GridItemJackFruit::~GridItemJackFruit(GridItemJackFruit *this)

{
  ~GridItemJackFruit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruit::onDraw(Sexy::Graphics*) */

void GridItemJackFruit::onDraw(Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar16 *pwVar4;
  float *pfVar5;
  Graphics *in_x1;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long lVar7;
  float fVar8;
  float fVar9;
  LineBreakCategory aLStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar6 = aLStack_20;
    std::string::string(asStack_18,"HealthBars");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_18,pLVar6,in_x3,in_x4);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') {
      Sexy::Graphics::PushState(in_x1);
      iVar2 = FUN_049a88d4(0xffffffe2);
      iVar3 = FUN_049a88d4(10);
      Sexy::Graphics::Translate(in_x1,iVar2,iVar3);
      lVar7 = *(long *)param_1;
      if (*(code **)(lVar7 + 0x1d8) == GridItem::GetHitpoints) {
        fVar8 = (float)GridItem::GetHitpoints((GridItem *)param_1);
      }
      else {
        fVar8 = (float)(**(code **)(lVar7 + 0x1d8))();
        lVar7 = *(long *)param_1;
      }
      if (*(code **)(lVar7 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar9 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
      }
      else {
        fVar9 = (float)(**(code **)(lVar7 + 0x1e0))();
      }
      Sexy::StrFormat(L"%0.2f/%d",aLStack_20,(double)fVar8,(ulong)(uint)(int)fVar9);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      FUN_049a88e8(*pfVar5 + 2.0);
      FUN_049a88e8(pfVar5[1] - 10.0);
      if (PrimeText_Game::Typeface_CafeteriaBlack_16 != (PrimeText_PotentialTypeface *)0x0) {
        PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
      }
      Sexy::Color::Color((Color *)asStack_18,6);
      TodDrawString();
      FUN_05476c50(aLStack_20);
      Sexy::Graphics::PopState(in_x1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruit::onGridItemInitialize() */

void __thiscall GridItemJackFruit::onGridItemInitialize(GridItemJackFruit *this)

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
  float local_30;
  float local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,-30.0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar9 = *pfVar3;
  fVar8 = pfVar3[1];
  fVar7 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar7 = (float)Board::calculateRoofOffsetZ((float)(int)(local_30 + fVar9));
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
            ((Vec3 *)aRStack_20,(float)(int)(local_30 + fVar9),(float)(int)(local_2c + fVar8),fVar7)
  ;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJackFruit::onUpdate() */

void __thiscall GridItemJackFruit::onUpdate(GridItemJackFruit *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_68 [8];
  undefined4 uStack_60;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xa0))();
  if (cVar1 == '\0') {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x13c) < fVar2) goto LAB_03df9334;
LAB_03df9294:
    EntityConditionTracker<GridItem,GridItemConditions>::Update
              ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),(GridItem *)this
              );
    PVZ_Dt();
    _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x140));
    if (this[0x184] != (GridItemJackFruit)0x0) goto LAB_03df939c;
LAB_03df92b8:
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x180)) {
LAB_03df92c8:
      cVar1 = FUN_03df64cc(this[0x18c]);
      goto joined_r0x03df93f8;
    }
  }
  else {
    (**(code **)(*(long *)this + 0xa8))(this,0);
    RealObject::SetUseGroundClipRect((RealObject *)this,true);
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x13c)) goto LAB_03df9294;
LAB_03df9334:
    this[0x138] = (GridItemJackFruit)0x0;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x13c) = uVar3;
    std::string::string(asStack_68,"cureshield");
    GameObjectDictionary::Remove((string *)(this + 0x140));
    std::string::~string(asStack_68);
    nop();
    EntityConditionTracker<GridItem,GridItemConditions>::Update
              ((EntityConditionTracker<GridItem,GridItemConditions> *)(this + 0xa8),(GridItem *)this
              );
    PVZ_Dt();
    _JNIEnv::ExceptionOccurred((_JNIEnv *)(this + 0x140));
    if (this[0x184] == (GridItemJackFruit)0x0) goto LAB_03df92b8;
LAB_03df939c:
    DamageInfo::DamageInfo((DamageInfo *)asStack_68);
    uStack_60 = *(undefined4 *)(this + 0x188);
    (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x180)) goto LAB_03df92c8;
  }
  (**(code **)(*(long *)this + 0x250))(this);
  cVar1 = FUN_03df64cc(this[0x18c]);
joined_r0x03df93f8:
  if ((cVar1 != '\0') && (fVar4 = *(float *)(this + 400), fVar2 = (float)PVZ_T(), fVar4 < fVar2)) {
    (**(code **)(*(long *)this + 600))(0xbf800000,this,0);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

