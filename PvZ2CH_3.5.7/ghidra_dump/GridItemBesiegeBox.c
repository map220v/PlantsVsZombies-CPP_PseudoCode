// Class: GridItemBesiegeBox


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::SetGridLocation(Sexy::Point, bool) */

void __thiscall
GridItemBesiegeBox::SetGridLocation(GridItemBesiegeBox *this,TPoint *param_2,undefined1 param_3)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2);
  GridItem::SetGridLocationUnbounded((GridItem *)this,aPStack_10,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBesiegeBox::onAnimDone(StandaloneEffect*) */

void GridItemBesiegeBox::onAnimDone(StandaloneEffect *param_1)

{
  return;
}


/* GridItemBesiegeBox::~GridItemBesiegeBox() */

void __thiscall GridItemBesiegeBox::~GridItemBesiegeBox(GridItemBesiegeBox *this)

{
  *(undefined ***)this = &PTR_GetClass_068d9320;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBesiegeBox_068d95b8;
  MessageRouter::Post((_func_void *)gMessageRouter);
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemBesiegeBox::~GridItemBesiegeBox() */

void __thiscall GridItemBesiegeBox::~GridItemBesiegeBox(GridItemBesiegeBox *this)

{
  ~GridItemBesiegeBox(this + -0x10);
  return;
}


/* GridItemBesiegeBox::~GridItemBesiegeBox() */

void __thiscall GridItemBesiegeBox::~GridItemBesiegeBox(GridItemBesiegeBox *this)

{
  ~GridItemBesiegeBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBesiegeBox::~GridItemBesiegeBox() */

void __thiscall GridItemBesiegeBox::~GridItemBesiegeBox(GridItemBesiegeBox *this)

{
  ~GridItemBesiegeBox(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::StaticClassInit() */

void GridItemBesiegeBox::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBesiegeBox");
    (*pcVar2)(plVar1,asStack_10,FUN_0478e1c4,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBesiegeBox::StaticGetClass() */

long * GridItemBesiegeBox::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBesiegeBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBesiegeBox::GetClass() const */

long * GridItemBesiegeBox::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBesiegeBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBesiegeBox::GridItemBesiegeBox() */

void __thiscall GridItemBesiegeBox::GridItemBesiegeBox(GridItemBesiegeBox *this)

{
  GridItem::GridItem((GridItem *)this);
  this[0x194] = (GridItemBesiegeBox)0x0;
  *(undefined ***)this = &PTR_GetClass_068d9320;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBesiegeBox_068d95b8;
  return;
}


/* GridItemBesiegeBox::StaticNew() */

GridItemBesiegeBox * GridItemBesiegeBox::StaticNew(void)

{
  GridItemBesiegeBox *this;
  
  this = ::operator_new(0x198);
  GridItemBesiegeBox(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::CalcRenderOrder() const */

void GridItemBesiegeBox::CalcRenderOrder(void)

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


/* non-virtual thunk to GridItemBesiegeBox::CalcRenderOrder() const */

void __thiscall GridItemBesiegeBox::CalcRenderOrder(GridItemBesiegeBox *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::IsTargetBox() */

void GridItemBesiegeBox::IsTargetBox(void)

{
  long lVar1;
  bool bVar2;
  LevelModuleManager *this;
  long lVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  this = (LevelModuleManager *)FUN_0478aae4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  LevelModuleManager::GetModuleByClass<BesiegeModule>(this);
  lVar3 = PooyanModule::GetPooyanProps();
  GridItem::GetGridLocation();
  bVar2 = false;
  if (local_10 == *(int *)(lVar3 + 0x80) + -1) {
    bVar2 = local_c == *(int *)(lVar3 + 0x84) + -1;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* GridItemBesiegeBox::CanBeShoveled() */

byte __thiscall GridItemBesiegeBox::CanBeShoveled(GridItemBesiegeBox *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = IsTargetBox();
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = FUN_0478aac8(this[0x194]);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::onDraw(Sexy::Graphics*) */

void __thiscall GridItemBesiegeBox::onDraw(GridItemBesiegeBox *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  Image *pIVar7;
  LevelModuleManager *this_00;
  BesiegeModule *pBVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  LotteryResultProgressBar *this_01;
  undefined8 uVar12;
  PrimeText_PotentialText *pPVar13;
  PrimeTextWidget *this_02;
  float fVar14;
  float fVar15;
  Image *local_38;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0478aac8(this[0x194]);
  if (cVar1 == '\0') {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    if (iVar2 < 0) {
      fVar14 = (float)FUN_0478b2b0(*pfVar6 - 34.0);
      fVar15 = (float)FUN_0478b2b0(pfVar6[1] - 70.0);
      pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b24ea8);
      Sexy::Graphics::DrawImage(param_1,pIVar7,(int)fVar14,(int)fVar15);
      this_00 = (LevelModuleManager *)
                FUN_0478aae4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      pBVar8 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
      if ((pBVar8 != (BesiegeModule *)0x0) && (cVar1 = FUN_0478aacc(pBVar8[0x1c]), cVar1 != '\0')) {
        pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b25020);
        iVar2 = FUN_0478b29c(0x14);
        iVar3 = FUN_0478b29c(0x50);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar7,(int)(fVar14 - (float)iVar2),(int)(fVar15 - (float)iVar3));
        pIVar7 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b24f60);
        iVar2 = FUN_0478b29c(10);
        iVar3 = FUN_0478b29c(0x3c);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar7,(int)(fVar14 - (float)iVar2),(int)(fVar15 - (float)iVar3));
        uVar9 = FUN_0478aad0(*(undefined4 *)(pBVar8 + 0x18));
        Sexy::StrFormat(L"x %d",auStack_28,uVar9 & 0xffffffff);
        lVar10 = FUN_0478aad4(*(undefined8 *)(pBVar8 + 0x28));
        if (lVar10 == 0) {
          this_01 = (LotteryResultProgressBar *)
                    CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b24f60);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
          iVar3 = FUN_0478b29c(0x1e);
          iVar4 = FUN_0478b29c(0x5a);
          iVar5 = FUN_0478b29c(100);
          uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
          FUN_05477b24(auStack_20,auStack_28);
          Sexy::Color::Color((Color *)awStack_18,2);
          pPVar13 = (PrimeText_PotentialText *)
                    Sexy::BuildPotentialText_Paragraph
                              (((float)iVar2 + fVar14) - (float)iVar3,fVar15 - (float)iVar4,
                               (float)iVar5,(float)iVar5,uVar12,auStack_20,1,1,(Color *)awStack_18);
          this_02 = ::operator_new(0xf8);
          Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar13);
          FUN_05476c50(auStack_20);
          FUN_0478aad8(pBVar8 + 0x28,this_02);
        }
        else {
          FUN_05477b24(awStack_18,auStack_28);
          Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(pBVar8 + 0x28),awStack_18);
          FUN_05476c50(awStack_18);
        }
        plVar11 = (long *)FUN_0478aad4(*(undefined8 *)(pBVar8 + 0x28));
        (**(code **)(*plVar11 + 0x128))(plVar11,param_1);
        FUN_05476c50(auStack_28);
      }
      goto LAB_0478d958;
    }
    local_38 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b25090);
  }
  else {
    local_38 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06b24f00);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
  }
  fVar14 = (float)FUN_0478b2b0(*pfVar6 - 34.0);
  fVar15 = (float)FUN_0478b2b0(pfVar6[1] - 48.0);
  Sexy::Graphics::DrawImage(param_1,local_38,(int)fVar14,(int)fVar15);
LAB_0478d958:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBesiegeBox::Shovel() */

undefined8 __thiscall GridItemBesiegeBox::Shovel(GridItemBesiegeBox *this)

{
  char cVar1;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  BesiegeMazeMap *this_02;
  
  (**(code **)(*(long *)this + 0x230))();
  this_00 = (LevelModuleManager *)FUN_0478aae4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if (((this_01 != (BesiegeModule *)0x0) &&
      (this_02 = (BesiegeMazeMap *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this_01),
      this_02 != (BesiegeMazeMap *)0x0)) && (cVar1 = FUN_0478aac4(this_02[8]), cVar1 != '\0')) {
    BesiegeMazeMap::calcMazeMapHeight(this_02,true,false);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBesiegeBox::onGridItemInitialize() */

void __thiscall GridItemBesiegeBox::onGridItemInitialize(GridItemBesiegeBox *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  long lVar5;
  int *piVar6;
  BesiegeMazeMap *this_02;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  GridItem::GetGridLocation();
  this_00 = (LevelModuleManager *)FUN_0478aae4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if ((this_01 != (BesiegeModule *)0x0) && (lVar5 = PooyanModule::GetPooyanProps(), lVar5 != 0)) {
    local_20 = FUN_0478cdbc(*(undefined8 *)(lVar5 + 0x88));
    local_18 = FUN_0478ce0c(*(undefined8 *)(lVar5 + 0x90));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if ((*piVar6 + -1 == local_28) && (piVar6[1] + -1 == local_24)) {
        this[0x194] = (GridItemBesiegeBox)0x1;
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  DVec3::DVec3((DVec3 *)&local_18);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = CONCAT44(local_18._4_4_,(float)(local_28 * iVar3 + 200 + iVar4 / 2));
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_18 = CONCAT44((float)(local_24 * iVar3 + 0xa0 + iVar4 / 2),(undefined4)local_18);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (((this_01 != (BesiegeModule *)0x0) &&
      (this_02 = (BesiegeMazeMap *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this_01),
      this_02 != (BesiegeMazeMap *)0x0)) && (cVar2 = FUN_0478aac4(this_02[8]), cVar2 != '\0')) {
    BesiegeMazeMap::calcMazeMapHeight(this_02,true,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

