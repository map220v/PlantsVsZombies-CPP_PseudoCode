// Class: PlantfoodCursor


/* PlantfoodCursor::PlantfoodCursor() */

void __thiscall PlantfoodCursor::PlantfoodCursor(PlantfoodCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a22a0;
  return;
}


/* PlantfoodCursor::~PlantfoodCursor() */

void __thiscall PlantfoodCursor::~PlantfoodCursor(PlantfoodCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067a22a0;
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* PlantfoodCursor::~PlantfoodCursor() */

void __thiscall PlantfoodCursor::~PlantfoodCursor(PlantfoodCursor *this)

{
  ~PlantfoodCursor(this);
  AK::FreeHook(this);
  return;
}


/* PlantfoodCursor::applyPlantfood(Plant*) */

void __thiscall PlantfoodCursor::applyPlantfood(PlantfoodCursor *this,Plant *param_1)

{
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x220))(*(long **)(param_1 + 0xa8));
  return;
}


/* PlantfoodCursor::StaticNew() */

PlantfoodCursor * PlantfoodCursor::StaticNew(void)

{
  PlantfoodCursor *this;
  
  this = ::operator_new(0x48);
  PlantfoodCursor(this);
  return this;
}


/* PlantfoodCursor::StaticGetClass() */

long * PlantfoodCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodCursor",uVar2,StaticNew);
  return sClass;
}


/* PlantfoodCursor::GetClass() const */

long * PlantfoodCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodCursor",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCursor::PlantfoodCursor(Sexy::Touch const&) */

void __thiscall PlantfoodCursor::PlantfoodCursor(PlantfoodCursor *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  long *extraout_x0;
  long lVar3;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_067a22a0;
  std::string::string((string *)&local_18,"UIPlantfood");
  UIWidget::GetWidgetBySheetName((string *)&local_18);
  nop();
  std::string::~string((string *)&local_18);
  nop();
  (**(code **)(*extraout_x0 + 0xb8))((string *)&local_18,extraout_x0);
  Board::TranslateScreenRectToBoardRect((Board *)gLawnApp[0x13e],(TRect *)&local_18);
  local_18 = local_18 - *(int *)(gLawnApp[0x13e] + 0x48);
  local_14 = local_14 - *(int *)(gLawnApp[0x13e] + 0x4c);
  iVar2 = (**(code **)(*gLawnApp + 0x478))(gLawnApp);
  (**(code **)(*gLawnApp + 0x478))(gLawnApp);
  Sexy::TRect<int>::Inflate((int)(string *)&local_18,iVar2);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_18);
  this[0x40] = (PlantfoodCursor)0x0;
  this[0x41] = (PlantfoodCursor)0x0;
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar1 != '\0') || (cVar1 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar1 != '\0')) {
    this[0x41] = (PlantfoodCursor)0x1;
  }
  this[0x42] = (PlantfoodCursor)0x0;
  if ((gLawnApp[0x13e] != 0) &&
     (lVar3 = FUN_03f6f7e8(*(undefined8 *)(gLawnApp[0x13e] + 0xad8)), lVar3 != 0)) {
    this[0x40] = (PlantfoodCursor)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantfoodCursor::onDraw(Sexy::Graphics*) */

void __thiscall PlantfoodCursor::onDraw(PlantfoodCursor *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  float fVar3;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae4f90);
  if (this[0x40] == (PlantfoodCursor)0x0) {
    if (this[0x41] != (PlantfoodCursor)0x0) {
      pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae4e80);
    }
  }
  else {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae4ea8);
  }
  iVar1 = FUN_03f6f584();
  fVar3 = (float)FUN_03f6f558(*(undefined4 *)(this + 0x3c));
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,(int)((float)iVar1 * fVar3),(int)((float)iVar1 * fVar3),
             (int)((float)*(int *)(pIVar2 + 0x38) * *(float *)(param_1 + 0x18) * fVar3),
             (int)((float)*(int *)(pIVar2 + 0x3c) * *(float *)(param_1 + 0x1c) * fVar3));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCursor::applyPlantFoodToGridItem() */

void PlantfoodCursor::applyPlantFoodToGridItem(void)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  GridItem *pGVar6;
  GridItemLilyPad *this;
  wchar16 *pwVar7;
  long lVar8;
  GridItemFlowerPot *pGVar9;
  GridItemFlowerPot *this_00;
  long *plVar10;
  LineBreakCategory *pLVar11;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Board *pBVar12;
  float fVar13;
  float fVar14;
  LineBreakCategory aLStack_28 [8];
  LineBreakCategory aLStack_20 [8];
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  fVar14 = (float)local_c;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) && (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')
     ) {
    fVar13 = (float)Board::calculateRoofOffsetZ((float)local_10);
    fVar14 = fVar14 + fVar13;
  }
  uVar3 = BoardTransforms::BoardSpaceToGridX((float)local_10);
  uVar4 = BoardTransforms::BoardSpaceToGridY(fVar14);
  pGVar6 = (GridItem *)FUN_03f6fe70(uVar3,uVar4);
  if (pGVar6 == (GridItem *)0x0) {
    pGVar9 = (GridItemFlowerPot *)FUN_03f6ff54(uVar3,uVar4);
    if (pGVar9 != (GridItemFlowerPot *)0x0) {
      nop();
      GridItemFlowerPot::ApplyPlantfood(this_00);
      MessageRouter::Broadcast<GridItem*,GridItemFlowerPot*>
                ((MessageRouter *)gMessageRouter,Message::ToolAppliedPlantfoodToGridItem,pGVar9);
      goto LAB_03f702d0;
    }
    plVar10 = (long *)FUN_03f70038(uVar3,uVar4);
    if ((plVar10 == (long *)0x0) &&
       (plVar10 = (long *)FUN_03f7011c(uVar3,uVar4), plVar10 == (long *)0x0)) {
      cVar2 = '\0';
      goto LAB_03f70310;
    }
    cVar2 = (**(code **)(*plVar10 + 0x2a8))();
    if (cVar2 == '\0') {
      cVar2 = '\0';
      goto LAB_03f70310;
    }
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar11 = aLStack_28;
    std::string::string(asStack_18,"FreePlanting");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)asStack_18,pLVar11,in_x3,in_x4);
    if (cVar2 != '\0') {
      std::string::~string(asStack_18);
      nop();
      goto LAB_03f70310;
    }
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar11 = aLStack_20;
    std::string::string((string *)&local_10,"UnlimitedPlantfood");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)&local_10,pLVar11,in_x3,in_x4);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar2 == '\0') {
      cVar2 = '\x01';
      pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      uVar5 = Board::GetPlantfoodCount(pBVar12);
      Board::SetPlantfoodCount(pBVar12,(uVar5 & 0xff) - 1);
      goto LAB_03f70310;
    }
  }
  else {
    nop();
    GridItemLilyPad::ApplyPlantfood(this);
    MessageRouter::Broadcast<GridItem*,GridItem*>
              ((MessageRouter *)gMessageRouter,Message::ToolAppliedPlantfoodToGridItem,pGVar6);
LAB_03f702d0:
    pLVar11 = aLStack_28;
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_18,"FreePlanting");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)asStack_18,pLVar11,in_x3,in_x4);
    if (cVar2 != '\0') {
      std::string::~string(asStack_18);
      nop();
      goto LAB_03f70310;
    }
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar11 = aLStack_20;
    std::string::string((string *)&local_10,"UnlimitedPlantfood");
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)&local_10,pLVar11,in_x3,in_x4);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar2 == '\0') {
      cVar2 = '\x01';
      pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      uVar5 = Board::GetPlantfoodCount(pBVar12);
      Board::SetPlantfoodCount(pBVar12,(uVar5 & 0xff) - 1);
      puVar1 = gMessageRouter;
      GridItem::GetType();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      FUN_05475d88((string *)&local_10,lVar8 + 8);
      MessageRouter::Broadcast<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::PlantfoodUsed,(string *)&local_10);
      std::string::~string((string *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      goto LAB_03f70310;
    }
  }
  cVar2 = '\x01';
LAB_03f70310:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCursor::tryToUsePlantfood() */

void PlantfoodCursor::tryToUsePlantfood(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  BaseCursor *in_x0;
  long lVar5;
  PlantGroup *pPVar6;
  RtObject *this;
  SeedPacket *this_00;
  wchar16 *pwVar7;
  ulong uVar8;
  int *piVar9;
  char *pcVar10;
  LineBreakCategory *pLVar11;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  Board *pBVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  LineBreakCategory aLStack_30 [8];
  LineBreakCategory aLStack_28 [8];
  int local_20;
  int local_1c;
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x42] == (BaseCursor)0x0) {
    cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,0x16);
    if (cVar1 != '\0') {
      BaseCursor::GetUIWidgetPosition(in_x0);
      this = (RtObject *)UIWidget::GetMouseOverWidget(local_20,local_1c,200);
      if (((this != (RtObject *)0x0) &&
          (this_00 = Sexy::RtObject::Cast<SeedPacket>(this), this_00 != (SeedPacket *)0x0)) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 400))(), cVar1 == '\0')) {
        pLVar11 = aLStack_30;
        FishingEnergyBar::onGameUnpaused((FishingEnergyBar *)this_00);
        pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        std::string::string(asStack_18,"FreePlanting");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar7,(wchar16 *)asStack_18,pLVar11,in_x3,in_x4);
        if (cVar1 == '\0') {
          pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pLVar11 = aLStack_28;
          std::string::string((string *)&local_10,"UnlimitedPlantfood");
          cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar7,(wchar16 *)&local_10,pLVar11,in_x3,in_x4);
          std::string::~string((string *)&local_10);
          nop();
          std::string::~string(asStack_18);
          nop();
          if (cVar1 == '\0') {
            pBVar12 = *(Board **)(gLawnApp + 0x9f0);
            uVar4 = Board::GetPlantfoodCount(pBVar12);
            Board::SetPlantfoodCount(pBVar12,(uVar4 & 0xff) - 1);
            iVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
            if (-1 < iVar2) {
              uVar13 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd20);
              uVar8 = FUN_03f6f560(uVar13,*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd28));
              if ((ulong)(long)iVar2 < uVar8) {
                piVar9 = (int *)FUN_03f6f578(uVar13,(long)iVar2);
                *piVar9 = *piVar9 + 1;
              }
            }
          }
        }
        else {
          std::string::~string(asStack_18);
          nop();
        }
        goto LAB_03f70dc4;
      }
    }
    BaseCursor::GetBoardPosition();
    fVar16 = (float)local_10;
    BaseCursor::GetBoardPosition();
    fVar15 = (float)local_c;
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar14 = (float)Board::calculateRoofOffsetZ(fVar16);
      fVar15 = fVar15 + fVar14;
    }
    iVar2 = BoardTransforms::BoardSpaceToGridX(fVar16);
    iVar3 = BoardTransforms::BoardSpaceToGridY(fVar15);
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    if (pBVar12 != (Board *)0x0) {
      uVar13 = *(undefined8 *)(pBVar12 + 0xad8);
      lVar5 = FUN_03f6f55c(uVar13);
      if (lVar5 != 0) {
        lVar5 = FUN_03f6fe64(uVar13);
        if ((lVar5 == 0) || (-1 < iVar2)) {
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        }
        else {
          BaseCursor::GetBoardPosition();
          iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(local_10);
          iVar2 = iVar2 + -1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        }
      }
    }
    pPVar6 = (PlantGroup *)Board::GetPlantGroupAt(pBVar12,iVar2,iVar3);
    if ((pPVar6 == (PlantGroup *)0x0) ||
       (cVar1 = PlantGroup::HasNonRelocatingPlant(), cVar1 == '\0')) {
      cVar1 = applyPlantFoodToGridItem();
      if (cVar1 == '\0') {
        pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar10,"Play_UI_Game_PlantFood_Disarm");
      }
    }
    else {
      cVar1 = ApplyPlantFoodToPlantGroup(pPVar6);
      if (cVar1 == '\0') {
        pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar10,"Play_UI_Game_Nitro_Fail");
      }
      else {
        in_x0[0x42] = (BaseCursor)0x1;
      }
    }
  }
LAB_03f70dc4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantfoodCursor::onTouchEvent(PlantfoodCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar2 == '\0') {
      tryToUsePlantfood();
      BaseCursor::Destroy((BaseCursor *)this);
      return '\x01';
    }
    BaseCursor::cacheOrDestroyCursor((BaseCursor *)this);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Game_PlantFood_Disarm");
  }
  return cVar2;
}

