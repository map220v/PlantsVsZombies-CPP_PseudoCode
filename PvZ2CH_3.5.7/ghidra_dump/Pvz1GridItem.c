// Class: Pvz1GridItem


/* Pvz1GridItem::CalcRenderOrder() const */

void __thiscall Pvz1GridItem::CalcRenderOrder(Pvz1GridItem *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03fcd940(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to Pvz1GridItem::CalcRenderOrder() const */

void __thiscall Pvz1GridItem::CalcRenderOrder(Pvz1GridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* Pvz1GridItem::Pvz1GridItem() */

void __thiscall Pvz1GridItem::Pvz1GridItem(Pvz1GridItem *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_067ad2d0;
  *(undefined ***)(this + 0x10) = &PTR__Pvz1GridItem_067ad590;
  return;
}


/* Pvz1GridItem::StaticNew() */

Pvz1GridItem * Pvz1GridItem::StaticNew(void)

{
  Pvz1GridItem *this;
  
  this = ::operator_new(0x1e0);
  Pvz1GridItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItem::StaticClassInit() */

void Pvz1GridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"Pvz1GridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03fcfde4,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Pvz1GridItem::StaticGetClass() */

long * Pvz1GridItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Pvz1GridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Pvz1GridItem::GetClass() const */

long * Pvz1GridItem::GetClass(void)

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
  (*pcVar3)(plVar1,"Pvz1GridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItem::onGridItemInitialize() */

void __thiscall Pvz1GridItem::onGridItemInitialize(Pvz1GridItem *this)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  __n = aRStack_40;
  std::string::string(asStack_48,"idle_01");
  nop();
  uVar1 = Sexy::Rand(5);
  switch(uVar1) {
  case 0:
    std::string::append(asStack_48,"idle_01",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_48,"idle_02",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_48,"idle_03",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_48,"idle_04",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_48,"idle_05",(size_t)__n);
  }
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItem::onAnimation(std::string const&) */

void __thiscall Pvz1GridItem::onAnimation(Pvz1GridItem *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"birth_01");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle_01");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"birth_02");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle_02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"birth_03");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle_03");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"birth_04");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle_04");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItem::Camouflage() */

void __thiscall Pvz1GridItem::Camouflage(Pvz1GridItem *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  float *pfVar2;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_UI_WHACKZOMBIE_PVZ1_WHACKZOMBIE_WPAWN");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,*pfVar2,pfVar2[1] - 30.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
  FUN_03fcd938(this_00 + 0x1c,0x64961);
  std::string::string(asStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItem::onDestroy() */

void __thiscall Pvz1GridItem::onDestroy(Pvz1GridItem *this)

{
  int iVar1;
  int iVar2;
  Pvz1GridItemProps *pPVar3;
  SexyVector3 *pSVar4;
  ActivityConfig *this_00;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = GridItem::GetProps<Pvz1GridItemProps>();
  uVar9 = 0;
  uVar8 = 0xc2500000;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-52.0,0.0);
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = Sexy::SexyVector3::operator-(pSVar4,(SexyVector3 *)aVStack_28);
  local_14 = uVar8;
  local_10 = uVar9;
  fVar6 = (float)Sexy::Rand(1.0);
  fVar10 = *(float *)(pPVar3 + 0x108);
  fVar7 = (float)Sexy::Rand(1.0);
  fVar11 = *(float *)(pPVar3 + 0x104);
  if (fVar6 < fVar10) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    iVar1 = ActivityConfig::GetMaxCoinSpecialCollected(this_00);
    iVar2 = UIBattleOrder::GetCurrentExp(*(UIBattleOrder **)(gLawnApp + 0x9f0));
    if (iVar2 < iVar1) {
      pSVar4 = *(SexyVector3 **)(gLawnApp + 0x9f0);
      std::string::string(asStack_30,"coin_gold");
      lVar5 = Board::AddCoin(pSVar4,(string *)&local_18);
      std::string::~string(asStack_30);
      nop();
      if (lVar5 != 0) {
        iVar1 = CollectableCure::GetCureValue();
        iVar2 = iVar2 + iVar1;
        UIGiftFoReturn::SetIntegral(*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar2);
      }
      if (fVar7 < fVar11) {
        pSVar4 = *(SexyVector3 **)(gLawnApp + 0x9f0);
        std::string::string(asStack_30,"coin_silver");
        lVar5 = Board::AddCoin(pSVar4,(string *)&local_18);
        std::string::~string(asStack_30);
        nop();
        if (lVar5 != 0) {
          iVar1 = CollectableCure::GetCureValue();
          UIGiftFoReturn::SetIntegral(*(UIGiftFoReturn **)(gLawnApp + 0x9f0),iVar1 + iVar2);
        }
      }
    }
  }
  GridItemGravestone::onDestroy((GridItemGravestone *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Pvz1GridItem::~Pvz1GridItem() */

void __thiscall Pvz1GridItem::~Pvz1GridItem(Pvz1GridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067ad2d0;
  *(undefined ***)(this + 0x10) = &PTR__Pvz1GridItem_067ad590;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to Pvz1GridItem::~Pvz1GridItem() */

void __thiscall Pvz1GridItem::~Pvz1GridItem(Pvz1GridItem *this)

{
  ~Pvz1GridItem(this + -0x10);
  return;
}


/* Pvz1GridItem::~Pvz1GridItem() */

void __thiscall Pvz1GridItem::~Pvz1GridItem(Pvz1GridItem *this)

{
  ~Pvz1GridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Pvz1GridItem::~Pvz1GridItem() */

void __thiscall Pvz1GridItem::~Pvz1GridItem(Pvz1GridItem *this)

{
  ~Pvz1GridItem(this + -0x10);
  return;
}

