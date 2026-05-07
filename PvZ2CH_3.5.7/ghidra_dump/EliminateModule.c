// Class: EliminateModule


/* EliminateModule::onLevelStarted() */

void EliminateModule::onLevelStarted(void)

{
  return;
}


/* EliminateModule::onFallDone(BoardEntity*) */

void EliminateModule::onFallDone(BoardEntity *param_1)

{
  return;
}


/* EliminateModule::preventSave() */

undefined8 EliminateModule::preventSave(void)

{
  return 1;
}


/* EliminateModule::cancelTouch() */

void __thiscall EliminateModule::cancelTouch(EliminateModule *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* EliminateModule::onPlantFoodEliminateDone(BoardEntity*) */

void EliminateModule::onPlantFoodEliminateDone(BoardEntity *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}


/* EliminateModule::onNarrationFinished() */

void EliminateModule::onNarrationFinished(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onReviveOK() */

void __thiscall EliminateModule::onReviveOK(EliminateModule *this)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[0xc2] = (EliminateModule)0x0;
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 3;
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[ELIMINATE_STEP_COUNT]");
  TodReplaceNumberString(awStack_18,L"{STEP_COUNT}",*(int *)(this + 0xb0) - *(int *)(this + 0xac));
  FUN_054766c8(awStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  if (*(PrimeTextWidget **)(this + 0x118) != (PrimeTextWidget *)0x0) {
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x118),awStack_18);
  }
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::onEliminateColorDisappear(int, int) */

void __thiscall
EliminateModule::onEliminateColorDisappear(EliminateModule *this,int param_1,int param_2)

{
  char cVar1;
  EliminateItem *this_00;
  
  this_00 = *(EliminateItem **)(*(long *)(this + 0x20) + (long)(param_2 + param_1 * 6) * 8);
  if (((this_00 != (EliminateItem *)0x0) &&
      (cVar1 = EliminateItem::IsSelect(this_00), cVar1 == '\0')) &&
     (cVar1 = EliminateItem::IsBlock(this_00), cVar1 == '\0')) {
    EliminateItem::EliminateItemInitialize(this_00,*(undefined4 *)(this + 0x54));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::StaticClassInit() */

void EliminateModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"EliminateModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a01be0,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::StaticGetClass() */

long * EliminateModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"EliminateModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateModule::GetEliminateFence() */

EliminateModule * __thiscall EliminateModule::GetEliminateFence(EliminateModule *this)

{
  return this + 0x168;
}


/* EliminateModule::CanFreezingWind() */

EliminateModule __thiscall EliminateModule::CanFreezingWind(EliminateModule *this)

{
  return this[0xb4];
}


/* EliminateModule::setState(EliminateState) */

void __thiscall EliminateModule::setState(EliminateModule *this,int param_2)

{
  char cVar1;
  long lVar2;
  EliminateItem *this_00;
  
  if (*(int *)(this + 0x28) != param_2) {
    *(int *)(this + 0x28) = param_2;
    lVar2 = 0;
    do {
      while ((this_00 = *(EliminateItem **)(*(long *)(this + 0x20) + lVar2),
             this_00 != (EliminateItem *)0x0 &&
             (cVar1 = EliminateItem::IsSelect(this_00), cVar1 == '\0'))) {
        if (*(int *)(this + 0x28) != 1) {
          EliminateItem::setAlpha(this_00,true);
          break;
        }
        lVar2 = lVar2 + 8;
        EliminateItem::setAlpha(this_00,false);
        if (lVar2 == 0xf0) {
          return;
        }
      }
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0xf0);
  }
  return;
}


/* EliminateModule::onReloadFallDone(BoardEntity*) */

void EliminateModule::onReloadFallDone(BoardEntity *param_1)

{
  setState((EliminateModule *)param_1,1);
  return;
}


/* EliminateModule::onPlantFoodEnd(Plant*) */

void __thiscall EliminateModule::onPlantFoodEnd(EliminateModule *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    param_1[0x158] = (Plant)0x0;
  }
  setState(this,1);
  return;
}


/* EliminateModule::getDirection(EliminateItem*, EliminateItem*) */

undefined4 __thiscall
EliminateModule::getDirection(EliminateModule *this,EliminateItem *param_1,EliminateItem *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar2 = *(int *)(param_2 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar1 == iVar2) {
    uVar5 = 2;
    if (iVar3 <= *(int *)(param_2 + 0xa4)) {
      uVar5 = 7;
    }
    return uVar5;
  }
  iVar4 = *(int *)(param_2 + 0xa4);
  if (iVar3 == iVar4) {
    uVar5 = 4;
    if (iVar1 <= iVar2) {
      uVar5 = 5;
    }
    return uVar5;
  }
  if (iVar2 < iVar1) {
    uVar5 = 6;
    if (iVar4 <= iVar3) {
      uVar5 = 1;
    }
    return uVar5;
  }
  if (iVar1 < iVar2) {
    uVar5 = 8;
    if (iVar4 <= iVar3) {
      uVar5 = 1;
    }
    if (iVar4 < iVar3) {
      uVar5 = 3;
    }
    return uVar5;
  }
  return 1;
}


/* EliminateModule::GetEmptyRowFromButtom(int) */

undefined8 __thiscall EliminateModule::GetEmptyRowFromButtom(EliminateModule *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x20);
  if (*(long *)(lVar1 + (long)(param_1 + 0x18) * 8) == 0) {
    return 4;
  }
  if (*(long *)(lVar1 + (long)(param_1 + 0x12) * 8) == 0) {
    return 3;
  }
  if (*(long *)(lVar1 + (long)(param_1 + 0xc) * 8) == 0) {
    return 2;
  }
  if (*(long *)(lVar1 + (long)(param_1 + 6) * 8) != 0) {
    if (*(long *)(lVar1 + (long)param_1 * 8) != 0) {
      return 0xffffffff;
    }
    return 0;
  }
  return 1;
}


/* EliminateModule::checkHavePlantFood() */

undefined8 __thiscall EliminateModule::checkHavePlantFood(EliminateModule *this)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar3);
    lVar3 = lVar3 + 8;
    if (((PlantOlivePit *)*puVar1 != (PlantOlivePit *)0x0) &&
       (iVar2 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)*puVar1), iVar2 == 5)) break;
    if (lVar3 == 0xf0) {
      return 0;
    }
  }
  return 1;
}


/* EliminateModule::checkHaveBlock() */

char __thiscall EliminateModule::checkHaveBlock(EliminateModule *this)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar3);
    lVar3 = lVar3 + 8;
    if ((EliminateItem *)*puVar1 != (EliminateItem *)0x0) {
      cVar2 = EliminateItem::IsBlock((EliminateItem *)*puVar1);
      if (cVar2 != '\0') {
        return cVar2;
      }
    }
  } while (lVar3 != 0xf0);
  return '\0';
}


/* EliminateModule::checkBlockNearBy() */

void __thiscall EliminateModule::checkBlockNearBy(EliminateModule *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  EliminateItem *pEVar11;
  
  uVar7 = *(undefined8 *)(this + 0x38);
  iVar3 = FUN_049fd61c(uVar7,*(undefined8 *)(this + 0x40));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
    return;
  }
  lVar9 = (long)(int)uVar1 + -1;
  lVar8 = (long)(int)uVar1;
  lVar10 = lVar9;
  do {
    plVar4 = (long *)FUN_049fd628(uVar7,lVar8);
    lVar8 = *plVar4;
    if (lVar8 != 0) {
      iVar3 = *(int *)(lVar8 + 0xa4);
      if (iVar3 < 1) {
        iVar5 = *(int *)(lVar8 + 0xa8);
        lVar6 = *(long *)(this + 0x20);
LAB_049fe6c0:
        pEVar11 = *(EliminateItem **)(lVar6 + (long)(iVar5 + (iVar3 + 1) * 6) * 8);
        if (pEVar11 != (EliminateItem *)0x0) {
          cVar2 = EliminateItem::IsBlock(pEVar11);
          if (cVar2 == '\0') {
            iVar5 = *(int *)(lVar8 + 0xa8);
            iVar3 = *(int *)(lVar8 + 0xa4);
            lVar6 = *(long *)(this + 0x20);
          }
          else {
            EliminateItem::takeBlockDamge(pEVar11);
            iVar5 = *(int *)(lVar8 + 0xa8);
            iVar3 = *(int *)(lVar8 + 0xa4);
            lVar6 = *(long *)(this + 0x20);
          }
        }
      }
      else {
        iVar5 = *(int *)(lVar8 + 0xa8);
        lVar6 = *(long *)(this + 0x20);
        pEVar11 = *(EliminateItem **)(lVar6 + (long)(iVar5 + (iVar3 + -1) * 6) * 8);
        if (pEVar11 != (EliminateItem *)0x0) {
          cVar2 = EliminateItem::IsBlock(pEVar11);
          if (cVar2 != '\0') {
            EliminateItem::takeBlockDamge(pEVar11);
          }
          iVar3 = *(int *)(lVar8 + 0xa4);
          iVar5 = *(int *)(lVar8 + 0xa8);
          lVar6 = *(long *)(this + 0x20);
        }
        if (iVar3 < 4) goto LAB_049fe6c0;
      }
      if (0 < iVar5) {
        pEVar11 = *(EliminateItem **)(lVar6 + (long)(iVar5 + -1 + iVar3 * 6) * 8);
        if (pEVar11 != (EliminateItem *)0x0) {
          cVar2 = EliminateItem::IsBlock(pEVar11);
          if (cVar2 == '\0') {
            iVar5 = *(int *)(lVar8 + 0xa8);
          }
          else {
            EliminateItem::takeBlockDamge(pEVar11);
            iVar5 = *(int *)(lVar8 + 0xa8);
          }
        }
        if (4 < iVar5) goto joined_r0x049fe694;
        iVar3 = *(int *)(lVar8 + 0xa4);
        lVar6 = *(long *)(this + 0x20);
      }
      pEVar11 = *(EliminateItem **)(lVar6 + (long)(iVar5 + 1 + iVar3 * 6) * 8);
      if ((pEVar11 != (EliminateItem *)0x0) &&
         (cVar2 = EliminateItem::IsBlock(pEVar11), cVar2 != '\0')) {
        EliminateItem::takeBlockDamge(pEVar11);
      }
    }
joined_r0x049fe694:
    if (lVar10 == lVar9 - (ulong)uVar1) {
      return;
    }
    uVar7 = *(undefined8 *)(this + 0x38);
    lVar8 = lVar10;
    lVar10 = lVar10 + -1;
  } while( true );
}


/* EliminateModule::setNearByItemsAlpha(EliminateItem*) */

void __thiscall EliminateModule::setNearByItemsAlpha(EliminateModule *this,EliminateItem *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  PlantOlivePit *this_00;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = 0;
LAB_049fe7a0:
  do {
    this_00 = *(PlantOlivePit **)(*(long *)(this + 0x20) + lVar9);
    if (this_00 != (PlantOlivePit *)0x0) {
      uVar8 = *(undefined8 *)(this + 0x38);
      iVar3 = FUN_049fd61c(uVar8,*(undefined8 *)(this + 0x40));
      uVar1 = iVar3 - 1;
      if (-1 < (int)uVar1) {
        lVar6 = (long)(int)uVar1;
        do {
          lVar7 = lVar6 + -1;
          plVar5 = (long *)FUN_049fd628(uVar8,lVar6);
          if ((PlantOlivePit *)*plVar5 == this_00) goto LAB_049fe7f8;
          lVar6 = lVar7;
        } while (lVar7 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
      }
      iVar3 = PlantOlivePit::CalcRenderOrder(this_00);
      iVar4 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)param_1);
      if (iVar3 == iVar4) {
        EliminateItem::setAlpha((EliminateItem *)this_00,false);
      }
      else {
        EliminateItem::setAlpha((EliminateItem *)this_00,true);
      }
      cVar2 = EliminateItem::IsNearByPlantFood((EliminateItem *)this_00,param_1);
      if (cVar2 != '\0') {
        lVar9 = lVar9 + 8;
        EliminateItem::setAlpha((EliminateItem *)this_00,false);
        if (lVar9 == 0xf0) {
          return;
        }
        goto LAB_049fe7a0;
      }
    }
LAB_049fe7f8:
    lVar9 = lVar9 + 8;
    if (lVar9 == 0xf0) {
      return;
    }
  } while( true );
}


/* EliminateModule::clearItemsAlpha() */

void __thiscall EliminateModule::clearItemsAlpha(EliminateModule *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar2);
    lVar2 = lVar2 + 8;
    if ((EliminateItem *)*puVar1 != (EliminateItem *)0x0) {
      EliminateItem::setAlpha((EliminateItem *)*puVar1,false);
    }
  } while (lVar2 != 0xf0);
  return;
}


/* EliminateModule::clearItemsShowTip() */

void __thiscall EliminateModule::clearItemsShowTip(EliminateModule *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar2);
    lVar2 = lVar2 + 8;
    if ((EliminateItem *)*puVar1 != (EliminateItem *)0x0) {
      EliminateItem::playShowTip((EliminateItem *)*puVar1,false);
    }
  } while (lVar2 != 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::renderStep(Sexy::Graphics*) */

void __thiscall EliminateModule::renderStep(EliminateModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Point *extraout_x1;
  SexyVector2 *extraout_x1_00;
  ulong uVar6;
  float fVar7;
  FastCurve aFStack_50 [8];
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  lVar3 = FUN_049fd1e0(*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0x80));
  if (lVar3 != 0) {
    do {
      Sexy::Point::Point((Point *)&local_48,6,(int)uVar6);
      BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_48,extraout_x1);
      if (((DAT_06b78178 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b78178), iVar1 != 0)) {
        iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar1 = FUN_049fdfa4(-2 - iVar1);
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar2 = FUN_049fdfa4(-5 - iVar2);
        Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06b780e8,(float)iVar1,(float)iVar2);
        __cxa_guard_release(&DAT_06b78178);
      }
      iVar1 = FUN_049fdfa4(local_40);
      iVar2 = FUN_049fdfa4(local_3c);
      fVar7 = (float)iVar2;
      Sexy::FastCurve::SetOutRange(aFStack_50,(float)iVar1,fVar7);
      local_48 = Sexy::SexyVector2::operator+
                           ((SexyVector2 *)aFStack_50,(SexyVector2 *)&DAT_06b780e8);
      local_44 = fVar7;
      Sexy::SexyTransform2D::CreateTranslation((SexyTransform2D *)&local_48,extraout_x1_00);
      puVar4 = (undefined8 *)FUN_049fd60c(*(undefined8 *)(this + 0x180),uVar6);
      if ((PopAnimRig *)*puVar4 != (PopAnimRig *)0x0) {
        PopAnimRig::SetRenderTransform((PopAnimRig *)*puVar4,aSStack_30);
        puVar4 = (undefined8 *)FUN_049fd60c(*(undefined8 *)(this + 0x180),uVar6);
        PopAnimRig::Draw((PopAnimRig *)*puVar4,param_1);
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_049fd1e0(*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0x80));
    } while (uVar6 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::renderHighLight(Sexy::Graphics*) */

void __thiscall EliminateModule::renderHighLight(EliminateModule *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     ((*(int *)(this + 0x28) - 2U < 2 || (*(int *)(this + 0x28) == 0)))) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    fVar12 = *(float *)(param_1 + 0x20);
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
    *(float *)(param_1 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
    *(float *)(param_1 + 0x14) = (float)iVar1;
    iVar1 = FUN_049fdfa4(200);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar11 = *(float *)(param_1 + 0x24);
    iVar2 = FUN_049fdfa4(0xa0);
    fVar10 = *(float *)(param_1 + 0x1c);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0x95);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar6 = (float)FUN_049fdfb8(0);
    fVar7 = (float)FUN_049fdfb8((float)iVar3);
    lVar5 = *(long *)(gLawnApp + 0x9f0);
    fVar8 = (float)FUN_049fdfb8((float)iVar4 * (float)*(int *)(lVar5 + 0xfc));
    Sexy::Insets::Insets
              (aIStack_18,
               (int)((float)(int)((float)(int)(((float)iVar1 - fVar12) * fVar9) + fVar12) + fVar6),
               (int)((float)(int)(((float)iVar2 - fVar11) * fVar10) + fVar11),
               (int)((float)*(int *)(lVar5 + 0xf8) * *(float *)(param_1 + 0x18) * fVar7),
               (int)(fVar8 * *(float *)(param_1 + 0x1c)));
    Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_18);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::clearSelectItems() */

void __thiscall EliminateModule::clearSelectItems(EliminateModule *this)

{
  std::vector<EliminateItem*,std::allocator<EliminateItem*>>::clear
            ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)(this + 0x38));
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::GetItemFromTouch(Sexy::SexyVector2 const&) */

void __thiscall EliminateModule::GetItemFromTouch(EliminateModule *this,SexyVector2 *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TRect<int> aTStack_18 [16];
  long local_8;
  
  lVar2 = 0;
  local_8 = ___stack_chk_guard;
  do {
    lVar3 = *(long *)(*(long *)(this + 0x20) + lVar2);
    if (lVar3 != 0) {
      EliminateItem::GetAttackRect();
      cVar1 = Sexy::TRect<int>::Contains
                        (aTStack_18,(int)*(float *)param_1,(int)*(float *)(param_1 + 4));
      if (cVar1 != '\0') goto LAB_049fed64;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xf0);
  lVar3 = 0;
LAB_049fed64:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* EliminateModule::takePlantFood() */

void __thiscall EliminateModule::takePlantFood(EliminateModule *this)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x50);
  this[0x110] = (EliminateModule)0x1;
  if (-1 < iVar1) {
    uVar6 = *(undefined8 *)(this + 0x78);
    uVar3 = FUN_049fd1e0(uVar6,*(undefined8 *)(this + 0x80));
    if ((ulong)(long)iVar1 < uVar3) {
      this_00 = (RtWeakPtr *)FUN_049fd638(uVar6,iVar1);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 FUN_049fd638(*(undefined8 *)(this + 0x78),*(undefined4 *)(this + 0x50));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        *(undefined1 *)(lVar5 + 0x158) = 1;
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 FUN_049fd638(*(undefined8 *)(this + 0x78),*(undefined4 *)(this + 0x50));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        (**(code **)(**(long **)(lVar5 + 0xa8) + 0x220))(*(long **)(lVar5 + 0xa8));
        return;
      }
    }
  }
  return;
}


/* EliminateModule::takeShoot() */

void __thiscall EliminateModule::takeShoot(EliminateModule *this)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  UIEasyButtonWidget *this_01;
  long *plVar5;
  Plant *this_02;
  undefined8 uVar6;
  
  if (0 < *(int *)(this + 0x74)) {
    setState(this,3);
    iVar1 = *(int *)(this + 0x50);
    if (-1 < iVar1) {
      uVar6 = *(undefined8 *)(this + 0x78);
      uVar3 = FUN_049fd1e0(uVar6,*(undefined8 *)(this + 0x80));
      if ((ulong)(long)iVar1 < uVar3) {
        this_00 = (RtWeakPtr *)FUN_049fd638(uVar6,iVar1);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar2) {
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_049fd638(*(undefined8 *)(this + 0x78),*(undefined4 *)(this + 0x50));
          this_01 = (UIEasyButtonWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
          (**(code **)(*plVar5 + 0x80))(0x40000000);
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_049fd638(*(undefined8 *)(this + 0x78),*(undefined4 *)(this + 0x50));
          this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          Plant::PlayAttackAnimation(this_02);
        }
      }
    }
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + -1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::NeedShowShieldTip(int) */

void __thiscall EliminateModule::NeedShowShieldTip(EliminateModule *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x150));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar2 == param_1)) break;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* EliminateModule::GetPlantIndexStart() */

bool __thiscall EliminateModule::GetPlantIndexStart(EliminateModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar2 = FUN_049fd600(*(undefined8 *)(pRVar1 + 0x68),*(undefined8 *)(pRVar1 + 0x70));
  if (lVar2 != 1) {
    return lVar2 == 3;
  }
  return (bool)2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::checkPlantFoodNearBy() */

void __thiscall EliminateModule::checkPlantFoodNearBy(EliminateModule *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  PlantOlivePit *this_00;
  long lVar9;
  long lVar10;
  long lVar11;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = checkHavePlantFood(this);
  if (cVar2 != '\0') {
    uVar8 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x98) = 0;
    iVar3 = FUN_049fd61c(uVar8,*(undefined8 *)(this + 0x40));
    uVar1 = iVar3 - 1;
    if (-1 < (int)uVar1) {
      lVar10 = (long)(int)uVar1;
      lVar11 = lVar10 + -1;
      do {
        plVar6 = (long *)FUN_049fd628(uVar8,lVar10);
        lVar9 = *plVar6;
        if (lVar9 != 0) {
          iVar3 = *(int *)(lVar9 + 0xa4);
          if (iVar3 < 1) {
            iVar4 = *(int *)(lVar9 + 0xa8);
            lVar7 = *(long *)(this + 0x20);
LAB_049ff288:
            this_00 = *(PlantOlivePit **)(lVar7 + (long)(iVar4 + (iVar3 + 1) * 6) * 8);
            if (this_00 != (PlantOlivePit *)0x0) {
              iVar3 = PlantOlivePit::CalcRenderOrder(this_00);
              if (iVar3 == 5) goto LAB_049ff2e4;
              iVar4 = *(int *)(lVar9 + 0xa8);
              iVar3 = *(int *)(lVar9 + 0xa4);
              lVar7 = *(long *)(this + 0x20);
            }
joined_r0x049ff220:
            if (0 < iVar4) {
              this_00 = *(PlantOlivePit **)(lVar7 + (long)(iVar4 + -1 + iVar3 * 6) * 8);
              if (this_00 != (PlantOlivePit *)0x0) {
                iVar3 = PlantOlivePit::CalcRenderOrder(this_00);
                if (iVar3 == 5) goto LAB_049ff2e4;
                iVar4 = *(int *)(lVar9 + 0xa8);
              }
              if (4 < iVar4) goto LAB_049ff254;
              iVar3 = *(int *)(lVar9 + 0xa4);
              lVar7 = *(long *)(this + 0x20);
            }
            this_00 = *(PlantOlivePit **)(lVar7 + (long)(iVar4 + 1 + iVar3 * 6) * 8);
            if ((this_00 == (PlantOlivePit *)0x0) ||
               (iVar3 = PlantOlivePit::CalcRenderOrder(this_00), iVar3 != 5)) goto LAB_049ff254;
          }
          else {
            iVar4 = *(int *)(lVar9 + 0xa8);
            lVar7 = *(long *)(this + 0x20);
            this_00 = *(PlantOlivePit **)(lVar7 + (long)(iVar4 + (iVar3 + -1) * 6) * 8);
            if (this_00 == (PlantOlivePit *)0x0) {
LAB_049ff214:
              if (iVar3 < 4) goto LAB_049ff288;
              goto joined_r0x049ff220;
            }
            iVar3 = PlantOlivePit::CalcRenderOrder(this_00);
            if (iVar3 != 5) {
              iVar3 = *(int *)(lVar9 + 0xa4);
              iVar4 = *(int *)(lVar9 + 0xa8);
              lVar7 = *(long *)(this + 0x20);
              goto LAB_049ff214;
            }
          }
LAB_049ff2e4:
          *(PlantOlivePit **)(this + 0x98) = this_00;
          goto LAB_049ff2e8;
        }
LAB_049ff254:
        lVar10 = lVar10 + -1;
        if (lVar10 == lVar11 - (ulong)uVar1) goto LAB_049ff3a0;
        uVar8 = *(undefined8 *)(this + 0x38);
      } while( true );
    }
  }
LAB_049ff36c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_049ff3a0:
  this_00 = *(PlantOlivePit **)(this + 0x98);
  if (this_00 != (PlantOlivePit *)0x0) {
LAB_049ff2e8:
    iVar3 = *(int *)(this_00 + 0xa4);
    iVar4 = *(int *)(this_00 + 0xa8);
    this[0xa0] = (EliminateModule)0x1;
    *(undefined8 *)(*(long *)(this + 0x20) + (long)(iVar4 + iVar3 * 6) * 8) = 0;
    DVec3::DVec3((DVec3 *)&local_18);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = (float)((100 - iVar3) * 2);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar3 = *(int *)(this + 0x50);
    iVar5 = GetPlantIndexStart(this);
    local_10 = 0;
    local_14 = (float)(iVar4 * (iVar3 + iVar5) + 0xa0);
    EliminateItem::setAlpha(*(EliminateItem **)(this + 0x98),false);
    EliminateItem::playPlantFood(*(EliminateItem **)(this + 0x98));
  }
  goto LAB_049ff36c;
}


/* EliminateModule::GetHitpointPercent() */

undefined4 __thiscall EliminateModule::GetHitpointPercent(EliminateModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x4c);
}


/* EliminateModule::CanSpawnShield() */

ResilienceTutorialIntroProperties __thiscall EliminateModule::CanSpawnShield(EliminateModule *this)

{
  ResilienceTutorialIntroProperties RVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RVar1 = (ResilienceTutorialIntroProperties)0x0;
  if (this[0xb5] != (EliminateModule)0x0) {
    RVar1 = pRVar2[0x50];
  }
  return RVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onMissionFinish() */

void __thiscall EliminateModule::onMissionFinish(EliminateModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0xc0] = (EliminateModule)0x1;
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar2[0x52] != (ResilienceTutorialIntroProperties)0x0) {
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar1 = CrazyNPCManager::IsNarrationActive(pCVar3);
    if ((cVar1 == '\0') && (this[0xc2] == (EliminateModule)0x0)) {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"ZOMBIE_INTRO_ELIMINATE_MISSIONFINISH");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addToRenderQueue(RenderQueue*) */

void __thiscall EliminateModule::addToRenderQueue(EliminateModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderStep);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<EliminateModule,void(EliminateModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x61a81,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onInitFallDone(BoardEntity*) */

void __thiscall EliminateModule::onInitFallDone(EliminateModule *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  long lVar5;
  EliminateItem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_18 = FUN_049ff6a0(*(undefined8 *)(pRVar4 + 0x80));
  local_10 = FUN_049ff6f0(*(undefined8 *)(pRVar4 + 0x88));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar1 = *(int *)(lVar5 + 4);
    iVar2 = *(int *)(lVar5 + 8);
    if ((((*(char *)(lVar5 + 0xc) != '\0') && (param_1 != (BoardEntity *)0x0)) &&
        (this_00 = Sexy::RtObject::Cast<EliminateItem>((RtObject *)param_1),
        this_00 != (EliminateItem *)0x0)) &&
       ((*(int *)(this_00 + 0xa4) == iVar2 && (iVar1 == *(int *)(this_00 + 0xa8))))) {
      EliminateItem::setBlock(this_00);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onToolAppliedPlantFood(PlantGroup*) */

void __thiscall EliminateModule::onToolAppliedPlantFood(EliminateModule *this,PlantGroup *param_1)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,3);
  *(undefined4 *)(this + 0x10c) = 0;
  this[0x110] = (EliminateModule)0x1;
  if (param_1 != (PlantGroup *)0x0) {
    PlantGroup::GetTopPlant(param_1);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (pRVar1 != (ResourceInfo *)0x0) {
      pRVar1[0x158] = (ResourceInfo)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::onColorMoveDone(BoardEntity*) */

EliminateModule * __thiscall
EliminateModule::onColorMoveDone(EliminateModule *this,BoardEntity *param_1)

{
  EliminateColor *this_00;
  EliminateModule *pEVar1;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<EliminateColor>((RtObject *)param_1),
     this = (EliminateModule *)0x0, this_00 != (EliminateColor *)0x0)) {
    pEVar1 = (EliminateModule *)EliminateColor::playDisappearAnim(this_00);
    return pEVar1;
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onZombossMechTakeDamage(std::string const&) */

void __thiscall EliminateModule::onZombossMechTakeDamage(EliminateModule *this,string *param_1)

{
  EliminateModule EVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Effect_FloatingText *this_00;
  code *pcVar5;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  FastCurve aFStack_18 [16];
  long local_8;
  
  iVar3 = *(int *)(this + 0x10c);
  EVar1 = this[0x110];
  local_8 = ___stack_chk_guard;
  *(uint *)(this + 0x10c) = iVar3 + 1U;
  bVar2 = std::operator==(param_1,"peashooter");
  if ((bVar2) || (bVar2 = std::operator==(param_1,"threepeater"), bVar2)) {
    iVar4 = 2;
LAB_049ffad0:
    if (EVar1 != (EliminateModule)0x0 && (iVar3 + 1U & 3) != 0) goto LAB_049ffad4;
  }
  else {
    iVar4 = 1;
    bVar2 = std::operator==(param_1,"coconutcannon");
    if (!bVar2) {
      bVar2 = std::operator==(param_1,"firepeashooter");
      iVar4 = 0;
      if (!bVar2) {
        iVar4 = 4;
        bVar2 = std::operator==(param_1,"fumeshroom");
        if (!bVar2) {
          bVar2 = std::operator==(param_1,"snowpea");
          if ((bVar2) || (bVar2 = std::operator==(param_1,"wintermelon"), bVar2)) {
            iVar4 = 3;
          }
          else {
            iVar4 = 0;
          }
        }
        goto LAB_049ffad0;
      }
    }
  }
  FUN_05478178(awStack_28,L"[CANNON_COMBO]",aFStack_18);
  nop();
  Sexy::StrFormat(L"%d",awStack_20,(ulong)*(uint *)(this + 0x10c));
  TodReplaceString(awStack_28,L"{COMBO}",awStack_20);
  FUN_054766c8(awStack_28,aFStack_18);
  FUN_05476c50(aFStack_18);
  FUN_05476c50(awStack_20);
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpaceX(6);
  iVar3 = FUN_049fdfa4();
  BoardTransforms::GridToBoardSpaceY(iVar4);
  iVar4 = FUN_049fdfa4();
  Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar3,(float)(iVar4 + -0x32));
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)aFStack_18,0xf4241);
  Effect_FloatingText::SetText((wstring *)this_00);
  Effect_FloatingText::SetStyle(this_00,3);
  pcVar5 = *(code **)(*(long *)this_00 + 0x78);
  Sexy::Color::Color((Color *)aFStack_18,2);
  (*pcVar5)(this_00,aFStack_18);
  Effect_FloatingText::SetDuration(this_00,0.5);
  PresentDisplayRect::SetPAMScale((PresentDisplayRect *)this_00,0.5);
  (**(code **)(*(long *)this_00 + 0x80))(0x3fa00000,this_00);
  DVec2::DVec2((DVec2 *)aFStack_18,2.5,2.5);
  Effect_FloatingText::SetFinalScale(this_00,aFStack_18);
  FUN_05476c50(awStack_28);
LAB_049ffad4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::EliminateModule() */

void __thiscall EliminateModule::EliminateModule(EliminateModule *this)

{
  void *__s;
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692d8c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 200));
  TimeLineTrack<Sexy::SexyVector3>::TimeLineTrack((TimeLineTrack<Sexy::SexyVector3> *)(this + 0xd0))
  ;
  DVec3::DVec3((DVec3 *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0xa0] = (EliminateModule)0x0;
  this[0xa1] = (EliminateModule)0x0;
  this[0xb4] = (EliminateModule)0x0;
  this[0xb5] = (EliminateModule)0x0;
  this[0xbc] = (EliminateModule)0x0;
  this[0xbd] = (EliminateModule)0x0;
  this[0xc0] = (EliminateModule)0x0;
  this[0xc1] = (EliminateModule)0x0;
  this[0xbf] = (EliminateModule)0x0;
  this[0xbe] = (EliminateModule)0x0;
  this[0xc2] = (EliminateModule)0x0;
  this[0x110] = (EliminateModule)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x50) = 2;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0x104) = uVar1;
  *(undefined4 *)(this + 0xc4) = uVar1;
  *(undefined4 *)(this + 0x108) = uVar1;
  __s = malloc(0xf0);
  *(void **)(this + 0x20) = __s;
  memset(__s,0,0xf0);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined4 *)(this + 0x128) = 0x3f800000;
  *(undefined4 *)(this + 300) = uVar1;
  *(undefined4 *)(this + 0x124) = 0x40000000;
  *(undefined4 *)(this + 0x130) = uVar1;
  return;
}


/* EliminateModule::StaticNew() */

EliminateModule * EliminateModule::StaticNew(void)

{
  EliminateModule *this;
  
  this = ::operator_new(0x1a0);
  EliminateModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onReviveCancel() */

void __thiscall EliminateModule::onReviveCancel(EliminateModule *this)

{
  char cVar1;
  UIWidget *this_00;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[0xc2] = (EliminateModule)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UIBossProgressBar");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_00,false);
    }
    plVar2 = (long *)FUN_04a00668(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    FUN_05478178(asStack_10,L"[ELIMINATE_LOSE]",auStack_18);
    (*pcVar3)(plVar2,asStack_10);
    FUN_05476c50(asStack_10);
    nop();
    setState(this,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onPlantDied(Plant*) */

void __thiscall EliminateModule::onPlantDied(EliminateModule *this,Plant *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0xc1] == (EliminateModule)0x0) && (param_1 != (Plant *)0x0)) &&
     (iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1), iVar3 == 6)) {
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    lVar1 = gLawnApp;
    if (cVar2 != '\0') {
      this[0xc1] = (EliminateModule)0x1;
      plVar4 = (long *)FUN_04a00668(*(undefined8 *)(*(long *)(lVar1 + 0x9f0) + 0xad8));
      pcVar5 = *(code **)(*plVar4 + 0xa0);
      FUN_05478178(auStack_10,L"[ELIMINATE_LOSE]",auStack_18);
      (*pcVar5)(plVar4,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
      setState(this,4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onHolonutWillDie() */

void __thiscall EliminateModule::onHolonutWillDie(EliminateModule *this)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xc1] == (EliminateModule)0x0) {
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0));
    lVar1 = gLawnApp;
    if (cVar2 != '\0') {
      this[0xc1] = (EliminateModule)0x1;
      plVar3 = (long *)FUN_04a00668(*(undefined8 *)(*(long *)(lVar1 + 0x9f0) + 0xad8));
      pcVar4 = *(code **)(*plVar3 + 0xa0);
      FUN_05478178(auStack_10,L"[ELIMINATE_LOSE]",auStack_18);
      (*pcVar4)(plVar3,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
      setState(this,4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::rowHaveZombie(int) */

void __thiscall EliminateModule::rowHaveZombie(EliminateModule *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  SharkMinion *this_00;
  int extraout_w1;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar2 = SharkMinion::getRow(this_00);
      if (iVar2 == param_1) {
        iVar4 = iVar4 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::checkEliminateCount() */

void __thiscall EliminateModule::checkEliminateCount(EliminateModule *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    do {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar2 = (**(code **)(*plVar4 + 0x328))();
      if (cVar2 != '\0') {
LAB_04a00bc4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_04a00bd4;
      }
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar2 = (**(code **)(*plVar4 + 0x330))();
      if (cVar2 != '\0') goto LAB_04a00bc4;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    } while (bVar1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if ((this[0xc2] == (EliminateModule)0x0) &&
     (LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     *(int *)(this + 0xb0) - *(int *)(this + 0xac) < 1)) {
    LawnApp::ShowReviveUI(gLawnApp,7);
    this[0xc2] = (EliminateModule)0x1;
  }
LAB_04a00bd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::checkFenceNearBy() */

void __thiscall EliminateModule::checkFenceNearBy(EliminateModule *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  RtObject *this_00;
  EliminateFence *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_049fd61c(uVar6,*(undefined8 *)(this + 0x40));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar7 = (long)(int)uVar1;
    lVar9 = lVar8;
    while( true ) {
      plVar5 = (long *)FUN_049fd628(uVar6,lVar7);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x28);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
          Sexy::RtDbTable::Iterator::operator*(aIStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
          this_00 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          this_01 = Sexy::RtObject::Cast<EliminateFence>(this_00);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtId::~RtId(aRStack_38);
          iVar3 = extraout_w1_00;
          if ((this_01 != (EliminateFence *)0x0) &&
             ((((*(int *)(this_01 + 0xa8) == *(int *)(lVar7 + 0xa8) &&
                (*(int *)(this_01 + 0xa4) == *(int *)(lVar7 + 0xa4))) ||
               ((iVar3 = EliminateFence::GetFenceType(this_01), iVar3 == 1 &&
                ((*(int *)(this_01 + 0xa8) + 1 == *(int *)(lVar7 + 0xa8) &&
                 (*(int *)(this_01 + 0xa4) == *(int *)(lVar7 + 0xa4))))))) ||
              ((iVar4 = EliminateFence::GetFenceType(this_01), iVar3 = extraout_w1, iVar4 == 0 &&
               ((iVar3 = *(int *)(lVar7 + 0xa8), *(int *)(this_01 + 0xa8) == iVar3 &&
                (iVar3 = *(int *)(lVar7 + 0xa4), *(int *)(this_01 + 0xa4) + 1 == iVar3)))))))) {
            EliminateFence::takeFenceDamge(this_01);
            iVar3 = extraout_w1_01;
          }
          Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
        }
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 0x38);
      lVar7 = lVar9;
      lVar9 = lVar9 + -1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::InitEliminates() */

void __thiscall EliminateModule::InitEliminates(EliminateModule *this)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined4 *puVar6;
  EliminateItem *pEVar7;
  ActionSubSystem *pAVar8;
  long lVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_a8 = FUN_049ff6a0(*(undefined8 *)(pRVar5 + 0x80));
  local_a0 = FUN_049ff6f0(*(undefined8 *)(pRVar5 + 0x88));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar3) {
    puVar6 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    iVar4 = puVar6[2];
    uVar1 = *puVar6;
    iVar2 = puVar6[1];
    pEVar7 = GameObject::Create<EliminateItem>();
    EliminateItem::EliminateItemInitialize(pEVar7,uVar1);
    lVar9 = *(long *)(this + 0x20);
    *(int *)(pEVar7 + 0xa4) = iVar4;
    *(int *)(pEVar7 + 0xa8) = iVar2;
    *(EliminateItem **)(lVar9 + (long)(iVar2 + iVar4 * 6) * 8) = pEVar7;
    DVec3::DVec3((DVec3 *)&local_70);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_70 = (float)(iVar4 * *(int *)(pEVar7 + 0xa8) + 200);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_6c = (float)(0xa0 - iVar4);
    local_68 = 0;
    (**(code **)(*(long *)pEVar7 + 0x78))(pEVar7,(DVec3 *)&local_70);
    DVec3::DVec3((DVec3 *)&local_60);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_60 = (float)(iVar4 * *(int *)(pEVar7 + 0xa8) + 200);
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_58 = 0;
    local_5c = (float)(iVar4 * *(int *)(pEVar7 + 0xa4) + 0xa0);
    pAVar8 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_98);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
    std::string::string(asStack_80,"onInitFallDone");
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_88,
               asStack_80);
    ActionSubSystem::AddActionMoveTo
              ((ActionSubSystem *)0x3e99999a,pAVar8,aRStack_78,(DVec3 *)&local_60,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_80);
    nop();
    Sexy::RtId::~RtId(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::changeMinColor(EEliminateType, Zombie*) */

void __thiscall
EliminateModule::changeMinColor
          (EliminateModule *this,int param_2,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  EliminateColor *this_00;
  undefined8 uVar4;
  ActionSubSystem *pAVar5;
  long lVar6;
  EliminateItem *this_01;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  iVar7 = 0;
  do {
    this_01 = *(EliminateItem **)(*(long *)(this + 0x20) + lVar6);
    if ((((this_01 != (EliminateItem *)0x0) &&
         (cVar2 = EliminateItem::IsSelect(this_01), cVar2 == '\0')) &&
        (cVar2 = EliminateItem::IsBlock(this_01), cVar2 == '\0')) &&
       (iVar3 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)this_01), iVar3 != param_2)) {
      iVar3 = Sexy::Rand(100);
      if (iVar3 < 0x32) {
        iVar7 = iVar7 + 1;
        DVec3::DVec3((DVec3 *)&local_60);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_60 = (float)(iVar3 * *(int *)(this_01 + 0xa8) + 200);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_58 = 0;
        local_5c = (float)(iVar3 * *(int *)(this_01 + 0xa4) + 0xa0);
        this_00 = GameObject::Create<EliminateColor>();
        EliminateColor::EliminateColorInitialize(this_00);
        uVar4 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(param_3);
        (**(code **)(*(long *)this_00 + 0x78))(this_00,uVar4);
        uVar1 = *(undefined4 *)(this_01 + 0xa8);
        *(undefined4 *)(this_00 + 0xa4) = *(undefined4 *)(this_01 + 0xa4);
        *(undefined4 *)(this_00 + 0xa8) = uVar1;
        *(int *)(this + 0x54) = param_2;
        pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
        std::string::string(asStack_70,"onColorMoveDone");
        RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_78,
                   asStack_70);
        ActionSubSystem::AddActionMoveTo
                  ((ActionSubSystem *)0x3f19999a,pAVar5,aRStack_68,(DVec3 *)&local_60,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_70);
        nop();
        Sexy::RtId::~RtId(aRStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      }
      if (5 < iVar7) break;
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xf0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateModule::onZombieDied(Zombie*, DamageInfo const*) */

void EliminateModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_2 != (DamageInfo *)0x0) && (cVar1 = Zombie::HasCondition(param_2,0x3a), cVar1 != '\0'))
  {
    uVar2 = Zombie::GetEliminateColor((Zombie *)param_2);
    changeMinColor((EliminateModule *)param_1,uVar2,param_2);
    return;
  }
  return;
}


/* EliminateModule::~EliminateModule() */

void __thiscall EliminateModule::~EliminateModule(EliminateModule *this)

{
  RtMixedPtrBase *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr *this_02;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  long *plVar5;
  RtWeakPtrBase *this_04;
  ulong uVar6;
  undefined8 uVar7;
  
  this_00 = (RtMixedPtrBase *)(this + 0x198);
  *(undefined ***)this = &PTR_GetModuleClass_0692d8c0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar5 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
  }
  this_01 = (RtWeakPtr *)(this + 200);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar2) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar5 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    free(*(void **)(this + 0x20));
  }
  uVar7 = *(undefined8 *)(this + 0x58);
  uVar6 = 0;
  lVar3 = FUN_049fd5ec(uVar7,*(undefined8 *)(this + 0x60));
  if (lVar3 != 0) {
    do {
      this_02 = (RtWeakPtr *)FUN_049fd5f8(uVar7,uVar6);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
      if (bVar2) {
        this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd5f8(*(undefined8 *)(this + 0x58),uVar6);
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
        (**(code **)(*plVar5 + 0x48))();
        this_04 = (RtWeakPtrBase *)FUN_049fd5f8(*(undefined8 *)(this + 0x58),uVar6);
        Sexy::RtWeakPtrBase::ClearId(this_04);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0x58);
      uVar4 = FUN_049fd5ec(uVar7,*(undefined8 *)(this + 0x60));
    } while (uVar6 < uVar4);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x180));
  std::vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>>::~vector
            ((vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>> *)
             (this + 0x168));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x138));
  TimeLineTrack<Sexy::SexyVector3>::~TimeLineTrack
            ((TimeLineTrack<Sexy::SexyVector3> *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x78))
  ;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x58));
  std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
            ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)(this + 0x38));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* EliminateModule::~EliminateModule() */

void __thiscall EliminateModule::~EliminateModule(EliminateModule *this)

{
  ~EliminateModule(this);
  AK::FreeHook(this);
  return;
}


/* EliminateModule::clearBouncingArrows() */

void __thiscall EliminateModule::clearBouncingArrows(EliminateModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x138);
    uVar2 = FUN_049fd640(uVar4,*(undefined8 *)(this + 0x140));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd64c(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x138));
  return;
}


/* EliminateModule::onPlantfoodButtonPrimed() */

void __thiscall EliminateModule::onPlantfoodButtonPrimed(EliminateModule *this)

{
  clearBouncingArrows(this);
  this[0xbe] = (EliminateModule)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::takeEliminate() */

void __thiscall EliminateModule::takeEliminate(EliminateModule *this)

{
  RtWeakPtr *this_00;
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *plVar9;
  ActionSubSystem *pAVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  Board *pBVar15;
  float fVar16;
  undefined4 uVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar12 = *(undefined8 *)(this + 0x38);
  if (this[0xbd] == (EliminateModule)0x0) {
    uVar6 = FUN_049fd61c(uVar12,*(undefined8 *)(this + 0x40));
    if (2 < uVar6) {
LAB_04a027ec:
      *(undefined4 *)(this + 0x10c) = 0;
      this[0x110] = (EliminateModule)0x0;
      clearBouncingArrows(this);
      if (this[0xbd] == (EliminateModule)0x0) {
        pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar8,"Play_Plant_CabbagePult_Nitro");
        fVar16 = (float)PVZ_T();
        *(float *)(this + 0x108) = fVar16 + 0.7;
        uVar17 = PVZ_T();
        *(undefined4 *)(this + 300) = uVar17;
        clearItemsShowTip(this);
        this[0xbc] = (EliminateModule)0x0;
        uVar6 = FUN_049fd61c(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
        if (6 < uVar6) {
          pBVar15 = *(Board **)(gLawnApp + 0x9f0);
          FUN_05478178(&local_60,L"[ELIMINATE_TIP3]",aRStack_68);
          Board::DisplayAdviceAgain(pBVar15,&local_60,0x11,0);
          FUN_05476c50(&local_60);
          nop();
        }
      }
      else {
        this[0xbd] = (EliminateModule)0x0;
        uVar6 = FUN_049fd61c(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
        if (6 < uVar6) {
          this[0xbf] = (EliminateModule)0x1;
        }
        fVar16 = (float)PVZ_T();
        this_00 = (RtWeakPtr *)(this + 200);
        *(float *)(this + 0xb8) = fVar16 + 12.0;
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar2) {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar9 + 0x48))();
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
        }
        pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar8,"Play_Plant_CabbagePult_Nitro");
        fVar16 = (float)PVZ_T();
        *(float *)(this + 0x108) = fVar16 + 0.7;
        uVar17 = PVZ_T();
        *(undefined4 *)(this + 300) = uVar17;
        clearItemsShowTip(this);
        this[0xbc] = (EliminateModule)0x0;
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
      setState(this,2);
      checkPlantFoodNearBy(this);
      checkBlockNearBy(this);
      checkFenceNearBy(this);
      uVar12 = *(undefined8 *)(this + 0x38);
      iVar3 = FUN_049fd61c(uVar12,*(undefined8 *)(this + 0x40));
      uVar1 = iVar3 - 1;
      if (-1 < (int)uVar1) {
        lVar13 = (long)(int)uVar1 + -1;
        lVar11 = (long)(int)uVar1;
        lVar14 = lVar13;
        while( true ) {
          plVar9 = (long *)FUN_049fd628(uVar12,lVar11);
          if (*plVar9 != 0) {
            DVec3::DVec3((DVec3 *)&local_60);
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            local_60 = (float)((100 - iVar3) * 2);
            iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
            iVar3 = *(int *)(this + 0x50);
            iVar5 = GetPlantIndexStart(this);
            local_58 = 0;
            local_5c = (float)(iVar4 * (iVar3 + iVar5) + 0xa0);
            pAVar10 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
            ToolPacketData::GetProps();
            Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
            std::string::string(asStack_70,"onEliminateDone");
            RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_78,
                       asStack_70);
            ActionSubSystem::AddActionMoveTo
                      ((ActionSubSystem *)0x3e99999a,pAVar10,aRStack_68,(DVec3 *)&local_60,
                       aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate(aRStack_50);
            std::string::~string(asStack_70);
            nop();
            Sexy::RtId::~RtId(aRStack_78);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
          }
          if (lVar14 == lVar13 - (ulong)uVar1) break;
          uVar12 = *(undefined8 *)(this + 0x38);
          lVar11 = lVar14;
          lVar14 = lVar14 + -1;
        }
      }
      goto LAB_04a027a4;
    }
  }
  else {
    uVar6 = FUN_049fd61c(uVar12,*(undefined8 *)(this + 0x40));
    if (6 < uVar6) goto LAB_04a027ec;
  }
  uVar1 = (int)uVar6 - 1;
  if ((int)uVar6 != 0) {
    lVar13 = (long)(int)uVar1 + -1;
    lVar11 = (long)(int)uVar1;
    lVar14 = lVar13;
    while( true ) {
      puVar7 = (undefined8 *)FUN_049fd628(uVar12,lVar11);
      if ((EliminateItem *)*puVar7 != (EliminateItem *)0x0) {
        EliminateItem::setSelect((EliminateItem *)*puVar7,false);
      }
      if (lVar14 == lVar13 - (ulong)uVar1) break;
      uVar12 = *(undefined8 *)(this + 0x38);
      lVar11 = lVar14;
      lVar14 = lVar14 + -1;
    }
  }
  clearSelectItems(this);
LAB_04a027a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onEliminateFenceDestroyed(int, int, int) */

void __thiscall
EliminateModule::onEliminateFenceDestroyed
          (EliminateModule *this,int param_1,int param_2,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04a02ca0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((param_2 == piVar2[2] && param_1 == piVar2[1]) && (param_3 == *piVar2)) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>>::
                 erase((vector<EliminateFenceProperties,std::allocator<EliminateFenceProperties>> *)
                       this_00,local_10);
      goto LAB_04a02ca0;
    }
    FUN_049ff8d0((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onEliminateShieldDestroyed(int) */

void __thiscall EliminateModule::onEliminateShieldDestroyed(EliminateModule *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (-1 < param_1) {
    uVar5 = *(undefined8 *)(pRVar2 + 0x68);
    uVar3 = FUN_049fd600(uVar5,*(undefined8 *)(pRVar2 + 0x70));
    if ((ulong)(long)param_1 < uVar3) {
      uVar5 = FUN_049fd614(uVar5,(long)param_1);
      FUN_05475d88((string *)&local_10,uVar5);
      bVar1 = std::operator==((string *)&local_10,"peashooter");
      if ((bVar1) || (bVar1 = std::operator==((string *)&local_10,"threepeater"), bVar1)) {
LAB_04a02e00:
        iVar6 = 2;
      }
      else {
        iVar6 = 1;
        bVar1 = std::operator==((string *)&local_10,"coconutcannon");
        if ((!bVar1) &&
           (bVar1 = std::operator==((string *)&local_10,"firepeashooter"), iVar6 = 0, !bVar1)) {
          iVar6 = 4;
          bVar1 = std::operator==((string *)&local_10,"fumeshroom");
          if (!bVar1) {
            bVar1 = std::operator==((string *)&local_10,"snowpea");
            if (bVar1) {
              iVar6 = 3;
            }
            else {
              bVar1 = std::operator==((string *)&local_10,"wintermelon");
              if (!bVar1) goto LAB_04a02e00;
              iVar6 = 3;
            }
          }
        }
      }
      std::string::~string((string *)&local_10);
      goto LAB_04a02d4c;
    }
  }
  iVar6 = 2;
LAB_04a02d4c:
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x150);
  local_18 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04a02da4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar4 == iVar6) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<int,std::allocator<int>>::erase
                           ((vector<int,std::allocator<int>> *)this_00,local_10);
      goto LAB_04a02da4;
    }
    FUN_049fef8c((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall EliminateModule::AddResourceRequirements(EliminateModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"Eliminate");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PowerupTutorial");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantCabbagepultAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ProtectThePlantChallengeModule");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onGameplayStarted() */

void __thiscall EliminateModule::onGameplayStarted(EliminateModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  UIWidget *pUVar5;
  string *psVar6;
  Plant *this_00;
  long *plVar7;
  ulong uVar8;
  ProfileMgr *this_01;
  PlayerInfo *pPVar9;
  CrazyNPCManager *pCVar10;
  Board *pBVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_50,"UIPlantfood");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,true);
  }
  std::string::string(asStack_50,"UIPowerupHolder");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,true);
  }
  std::string::string(asStack_50,"UIShovel");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,false);
  }
  std::string::string(asStack_50,"UIChangeSpeedButton");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,false);
  }
  uVar12 = 0;
  InitEliminates(this);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x78))
  ;
  while( true ) {
    uVar8 = FUN_049fd600(*(undefined8 *)(pRVar4 + 0x68),*(undefined8 *)(pRVar4 + 0x70));
    if (uVar8 <= uVar12) break;
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_049fd614(*(undefined8 *)(pRVar4 + 0x68),uVar12);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
    iVar2 = GetPlantIndexStart(this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_60);
    this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar13,0xfffffffe,iVar2 + (int)uVar12,asStack_50
                                       ,0,0,0xffffffff,0,1,1,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    if (this_00 != (Plant *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)aRStack_58);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (this + 0x78),(RtWeakPtr *)asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      iVar2 = GetPlantIndexStart(this);
      Plant::SetGridLoc(this_00,-2,iVar2 + (int)uVar12);
      this_00[0x158] = (Plant)0x0;
      this_00[0x118] = (Plant)0x1;
      plVar7 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
      (**(code **)(*plVar7 + 0x80))(0x40000000);
    }
    uVar12 = uVar12 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  setState(this,0);
  fVar14 = (float)PVZ_T();
  *(float *)(this + 0xb8) = fVar14 + 12.0;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar9);
  if (((cVar1 == '\0') && (pRVar4[0x51] != (ResilienceTutorialIntroProperties)0x0)) &&
     (this[0xc2] == (EliminateModule)0x0)) {
    pBVar11 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"iceage");
    Board::AddZombie(pBVar11,asStack_50,1,8,0);
    std::string::~string(asStack_50);
    nop();
    pCVar10 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)aRStack_60,"ELIMINATE_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onIntroNarrationFinished);
    Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>(aDStack_38,asStack_50);
    std::string::string((string *)aRStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar10,(string *)aRStack_60,aDStack_38,aRStack_58);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::~string((string *)aRStack_60);
    nop();
  }
  for (iVar2 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar2 < iVar3; iVar2 = iVar2 + 1) {
    Board::AddPlant(*(Board **)(gLawnApp + 0x9f0),6,iVar2,(string *)(pRVar4 + 0x58),
                    *(int *)(pRVar4 + 0x60),false,false,false,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall EliminateModule::addBouncingArrow(EliminateModule *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b782b0);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x138),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addPlantfoodArrow() */

void __thiscall EliminateModule::addPlantfoodArrow(EliminateModule *this)

{
  float fVar1;
  float fVar2;
  undefined4 local_40;
  undefined4 local_3c;
  Point aPStack_38 [8];
  TPoint aTStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_20);
  UIWidget::GetDrawRect();
  std::string::~string(asStack_20);
  nop();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,180.0,-6.0);
  fVar1 = (float)FUN_049fdfec(local_40);
  fVar2 = (float)FUN_049fdfec(local_3c);
  Sexy::Point::Point(aPStack_38,(int)(fVar1 + (float)local_18),(int)(fVar2 + (float)local_14));
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_38,aTStack_30);
  Sexy::Point::Point((Point *)&local_28,(TPoint *)asStack_20);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)asStack_20,(float)local_28,(float)local_24);
  addBouncingArrow(this,(SexyVector2 *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addEliminatePlantFoodArrow(int, int) */

void __thiscall
EliminateModule::addEliminatePlantFoodArrow(EliminateModule *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceX(param_2);
  iVar1 = FUN_049fdfa4();
  iVar2 = BoardTransforms::GridToBoardSpaceY(param_1);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_049fdfa4(iVar2 - iVar3 / 2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  addBouncingArrow(this,(SexyVector2 *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addPlantArrow() */

void __thiscall EliminateModule::addPlantArrow(EliminateModule *this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  FastCurve aFStack_10 [8];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x78);
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_049fd1e0(uVar8,*(undefined8 *)(this + 0x80));
  if (1 < uVar3) {
    this_00 = (RtWeakPtr *)FUN_049fd638(uVar8,1);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd638(*(undefined8 *)(this + 0x78),2);
      p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var5);
      fVar10 = *pfVar6;
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd638(*(undefined8 *)(this + 0x78),2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      iVar2 = Plant::GetWidth();
      fVar10 = (float)FUN_049fdfb8(fVar10 + -25.0 + (float)(iVar2 / 2));
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd638(*(undefined8 *)(this + 0x78),2);
      p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var5);
      fVar9 = (float)FUN_049fdfb8(*(float *)(lVar7 + 4) - 70.0);
      Sexy::FastCurve::SetOutRange(aFStack_10,fVar10,fVar9);
      uVar8 = addBouncingArrow(this,(SexyVector2 *)aFStack_10);
      goto LAB_04a03980;
    }
  }
  uVar8 = 0;
LAB_04a03980:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* EliminateModule::onCursorAdded(BaseCursor*) */

void __thiscall EliminateModule::onCursorAdded(EliminateModule *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (((this[0xbe] != (EliminateModule)0x0) && (param_1 != (BaseCursor *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1), bVar1)) {
    clearBouncingArrows(this);
    addPlantArrow(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onSetCurrentStage(int, int) */

void EliminateModule::onSetCurrentStage(int param_1,int param_2)

{
  char cVar1;
  LevelModule *this;
  ResilienceTutorialIntroProperties *pRVar2;
  CrazyNPCManager *pCVar3;
  long lVar4;
  ulong uVar5;
  Board *this_00;
  int local_60 [2];
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = (LevelModule *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((param_2 < 4) && (param_2 != 0)) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(this);
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar1 = CrazyNPCManager::IsNarrationActive(pCVar3);
    if ((cVar1 == '\0') && (this[0xc2] == (LevelModule)0x0)) {
      if (param_2 == 3) {
        param_2 = 2;
      }
      if (0 < *(int *)(this + 0xb0) - *(int *)(this + 0xac)) {
        pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        Sexy::StrFormat("ZOMBIE_INTRO_ELIMINATE_STAGE%d%d",(string *)local_60,
                        (ulong)*(uint *)(pRVar2 + 0x54),(ulong)(uint)param_2);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onNarrationFinished);
        Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
                  (aDStack_38,(CBMemberTranslatorX *)&local_50);
        std::string::string(asStack_58,"");
        CrazyNPCManager::StartNarrativeID(pCVar3,(string *)local_60,aDStack_38,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string((string *)local_60);
      }
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    local_60[0] = 0;
    do {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_58,"eliminate_shield");
      lVar4 = Board::GetGridItemAt(this_00,asStack_58,6,local_60[0]);
      std::string::~string(asStack_58);
      nop();
      if (lVar4 != 0) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_50,local_60);
      }
      local_60[0] = local_60[0] + 1;
    } while (local_60[0] < 5);
    uVar5 = FUN_049fd1d4(local_50,local_48);
    if (uVar5 < 2) {
      this[0xb5] = (LevelModule)0x1;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
    }
    else {
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::ontakeSpawnShield() */

void __thiscall EliminateModule::ontakeSpawnShield(EliminateModule *this)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  PlayerInfo *pPVar7;
  long lVar8;
  ulong uVar9;
  CrazyNPCManager *pCVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  ResilienceTutorialIntroProperties *pRVar14;
  uint *puVar15;
  Board *pBVar16;
  undefined8 uVar17;
  ulong uVar18;
  int iVar19;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
  if (pPVar7 == (PlayerInfo *)0x0) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(&local_50,L"[ELIMINATE_TIP_SHIELD]",&local_68);
    Board::DisplayAdviceAgain(pBVar16,&local_50,0x11,0);
    FUN_05476c50(&local_50);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  }
  else {
    cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar7,0x37);
    if (cVar2 == '\0') {
      PlayerInfo::UnlockGameFeature(pPVar7,0x37);
      pCVar10 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      cVar2 = CrazyNPCManager::IsNarrationActive(pCVar10);
      if ((cVar2 == '\0') && (this[0xc2] == (EliminateModule)0x0)) {
        pCVar10 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        std::string::string((string *)&local_80,"ZOMBIE_INTRO_ELIMINATE_SPAWNSHIELD");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onNarrationFinished);
        Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
                  (aDStack_38,(CBMemberTranslatorX *)&local_50);
        std::string::string((string *)&local_68,"");
        CrazyNPCManager::StartNarrativeID
                  (pCVar10,(string *)&local_80,aDStack_38,(string *)&local_68);
        std::string::~string((string *)&local_68);
        nop();
        std::string::~string((string *)&local_80);
        nop();
      }
    }
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(&local_50,L"[ELIMINATE_TIP_SHIELD]",&local_68);
    Board::DisplayAdviceAgain(pBVar16,&local_50,0x11,0);
    FUN_05476c50(&local_50);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  }
  local_68 = 0;
  do {
    pBVar16 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"eliminate_shield");
    lVar8 = Board::GetGridItemAt(pBVar16,(string *)&local_50,6,local_68);
    std::string::~string((string *)&local_50);
    nop();
    if (lVar8 != 0) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_80,&local_68);
    }
    local_68 = local_68 + 1;
  } while (local_68 < 5);
  uVar9 = FUN_049fd1d4(local_80,local_78);
  if (1 < uVar9) {
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_80);
    goto LAB_04a03d74;
  }
  iVar6 = 7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  do {
    local_50 = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_68,(int *)&local_50);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  lVar8 = 0;
  do {
    if (*(PlantOlivePit **)(*(long *)(this + 0x20) + lVar8) != (PlantOlivePit *)0x0) {
      uVar5 = PlantOlivePit::CalcRenderOrder(*(PlantOlivePit **)(*(long *)(this + 0x20) + lVar8));
      piVar11 = (int *)FUN_049fd630(CONCAT44(uStack_64,local_68),uVar5);
      *piVar11 = *piVar11 + 1;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xf0);
  uVar17 = CONCAT44(uStack_64,local_68);
  uVar9 = 0;
  uVar18 = 0;
  iVar6 = 0;
  iVar19 = 0;
  uVar12 = FUN_049fd1d4(uVar17,local_60);
  if (uVar12 != 0) {
    do {
      piVar11 = (int *)FUN_049fd630(uVar17,uVar9);
      if (iVar19 < *piVar11) {
        uVar18 = uVar9 & 0xffffffff;
        iVar19 = *piVar11;
      }
      iVar6 = (int)uVar18;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar12);
  }
  uVar17 = local_80;
  lVar13 = FUN_049fd1d4(local_80,local_78);
  lVar8 = 0;
  do {
    if (lVar8 == lVar13) {
      pBVar16 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_50,"eliminate_shield");
      Board::AddGridItem(pBVar16,(string *)&local_50,6,iVar6,1);
      std::string::~string((string *)&local_50);
      nop();
      pRVar14 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      goto LAB_04a04034;
    }
    piVar11 = (int *)FUN_049fd630(uVar17,lVar8);
    lVar8 = lVar8 + 1;
  } while (*piVar11 != iVar6);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  local_88[0] = 0;
  do {
    uVar17 = local_80;
    uVar1 = local_88[0];
    lVar13 = FUN_049fd1d4(local_80,local_78);
    lVar8 = 0;
    do {
      if (lVar8 == lVar13) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_50,(int *)local_88);
        break;
      }
      puVar15 = (uint *)FUN_049fd630(uVar17,lVar8);
      lVar8 = lVar8 + 1;
    } while (uVar1 != *puVar15);
    local_88[0] = local_88[0] + 1;
  } while ((int)local_88[0] < 5);
  iVar6 = FUN_049fd1d4(CONCAT44(uStack_4c,local_50),local_48);
  iVar6 = Sexy::Rand(iVar6);
  piVar11 = (int *)FUN_049fd630(CONCAT44(uStack_4c,local_50),(long)iVar6);
  iVar6 = *piVar11;
  pBVar16 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)local_88,"eliminate_shield");
  Board::AddGridItem(pBVar16,(string *)local_88,6,iVar6,1);
  std::string::~string((string *)local_88);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  pRVar14 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (-1 < iVar6) {
LAB_04a04034:
    uVar17 = *(undefined8 *)(pRVar14 + 0x68);
    uVar9 = FUN_049fd600(uVar17,*(undefined8 *)(pRVar14 + 0x70));
    if ((ulong)(long)iVar6 < uVar9) {
      uVar17 = FUN_049fd614(uVar17,(long)iVar6);
      FUN_05475d88((string *)&local_50,uVar17);
      bVar3 = std::operator==((string *)&local_50,"peashooter");
      if ((bVar3) || (bVar3 = std::operator==((string *)&local_50,"threepeater"), bVar3)) {
LAB_04a04080:
        local_88[0] = 2;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x150),(int *)local_88);
      }
      else {
        bVar3 = std::operator==((string *)&local_50,"coconutcannon");
        if (bVar3 == 0) {
          bVar4 = std::operator==((string *)&local_50,"firepeashooter");
          if (bVar4) {
            local_88[0] = (uint)bVar3;
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0x150),(int *)local_88);
          }
          else {
            bVar3 = std::operator==((string *)&local_50,"fumeshroom");
            if (bVar3) {
              local_88[0] = 4;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)(this + 0x150),(int *)local_88);
            }
            else {
              bVar3 = std::operator==((string *)&local_50,"snowpea");
              if ((!bVar3) && (bVar3 = std::operator==((string *)&local_50,"wintermelon"), !bVar3))
              goto LAB_04a04080;
              local_88[0] = 3;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)(this + 0x150),(int *)local_88);
            }
          }
        }
        else {
          local_88[0] = 1;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(this + 0x150),(int *)local_88);
        }
      }
      std::string::~string((string *)&local_50);
    }
  }
  this[0xb5] = (EliminateModule)0x0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_68);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_80);
LAB_04a03d74:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::addToSelectItems(EliminateItem*) */

void __thiscall EliminateModule::addToSelectItems(EliminateModule *this,EliminateItem *param_1)

{
  uint uVar1;
  EliminateItem *this_00;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  EliminateItem *local_38 [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = param_1;
  cVar2 = EliminateItem::CanTouchable(param_1);
  if (cVar2 == '\0') goto LAB_04a044ec;
  uVar11 = *(undefined8 *)(this + 0x38);
  lVar6 = FUN_049fd61c(uVar11,*(undefined8 *)(this + 0x40));
  this_00 = local_38[0];
  if (lVar6 == 0) {
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_UI_Game_Plant_Food_Buy");
    std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
              ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)(this + 0x38),local_38);
    uVar5 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)local_38[0]);
    *(undefined4 *)(this + 0x50) = uVar5;
    setNearByItemsAlpha(this,local_38[0]);
    goto LAB_04a044ec;
  }
  uVar1 = (int)lVar6 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1;
    lVar6 = lVar10 + -1;
    do {
      plVar7 = (long *)FUN_049fd628(uVar11,lVar10);
      if (this_00 == (EliminateItem *)*plVar7) goto LAB_04a044e8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != lVar6 - (ulong)uVar1);
  }
  iVar4 = *(int *)(this + 0x50);
  iVar3 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)this_00);
  if (((iVar4 != iVar3) || (*(EliminateItem **)(this + 0x30) == (EliminateItem *)0x0)) ||
     (cVar2 = EliminateItem::IsNearBy(*(EliminateItem **)(this + 0x30),local_38[0]), cVar2 == '\0'))
  {
LAB_04a044e8:
    cVar2 = '\0';
    goto LAB_04a044ec;
  }
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar8,"Play_UI_Game_Plant_Food_Buy");
  std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
            ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)(this + 0x38),local_38);
  setNearByItemsAlpha(this,local_38[0]);
  if (*(long *)(this + 0x30) == 0) goto LAB_04a044ec;
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  iVar4 = getDirection(this,*(EliminateItem **)(this + 0x30),local_38[0]);
  if (7 < iVar4 - 1U) goto LAB_04a045bc;
  switch(iVar4) {
  case 1:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_3_1");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar14 = 98.0;
    fVar13 = *(float *)(lVar6 + 0x1c);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
    goto LAB_04a049d4;
  case 2:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_1_1");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar14 = 68.0;
    fVar13 = *(float *)(lVar6 + 0x1c);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
    goto LAB_04a049d4;
  case 3:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_4_1");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar14 = 38.0;
    fVar13 = *(float *)(lVar6 + 0x1c);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
LAB_04a049d4:
    fVar12 = fVar12 - fVar14;
    FUN_049fd918(uVar5,fVar13,uVar15);
    fVar14 = 92.0;
    break;
  case 4:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_2_1");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar14 = 88.0;
    fVar13 = *(float *)(lVar6 + 0x1c);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
    goto LAB_04a048a4;
  case 5:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_2");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar14 = 48.0;
    fVar13 = *(float *)(lVar6 + 0x1c);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    uVar15 = *(undefined4 *)(lVar6 + 0x20);
LAB_04a048a4:
    fVar12 = fVar12 - fVar14;
    FUN_049fd918(uVar5,fVar13,uVar15);
    fVar14 = 62.0;
    break;
  case 6:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_4");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar13 = *(float *)(lVar6 + 0x1c);
    fVar12 = fVar12 - 85.0;
    FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),fVar13,*(undefined4 *)(lVar6 + 0x20));
    fVar14 = 32.0;
    break;
  case 7:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_1");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar13 = *(float *)(lVar6 + 0x1c);
    fVar12 = fVar12 - 75.0;
    FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),fVar13,*(undefined4 *)(lVar6 + 0x20));
    fVar14 = 52.0;
    break;
  case 8:
    std::string::string((string *)aRStack_20,"POPANIM_ELIMINATE_ELIMINATE_LINE_3");
    GetPAMByName((string *)aRStack_20);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar9,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string((string *)aRStack_20);
    nop();
    lVar6 = *(long *)(this + 0x30);
    fVar12 = (float)FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                 *(undefined4 *)(lVar6 + 0x20));
    lVar6 = *(long *)(this + 0x30);
    fVar13 = *(float *)(lVar6 + 0x1c);
    fVar12 = fVar12 - 50.0;
    FUN_049fd918(*(undefined4 *)(lVar6 + 0x18),fVar13,*(undefined4 *)(lVar6 + 0x20));
    fVar14 = 30.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar12,fVar13 - fVar14,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)asStack_18,-1);
LAB_04a045bc:
  FUN_049fd908(this_01 + 0x1c);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_01,true);
  std::string::string(asStack_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_01,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(this + 0x58),(RtWeakPtr *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
LAB_04a044ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::GetFreezingWindRow() */

void __thiscall EliminateModule::GetFreezingWindRow(EliminateModule *this)

{
  EliminateItem *pEVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  EliminateItem *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    local_28 = *(EliminateItem **)(*(long *)(this + 0x20) + lVar10);
    if (((local_28 != (EliminateItem *)0x0) &&
        (iVar3 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)local_28), iVar3 != 5)) &&
       (cVar2 = EliminateItem::IsBlock(local_28), cVar2 == '\0')) {
      uVar9 = *(undefined8 *)(this + 0x38);
      lVar4 = FUN_049fd61c(uVar9,*(undefined8 *)(this + 0x40));
      pEVar1 = local_28;
      lVar8 = 0;
      do {
        if (lVar8 == lVar4) {
          std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
                    ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_20,&local_28);
          break;
        }
        puVar5 = (undefined8 *)FUN_049fd628(uVar9,lVar8);
        lVar8 = lVar8 + 1;
      } while ((PlantOlivePit *)*puVar5 != (PlantOlivePit *)pEVar1);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0xf0);
  lVar10 = FUN_049fd61c(local_20,local_18);
  if (lVar10 != 0) {
    iVar3 = Sexy::Rand((int)lVar10);
    plVar6 = (long *)FUN_049fd628(local_20,(long)iVar3);
    lVar10 = *plVar6;
    if (lVar10 != 0) {
      uVar7 = *(undefined4 *)(lVar10 + 0xa4);
      *(undefined4 *)(this + 0x94) = *(undefined4 *)(lVar10 + 0xa8);
      *(undefined4 *)(this + 0x90) = uVar7;
      goto LAB_04a04cc8;
    }
  }
  uVar7 = 0;
LAB_04a04cc8:
  std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
            ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::GetNearByItems(EliminateItem*, std::vector<EliminateItem*,
   std::allocator<EliminateItem*> >&, std::vector<EliminateItem*, std::allocator<EliminateItem*> >&)
    */

void __thiscall
EliminateModule::GetNearByItems
          (EliminateModule *this,EliminateItem *param_1,vector *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  PlantOlivePit *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  do {
    local_20 = *(PlantOlivePit **)(*(long *)(this + 0x20) + lVar6);
    if ((local_20 != (PlantOlivePit *)0x0) && (param_1 != (EliminateItem *)0x0)) {
      iVar3 = PlantOlivePit::CalcRenderOrder(local_20);
      iVar4 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)param_1);
      if (((iVar3 == iVar4) &&
          (((cVar1 = EliminateItem::IsBlock((EliminateItem *)local_20), cVar1 == '\0' &&
            (iVar3 = PlantOlivePit::CalcRenderOrder(local_20), iVar3 != 5)) &&
           (cVar1 = EliminateItem::IsNearBy((EliminateItem *)local_20,param_1), cVar1 != '\0')))) &&
         (local_20 != (PlantOlivePit *)param_1)) {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)param_3);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_3);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          if ((PlantOlivePit *)*puVar5 == local_20) goto joined_r0x04a04d94;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)param_2,
                   (EliminateItem **)&local_20);
      }
    }
joined_r0x04a04d94:
    lVar6 = lVar6 + 8;
    if (lVar6 == 0xf0) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::SearchNearBy(std::vector<EliminateItem*, std::allocator<EliminateItem*> >,
   std::vector<EliminateItem*, std::allocator<EliminateItem*> >, bool) */

void EliminateModule::SearchNearBy
               (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *param_1
               ,EliminateModule *param_2,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_3,vector *param_4,char param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  EliminateItem *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  vector<EliminateItem*,std::allocator<EliminateItem*>> avStack_38 [24];
  vector<EliminateItem*,std::allocator<EliminateItem*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
  if (bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    local_80 = (EliminateItem *)*puVar2;
    std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
              ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_68,param_4);
    std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
              ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_68,&local_80);
    uVar3 = FUN_049fd61c(local_68,local_60);
    if ((uVar3 < 3) || (param_5 != '\0')) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      GetNearByItems(param_2,local_80,(vector *)&local_50,(vector *)&local_68);
      lVar4 = FUN_049fd61c(local_50,local_48);
      if (lVar4 == 0) {
        std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
                  (param_1,(vector *)&local_68);
      }
      else {
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                  (avStack_38,(vector *)&local_50);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                  (avStack_20,(vector *)&local_68);
        SearchNearBy(param_1,param_2,avStack_38,avStack_20,param_5);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector(avStack_20);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector(avStack_38);
      }
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50);
    }
    else {
      std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
                (param_1,(vector *)&local_68);
    }
    std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
              ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_68);
  }
  else {
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (param_1,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::canEliminate() */

void __thiscall EliminateModule::canEliminate(EliminateModule *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  PlantOlivePit *local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  vector<EliminateItem*,std::allocator<EliminateItem*>> avStack_38 [24];
  vector<EliminateItem*,std::allocator<EliminateItem*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = 0;
  do {
    local_88 = *(PlantOlivePit **)(*(long *)(this + 0x20) + lVar5);
    if (((local_88 != (PlantOlivePit *)0x0) &&
        (cVar1 = EliminateItem::IsBlock((EliminateItem *)local_88), cVar1 == '\0')) &&
       (iVar2 = PlantOlivePit::CalcRenderOrder(local_88), iVar2 != 5)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80,
                 (EliminateItem **)&local_88);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
      GetNearByItems(this,(EliminateItem *)local_88,(vector *)avStack_68,(vector *)avStack_80);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                (avStack_38,(vector *)avStack_68);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                (avStack_20,(vector *)avStack_80);
      SearchNearBy((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50,this,
                   avStack_38,avStack_20,0);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector(avStack_20);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector(avStack_38);
      uVar3 = FUN_049fd61c(local_50,local_48);
      if (2 < uVar3) {
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_68);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80);
        uVar4 = 1;
        goto LAB_04a05170;
      }
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_68);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80);
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0xf0);
  uVar4 = 0;
LAB_04a05170:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::FindAndPlayShowTip() */

void __thiscall EliminateModule::FindAndPlayShowTip(EliminateModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  PlantOlivePit *local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = 0;
  do {
    local_88 = *(PlantOlivePit **)(*(long *)(this + 0x20) + lVar6);
    if (((local_88 != (PlantOlivePit *)0x0) &&
        (cVar1 = EliminateItem::IsBlock((EliminateItem *)local_88), cVar1 == '\0')) &&
       (iVar3 = PlantOlivePit::CalcRenderOrder(local_88), iVar3 != 5)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::clear
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80,
                 (EliminateItem **)&local_88);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
      GetNearByItems(this,(EliminateItem *)local_88,(vector *)avStack_68,(vector *)avStack_80);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_38,
                 (vector *)avStack_68);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_20,
                 (vector *)avStack_80);
      SearchNearBy((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50,this,
                   (vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_38,
                   (vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_20,1);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_20);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)local_38);
      uVar4 = FUN_049fd61c(local_50,local_48);
      if (2 < uVar4) {
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)&local_50);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_50);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)local_38,(__normal_iterator *)local_20),
              bVar2) {
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_38);
          EliminateItem::playShowTip((EliminateItem *)*puVar5,true);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_38);
        }
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_68);
        std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                  ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80);
LAB_04a052fc:
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_50);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_68);
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)avStack_80);
    }
    lVar6 = lVar6 + 8;
    if (lVar6 == 0xf0) goto LAB_04a052fc;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::handleTouch(Sexy::Touch const&) */

void __thiscall EliminateModule::handleTouch(EliminateModule *this,Touch *param_1)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  EliminateItem *pEVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  RtWeakPtr *pRVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  long *plVar12;
  RtWeakPtrBase *pRVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  FastCurve aFStack_10 [8];
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) != 1) goto LAB_04a053cc;
  if (this[0xc0] != (EliminateModule)0x0) {
    uVar1 = 0;
    goto LAB_04a053cc;
  }
  uVar1 = 0;
  if ((this[0xbe] != (EliminateModule)0x0) || (*(int *)(this + 0xb0) - *(int *)(this + 0xac) < 1))
  goto LAB_04a053cc;
  if ((*(long *)(this + 0x18) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar14 = *(long *)param_1;
switchD_04a054dc_caseD_0:
    *(long *)(this + 0x18) = lVar14;
    uVar16 = PVZ_EOT();
    *(undefined4 *)(this + 0xb8) = uVar16;
    std::vector<EliminateItem*,std::allocator<EliminateItem*>>::clear
              ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)(this + 0x38));
    *(undefined8 *)(this + 0x30) = 0;
    uVar16 = *(undefined4 *)(param_1 + 0x10);
    this[0xa0] = (EliminateModule)0x0;
    iVar4 = FUN_049fdfd8(uVar16);
    iVar5 = FUN_049fdfd8(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar4,(float)iVar5);
    pEVar6 = (EliminateItem *)GetItemFromTouch(this,(SexyVector2 *)aFStack_10);
    if ((pEVar6 != (EliminateItem *)0x0) && (cVar2 = addToSelectItems(this,pEVar6), cVar2 != '\0'))
    {
      EliminateItem::setSelect(pEVar6,true);
      *(EliminateItem **)(this + 0x30) = pEVar6;
      uVar1 = 1;
      goto LAB_04a053cc;
    }
    goto switchD_04a054dc_caseD_2;
  }
  lVar14 = *(long *)param_1;
  uVar1 = 0;
  if (*(long *)(this + 0x18) != lVar14) goto LAB_04a053cc;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    goto switchD_04a054dc_caseD_0;
  case 1:
    iVar4 = FUN_049fdfd8(*(undefined4 *)(param_1 + 0x10));
    iVar5 = FUN_049fdfd8(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar4,(float)iVar5);
    pEVar6 = (EliminateItem *)GetItemFromTouch(this,(SexyVector2 *)aFStack_10);
    if (pEVar6 != (EliminateItem *)0x0) {
      cVar2 = addToSelectItems(this,pEVar6);
      if (cVar2 != '\0') {
        EliminateItem::setSelect(pEVar6,true);
        *(EliminateItem **)(this + 0x30) = pEVar6;
      }
      uVar15 = *(undefined8 *)(this + 0x38);
      uVar7 = FUN_049fd61c(uVar15,*(undefined8 *)(this + 0x40));
      if ((1 < uVar7) &&
         (puVar8 = (undefined8 *)FUN_049fd628(uVar15,uVar7 - 2), pEVar6 == (EliminateItem *)*puVar8)
         ) {
        if (*(EliminateItem **)(this + 0x30) != (EliminateItem *)0x0) {
          EliminateItem::setSelect(*(EliminateItem **)(this + 0x30),false);
        }
        FUN_02fd475c(this + 0x40);
        *(EliminateItem **)(this + 0x30) = pEVar6;
        setNearByItemsAlpha(this,pEVar6);
        uVar15 = *(undefined8 *)(this + 0x58);
        lVar14 = FUN_049fd5ec(uVar15,*(undefined8 *)(this + 0x60));
        if (lVar14 != 0) {
          pRVar10 = (RtWeakPtr *)FUN_049fd5f8(uVar15,lVar14 + -1);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
          if (bVar3) {
            uVar15 = *(undefined8 *)(this + 0x58);
            lVar14 = FUN_049fd5ec(uVar15,*(undefined8 *)(this + 0x60));
            pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd5f8(uVar15,lVar14 + -1);
            plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
            (**(code **)(*plVar12 + 0x48))();
            uVar15 = *(undefined8 *)(this + 0x58);
            lVar14 = FUN_049fd5ec(uVar15,*(undefined8 *)(this + 0x60));
            pRVar13 = (RtWeakPtrBase *)FUN_049fd5f8(uVar15,lVar14 + -1);
            Sexy::RtWeakPtrBase::ClearId(pRVar13);
          }
          FUN_02fd4778(this + 0x60);
          uVar1 = 1;
          break;
        }
      }
    }
  default:
switchD_04a054dc_caseD_2:
    uVar1 = 1;
    break;
  case 3:
    uVar7 = 0;
    while( true ) {
      uVar15 = *(undefined8 *)(this + 0x58);
      uVar9 = FUN_049fd5ec(uVar15,*(undefined8 *)(this + 0x60));
      if (uVar9 <= uVar7) break;
      pRVar10 = (RtWeakPtr *)FUN_049fd5f8(uVar15,uVar7);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar10);
      if (bVar3) {
        pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049fd5f8(*(undefined8 *)(this + 0x58),uVar7);
        plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
        (**(code **)(*plVar12 + 0x48))();
        pRVar13 = (RtWeakPtrBase *)FUN_049fd5f8(*(undefined8 *)(this + 0x58),uVar7);
        Sexy::RtWeakPtrBase::ClearId(pRVar13);
        uVar7 = uVar7 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
      }
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x58));
    clearItemsAlpha(this);
    takeEliminate(this);
    fVar17 = (float)PVZ_T();
    *(float *)(this + 0xb8) = fVar17 + 12.0;
    if (this[0xbc] != (EliminateModule)0x0) {
      FindAndPlayShowTip(this);
    }
  case 4:
    cancelTouch(this);
    uVar1 = 1;
  }
LAB_04a053cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onLoadComplete() */

void __thiscall EliminateModule::onLoadComplete(EliminateModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  BossProgressMeter *this_01;
  undefined8 uVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  PrimeText_PotentialText *pPVar12;
  PrimeTextWidget *this_02;
  ResourceInfo *pRVar13;
  RtClass *pRVar14;
  PopAnimRig *pPVar15;
  double dVar16;
  int local_70;
  float local_68;
  float local_64;
  wstring awStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  ResourceInfo *local_48 [2];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string((string *)local_48,"UIBossProgressBar");
  UIWidget::GetWidgetBySheetName((string *)local_48);
  nop();
  std::string::~string((string *)local_48);
  nop();
  if (this_01 != (BossProgressMeter *)0x0) {
    BossProgressMeter::SetEliminateModule(this_01,true);
  }
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(pRVar8 + 0x40);
  Board::GetBoardBaseOffset();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_68)
  ;
  if (local_70 < 0x51) {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = FUN_049fdfa4(200 - iVar3);
    local_68 = (float)iVar3;
  }
  else {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    dVar16 = (double)FUN_049fdfc8(200.0 - (double)iVar3 * 1.5);
    local_68 = (float)dVar16;
  }
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x198);
  iVar3 = 5;
  dVar16 = (double)FUN_049fdfc8(160.0 - (double)iVar4 * 1.2);
  local_64 = (float)dVar16;
  TodStringTranslate(L"[ELIMINATE_STEP_COUNT]");
  TodReplaceNumberString(awStack_60,L"{STEP_COUNT}",*(int *)(this + 0xb0) - *(int *)(this + 0xac));
  FUN_054766c8(awStack_60,(string *)local_48);
  FUN_05476c50((string *)local_48);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  fVar1 = local_68;
  pLVar10 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b782d8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  fVar2 = local_64;
  pSVar11 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b782d8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pLVar10 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b782d8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06b782d8);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  FUN_05477b24(aRStack_50,awStack_60);
  Sexy::Color::Color((Color *)local_48,2);
  pPVar12 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph
                      (fVar1 + (float)iVar4 * 0.2,fVar2 + (float)iVar5 * 0.38,(float)iVar6 * 0.5,
                       (float)iVar7 * 0.3,uVar9,aRStack_50,1,1,(string *)local_48);
  this_02 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_02,pPVar12);
  *(PrimeTextWidget **)(this + 0x118) = this_02;
  FUN_05476c50(aRStack_50);
  std::string::string(asStack_58,"POPANIM_BACKGROUNDS_PROTECT_TILE");
  GetPAMByName(asStack_58);
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  pRVar14 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar13,pRVar14);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pPVar15 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)local_48,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar15,(string *)local_48,0,aDStack_38);
  std::string::~string((string *)local_48);
  nop();
  do {
    local_48[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
              ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x180),
               (PopAnimRig **)local_48);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_05476c50(awStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::ResetGlovePosition() */

void __thiscall EliminateModule::ResetGlovePosition(EliminateModule *this)

{
  TimeLineTrack<Sexy::SexyVector3> *pTVar1;
  bool bVar2;
  StandaloneEffect *this_00;
  SexyVector3 *this_01;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Vec3 aVStack_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  Vec3 aVStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x104) = uVar3;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 200));
  if (bVar2) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 200));
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)(this + 0xf8),0xdbba1);
  }
  this_01 = (SexyVector3 *)(this + 0xf8);
  pTVar1 = (TimeLineTrack<Sexy::SexyVector3> *)(this + 0xd0);
  TimeLineTrack<Sexy::SexyVector3>::Initialize
            (*(undefined4 *)(this + 0xf8),*(undefined4 *)(this + 0xfc),*(undefined4 *)(this + 0x100)
             ,pTVar1);
  PVZ_T();
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame(pTVar1,this_01,1);
  fVar4 = (float)PVZ_T();
  uVar9 = 0xc3660000;
  uVar5 = 0;
  uVar3 = uVar9;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-230.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar5;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)(fVar4 + 1.0),pTVar1,&local_18,1);
  fVar4 = (float)PVZ_T();
  uVar6 = 0;
  uVar3 = uVar9;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,-230.0,0.0);
  local_38 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_48);
  uVar5 = 0;
  uVar7 = 0;
  local_34 = uVar3;
  local_30 = uVar6;
  EATextSquish::Vec3::Vec3(aVStack_28,135.0,0.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_28);
  local_14 = uVar5;
  local_10 = uVar7;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)(fVar4 + 2.0),pTVar1,&local_18,1);
  fVar4 = (float)PVZ_T();
  uVar6 = 0;
  uVar3 = uVar9;
  EATextSquish::Vec3::Vec3(aVStack_68,0.0,-230.0,0.0);
  local_58 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_68);
  uVar5 = 0;
  uVar7 = 0;
  local_54 = uVar3;
  local_50 = uVar6;
  EATextSquish::Vec3::Vec3(aVStack_48,135.0,0.0,0.0);
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)aVStack_48);
  uVar6 = 0x43200000;
  uVar8 = 0;
  uVar3 = uVar6;
  local_34 = uVar5;
  local_30 = uVar7;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,160.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar8;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)(fVar4 + 3.0),pTVar1,&local_18,1);
  fVar4 = (float)PVZ_T();
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_88,0.0,-230.0,0.0);
  local_78 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_88);
  uVar3 = 0;
  uVar7 = 0;
  local_74 = uVar9;
  local_70 = uVar5;
  EATextSquish::Vec3::Vec3(aVStack_68,135.0,0.0,0.0);
  local_58 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_78,(SexyVector3 *)aVStack_68);
  uVar5 = 0;
  local_54 = uVar3;
  local_50 = uVar7;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,160.0,0.0);
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)aVStack_48);
  uVar3 = 0;
  uVar9 = 0;
  local_34 = uVar6;
  local_30 = uVar5;
  EATextSquish::Vec3::Vec3(aVStack_28,-135.0,0.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar9;
  TimeLineTrack<Sexy::SexyVector3>::AddKeyFrame
            ((TimeLineTrack<Sexy::SexyVector3> *)(fVar4 + 3.5),pTVar1,&local_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onUpdate() */

void EliminateModule::onUpdate(void)

{
  int iVar1;
  int iVar2;
  EliminateModule EVar3;
  int iVar4;
  bool bVar5;
  EliminateModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar6;
  PopAnimRig *this;
  StandaloneEffect *this_00;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float in_s1;
  wstring awStack_20 [8];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x198));
  if (bVar5) {
    this = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x198));
    fVar7 = (float)PVZ_T();
    in_s1 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this,fVar7,in_s1);
    EVar3 = in_x0[0xbd];
  }
  else {
    EVar3 = in_x0[0xbd];
  }
  if (EVar3 != (EliminateModule)0x0) {
    fVar7 = (float)PVZ_T();
    local_18 = TimeLineTrack<Sexy::SexyVector3>::GetValueAt
                         ((TimeLineTrack<Sexy::SexyVector3> *)(in_x0 + 0xd0),fVar7);
    local_14 = in_s1;
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 200));
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)&local_18,0xdbba1);
    fVar7 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x104) + 3.5 < fVar7) {
      ResetGlovePosition(in_x0);
    }
  }
  fVar7 = (float)PVZ_T();
  if ((fVar7 <= *(float *)(in_x0 + 0xb8)) || (in_x0[0xbc] != (EliminateModule)0x0)) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0xc4) < fVar7) goto LAB_04a05f54;
LAB_04a05ecc:
    fVar7 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x108) < fVar7) goto LAB_04a05f74;
LAB_04a05edc:
    fVar7 = (float)PVZ_T();
    if (*(float *)(in_x0 + 300) < fVar7) goto LAB_04a06020;
LAB_04a05eec:
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 0x130)) goto LAB_04a05efc;
  }
  else {
    uVar9 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0xb8) = uVar9;
    clearItemsShowTip(in_x0);
    in_x0[0xbc] = (EliminateModule)0x1;
    FindAndPlayShowTip(in_x0);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 0xc4)) goto LAB_04a05ecc;
LAB_04a05f54:
    uVar9 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0xc4) = uVar9;
    checkEliminateCount(in_x0);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 0x108)) goto LAB_04a05edc;
LAB_04a05f74:
    uVar9 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x108) = uVar9;
    *(int *)(in_x0 + 0xac) = *(int *)(in_x0 + 0xac) + 1;
    TodStringTranslate(L"[ELIMINATE_STEP_COUNT]");
    TodReplaceNumberString
              (awStack_20,L"{STEP_COUNT}",*(int *)(in_x0 + 0xb0) - *(int *)(in_x0 + 0xac));
    FUN_054766c8(awStack_20,&local_18);
    FUN_05476c50(&local_18);
    if (*(PrimeTextWidget **)(in_x0 + 0x118) != (PrimeTextWidget *)0x0) {
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(in_x0 + 0x118),awStack_20);
    }
    iVar1 = *(int *)(in_x0 + 0xac);
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)in_x0);
    iVar2 = *(int *)(pRVar6 + 0x44);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    if (iVar1 == iVar4 * iVar2) {
      in_x0[0xb4] = (EliminateModule)0x1;
    }
    FUN_05476c50(awStack_20);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 300)) goto LAB_04a05eec;
LAB_04a06020:
    fVar7 = (float)PVZ_T();
    fVar7 = (fVar7 - *(float *)(in_x0 + 300)) * 1.4285715;
    fVar8 = (float)FUN_049fd8d0(fVar7,in_x0 + 0x128,in_x0 + 0x124);
    *(float *)(in_x0 + 0x120) = fVar8;
    if ((fVar7 < 1.0) && (fVar8 < *(float *)(in_x0 + 0x124))) goto LAB_04a05eec;
    uVar9 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 300) = uVar9;
    uVar9 = PVZ_T();
    *(undefined4 *)(in_x0 + 0x130) = uVar9;
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 0x130)) goto LAB_04a05efc;
  }
  fVar7 = (float)PVZ_T();
  fVar7 = (fVar7 - *(float *)(in_x0 + 0x130)) * 1.4285715;
  fVar8 = (float)FUN_049fd8d0(fVar7,in_x0 + 0x124,in_x0 + 0x128);
  *(float *)(in_x0 + 0x120) = fVar8;
  if ((1.0 <= fVar7) || (fVar8 <= *(float *)(in_x0 + 0x128))) {
    uVar9 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x130) = uVar9;
  }
LAB_04a05efc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onIntroNarrationFinished() */

void __thiscall EliminateModule::onIntroNarrationFinished(EliminateModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  Effect_PopAnim *pEVar4;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 200);
  local_8 = ___stack_chk_guard;
  this[0xbd] = (EliminateModule)0x1;
  pEVar4._0_4_ = (Effect_PopAnim *)PVZ_EOT();
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0xb8) = pEVar4._0_4_;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,295.0,510.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xf8),(SexyVector3 *)aRStack_18);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string((string *)aRStack_18,"tap_move");
  Effect_PopAnim::PlayLoopingAnimation(pEVar4._0_4_,this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  (**(code **)(*(long *)this_01 + 0x80))(0x3f000000,this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  ResetGlovePosition(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::registerForEvents() */

void __thiscall EliminateModule::registerForEvents(EliminateModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined1 local_230 [32];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1f0 [32];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_1a8 [8];
  CBMemberTranslatorX aCStack_1a0 [24];
  CBMemberTranslatorX aCStack_188 [136];
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStarted);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<EliminateModule,void(EliminateModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissionFinish);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFire);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantFire,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFoodEnd);
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_1d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onToolAppliedPlantFood);
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,local_1f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodButtonPrimed);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantfoodButtonPrimed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetCurrentStage);
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::BossSetCurrentPhase,local_210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ontakeFreezingWind);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::takeFreezingWind,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ontakeSpawnShield);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::takeSpawnShield,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombossMechTakeDamage);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::zombossMechTakeDamage,local_230);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_240 = local_100;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,local_250);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEliminateShieldDestroyed);
  local_260 = local_e8;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::EliminateShieldDestroyed,local_270);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEliminateFenceDestroyed);
  local_290 = local_e0;
  uStack_288 = uStack_d8;
  local_280 = local_d0;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::EliminateFenceDestroyed,&local_290);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEliminateColorDisappear);
  local_200 = local_b8;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::EliminateColorDisappear,local_210);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_2b0 = local_b0;
  uStack_2a8 = uStack_a8;
  local_2a0 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_2b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieIceAgeChiefSpwanWind);
  local_260 = local_88;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::ZombieIceAgeChiefSpwanWind,local_270);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_1d0 = local_80;
  uStack_1c8 = uStack_78;
  local_1c0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<EliminateModule,void(EliminateModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_1d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHolonutWillDie);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>(aDStack_38,aCStack_188);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::HolonutWillDie,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<EliminateModule,bool(EliminateModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_188);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<EliminateModule,bool(EliminateModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_1a0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_1a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>(aDStack_38,aCStack_188);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,2,a_Stack_1a8,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::createEliminate(int, int) */

void __thiscall EliminateModule::createEliminate(EliminateModule *this,int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  EliminateItem *this_00;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  Board *pBVar9;
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = GameObject::Create<EliminateItem>();
  if ((this[0xa1] == (EliminateModule)0x0) || (*(int *)(this + 0xa4) != *(int *)(this + 0xa8))) {
    uVar8 = 0;
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    while( true ) {
      uVar7 = *(undefined8 *)(pRVar5 + 0x68);
      uVar6 = FUN_049fd600(uVar7,*(undefined8 *)(pRVar5 + 0x70));
      if (uVar6 <= uVar8) break;
      uVar7 = FUN_049fd614(uVar7,uVar8);
      FUN_05475d88(asStack_40,uVar7);
      bVar1 = std::operator==(asStack_40,"peashooter");
      if ((bVar1) || (bVar1 = std::operator==(asStack_40,"threepeater"), bVar1)) {
        iVar3 = rowHaveZombie(this,2);
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,2,iVar3 + 1);
      }
      else {
        bVar1 = std::operator==(asStack_40,"coconutcannon");
        if (bVar1) {
          iVar3 = rowHaveZombie(this,1);
          ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,1,iVar3 + 1);
        }
        else {
          bVar2 = std::operator==(asStack_40,"firepeashooter");
          if (bVar2) {
            iVar3 = rowHaveZombie(this,0);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,(uint)bVar1,iVar3 + 1);
          }
          else {
            bVar1 = std::operator==(asStack_40,"fumeshroom");
            if (bVar1) {
              iVar3 = rowHaveZombie(this,4);
              ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,4,iVar3 + 1);
            }
            else {
              bVar1 = std::operator==(asStack_40,"snowpea");
              if ((bVar1) || (bVar1 = std::operator==(asStack_40,"wintermelon"), bVar1)) {
                iVar3 = rowHaveZombie(this,3);
                ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,3,iVar3 + 1);
              }
              else {
                ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,2,1);
              }
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
      std::string::~string(asStack_40);
    }
    uVar4 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
    EliminateItem::EliminateItemInitialize(this_00,uVar4);
    ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  }
  else {
    EliminateItem::EliminateItemInitialize(this_00,5);
    this[0xa1] = (EliminateModule)0x0;
    if (this[0xbf] != (EliminateModule)0x0) {
      this[0xbf] = (EliminateModule)0x0;
      addEliminatePlantFoodArrow(this,param_1,param_2);
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aPStack_38,L"[ELIMINATE_ELIMINATE_PLANTFOOD_TIP]",asStack_40);
      Board::DisplayAdviceAgain(pBVar9,aPStack_38,7,0);
      FUN_05476c50(aPStack_38);
      nop();
    }
  }
  *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
  *(int *)(this_00 + 0xa4) = param_1;
  *(int *)(this_00 + 0xa8) = param_2;
  EliminateItem::setAlpha(this_00,true);
  *(EliminateItem **)(*(long *)(this + 0x20) + (long)(param_2 + param_1 * 6) * 8) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::ReloadEliminates() */

void __thiscall EliminateModule::ReloadEliminates(EliminateModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ActionSubSystem *pAVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  EliminateItem *this_00;
  long lVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtMixedPtr aRStack_90 [8];
  RtId aRStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar8 = 0;
  local_8 = ___stack_chk_guard;
  lVar6 = *(long *)(this + 0x20);
  do {
    this_00 = *(EliminateItem **)(lVar6 + lVar8);
    if (this_00 != (EliminateItem *)0x0) {
      cVar1 = EliminateItem::IsBlock(this_00);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this_00 + 0x48))(this_00);
        *(undefined8 *)(*(long *)(this + 0x20) + lVar8) = 0;
        lVar6 = *(long *)(this + 0x20);
      }
      else {
        lVar6 = *(long *)(this + 0x20);
      }
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xf0);
  lVar8 = 0;
  iVar2 = 0;
  while( true ) {
    iVar7 = 0;
    lVar9 = lVar8;
    while( true ) {
      if ((*(EliminateItem **)(lVar6 + lVar9) == (EliminateItem *)0x0) ||
         (cVar1 = EliminateItem::IsBlock(*(EliminateItem **)(lVar6 + lVar9)), cVar1 == '\0')) {
        plVar4 = (long *)createEliminate(this,iVar2,iVar7);
        DVec3::DVec3((DVec3 *)&local_70);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_70 = (float)(iVar3 * iVar7 + 200);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_6c = (float)(0xa0 - iVar3);
        local_68 = 0;
        (**(code **)(*plVar4 + 0x78))(plVar4,(DVec3 *)&local_70);
        DVec3::DVec3((DVec3 *)&local_60);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        local_60 = (float)(iVar3 * iVar7 + 200);
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_58 = 0;
        local_5c = (float)(iVar3 * iVar2 + 0xa0);
        pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_98);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_90);
        std::string::string(asStack_80,"onReloadFallDone");
        RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_88,
                   asStack_80);
        ActionSubSystem::AddActionMoveTo
                  ((ActionSubSystem *)0x3e99999a,pAVar5,aRStack_78,(DVec3 *)&local_60,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_80);
        nop();
        Sexy::RtId::~RtId(aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
      if (iVar7 == 6) break;
      lVar6 = *(long *)(this + 0x20);
    }
    iVar2 = iVar2 + 1;
    lVar8 = lVar8 + 0x30;
    if (iVar2 == 5) break;
    lVar6 = *(long *)(this + 0x20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onPlantFire() */

void __thiscall EliminateModule::onPlantFire(EliminateModule *this)

{
  char cVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x74) == 0) {
    cVar1 = canEliminate(this);
    if (cVar1 == '\0') {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar2 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(auStack_10,L"[ELIMINATE_RELOAD]",auStack_18);
      Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,0);
      FUN_05476c50(auStack_10);
      nop();
      ReloadEliminates(this);
    }
    if (this[0xa0] == (EliminateModule)0x0) {
      setState(this,1);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0xc4) = fVar3 + 2.2;
    }
    else {
      takePlantFood(this);
      this[0xa0] = (EliminateModule)0x0;
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0xc4) = fVar3 + 5.2;
    }
  }
  takeShoot(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::ontakeFreezingWind() */

void __thiscall EliminateModule::ontakeFreezingWind(EliminateModule *this)

{
  char cVar1;
  PlayerInfo *pPVar2;
  EliminateItem *this_00;
  CrazyNPCManager *pCVar3;
  Board *pBVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  undefined1 auStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if ((pPVar2 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,0x36), cVar1 == '\0')) {
    PlayerInfo::UnlockGameFeature(pPVar2,0x36);
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    cVar1 = CrazyNPCManager::IsNarrationActive(pCVar3);
    if ((cVar1 == '\0') && (this[0xc2] == (EliminateModule)0x0)) {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"ZOMBIE_INTRO_ELIMINATE_FREEZINGWIND");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<EliminateModule,void(EliminateModule::*)()>(aDStack_38,auStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  this_00 = *(EliminateItem **)
             (*(long *)(this + 0x20) + (long)(*(int *)(this + 0x94) + *(int *)(this + 0x90) * 6) * 8
             );
  if (this_00 != (EliminateItem *)0x0) {
    EliminateItem::setBlock(this_00);
  }
  cVar1 = canEliminate(this);
  if (cVar1 == '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_50,L"[ELIMINATE_RELOAD]",asStack_58);
    Board::DisplayAdviceAgain(pBVar4,auStack_50,0x11,0);
    FUN_05476c50(auStack_50);
    nop();
    ReloadEliminates(this);
  }
  this[0xb4] = (EliminateModule)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::onZombieIceAgeChiefSpwanWind(int) */

void __thiscall EliminateModule::onZombieIceAgeChiefSpwanWind(EliminateModule *this,int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  EliminateItem *pEVar6;
  Board *pBVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_30 [8];
  EliminateItem *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    local_28 = *(EliminateItem **)(*(long *)(this + 0x20) + lVar9);
    if ((((local_28 != (EliminateItem *)0x0) &&
         (iVar2 = PlantOlivePit::CalcRenderOrder((PlantOlivePit *)local_28), iVar2 != 5)) &&
        (cVar1 = EliminateItem::IsBlock(local_28), pEVar6 = local_28, cVar1 == '\0')) &&
       (*(int *)(local_28 + 0xa4) == param_1)) {
      uVar8 = *(undefined8 *)(this + 0x38);
      lVar3 = FUN_049fd61c(uVar8,*(undefined8 *)(this + 0x40));
      lVar5 = 0;
      do {
        if (lVar5 == lVar3) {
          std::vector<EliminateItem*,std::allocator<EliminateItem*>>::push_back
                    ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_20,&local_28);
          break;
        }
        puVar4 = (undefined8 *)FUN_049fd628(uVar8,lVar5);
        lVar5 = lVar5 + 1;
      } while (pEVar6 != (EliminateItem *)*puVar4);
    }
    lVar9 = lVar9 + 8;
    if (lVar9 == 0xf0) {
      lVar9 = FUN_049fd61c(local_20,local_18);
      if (lVar9 != 0) {
        iVar2 = Sexy::Rand((int)lVar9);
        puVar4 = (undefined8 *)FUN_049fd628(local_20,(long)iVar2);
        pEVar6 = (EliminateItem *)*puVar4;
        if (pEVar6 != (EliminateItem *)0x0) {
          EliminateItem::setBlock(pEVar6);
          MessageRouter::Post<int,int,int,int>
                    ((MessageRouter *)gMessageRouter,Message::EliminateBlocked,
                     *(int *)(pEVar6 + 0xa4),*(int *)(pEVar6 + 0xa8));
        }
      }
      cVar1 = canEliminate(this);
      if (cVar1 == '\0') {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        FUN_05478178(&local_28,L"[ELIMINATE_RELOAD]",auStack_30);
        Board::DisplayAdviceAgain(pBVar7,&local_28,0x11,0);
        FUN_05476c50(&local_28);
        nop();
        ReloadEliminates(this);
      }
      std::vector<EliminateItem*,std::allocator<EliminateItem*>>::~vector
                ((vector<EliminateItem*,std::allocator<EliminateItem*>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateModule::fillVacancies() */

void __thiscall EliminateModule::fillVacancies(EliminateModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *__ptr;
  int *piVar5;
  ActionSubSystem *pAVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar15 = 0xc0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  lVar14 = 0;
  local_8 = ___stack_chk_guard;
  __ptr = malloc(0x18);
  __ptr[0] = 0;
  __ptr[1] = 0;
  __ptr[2] = 0;
  __ptr[3] = 0;
  __ptr[4] = 0;
  __ptr[5] = 0;
  do {
    iVar10 = (int)lVar14;
    iVar9 = 4;
    iVar13 = 0;
    lVar12 = lVar15;
    do {
      lVar11 = *(long *)(*(long *)(this + 0x20) + lVar12);
      if (lVar11 == 0) {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar8 = false;
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_70,(__normal_iterator *)&local_60),
              bVar1) {
          piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
          if ((iVar10 == piVar5[2] && piVar5[1] < iVar9) && (*piVar5 == 0)) {
            bVar8 = true;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_70);
        }
        if (!bVar8) {
          iVar13 = iVar13 + 1;
        }
      }
      else {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        bVar8 = false;
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_70,(__normal_iterator *)&local_60),
              bVar1) {
          piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
          if ((iVar10 == piVar5[2] && piVar5[1] == iVar9) && (*piVar5 == 0)) {
            bVar8 = true;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_70);
        }
        if (bVar8 < (iVar13 != 0)) {
          iVar4 = iVar9 + iVar13;
          *(long *)(*(long *)(this + 0x20) + (long)(iVar10 + iVar4 * 6) * 8) = lVar11;
          *(undefined8 *)(*(long *)(this + 0x20) + lVar12) = 0;
          DVec3::DVec3((DVec3 *)&local_60);
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          local_60 = CONCAT44(local_60._4_4_,(float)(iVar2 * iVar10 + 200));
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_58 = 0;
          local_60 = CONCAT44((float)(iVar2 * iVar4 + 0xa0),(undefined4)local_60);
          pAVar6 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
          std::string::string(asStack_78,"onFallDone");
          RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,
                     asStack_78);
          ActionSubSystem::AddActionMoveTo
                    ((ActionSubSystem *)0x3e99999a,pAVar6,(exception_ptr *)&local_70,
                     (DVec3 *)&local_60,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_78);
          nop();
          Sexy::RtId::~RtId(aRStack_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
          *(int *)(lVar11 + 0xa4) = iVar4;
        }
        else {
          iVar13 = 0;
        }
      }
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + -0x30;
    } while (iVar9 != -1);
    __ptr[lVar14] = iVar13;
    lVar14 = lVar14 + 1;
    lVar15 = lVar15 + 8;
  } while (lVar14 != 6);
  if (this[0xa1] != (EliminateModule)0x0) {
    iVar13 = *__ptr;
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    iVar9 = __ptr[1] + iVar13;
    if (__ptr[1] < 1) {
      iVar9 = iVar13;
    }
    if (0 < __ptr[2]) {
      iVar9 = iVar9 + __ptr[2];
    }
    if (0 < __ptr[3]) {
      iVar9 = iVar9 + __ptr[3];
    }
    if (0 < __ptr[4]) {
      iVar9 = iVar9 + __ptr[4];
    }
    iVar13 = __ptr[5] + iVar9;
    if (__ptr[5] < 1) {
      iVar13 = iVar9;
    }
    uVar3 = Sexy::Rand(iVar13);
    *(undefined4 *)(this + 0xa4) = uVar3;
  }
  lVar14 = 0;
  do {
    iVar9 = (int)lVar14;
    iVar13 = __ptr[lVar14];
    if (0 < iVar13) {
      iVar10 = 0;
      do {
        plVar7 = (long *)createEliminate(this,iVar10,iVar9);
        DVec3::DVec3((DVec3 *)&local_70);
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_70 = CONCAT44(local_70._4_4_,(float)(iVar4 * iVar9 + 200));
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_68 = 0;
        local_70 = CONCAT44((float)(0xa0 - iVar4),(undefined4)local_70);
        (**(code **)(*plVar7 + 0x78))(plVar7,(exception_ptr *)&local_70);
        DVec3::DVec3((DVec3 *)&local_60);
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_60 = CONCAT44(local_60._4_4_,(float)(iVar4 * iVar9 + 200));
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        iVar4 = iVar4 * iVar10;
        local_58 = 0;
        iVar10 = iVar10 + 1;
        local_60 = CONCAT44((float)(iVar4 + 0xa0),(undefined4)local_60);
        pAVar6 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)aRStack_98);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_90);
        std::string::string((string *)aRStack_80,"onFallDone");
        RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,
                   (RtId *)aRStack_88,(string *)aRStack_80);
        ActionSubSystem::AddActionMoveTo
                  ((ActionSubSystem *)0x3e99999a,pAVar6,(RtWeakPtr<Sexy::SoundResource> *)asStack_78
                   ,(DVec3 *)&local_60,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_80);
        nop();
        Sexy::RtId::~RtId((RtId *)aRStack_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      } while (iVar10 != iVar13);
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 6);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  free(__ptr);
  return;
}


/* EliminateModule::onEliminateDone(BoardEntity*) */

void EliminateModule::onEliminateDone(BoardEntity *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x70) + 1;
  *(int *)(param_1 + 0x70) = iVar8;
  uVar2 = FUN_049fd61c(uVar5,*(undefined8 *)(param_1 + 0x40));
  if (uVar2 <= (ulong)(long)iVar8) {
    uVar1 = (int)uVar2 - 1;
    if (-1 < (int)uVar1) {
      lVar6 = (long)(int)uVar1 + -1;
      lVar4 = (long)(int)uVar1;
      lVar7 = lVar6;
      while( true ) {
        plVar3 = (long *)FUN_049fd628(uVar5,lVar4);
        plVar3 = (long *)*plVar3;
        if (plVar3 != (long *)0x0) {
          *(undefined8 *)
           (*(long *)(param_1 + 0x20) +
           (long)((int)plVar3[0x15] + *(int *)((long)plVar3 + 0xa4) * 6) * 8) = 0;
          (**(code **)(*plVar3 + 0x48))(plVar3);
        }
        if (lVar7 == lVar6 - (ulong)uVar1) break;
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        lVar4 = lVar7;
        lVar7 = lVar7 + -1;
      }
      iVar8 = *(int *)(param_1 + 0x70);
    }
    *(int *)(param_1 + 0x74) = iVar8;
    if (6 < iVar8) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      param_1[0xa1] = (BoardEntity)0x1;
    }
    clearSelectItems((EliminateModule *)param_1);
    takeShoot((EliminateModule *)param_1);
    *(undefined4 *)(param_1 + 0x70) = 0;
    fillVacancies((EliminateModule *)param_1);
    return;
  }
  return;
}

