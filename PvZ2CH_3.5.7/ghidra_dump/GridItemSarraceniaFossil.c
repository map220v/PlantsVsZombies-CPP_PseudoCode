// Class: GridItemSarraceniaFossil


/* GridItemSarraceniaFossil::calcCollisionRect() */

void GridItemSarraceniaFossil::calcCollisionRect(void)

{
  long in_x0;
  int *in_x8;
  
  GridItemGravestone::calcCollisionRect();
  *in_x8 = (int)*(float *)(in_x0 + 0x18);
  return;
}


/* GridItemSarraceniaFossil::CalcRenderOrder() const */

void __thiscall GridItemSarraceniaFossil::CalcRenderOrder(GridItemSarraceniaFossil *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04cb93a8(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635d8,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemSarraceniaFossil::CalcRenderOrder() const */

void __thiscall GridItemSarraceniaFossil::CalcRenderOrder(GridItemSarraceniaFossil *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemSarraceniaFossil::GridItemSarraceniaFossil() */

void __thiscall GridItemSarraceniaFossil::GridItemSarraceniaFossil(GridItemSarraceniaFossil *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_069998e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSarraceniaFossil_06999ba0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* GridItemSarraceniaFossil::StaticNew() */

GridItemSarraceniaFossil * GridItemSarraceniaFossil::StaticNew(void)

{
  GridItemSarraceniaFossil *this;
  
  this = ::operator_new(0x1e8);
  GridItemSarraceniaFossil(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::StaticClassInit() */

void GridItemSarraceniaFossil::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSarraceniaFossil");
    (*pcVar2)(plVar1,asStack_10,FUN_04cb95a4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSarraceniaFossil::StaticGetClass() */

long * GridItemSarraceniaFossil::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSarraceniaFossil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSarraceniaFossil::GetClass() const */

long * GridItemSarraceniaFossil::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSarraceniaFossil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::drawHealthBar(Sexy::Graphics*) */

void __thiscall
GridItemSarraceniaFossil::drawHealthBar(GridItemSarraceniaFossil *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  code *pcVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  lVar8 = *(long *)this;
  pcVar7 = *(code **)(lVar8 + 0x1d8);
  if (pcVar7 == GridItem::GetHitpoints) {
    fVar9 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar7 = *(code **)(lVar8 + 0x1e0);
  }
  else {
    fVar9 = (float)(*pcVar7)();
    pcVar7 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar7 == GridItem::GetMaxHitpoints) {
    fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar10 = (float)(*pcVar7)();
  }
  iVar2 = FUN_04cb93e0(0x3c);
  iVar3 = FUN_04cb93e0(10);
  Sexy::Graphics::PushState(param_1);
  iVar4 = FUN_04cb93e0(0xffffffe2);
  iVar5 = FUN_04cb93e0(10);
  Sexy::Graphics::Translate(param_1,iVar4,iVar5);
  Sexy::Color::Color(aCStack_18,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar11 = (float)FUN_04cb93f4(*pfVar6 + 3.0);
  fVar12 = (float)FUN_04cb93f4(pfVar6[1]);
  Sexy::Graphics::FillRect(param_1,(int)fVar11,(int)fVar12,iVar2,iVar3);
  Sexy::Color::Color(aCStack_18,0xff00);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  cVar1 = RealObject::IsOnTeam(this,2);
  iVar4 = 0xff0000;
  if (cVar1 == '\0') {
    iVar4 = 0xff00;
  }
  Sexy::Color::Color(aCStack_18,iVar4);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar11 = (float)FUN_04cb93f4(*pfVar6 + 5.0);
  fVar12 = (float)FUN_04cb93f4(pfVar6[1] + 2.0);
  iVar4 = FUN_04cb93e0(4);
  Sexy::Graphics::FillRect
            (param_1,(int)fVar11,(int)fVar12,(int)((float)(iVar2 - iVar4) * (fVar9 / fVar10)),
             iVar3 - iVar4);
  Sexy::Color::Color(aCStack_18,-1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::PopState(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::drawAnimation(Sexy::Graphics*) */

void GridItemSarraceniaFossil::drawAnimation(Graphics *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  PopAnimRig *this;
  Graphics *in_x1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float in_s1;
  float fVar11;
  float fVar12;
  float fVar13;
  GraphicsAutoState aGStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (cVar1 != '\0') {
    fVar3 = (float)FUN_04cb93f4(*(undefined4 *)(param_1 + 0x18));
    fVar11 = *(float *)(in_x1 + 0x1c);
    fVar4 = (float)FUN_04cb93f4(*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x20) * fVar11);
    if (param_1[0x195] != (Graphics)0x0) {
      puVar2 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      fVar3 = (float)FUN_04cb93f4(*puVar2);
      in_s1 = (float)puVar2[1];
      fVar4 = (float)FUN_04cb93f4(in_s1 - fVar11 * (float)puVar2[2]);
    }
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,in_x1);
    (**(code **)(*(long *)param_1 + 0xf8))(param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar5 = (float)(**(code **)(*(long *)param_1 + 0x298))(param_1);
    fVar11 = in_s1;
    fVar6 = (float)(**(code **)(*(long *)param_1 + 0x2a0))(param_1);
    fVar13 = *(float *)(in_x1 + 0x18);
    fVar12 = *(float *)(in_x1 + 0x1c);
    fVar7 = (float)GridItemAnimation::GetScale((GridItemAnimation *)param_1);
    fVar8 = (float)GridItemAnimation::GetScale((GridItemAnimation *)param_1);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar6 * fVar13,fVar8 * fVar11 * fVar12);
    FUN_04cb9350((float)(int)fVar3,(float)(int)fVar4,auStack_28,auStack_1c);
    fVar3 = (float)GridItemAnimation::GetScale((GridItemAnimation *)param_1);
    uVar9 = FUN_04cb93f4(-(fVar6 * fVar13 * fVar5) * fVar3);
    fVar3 = (float)GridItemAnimation::GetScale((GridItemAnimation *)param_1);
    uVar10 = FUN_04cb93f4(-(fVar11 * fVar12 * in_s1) * fVar3);
    FUN_04cb9350(uVar9,uVar10,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    PopAnimRig::Draw(this,in_x1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemSarraceniaFossil::onDraw(Sexy::Graphics*) */

void __thiscall GridItemSarraceniaFossil::onDraw(GridItemSarraceniaFossil *this,Graphics *param_1)

{
  char cVar1;
  
  drawAnimation((Graphics *)this);
  cVar1 = GridItemAnimation::GetHealthBarVisible((GridItemAnimation *)this);
  if (cVar1 == '\0') {
    return;
  }
  drawHealthBar(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::onGridItemInitialize() */

void __thiscall GridItemSarraceniaFossil::onGridItemInitialize(GridItemSarraceniaFossil *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"birth");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::GetCantPlantReason() const */

void GridItemSarraceniaFossil::GetCantPlantReason(void)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==("lollipops",(string *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar2 = 0xb;
  if (!bVar1) {
    uVar2 = 0x7d;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSarraceniaFossil::onTakeDamage(DamageInfo const&) */

void GridItemSarraceniaFossil::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  GridItemGravestonePropertySheet *pGVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  undefined8 *puVar4;
  PopAnimRig *pPVar5;
  float fVar6;
  string asStack_50 [8];
  undefined8 local_48;
  float local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
      fVar6 = (float)GridItem::GetHitpoints((GridItem *)param_1);
    }
    else {
      fVar6 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
    }
    if (fVar6 < *(float *)(param_1 + 0x1e0) * 0.5) {
      GridItemAnimation::GetAnimRig();
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
      ;
      std::string::string((string *)&local_48,"damage1");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar5,(string *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      *(undefined4 *)(param_1 + 0x1ac) = 4;
    }
  }
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar6 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar6 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar6 <= 0.0) {
    pGVar2 = GridItem::GetProps<GridItemGravestonePropertySheet>();
    if (((DAT_06b959e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b959e8), iVar1 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06b959f0,0.0,35.0);
      __cxa_guard_release(&DAT_06b959e8);
    }
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(pGVar2 + 0x98));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_48);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_48._0_4_ = (float)*puVar4;
    local_40 = DAT_06b959f4 + *(float *)(puVar4 + 1);
    local_48 = CONCAT44((int)((ulong)*puVar4 >> 0x20),DAT_06b959f0 + (float)local_48);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_48,-1);
    Effect_PopAnim::SetCentered(this,true);
    iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    FUN_04cb93a0(this + 0x1c,iVar1 + 1);
    std::string::string(asStack_50,"die");
    Effect_PopAnim::PlaySingleAnimation(this,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
  }
  (**(code **)(*(long *)param_1 + 0x288))(0x3e800000,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemSarraceniaFossil::~GridItemSarraceniaFossil() */

void __thiscall GridItemSarraceniaFossil::~GridItemSarraceniaFossil(GridItemSarraceniaFossil *this)

{
  *(undefined ***)this = &PTR_GetClass_069998e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSarraceniaFossil_06999ba0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemSarraceniaFossil::~GridItemSarraceniaFossil() */

void __thiscall GridItemSarraceniaFossil::~GridItemSarraceniaFossil(GridItemSarraceniaFossil *this)

{
  ~GridItemSarraceniaFossil(this + -0x10);
  return;
}


/* GridItemSarraceniaFossil::~GridItemSarraceniaFossil() */

void __thiscall GridItemSarraceniaFossil::~GridItemSarraceniaFossil(GridItemSarraceniaFossil *this)

{
  ~GridItemSarraceniaFossil(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSarraceniaFossil::~GridItemSarraceniaFossil() */

void __thiscall GridItemSarraceniaFossil::~GridItemSarraceniaFossil(GridItemSarraceniaFossil *this)

{
  ~GridItemSarraceniaFossil(this + -0x10);
  return;
}

