// Class: PlantCracker


/* PlantCracker::IsInvincible() const */

bool __thiscall PlantCracker::IsInvincible(PlantCracker *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  return iVar1 != 1;
}


/* PlantCracker::CanBeWatered() */

byte __thiscall PlantCracker::CanBeWatered(PlantCracker *this)

{
  byte bVar1;
  
  bVar1 = PlantFramework::CanBeWatered((PlantFramework *)this);
  return bVar1 & (byte)this[0x30];
}


/* PlantCracker::CalcRenderOrder() */

void __thiscall PlantCracker::CalcRenderOrder(PlantCracker *this)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  Board::MakeRenderOrder(0x62250,*(undefined4 *)(this_00 + 0x110),(int)(805.0 - *pfVar1));
  return;
}


/* PlantCracker::PlantCracker() */

void __thiscall PlantCracker::PlantCracker(PlantCracker *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantCracker)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_067d0670;
  return;
}


/* PlantCracker::StaticNew() */

PlantCracker * PlantCracker::StaticNew(void)

{
  PlantCracker *this;
  
  this = ::operator_new(0x38);
  PlantCracker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::StaticClassInit() */

void PlantCracker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCracker");
    (*pcVar2)(plVar1,asStack_10,FUN_040a13c8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCracker::StaticGetClass() */

long * PlantCracker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCracker::GetClass() const */

long * PlantCracker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoFlickZombie(Zombie*) */

void __thiscall PlantCracker::DoFlickZombie(PlantCracker *this,Zombie *param_1)

{
  float *pfVar1;
  Vec3 aVStack_28 [16];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_28,(float)(int)*pfVar1,(float)(int)pfVar1[1],0.0);
  Zombie::SetIsTargetable(param_1,false);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  Zombie::SetIsControlled(param_1,true);
  EATextSquish::Vec3::Vec3(aVStack_18,500.0,-500.0,0.0);
  Zombie::FlickOff(param_1,(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCracker::CheckAndKill() */

void __thiscall PlantCracker::CheckAndKill(PlantCracker *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2c);
  *(int *)(this + 0x2c) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
  return;
}


/* PlantCracker::~PlantCracker() */

void __thiscall PlantCracker::~PlantCracker(PlantCracker *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0670;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCracker::~PlantCracker() */

void __thiscall PlantCracker::~PlantCracker(PlantCracker *this)

{
  ~PlantCracker(this);
  AK::FreeHook(this);
  return;
}


/* PlantCracker::CanEndPlantfood() */

ulong __thiscall PlantCracker::CanEndPlantfood(PlantCracker *this)

{
  PlantCracker PVar1;
  ulong uVar2;
  
  PVar1 = this[0x28];
  if ((byte)PVar1 != 0) {
    this[0x28] = (PlantCracker)0x0;
    return (ulong)(uint)(byte)PVar1;
  }
  uVar2 = PlantFramework::CanEndPlantfood((PlantFramework *)this);
  return uVar2;
}


/* PlantCracker::Initialize() */

void __thiscall PlantCracker::Initialize(PlantCracker *this)

{
  char cVar1;
  long *plVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  this[0x28] = (PlantCracker)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (PlantCracker)0x1;
  return;
}


/* PlantCracker::CanBeTargetedBy(BoardEntity const*) */

bool PlantCracker::CanBeTargetedBy(BoardEntity *param_1)

{
  int iVar1;
  Effect_AngerFlame *this;
  
  this = (Effect_AngerFlame *)
         UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this);
  return iVar1 == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::PlaySmallCrackerEffect() */

void __thiscall PlantCracker::PlaySmallCrackerEffect(PlantCracker *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float *pfVar5;
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_CRACKER_HIT");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_00,true);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar2 = FUN_040a1168();
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,*pfVar5,pfVar5[1] - (float)iVar2,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
    uVar3 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    FUN_040a0c6c(this_00 + 0x1c,uVar3);
    std::string::string(asStack_18,"PLANTFOOD");
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DropCrackerPiece(float, float) */

void PlantCracker::DropCrackerPiece(float param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  EffectCrackerDrop *this;
  ResourceInfo *pRVar5;
  int iVar6;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Point aPStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_CRACKER_HIT");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    iVar6 = (int)param_2;
    this = Board::AddEffect<EffectCrackerDrop>(*(Board **)(gLawnApp + 0x9f0));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar5,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
    iVar2 = BoardTransforms::GridToBoardSpaceX((int)param_1);
    iVar3 = BoardTransforms::GridToBoardSpaceY(iVar6);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iVar2,(float)iVar3,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
    uVar4 = Board::MakeRenderOrder(0x64960,iVar6,0);
    FUN_040a0c6c(this + 0x1c,uVar4);
    std::string::string(asStack_18,"ATTACK2");
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_18,0);
    std::string::~string(asStack_18);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
    Sexy::Point::Point(aPStack_20,(int)param_1,iVar6);
    EffectCrackerDrop::SetDate(this,asStack_18,aPStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DropCrackerPiece() */

void __thiscall PlantCracker::DropCrackerPiece(PlantCracker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  Zombie *this_00;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  Plant *pPVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined1 auStack_38 [48];
  long local_8;
  
  pPVar13 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_040a0ca0(pPVar13);
  iVar3 = iVar3 + -1;
  if (iVar3 < 1) {
    Plant::KillPlant(pPVar13,0,0,1);
  }
  else {
    if (2 < iVar3) {
      iVar3 = 2;
    }
    *(int *)(this + 0x2c) = iVar3;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_50,2,auStack_38,0xffffffff,0xffffffff);
    thunk_FUN_040a01ec(auStack_38);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1)
    {
      plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      if (*plVar8 != 0) {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_58);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        else {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*plVar8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          if ((((this_00 != (Zombie *)0x0) &&
               (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
             ((cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_00), cVar2 != '\0' &&
              (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0')))) {
            iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
            UnchartedModePlantNumData::UnchartedModePlantNumData
                      ((UnchartedModePlantNumData *)&local_58,iVar4,iVar5);
            lVar9 = FUN_040a069c(auStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            if ((lVar9 == 0) &&
               (cVar2 = FUN_040a007c((RtWeakPtr<Sexy::ResourceInfo> *)&local_58), cVar2 != '\0')) {
              FUN_040a3d38(auStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    uVar10 = FUN_040a0430(auStack_38);
    if ((ulong)(long)iVar3 < uVar10) {
      local_58 = FUN_040a048c(auStack_38);
      FUN_040a035c((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      if (iVar3 == 2) {
        FUN_040a035c((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      }
      uVar12 = FUN_040a0124(auStack_38);
      FUN_040a0a18(auStack_38,local_58,uVar12);
      uVar10 = FUN_040a0430(auStack_38);
    }
    iVar3 = iVar3 - (int)uVar10;
    iVar4 = 0;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      do {
        iVar4 = iVar4 + 1;
        uVar6 = PlantFramework::Rand
                          ((PlantFramework *)this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
        uVar7 = PlantFramework::Rand
                          ((PlantFramework *)this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  ((UnchartedModePlantNumData *)&local_58,
                   (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f),
                   (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
        FUN_040a3e80(auStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      } while (iVar4 != iVar3);
    }
    local_60 = FUN_040a048c(auStack_38);
    local_58 = FUN_040a0124(auStack_38);
    while (cVar2 = FUN_040a00a4((__normal_iterator *)&local_60,
                                (RtWeakPtr<Sexy::ResourceInfo> *)&local_58), cVar2 != '\0') {
      piVar11 = (int *)FUN_040a0288((__normal_iterator *)&local_60);
      DropCrackerPiece((float)*piVar11,(float)piVar11[1]);
      FUN_040a035c((__normal_iterator *)&local_60);
    }
    thunk_FUN_040a07e4(auStack_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCracker::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCracker::onAnimStoppedCallback(PlantCracker *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    DropCrackerPiece(this);
    (**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoPieceDamage(Zombie*) */

void __thiscall PlantCracker::DoPieceDamage(PlantCracker *this,Zombie *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_040a4068(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 700);
  fVar6 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
  pcVar5 = *(code **)(*(long *)param_1 + 0x110);
  uVar3 = operator|(0x1000,0x400);
  uVar4 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)(int)(fVar6 * (float)iVar1),local_70,local_6c,aDStack_68,uVar3,
             uVar4,aPStack_78,0);
  (*pcVar5)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::FindLocationValidGridItemAndDamage(int, int) */

void __thiscall
PlantCracker::FindLocationValidGridItemAndDamage(PlantCracker *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  GridItem *this_00;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,4,param_1,param_2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    if (((RtObject *)*puVar4 != (RtObject *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4), this_00 != (GridItem *)0x0))
    {
      ToolPacketData::GetProps();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
      if (cVar3 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      }
      else {
        cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        if (cVar3 != '\0') {
          lVar5 = FUN_040a4068(*(undefined8 *)(this + 0x10));
          iVar1 = *(int *)(lVar5 + 0x2c0);
          fVar8 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
          uVar7 = *(undefined8 *)(this + 0x10);
          pcVar6 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)(int)(fVar8 * (float)iVar1),local_88,local_84,aRStack_68,
                     0x400,uVar7,aPStack_90,0);
          (*pcVar6)(this_00,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCracker::ApplyPlantfood() */

void __thiscall PlantCracker::ApplyPlantfood(PlantCracker *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  char *pcVar2;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 1) {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Plant_Cracker_PlantFood_Start");
  this[0x28] = (PlantCracker)0x0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::ZombieCanBeFlick(Zombie*) */

void __thiscall PlantCracker::ZombieCanBeFlick(PlantCracker *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar2 == '\0') {
      cVar2 = Zombie::HasFogImmune(param_1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
          if (cVar2 == '\0') {
            Zombie::GetCurrentTitleStatus();
            bVar1 = false;
            if (local_58 == '\0') {
              cVar2 = Zombie::IsBerserk(param_1);
              if (cVar2 == '\0') {
                cVar2 = Zombie::IsControlled(param_1);
                if (cVar2 == '\0') {
                  cVar2 = FUN_02fd4220(*(undefined4 *)(param_1 + 0x354),param_1 + 0x358);
                  if (cVar2 == '\0') {
                    iVar3 = Zombie::GetSizeType(param_1);
                    bVar1 = iVar3 == 0;
                  }
                }
              }
            }
            TitleStatus::~TitleStatus(aTStack_70);
            goto LAB_040a5608;
          }
        }
      }
    }
  }
  bVar1 = false;
LAB_040a5608:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoNormalDamage(Zombie*) */

void __thiscall PlantCracker::DoNormalDamage(PlantCracker *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  DamageInfo *pDVar11;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_040a4068(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  fVar5 = (float)FUN_040a0c80(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar6 = (float)FUN_040a0c90(*(undefined4 *)(this_00 + 0x3bc));
  iVar2 = *(int *)(lVar3 + 0x2b8);
  fVar7 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar8 = (float)FUN_040a0c94(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  fVar9 = (float)Zombie::GetHitpointsUntilBleedout(param_1);
  fVar10 = (float)FUN_040a0cac(*(undefined4 *)(param_1 + 0x2a8));
  pDVar11._0_4_ = (DamageInfo *)(float)(int)(fVar5 * fVar6 * (float)iVar2 * fVar7 * fVar8);
  if ((((float)pDVar11._0_4_ < fVar10 + fVar9) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 != 0)
      ) || (cVar1 = Zombie::IsInmmuneFireDamage(param_1), cVar1 != '\0')) {
    lVar3 = *(long *)(this + 0x10);
    pcVar4 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point(aPStack_78,*(int *)(lVar3 + 0x114),*(int *)(lVar3 + 0x110));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar11._0_4_,local_70,local_6c,aDStack_68,0x400,lVar3,aPStack_78,0);
    (*pcVar4)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    cVar1 = ZombieCanBeFlick(this,param_1);
    if (cVar1 != '\0') {
      DoFlickZombie(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoPlantFoodDamage(Zombie*) */

void __thiscall PlantCracker::DoPlantFoodDamage(PlantCracker *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ZombieTosserSubSystem *pZVar4;
  undefined8 uVar5;
  Plant *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DamageInfo *pDVar13;
  Point aPStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  DamageInfo aDStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_040a4068(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  fVar7 = (float)FUN_040a0c80(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar8 = (float)FUN_040a0c90(*(undefined4 *)(this_00 + 0x3bc));
  iVar2 = *(int *)(lVar3 + 0x2b8);
  fVar9 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar10 = (float)FUN_040a0c94(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  fVar11 = (float)Zombie::GetHitpointsUntilBleedout(param_1);
  fVar12 = (float)FUN_040a0cac(*(undefined4 *)(param_1 + 0x2a8));
  pDVar13._0_4_ = (DamageInfo *)(float)(int)(fVar7 * fVar8 * (float)iVar2 * fVar9 * fVar10);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 0)) {
    if ((fVar12 + fVar11 <= (float)pDVar13._0_4_) &&
       ((cVar1 = ZombieCanBeFlick(this,param_1), cVar1 != '\0' &&
        (cVar1 = Zombie::IsInmmuneFireDamage(param_1), cVar1 == '\0')))) {
      DoFlickZombie(this,param_1);
      goto LAB_040a59f0;
    }
    cVar1 = Zombie::IsControlled(param_1);
    if ((((cVar1 == '\0') && (cVar1 = Zombie::HasFogImmune(param_1), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) {
      Zombie::GetCurrentTitleStatus();
      if (local_58 == '\0') {
        cVar1 = Zombie::IsBerserk(param_1);
        TitleStatus::~TitleStatus((TitleStatus *)aDStack_70);
        if (cVar1 == '\0') {
          pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          uVar5 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_1);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x437a0000,0x3ecccccd,pZVar4,param_1,uVar5,aRStack_b8,
                     0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b8);
          (**(code **)(*(long *)param_1 + 0x298))(0x40000000,param_1);
        }
      }
      else {
        TitleStatus::~TitleStatus((TitleStatus *)aDStack_70);
      }
    }
  }
  pcVar6 = *(code **)(*(long *)param_1 + 0x110);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  lVar3 = *(long *)(this + 0x10);
  Sexy::Point::Point(aPStack_c8,iVar2,*(int *)(lVar3 + 0x110));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
  DamageInfo::DamageInfo(pDVar13._0_4_,local_c0,local_bc,aDStack_70,0x400,lVar3,aPStack_c8,0);
  (*pcVar6)(param_1,aDStack_70);
  DamageInfo::~DamageInfo(aDStack_70);
LAB_040a59f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   CrackerDamgeType) */

void __thiscall
PlantCracker::DoDamage
          (PlantCracker *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  Zombie *pZVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
       (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2), pZVar3 != (Zombie *)0x0)) {
      if (param_3 == 1) {
        DoPieceDamage(this,pZVar3);
      }
      else if (param_3 == 0) {
        DoNormalDamage(this,pZVar3);
      }
      else if (param_3 == 2) {
        DoPlantFoodDamage(this,pZVar3);
      }
    }
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
/* PlantCracker::FindLocationValidZombie(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   int, int) */

void PlantCracker::FindLocationValidZombie(vector *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  RealObject *this;
  float *pfVar6;
  long lVar7;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  code *pcVar8;
  float fVar9;
  undefined8 local_38;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  EntityFinder::GetEntitiesAtGridSquare(this_00,2,param_3);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_040a5cc4:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_10);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if (this != (RealObject *)0x0) {
      ToolPacketData::GetProps();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
      if (((cVar2 == '\0') || (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 != '\0'))
         || (bVar3 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_1 + 0x10)), bVar3 == 0
            )) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      else {
        pcVar8 = *(code **)(*(long *)param_1 + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
        bVar4 = (*pcVar8)(param_1,aRStack_20,0);
        if (bVar4 != 0) {
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          fVar9 = *pfVar6;
          lVar7 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if (fVar9 <= *(float *)(lVar7 + 0x10)) {
            pcVar8 = *(code **)(*(long *)this + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
            cVar2 = (*pcVar8)(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_10,0);
            bVar3 = bVar4;
            if (cVar2 != '\0') {
              pcVar8 = *(code **)(*(long *)this + 0xb8);
              if (*(code **)(*(long *)param_1 + 400) == PlantFramework::GetCollisionFlags) {
                uVar5 = PlantFramework::GetCollisionFlags(param_1,0);
              }
              else {
                uVar5 = (**(code **)(*(long *)param_1 + 400))(param_1,0);
              }
              bVar3 = (*pcVar8)(this,uVar5);
              bVar3 = bVar3 ^ 1;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (bVar3 == 0) break;
      }
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_38);
    local_38 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                         ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_10);
  } while( true );
  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  goto LAB_040a5cc4;
}


/* PlantCracker::FindSameLocationValidZombie(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall PlantCracker::FindSameLocationValidZombie(PlantCracker *this,vector *param_1)

{
  FindLocationValidZombie((vector *)this,(int)param_1,*(int *)(*(long *)(this + 0x10) + 0x114));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::AnyValidZombieAtLocation() */

void __thiscall PlantCracker::AnyValidZombieAtLocation(PlantCracker *this)

{
  byte bVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  FindSameLocationValidZombie(this,(vector *)avStack_20);
  bVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::UpdateActions() */

void __thiscall PlantCracker::UpdateActions(PlantCracker *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  long *plVar3;
  PlantAnimRig *pPVar4;
  code *pcVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if ((iVar2 == 1) && (cVar1 = AnyValidZombieAtLocation(this), cVar1 != '\0')) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar5 = *(code **)(*plVar3 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar5)(plVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoNormalExplode() */

void __thiscall PlantCracker::DoNormalExplode(PlantCracker *this)

{
  char *pcVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Cracker_Attack_1");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  FindSameLocationValidZombie(this,(vector *)avStack_20);
  DoDamage(this,avStack_20,0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoPlantFoodExplode(Sexy::Point) */

void __thiscall PlantCracker::DoPlantFoodExplode(PlantCracker *this,int *param_2)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  FindLocationValidZombie((vector *)this,(int)avStack_20,*param_2);
  DoDamage(this,avStack_20,2);
  FindLocationValidGridItemAndDamage(this,*param_2,param_2[1]);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::OnAnimCommand(std::string const&, std::string const&) */

void PlantCracker::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  string asStack_18 [8];
  Point aPStack_10 [8];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"attack_bomb");
  if (bVar1) {
    param_1[0x30] = (string)0x0;
    DoNormalExplode((PlantCracker *)param_1);
  }
  else {
    lVar4 = FUN_05474374(param_2,"plantfood_bomb",0);
    if (lVar4 == -1) {
      bVar1 = std::operator==(param_2,"sound_action");
      if (bVar1) {
        uVar3 = PlantFramework::Rand((PlantFramework *)param_1,2);
        if ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) == 1) {
          pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar5,"Play_Plant_Cracker_PlantFood_Attack_1");
        }
        else {
          pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar5,"Play_Plant_Cracker_PlantFood_Attack_2");
        }
      }
    }
    else {
      FUN_05475ffc(asStack_18,param_2,0xe,0xffffffffffffffff);
      pcVar5 = (char *)FUN_0547429c(asStack_18);
      iVar2 = atoi(pcVar5);
      if (iVar2 + -1 == 0) {
        PlaySmallCrackerEffect((PlantCracker *)param_1);
      }
      iVar2 = iVar2 + -1 + *(int *)(*(long *)(param_1 + 0x10) + 0x114);
      if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= iVar2) {
        param_1[0x28] = (string)0x1;
        uVar6 = PlantFramework::OnAnimCommand(param_1,param_2);
        uVar6 = uVar6 & 0xffffffff;
        std::string::~string(asStack_18);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
        goto LAB_040a63dc;
      }
      Sexy::Point::Point(aPStack_10,iVar2,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
      DoPlantFoodExplode((PlantCracker *)param_1,aPStack_10);
      std::string::~string(asStack_18);
    }
  }
  uVar6 = ___stack_chk_guard;
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
LAB_040a63dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCracker::DoCrackerPieceExplode(Sexy::Point&) */

void __thiscall PlantCracker::DoCrackerPieceExplode(PlantCracker *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  GridItemPlantCrackerFlower *this_00;
  GridItemPlantCrackerFlowerProps *pGVar6;
  Board *this_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_Plant_Cracker_Attack_2");
  iVar1 = FUN_040a0ca0(*(undefined8 *)(this + 0x10));
  if (iVar1 == 5) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)avStack_20,"PlantCrackerflowerAvatar");
    iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    lVar5 = Board::AddGridItem(this_01,(string *)avStack_20,iVar1,iVar2,1);
    std::string::~string((string *)avStack_20);
    nop();
    uVar3 = FUN_040a0ba4(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
    FUN_040a0ba8(lVar5 + 0x24,uVar3);
    nop();
    pGVar6 = GridItem::GetProps<GridItemPlantCrackerFlowerProps>();
    if (pGVar6 != (GridItemPlantCrackerFlowerProps *)0x0) {
      GridItemPlantCrackerFlower::SetSplashDamageProps
                (this_00,*(float *)(pGVar6 + 0xf4),*(float *)(pGVar6 + 0xf0));
      GridItemPlantCrackerFlower::SetShrapnelProps
                (this_00,*(float *)(pGVar6 + 0xec),*(float *)(pGVar6 + 0xe8));
    }
    GridItemMagichat::SetLevel((GridItemMagichat *)this_00,2);
    GridItemPlantCrackerFlower::setState(this_00,3);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  FindLocationValidZombie((vector *)this,(int)avStack_20,*(int *)param_1);
  DoDamage(this,avStack_20,1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

