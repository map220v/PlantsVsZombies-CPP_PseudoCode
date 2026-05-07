// Class: StrawburstJam


/* StrawburstJam::onDestroy() */

void __thiscall StrawburstJam::onDestroy(StrawburstJam *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1b8);
  GridItem::onDestroy((GridItem *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* StrawburstJam::CalcRenderOrder() const */

void __thiscall StrawburstJam::CalcRenderOrder(StrawburstJam *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to StrawburstJam::CalcRenderOrder() const */

void __thiscall StrawburstJam::CalcRenderOrder(StrawburstJam *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstJam::StaticClassInit() */

void StrawburstJam::StaticClassInit(void)

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
    std::string::string(asStack_10,"StrawburstJam");
    (*pcVar2)(plVar1,asStack_10,FUN_0426b5c0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StrawburstJam::StaticGetClass() */

long * StrawburstJam::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstJam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstJam::GetClass() const */

long * StrawburstJam::GetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstJam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstJam::~StrawburstJam() */

void __thiscall StrawburstJam::~StrawburstJam(StrawburstJam *this)

{
  *(undefined ***)this = &PTR_GetClass_0681f930;
  *(undefined ***)(this + 0x10) = &PTR__StrawburstJam_0681fbe8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to StrawburstJam::~StrawburstJam() */

void __thiscall StrawburstJam::~StrawburstJam(StrawburstJam *this)

{
  ~StrawburstJam(this + -0x10);
  return;
}


/* StrawburstJam::~StrawburstJam() */

void __thiscall StrawburstJam::~StrawburstJam(StrawburstJam *this)

{
  ~StrawburstJam(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StrawburstJam::~StrawburstJam() */

void __thiscall StrawburstJam::~StrawburstJam(StrawburstJam *this)

{
  ~StrawburstJam(this + -0x10);
  return;
}


/* StrawburstJam::StrawburstJam() */

void __thiscall StrawburstJam::StrawburstJam(StrawburstJam *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_0681f930;
  *(undefined ***)(this + 0x10) = &PTR__StrawburstJam_0681fbe8;
  *(undefined4 *)(this + 0x1ac) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b4) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  return;
}


/* StrawburstJam::StaticNew() */

StrawburstJam * StrawburstJam::StaticNew(void)

{
  StrawburstJam *this;
  
  this = ::operator_new(0x1c0);
  StrawburstJam(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstJam::isZombieTypeBlacklisted(std::string const&) */

void __thiscall StrawburstJam::isZombieTypeBlacklisted(StrawburstJam *this,string *param_1)

{
  char cVar1;
  GridItemStrawburstJamProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemStrawburstJamProps>();
  local_18 = FUN_0426b9ac(*(undefined8 *)(pGVar2 + 0xd0));
  local_10 = FUN_0426b9fc(*(undefined8 *)(pGVar2 + 0xd8));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_0426c268:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_0426c268;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstJam::takeEffect() */

void __thiscall StrawburstJam::takeEffect(StrawburstJam *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_04267b80(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_04267b84(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
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
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = RealObject::IsOnOpposingTeam(*puVar5,1);
    if (cVar2 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar2 = isZombieTypeBlacklisted(this,(string *)(lVar6 + 8));
      if ((((cVar2 == '\0') && (cVar2 = Zombie::IsOnGround(this_00), cVar2 != '\0')) &&
          (cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0')) &&
         (((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))) {
        Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x28,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstJam::setState(StrawburstJamState) */

void __thiscall StrawburstJam::setState(StrawburstJam *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string *__n_00;
  float fVar2;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1b0) = param_2;
  if (param_2 == 3) {
    __n_00 = (string *)aRStack_58;
    std::string::string(asStack_78,"re1_off");
    nop();
    if (*(int *)(this + 0x1a8) == 2) {
      std::string::append(asStack_78,"re2_off",(size_t)__n_00);
    }
    else if (*(int *)(this + 0x1a8) == 3) {
      std::string::append(asStack_78,"re3_off",(size_t)__n_00);
    }
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,
               (RtId *)asStack_60,(string *)aRStack_58);
    PopAnimRig::PlayAndStop
              (pPVar1,asStack_78,0,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
  }
  else if (param_2 == 4) {
    (**(code **)(*(long *)this + 0x48))();
  }
  else if (param_2 == 2) {
    __n = aRStack_58;
    std::string::string(asStack_60,"re1");
    nop();
    if (*(int *)(this + 0x1a8) == 2) {
      std::string::append(asStack_60,"re2",(size_t)__n);
    }
    else if (*(int *)(this + 0x1a8) == 3) {
      std::string::append(asStack_60,"re3",(size_t)__n);
    }
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_60,0,aDStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1b4) = fVar2 + *(float *)(this + 0x1ac);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StrawburstJam::onAnimationDone(std::string const&) */

void __thiscall StrawburstJam::onAnimationDone(StrawburstJam *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"re1_on");
  if (((bVar1) || (bVar1 = std::operator==(param_1,"re2_on"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"re3_on"), bVar1)) {
    setState(this,2);
    return;
  }
  bVar1 = std::operator==(param_1,"re1_off");
  if (((!bVar1) && (bVar1 = std::operator==(param_1,"re2_off"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"re3_off"), !bVar1)) {
    return;
  }
  setState(this,4);
  return;
}


/* StrawburstJam::RefreshJam() */

void __thiscall StrawburstJam::RefreshJam(StrawburstJam *this)

{
  if (*(int *)(this + 0x1b0) != 4) {
    setState(this,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstJam::InitJam(float, int) */

void __thiscall StrawburstJam::InitJam(StrawburstJam *this,float param_1,int param_2)

{
  PopAnimRig *pPVar1;
  string *__n;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1a8) = param_2;
  *(float *)(this + 0x1ac) = param_1;
  __n = asStack_58;
  std::string::string(asStack_78,"re1_on");
  nop();
  if (*(int *)(this + 0x1a8) == 2) {
    std::string::append(asStack_78,"re2_on",(size_t)__n);
  }
  else if (*(int *)(this + 0x1a8) == 3) {
    std::string::append(asStack_78,"re3_on",(size_t)__n);
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_78,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  setState(this,1);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StrawburstJam::onUpdate() */

void __thiscall StrawburstJam::onUpdate(StrawburstJam *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(int *)(this + 0x1b0) == 2) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1b4) < fVar1)) {
    setState(this,3);
  }
  takeEffect(this);
  return;
}

