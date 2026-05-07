// Class: GridItemOliveOil


/* GridItemOliveOil::CalcRenderOrder() const */

void __thiscall GridItemOliveOil::CalcRenderOrder(GridItemOliveOil *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemOliveOil::CalcRenderOrder() const */

void __thiscall GridItemOliveOil::CalcRenderOrder(GridItemOliveOil *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemOliveOil::~GridItemOliveOil() */

void __thiscall GridItemOliveOil::~GridItemOliveOil(GridItemOliveOil *this)

{
  *(undefined ***)this = &PTR_GetClass_0681c720;
  *(undefined ***)(this + 0x10) = &PTR__GridItemOliveOil_0681c9d8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemOliveOil::~GridItemOliveOil() */

void __thiscall GridItemOliveOil::~GridItemOliveOil(GridItemOliveOil *this)

{
  ~GridItemOliveOil(this + -0x10);
  return;
}


/* GridItemOliveOil::~GridItemOliveOil() */

void __thiscall GridItemOliveOil::~GridItemOliveOil(GridItemOliveOil *this)

{
  ~GridItemOliveOil(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemOliveOil::~GridItemOliveOil() */

void __thiscall GridItemOliveOil::~GridItemOliveOil(GridItemOliveOil *this)

{
  ~GridItemOliveOil(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOil::StaticClassInit() */

void GridItemOliveOil::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemOliveOil");
    (*pcVar2)(plVar1,asStack_10,FUN_0425dd04,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOliveOil::StaticGetClass() */

long * GridItemOliveOil::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOliveOil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOliveOil::GetClass() const */

long * GridItemOliveOil::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOliveOil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOliveOil::GridItemOliveOil() */

void __thiscall GridItemOliveOil::GridItemOliveOil(GridItemOliveOil *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_0681c720;
  *(undefined ***)(this + 0x10) = &PTR__GridItemOliveOil_0681c9d8;
  uVar1 = PVZ_EOT();
  this[0x1b8] = (GridItemOliveOil)0x0;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1b4) = uVar1;
  return;
}


/* GridItemOliveOil::StaticNew() */

GridItemOliveOil * GridItemOliveOil::StaticNew(void)

{
  GridItemOliveOil *this;
  
  this = ::operator_new(0x1c0);
  GridItemOliveOil(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOil::SetState(GridItemOliveOilState) */

void __thiscall GridItemOliveOil::SetState(GridItemOliveOil *this,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  GridItemOliveOilProps *pGVar4;
  OliveOilFire *pOVar5;
  PopAnimRig *pPVar6;
  Board *this_00;
  float fVar7;
  DamageInfo *pDVar8;
  int local_e8;
  int local_e4;
  RtWeakPtr<Sexy::SoundResource> aRStack_e0 [8];
  Point aPStack_d8 [8];
  undefined8 local_d0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x1ac) = param_2;
  if (param_2 == 4) {
    puVar3 = local_68;
    std::string::string((string *)aRStack_e0,"you1_disappear");
    nop();
    if (*(int *)(this + 0x1a8) == 2) {
      std::string::append((string *)aRStack_e0,"you2_disappear",(size_t)puVar3);
    }
    else if (*(int *)(this + 0x1a8) == 0) {
      std::string::append((string *)aRStack_e0,"you3_disappear",(size_t)puVar3);
    }
  }
  else {
    if (param_2 != 5) {
      if (param_2 == 3) {
        fVar7 = (float)PVZ_T();
        *(float *)(this + 0x1b4) = fVar7 + 1.3;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
        GridItem::GetGridLocation();
        EntityFinder::GetEntitiesAtGridSquare(avStack_c8,4,local_e8,local_e4);
        local_d0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_c8);
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_c8);
        while( true ) {
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_d0,(__normal_iterator *)local_68);
          if (!bVar1) break;
          puVar3 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
          pOVar5 = Sexy::RtObject::Cast<OliveOilFire>((RtObject *)*puVar3);
          if (pOVar5 != (OliveOilFire *)0x0) {
            OliveOilFire::RefreshFire(pOVar5);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
            goto LAB_042601ac;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
        }
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_d0,"olive_oil_fire");
        Board::AddGridItem(this_00,(string *)&local_d0,local_e8,local_e4,1);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_e0,(RtWeakPtrBase *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        std::string::~string((string *)&local_d0);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_e0);
        if (cVar2 != '\0') {
          pGVar4 = GridItem::GetProps<GridItemOliveOilProps>();
                    /* WARNING: Load size is inaccurate */
          pDVar8._0_4_ = *(DamageInfo **)(pGVar4 + 0xd0);
          pOVar5 = (OliveOilFire *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
          Sexy::Point::Point(aPStack_d8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar8._0_4_,(undefined4)local_d0,local_d0._4_4_,
                     (RtWeakPtr<Sexy::ResourceInfo> *)local_68,0x400,0,aPStack_d8,0);
          pGVar4 = GridItem::GetProps<GridItemOliveOilProps>();
          OliveOilFire::InitFire(pOVar5,(DamageInfo *)local_68,*(float *)(pGVar4 + 0xd4));
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0)
        ;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
      }
      goto LAB_042601ac;
    }
    puVar3 = local_68;
    std::string::string((string *)aRStack_e0,"you1_onfire");
    nop();
    if (*(int *)(this + 0x1a8) == 2) {
      std::string::append((string *)aRStack_e0,"you2_onfire",(size_t)puVar3);
    }
    else if (*(int *)(this + 0x1a8) == 0) {
      std::string::append((string *)aRStack_e0,"you3_onfire",(size_t)puVar3);
    }
  }
  GridItemAnimation::GetAnimRig();
  pPVar6 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_d8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_d0);
  std::string::string((string *)local_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
             (RtId *)avStack_c8,(string *)local_68);
  PopAnimRig::PlayAndStop(pPVar6,(string *)aRStack_e0,0,aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b0);
  std::string::~string((string *)local_68);
  nop();
  Sexy::RtId::~RtId((RtId *)avStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_d8);
  std::string::~string((string *)aRStack_e0);
LAB_042601ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOliveOil::TakeFire() */

bool __thiscall GridItemOliveOil::TakeFire(GridItemOliveOil *this)

{
  if (*(int *)(this + 0x1ac) != 2) {
    return 2 < *(int *)(this + 0x1ac);
  }
  SetState(this,3);
  return 2 < *(int *)(this + 0x1ac);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOil::SetInfo(GridItemOliveOilLabel, bool) */

void __thiscall
GridItemOliveOil::SetInfo(GridItemOliveOil *this,undefined4 param_2,GridItemOliveOil param_3)

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
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = param_2;
  this[0x1b8] = param_3;
  __n = asStack_58;
  std::string::string(asStack_78,"you1_baokai");
  nop();
  if (*(int *)(this + 0x1a8) == 2) {
    std::string::append(asStack_78,"you2_baokai",(size_t)__n);
  }
  else if (*(int *)(this + 0x1a8) == 0) {
    std::string::append(asStack_78,"you3_baokai",(size_t)__n);
  }
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
  SetState(this,1);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOliveOil::onAnimationDone(std::string const&) */

void __thiscall GridItemOliveOil::onAnimationDone(GridItemOliveOil *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  float fVar3;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"you1_baokai");
  if (((bVar1) || (bVar1 = std::operator==(param_1,"you2_baokai"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"you3_baokai"), bVar1)) {
    SetState(this,2);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1b0) = fVar3 + 4.0;
    __n = aRStack_40;
    std::string::string(asStack_48,"you1_loop");
    nop();
    if (*(int *)(this + 0x1a8) == 2) {
      std::string::append(asStack_48,"you2_loop",(size_t)__n);
    }
    else if (*(int *)(this + 0x1a8) == 0) {
      std::string::append(asStack_48,"you3_loop",(size_t)__n);
    }
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (this[0x1b8] != (GridItemOliveOil)0x0) {
      TakeFire(this);
    }
    std::string::~string(asStack_48);
  }
  else {
    bVar1 = std::operator==(param_1,"you1_disappear");
    if ((((bVar1) || (bVar1 = std::operator==(param_1,"you2_disappear"), bVar1)) ||
        ((bVar1 = std::operator==(param_1,"you3_disappear"), bVar1 ||
         ((bVar1 = std::operator==(param_1,"you1_onfire"), bVar1 ||
          (bVar1 = std::operator==(param_1,"you2_onfire"), bVar1)))))) ||
       (bVar1 = std::operator==(param_1,"you3_onfire"), bVar1)) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemOliveOil::onUpdate() */

void __thiscall GridItemOliveOil::onUpdate(GridItemOliveOil *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x1b0) < fVar1) {
      SetState(this,4);
      return;
    }
  }
  else if ((*(int *)(this + 0x1ac) == 3) &&
          (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1b4) < fVar1)) {
    SetState(this,5);
    return;
  }
  return;
}


/* GridItemOliveOil::onDestroy() */

void __thiscall GridItemOliveOil::onDestroy(GridItemOliveOil *this)

{
  SetState(this,6);
  MessageRouter::Post<GridItemOliveOil*,GridItemOliveOil*>
            ((MessageRouter *)gMessageRouter,Message::OnOliveOilDestroy,this);
  GridItem::onDestroy((GridItem *)this);
  return;
}

