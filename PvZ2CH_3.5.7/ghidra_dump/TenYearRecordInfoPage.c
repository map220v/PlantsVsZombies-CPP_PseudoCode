// Class: TenYearRecordInfoPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TenYearRecordInfoPage::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
TenYearRecordInfoPage::DrawAll(TenYearRecordInfoPage *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  uint uVar2;
  WidgetManager *this_00;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_30;
  AutoModalFlags aAStack_28 [16];
  undefined8 auStack_18 [2];
  long lStack_8;
  
  this_00 = *(WidgetManager **)(this + 0x18);
  lStack_8 = ___stack_chk_guard;
  if ((this_00 != (WidgetManager *)0x0) && (*(int *)(this_00 + 0xc0) < *(int *)(this + 100))) {
    Sexy::WidgetManager::FlushDeferredOverlayWidgets(this_00,*(int *)(this + 100));
  }
  Sexy::AutoModalFlags::AutoModalFlags(aAStack_28,param_1,(FlagsMod *)(this + 0x5c));
  if ((this[0x59] != (TenYearRecordInfoPage)0x0) &&
     (uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]),
     (uVar2 >> 3 & 1) != 0)) {
    (**(code **)(*(long *)this + 0x50))((TRect *)auStack_18,this);
    Sexy::Graphics::ClipRect(param_2,(TRect *)auStack_18);
  }
  lVar3 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  if (lVar3 == 0) {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      (**(code **)(*(long *)this + 0x128))(this,param_2);
    }
  }
  else {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      Sexy::Graphics::PushState(param_2);
      (**(code **)(*(long *)this + 0x128))(this,param_2);
      Sexy::Graphics::PopState(param_2);
    }
    uStack_30 = FUN_052c1910(*(undefined8 *)(this + 8));
    while( true ) {
      auStack_18[0] =
           std::
           __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                     ((TaskResource **)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&uStack_30,(rbtree_iterator *)auStack_18);
      if (!bVar1) break;
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_30);
      plVar5 = (long *)*puVar4;
      if (*(char *)((long)plVar5 + 0x6c) != '\0') {
        if ((*(long *)(this + 0x18) != 0) && (*(long **)(*(long *)(this + 0x18) + 0xe0) == plVar5))
        {
          param_1[8] = (ModalFlags)0x1;
        }
        Sexy::Graphics::PushState(param_2);
        Sexy::Graphics::Translate(param_2,(int)plVar5[9],*(int *)((long)plVar5 + 0x4c));
        (**(code **)(*plVar5 + 0x130))(plVar5,param_1,param_2);
        *(undefined1 *)((long)plVar5 + 0x44) = 0;
        Sexy::Graphics::PopState(param_2);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_30);
    }
  }
  Sexy::AutoModalFlags::~AutoModalFlags(aAStack_28);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TenYearRecordInfoPage::GetPageIndex() */

undefined4 __thiscall TenYearRecordInfoPage::GetPageIndex(TenYearRecordInfoPage *this)

{
  return *(undefined4 *)(this + 0xd4);
}


/* TenYearRecordInfoPage::SetPageIndex(int) */

void __thiscall TenYearRecordInfoPage::SetPageIndex(TenYearRecordInfoPage *this,int param_1)

{
  *(int *)(this + 0xd4) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TenYearRecordInfoPage::Draw(Sexy::Graphics*) */

void __thiscall TenYearRecordInfoPage::Draw(TenYearRecordInfoPage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  GraphicsAutoState aGStack_88 [8];
  wstring awStack_80 [8];
  Insets aIStack_78 [12];
  int local_6c;
  Insets aIStack_68 [12];
  int local_5c;
  Insets aIStack_58 [12];
  int local_4c;
  Insets aIStack_48 [12];
  int local_3c;
  wstring awStack_38 [12];
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_88,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar1 = FUN_04e8a1f4(0x28);
  fVar8 = (float)iVar1;
  switch(*(undefined4 *)(this + 0xd4)) {
  case 0:
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_78,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_1]");
    TodReplaceString(awStack_38,L"{NAME}",(wstring *)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_78,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = fVar8 + (float)local_6c + (float)iVar1;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x21);
    Sexy::Insets::Insets(aIStack_68,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_2]");
    TodReplaceString(awStack_38,L"{TIME}",(wstring *)(this + 0xe0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_68,uVar7,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_5c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_58,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_3]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xf8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_4c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(3);
    iVar3 = FUN_04e8a1f4(0x23);
    Sexy::Insets::Insets(aIStack_48,iVar1,(int)(fVar8 + (float)iVar2),*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_4]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0xfc));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar7,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    iVar2 = FUN_04e8a1f4(3);
    fVar8 = (float)(iVar1 - iVar2) + (float)local_3c + fVar8;
    iVar3 = FUN_04e8a1f4(0);
    iVar4 = FUN_04e8a1f4(0x32);
    iVar1 = *(int *)(this + 0x50);
    iVar5 = FUN_04e8a1f4(0x28);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar3,(int)(fVar8 - (float)iVar2),iVar4 + iVar1,iVar5)
    ;
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_5]");
    TodReplaceNumberString(awStack_80,L"{COUNT}",*(int *)(this + 0x104));
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar6,aIStack_18,3,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_80);
    iVar1 = FUN_04e8a1f4(0xc);
    iVar2 = FUN_04e8a1f4(7);
    iVar3 = FUN_04e8a1f4(0);
    iVar4 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar3,(int)((float)(iVar1 - iVar2) + (float)local_2c + fVar8),
               *(int *)(this + 0x50),iVar4);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX1_6]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,awStack_80,aIStack_28,uVar7,aIStack_18,2,1);
    FUN_05476c50(awStack_80);
    break;
  case 1:
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_78,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_1]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_78,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = fVar8 + (float)local_6c + (float)iVar1;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_68,iVar1 + iVar2,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_2]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x108));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_68,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_5c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_58,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_3]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x10c));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar7,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_4c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_48,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_4]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x11c));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar7,aIStack_18,2,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    iVar2 = FUN_04e8a1f4(7);
    fVar8 = (float)(iVar1 - iVar2) + (float)local_3c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x32);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar1,(int)fVar8,iVar2 + *(int *)(this + 0x50),iVar2);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,this + 0xe8,awStack_38,uVar6,aIStack_18,3,1);
    iVar1 = FUN_04e8a1f4(0xc);
    iVar2 = FUN_04e8a1f4(7);
    iVar3 = FUN_04e8a1f4(0);
    iVar4 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar3 + iVar4,(int)((float)(iVar1 - iVar2) + (float)local_2c + fVar8),
               *(int *)(this + 0x50),iVar4);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_7]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,awStack_80,aIStack_28,uVar7,aIStack_18,0,1);
    FUN_05476c50(awStack_80);
    break;
  case 2:
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x20);
    Sexy::Insets::Insets(aIStack_68,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX3_1]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_68,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = fVar8 + (float)local_5c + (float)iVar1;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_58,iVar1 + iVar2,(int)fVar8,*(int *)(this + 0x50) - iVar2,iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX3_2]");
    TodReplaceString(awStack_38,L"{COUNT}",(wstring *)(this + 0xe0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_58,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_4c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x3c);
    iVar3 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_48,iVar1 + iVar2,(int)fVar8,*(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX3_3]");
    TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(this + 0x134));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = (float)iVar1 + (float)local_3c + fVar8;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x20);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar1,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX3_4]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    iVar1 = FUN_04e8a1f4(0xc);
    iVar2 = FUN_04e8a1f4(0);
    iVar3 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar2 + iVar3,(int)((float)iVar1 + (float)local_2c + fVar8),
               *(int *)(this + 0x50),iVar3);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX3_5]");
    TodReplaceString(awStack_80,L"{COUNT}",(wstring *)(this + 0xf0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_78,aIStack_28,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_78);
    FUN_05476c50(awStack_80);
    break;
  case 4:
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26);
    iVar2 = FUN_04e8a1f4(0);
    iVar3 = FUN_04e8a1f4(0x3c);
    iVar1 = *(int *)(this + 0x50);
    iVar4 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets(aIStack_48,iVar2,(int)fVar8,iVar3 + iVar1,iVar4);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX4_1]");
    TodReplaceString(awStack_38,L"{NAME}",(wstring *)(this + 0xd8));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,aIStack_48,uVar7,aIStack_18,0,0);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(awStack_38);
    iVar1 = FUN_04e8a1f4(0xc);
    fVar8 = fVar8 + (float)local_3c + (float)iVar1;
    iVar1 = FUN_04e8a1f4(0);
    iVar2 = FUN_04e8a1f4(0x1e);
    Sexy::Insets::Insets((Insets *)awStack_38,iVar1 + iVar2,(int)fVar8,*(int *)(this + 0x50),iVar2);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX4_2]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_28,awStack_38,uVar7,aIStack_18,0,1);
    FUN_05476c50(aIStack_28);
    iVar2 = FUN_04e8a1f4(200);
    iVar3 = FUN_04e8a1f4(0);
    iVar4 = FUN_04e8a1f4(0x14);
    iVar1 = *(int *)(this + 0x50);
    iVar5 = FUN_04e8a1f4(0x28);
    Sexy::Insets::Insets
              (aIStack_28,iVar3,(int)((float)iVar2 + (float)local_2c + fVar8),iVar1 - iVar4,iVar5);
    TodStringTranslate(L"[TENYEAR_RECORD_INDEX4_3]");
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_1,aIStack_58,aIStack_28,uVar7,aIStack_18,1,1);
    FUN_05476c50(aIStack_58);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TenYearRecordInfoPage::~TenYearRecordInfoPage() */

void __thiscall TenYearRecordInfoPage::~TenYearRecordInfoPage(TenYearRecordInfoPage *this)

{
  *(undefined ***)this = &PTR_GetClass_069eb6a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TenYearRecordInfoPage::~TenYearRecordInfoPage() */

void __thiscall TenYearRecordInfoPage::~TenYearRecordInfoPage(TenYearRecordInfoPage *this)

{
  ~TenYearRecordInfoPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TenYearRecordInfoPage::UnlockedWorldCount(PlayerInfo*) */

void TenYearRecordInfoPage::UnlockedWorldCount(PlayerInfo *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  WorldMapList *this_00;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ProfileMgr *this_01;
  PlayerInfo *pPVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar10 = 0;
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x150);
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar11 = *(undefined8 *)(this_00 + 8);
  lVar5 = FUN_04e89d1c(uVar11,*(undefined8 *)(this_00 + 0x10));
  if (lVar5 != 0) {
    do {
      uVar11 = FUN_04e89d3c(uVar11,uVar10);
      FUN_05475d88(asStack_20,uVar11);
      lVar5 = FUN_04e89d3c(*(undefined8 *)(this_00 + 8),uVar10);
      cVar4 = *(char *)(lVar5 + 0xab);
      cVar1 = *(char *)(lVar5 + 0xac);
      cVar2 = WorldMapList::IsWorldEnabled(this_00,asStack_20);
      if (cVar2 == '\0') {
LAB_04e8c270:
        std::string::~string(asStack_20);
      }
      else {
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar11,uVar6,asStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this);
        bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (((bVar3) ||
            (bVar3 = std::operator==("tutorial",asStack_20), cVar1 != '\0' || cVar4 != '\0')) ||
           (bVar3)) goto LAB_04e8c270;
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
        cVar4 = ProfileUtils::IsWorldUnlocked(asStack_20,pPVar8);
        if (cVar4 != '\0') {
          iVar9 = iVar9 + 1;
        }
        std::string::~string(asStack_20);
      }
      uVar10 = uVar10 + 1;
      uVar11 = *(undefined8 *)(this_00 + 8);
      uVar7 = FUN_04e89d1c(uVar11,*(undefined8 *)(this_00 + 0x10));
    } while (uVar10 < uVar7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TenYearRecordInfoPage::setupScreen() */

void __thiscall TenYearRecordInfoPage::setupScreen(TenYearRecordInfoPage *this)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ProfileMgr *this_01;
  WorldMap *this_02;
  time_t __time1;
  char *__nptr;
  undefined8 *puVar9;
  string *psVar10;
  undefined8 uVar11;
  RtId *pRVar12;
  RtObject *this_03;
  GamePropertySheet *pGVar13;
  long lVar14;
  string *extraout_x1;
  long lVar15;
  double dVar16;
  wstring awStack_e8 [8];
  wstring awStack_e0 [8];
  string asStack_d8 [8];
  undefined8 local_d0;
  Insets aIStack_c8 [16];
  undefined8 local_b8 [3];
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  lVar15 = *(long *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04e8a1f4(0x1e);
  iVar6 = *(int *)(lVar15 + 0x48);
  iVar4 = FUN_04e8a1f4(0x50);
  iVar8 = *(int *)(lVar15 + 0x4c);
  iVar5 = FUN_04e8a1f4(0x19);
  Sexy::Insets::Insets
            (aIStack_c8,iVar3 + iVar6,iVar4 + iVar8,*(int *)(lVar15 + 0x50) - iVar5,
             *(int *)(lVar15 + 0x54));
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_c8);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (WorldMap *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (WorldMap *)0x0) {
    PlayerInfo::AM_GetName();
    FUN_054766c8(this + 0xd8,(RtName *)local_b8);
    FUN_05476c50((RtName *)local_b8);
    __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
    if (0 < __time1) {
      iVar6 = FUN_04e89948(*(undefined4 *)(this_02 + 0x600));
      *(long *)(this + 0x128) = (long)iVar6;
      dVar16 = difftime(__time1,(long)iVar6);
      this_00 = gLawnApp;
      *(int *)(this + 0xf8) = (int)(dVar16 * 1.1574074074074073e-05) + 1;
      lVar15 = LawnApp::BeijingTime(this_00,(long *)(this + 0x128));
      if (lVar15 != 0) {
        Sexy::StrFormat("%04d%02d%02d",(string *)&local_d0,(ulong)(*(int *)(lVar15 + 0x14) + 0x76c),
                        (ulong)(*(int *)(lVar15 + 0x10) + 1),(ulong)*(uint *)(lVar15 + 0xc));
        __nptr = (char *)FUN_0547429c((string *)&local_d0);
        iVar6 = atoi(__nptr);
        StringHelper::ToDateString(iVar6,0);
        FUN_054766c8(this + 0xe0,(RtName *)local_b8);
        FUN_05476c50((RtName *)local_b8);
        std::string::~string((string *)&local_d0);
      }
    }
    puVar9 = (undefined8 *)WorldMap::GetActionsMgr(this_02);
    uVar7 = FUN_04e89958(*puVar9,puVar9[1]);
    *(undefined4 *)(this + 0x108) = uVar7;
    lVar15 = LawnApp::GetWorldMapList(gLawnApp);
    uVar7 = UnlockedWorldCount((PlayerInfo *)this);
    *(undefined4 *)(this + 0xfc) = uVar7;
    if (lVar15 != 0) {
      *(undefined4 *)(this + 0x104) = 0;
      iVar6 = 0;
      std::string::string(asStack_d8,"egypt");
      nop();
      local_d0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar15 + 8));
      local_b8[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar15 + 8));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_d0,(__normal_iterator *)local_b8), bVar1
            ) {
        psVar10 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
        bVar1 = std::operator==(psVar10,"tutorial");
        if (!bVar1) {
          iVar8 = PlayerInfo::GetStarsCompletedInWorld((string *)this_02,SUB81(psVar10,0));
          if (iVar6 <= iVar8) {
            thunk_FUN_05475e00(asStack_d8,psVar10);
            iVar6 = iVar8;
          }
          *(int *)(this + 0x104) = *(int *)(this + 0x104) + iVar8;
        }
        eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                  ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_d0);
      }
      std::string::~string(asStack_d8);
    }
    uVar11 = Sexy::LazySingleton<PVZDB>::GetInstance();
    lVar15 = 0;
    Sexy::RtName::RtName((RtName *)local_b8,L"DefaultGameProps");
    PVZDB::GetIdByAlias((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_d0,uVar11,5,
                        (RtName *)local_b8);
    Sexy::RtName::~RtName((RtName *)local_b8);
    pRVar12 = (RtId *)Sexy::RtDb::GetDb();
    this_03 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar12);
    pGVar13 = Sexy::RtObject::Cast<GamePropertySheet>(this_03);
    lVar14 = FUN_04e89ce8(*(undefined8 *)(pGVar13 + 0x40),*(undefined8 *)(pGVar13 + 0x48));
    *(undefined4 *)(this + 0x100) = 0;
    if (lVar14 != 0) {
      do {
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        FUN_04e89cf4(*(undefined8 *)(pGVar13 + 0x40),lVar15);
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar10);
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)local_b8);
        if (cVar2 == '\0') {
          psVar10 = (string *)FUN_04e89cf4(*(undefined8 *)(pGVar13 + 0x40),lVar15);
          cVar2 = PlayerInfo::IsKilledZombie((PlayerInfo *)this_02,psVar10);
          if (cVar2 != '\0') {
            *(int *)(this + 0x100) = *(int *)(this + 0x100) + 1;
          }
        }
        lVar15 = lVar15 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_b8);
      } while (lVar15 != lVar14);
    }
    lVar15 = 0;
    iVar6 = 0;
    puVar9 = (undefined8 *)PlayerInfo::GetUnlockedArtifactList((PlayerInfo *)this_02);
    iVar8 = FUN_04e89cfc(*puVar9,puVar9[1]);
    *(int *)(this + 0x110) = iVar8;
    if (0 < iVar8) {
      do {
        puVar9 = (undefined8 *)PlayerInfo::GetUnlockedArtifactList((PlayerInfo *)this_02);
        lVar14 = FUN_04e89d08(*puVar9,lVar15);
        iVar8 = (int)lVar15;
        lVar15 = lVar15 + 1;
        if (*(int *)(lVar14 + 8) == 0x1e) {
          iVar6 = iVar6 + 1;
        }
      } while (iVar8 + 1 < *(int *)(this + 0x110));
    }
    *(int *)(this + 0x114) = iVar6;
    puVar9 = (undefined8 *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this_02);
    uVar7 = FUN_04e89d10(*puVar9,puVar9[1]);
    *(undefined4 *)(this + 0x10c) = uVar7;
    Sexy::RtId::~RtId((RtId *)&local_d0);
  }
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar2 = FUN_04e8994c(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    NetworkTenYearRecordData::NetworkTenYearRecordData((NetworkTenYearRecordData *)local_b8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x134) = local_9c;
      *(undefined4 *)(this + 0x13c) = local_94;
      *(undefined4 *)(this + 0x138) = local_98;
      *(undefined4 *)(this + 0x140) = local_90;
      this[0x130] = (TenYearRecordInfoPage)(local_a0 != 0);
    }
    NetworkTenYearRecordData::~NetworkTenYearRecordData((NetworkTenYearRecordData *)local_b8);
  }
  uVar7 = PlantFamilyMgr::GetActivatedPlantFamilyCount();
  *(undefined4 *)(this + 0x11c) = uVar7;
  TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_5]");
  TodReplaceNumberString(awStack_e8,L"{COUNT}",*(int *)(this + 0x110));
  TodStringTranslate(L"[TENYEAR_RECORD_INDEX2_6]");
  TodReplaceNumberString((wstring *)asStack_d8,L"{COUNT}",*(int *)(this + 0x114));
  std::operator+(awStack_e0,(wstring *)&local_d0);
  FUN_054766c8(this + 0xe8,(RtName *)local_b8);
  FUN_05476c50((RtName *)local_b8);
  FUN_05476c50((wstring *)&local_d0);
  FUN_05476c50((wstring *)asStack_d8);
  FUN_05476c50(awStack_e0);
  FUN_05476c50(awStack_e8);
  Sexy::StrFormat("[NEW_PVP_DUAN_RANK_%d]",(wstring *)asStack_d8,(ulong)*(uint *)(this + 0x138));
  Sexy::ToSexyString((Sexy *)asStack_d8,extraout_x1);
  TodStringTranslate((wstring *)&local_d0);
  FUN_054766c8(this + 0xf0,(RtName *)local_b8);
  FUN_05476c50((RtName *)local_b8);
  FUN_05476c50((wstring *)&local_d0);
  std::string::~string(asStack_d8);
  srand((uint)(*(ulong *)(this + 0x128) / 10));
  iVar6 = rand();
  *(int *)(this + 0x144) = iVar6 % 0x32;
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TenYearRecordInfoPage::TenYearRecordInfoPage(UIWidgetImage*) */

void __thiscall
TenYearRecordInfoPage::TenYearRecordInfoPage(TenYearRecordInfoPage *this,UIWidgetImage *param_1)

{
  string *this_00;
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069eb6a0;
  FUN_05476574(this + 0xd8);
  this_00 = (string *)&local_8;
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  *(undefined4 *)(this + 0xd4) = 0;
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  FUN_054772c4(this + 0xe0,&DAT_056f11a8);
  *(undefined4 *)(this + 0xf8) = 0;
  *(UIWidgetImage **)(this + 0x148) = param_1;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  this[0x130] = (TenYearRecordInfoPage)0x0;
  std::string::string(asStack_88,"egypt");
  std::string::string(asStack_80,"pirate");
  std::string::string(asStack_78,"cowboy");
  std::string::string(asStack_70,"kongfu");
  std::string::string(asStack_68,"future");
  std::string::string(asStack_60,"dark");
  std::string::string(asStack_58,"beach");
  std::string::string(asStack_50,"iceage");
  std::string::string(asStack_48,"skycity");
  std::string::string(asStack_40,"lostcity");
  std::string::string(asStack_38,"eighties");
  std::string::string(asStack_30,"dino");
  std::string::string(asStack_28,"modern");
  std::string::string(asStack_20,"steam");
  std::string::string(asStack_18,"renai");
  std::string::string(asStack_10,"heian");
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150),asStack_88,0x10);
  do {
    this_00 = this_00 + -8;
    std::string::~string(this_00);
  } while (this_00 != asStack_88);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

