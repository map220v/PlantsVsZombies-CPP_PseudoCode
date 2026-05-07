// Class: CardGameGridItemFireWall


/* CardGameGridItemFireWall::CalcRenderOrder() const */

void __thiscall CardGameGridItemFireWall::CalcRenderOrder(CardGameGridItemFireWall *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to CardGameGridItemFireWall::CalcRenderOrder() const */

void __thiscall CardGameGridItemFireWall::CalcRenderOrder(CardGameGridItemFireWall *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* CardGameGridItemFireWall::~CardGameGridItemFireWall() */

void __thiscall CardGameGridItemFireWall::~CardGameGridItemFireWall(CardGameGridItemFireWall *this)

{
  *(undefined ***)this = &PTR_GetClass_06668020;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemFireWall_066682d8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to CardGameGridItemFireWall::~CardGameGridItemFireWall() */

void __thiscall CardGameGridItemFireWall::~CardGameGridItemFireWall(CardGameGridItemFireWall *this)

{
  ~CardGameGridItemFireWall(this + -0x10);
  return;
}


/* CardGameGridItemFireWall::~CardGameGridItemFireWall() */

void __thiscall CardGameGridItemFireWall::~CardGameGridItemFireWall(CardGameGridItemFireWall *this)

{
  ~CardGameGridItemFireWall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameGridItemFireWall::~CardGameGridItemFireWall() */

void __thiscall CardGameGridItemFireWall::~CardGameGridItemFireWall(CardGameGridItemFireWall *this)

{
  ~CardGameGridItemFireWall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemFireWall::StaticClassInit() */

void CardGameGridItemFireWall::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemFireWall");
    (*pcVar2)(plVar1,asStack_10,FUN_03612fbc,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemFireWall::StaticGetClass() */

long * CardGameGridItemFireWall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameGridItemFireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemFireWall::GetClass() const */

long * CardGameGridItemFireWall::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameGridItemFireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemFireWall::CardGameGridItemFireWall() */

void __thiscall CardGameGridItemFireWall::CardGameGridItemFireWall(CardGameGridItemFireWall *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06668020;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemFireWall_066682d8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* CardGameGridItemFireWall::StaticNew() */

CardGameGridItemFireWall * CardGameGridItemFireWall::StaticNew(void)

{
  CardGameGridItemFireWall *this;
  
  this = ::operator_new(0x1b0);
  CardGameGridItemFireWall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemFireWall::takeEffect() */

void CardGameGridItemFireWall::takeEffect(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  code *pcVar7;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets(aIStack_90,local_b8,local_b4,1,1);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0)
      ;
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      if (((pZVar5 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(pZVar5,2), cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), cVar2 == '\0')) {
        cVar2 = (**(code **)(*(long *)pZVar5 + 0x330))(pZVar5);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*(long *)pZVar5 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x43c80000,local_98,local_94,aDStack_68,0x400,aPStack_a0,0);
          (*pcVar7)(pZVar5,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
      if (((pGVar6 != (GridItem *)0x0) && (cVar2 = RealObject::IsOnTeam(pGVar6,2), cVar2 != '\0'))
         && (cVar2 = (**(code **)(*(long *)pGVar6 + 0x1f8))(pGVar6), cVar2 != '\0')) {
        pcVar7 = *(code **)(*(long *)pGVar6 + 0x110);
        Sexy::Point::Point(aPStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x43c80000,local_98,local_94,aDStack_68,0x400,aPStack_a0,0);
        (*pcVar7)(pGVar6,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemFireWall::onAnimationDone(std::string const&) */

void __thiscall
CardGameGridItemFireWall::onAnimationDone(CardGameGridItemFireWall *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"fire_on");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"fire_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1a8) = fVar3 + 1.0;
    takeEffect();
  }
  else {
    bVar1 = std::operator==(param_1,"fire_off");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemFireWall::onGridItemInitialize() */

void __thiscall CardGameGridItemFireWall::onGridItemInitialize(CardGameGridItemFireWall *this)

{
  PopAnimRig *pPVar1;
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
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_58,"fire_on");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemFireWall::onUpdate() */

void __thiscall CardGameGridItemFireWall::onUpdate(CardGameGridItemFireWall *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x1a8) = uVar3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"fire_off");
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
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

