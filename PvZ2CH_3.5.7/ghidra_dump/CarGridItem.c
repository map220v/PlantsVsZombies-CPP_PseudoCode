// Class: CarGridItem


/* CarGridItem::onCanMoveFlag(bool, CarGridItem*) */

void __thiscall CarGridItem::onCanMoveFlag(CarGridItem *this,bool param_1,CarGridItem *param_2)

{
  if ((this == param_2) <= param_1) {
    this[0x1c4] = (CarGridItem)param_1;
  }
  return;
}


/* CarGridItem::OnCarMoveStarted(CarGridItem*) */

void __thiscall CarGridItem::OnCarMoveStarted(CarGridItem *this,CarGridItem *param_1)

{
  if (this != param_1) {
    this[0x1c4] = (CarGridItem)0x0;
  }
  return;
}


/* CarGridItem::onCancelEvent() */

void __thiscall CarGridItem::onCancelEvent(CarGridItem *this)

{
  *(undefined8 *)(this + 0x1c8) = 0;
  this[0x1e8] = (CarGridItem)0x0;
  return;
}


/* CarGridItem::~CarGridItem() */

void __thiscall CarGridItem::~CarGridItem(CarGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067ae210;
  *(undefined ***)(this + 0x10) = &PTR__CarGridItem_067ae4c8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to CarGridItem::~CarGridItem() */

void __thiscall CarGridItem::~CarGridItem(CarGridItem *this)

{
  ~CarGridItem(this + -0x10);
  return;
}


/* CarGridItem::~CarGridItem() */

void __thiscall CarGridItem::~CarGridItem(CarGridItem *this)

{
  ~CarGridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarGridItem::~CarGridItem() */

void __thiscall CarGridItem::~CarGridItem(CarGridItem *this)

{
  ~CarGridItem(this + -0x10);
  return;
}


/* CarGridItem::CalcRenderOrder() const */

void __thiscall CarGridItem::CalcRenderOrder(CarGridItem *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03fd267c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to CarGridItem::CalcRenderOrder() const */

void __thiscall CarGridItem::CalcRenderOrder(CarGridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* CarGridItem::CarGridItem() */

void __thiscall CarGridItem::CarGridItem(CarGridItem *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067ae210;
  *(undefined ***)(this + 0x10) = &PTR__CarGridItem_067ae4c8;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  DVec3::DVec3((DVec3 *)(this + 0x1b4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d0));
  return;
}


/* CarGridItem::StaticNew() */

CarGridItem * CarGridItem::StaticNew(void)

{
  CarGridItem *this;
  
  this = ::operator_new(0x1f0);
  CarGridItem(this);
  return this;
}


/* CarGridItem::calcCollisionRect() */

void CarGridItem::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  long in_x8;
  
  GridItemAnimation::calcCollisionRect();
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  if (*(int *)(in_x0 + 0x1dc) != 1) {
    if (*(int *)(in_x0 + 0x1dc) == 0) {
      *(int *)(in_x8 + 0xc) =
           (int)((float)*(int *)(in_x8 + 0xc) + (float)(*(int *)(in_x0 + 0x1e0) + -1) * (float)iVar2
                );
    }
    return;
  }
  *(int *)(in_x8 + 8) =
       (int)((float)*(int *)(in_x8 + 8) + (float)(*(int *)(in_x0 + 0x1e0) + -1) * (float)iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::StaticClassInit() */

void CarGridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarGridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd3608,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarGridItem::StaticGetClass() */

long * CarGridItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CarGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarGridItem::GetClass() const */

long * CarGridItem::GetClass(void)

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
  (*pcVar3)(plVar1,"CarGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarGridItem::isDoneMoving() */

bool __thiscall CarGridItem::isDoneMoving(CarGridItem *this)

{
  return *(int *)(this + 0x1e4) == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::calcDodoRiderNextPosition(int) */

void __thiscall CarGridItem::calcDodoRiderNextPosition(CarGridItem *this,int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  fVar1 = pfVar3[2];
  DVec3::DVec3((DVec3 *)&local_28);
  switch(param_1) {
  case 0:
    local_28 = fVar4;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = fVar5 - (float)iVar2;
    local_20 = fVar1;
    break;
  case 1:
    local_28 = fVar4;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = (float)iVar2 + fVar5;
    local_20 = fVar1;
    break;
  case 2:
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = fVar4 - (float)iVar2;
    fStack_24 = fVar5;
    local_20 = fVar1;
    break;
  case 3:
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = (float)iVar2 + fVar4;
    fStack_24 = fVar5;
    local_20 = fVar1;
  }
  local_18 = CONCAT44(fStack_24,local_28);
  local_10 = local_20;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28,fStack_24,local_20);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::SetCarProps() */

void __thiscall CarGridItem::SetCarProps(CarGridItem *this)

{
  string *psVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  char *__s;
  DummyInit *local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (lVar3 == 0) goto LAB_03fd458c;
  psVar1 = (string *)(lVar3 + 8);
  bVar2 = std::operator==(psVar1,"vertical_2");
  if (bVar2) {
    *(undefined4 *)(this + 0x1e0) = 2;
    *(undefined4 *)(this + 0x1dc) = 0;
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string((string *)aRStack_40,"car03");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
LAB_03fd4618:
    local_58 = aDStack_38;
    PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,local_58);
    std::string::~string((string *)aRStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else {
    bVar2 = std::operator==(psVar1,"parallel_2");
    if (bVar2) {
      *(undefined4 *)(this + 0x1dc) = 1;
      *(undefined4 *)(this + 0x1e0) = 2;
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "car04";
    }
    else {
      bVar2 = std::operator==(psVar1,"vertical_1");
      if (bVar2) {
        *(undefined4 *)(this + 0x1e0) = 1;
        *(undefined4 *)(this + 0x1dc) = 0;
        GridItemAnimation::GetAnimRig();
        pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        std::string::string((string *)aRStack_40,"car01");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        goto LAB_03fd4618;
      }
      bVar2 = std::operator==(psVar1,"parallel_3");
      if (!bVar2) goto LAB_03fd458c;
      *(undefined4 *)(this + 0x1dc) = 1;
      *(undefined4 *)(this + 0x1e0) = 3;
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      __s = "car02";
    }
    std::string::string((string *)aRStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
    std::string::~string((string *)aRStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
LAB_03fd458c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::onGridItemInitialize() */

void __thiscall CarGridItem::onGridItemInitialize(CarGridItem *this)

{
  undefined4 uVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b4),(SexyVector3 *)aVStack_18);
  uVar1 = PVZ_EOT();
  this[0x1d8] = (CarGridItem)0x0;
  this[0x1c4] = (CarGridItem)0x1;
  this[0x1e8] = (CarGridItem)0x0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1c0) = uVar1;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  SetCarProps(this);
  RealObject::JoinTeam((RealObject *)this,1);
  *(undefined8 *)(this + 0x1c8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarGridItem::SetState(int) */

void __thiscall CarGridItem::SetState(CarGridItem *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x1e4) = param_1;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = PVZ_T();
      *(undefined4 *)(this + 0x1c0) = uVar1;
    }
    return;
  }
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::updatePosition() */

void __thiscall CarGridItem::updatePosition(CarGridItem *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  Point aPStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar3 = *(float *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (fVar3 + 0.5 <= fVar4) {
    (**(code **)(*(long *)this + 0x78))(this,this + 0x1b4);
    SetState(this,0);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar3 = (fVar3 - *(float *)(this + 0x1c0)) + (fVar3 - *(float *)(this + 0x1c0));
    DVec3::DVec3((DVec3 *)&local_18);
    local_18 = *(float *)(this + 0x1a8) +
               (*(float *)(this + 0x1b4) - *(float *)(this + 0x1a8)) * fVar3;
    local_14 = *(float *)(this + 0x1ac) +
               (*(float *)(this + 0x1b8) - *(float *)(this + 0x1ac)) * fVar3;
    local_10 = 0;
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(local_18);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(local_14);
    Sexy::Point::Point(aPStack_20,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this,aPStack_20,1);
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::registerForEvents() */

void __thiscall CarGridItem::registerForEvents(CarGridItem *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<CarGridItem,bool(CarGridItem::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<CarGridItem,void(CarGridItem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,1,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCanMoveFlag);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<bool,CarGridItem*,Sexy::CBMemberTranslatorX<CarGridItem,void(CarGridItem::*)(bool,CarGridItem*)>>
            ((MessageRouter *)puVar1,Message::CanMoveFlag,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCarMoveStarted);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<CarGridItem*,Sexy::CBMemberTranslatorX<CarGridItem,void(CarGridItem::*)(CarGridItem*)>>
            ((MessageRouter *)puVar1,Message::CarMoveStarted,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::findgridTarget(Sexy::Point) */

void __thiscall CarGridItem::findgridTarget(CarGridItem *this,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  CarGridItem *extraout_x0;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
  iVar5 = *param_2;
  iVar3 = BoardTransforms::BoardSpaceToGridY(pfVar7[1]);
  iVar6 = param_2[1];
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((iVar2 + iVar5 < iVar4) && (-1 < iVar2 + iVar5)) {
    iVar5 = BoardConstants::NUMBER_OF_ROWS();
    if ((iVar3 + iVar6 < iVar5) && (-1 < iVar3 + iVar6)) {
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar8 = (float)iVar5 * (float)*param_2 * 0.7;
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar5 = param_2[1];
      (**(code **)(*(long *)this + 0xb0))
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
      (**(code **)(*(long *)this + 0xb0))
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
      if (*param_2 < 1) {
        fVar9 = fVar8 + (float)local_20;
      }
      else {
        (**(code **)(*(long *)this + 0xb0))(&local_30,this);
        (**(code **)(*(long *)this + 0xb0))
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
        fVar9 = (float)(local_30 + local_18) + fVar8 * 0.3;
      }
      if (param_2[1] < 1) {
        fVar8 = (float)iVar6 * (float)iVar5 * 0.7 + (float)local_1c;
      }
      else {
        (**(code **)(*(long *)this + 0xb0))((Insets *)&local_30,this);
        (**(code **)(*(long *)this + 0xb0))
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
        fVar8 = (float)(local_2c + local_14) + fVar8 * 0.3;
      }
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      this = (CarGridItem *)0x0;
      Sexy::Insets::Insets
                ((Insets *)&local_30,(int)fVar9,(int)fVar8,(int)((double)iVar5 * 0.5),
                 (int)((double)iVar6 * 0.5));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
                 (Insets *)&local_30);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
      if (bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        nop();
        this = extraout_x0;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::Canmove(int) */

void __thiscall CarGridItem::Canmove(CarGridItem *this,int param_1)

{
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_18,0,0);
  switch(param_1) {
  case 0:
    local_14 = local_14 + -1;
    break;
  case 1:
    local_14 = local_14 + 1;
    break;
  case 2:
    local_18 = local_18 + -1;
    break;
  case 3:
    local_18 = local_18 + 1;
  }
  Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
  findgridTarget(this,aPStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarGridItem::onTouchEvent(Sexy::Touch const&) */

void CarGridItem::onTouchEvent(Touch *param_1)

{
  long lVar1;
  char cVar2;
  Touch TVar3;
  int iVar4;
  int iVar5;
  RtObject *this;
  BarrierGridItem *pBVar6;
  TRect<int> *this_00;
  long *in_x1;
  float fVar7;
  float fVar8;
  float in_s2;
  float fVar9;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_18;
  float fStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') {
    TVar3 = param_1[0x1c4];
    if (TVar3 == (Touch)0x0) {
      param_1[0x1d8] = (Touch)0x0;
      onCancelEvent((CarGridItem *)param_1);
      goto LAB_03fd6ae8;
    }
    if ((*(long *)(param_1 + 0x1c8) == 0) && ((int)in_x1[6] == 0)) {
      fVar7 = (float)FUN_03fd2b80((float)(int)in_x1[2]);
      fVar8 = (float)FUN_03fd2b80((float)*(int *)((long)in_x1 + 0x14));
      this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
      TVar3 = (Touch)Sexy::TRect<int>::Contains(this_00,(int)fVar7,(int)fVar8);
      if (TVar3 != (Touch)0x0) {
        lVar1 = in_x1[2];
        *(long *)(param_1 + 0x1c8) = *in_x1;
        iVar4 = FUN_03fd2b6c((int)lVar1);
        iVar5 = FUN_03fd2b6c(*(undefined4 *)((long)in_x1 + 0x14));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar4,(float)iVar5);
        param_1[0x1d8] = (Touch)0x0;
        *(ulong *)(param_1 + 0x1d0) = CONCAT44(fStack_14,local_18);
        MessageRouter::Post<bool,CarGridItem*,bool,CarGridItem*>
                  ((MessageRouter *)gMessageRouter,Message::CanMoveFlag,false,(CarGridItem *)param_1
                  );
        goto LAB_03fd6ae8;
      }
    }
    else if (*(long *)(param_1 + 0x1c8) == *in_x1) {
      iVar4 = (int)in_x1[6];
      if (iVar4 == 4) {
        TVar3 = (Touch)0x0;
        MessageRouter::Post<bool,CarGridItem*,bool,CarGridItem*>
                  ((MessageRouter *)gMessageRouter,Message::CanMoveFlag,true,(CarGridItem *)param_1)
        ;
        onCancelEvent((CarGridItem *)param_1);
        goto LAB_03fd6ae8;
      }
      if (iVar4 == 3) {
        if (param_1[0x1e8] == (Touch)0x0) {
          MessageRouter::Post<bool,CarGridItem*,bool,CarGridItem*>
                    ((MessageRouter *)gMessageRouter,Message::CanMoveFlag,true,
                     (CarGridItem *)param_1);
        }
        else {
          SetState((CarGridItem *)param_1,0);
          MessageRouter::Post((_func_void *)gMessageRouter);
        }
        TVar3 = (Touch)0x0;
        onCancelEvent((CarGridItem *)param_1);
        goto LAB_03fd6ae8;
      }
      if (iVar4 == 1) {
        iVar4 = FUN_03fd2b6c((int)in_x1[2]);
        iVar5 = FUN_03fd2b6c(*(undefined4 *)((long)in_x1 + 0x14));
        fVar8 = (float)iVar5;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)iVar4,fVar8);
        local_30 = (float)Sexy::SexyVector2::operator-
                                    ((SexyVector2 *)&local_38,(SexyVector2 *)(param_1 + 0x1d0));
        fVar9 = ABS(local_30);
        fVar7 = fVar8;
        local_2c = fVar8;
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        if (((float)iVar4 * 0.6 < fVar9) ||
           (iVar4 = BoardConstants::GRIDSQUARE_WIDTH(), (float)iVar4 * 0.6 < ABS(fVar8))) {
          param_1[0x1d8] = (Touch)0x1;
          fVar8 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_30);
          DVec3::DVec3((DVec3 *)&local_28);
          BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
          BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
          if (-0.5 <= fVar8) {
            fVar9 = 0.5;
            if (fVar8 <= 0.5) {
              if (-0.5 <= fVar7) {
                if ((0.5 < fVar7) && (*(int *)(param_1 + 0x1dc) != 1)) {
                  BoardEntity::CalcGridPosition();
                  iVar4 = (int)fStack_14 + *(int *)(param_1 + 0x1e0);
                  iVar5 = BoardConstants::NUMBER_OF_ROWS();
                  if (iVar4 < iVar5) {
                    iVar4 = 1;
                    goto LAB_03fd6c20;
                  }
                }
              }
              else if ((*(int *)(param_1 + 0x1dc) != 1) &&
                      (BoardEntity::CalcGridPosition(), 0 < (int)fStack_14)) {
                iVar4 = 0;
LAB_03fd6c20:
                local_18 = calcDodoRiderNextPosition((CarGridItem *)param_1,iVar4);
                fStack_14 = fVar9;
                local_10 = fVar7;
                Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
                this = (RtObject *)Canmove((CarGridItem *)param_1,iVar4);
                if (this == (RtObject *)0x0) {
                  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
                }
                else {
                  pBVar6 = Sexy::RtObject::Cast<BarrierGridItem>(this);
                  if ((pBVar6 == (BarrierGridItem *)0x0) ||
                     (cVar2 = BarrierGridItem::Canmove((int)pBVar6), cVar2 == '\0'))
                  goto LAB_03fd6ae4;
                  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
                }
                iVar5 = BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
                Sexy::Point::Point((Point *)&local_18,iVar4,iVar5);
                GridItem::SetGridLocationUnbounded((GridItem *)param_1,(Point *)&local_18,1);
                (**(code **)(*(long *)param_1 + 0x78))(param_1,(DVec3 *)&local_28);
                *(undefined8 *)(param_1 + 0x1d0) = local_38;
                param_1[0x1e8] = (Touch)0x1;
                goto LAB_03fd6ae8;
              }
            }
            else if (*(int *)(param_1 + 0x1dc) != 0) {
              BoardEntity::CalcGridPosition();
              iVar4 = local_18 + *(int *)(param_1 + 0x1e0);
              iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
              if (iVar4 < iVar5) {
                iVar4 = 3;
                fVar7 = fVar8;
                goto LAB_03fd6c20;
              }
            }
          }
          else if ((*(int *)(param_1 + 0x1dc) != 0) &&
                  (BoardEntity::CalcGridPosition(), 0 < local_18)) {
            iVar4 = 2;
            fVar9 = fVar8;
            fVar7 = in_s2;
            goto LAB_03fd6c20;
          }
        }
      }
    }
  }
LAB_03fd6ae4:
  TVar3 = (Touch)0x0;
LAB_03fd6ae8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(TVar3);
}


/* CarGridItem::onUpdate() */

void __thiscall CarGridItem::onUpdate(CarGridItem *this)

{
  char cVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  cVar1 = isDoneMoving(this);
  if (cVar1 == '\0') {
    return;
  }
  updatePosition(this);
  return;
}

