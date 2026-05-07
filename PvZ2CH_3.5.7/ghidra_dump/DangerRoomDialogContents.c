// Class: DangerRoomDialogContents


/* DangerRoomDialogContents::SetSecondLine(std::wstring, std::wstring, int, bool) */

void __thiscall
DangerRoomDialogContents::SetSecondLine
          (DangerRoomDialogContents *this,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          DangerRoomDialogContents param_5)

{
  thunk_FUN_05477b9c(this + 0x120);
  thunk_FUN_05477b9c(this + 0x128,param_3);
  this[0x11c] = param_5;
  *(undefined4 *)(this + 0x118) = param_4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDialogContents::SetPlantfoodCount(int) */

void __thiscall
DangerRoomDialogContents::SetPlantfoodCount(DangerRoomDialogContents *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  PrimeTypeface *pPVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x130) = param_1;
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DANGER_ROOM_PLANTFOOD]");
  FUN_054766c8(this + 0x138,auStack_10);
  FUN_05476c50(auStack_10);
  Sexy::StrFormat(L"%d",auStack_10,(ulong)(uint)param_1);
  FUN_054766c8(this + 0x140,auStack_10);
  FUN_05476c50(auStack_10);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
  FUN_05477b24(auStack_10,this + 0x138);
  iVar2 = Sexy::PrimeTypeface::SizeString_Line(pPVar4,auStack_10);
  FUN_05476c50(auStack_10);
  iVar3 = FUN_03c913cc(10);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x148) = -iVar3 - iVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomDialogContents::FinalizeContentSize() */

void __thiscall DangerRoomDialogContents::FinalizeContentSize(DangerRoomDialogContents *this)

{
  int iVar1;
  long *plVar2;
  
  (**(code **)(**(long **)(this + 0x150) + 0x310))(*(long **)(this + 0x150));
  if ((*(int *)(this + 0x130) != -1) && (iVar1 = FUN_03c913cc(0x22), 0 < iVar1)) {
    plVar2 = *(long **)(this + 0x150);
    (**(code **)(*plVar2 + 0x198))
              (plVar2,(int)plVar2[9],*(undefined4 *)((long)plVar2 + 0x4c),(int)plVar2[10],
               iVar1 + *(int *)((long)plVar2 + 0x54));
    (**(code **)(**(long **)(this + 0x150) + 0x310))(*(long **)(this + 0x150));
  }
  return;
}


/* DangerRoomDialogContents::DangerRoomDialogContents(PVZ2UIDialog*, DangerRoomStatScreen*) */

void __thiscall
DangerRoomDialogContents::DangerRoomDialogContents
          (DangerRoomDialogContents *this,PVZ2UIDialog *param_1,DangerRoomStatScreen *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0675b360;
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0xd8))
  ;
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  FUN_05476574(this + 0x138);
  FUN_05476574(this + 0x140);
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0xd8));
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  FUN_054772c4(this + 0x108,&DAT_056f11a8);
  FUN_054772c4(this + 0x110,&DAT_056f11a8);
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  this[0x11c] = (DangerRoomDialogContents)0x0;
  FUN_054772c4(this + 0x120,&DAT_056f11a8);
  FUN_054772c4(this + 0x128,&DAT_056f11a8);
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0;
  FUN_054772c4(this + 0x138,&DAT_056f11a8);
  FUN_054772c4(this + 0x140,&DAT_056f11a8);
  *(PVZ2UIDialog **)(this + 0x150) = param_1;
  *(DangerRoomStatScreen **)(this + 0x158) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDialogContents::drawFirstLine(Sexy::Graphics*, int, int, int, int, int, int, int) */

void __thiscall
DangerRoomDialogContents::drawFirstLine
          (DangerRoomDialogContents *this,Graphics *param_1,int param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_20 [8];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
  FUN_05477b24(auStack_20,this + 0x108);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelName);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)param_2,(float)param_3,(float)param_4,(float)param_8,uVar6,
             param_1,auStack_20,2,2,(Insets *)local_18,0);
  FUN_05476c50(auStack_20);
  if (*(int *)(this + 0x100) == -1) {
    iVar5 = 0;
    do {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2248);
      iVar2 = FUN_03c913cc(0);
      pLVar8 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2248);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      iVar4 = FUN_03c913cc(6);
      iVar3 = (iVar3 + iVar4) * iVar5;
      iVar5 = iVar5 + 1;
      iVar4 = FUN_03c913cc(3);
      Sexy::Graphics::DrawImage(param_1,pIVar7,param_5 + iVar2 + iVar3,param_6 + iVar4);
    } while (iVar5 != 5);
    lVar9 = 0;
    local_18 = FUN_03c91370(*(undefined8 *)(this + 0xd8),0);
    bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
    while( true ) {
      if (!bVar1) {
        pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2308);
        iVar5 = FUN_03c913cc(bVar1);
        pLVar8 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2248);
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
        iVar2 = FUN_03c913cc(6);
        iVar4 = FUN_03c913cc(0xfffffffc);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar7,param_5 + iVar5 + (iVar3 + iVar2) * (int)lVar9,param_6 + iVar4);
      }
      lVar9 = lVar9 + 1;
      if (lVar9 == 5) break;
      auVar10 = FUN_03c91370(*(undefined8 *)(this + 0xd8),lVar9);
      local_18 = auVar10;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
    }
  }
  else {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
    FUN_05477b24(auStack_20,this + 0x110);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelInfo);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)param_5,(float)param_6,(float)param_7,(float)param_8,uVar6,
               param_1,auStack_20,0,2,(Insets *)local_18,0);
    FUN_05476c50(auStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomDialogContents::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomDialogContents::Draw(DangerRoomDialogContents *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  Image *pIVar13;
  LotteryResultProgressBar *pLVar14;
  DangerRoomStatScreen *this_00;
  float fVar15;
  PrimeTypeface *pPVar17;
  float fVar16;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar4 = *(int *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  iVar1 = iVar4 / 2;
  iVar3 = FUN_03c913cc(10);
  iVar11 = iVar3 + iVar1;
  iVar3 = (iVar4 - iVar1) - iVar3;
  iVar4 = FUN_03c91300(*(undefined4 *)(*(long *)(this + 0x158) + 0xf4));
  iVar5 = FUN_03c913cc(0xf);
  if (iVar4 != 0xd) {
    iVar6 = FUN_03c913cc(0x25);
    drawFirstLine(this,param_1,0,iVar5,iVar1,iVar11,iVar5,iVar3,iVar6);
  }
  iVar6 = FUN_03c913cc(0x34);
  fVar16 = (float)iVar1;
  pPVar17._0_4_ = (PrimeTypeface *)(float)iVar11;
  fVar15 = (float)iVar3;
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
  iVar7 = FUN_03c913cc(0x25);
  FUN_05477b24(auStack_20,this + 0x120);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelName);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)0x0,(float)iVar6,fVar16,(float)iVar7,uVar12,param_1,auStack_20,2,2,
             aIStack_18,0);
  FUN_05476c50(auStack_20);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
  iVar7 = FUN_03c913cc(0x25);
  FUN_05477b24(auStack_20,this + 0x128);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelInfo);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar17._0_4_,(float)iVar6,fVar15,(float)iVar7,uVar12,param_1,auStack_20,0,2,aIStack_18
             ,0);
  FUN_05476c50(auStack_20);
  iVar6 = FUN_03c913cc(0x59);
  if (iVar4 != 0xe) {
    if (*(int *)(this + 0x130) != -1) {
      uVar12 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
      iVar7 = FUN_03c913cc(0x25);
      FUN_05477b24(auStack_20,this + 0x138);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelName);
      Sexy::PrimeTypeface::DrawString_Paragraph
                ((PrimeTypeface *)0x0,(float)iVar6,fVar16,(float)iVar7,uVar12,param_1,auStack_20,2,2
                 ,aIStack_18,0);
      FUN_05476c50(auStack_20);
      uVar12 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
      iVar7 = FUN_03c913cc(0x25);
      FUN_05477b24(auStack_20,this + 0x140);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_Plantfood);
      Sexy::PrimeTypeface::DrawString_Paragraph
                (pPVar17._0_4_,(float)iVar6,fVar15,(float)iVar7,uVar12,param_1,auStack_20,0,2,
                 aIStack_18,0);
      FUN_05476c50(auStack_20);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad21e8);
      iVar7 = *(int *)(this + 0x148);
      iVar8 = FUN_03c913cc(0);
      pLVar14 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad21e8);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      iVar10 = FUN_03c913cc(6);
      Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar1 + iVar7 + iVar8) - iVar9,iVar10 + iVar6);
    }
    if (iVar4 == 0) goto LAB_03c91d50;
  }
  Sexy::Graphics::PushState(param_1);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0x48),-*(int *)(this + 0x4c));
  Sexy::Graphics::ClearClipRect(param_1);
  PVZ2UIDialog::DrawButtonsManually(*(PVZ2UIDialog **)(this + 0x150),param_1);
  this_00 = *(DangerRoomStatScreen **)(this + 0x158);
  cVar2 = FUN_03c913e0(*(undefined4 *)(this_00 + 0xf8),this_00 + 0xfc);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    Sexy::Insets::Insets(aIStack_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  }
  else {
    DangerRoomStatScreen::DrawScreenFade(this_00,param_1);
  }
  Sexy::Graphics::PopState(param_1);
  if (iVar4 == 0xd) {
    iVar4 = FUN_03c913cc(0x25);
    drawFirstLine(this,param_1,0,iVar5,iVar1,iVar11,iVar5,iVar3,iVar4);
  }
  else if ((iVar4 == 0xe) && (*(int *)(this + 0x130) != -1)) {
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
    iVar11 = FUN_03c913cc(0x25);
    FUN_05477b24(auStack_20,this + 0x138);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelName);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)0x0,(float)iVar6,fVar16,(float)iVar11,uVar12,param_1,auStack_20,2,2,
               aIStack_18,0);
    FUN_05476c50(auStack_20);
    uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
    iVar11 = FUN_03c913cc(0x25);
    FUN_05477b24(auStack_20,this + 0x140);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_Plantfood);
    Sexy::PrimeTypeface::DrawString_Paragraph
              (pPVar17._0_4_,(float)iVar6,fVar15,(float)iVar11,uVar12,param_1,auStack_20,0,2,
               aIStack_18,0);
    FUN_05476c50(auStack_20);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad21e8);
    iVar11 = *(int *)(this + 0x148);
    iVar4 = FUN_03c913cc(0);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad21e8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar5 = FUN_03c913cc(6);
    Sexy::Graphics::DrawImage(param_1,pIVar13,(iVar1 + iVar11 + iVar4) - iVar3,iVar5 + iVar6);
  }
LAB_03c91d50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomDialogContents::~DangerRoomDialogContents() */

void __thiscall DangerRoomDialogContents::~DangerRoomDialogContents(DangerRoomDialogContents *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b360;
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DangerRoomDialogContents::~DangerRoomDialogContents() */

void __thiscall DangerRoomDialogContents::~DangerRoomDialogContents(DangerRoomDialogContents *this)

{
  ~DangerRoomDialogContents(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomDialogContents::SetFirstLine(std::wstring, std::wstring, std::vector<bool,
   std::allocator<bool> > const&, int) */

void __thiscall
DangerRoomDialogContents::SetFirstLine
          (DangerRoomDialogContents *this,undefined8 param_2,undefined8 param_3,vector *param_4,
          undefined4 param_5)

{
  thunk_FUN_05477b9c(this + 0x108);
  thunk_FUN_05477b9c(this + 0x110,param_3);
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0xd8),param_4);
  *(undefined4 *)(this + 0x100) = param_5;
  return;
}

