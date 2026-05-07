// Class: MainBoard


/* MainBoard::onDraw(Sexy::Graphics*) */

void MainBoard::onDraw(Graphics *param_1)

{
  if (*(long **)(param_1 + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x210) + 0xe8))();
  }
  return;
}


/* MainBoard::onUpdate() */

void __thiscall MainBoard::onUpdate(MainBoard *this)

{
  if (*(RichManSquash **)(this + 0x210) != (RichManSquash *)0x0) {
    RichManSquash::onUpdate(*(RichManSquash **)(this + 0x210));
    return;
  }
  return;
}


/* MainBoard::SetBoardConfig(AdaptorBoardConfig const&) */

void __thiscall MainBoard::SetBoardConfig(MainBoard *this,AdaptorBoardConfig *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x218) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* MainBoard::SetInitRect(Sexy::TRect<int>) */

void __thiscall MainBoard::SetInitRect(MainBoard *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x22c) = *param_2;
  *(undefined8 *)(this + 0x234) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoard::StaticClassInit() */

void MainBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"MainBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_038dd1f4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainBoard::StaticGetClass() */

long * MainBoard::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"MainBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MainBoard::GetRect() */

Insets * MainBoard::GetRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x22c));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoard::SetPieceLocation(Sexy::Point const&) */

void __thiscall MainBoard::SetPieceLocation(MainBoard *this,Point *param_1)

{
  undefined4 uVar1;
  RichManUIMgr *this_00;
  SexyVector3 *pSVar2;
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) != 0) {
    local_1c = 0;
    RichManUtils::GetTargetPosition
              (param_1,(TRect *)(this + 0x22c),*(int *)(this + 0x220),&local_20,&local_1c,true);
    pSVar2 = *(SexyVector3 **)(this + 0x210);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)local_1c,0.0);
    RichManSquash::SetPiecePosition(pSVar2);
    this_00 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    uVar1 = RichManUIMgr::IsCurrentNodeFacingLeft(this_00);
    FUN_038db704(*(long *)(this + 0x210) + 0x88,uVar1);
    RichManSquash::setState(*(RichManSquash **)(this + 0x210),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoard::CreatePiece() */

void __thiscall MainBoard::CreatePiece(MainBoard *this)

{
  int iVar1;
  RichManSquash *this_00;
  RichManUIMgr *this_01;
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) == 0) {
    this_00 = GameObject::Create<RichManSquash>();
    RichManSquash::initializeRenderEffect(this_00);
    this_01 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::GetPieceConfig(this_01);
    local_2c = 0;
    iVar1 = Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::GetNode(iVar1);
    RichManUtils::GetTargetPosition
              (aPStack_28,(TRect *)(this + 0x22c),*(int *)(this + 0x220),&local_30,&local_2c,true);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_30,(float)local_2c,0.0);
    RichManSquash::SetTurnRightPoint(this_00,(SexyVector3 *)aVStack_18);
    iVar1 = Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::GetNode(iVar1);
    RichManUtils::GetTargetPosition
              (aPStack_20,(TRect *)(this + 0x22c),*(int *)(this + 0x220),&local_30,&local_2c,true);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_30,(float)local_2c,0.0);
    RichManSquash::SetTurnLeftPoint(this_00,(SexyVector3 *)aVStack_18);
    *(RichManSquash **)(this + 0x210) = this_00;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainBoard::MainBoard() */

void __thiscall MainBoard::MainBoard(MainBoard *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_066bc430;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x218));
  Sexy::Insets::Insets((Insets *)(this + 0x22c));
  return;
}


/* MainBoard::StaticNew() */

MainBoard * MainBoard::StaticNew(void)

{
  MainBoard *this;
  
  this = ::operator_new(0x240);
  MainBoard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoard::~MainBoard() */

void __thiscall MainBoard::~MainBoard(MainBoard *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetWidgetClass_066bc430;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    ToolPacketData::GetProps();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MainBoard::~MainBoard() */

void __thiscall MainBoard::~MainBoard(MainBoard *this)

{
  ~MainBoard(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MainBoard::JumpToDestination(std::vector<Sexy::Point, std::allocator<Sexy::Point> > const&) */

void __thiscall MainBoard::JumpToDestination(MainBoard *this,vector *param_1)

{
  TPoint *pTVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_40;
  int local_3c;
  Point aPStack_38 [8];
  Vec3 aVStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = 0;
    while( true ) {
      uVar4 = *(undefined8 *)param_1;
      uVar2 = FUN_038db738(uVar4,*(undefined8 *)(param_1 + 8));
      if (uVar2 <= uVar3) break;
      pTVar1 = (TPoint *)FUN_038db744(uVar4,uVar3);
      Sexy::Point::Point(aPStack_38,pTVar1);
      local_3c = 0;
      RichManUtils::GetTargetPosition
                (aPStack_38,(TRect *)(this + 0x22c),*(int *)(this + 0x220),&local_40,&local_3c,true)
      ;
      EATextSquish::Vec3::Vec3(aVStack_30,(float)local_40,(float)local_3c,0.0);
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)avStack_20,
                 (SexyVector3 *)aVStack_30);
      uVar3 = uVar3 + 1;
    }
    RichManSquash::TryJump(*(RichManSquash **)(this + 0x210),(vector *)avStack_20);
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

