// Class: PlantByttneriaMeteorHammer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::StaticClassInit() */

void PlantByttneriaMeteorHammer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantByttneriaMeteorHammer");
    (*pcVar2)(plVar1,asStack_10,FUN_03b2dc88,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::StaticGetClass() */

long * PlantByttneriaMeteorHammer::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantByttneriaMeteorHammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantByttneriaMeteorHammer::GetClass() const */

long * PlantByttneriaMeteorHammer::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantByttneriaMeteorHammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::playGroundCracksEffect() */

void __thiscall PlantByttneriaMeteorHammer::playGroundCracksEffect(PlantByttneriaMeteorHammer *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  SexyVector3 *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_BYTTNERIAMETEORHAMMER_GROUND_CRACKS");
  GetPAMByName(asStack_28);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  uVar3 = 0;
  uVar2 = 0xc1a00000;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,64.0,-20.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  (**(code **)(*(long *)this_00 + 0xb8))(0x3fa66666,0x3fb33333,this_00);
  uVar2 = Board::MakeGroundRenderOrder(*(int *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_03b2ba84(this_00 + 0x1c,uVar2);
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::playAShockWaveEffect() */

void __thiscall PlantByttneriaMeteorHammer::playAShockWaveEffect(PlantByttneriaMeteorHammer *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  SexyVector3 *this_01;
  undefined4 uVar2;
  undefined4 uVar3;
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_BYTTNERIAMETEORHAMMER_SHOCK_WAVE");
  GetPAMByName(asStack_28);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  uVar3 = 0;
  uVar2 = 0xc1a00000;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,64.0,-20.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  uVar2 = Board::MakeGroundRenderOrder(*(int *)(*(long *)(this + 0x10) + 0x110),0);
  FUN_03b2ba84(this_00 + 0x1c,uVar2);
  std::string::string((string *)&local_18,"animation2");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::addHitEffect() */

void PlantByttneriaMeteorHammer::addHitEffect(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  SexyVector3 *pSVar3;
  SexyVector3 *pSVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  float fVar6;
  float in_s1;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x50);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(in_x0 + 0x10));
    local_18 = Sexy::SexyVector3::operator-(pSVar3,pSVar4);
    fVar6 = (float)Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    fVar6 = atan2f(-in_s1,fVar6);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_28,"POPANIM_EFFECTS_BYTTNERIAMETEORHAMMER_CHARGE_HIT");
    GetPAMByName(asStack_28);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_28);
    nop();
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var2);
    uVar7 = 0xc2480000;
    uVar8 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,-50.0,0.0);
    local_18 = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)asStack_28);
    local_14 = uVar7;
    local_10 = uVar8;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::SetOrientation(this_00,fVar6);
    uVar7 = BoardConstants::NUMBER_OF_ROWS();
    uVar7 = Board::MakeRenderOrder(0x64960,uVar7,0);
    FUN_03b2ba84(this_00 + 0x1c,uVar7);
    std::string::string((string *)&local_18,"animation5");
    Effect_PopAnim::PlaySingleAnimation(this_00,(SexyVector3 *)&local_18,0);
    std::string::~string((string *)&local_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::PlantByttneriaMeteorHammer() */

void __thiscall
PlantByttneriaMeteorHammer::PlantByttneriaMeteorHammer(PlantByttneriaMeteorHammer *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672e9e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantByttneriaMeteorHammer::StaticNew() */

PlantByttneriaMeteorHammer * PlantByttneriaMeteorHammer::StaticNew(void)

{
  PlantByttneriaMeteorHammer *this;
  
  this = ::operator_new(0x58);
  PlantByttneriaMeteorHammer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::startCharging() */

void __thiscall PlantByttneriaMeteorHammer::startCharging(PlantByttneriaMeteorHammer *this)

{
  PlantAnimRig_ByttneriaMeteorHammer *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_ByttneriaMeteorHammer *)FUN_03b2d844(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_ByttneriaMeteorHammer::playCharging(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::~PlantByttneriaMeteorHammer() */

void __thiscall
PlantByttneriaMeteorHammer::~PlantByttneriaMeteorHammer(PlantByttneriaMeteorHammer *this)

{
  *(undefined ***)this = &PTR_GetClass_0672e9e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantByttneriaMeteorHammer::~PlantByttneriaMeteorHammer() */

void __thiscall
PlantByttneriaMeteorHammer::~PlantByttneriaMeteorHammer(PlantByttneriaMeteorHammer *this)

{
  ~PlantByttneriaMeteorHammer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::initValidTargetPoints() */

void __thiscall PlantByttneriaMeteorHammer::initValidTargetPoints(PlantByttneriaMeteorHammer *this)

{
  bool bVar1;
  TPoint *pTVar2;
  int local_40;
  int local_3c;
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point((Point *)&local_28,local_40 + 1,local_3c + -2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 1,local_3c + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 2,local_3c + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 1,local_3c);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 2,local_3c);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 3,local_3c);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 1,local_3c + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 2,local_3c + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  Sexy::Point::Point((Point *)&local_28,local_40 + 1,local_3c + 2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pTVar2 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::Point::Point(aPStack_38,pTVar2);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x38),aPStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::Initialize() */

void __thiscall PlantByttneriaMeteorHammer::Initialize(PlantByttneriaMeteorHammer *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_03b2d764(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_03b2bab4(*(undefined8 *)(this + 0x10));
  if (2 < iVar1) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 0x2c0);
    uVar3 = PVZ_EOT();
    this[0x30] = (PlantByttneriaMeteorHammer)0x0;
    *(undefined4 *)(this + 0x2c) = uVar3;
    initValidTargetPoints(this);
    return;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 700);
    uVar3 = PVZ_EOT();
    this[0x30] = (PlantByttneriaMeteorHammer)0x0;
    *(undefined4 *)(this + 0x2c) = uVar3;
    initValidTargetPoints(this);
    return;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 0x2b8);
  uVar3 = PVZ_EOT();
  this[0x30] = (PlantByttneriaMeteorHammer)0x0;
  *(undefined4 *)(this + 0x2c) = uVar3;
  initValidTargetPoints(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::isValidTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantByttneriaMeteorHammer::isValidTarget(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  RtObject *pRVar2;
  Zombie *this;
  GridItem *pGVar3;
  string *psVar4;
  code *pcVar5;
  float fVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this = Sexy::RtObject::Cast<Zombie>(pRVar2);
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pGVar3 = Sexy::RtObject::Cast<GridItem>(pRVar2);
    if (this == (Zombie *)0x0) {
      if (pGVar3 != (GridItem *)0x0) {
        cVar1 = (**(code **)(*(long *)pGVar3 + 0x200))();
      }
      goto LAB_03b2eda0;
    }
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if ((((cVar1 == '\0') && (cVar1 = Zombie::IsTargetable(this), cVar1 != '\0')) &&
        (cVar1 = Zombie::IsIgnoringAllDamage(this), cVar1 == '\0')) &&
       ((cVar1 = FUN_03b2cddc(*(undefined4 *)(this + 0xcc)), cVar1 == '\0' &&
        (cVar1 = Zombie::IsBerserk(this), cVar1 == '\0')))) {
      pcVar5 = *(code **)(*(long *)this + 0x3d0);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_20,"byttneriameteorhammer");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar1 = (*pcVar5)(this,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string(asStack_20);
      nop();
      if (cVar1 != '\0') {
        fVar6 = (float)FUN_03b2babc(*(undefined4 *)(this + 0x280));
        cVar1 = 1.0 <= fVar6;
        goto LAB_03b2eda0;
      }
    }
  }
  cVar1 = '\0';
LAB_03b2eda0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::getValidAttackRects(std::vector<Sexy::TRect<int>,
   std::allocator<Sexy::TRect<int> > >&) */

void __thiscall
PlantByttneriaMeteorHammer::getValidAttackRects(PlantByttneriaMeteorHammer *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  Point *extraout_x1;
  undefined1 auVar6 [16];
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  initValidTargetPoints(this);
  if ((this[0x30] == (PlantByttneriaMeteorHammer)0x0) &&
     (cVar3 = (**(code **)(*(long *)this + 0x180))(this), cVar3 == '\0')) {
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets((Insets *)&local_18);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar1 = local_20._4_4_;
    local_18 = (int)*pfVar5;
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_10 = 0x80;
    local_14 = iVar1 * iVar4 + 0xa0;
    local_c = BoardConstants::GRIDSQUARE_HEIGHT();
    std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
              ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_1,
               (TRect *)&local_18);
  }
  else {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2)
    {
      auVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      BoardTransforms::GridToBoardSpaceRect(auVar6._0_8_,auVar6._8_8_);
      std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_1,
                 (TRect *)&local_18);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    cVar3 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar3 != '\0') {
      BoardEntity::CalcGridPosition();
      BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_20,extraout_x1);
      std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_1,
                 (TRect *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall
PlantByttneriaMeteorHammer::findTargets(PlantByttneriaMeteorHammer *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  TRect<int> *this_00;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  getValidAttackRects(this,(vector *)avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntities(avStack_20,uVar3);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      local_70 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)*puVar4;
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_38);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        this_00 = (TRect<int> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(local_70);
        cVar2 = Sexy::TRect<int>::Contains(this_00,(int)*pfVar5,(int)pfVar5[1]);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
          cVar2 = isValidTarget(this,aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          if (cVar2 != '\0') {
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                       (BoardEntity **)&local_70);
          }
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::canFindTarget() */

void __thiscall PlantByttneriaMeteorHammer::canFindTarget(PlantByttneriaMeteorHammer *this)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findTargets(this,(vector *)&local_20);
  lVar1 = FUN_03b2bad0(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::takeAttack(ByttneriaMeteorHammerAttackType) */

void PlantByttneriaMeteorHammer::takeAttack
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               PlantByttneriaMeteorHammer *param_4,undefined4 param_5)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  ByttneriaMeteorHammerTossSubSystem *pBVar9;
  SexyVector3 *pSVar10;
  GridItem *pGVar11;
  char *pcVar12;
  long lVar13;
  float *pfVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var15;
  long *plVar16;
  SexyVector3 *pSVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  RtObject *this_01;
  code *pcVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  float fVar24;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  Zombie *local_a0;
  PlantByttneriaMeteorHammer *local_98;
  long local_90;
  function<bool(Sexy::Touch_const&)> afStack_88 [32];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  findTargets(param_4,(vector *)avStack_d0);
  lVar7 = FUN_03b2d764(*(undefined8 *)(param_4 + 0x10));
  DamageInfo::DamageInfo(aDStack_68);
  switch(param_5) {
  case 0:
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    bVar3 = false;
    AudioMgr::SendEvent(pcVar12,"byttneriameteorhammer_attack_normal");
    fVar21 = *(float *)(lVar7 + 0x2c4);
    local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_4 + 0x10));
    local_60 = local_60 * fVar21;
    break;
  case 1:
    fVar24 = *(float *)(lVar7 + 0x2c8);
    this = (RtMixedPtrBase *)(param_4 + 0x50);
    fVar21 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_4 + 0x10));
    fVar21 = fVar21 * fVar24;
    fVar24 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_4 + 0x10));
    local_60 = fVar24 * fVar21 + fVar21;
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 == '\0') goto LAB_03b31ca8;
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    if (iVar4 == 5) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b8);
      iVar4 = 3;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0);
      Sexy::Insets::Insets((Insets *)&local_e0);
      p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pfVar14 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var15);
      fVar21 = *pfVar14;
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      local_e0 = (int)(fVar21 - (float)iVar5 * 0.5);
      p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      lVar13 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var15);
      fVar21 = *(float *)(lVar13 + 4);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      dVar23 = (double)iVar5;
      local_dc = (int)((double)fVar21 - dVar23 * 0.5);
      local_d8 = BoardConstants::GRIDSQUARE_WIDTH();
      local_d4 = BoardConstants::GRIDSQUARE_HEIGHT();
      uVar6 = operator|(4,2);
      EntityFinder::GetEntitiesInRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0,uVar6,
                 (Insets *)&local_e0);
      local_108 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_d0);
      local_100 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_d0);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_108,(__normal_iterator *)&local_100),
            bVar3) {
        plVar16 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
        local_110 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)*plVar16;
        if (local_110 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_f0,(RtWeakPtrBase *)&local_f8);
          cVar2 = isValidTarget(param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_f0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_f8);
          uVar6 = SUB84(dVar23,0);
          if (cVar2 != '\0') {
            pSVar10 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(local_110);
            p_Var15 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
            pSVar17 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var15);
            uVar22 = Sexy::SexyVector3::operator-(pSVar10,pSVar17);
            local_f0 = CONCAT44(uVar6,uVar22);
            local_e8 = param_3;
            fVar21 = (float)DVec3::getLength((DVec3 *)&local_f0);
            iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
            dVar23 = (double)(ulong)(uint)((float)iVar5 * 0.5);
            if (fVar21 < (float)iVar5 * 0.5) {
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_b8,
                         (BoardEntity **)&local_110);
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) break;
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_108);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
      local_f8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_d0);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_f0,(__normal_iterator *)&local_f8);
      uVar18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_b8);
      uVar19 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_b8);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
      insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0,local_f0,uVar18,
                 uVar19);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_a0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_b8);
    }
    else {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
      local_a0 = (Zombie *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0,
                 (BoardEntity **)&local_a0);
    }
    bVar3 = true;
    addHitEffect();
    break;
  case 2:
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar12,"byttneriameteorhammer_attack_plnatfood_1");
    playGroundCracksEffect(param_4);
    FUN_03b2ba90((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0,*(undefined8 *)(param_4 + 0x10));
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    pfVar14 = (float *)FUN_03b2bac8(*(undefined8 *)(lVar13 + 0x208),(long)(iVar4 + -1));
    fVar24 = *pfVar14;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    fVar21 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_4 + 0x10));
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    bVar3 = true;
    local_60 = (fVar21 / fVar24) * *(float *)(lVar7 + 0x2cc) * (float)(iVar4 + 1);
    break;
  case 3:
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    bVar3 = false;
    AudioMgr::SendEvent(pcVar12,"byttneriameteorhammer_attack_plnatfood_1");
    playGroundCracksEffect(param_4);
    FUN_03b2ba90((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0,*(undefined8 *)(param_4 + 0x10));
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    pfVar14 = (float *)FUN_03b2bac8(*(undefined8 *)(lVar13 + 0x208),(long)(iVar4 + -1));
    fVar24 = *pfVar14;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    fVar21 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_4 + 0x10));
    fVar21 = fVar21 / fVar24;
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    goto LAB_03b31d9c;
  case 4:
    pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    bVar3 = true;
    AudioMgr::SendEvent(pcVar12,"byttneriameteorhammer_attack_plnatfood_2");
    playAShockWaveEffect(param_4);
    FUN_03b2ba90((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0,*(undefined8 *)(param_4 + 0x10));
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
    pfVar14 = (float *)FUN_03b2bac8(*(undefined8 *)(lVar13 + 0x208),(long)(iVar4 + -1));
    fVar24 = *pfVar14;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    fVar21 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_4 + 0x10));
    fVar21 = fVar21 / fVar24;
    iVar4 = FUN_03b2bab4(*(undefined8 *)(param_4 + 0x10));
LAB_03b31d9c:
    local_60 = fVar21 * *(float *)(lVar7 + 0x2d0) * (float)(iVar4 + 1);
    break;
  default:
    bVar3 = false;
  }
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_d0);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_d0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
    this_01 = (RtObject *)*puVar8;
    if (this_01 != (RtObject *)0x0) {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
      if (this_00 == (Zombie *)0x0) {
        pGVar11 = Sexy::RtObject::Cast<GridItem>(this_01);
        if ((pGVar11 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar11 + 0x210))(pGVar11,*(undefined8 *)(param_4 + 0x10))
           , cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar11 + 0x110))(pGVar11,aDStack_68);
        }
      }
      else {
        if (bVar3) {
          cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
          if (cVar2 == '\0') {
            pcVar20 = *(code **)(*(long *)this_00 + 0x298);
            iVar4 = Zombie::GetSizeType(this_00);
            if (iVar4 == 2) {
              uVar18 = 0x3fc00000;
            }
            else {
              uVar18 = 0x40400000;
            }
            (*pcVar20)(uVar18,this_00);
          }
          else {
            pBVar9 = Board::GetGameSubSystem<ByttneriaMeteorHammerTossSubSystem>
                               (*(Board **)(gLawnApp + 0x9f0));
            pSVar10 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_4 + 0x10));
            uVar22 = 0;
            uVar6 = 0;
            EATextSquish::Vec3::Vec3((Vec3 *)&local_e0,32.0,0.0,0.0);
            local_b8 = Sexy::SexyVector3::operator+(pSVar10,(SexyVector3 *)&local_e0);
            local_b4 = uVar22;
            local_b0 = uVar6;
            local_a0 = this_00;
            local_98 = param_4;
            local_90 = lVar7;
            FUN_03b2c11c(afStack_88);
            ByttneriaMeteorHammerTossSubSystem::tossZombie
                      (local_b8,local_b4,local_b0,pBVar9,this_00,afStack_88);
            std::function<bool(Sexy::Touch_const&)>::~function(afStack_88);
          }
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
  }
LAB_03b31ca8:
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantByttneriaMeteorHammer::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"normal_attack");
  if (bVar1) {
    takeAttack(param_1,0);
    return 1;
  }
  bVar1 = std::operator==(param_2,"charge_attack");
  if (bVar1) {
    takeAttack(param_1,1);
  }
  else {
    bVar1 = std::operator==(param_2,"plantfood_attack");
    if (bVar1) {
      takeAttack(param_1,2);
      return 1;
    }
    bVar1 = std::operator==(param_2,"avatar_attack_1");
    if (bVar1) {
      takeAttack(param_1,3);
    }
    else {
      bVar1 = std::operator==(param_2,"avatar_attack_2");
      if (bVar1) {
        takeAttack(param_1,4);
      }
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::reserveTheBestTarget(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantByttneriaMeteorHammer::reserveTheBestTarget(PlantByttneriaMeteorHammer *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GridItem *pGVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  RtObject *this_00;
  code *pcVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  GridItem *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_30);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,local_28,uVar3,uVar4);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_03b3242c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = (RtObject *)*puVar6;
    if (this_00 != (RtObject *)0x0) {
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar7 != (Zombie *)0x0) {
        pcVar8 = *(code **)(*(long *)pZVar7 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
        cVar2 = (*pcVar8)(pZVar7,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_28,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (cVar2 != '\0') {
          local_28 = (GridItem *)pZVar7;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                     (BoardEntity **)&local_28);
          goto LAB_03b3242c;
        }
      }
      pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00);
      if ((pGVar5 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar5 + 0x210))(pGVar5,*(undefined8 *)(this + 0x10)),
         cVar2 != '\0')) {
        local_28 = pGVar5;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                   (BoardEntity **)&local_28);
        goto LAB_03b3242c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::findChargeTarget() */

void PlantByttneriaMeteorHammer::findChargeTarget(void)

{
  PlantByttneriaMeteorHammer *in_x0;
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findTargets(in_x0,(vector *)&local_20);
  reserveTheBestTarget(in_x0,(vector *)&local_20);
  lVar1 = FUN_03b2bad0(local_20,local_18);
  if (lVar1 != 0) {
    FUN_03b2bf10(local_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::getChargeAttackIndex() */

void __thiscall PlantByttneriaMeteorHammer::getChargeAttackIndex(PlantByttneriaMeteorHammer *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  TPoint *pTVar4;
  ulong uVar5;
  ulong uVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  TPoint<int> aTStack_58 [8];
  Point aPStack_50 [8];
  TPoint aTStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  Sexy::Point::Point((Point *)&local_20,1,-2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,1,-1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,2,-1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,1,0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,2,0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,3,0);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,1,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,2,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  Sexy::Point::Point((Point *)&local_20,1,2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findTargets(this,(vector *)&local_20);
  reserveTheBestTarget(this,(vector *)&local_20);
  lVar2 = FUN_03b2bad0(local_20,local_18);
  if (lVar2 != 0) {
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
              ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
               &local_20);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
              ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
               &local_20);
    BoardEntity::CalcGridPosition();
    BoardEntity::CalcGridPosition();
    Sexy::TPoint<int>::operator-(aTStack_58,aTStack_48);
    Sexy::Point::Point(aPStack_50,(TPoint *)aRStack_40);
    uVar3 = FUN_03b2badc(local_38,local_30);
    uVar5 = 0;
    do {
      uVar6 = uVar5 & 0xffffffff;
      if (uVar5 == uVar3) {
        uVar6 = 3;
        break;
      }
      pTVar4 = (TPoint *)FUN_03b2bae8(local_38,uVar5);
      cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aPStack_50,pTVar4);
      uVar5 = uVar5 + 1;
    } while (cVar1 == '\0');
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::setState(unsigned int) */

void __thiscall PlantByttneriaMeteorHammer::setState(PlantByttneriaMeteorHammer *this,uint param_1)

{
  int iVar1;
  long lVar2;
  PlantAnimRig_ByttneriaMeteorHammer *pPVar3;
  code *pcVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) != param_1) {
    *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
    lVar2 = FUN_03b2d764();
    pPVar3 = (PlantAnimRig_ByttneriaMeteorHammer *)FUN_03b2d844(*(undefined8 *)(this + 0x10));
    lVar5 = *(long *)(this + 0x10);
    switch(*(undefined4 *)(lVar5 + 200)) {
    case 4:
      (**(code **)(*(long *)pPVar3 + 0x118))(pPVar3);
      break;
    case 0xb:
      this[0x30] = (PlantByttneriaMeteorHammer)0x0;
      this[0x31] = (PlantByttneriaMeteorHammer)0x0;
      fVar8 = (float)PVZ_T();
      *(float *)(this + 0x2c) = fVar8 + *(float *)(this + 0x28);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,asStack_58);
      PlantAnimRig_ByttneriaMeteorHammer::playCharge
                (pPVar3,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                         *)aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      break;
    case 0xc:
      uVar7 = PVZ_EOT();
      *(undefined4 *)(this + 0x2c) = uVar7;
      if (this[0x30] == (PlantByttneriaMeteorHammer)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        PlantAnimRig_ByttneriaMeteorHammer::playNormalAttack
                  (pPVar3,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                           *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string(asStack_58);
      }
      else {
        iVar1 = FUN_03b2bab4(lVar5);
        if (iVar1 == 5) {
          uVar7 = getChargeAttackIndex(this);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50,aRStack_60,asStack_58);
          PlantAnimRig_ByttneriaMeteorHammer::playChargeAttackLv5(pPVar3,uVar7,aRStack_50);
        }
        else {
          uVar7 = getChargeAttackIndex(this);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50,aRStack_60,asStack_58);
          PlantAnimRig_ByttneriaMeteorHammer::playChargeAttack(pPVar3,uVar7,aRStack_50);
        }
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string(asStack_58);
      }
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      break;
    case 0xd:
      fVar8 = *(float *)(lVar2 + 0x2d4);
      this[0x30] = (PlantByttneriaMeteorHammer)0x0;
      fVar8 = (float)RandRangeFloat(fVar8 - 0.2,fVar8 + 0.2);
      fVar6 = (float)PVZ_T();
      pcVar4 = *(code **)(*(long *)pPVar3 + 0x118);
      *(float *)(this + 0x2c) = fVar6 + fVar8;
      (*pcVar4)(pPVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::UpdateActions() */

void __thiscall PlantByttneriaMeteorHammer::UpdateActions(PlantByttneriaMeteorHammer *this)

{
  int iVar1;
  char cVar2;
  PlantAnimRig_ByttneriaMeteorHammer *this_00;
  float fVar3;
  undefined4 uVar4;
  
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
    if (iVar1 == 0xb) {
      fVar3 = (float)PVZ_T();
      if ((*(float *)(this + 0x2c) < fVar3) && (this[0x31] != (PlantByttneriaMeteorHammer)0x0)) {
        uVar4 = PVZ_EOT();
        this[0x31] = (PlantByttneriaMeteorHammer)0x0;
        this[0x30] = (PlantByttneriaMeteorHammer)0x1;
        *(undefined4 *)(this + 0x2c) = uVar4;
        this_00 = (PlantAnimRig_ByttneriaMeteorHammer *)FUN_03b2d844(*(undefined8 *)(this + 0x10));
        PlantAnimRig_ByttneriaMeteorHammer::playChargingFast(this_00);
      }
      cVar2 = canFindTarget(this);
      if (cVar2 != '\0') {
LAB_03b32bec:
        setState(this,0xc);
        return;
      }
    }
    else if (iVar1 == 0xd) {
      fVar3 = (float)PVZ_T();
      if (*(float *)(this + 0x2c) < fVar3) {
        uVar4 = PVZ_EOT();
        *(undefined4 *)(this + 0x2c) = uVar4;
        setState(this,4);
        return;
      }
    }
    else if (iVar1 == 4) {
      cVar2 = canFindTarget(this);
      if (cVar2 == '\0') {
        setState(this,0xb);
        return;
      }
      goto LAB_03b32bec;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantByttneriaMeteorHammer::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantByttneriaMeteorHammer::onAnimStoppedCallback(PlantByttneriaMeteorHammer *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b2d844(*(undefined8 *)(this + 0x10));
  FUN_03b2bb18(asStack_10);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_03b2bb80(asStack_10);
    lVar2 = FUN_05474368(param_1,asStack_10,0);
    std::string::~string(asStack_10);
    if (lVar2 == -1) {
      FUN_03b2bbe8(asStack_10);
      lVar2 = FUN_05474368(param_1,asStack_10,0);
      std::string::~string(asStack_10);
      if (lVar2 == -1) {
        FUN_03b2bc50(asStack_10);
        cVar1 = std::operator==(param_1,asStack_10);
        std::string::~string(asStack_10);
        if (cVar1 == '\0') {
          FUN_03b2bcb8(asStack_10);
          cVar1 = std::operator==(param_1,asStack_10);
          std::string::~string(asStack_10);
          if (cVar1 != '\0') {
            this[0x31] = (PlantByttneriaMeteorHammer)0x1;
            startCharging(this);
          }
        }
        else {
          startCharging(this);
        }
        goto LAB_03b32ce4;
      }
    }
  }
  setState(this,0xd);
LAB_03b32ce4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantByttneriaMeteorHammer::CancelPlantfood() */

void __thiscall PlantByttneriaMeteorHammer::CancelPlantfood(PlantByttneriaMeteorHammer *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  return;
}

