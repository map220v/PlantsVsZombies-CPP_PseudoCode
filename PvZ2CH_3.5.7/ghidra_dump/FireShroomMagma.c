// Class: FireShroomMagma


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FireShroomMagma::takeEffect() */

void __thiscall FireShroomMagma::takeEffect(FireShroomMagma *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_30,local_48,local_44,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if (((pZVar4 != (Zombie *)0x0) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) {
      (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,this + 0x1b0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FireShroomMagma::CalcRenderOrder() const */

void __thiscall FireShroomMagma::CalcRenderOrder(FireShroomMagma *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to FireShroomMagma::CalcRenderOrder() const */

void __thiscall FireShroomMagma::CalcRenderOrder(FireShroomMagma *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FireShroomMagma::StaticClassInit() */

void FireShroomMagma::StaticClassInit(void)

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
    std::string::string(asStack_10,"FireShroomMagma");
    (*pcVar2)(plVar1,asStack_10,FUN_04219f3c,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FireShroomMagma::StaticGetClass() */

long * FireShroomMagma::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FireShroomMagma",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FireShroomMagma::GetClass() const */

long * FireShroomMagma::GetClass(void)

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
  (*pcVar3)(plVar1,"FireShroomMagma",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FireShroomMagma::FireShroomMagma() */

void __thiscall FireShroomMagma::FireShroomMagma(FireShroomMagma *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0680dce0;
  *(undefined ***)(this + 0x10) = &PTR__FireShroomMagma_0680df98;
  *(undefined4 *)(this + 0x1ac) = 0x40800000;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x1b0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x210) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x214) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  return;
}


/* FireShroomMagma::StaticNew() */

FireShroomMagma * FireShroomMagma::StaticNew(void)

{
  FireShroomMagma *this;
  
  this = ::operator_new(0x220);
  FireShroomMagma(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FireShroomMagma::setState(FireShroomMagmaState) */

void __thiscall FireShroomMagma::setState(FireShroomMagma *this,int param_2)

{
  PopAnimRig *pPVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1a8) = param_2;
  if (param_2 == 3) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_68,
               (string *)aRStack_60);
    PopAnimRig::PlayAndStop
              (pPVar1,asStack_58,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string((string *)aRStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  else if (param_2 == 4) {
    (**(code **)(*(long *)this + 0x48))();
  }
  else if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"loop1");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x210) = fVar2 + *(float *)(this + 0x1ac);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FireShroomMagma::onAnimationDone(std::string const&) */

void __thiscall FireShroomMagma::onAnimationDone(FireShroomMagma *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"spwan");
  if (bVar1) {
    setState(this,2);
    return;
  }
  bVar1 = std::operator==(param_1,"end");
  if (!bVar1) {
    return;
  }
  setState(this,4);
  return;
}


/* FireShroomMagma::~FireShroomMagma() */

void __thiscall FireShroomMagma::~FireShroomMagma(FireShroomMagma *this)

{
  *(undefined ***)this = &PTR_GetClass_0680dce0;
  *(undefined ***)(this + 0x10) = &PTR__FireShroomMagma_0680df98;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to FireShroomMagma::~FireShroomMagma() */

void __thiscall FireShroomMagma::~FireShroomMagma(FireShroomMagma *this)

{
  ~FireShroomMagma(this + -0x10);
  return;
}


/* FireShroomMagma::~FireShroomMagma() */

void __thiscall FireShroomMagma::~FireShroomMagma(FireShroomMagma *this)

{
  ~FireShroomMagma(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FireShroomMagma::~FireShroomMagma() */

void __thiscall FireShroomMagma::~FireShroomMagma(FireShroomMagma *this)

{
  ~FireShroomMagma(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FireShroomMagma::InitFire(DamageInfo const&) */

void __thiscall FireShroomMagma::InitFire(FireShroomMagma *this,DamageInfo *param_1)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::operator=((DamageInfo *)(this + 0x1b0),param_1);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x214) = uVar2;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_58,"spwan");
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


/* FireShroomMagma::onUpdate() */

void __thiscall FireShroomMagma::onUpdate(FireShroomMagma *this)

{
  int iVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x214) < fVar2) {
    takeEffect(this);
    fVar2 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x1a8);
    *(float *)(this + 0x214) = fVar2 + 1.0;
  }
  else {
    iVar1 = *(int *)(this + 0x1a8);
  }
  if ((iVar1 == 2) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x210) < fVar2)) {
    setState(this,3);
    return;
  }
  return;
}

