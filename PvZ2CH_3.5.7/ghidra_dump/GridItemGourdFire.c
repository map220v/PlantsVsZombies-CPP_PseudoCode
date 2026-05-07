// Class: GridItemGourdFire


/* GridItemGourdFire::CalcRenderOrder() const */

void __thiscall GridItemGourdFire::CalcRenderOrder(GridItemGourdFire *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03e076e4(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemGourdFire::CalcRenderOrder() const */

void __thiscall GridItemGourdFire::CalcRenderOrder(GridItemGourdFire *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGourdFire::StaticClassInit() */

void GridItemGourdFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGourdFire");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0786c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGourdFire::StaticGetClass() */

long * GridItemGourdFire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGourdFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGourdFire::GetClass() const */

long * GridItemGourdFire::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGourdFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGourdFire::setState(GourdFireState) */

void __thiscall GridItemGourdFire::setState(GridItemGourdFire *this,int param_2)

{
  if (*(int *)(this + 0x194) != param_2) {
    *(int *)(this + 0x194) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGourdFire::calcDamageState() */

void __thiscall GridItemGourdFire::calcDamageState(GridItemGourdFire *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar1 = *(int *)(this + 0x1a4);
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar3 == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(*pcVar3)();
  }
  local_c = *(int *)(this + 0x1a4) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGourdFire::fire(int, int, int, float, GridItemArmrack*) */

void GridItemGourdFire::fire
               (int param_1,int param_2,int param_3,float param_4,GridItemArmrack *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ResourceInfo *pRVar4;
  RtClass *pRVar5;
  PopAnimRig *pPVar6;
  GridItemArmrack *in_x4;
  string asStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  local_8 = ___stack_chk_guard;
  *(int *)(uVar3 + 500) = param_2;
  iVar1 = iVar2 + -1;
  if (param_3 < iVar2) {
    iVar1 = param_3;
  }
  *(int *)(uVar3 + 0x1f0) = iVar1;
  std::string::string(asStack_48,"POPANIM_EFFECTS_FIREGOURD_GRIDFIRE");
  GetPAMByName(asStack_48);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
  pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar6 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar4,pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string((string *)aRStack_40,"idle2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar6,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  GridItemArmrack::setFirePointer(in_x4,pPVar6,*(int *)(uVar3 + 500),*(int *)(uVar3 + 0x1f0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGourdFire::GridItemGourdFire() */

void __thiscall GridItemGourdFire::GridItemGourdFire(GridItemGourdFire *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06782090;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGourdFire_06782328;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  return;
}


/* GridItemGourdFire::StaticNew() */

GridItemGourdFire * GridItemGourdFire::StaticNew(void)

{
  GridItemGourdFire *this;
  
  this = ::operator_new(0x1f8);
  GridItemGourdFire(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGourdFire::onGridItemInitialize() */

void __thiscall GridItemGourdFire::onGridItemInitialize(GridItemGourdFire *this)

{
  undefined4 uVar1;
  GridItemPropertySheet *pGVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_FIREGOURD_GRIDFIRE");
  nop();
  pGVar2 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03e076d4(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e076dc(this + 0x128);
  *(undefined4 *)(this + 0x1a4) = 5;
  uVar1 = Sexy::Rand(2);
  this[0x1b4] = (GridItemGourdFire)0x0;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x19c) = 0x3f800000;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar3 + 0.25;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x1cc) = 1;
  *(undefined4 *)(this + 0x198) = uVar1;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  *(undefined4 *)(this + 0x1b8) = 0x41f00000;
  *(undefined4 *)(this + 0x1bc) = 0x41f00000;
  setState(this);
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d0) = uVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGourdFire::~GridItemGourdFire() */

void __thiscall GridItemGourdFire::~GridItemGourdFire(GridItemGourdFire *this)

{
  *(undefined ***)this = &PTR_GetClass_06782090;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGourdFire_06782328;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1d8));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemGourdFire::~GridItemGourdFire() */

void __thiscall GridItemGourdFire::~GridItemGourdFire(GridItemGourdFire *this)

{
  ~GridItemGourdFire(this + -0x10);
  return;
}


/* GridItemGourdFire::~GridItemGourdFire() */

void __thiscall GridItemGourdFire::~GridItemGourdFire(GridItemGourdFire *this)

{
  ~GridItemGourdFire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGourdFire::~GridItemGourdFire() */

void __thiscall GridItemGourdFire::~GridItemGourdFire(GridItemGourdFire *this)

{
  ~GridItemGourdFire(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGourdFire::drawGridItem(Sexy::Graphics*) */

void __thiscall GridItemGourdFire::drawGridItem(GridItemGourdFire *this,Graphics *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar16 *pwVar8;
  GraphicsAutoState *pGVar9;
  LineBreakCategory *pLVar10;
  LineBreakCategory *pLVar11;
  float fVar12;
  float fVar13;
  int local_38;
  int local_34;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_18[0] = 0;
  local_8 = ___stack_chk_guard;
  iVar4 = CurveLerp<int>(0,0x447a0000,(float)*(int *)(this + 0x1a0),*(long *)(this + 0x1c0) + 0x3c,
                         (string *)local_18,4);
  GridItem::GetGridLocation();
  iVar5 = BoardTransforms::GridToBoardSpaceX(local_38);
  iVar5 = FUN_03e07724(iVar5 + 3);
  iVar5 = iVar5 - *(int *)(*(long *)(this + 0x1c0) + 0x38) / 2;
  iVar6 = BoardTransforms::GridToBoardSpaceY(local_34);
  iVar6 = FUN_03e07724(iVar6 + 0xd);
  uVar1 = *(uint *)(*(long *)(this + 0x1c0) + 0x3c);
  pLVar11 = (LineBreakCategory *)(ulong)uVar1;
  uVar2 = *(uint *)(*(long *)(this + 0x1c0) + 0x38);
  pLVar10 = (LineBreakCategory *)(ulong)uVar2;
  iVar6 = iVar6 - uVar1;
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar6,uVar2,uVar1);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_28);
  if (*(Image **)(this + 0x1c0) != (Image *)0x0) {
    pLVar10 = (LineBreakCategory *)(ulong)(uint)(iVar6 + iVar4);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x1c0),iVar5,iVar6 + iVar4);
  }
  Sexy::Graphics::ClearClipRect(param_1);
  pwVar8 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pGVar9 = aGStack_30;
  std::string::string((string *)local_18,"HealthBars");
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar8,(wchar16 *)local_18,(LineBreakCategory *)pGVar9,pLVar10,pLVar11);
  if (cVar3 != '\0') {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar12 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar12 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if (0.0 < fVar12) {
      std::string::~string((string *)local_18);
      nop();
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
      fVar12 = *(float *)(this + 0x1bc);
      fVar13 = *(float *)(this + 0x1b8);
      iVar4 = FUN_03e07724(0x3c);
      iVar7 = FUN_03e07724(10);
      Sexy::Graphics::Translate(param_1,iVar5,iVar6);
      iVar5 = FUN_03e07724(0);
      iVar6 = FUN_03e07724(0x39);
      Sexy::Graphics::Translate(param_1,iVar5,iVar6);
      Sexy::Color::Color((Color *)local_18,0xff00);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      iVar5 = FUN_03e07724(0);
      Sexy::Graphics::FillRect(param_1,iVar5,iVar5,iVar4,iVar7);
      Sexy::Color::Color((Color *)local_18,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      iVar5 = FUN_03e07724(2);
      iVar6 = FUN_03e07724(4);
      Sexy::Graphics::FillRect
                (param_1,iVar5,iVar5,(int)((float)(iVar4 - iVar6) * (fVar12 / fVar13)),iVar7 - iVar6
                );
      Sexy::Color::Color((Color *)local_18,-1);
      Sexy::Graphics::SetColor(param_1,(Color *)local_18);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
      goto LAB_03e083e4;
    }
  }
  std::string::~string((string *)local_18);
  nop();
LAB_03e083e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

