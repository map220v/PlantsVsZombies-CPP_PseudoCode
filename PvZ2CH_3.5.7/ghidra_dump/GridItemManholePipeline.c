// Class: GridItemManholePipeline


/* GridItemManholePipeline::CalcRenderOrder() const */

void __thiscall GridItemManholePipeline::CalcRenderOrder(GridItemManholePipeline *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_038e9e44(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61ae5,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemManholePipeline::CalcRenderOrder() const */

void __thiscall GridItemManholePipeline::CalcRenderOrder(GridItemManholePipeline *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemManholePipeline::StaticClassInit() */

void GridItemManholePipeline::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemManholePipeline");
    (*pcVar2)(plVar1,asStack_10,FUN_038ea100,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemManholePipeline::StaticGetClass() */

long * GridItemManholePipeline::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemManholePipeline",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemManholePipeline::GetClass() const */

long * GridItemManholePipeline::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemManholePipeline",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemManholePipeline::~GridItemManholePipeline() */

void __thiscall GridItemManholePipeline::~GridItemManholePipeline(GridItemManholePipeline *this)

{
  *(undefined ***)this = &PTR_GetClass_066bdbf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemManholePipeline_066bde88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemManholePipeline::~GridItemManholePipeline() */

void __thiscall GridItemManholePipeline::~GridItemManholePipeline(GridItemManholePipeline *this)

{
  ~GridItemManholePipeline(this + -0x10);
  return;
}


/* GridItemManholePipeline::~GridItemManholePipeline() */

void __thiscall GridItemManholePipeline::~GridItemManholePipeline(GridItemManholePipeline *this)

{
  ~GridItemManholePipeline(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemManholePipeline::~GridItemManholePipeline() */

void __thiscall GridItemManholePipeline::~GridItemManholePipeline(GridItemManholePipeline *this)

{
  ~GridItemManholePipeline(this + -0x10);
  return;
}


/* GridItemManholePipeline::GridItemManholePipeline() */

void __thiscall GridItemManholePipeline::GridItemManholePipeline(GridItemManholePipeline *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_066bdbf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemManholePipeline_066bde88;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  return;
}


/* GridItemManholePipeline::StaticNew() */

GridItemManholePipeline * GridItemManholePipeline::StaticNew(void)

{
  GridItemManholePipeline *this;
  
  this = ::operator_new(0x1a8);
  GridItemManholePipeline(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemManholePipeline::SetupPipelineImage() */

void __thiscall GridItemManholePipeline::SetupPipelineImage(GridItemManholePipeline *this)

{
  ManholePipelineProps *pMVar1;
  undefined8 uVar2;
  InfoClass *pIVar3;
  InfoClass *pIVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = GridItem::GetProps<ManholePipelineProps>();
  uVar2 = FUN_0547429c(pMVar1 + 0x98);
  Sexy::StrFormat("%s_FRONT",asStack_20,uVar2);
  uVar2 = FUN_0547429c(pMVar1 + 0x98);
  Sexy::StrFormat("%s_BACK",asStack_18,uVar2);
  pIVar3 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_20);
  pIVar4 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar3 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (pIVar4 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemManholePipeline::onDraw(Sexy::Graphics*) */

void __thiscall GridItemManholePipeline::onDraw(GridItemManholePipeline *this,Graphics *param_1)

{
  int iVar1;
  ManholePipelineProps *pMVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  GraphicsAutoState aGStack_20 [8];
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar2 = GridItem::GetProps<ManholePipelineProps>();
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  GridItem::GetGridLocation();
  local_18 = (float)(iVar1 * local_10 + 200);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  GridItem::GetGridLocation();
  local_14 = (float)(iVar1 * local_c + 0xa0);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_18,(TPoint *)(pMVar2 + 0xa0));
  fVar4 = (float)FUN_038e9fb0();
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_18,fVar4);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a0));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(int)local_18,(int)local_14);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(int)local_18,(int)local_14);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

