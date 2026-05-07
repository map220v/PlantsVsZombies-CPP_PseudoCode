// Class: PlantAnimRig_LavaGuava


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::StaticClassInit() */

void PlantAnimRig_LavaGuava::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_LavaGuava");
    (*pcVar2)(plVar1,asStack_10,FUN_04128350,1000,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LavaGuava::StaticGetClass() */

long * PlantAnimRig_LavaGuava::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_LavaGuava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_LavaGuava::GetClass() const */

long * PlantAnimRig_LavaGuava::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_LavaGuava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_LavaGuava::calcCrackLoc(int) */

undefined4 __thiscall PlantAnimRig_LavaGuava::calcCrackLoc(PlantAnimRig_LavaGuava *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if (param_1 != 0) {
    lVar2 = FUN_04121314(*(undefined8 *)(this + 0x3d0),*(undefined8 *)(this + 0x3d8));
    uVar1 = 3;
    if (lVar2 + -1 != (long)param_1) {
      uVar1 = 2;
    }
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::onCrackSpawned(std::string const&) */

void __thiscall PlantAnimRig_LavaGuava::onCrackSpawned(PlantAnimRig_LavaGuava *this,string *param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *this_01;
  PopAnimRig *pPVar4;
  ulong uVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar5 = 0; uVar3 = FUN_04121314(*(undefined8 *)(this + 0x3d0),*(undefined8 *)(this + 0x3d8)),
      uVar5 < uVar3; uVar5 = uVar5 + 1) {
    uVar1 = (int)uVar5 + 1;
    Sexy::StrFormat("crack%d_spawn",asStack_48,(ulong)uVar1);
    cVar2 = std::operator==(param_1,asStack_48);
    if (cVar2 != '\0') {
      Sexy::StrFormat("crack%d_loop",asStack_40,(ulong)uVar1);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar5);
      this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar4,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::onDestroy() */

void __thiscall PlantAnimRig_LavaGuava::onDestroy(PlantAnimRig_LavaGuava *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x3d0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x3d0));
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::calcCrackState(int, CrackLocation) */

void __thiscall
PlantAnimRig_LavaGuava::calcCrackState(PlantAnimRig_LavaGuava *this,int param_1,int param_3)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  BeachStage *pBVar3;
  PoolDaylightStage *pPVar4;
  PirateStage *pPVar5;
  undefined4 uVar6;
  Board *pBVar7;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (RtObject *)0x0) {
    pBVar3 = Sexy::RtObject::Cast<BeachStage>(this_00);
    if ((pBVar3 == (BeachStage *)0x0) &&
       (pPVar4 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00),
       pPVar4 == (PoolDaylightStage *)0x0)) {
      pPVar5 = Sexy::RtObject::Cast<PirateStage>(this_00);
      if ((pPVar5 != (PirateStage *)0x0) &&
         (iVar2 = Board::GetGridSquareType
                            (*(Board **)(gLawnApp + 0x9f0),param_1 + *(int *)(this + 0x3c0),
                             *(int *)(this + 0x3c4)), iVar2 == 3)) {
        uVar6 = 4;
        if (param_3 != 3) {
          uVar6 = 3;
        }
        goto LAB_041249a4;
      }
    }
    else {
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_10,param_1 + *(int *)(this + 0x3c0),*(int *)(this + 0x3c4));
      cVar1 = Board::IsShallowWater(pBVar7,aPStack_10);
      uVar6 = 3;
      if (cVar1 != '\0') goto LAB_041249a4;
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_10,param_1 + *(int *)(this + 0x3c0) + 1,*(int *)(this + 0x3c4));
      cVar1 = Board::IsShallowWater(pBVar7,aPStack_10);
      if ((cVar1 != '\0') || (param_3 == 3)) {
        uVar6 = 2;
        goto LAB_041249a4;
      }
    }
  }
  uVar6 = 1;
LAB_041249a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::setCrackEmissionLocation() */

void __thiscall PlantAnimRig_LavaGuava::setCrackEmissionLocation(PlantAnimRig_LavaGuava *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  UIWidget *pUVar5;
  long extraout_x0;
  long extraout_x0_00;
  long extraout_x0_01;
  StandaloneEffect *this_00;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  int local_30;
  int local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aedf88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06aedf88), iVar3 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06aedfb0,-98.0,-120.0,0.0);
    __cxa_guard_release(&DAT_06aedf88);
  }
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_04121314(*(undefined8 *)(this + 0x3d0),*(undefined8 *)(this + 0x3d8));
    if (uVar6 <= uVar7) break;
    uVar1 = calcCrackLoc(this,(int)uVar7);
    uVar2 = calcCrackState(this,uVar7 & 0xffffffff,uVar1);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar7);
    pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    UIWidget::GetAtlasImage(pUVar5);
    nop();
    FUN_041212cc(extraout_x0 + 0x220,uVar2);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar7);
    pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    UIWidget::GetAtlasImage(pUVar5);
    nop();
    FUN_041212d8(extraout_x0_00 + 0x224,uVar1);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar7);
    pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    UIWidget::GetAtlasImage(pUVar5);
    nop();
    uVar1 = Sexy::Rand(2);
    FUN_041212e0(extraout_x0_01 + 0x228,uVar1);
    Sexy::Point::Point(aPStack_18,(int)uVar7 + *(int *)(this + 0x3c0),*(int *)(this + 0x3c4));
    BoardTransforms::GridToBoardSpace(aPStack_18);
    uVar1 = 0;
    fVar8 = (float)local_2c;
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,fVar8,0.0);
    local_28 = Sexy::SexyVector3::operator+((SexyVector3 *)&DAT_06aedfb0,(SexyVector3 *)aPStack_18);
    local_24 = fVar8;
    local_20 = uVar1;
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar7);
    this_00 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_28,0x61a87);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::PlantAnimRig_LavaGuava() */

void __thiscall PlantAnimRig_LavaGuava::PlantAnimRig_LavaGuava(PlantAnimRig_LavaGuava *this)

{
  undefined4 uVar1;
  
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LavaGuava_067eaac8;
  uVar1 = _FUN_04125798;
  *(undefined ***)this = &PTR_GetClass_067ea860;
  *(undefined4 *)(this + 0x3b8) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x3c0));
  this[0x3c8] = (PlantAnimRig_LavaGuava)0x0;
  this[0x3c9] = (PlantAnimRig_LavaGuava)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3d0));
  return;
}


/* PlantAnimRig_LavaGuava::StaticNew() */

PlantAnimRig_LavaGuava * PlantAnimRig_LavaGuava::StaticNew(void)

{
  PlantAnimRig_LavaGuava *this;
  
  this = ::operator_new(1000);
  PlantAnimRig_LavaGuava(this);
  return this;
}


/* PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava() */

void __thiscall PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava(PlantAnimRig_LavaGuava *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea860;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LavaGuava_067eaac8;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x3d0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava() */

void __thiscall PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava(PlantAnimRig_LavaGuava *this)

{
  ~PlantAnimRig_LavaGuava(this + -0x10);
  return;
}


/* PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava() */

void __thiscall PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava(PlantAnimRig_LavaGuava *this)

{
  ~PlantAnimRig_LavaGuava(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava() */

void __thiscall PlantAnimRig_LavaGuava::~PlantAnimRig_LavaGuava(PlantAnimRig_LavaGuava *this)

{
  ~PlantAnimRig_LavaGuava(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::PlayAvatarCrackEffect(Sexy::Point const&) */

void __thiscall
PlantAnimRig_LavaGuava::PlayAvatarCrackEffect(PlantAnimRig_LavaGuava *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  PopAnimRig *pPVar7;
  RtWeakPtr aRStack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"POPANIM_EFFECTS_LAVAGUAVA_AVATAR_CRACK");
  GetPAMByName(asStack_60);
  std::string::~string(asStack_60);
  nop();
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = FUN_04121674();
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 / 2);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_60,(float)iVar3,(float)((iVar1 * iVar4 + 0xa0 + iVar1 / 2) - iVar2),0.0
            );
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_60,-1);
  Effect_PopAnim::SetCentered(pEVar5,true);
  FUN_0412126c(pEVar5 + 0x1c,0x61a81);
  pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)pEVar5);
  std::string::string(asStack_60,"crack1_spawn");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onCrackSpawned");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar7,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_60);
  nop();
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_80);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)param_1);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1 / 2);
  iVar2 = FUN_04121674();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)iVar4,(float)(iVar1 - iVar2),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_60,-1);
  Effect_PopAnim::SetCentered(pEVar5,true);
  FUN_0412126c(pEVar5 + 0x1c,0x61a81);
  pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)pEVar5);
  std::string::string(asStack_60,"crack2_spawn");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onCrackSpawned");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar7,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)asStack_68);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(this + 0x3d0),(RtWeakPtr *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)asStack_68);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(this + 0x3d0),(RtWeakPtr *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  *(undefined8 *)(this + 0x3c0) = *(undefined8 *)param_1;
  this[0x3c9] = (PlantAnimRig_LavaGuava)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::initializeCrackEffects() */

void __thiscall PlantAnimRig_LavaGuava::initializeCrackEffects(PlantAnimRig_LavaGuava *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  EffectAnimRig_LavaGuavaCrackSquare *this_02;
  int iVar3;
  float fVar4;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_LAVAGUAVA_CRACK");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (0 < *(int *)(this + 0x3bc)) {
    iVar3 = 0;
    do {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
      push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x3d0),(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      pRVar2 = (RtClass *)EffectAnimRig_LavaGuavaCrackSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,pRVar2);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,this_00);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      fVar4 = (float)iVar3;
      iVar3 = iVar3 + 1;
      EffectAnimRig_LavaGuavaCrackSquare::StartPlayingCrackEffect
                (this_02,fVar4 * *(float *)(this + 0x3b8));
    } while (iVar3 < *(int *)(this + 0x3bc));
  }
  this[0x3c8] = (PlantAnimRig_LavaGuava)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::PlayCrackEffect(int, Sexy::Point const&) */

void __thiscall
PlantAnimRig_LavaGuava::PlayCrackEffect(PlantAnimRig_LavaGuava *this,int param_1,Point *param_2)

{
  int *piVar1;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  if (this[0x3c8] == (PlantAnimRig_LavaGuava)0x0) {
    *(undefined8 *)(this + 0x3c0) = *(undefined8 *)param_2;
    local_c = BoardConstants::NUMBER_OF_COLUMNS();
    local_c = local_c - *(int *)(this + 0x3c0);
    piVar1 = eastl::min_alt<int>(local_14,&local_c);
    *(int *)(this + 0x3bc) = *piVar1;
    initializeCrackEffects(this);
  }
  setCrackEmissionLocation(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LavaGuava::onUpdate() */

void PlantAnimRig_LavaGuava::onUpdate(void)

{
  int iVar1;
  int iVar2;
  PlantAnimRig_LavaGuava *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  UIWidget *this_00;
  long extraout_x0;
  GridItemSap *pGVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if (in_x0[0x3c9] == (PlantAnimRig_LavaGuava)0x0) {
    iVar1 = *(int *)(in_x0 + 0x3bc);
    lVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = (int)lVar6;
        lVar4 = FUN_04121314(*(undefined8 *)(in_x0 + 0x3d0),*(undefined8 *)(in_x0 + 0x3d8));
        if (lVar4 != 0) {
          calcCrackLoc(in_x0,iVar5);
          iVar1 = calcCrackState();
          this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(in_x0 + 0x3d0),lVar6)
          ;
          this_00 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          lVar4 = UIWidget::GetAtlasImage(this_00);
          if (lVar4 != 0) {
            nop();
            iVar2 = FUN_041212d4(*(undefined4 *)(extraout_x0 + 0x220));
            if (iVar2 != iVar1) {
              FUN_041212cc(extraout_x0 + 0x220,iVar1);
            }
          }
          pGVar3 = (GridItemSap *)
                   FUN_04126514(iVar5 + *(int *)(in_x0 + 0x3c0),*(undefined4 *)(in_x0 + 0x3c4));
          if (pGVar3 != (GridItemSap *)0x0) {
            GridItemSap::OnWashedOut(pGVar3);
          }
          iVar1 = *(int *)(in_x0 + 0x3bc);
        }
        lVar6 = lVar6 + 1;
      } while (iVar5 + 1 < iVar1);
    }
  }
  else {
    iVar1 = 0;
    while (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar5 = iVar1, iVar1 < iVar2) {
      while( true ) {
        iVar1 = iVar5 + 1;
        pGVar3 = (GridItemSap *)FUN_04126514(iVar5,*(undefined4 *)(in_x0 + 0x3c4));
        if (pGVar3 == (GridItemSap *)0x0) break;
        GridItemSap::OnWashedOut(pGVar3);
        iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar5 = iVar1;
        if (iVar2 <= iVar1) goto LAB_04129ac4;
      }
    }
LAB_04129ac4:
    iVar1 = 0;
    while (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar5 = iVar1, iVar1 < iVar2) {
      while( true ) {
        iVar1 = iVar5 + 1;
        pGVar3 = (GridItemSap *)FUN_04126514(*(undefined4 *)(in_x0 + 0x3c0),iVar5);
        if (pGVar3 == (GridItemSap *)0x0) break;
        GridItemSap::OnWashedOut(pGVar3);
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        iVar5 = iVar1;
        if (iVar2 <= iVar1) {
          nop();
          return;
        }
      }
    }
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LavaGuava::playPlantFoodOff() */

void __thiscall PlantAnimRig_LavaGuava::playPlantFoodOff(PlantAnimRig_LavaGuava *this)

{
  PopAnimRig *pPVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  UIWidget *pUVar4;
  RtObject *this_00;
  EffectAnimRig_LavaGuavaCrackSquare *this_01;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = 1;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x3d0);
    uVar2 = FUN_04121314(uVar6,*(undefined8 *)(this + 0x3d8));
    if (uVar2 <= uVar5) break;
    if (this[0x3c9] == (PlantAnimRig_LavaGuava)0x0) {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(uVar6,uVar5);
      pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      this_00 = (RtObject *)UIWidget::GetAtlasImage(pUVar4);
      this_01 = Sexy::RtObject::Cast<EffectAnimRig_LavaGuavaCrackSquare>(this_00);
      EffectAnimRig_LavaGuavaCrackSquare::StopPlayingCrackEffect
                (this_01,(float)(int)uVar5 * *(float *)(this + 0x3b8));
    }
    else {
      Sexy::StrFormat("crack%d_end",asStack_40,uVar7);
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0412130c(*(undefined8 *)(this + 0x3d0),uVar5);
      pUVar4 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar4);
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
    uVar5 = uVar5 + 1;
    uVar7 = (ulong)((int)uVar7 + 1);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x3d0));
  this[0x3c8] = (PlantAnimRig_LavaGuava)0x0;
  PlantAnimRig::playPlantFoodOff((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

