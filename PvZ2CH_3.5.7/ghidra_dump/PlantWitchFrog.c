// Class: PlantWitchFrog


/* PlantWitchFrog::SetOriginalPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantWitchFrog::SetOriginalPlant(PlantWitchFrog *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::GetShadowOffset() */

void __thiscall PlantWitchFrog::GetShadowOffset(PlantWitchFrog *this)

{
  long lVar1;
  float fVar2;
  FastCurve local_10 [8];
  long local_8;
  
  fVar2 = 0.0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10) + 200) - 0xfU < 4) {
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    fVar2 = *(float *)(this + 0x38) - *(float *)(lVar1 + 4);
  }
  Sexy::FastCurve::SetOutRange(local_10,0.0,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* PlantWitchFrog::CalcRenderOrder() */

void __thiscall PlantWitchFrog::CalcRenderOrder(PlantWitchFrog *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     **)(this + 0x10) + 200);
  if ((1 < iVar1 - 0xbU) && (iVar1 != 4)) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    uVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar3 + 4));
    Board::MakeRenderOrder(0x64960,uVar2,iVar1 == 4);
    return;
  }
  PlantFramework::CalcRenderOrder((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::StaticClassInit() */

void PlantWitchFrog::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWitchFrog");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf92d0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::StaticGetClass() */

long * PlantWitchFrog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWitchFrog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWitchFrog::GetClass() const */

long * PlantWitchFrog::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWitchFrog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWitchFrog::queuedState(unsigned int) */

bool __thiscall PlantWitchFrog::queuedState(PlantWitchFrog *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(*(long *)(this + 0x10) + 200);
  bVar2 = (uVar1 & 0xfffffffd) == 0x10;
  if (!bVar2 && uVar1 != 0xe) {
    return false;
  }
  if ((param_1 == 0x17) && (*(int *)(this + 0x48) == 0)) {
    *(undefined4 *)(this + 0x48) = 0x17;
    return bVar2 || uVar1 == 0xe;
  }
  return false;
}


/* PlantWitchFrog::checkJumpEdge() */

bool __thiscall PlantWitchFrog::checkJumpEdge(PlantWitchFrog *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  return iVar1 < iVar2;
}


/* PlantWitchFrog::~PlantWitchFrog() */

void __thiscall PlantWitchFrog::~PlantWitchFrog(PlantWitchFrog *this)

{
  *(undefined ***)this = &PTR_GetClass_069a4d10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWitchFrog::~PlantWitchFrog() */

void __thiscall PlantWitchFrog::~PlantWitchFrog(PlantWitchFrog *this)

{
  ~PlantWitchFrog(this);
  AK::FreeHook(this);
  return;
}


/* PlantWitchFrog::PlantWitchFrog() */

void __thiscall PlantWitchFrog::PlantWitchFrog(PlantWitchFrog *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a4d10;
  DVec3::DVec3((DVec3 *)(this + 0x28));
  DVec3::DVec3((DVec3 *)(this + 0x34));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantWitchFrog::StaticNew() */

PlantWitchFrog * PlantWitchFrog::StaticNew(void)

{
  PlantWitchFrog *this;
  
  this = ::operator_new(0x50);
  PlantWitchFrog(this);
  return this;
}


/* PlantWitchFrog::doDisappear(bool) */

void __thiscall PlantWitchFrog::doDisappear(PlantWitchFrog *this,bool param_1)

{
  bool bVar1;
  Plant *pPVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if ((bVar1) && (param_1)) {
    pPVar2 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    Plant::KillPlant(pPVar2,0,1,1);
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::playPlantAnimation(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantWitchFrog::playPlantAnimation
          (PlantWitchFrog *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  PopAnimRig *pPVar1;
  PlantAnimRig *pPVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop(pPVar1,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04cf8e7c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantWitchFrog::travelToJumpUpDestination() */

void __thiscall PlantWitchFrog::travelToJumpUpDestination(PlantWitchFrog *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  float local_20 [2];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  uVar7 = *(undefined4 *)(*(long *)(this + 0x10) + 0x128);
  auVar6 = PVZ_T();
  local_18 = CurveLerp<float>(auVar6,uVar7,auVar6._0_4_,this + 0x28,this + 0x34,4);
  uVar7 = *(undefined4 *)(*(long *)(this + 0x10) + 0x128);
  auVar6 = PVZ_T();
  local_20[0] = *(float *)(this + 0x38) - 120.0;
  local_14 = CurveLerp<float>(auVar6,uVar7,auVar6._0_4_,this + 0x2c,(Point *)local_20,4);
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    iVar3 = BoardTransforms::BoardSpaceToGridX(local_18);
    iVar4 = BoardTransforms::BoardSpaceToGridY(local_14);
    puVar1 = gMessageRouter;
    uVar5 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point((Point *)local_20,iVar3,iVar4);
    MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
              ((MessageRouter *)puVar1,Message::PlantMoving,uVar5,(Point *)local_20);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),(DVec3 *)&local_18);
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantPlaced,*(Plant **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04cf901c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantWitchFrog::travelToLandingDestination() */

void __thiscall PlantWitchFrog::travelToLandingDestination(PlantWitchFrog *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar5;
  uVar9 = *(undefined4 *)(this_00 + 0x128);
  local_10 = *(undefined4 *)(puVar5 + 1);
  auVar8 = PVZ_T();
  local_20[0] = *(float *)(this + 0x38) - 120.0;
  fVar7 = CurveLerp<float>(auVar8,uVar9,auVar8._0_4_,(Point *)local_20,this + 0x38,1);
  local_18._4_4_ = fVar7;
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    iVar3 = BoardTransforms::BoardSpaceToGridX((float)local_18);
    iVar4 = BoardTransforms::BoardSpaceToGridY(local_18._4_4_);
    puVar1 = gMessageRouter;
    uVar6 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point((Point *)local_20,iVar3,iVar4);
    MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
              ((MessageRouter *)puVar1,Message::PlantMoving,uVar6,(Point *)local_20);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantPlaced,*(Plant **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::HasGirdItem(Sexy::Point const&) */

void __thiscall PlantWitchFrog::HasGirdItem(PlantWitchFrog *this,Point *param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
             *(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  lVar1 = FUN_04cf86f8(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::hideShowOriginal(bool) */

void __thiscall PlantWitchFrog::hideShowOriginal(PlantWitchFrog *this,bool param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  Plant *pPVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 == '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x80))(plVar5,param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    plVar5 = (long *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar6 + 0xa8));
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x80))(plVar5,param_1);
    }
    if (param_1) {
      uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      auVar9 = PVZ_EOT();
      Plant::ApplyCondition(auVar9,0,uVar8,0x1d);
    }
    else {
      pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::EndCondition(pPVar7,0x1d);
      iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      Sexy::Point::Point((Point *)&local_20,iVar3,iVar4);
      puVar1 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
      Sexy::Point::Point(aPStack_10,(TPoint *)&local_20);
      MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                ((MessageRouter *)puVar1,Message::PlantMoving,aRStack_18,aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::SetGridLoc(pPVar7,local_20,local_1c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::findRecoverGrid() */

void PlantWitchFrog::findRecoverGrid(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PlantWitchFrog *in_x0;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  TPoint *pTVar11;
  Point *pPVar12;
  Board *pBVar13;
  Point *in_x8;
  ulong uVar14;
  int local_38;
  int local_34;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  Sexy::Point::Point((Point *)&local_38,iVar4,iVar5);
  iVar1 = local_34;
  iVar6 = local_38;
  pBVar13 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_28,"frog");
  lVar7 = Board::GetPlantAt(pBVar13,iVar6,iVar1,asStack_28);
  if (lVar7 == 0) {
    cVar2 = HasGirdItem(in_x0,(Point *)&local_38);
    std::string::~string(asStack_28);
    nop();
    if (cVar2 == '\x01') goto LAB_04cf9904;
  }
  else {
    pBVar13 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_20,"frog");
    uVar8 = Board::GetPlantAt(pBVar13,local_38,local_34,(string *)&local_20);
    cVar2 = Plant::HasCondition(uVar8,0x1d);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = HasGirdItem(in_x0,(Point *)&local_38);
      bVar3 = bVar3 ^ 1;
    }
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    if (bVar3 == 0) {
LAB_04cf9904:
      iVar6 = iVar5 + -1;
      iVar5 = iVar5 + 1;
      uVar14 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      Sexy::Point::Point((Point *)asStack_28,iVar4 + -1,iVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      Sexy::Point::Point((Point *)asStack_28,iVar4,iVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      Sexy::Point::Point((Point *)asStack_28,iVar4 + 1,iVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      Sexy::Point::Point((Point *)asStack_28,iVar4 + -1,iVar5);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      Sexy::Point::Point((Point *)asStack_28,iVar4 + 1,iVar5);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      Sexy::Point::Point((Point *)asStack_28,iVar4,iVar5);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)asStack_28);
      uVar8 = local_20;
      uVar9 = FUN_04cf86e4(local_20,local_18);
      if (uVar9 != 0) {
        do {
          piVar10 = (int *)FUN_04cf86f0(uVar8,uVar14);
          iVar5 = *piVar10;
          if (-1 < iVar5) {
            iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
            uVar8 = local_20;
            if (iVar5 < iVar6) {
              lVar7 = FUN_04cf86f0(local_20,uVar14);
              iVar5 = *(int *)(lVar7 + 4);
              if ((-1 < iVar5) &&
                 (iVar6 = BoardConstants::NUMBER_OF_ROWS(), uVar8 = local_20, iVar5 < iVar6)) {
                pBVar13 = *(Board **)(gLawnApp + 0x9f0);
                piVar10 = (int *)FUN_04cf86f0(local_20,uVar14);
                iVar5 = *piVar10;
                iVar6 = piVar10[1];
                std::string::string(asStack_30,"frog");
                lVar7 = Board::GetPlantAt(pBVar13,iVar5,iVar6,asStack_30);
                if (lVar7 == 0) {
                  pPVar12 = (Point *)FUN_04cf86f0(local_20,uVar14);
                  cVar2 = HasGirdItem(in_x0,pPVar12);
                  std::string::~string(asStack_30);
                  nop();
                  uVar8 = local_20;
                  if (cVar2 != '\x01') goto LAB_04cf9bd4;
                }
                else {
                  pBVar13 = *(Board **)(gLawnApp + 0x9f0);
                  piVar10 = (int *)FUN_04cf86f0(local_20,uVar14);
                  iVar5 = *piVar10;
                  iVar6 = piVar10[1];
                  std::string::string(asStack_28,"frog");
                  uVar8 = Board::GetPlantAt(pBVar13,iVar5,iVar6,asStack_28);
                  cVar2 = Plant::HasCondition(uVar8,0x1d);
                  if (cVar2 == '\0') {
                    bVar3 = 0;
                  }
                  else {
                    pPVar12 = (Point *)FUN_04cf86f0(local_20,uVar14);
                    bVar3 = HasGirdItem(in_x0,pPVar12);
                    bVar3 = bVar3 ^ 1;
                  }
                  std::string::~string(asStack_28);
                  nop();
                  std::string::~string(asStack_30);
                  nop();
                  uVar8 = local_20;
                  if (bVar3 != 0) {
LAB_04cf9bd4:
                    pTVar11 = (TPoint *)FUN_04cf86f0(local_20,uVar14);
                    Sexy::Point::Point(in_x8,pTVar11);
                    goto LAB_04cf9b58;
                  }
                }
              }
            }
            uVar9 = FUN_04cf86e4(uVar8,local_18);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar9);
      }
      Sexy::Point::Point(in_x8,-1,-1);
LAB_04cf9b58:
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      goto LAB_04cf9b60;
    }
  }
  Sexy::Point::Point(in_x8,(TPoint *)&local_38);
LAB_04cf9b60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::setState(unsigned int) */

void __thiscall PlantWitchFrog::setState(PlantWitchFrog *this,uint param_1)

{
  char cVar1;
  int iVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *this_01;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  RealObject *this_02;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(*(long *)(this + 0x10) + 200) == param_1) ||
     (cVar1 = queuedState(this,param_1), cVar1 != '\0')) goto switchD_04cf9cd8_caseD_5;
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 4:
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar3 + 0x118))();
    fVar6 = (float)PVZ_T();
    lVar5 = FUN_04cf9178(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x4c) = fVar6 + *(float *)(lVar5 + 0x2b8);
    break;
  case 10:
    std::string::string((string *)&local_58,"appear");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    playPlantAnimation(this,(string *)&local_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)&local_58);
    nop();
    hideShowOriginal(this,true);
    break;
  case 0xb:
    pcVar4 = "turn";
    goto LAB_04cf9cf0;
  case 0xc:
    pcVar4 = "size_up";
    goto LAB_04cf9cf0;
  case 0xd:
    pcVar4 = "jump_up_left";
    goto LAB_04cf9f10;
  case 0xe:
  case 0x13:
    pcVar4 = "jump_up_right";
LAB_04cf9f10:
    std::string::string((string *)&local_58,pcVar4);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    playPlantAnimation(this,(string *)&local_58,
                       (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    this_02 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_58,"Play_Plant_Squash_Attack");
    RealObject::PlayPositionalSound(this_02,(string *)&local_58,0.0);
    std::string::~string((string *)&local_58);
    nop();
LAB_04cf9ee4:
    lVar5 = *(long *)(this + 0x10);
    fVar6 = (float)PVZ_T();
    *(float *)(lVar5 + 0x128) = fVar6 + 0.5;
    break;
  case 0xf:
  case 0x10:
  case 0x14:
    this_01 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    PopAnimRig::SetPaused(this_01,false);
    goto LAB_04cf9ee4;
  case 0x11:
    pcVar4 = "jump_down_left";
    goto LAB_04cf9e08;
  case 0x12:
  case 0x15:
    pcVar4 = "jump_down_right";
LAB_04cf9e08:
    std::string::string((string *)&local_58,pcVar4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    playPlantAnimation(this,(string *)&local_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)&local_58);
    nop();
    lVar5 = *(long *)(this + 0x10);
    fVar6 = (float)PVZ_T();
    *(float *)(lVar5 + 0x128) = fVar6 + 0.15;
    break;
  case 0x16:
    pcVar4 = "disappear";
    goto LAB_04cf9cf0;
  case 0x17:
    findRecoverGrid();
    if ((local_58 == -1) || (local_54 == -1)) {
      tryDisappear(this);
    }
    else {
      iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      if ((local_58 == iVar2) &&
         (iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10)), local_54 == iVar2)) {
        tryTransformBack(this);
      }
      else {
        doFinalJump(this,(Point *)&local_58);
      }
    }
    break;
  case 0x18:
    pcVar4 = "transform_back";
LAB_04cf9cf0:
    std::string::string((string *)&local_58,pcVar4);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    playPlantAnimation(this,(string *)&local_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)&local_58);
    nop();
  }
switchD_04cf9cd8_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::Initialize() */

void __thiscall PlantWitchFrog::Initialize(PlantWitchFrog *this)

{
  SexyVector3 *pSVar1;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),pSVar1);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),pSVar1);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar2;
  setState(this,4);
  return;
}


/* PlantWitchFrog::pickNextDestination() */

void __thiscall PlantWitchFrog::pickNextDestination(PlantWitchFrog *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),pSVar1);
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::doFinalJump(Sexy::Point const&) */

void __thiscall PlantWitchFrog::doFinalJump(PlantWitchFrog *this,Point *param_1)

{
  SexyVector3 *pSVar1;
  Point *extraout_x1;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)param_1,*(int *)(param_1 + 4));
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_10,extraout_x1);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),pSVar1);
  *(float *)(this + 0x34) = (float)local_18;
  *(float *)(this + 0x38) = (float)local_14 - 10.0;
  setState(this,0x13);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::Idle() */

void __thiscall PlantWitchFrog::Idle(PlantWitchFrog *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  setState(this,4);
  return;
}


/* PlantWitchFrog::doAppear() */

void __thiscall PlantWitchFrog::doAppear(PlantWitchFrog *this)

{
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::Appear(Sexy::RtWeakPtr<Plant>) */

void __thiscall PlantWitchFrog::Appear(PlantWitchFrog *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SetOriginalPlant(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  doAppear(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::tryTransformBack() */

void __thiscall PlantWitchFrog::tryTransformBack(PlantWitchFrog *this)

{
  setState(this,0x18);
  return;
}


/* PlantWitchFrog::tryRecover() */

void __thiscall PlantWitchFrog::tryRecover(PlantWitchFrog *this)

{
  setState(this,0x17);
  return;
}


/* PlantWitchFrog::LostControll() */

void __thiscall PlantWitchFrog::LostControll(PlantWitchFrog *this)

{
  setState(this,0x17);
  return;
}


/* PlantWitchFrog::checkQueuedState() */

undefined8 __thiscall PlantWitchFrog::checkQueuedState(PlantWitchFrog *this)

{
  if (*(int *)(this + 0x48) != 0x17) {
    return 0;
  }
  tryRecover(this);
  *(undefined4 *)(this + 0x48) = 0;
  return 1;
}


/* PlantWitchFrog::tryDisappear() */

void __thiscall PlantWitchFrog::tryDisappear(PlantWitchFrog *this)

{
  setState(this,0x16);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::doJump() */

void __thiscall PlantWitchFrog::doJump(PlantWitchFrog *this)

{
  int iVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  Point *extraout_x1;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Point::Point(aPStack_10,iVar1 + 1,iVar2);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_10,extraout_x1);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),pSVar3);
  *(float *)(this + 0x34) = (float)local_18;
  *(float *)(this + 0x38) = (float)local_14 - 10.0;
  setState(this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::tryJump() */

void __thiscall PlantWitchFrog::tryJump(PlantWitchFrog *this)

{
  char cVar1;
  
  cVar1 = checkQueuedState(this);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = checkJumpEdge(this);
  if (cVar1 == '\0') {
    tryDisappear(this);
    return;
  }
  doJump(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::onAnimTurnFinished(std::string const&) */

void PlantWitchFrog::onAnimTurnFinished(string *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  Board *pBVar8;
  string asStack_20 [8];
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(*(BoardEntity **)(param_1 + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar3 != 0x16) {
    if (iVar3 == 10) {
      tryJump((PlantWitchFrog *)param_1);
      goto LAB_04cfa498;
    }
    if (iVar3 != 0x18) goto LAB_04cfa498;
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_20,"frog");
    lVar6 = Board::GetPlantAt(pBVar8,iVar3,iVar4,asStack_20);
    if (lVar6 == 0) {
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if ((iVar5 <= iVar3) || (iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar5 <= iVar4)) {
        std::string::~string(asStack_20);
        nop();
        goto LAB_04cfa5cc;
      }
      Sexy::Point::Point(aPStack_10,iVar3,iVar4);
      bVar2 = HasGirdItem((PlantWitchFrog *)param_1,aPStack_10);
      bVar2 = bVar2 ^ 1;
    }
    else {
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_18,"frog");
      uVar7 = Board::GetPlantAt(pBVar8,iVar3,iVar4,asStack_18);
      cVar1 = Plant::HasCondition(uVar7,0x1d);
      if (cVar1 == '\0') {
        bVar2 = 0;
      }
      else {
        iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
        if ((iVar3 < iVar5) && (iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar5)) {
          Sexy::Point::Point(aPStack_10,iVar3,iVar4);
          bVar2 = HasGirdItem((PlantWitchFrog *)param_1,aPStack_10);
          bVar2 = bVar2 ^ 1;
        }
        else {
          bVar2 = 0;
        }
      }
      std::string::~string(asStack_18);
      nop();
    }
    std::string::~string(asStack_20);
    nop();
    if (bVar2 != 0) {
      hideShowOriginal((PlantWitchFrog *)param_1,false);
      doDisappear((PlantWitchFrog *)param_1,false);
      goto LAB_04cfa498;
    }
  }
LAB_04cfa5cc:
  doDisappear((PlantWitchFrog *)param_1,true);
LAB_04cfa498:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchFrog::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantWitchFrog::onAnimStoppedCallback(PlantWitchFrog *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"turn");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"size_up"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"transform_back"), bVar1)) ||
     ((bVar1 = std::operator==(param_1,"disappear"), bVar1 ||
      (bVar1 = std::operator==(param_1,"appear"), bVar1)))) {
    onAnimTurnFinished((string *)this);
    return;
  }
  bVar1 = std::operator==(param_1,"plantfood_jump_down_left");
  if (((!bVar1) && (bVar1 = std::operator==(param_1,"jump_down_left"), !bVar1)) &&
     ((bVar1 = std::operator==(param_1,"plantfood_jump_down_right"), !bVar1 &&
      (bVar1 = std::operator==(param_1,"jump_down_right"), !bVar1)))) {
    return;
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchFrog::UpdateActions() */

void __thiscall PlantWitchFrog::UpdateActions(PlantWitchFrog *this)

{
  RtWeakPtr *this_00;
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *this_01;
  uint uVar5;
  float fVar6;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 4:
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x4c) < fVar6) {
      tryJump(this);
    }
    break;
  case 0xd:
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      setState(this,0xf);
    }
    break;
  case 0xe:
  case 0x13:
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      uVar5 = 0x10;
      if (*(int *)(*(long *)(this + 0x10) + 200) != 0xe) {
        uVar5 = 0x14;
      }
      setState(this,uVar5);
    }
    break;
  case 0xf:
    travelToJumpUpDestination(this);
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      setState(this,0x11);
    }
    break;
  case 0x10:
  case 0x14:
    travelToJumpUpDestination(this);
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      uVar5 = 0x12;
      if (*(int *)(*(long *)(this + 0x10) + 200) != 0x10) {
        uVar5 = 0x15;
      }
      setState(this,uVar5);
    }
    break;
  case 0x11:
  case 0x12:
  case 0x15:
    travelToLandingDestination(this);
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
      this_00 = (RtWeakPtr *)(this + 0x40);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
        iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
        Sexy::Point::Point((Point *)&local_20,iVar3,iVar4);
        puVar1 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
        Sexy::Point::Point(aPStack_10,(TPoint *)&local_20);
        MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                  ((MessageRouter *)puVar1,Message::PlantMoving,aRStack_18,aPStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::SetGridLoc(this_01,local_20,local_1c);
      }
      if (*(int *)(*(long *)(this + 0x10) + 200) == 0x12) {
        (**(code **)(*(long *)this + 0x490))(this);
      }
      else if (*(int *)(*(long *)(this + 0x10) + 200) == 0x15) {
        tryTransformBack(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

