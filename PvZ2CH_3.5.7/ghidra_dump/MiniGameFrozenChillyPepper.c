// Class: MiniGameFrozenChillyPepper


/* MiniGameFrozenChillyPepper::CalcRenderOrder() const */

void __thiscall MiniGameFrozenChillyPepper::CalcRenderOrder(MiniGameFrozenChillyPepper *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to MiniGameFrozenChillyPepper::CalcRenderOrder() const */

void __thiscall MiniGameFrozenChillyPepper::CalcRenderOrder(MiniGameFrozenChillyPepper *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper() */

void __thiscall
MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper(MiniGameFrozenChillyPepper *this)

{
  *(undefined ***)this = &PTR_GetClass_066af710;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameFrozenChillyPepper_066af9c8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper() */

void __thiscall
MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper(MiniGameFrozenChillyPepper *this)

{
  ~MiniGameFrozenChillyPepper(this + -0x10);
  return;
}


/* MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper() */

void __thiscall
MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper(MiniGameFrozenChillyPepper *this)

{
  ~MiniGameFrozenChillyPepper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper() */

void __thiscall
MiniGameFrozenChillyPepper::~MiniGameFrozenChillyPepper(MiniGameFrozenChillyPepper *this)

{
  ~MiniGameFrozenChillyPepper(this + -0x10);
  return;
}


/* MiniGameFrozenChillyPepper::MiniGameFrozenChillyPepper() */

void __thiscall
MiniGameFrozenChillyPepper::MiniGameFrozenChillyPepper(MiniGameFrozenChillyPepper *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_066af710;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameFrozenChillyPepper_066af9c8;
  return;
}


/* MiniGameFrozenChillyPepper::StaticNew() */

MiniGameFrozenChillyPepper * MiniGameFrozenChillyPepper::StaticNew(void)

{
  MiniGameFrozenChillyPepper *this;
  
  this = ::operator_new(0x1b0);
  MiniGameFrozenChillyPepper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenChillyPepper::StaticClassInit() */

void MiniGameFrozenChillyPepper::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameFrozenChillyPepper");
    (*pcVar2)(plVar1,asStack_10,FUN_03894d6c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameFrozenChillyPepper::StaticGetClass() */

long * MiniGameFrozenChillyPepper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameFrozenChillyPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameFrozenChillyPepper::GetClass() const */

long * MiniGameFrozenChillyPepper::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameFrozenChillyPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameFrozenChillyPepper::onAnimationDone(std::string const&) */

void __thiscall
MiniGameFrozenChillyPepper::onAnimationDone(MiniGameFrozenChillyPepper *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenChillyPepper::takeEffect() */

void __thiscall MiniGameFrozenChillyPepper::takeEffect(MiniGameFrozenChillyPepper *this)

{
  char *__s;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  float fVar9;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [16];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar5 = 0;
  while (iVar4 = BoardConstants::NUMBER_OF_COLUMNS(), iVar5 < iVar4) {
    Sexy::Point::Point(aPStack_20,iVar5,local_44);
    BoardTransforms::GridToBoardSpace(aPStack_20);
    uVar2 = Board::MakeRenderOrder(0x65130,local_44,0);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_COLD_SNAPDRAGON_ICE");
    GetPAMByName(asStack_30);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
    std::string::~string(asStack_30);
    nop();
    iVar4 = local_38._4_4_;
    fVar9 = (float)(int)local_38;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_20,fVar9,(float)(iVar4 - iVar3 / 2),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aPStack_20,-1);
    FUN_03894884(this_00 + 0x1c,uVar2);
    Effect_PopAnim::SetCentered(this_00,true);
    __s = "animation";
    if (local_48 <= iVar5) {
      __s = "animation2";
    }
    std::string::string((string *)aPStack_20,__s);
    Effect_PopAnim::PlaySingleAnimation(this_00,aPStack_20,0);
    std::string::~string((string *)aPStack_20);
    nop();
    iVar5 = iVar5 + 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
  iVar5 = FUN_0389488c(*(undefined4 *)(this + 0x134));
  Sexy::Insets::Insets((Insets *)asStack_30,0,iVar5,9,1);
  EntityFinder::GetEntitiesInGridSquares(aPStack_20,2,asStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aPStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aPStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (((RtObject *)*puVar7 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar7), bVar1)) {
      pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar8,1,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenChillyPepper::onGridItemInitialize() */

void __thiscall MiniGameFrozenChillyPepper::onGridItemInitialize(MiniGameFrozenChillyPepper *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar2 + 0.9;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_58,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameFrozenChillyPepper::onUpdate() */

void __thiscall MiniGameFrozenChillyPepper::onUpdate(MiniGameFrozenChillyPepper *this)

{
  float fVar1;
  undefined4 uVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1a8)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar2;
  takeEffect(this);
  return;
}

