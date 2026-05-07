// Class: GridItemSnakeBlock


/* GridItemSnakeBlock::onAnimDone(StandaloneEffect*) */

void GridItemSnakeBlock::onAnimDone(StandaloneEffect *param_1)

{
  param_1[0x194] = (StandaloneEffect)0x1;
  return;
}


/* GridItemSnakeBlock::~GridItemSnakeBlock() */

void __thiscall GridItemSnakeBlock::~GridItemSnakeBlock(GridItemSnakeBlock *this)

{
  *(undefined ***)this = &PTR_GetClass_067871d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnakeBlock_06787468;
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemSnakeBlock::~GridItemSnakeBlock() */

void __thiscall GridItemSnakeBlock::~GridItemSnakeBlock(GridItemSnakeBlock *this)

{
  ~GridItemSnakeBlock(this + -0x10);
  return;
}


/* GridItemSnakeBlock::~GridItemSnakeBlock() */

void __thiscall GridItemSnakeBlock::~GridItemSnakeBlock(GridItemSnakeBlock *this)

{
  ~GridItemSnakeBlock(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSnakeBlock::~GridItemSnakeBlock() */

void __thiscall GridItemSnakeBlock::~GridItemSnakeBlock(GridItemSnakeBlock *this)

{
  ~GridItemSnakeBlock(this + -0x10);
  return;
}


/* GridItemSnakeBlock::GridItemSnakeBlock() */

void __thiscall GridItemSnakeBlock::GridItemSnakeBlock(GridItemSnakeBlock *this)

{
  GridItem::GridItem((GridItem *)this);
  this[0x194] = (GridItemSnakeBlock)0x0;
  *(undefined ***)this = &PTR_GetClass_067871d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnakeBlock_06787468;
  return;
}


/* GridItemSnakeBlock::StaticNew() */

GridItemSnakeBlock * GridItemSnakeBlock::StaticNew(void)

{
  GridItemSnakeBlock *this;
  
  this = ::operator_new(0x198);
  GridItemSnakeBlock(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnakeBlock::StaticClassInit() */

void GridItemSnakeBlock::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSnakeBlock");
    (*pcVar2)(plVar1,asStack_10,FUN_03e28288,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnakeBlock::StaticGetClass() */

long * GridItemSnakeBlock::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSnakeBlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSnakeBlock::GetClass() const */

long * GridItemSnakeBlock::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSnakeBlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnakeBlock::CalcRenderOrder() const */

void GridItemSnakeBlock::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  Board::MakeRenderOrder(0x61e68,local_c,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemSnakeBlock::CalcRenderOrder() const */

void __thiscall GridItemSnakeBlock::CalcRenderOrder(GridItemSnakeBlock *this)

{
  CalcRenderOrder();
  return;
}


/* GridItemSnakeBlock::calcCollisionRect() */

void GridItemSnakeBlock::calcCollisionRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_03e27e6c(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar1 - 21.0),(int)(fVar2 - 25.0),0x1b,0x20);
  return;
}


/* GridItemSnakeBlock::onDraw(Sexy::Graphics*) */

void __thiscall GridItemSnakeBlock::onDraw(GridItemSnakeBlock *this,Graphics *param_1)

{
  Image *pIVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if (this[0x194] == (GridItemSnakeBlock)0x0) {
    return;
  }
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06add378);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = (float)FUN_03e27f38(*pfVar2 - 34.0);
  fVar4 = (float)FUN_03e27f38(pfVar2[1] - 28.0);
  Sexy::Graphics::DrawImage(param_1,pIVar1,(int)fVar3,(int)fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnakeBlock::onGridItemInitialize() */

void __thiscall GridItemSnakeBlock::onGridItemInitialize(GridItemSnakeBlock *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  int local_88;
  int local_84;
  RtMixedPtr aRStack_80 [8];
  string asStack_78 [8];
  float local_70;
  float local_6c;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  GridItem::GetGridLocation();
  DVec3::DVec3((DVec3 *)&local_70);
  local_6c = (float)(local_84 * 0x2a + 0xb5);
  local_70 = (float)(local_88 * 0x2d + 0xde);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_70);
  this[0x194] = (GridItemSnakeBlock)0x0;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_78,"POPANIM_SNAKE_SNAKE_ADD_EFFECT");
  GetPAMByName(asStack_78);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_78);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,local_70 - 100.0,local_6c - 105.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
  FUN_03e27e5c(this_00 + 0x1c);
  std::string::string((string *)aRStack_60,"Animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string((string *)aRStack_60,"onAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_78,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

