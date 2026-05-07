// Class: Sexy::EditWidget


/* Sexy::EditWidget::getText() */

void Sexy::EditWidget::getText(void)

{
  long in_x0;
  wstring *in_x1;
  
  SexyStringToUTF8String((Sexy *)(in_x0 + 0xe8),in_x1);
  return;
}


/* non-virtual thunk to Sexy::EditWidget::getText() */

void __thiscall Sexy::EditWidget::getText(EditWidget *this)

{
  getText();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::setText(std::string const&) */

void __thiscall Sexy::EditWidget::setText(EditWidget *this,string *param_1)

{
  code *pcVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x340);
  UTF8StringToSexyString(param_1);
  (*pcVar1)(this,auStack_10,1);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::EditWidget::setText(std::string const&) */

void __thiscall Sexy::EditWidget::setText(EditWidget *this,string *param_1)

{
  setText(this + -0xd8,param_1);
  return;
}


/* Sexy::EditWidget::IsPartOfWord(wchar_t) */

bool __thiscall Sexy::EditWidget::IsPartOfWord(EditWidget *this,wchar_t param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((0x19 < (uint)((param_1 & 0xffffffdfU) - 0x41U)) && (9 < (uint)(param_1 + L'\xffffffd0'))) {
    bVar1 = (uint)(param_1 + L'\xffffff41') < 0x209 || param_1 == L'_';
  }
  return bVar1;
}


/* Sexy::EditWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::EditWidget::Draw(EditWidget *this,Graphics *param_1)

{
  BaseBufferResource *this_00;
  long lVar1;
  
  if (*(long *)(this + 0x108) == 0) {
    this_00 = (BaseBufferResource *)PrimeText::Instance();
    lVar1 = BaseBufferResource::GetPtr(this_00);
    *(long *)(this + 0x108) = lVar1;
    if (*(long *)(this + 0x110) == 0) {
      if (lVar1 == 0) {
        return;
      }
      goto LAB_05149334;
    }
  }
  else if (*(long *)(this + 0x110) == 0) {
LAB_05149334:
    (**(code **)(*(long *)this + 0x360))(this,param_1);
    return;
  }
  (**(code **)(*(long *)this + 0x358))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::GetDisplayString() */

void __thiscall Sexy::EditWidget::GetDisplayString(EditWidget *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  EditWidget *pEVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  pEVar4 = this + 0xe8;
  iVar1 = *(int *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 0) {
    pEVar4 = this + 0xf0;
    lVar2 = FUN_054765c4();
    lVar3 = FUN_054765c4(this + 0xe8);
    if (lVar2 != lVar3) {
      FUN_05476bf8(auStack_10,lVar3,iVar1,auStack_18);
      FUN_054766c8(pEVar4,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pEVar4);
}


/* Sexy::EditWidget::HiliteWord() */

void __thiscall Sexy::EditWidget::HiliteWord(EditWidget *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  
  uVar3 = GetDisplayString(this);
  iVar2 = FUN_054765d0();
  iVar5 = *(int *)(this + 0x134);
  if (iVar5 < iVar2) {
    *(int *)(this + 0x138) = iVar5;
    if (0 < iVar5) {
      do {
        pcVar6 = *(code **)(*(long *)this + 0x348);
        puVar4 = (undefined4 *)FUN_05476f5c(uVar3,(long)(iVar5 + -1));
        cVar1 = (*pcVar6)(this,*puVar4);
        if (cVar1 == '\0') break;
        iVar5 = *(int *)(this + 0x138) + -1;
        *(int *)(this + 0x138) = iVar5;
      } while (0 < iVar5);
      iVar5 = *(int *)(this + 0x134);
    }
    while (iVar2 = FUN_054765d0(uVar3), iVar5 < iVar2 + -1) {
      pcVar6 = *(code **)(*(long *)this + 0x348);
      puVar4 = (undefined4 *)FUN_05476f5c(uVar3,(long)(iVar5 + 1));
      cVar1 = (*pcVar6)(this,*puVar4);
      if (cVar1 == '\0') {
        iVar5 = *(int *)(this + 0x134);
        iVar2 = FUN_054765d0(uVar3);
        break;
      }
      iVar5 = *(int *)(this + 0x134) + 1;
      *(int *)(this + 0x134) = iVar5;
    }
    if (iVar5 < iVar2) {
      *(int *)(this + 0x134) = iVar5 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::GetCharAt(int, int) */

void Sexy::EditWidget::GetCharAt(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EditWidget *this;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this = (EditWidget *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  uVar4 = GetDisplayString(this);
  iVar1 = *(int *)(this + 0x144);
  while( true ) {
    iVar2 = FUN_054765d0(uVar4);
    if (iVar2 <= iVar1) break;
    FUN_05477da4(auStack_20,uVar4,(long)*(int *)(this + 0x144),
                 (long)(iVar1 - *(int *)(this + 0x144)));
    FUN_05477da4(auStack_18,uVar4,(long)*(int *)(this + 0x144),
                 (long)((iVar1 - *(int *)(this + 0x144)) + 1));
    plVar5 = *(long **)(this + 0x110);
    if (plVar5 == (long *)0x0) {
      lVar6 = *(long *)(this + 0x108);
      if (lVar6 == 0) {
        iVar2 = 4;
      }
      else {
        FUN_05477b24(auStack_10,auStack_20);
        iVar2 = PrimeTypeface::StringWidth(lVar6,auStack_10);
        FUN_05476c50(auStack_10);
        uVar7 = *(undefined8 *)(this + 0x108);
        FUN_05477b24(auStack_10,auStack_18);
        iVar3 = PrimeTypeface::StringWidth(uVar7,auStack_10);
        FUN_05476c50(auStack_10);
        iVar2 = (iVar2 + iVar3) / 2 + 4;
      }
    }
    else {
      iVar2 = (**(code **)(*plVar5 + 0x80))(plVar5,auStack_20);
      iVar3 = (**(code **)(**(long **)(this + 0x110) + 0x80))(*(long **)(this + 0x110),auStack_18);
      iVar2 = (iVar2 + iVar3) / 2 + 4;
    }
    if (iVar2 < param_2) {
      iVar8 = iVar1 + 1;
    }
    FUN_05476c50(auStack_18);
    FUN_05476c50(auStack_20);
    iVar1 = iVar1 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}


/* Sexy::EditWidget::SetEditWidgetActive() */

void __thiscall Sexy::EditWidget::SetEditWidgetActive(EditWidget *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_054765d0(this + 0xe8);
  *(undefined4 *)(this + 0x134) = uVar1;
  (**(code **)(**(long **)(this + 0x18) + 0x98))(*(long **)(this + 0x18));
  return;
}


/* Sexy::EditWidget::ShowKeyboard() */

void __thiscall Sexy::EditWidget::ShowKeyboard(EditWidget *this)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(this + 0x18) != 0) &&
     (plVar2 = *(long **)(*(long *)(this + 0x18) + 0x80), plVar2 != (long *)0x0)) {
    lVar1 = *plVar2;
    if (*(int *)(this + 0x178) == 1) {
      (**(code **)(lVar1 + 0x330))(plVar2);
      return;
    }
    if (*(int *)(this + 0x178) != 2) {
      (**(code **)(lVar1 + 0x328))(plVar2);
      return;
    }
    (**(code **)(lVar1 + 0x338))();
  }
  return;
}


/* Sexy::EditWidget::HideKeyboard() */

void __thiscall Sexy::EditWidget::HideKeyboard(EditWidget *this)

{
  long *plVar1;
  
  if ((*(long *)(this + 0x18) != 0) &&
     (plVar1 = *(long **)(*(long *)(this + 0x18) + 0x80), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x340))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::AttachIME() */

void __thiscall Sexy::EditWidget::AttachIME(EditWidget *this)

{
  undefined4 uVar1;
  IMEDispatcher *this_00;
  code *pcVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x16d] = (EditWidget)0x1;
  thunk_FUN_05477b9c(this + 0x170,this + 0xe8);
  if (this[0x16c] != (EditWidget)0x0) {
    pcVar2 = *(code **)(*(long *)this + 0x340);
    FUN_05478178(auStack_10,&DAT_056f11a8,auStack_18);
    (*pcVar2)(this,auStack_10,1);
    FUN_05476c50(auStack_10);
    nop();
  }
  uVar1 = FUN_054765d0(this + 0xe8);
  *(undefined4 *)(this + 0x134) = uVar1;
  *(undefined4 *)(this + 0x138) = uVar1;
  this_00 = (IMEDispatcher *)IMEDispatcher::GetInstancePtr();
  IMEDispatcher::AttachIME(this_00,(IMEDelegate *)(this + 0xd8));
  ShowKeyboard(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EditWidget::DetachIME() */

void __thiscall Sexy::EditWidget::DetachIME(EditWidget *this)

{
  exception_ptr *this_00;
  
  this_00 = (exception_ptr *)IMEDispatcher::GetInstancePtr();
  std::__exception_ptr::exception_ptr::exception_ptr(this_00,(_func_void *)(this + 0xd8));
  HideKeyboard(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::DrawWithFont(Sexy::Graphics*) */

void __thiscall Sexy::EditWidget::DrawWithFont(EditWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  Color *pCVar13;
  undefined8 *puVar14;
  int *piVar15;
  EditWidget EVar16;
  long *plVar17;
  code *pcVar18;
  int local_28;
  int local_24;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = GetDisplayString(this);
  bVar5 = false;
  bVar4 = false;
  pCVar13 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),0);
  Graphics::SetColor(param_1,pCVar13);
  Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  do {
    Graphics::PushState(param_1);
    Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x110));
    if (bVar4) {
      plVar17 = *(long **)(this + 0x110);
      pcVar18 = *(code **)(*plVar17 + 0x80);
      FUN_05477da4((wstring *)local_20,uVar12,0,(long)*(int *)(this + 0x134));
      iVar8 = (*pcVar18)(plVar17,(wstring *)local_20);
      plVar17 = *(long **)(this + 0x110);
      pcVar18 = *(code **)(*plVar17 + 0x80);
      FUN_05477da4((Color *)&local_18,uVar12,0,(long)*(int *)(this + 0x144));
      iVar9 = (*pcVar18)(plVar17,(Color *)&local_18);
      iVar8 = (iVar8 - iVar9) + *(int *)(this + 0xfc);
      local_28 = iVar8;
      FUN_05476c50((Color *)&local_18);
      FUN_05476c50((wstring *)local_20);
      iVar9 = *(int *)(this + 0x138);
      local_24 = iVar8;
      if (iVar9 == -1) {
        EVar16 = this[0x16d];
        if ((this[0x130] == (EditWidget)0x0) || (EVar16 == (EditWidget)0x0)) goto LAB_05149dc8;
      }
      else {
        if (iVar9 != *(int *)(this + 0x134)) {
          plVar17 = *(long **)(this + 0x110);
          pcVar18 = *(code **)(*plVar17 + 0x80);
          FUN_05477da4((wstring *)local_20,uVar12,0,(long)iVar9);
          iVar9 = (*pcVar18)(plVar17,(wstring *)local_20);
          plVar17 = *(long **)(this + 0x110);
          pcVar18 = *(code **)(*plVar17 + 0x80);
          FUN_05477da4((Color *)&local_18,uVar12,0,(long)*(int *)(this + 0x144));
          iVar6 = (*pcVar18)(plVar17,(Color *)&local_18);
          local_24 = (iVar9 - iVar6) + *(int *)(this + 0xfc);
          FUN_05476c50((Color *)&local_18);
          FUN_05476c50((wstring *)local_20);
          iVar9 = *(int *)(this + 0x138);
        }
        EVar16 = this[0x16d];
        if (((this[0x130] == (EditWidget)0x0) || (EVar16 == (EditWidget)0x0)) && (iVar9 == -1)) {
LAB_05149dc8:
          local_28 = iVar8 + 2;
        }
      }
      local_20[0] = 0;
      piVar15 = eastl::max_alt<int>((int *)local_20,&local_28);
      iVar8 = *(int *)(this + 0x50);
      local_18._0_4_ = iVar8 + -8;
      piVar15 = eastl::min_alt<int>(piVar15,(int *)&local_18);
      local_28 = *piVar15;
      local_20[0] = 0;
      piVar15 = eastl::max_alt<int>((int *)local_20,&local_24);
      local_18 = CONCAT44(local_18._4_4_,iVar8 + -8);
      piVar15 = eastl::min_alt<int>(piVar15,(int *)&local_18);
      iVar8 = *piVar15;
      if ((iVar9 == -1) || (iVar9 == *(int *)(this + 0x134))) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(this + 0x104);
      }
      if (EVar16 == (EditWidget)0x0) {
        local_28 = iVar8;
      }
      local_24 = iVar8;
      piVar15 = eastl::min_alt<int>(&local_28,&local_24);
      iVar6 = *piVar15;
      iVar7 = *(int *)(this + 0xf8);
      iVar1 = *(int *)(this + 0x100);
      iVar2 = *(int *)(this + 0x54);
      iVar10 = (**(code **)(**(long **)(this + 0x110) + 0x68))(*(long **)(this + 0x110));
      uVar3 = iVar8 - local_28;
      iVar8 = (**(code **)(**(long **)(this + 0x110) + 0x68))(*(long **)(this + 0x110));
      iVar11 = (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110));
      Graphics::ClipRect(param_1,iVar7 + iVar6 + iVar1,(iVar2 - iVar10) / 2,
                         iVar9 + ((uVar3 ^ (int)uVar3 >> 0x3f) - ((int)uVar3 >> 0x1f)),
                         iVar8 - iVar11);
      if (this[0x6f] == (EditWidget)0x0) goto LAB_051499ac;
LAB_05149d8c:
      pCVar13 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),3);
      Graphics::SetColor(param_1,pCVar13);
      Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_05149ad8:
      Color::Color((Color *)&local_18);
      if (!bVar4) goto LAB_051499bc;
      puVar14 = (undefined8 *)FUN_05149354(*(undefined8 *)(this + 0x78),4);
      local_18 = *puVar14;
      uStack_10 = puVar14[1];
    }
    else {
      Graphics::ClipRect(param_1,*(int *)(this + 0xf8),0,
                         *(int *)(this + 0x50) + *(int *)(this + 0xf8) * -2,*(int *)(this + 0x54));
      if (this[0x6f] != (EditWidget)0x0) {
LAB_05149ad4:
        if (bVar5) goto LAB_05149d8c;
        goto LAB_05149ad8;
      }
LAB_051499ac:
      if (this[0x131] != (EditWidget)0x0) goto LAB_05149ad4;
      Color::Color((Color *)&local_18);
LAB_051499bc:
      puVar14 = (undefined8 *)FUN_05149354(*(undefined8 *)(this + 0x78),2);
      local_18 = *puVar14;
      uStack_10 = puVar14[1];
    }
    bVar5 = (bool)(bVar5 ^ 1);
    Graphics::SetColor(param_1,(Color *)&local_18);
    Graphics::SetColor(param_1,(Color *)&local_18);
    FUN_05477da4((wstring *)local_20,uVar12,(long)*(int *)(this + 0x144),0xffffffffffffffff);
    iVar8 = *(int *)(this + 0x54);
    iVar9 = *(int *)(this + 0xfc);
    iVar6 = (**(code **)(**(long **)(this + 0x110) + 0x68))(*(long **)(this + 0x110));
    iVar7 = (**(code **)(**(long **)(this + 0x110) + 0x50))(*(long **)(this + 0x110));
    Graphics::DrawString(param_1,(wstring *)local_20,iVar9,iVar7 + (iVar8 - iVar6) / 2);
    FUN_05476c50((wstring *)local_20);
    Graphics::PopState(param_1);
    if (bVar4) {
      pCVar13 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),1);
      Graphics::SetColor(param_1,pCVar13);
      Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x50) + -1,*(int *)(this + 0x54) + -1);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    bVar4 = true;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::DrawWithPrimeFont(Sexy::Graphics*) */

void __thiscall Sexy::EditWidget::DrawWithPrimeFont(EditWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  Color *pCVar12;
  ulong *puVar13;
  int *piVar14;
  EditWidget EVar15;
  PrimeTypeface *this_00;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_34;
  int local_30 [2];
  ulong local_28;
  ulong uStack_20;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = GetDisplayString(this);
  bVar7 = false;
  bVar5 = false;
  pCVar12 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),0);
  Graphics::SetColor(param_1,pCVar12);
  Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  do {
    Graphics::PushState(param_1);
    if (bVar5) {
      uVar16 = *(undefined8 *)(this + 0x108);
      FUN_05477da4((Color *)&local_28,uVar11,0,(long)*(int *)(this + 0x134));
      iVar8 = PrimeTypeface::StringWidth(uVar16,(Color *)&local_28);
      uVar16 = *(undefined8 *)(this + 0x108);
      FUN_05477da4((Insets *)local_18,uVar11,0,(long)*(int *)(this + 0x144));
      iVar9 = PrimeTypeface::StringWidth(uVar16,(Insets *)local_18);
      iVar8 = (iVar8 - iVar9) + *(int *)(this + 0xfc);
      local_34 = iVar8;
      FUN_05476c50((Insets *)local_18);
      FUN_05476c50((Color *)&local_28);
      iVar9 = *(int *)(this + 0x138);
      local_30[0] = iVar8;
      if (iVar9 == -1) {
        EVar15 = this[0x16d];
        if ((this[0x130] == (EditWidget)0x0) || (EVar15 == (EditWidget)0x0)) goto LAB_0514a290;
      }
      else {
        if (iVar9 != *(int *)(this + 0x134)) {
          uVar16 = *(undefined8 *)(this + 0x108);
          FUN_05477da4((Color *)&local_28,uVar11,0,(long)iVar9);
          iVar9 = PrimeTypeface::StringWidth(uVar16,(Color *)&local_28);
          uVar16 = *(undefined8 *)(this + 0x108);
          FUN_05477da4((Insets *)local_18,uVar11,0,(long)*(int *)(this + 0x144));
          iVar10 = PrimeTypeface::StringWidth(uVar16,(Insets *)local_18);
          local_30[0] = (iVar9 - iVar10) + *(int *)(this + 0xfc);
          FUN_05476c50((Insets *)local_18);
          FUN_05476c50((Color *)&local_28);
          iVar9 = *(int *)(this + 0x138);
        }
        EVar15 = this[0x16d];
        if (((this[0x130] == (EditWidget)0x0) || (EVar15 == (EditWidget)0x0)) && (iVar9 == -1)) {
LAB_0514a290:
          local_34 = iVar8 + 2;
        }
      }
      local_28 = local_28 & 0xffffffff00000000;
      piVar14 = eastl::max_alt<int>((int *)&local_28,&local_34);
      iVar8 = *(int *)(this + 0x50);
      local_18[0] = iVar8 + -8;
      piVar14 = eastl::min_alt<int>(piVar14,local_18);
      local_34 = *piVar14;
      local_28 = local_28 & 0xffffffff00000000;
      piVar14 = eastl::max_alt<int>((int *)&local_28,local_30);
      local_18[0] = iVar8 + -8;
      piVar14 = eastl::min_alt<int>(piVar14,local_18);
      iVar8 = *piVar14;
      if ((iVar9 == -1) || (iVar9 == *(int *)(this + 0x134))) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(this + 0x104);
      }
      if (EVar15 == (EditWidget)0x0) {
        local_34 = iVar8;
      }
      local_30[0] = iVar8;
      piVar14 = eastl::min_alt<int>(&local_34,local_30);
      iVar10 = *piVar14;
      iVar1 = *(int *)(this + 0x54);
      iVar2 = *(int *)(this + 0xf8);
      iVar3 = *(int *)(this + 0x100);
      fVar17 = (float)PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x108));
      uVar4 = iVar8 - local_34;
      uVar6 = (int)uVar4 >> 0x1f;
      fVar18 = (float)PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x108));
      fVar19 = (float)PrimeTypeface::GetDescent(*(PrimeTypeface **)(this + 0x108));
      Graphics::ClipRect(param_1,iVar2 + iVar10 + iVar3,(int)(((float)iVar1 - fVar17) * 0.5),
                         iVar9 + ((uVar4 ^ uVar6) - uVar6),(int)(fVar18 - fVar19));
      if (this[0x6f] == (EditWidget)0x0) goto LAB_05149ebc;
LAB_0514a254:
      pCVar12 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),3);
      Graphics::SetColor(param_1,pCVar12);
      Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
LAB_05149fe4:
      Color::Color((Color *)&local_28);
      if (!bVar5) goto LAB_05149ecc;
      puVar13 = (ulong *)FUN_05149354(*(undefined8 *)(this + 0x78),4);
      local_28 = *puVar13;
      uStack_20 = puVar13[1];
    }
    else {
      Graphics::ClipRect(param_1,*(int *)(this + 0xf8),0,
                         *(int *)(this + 0x50) + *(int *)(this + 0xf8) * -2,*(int *)(this + 0x54));
      if (this[0x6f] != (EditWidget)0x0) {
LAB_05149fe0:
        if (bVar7) goto LAB_0514a254;
        goto LAB_05149fe4;
      }
LAB_05149ebc:
      if (this[0x131] != (EditWidget)0x0) goto LAB_05149fe0;
      Color::Color((Color *)&local_28);
LAB_05149ecc:
      puVar13 = (ulong *)FUN_05149354(*(undefined8 *)(this + 0x78),2);
      local_28 = *puVar13;
      uStack_20 = puVar13[1];
    }
    bVar7 = (bool)(bVar7 ^ 1);
    Graphics::SetColor(param_1,(Color *)&local_28);
    this_00 = *(PrimeTypeface **)(this + 0x108);
    iVar8 = *(int *)(this + 0xfc);
    iVar9 = *(int *)(this + 0x54);
    fVar17 = (float)PrimeTypeface::GetAscent(this_00);
    FUN_05477da4(local_30,uVar11,(long)*(int *)(this + 0x144),0xffffffffffffffff);
    Insets::Insets((Insets *)local_18,(Insets *)&local_28);
    PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)iVar8,((float)iVar9 - fVar17) * 0.5,this_00,param_1,local_30,
               (Insets *)local_18,0);
    FUN_05476c50(local_30);
    Graphics::PopState(param_1);
    if (bVar5) {
      pCVar12 = (Color *)FUN_05149354(*(undefined8 *)(this + 0x78),1);
      Graphics::SetColor(param_1,pCVar12);
      Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x50) + -1,*(int *)(this + 0x54) + -1);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    bVar5 = true;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::FocusCursor(bool) */

void __thiscall Sexy::EditWidget::FocusCursor(EditWidget *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  iVar5 = *(int *)(this + 0x144);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x134) < iVar5) {
    if (param_1) {
      do {
        local_10[0] = iVar5 + -10;
        local_18[0] = 0;
        piVar3 = eastl::max_alt<int>(local_18,local_10);
        *(int *)(this + 0x144) = *piVar3;
        (**(code **)(*(long *)this + 0xd8))(this);
        iVar5 = *(int *)(this + 0x144);
      } while (*(int *)(this + 0x134) < iVar5);
    }
    else {
      do {
        local_10[0] = iVar5 + -1;
        local_18[0] = 0;
        piVar3 = eastl::max_alt<int>(local_18,local_10);
        *(int *)(this + 0x144) = *piVar3;
        (**(code **)(*(long *)this + 0xd8))(this);
        iVar5 = *(int *)(this + 0x144);
      } while (*(int *)(this + 0x134) < iVar5);
    }
  }
  if (*(long *)(this + 0x110) == 0) {
    if (*(long *)(this + 0x108) != 0) {
      uVar4 = GetDisplayString(this);
      while (8 < *(int *)(this + 0x50)) {
        uVar7 = *(undefined8 *)(this + 0x108);
        FUN_05477da4(local_18,uVar4,0,(long)*(int *)(this + 0x134));
        iVar1 = PrimeTypeface::StringWidth(uVar7,local_18);
        uVar7 = *(undefined8 *)(this + 0x108);
        FUN_05477da4(local_10,uVar4,0,(long)*(int *)(this + 0x144));
        iVar2 = PrimeTypeface::StringWidth(uVar7,local_10);
        iVar5 = *(int *)(this + 0x50);
        FUN_05476c50(local_10);
        FUN_05476c50(local_18);
        if (iVar1 - iVar2 < iVar5 + -8) break;
        if (param_1) {
          local_18[0] = *(int *)(this + 0x144) + 10;
        }
        else {
          local_18[0] = *(int *)(this + 0x144) + 1;
        }
        local_10[0] = FUN_054765d0(this + 0xe8);
        local_10[0] = local_10[0] + -1;
        piVar3 = eastl::min_alt<int>(local_18,local_10);
        *(int *)(this + 0x144) = *piVar3;
        (**(code **)(*(long *)this + 0xd8))(this);
      }
    }
  }
  else {
    uVar4 = GetDisplayString(this);
    while (8 < *(int *)(this + 0x50)) {
      plVar6 = *(long **)(this + 0x110);
      pcVar8 = *(code **)(*plVar6 + 0x80);
      FUN_05477da4(local_18,uVar4,0,(long)*(int *)(this + 0x134));
      iVar1 = (*pcVar8)(plVar6,local_18);
      plVar6 = *(long **)(this + 0x110);
      pcVar8 = *(code **)(*plVar6 + 0x80);
      FUN_05477da4(local_10,uVar4,0,(long)*(int *)(this + 0x144));
      iVar2 = (*pcVar8)(plVar6,local_10);
      iVar5 = *(int *)(this + 0x50);
      FUN_05476c50(local_10);
      FUN_05476c50(local_18);
      if (iVar1 - iVar2 < iVar5 + -8) break;
      if (param_1) {
        local_18[0] = *(int *)(this + 0x144) + 10;
      }
      else {
        local_18[0] = *(int *)(this + 0x144) + 1;
      }
      local_10[0] = FUN_054765d0(this + 0xe8);
      local_10[0] = local_10[0] + -1;
      piVar3 = eastl::min_alt<int>(local_18,local_10);
      *(int *)(this + 0x144) = *piVar3;
      (**(code **)(*(long *)this + 0xd8))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::EnforceMaxPixels() */

void __thiscall Sexy::EditWidget::EnforceMaxPixels(EditWidget *this)

{
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  EditWidget *pEVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x14c) < 1) {
    cVar2 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
    if (cVar2 != '\0') goto LAB_0514a6f0;
  }
  else {
    cVar2 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty(this_00);
    if (cVar2 != '\0') {
      plVar6 = *(long **)(this + 0x110);
      if (plVar6 == (long *)0x0) {
        lVar7 = *(long *)(this + 0x108);
        if (lVar7 != 0) {
          pEVar1 = this + 0xe8;
          while( true ) {
            FUN_05477b24(&local_10,pEVar1);
            iVar5 = PrimeTypeface::StringWidth(lVar7,&local_10);
            iVar4 = *(int *)(this + 0x14c);
            FUN_05476c50(&local_10);
            if (iVar5 <= iVar4) break;
            lVar7 = FUN_054765d0(pEVar1);
            FUN_05477da4(&local_10,pEVar1,0,lVar7 + -1);
            FUN_054766c8(pEVar1,&local_10);
            FUN_05476c50(&local_10);
            lVar7 = *(long *)(this + 0x108);
          }
        }
      }
      else {
        pEVar1 = this + 0xe8;
        while (iVar4 = (**(code **)(*plVar6 + 0x80))(plVar6,pEVar1), *(int *)(this + 0x14c) < iVar4)
        {
          lVar7 = FUN_054765d0(pEVar1);
          FUN_05477da4(&local_10,pEVar1,0,lVar7 + -1);
          FUN_054766c8(pEVar1,&local_10);
          FUN_05476c50(&local_10);
          plVar6 = *(long **)(this + 0x110);
        }
      }
      goto LAB_0514a6f0;
    }
  }
  pEVar1 = this + 0xe8;
  local_18 = FUN_0514a5e8(*(undefined8 *)(this + 0x118));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_00);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar3) break;
    plVar6 = (long *)std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                               ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
    iVar4 = (int)plVar6[2];
    if (iVar4 < 1) {
      iVar4 = *(int *)(this + 0x14c);
      if (0 < iVar4) {
        plVar8 = (long *)plVar6[1];
        goto joined_r0x0514a870;
      }
LAB_0514a7d8:
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    else {
      plVar8 = (long *)plVar6[1];
joined_r0x0514a870:
      if (plVar8 != (long *)0x0) {
        while (iVar5 = (**(code **)(*plVar8 + 0x80))(plVar8,pEVar1), iVar4 < iVar5) {
          lVar7 = FUN_054765d0(pEVar1);
          FUN_05477da4((rbtree_iterator *)&local_10,pEVar1,0,lVar7 + -1);
          FUN_054766c8(pEVar1,(rbtree_iterator *)&local_10);
          FUN_05476c50((rbtree_iterator *)&local_10);
          lVar7 = std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                            ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
          plVar8 = *(long **)(lVar7 + 8);
        }
        goto LAB_0514a7d8;
      }
      lVar7 = *plVar6;
      if (lVar7 == 0) goto LAB_0514a7d8;
      while( true ) {
        FUN_05477b24((rbtree_iterator *)&local_10,pEVar1);
        iVar5 = PrimeTypeface::StringWidth(lVar7,(rbtree_iterator *)&local_10);
        FUN_05476c50((rbtree_iterator *)&local_10);
        if (iVar5 <= iVar4) break;
        lVar7 = FUN_054765d0(pEVar1);
        FUN_05477da4((rbtree_iterator *)&local_10,pEVar1,0,lVar7 + -1);
        FUN_054766c8(pEVar1,(rbtree_iterator *)&local_10);
        FUN_05476c50((rbtree_iterator *)&local_10);
        plVar6 = (long *)std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                                   ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
        lVar7 = *plVar6;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
LAB_0514a6f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EditWidget::SetText(std::wstring const&, bool) */

void __thiscall Sexy::EditWidget::SetText(EditWidget *this,wstring *param_1,bool param_2)

{
  undefined4 uVar1;
  
  thunk_FUN_05477b9c(this + 0xe8);
  EnforceMaxPixels(this);
  uVar1 = FUN_054765d0(this + 0xe8);
  *(undefined4 *)(this + 0x134) = uVar1;
  *(undefined4 *)(this + 0x138) = uVar1;
  if (param_2) {
    *(undefined4 *)(this + 0x144) = 0;
    (**(code **)(*(long *)this + 0xd8))(this);
    return;
  }
  (**(code **)(*(long *)this + 0x368))(this,1);
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::ProcessKey(Sexy::KeyCode, wchar_t) */

void __thiscall Sexy::EditWidget::ProcessKey(EditWidget *this,int param_2,int param_3)

{
  EditWidget *pEVar1;
  EditWidget *pEVar2;
  EditWidget *pEVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  wchar_t wVar8;
  byte bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 *puVar17;
  IMEDispatcher *this_00;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  code *pcVar21;
  string *psVar22;
  byte bVar23;
  ulong uVar24;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar9 = *(byte *)(*(long *)(this + 0x18) + 0x160);
  cVar11 = *(char *)(*(long *)(this + 0x18) + 0x161);
  if ((param_2 - 0x10U < 2) || (param_2 == 0xf0)) goto LAB_0514aadc;
  bVar23 = bVar9 ^ 1;
  if ((bVar9 != 0) && (*(int *)(this + 0x138) == -1)) {
    *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x134);
  }
  pEVar1 = this + 0xe8;
  FUN_05477b24(auStack_40,pEVar1);
  uVar4 = *(undefined4 *)(this + 0x144);
  iVar5 = *(int *)(this + 0x134);
  iVar6 = *(int *)(this + 0x138);
  if (param_3 == 0x18) {
LAB_0514ab10:
    if ((iVar6 == -1) || (iVar5 == iVar6)) goto LAB_0514ae30;
    psVar22 = *(string **)(*(long *)(this + 0x18) + 0x80);
    if (iVar5 < iVar6) {
      uVar15 = GetDisplayString(this);
      iVar14 = *(int *)(this + 0x138);
      iVar12 = *(int *)(this + 0x134);
    }
    else {
      uVar15 = GetDisplayString(this);
      iVar14 = *(int *)(this + 0x134);
      iVar12 = *(int *)(this + 0x138);
    }
    FUN_05477da4(awStack_18,uVar15,(long)iVar12,(long)iVar14);
    Sexy::ToString(awStack_18);
    SexyAppBase::CopyToClipboard(psVar22);
    std::string::~string(asStack_10);
    FUN_05476c50(awStack_18);
    if (param_3 != 3) {
      piVar19 = eastl::min_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
      FUN_05477da4(awStack_20,pEVar1,0,(long)*piVar19);
      piVar19 = eastl::max_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
      FUN_05477da4(awStack_18,pEVar1,(long)*piVar19,0xffffffffffffffff);
      std::operator+(awStack_20,awStack_18);
      FUN_054766c8(pEVar1,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
      goto LAB_0514ac40;
    }
    bVar23 = 0;
    bVar10 = false;
  }
  else {
    if (param_3 == 3) goto LAB_0514ab10;
    if (param_3 == 0x16) {
      SexyAppBase::GetClipboard();
      ToWString(asStack_10);
      std::string::~string(asStack_10);
      lVar18 = FUN_054765d0(auStack_38);
      bVar10 = false;
      if (lVar18 != 0) {
        FUN_05476574();
        uVar24 = 0;
        while (uVar20 = FUN_054765d0(auStack_38), uVar24 < uVar20) {
          piVar19 = (int *)FUN_05476f5c(auStack_38,uVar24);
          if ((*piVar19 == 0xd) ||
             (piVar19 = (int *)FUN_05476f5c(auStack_38,uVar24), *piVar19 == 10)) break;
          plVar16 = *(long **)(this + 0x110);
          pcVar21 = *(code **)(*plVar16 + 0x88);
          puVar17 = (undefined4 *)FUN_05476f5c(auStack_38,uVar24);
          iVar14 = (*pcVar21)(plVar16,*puVar17);
          if (iVar14 == 0) {
LAB_0514b43c:
            uVar24 = uVar24 + 1;
          }
          else {
            plVar16 = *(long **)(this + 0x128);
            wVar8 = *(wchar_t *)(this + 0xe0);
            pcVar21 = *(code **)(*plVar16 + 0x10);
            puVar17 = (undefined4 *)FUN_05476f5c(auStack_38,uVar24);
            if (pcVar21 == EditListener::AllowChar) {
              cVar11 = EditListener::AllowChar((int)plVar16,wVar8);
            }
            else {
              cVar11 = (*pcVar21)(plVar16,wVar8,*puVar17);
            }
            if (cVar11 == '\0') goto LAB_0514b43c;
            puVar17 = (undefined4 *)FUN_05476f5c(auStack_38,uVar24);
            FUN_05477a88(awStack_30,*puVar17);
            uVar24 = uVar24 + 1;
          }
        }
        if (*(int *)(this + 0x138) == -1) {
          FUN_05477da4(awStack_28,pEVar1,0,(long)*(int *)(this + 0x134));
          std::operator+(awStack_28,awStack_30);
          FUN_05477da4(awStack_18,pEVar1,(long)*(int *)(this + 0x134),0xffffffffffffffff);
          std::operator+(awStack_20,awStack_18);
          FUN_054766c8(pEVar1,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50(awStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
          iVar14 = *(int *)(this + 0x134);
        }
        else {
          pEVar2 = this + 0x138;
          pEVar3 = this + 0x134;
          piVar19 = eastl::min_alt<int>((int *)pEVar3,(int *)pEVar2);
          FUN_05477da4(awStack_28,pEVar1,0,(long)*piVar19);
          std::operator+(awStack_28,awStack_30);
          piVar19 = eastl::max_alt<int>((int *)pEVar3,(int *)pEVar2);
          FUN_05477da4(awStack_18,pEVar1,(long)*piVar19,0xffffffffffffffff);
          std::operator+(awStack_20,awStack_18);
          FUN_054766c8(pEVar1,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50(awStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
          piVar19 = eastl::min_alt<int>((int *)pEVar3,(int *)pEVar2);
          iVar14 = *piVar19;
          *(int *)(this + 0x134) = iVar14;
          *(undefined4 *)(this + 0x138) = 0xffffffff;
        }
        bVar10 = true;
        iVar12 = FUN_054765d0(awStack_30);
        *(int *)(this + 0x134) = iVar14 + iVar12;
        FUN_05476c50(awStack_30);
      }
      FUN_05476c50(auStack_38);
    }
    else {
      bVar10 = false;
      if (param_3 == 0x1a) {
        *(undefined4 *)(this + 0x168) = 0xffffffff;
        FUN_05477b24(asStack_10,pEVar1);
        uVar13 = *(undefined4 *)(this + 0x134);
        uVar7 = *(undefined4 *)(this + 0x138);
        thunk_FUN_05477b9c(pEVar1,this + 0x158);
        *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x160);
        *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x164);
        thunk_FUN_05477b9c(this + 0x158,asStack_10);
        *(undefined4 *)(this + 0x164) = uVar7;
        *(undefined4 *)(this + 0x160) = uVar13;
        FUN_05476c50(asStack_10);
        bVar23 = 0;
        goto LAB_0514ac54;
      }
      if (param_2 == 0x25) {
        if (cVar11 == '\0') {
          if ((iVar6 == -1) || (bVar9 != 0)) {
            bVar10 = false;
            *(int *)(this + 0x134) = iVar5 + -1;
          }
          else {
            bVar10 = false;
            piVar19 = eastl::min_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
            *(int *)(this + 0x134) = *piVar19;
          }
        }
        else {
          iVar14 = iVar5;
          if (iVar5 < 1) goto LAB_0514ae30;
          do {
            pcVar21 = *(code **)(*(long *)this + 0x348);
            puVar17 = (undefined4 *)FUN_05476f5c(pEVar1,(long)(iVar14 + -1));
            cVar11 = (*pcVar21)(this,*puVar17);
            if (cVar11 != '\0') {
              iVar14 = *(int *)(this + 0x134);
              if (0 < iVar14) goto LAB_0514adf0;
              goto LAB_0514ae30;
            }
            iVar14 = *(int *)(this + 0x134) + -1;
            *(int *)(this + 0x134) = iVar14;
          } while (0 < iVar14);
          bVar10 = false;
        }
        goto LAB_0514ac54;
      }
      if (param_2 == 0x27) {
        iVar14 = iVar5;
        if (cVar11 != '\0') {
          while( true ) {
            iVar12 = FUN_054765d0(pEVar1);
            iVar12 = iVar12 + -1;
            if (iVar12 <= iVar14) break;
            pcVar21 = *(code **)(*(long *)this + 0x348);
            puVar17 = (undefined4 *)FUN_05476f5c(pEVar1,(long)(iVar14 + 1));
            cVar11 = (*pcVar21)(this,*puVar17);
            if (cVar11 == '\0') {
              iVar14 = *(int *)(this + 0x134);
              iVar12 = FUN_054765d0(pEVar1);
              iVar12 = iVar12 + -1;
              break;
            }
            iVar14 = *(int *)(this + 0x134) + 1;
            *(int *)(this + 0x134) = iVar14;
          }
          do {
            if (iVar12 <= iVar14) break;
            pcVar21 = *(code **)(*(long *)this + 0x348);
            puVar17 = (undefined4 *)FUN_05476f5c(pEVar1,(long)(iVar14 + 1));
            cVar11 = (*pcVar21)(this,*puVar17);
            if (cVar11 != '\0') break;
            iVar14 = *(int *)(this + 0x134) + 1;
            *(int *)(this + 0x134) = iVar14;
            iVar12 = FUN_054765d0(pEVar1);
            iVar12 = iVar12 + -1;
          } while( true );
        }
        if ((bVar9 == 0) && (*(int *)(this + 0x138) != -1)) {
          bVar10 = false;
          piVar19 = eastl::max_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
          *(int *)(this + 0x134) = *piVar19;
        }
        else {
          bVar10 = false;
          *(int *)(this + 0x134) = *(int *)(this + 0x134) + 1;
        }
        goto LAB_0514ac54;
      }
      if (param_2 == 8) {
        lVar18 = FUN_054765d0(pEVar1);
        bVar10 = false;
        if (lVar18 != 0) {
          if ((iVar6 == -1) || (iVar5 == iVar6)) {
            if (iVar5 < 1) {
              FUN_05477da4(asStack_10,pEVar1,(long)iVar5,0xffffffffffffffff);
              FUN_054766c8(pEVar1,asStack_10);
              FUN_05476c50(asStack_10);
            }
            else {
              FUN_05477da4(awStack_20,pEVar1,0,(long)(iVar5 + -1));
              FUN_05477da4(awStack_18,pEVar1,(long)*(int *)(this + 0x134),0xffffffffffffffff);
              std::operator+(awStack_20,awStack_18);
              FUN_054766c8(pEVar1,asStack_10);
              FUN_05476c50(asStack_10);
              FUN_05476c50(awStack_18);
              FUN_05476c50(awStack_20);
            }
            iVar14 = *(int *)(this + 0x134);
            iVar12 = iVar14 + -1;
            bVar10 = iVar12 != *(int *)(this + 0x168);
            *(int *)(this + 0x134) = iVar12;
            *(int *)(this + 0x168) = iVar14 + -2;
            *(undefined4 *)(this + 0x138) = 0xffffffff;
          }
          else {
            pEVar2 = this + 0x138;
            pEVar3 = this + 0x134;
            piVar19 = eastl::min_alt<int>((int *)pEVar3,(int *)pEVar2);
            FUN_05477da4(awStack_20,pEVar1,0,(long)*piVar19);
            bVar10 = true;
            piVar19 = eastl::max_alt<int>((int *)pEVar3,(int *)pEVar2);
            FUN_05477da4(awStack_18,pEVar1,(long)*piVar19,0xffffffffffffffff);
            std::operator+(awStack_20,awStack_18);
            FUN_054766c8(pEVar1,asStack_10);
            FUN_05476c50(asStack_10);
            FUN_05476c50(awStack_18);
            FUN_05476c50(awStack_20);
            piVar19 = eastl::min_alt<int>((int *)pEVar3,(int *)pEVar2);
            *(int *)(this + 0x134) = *piVar19;
            *(undefined4 *)(this + 0x138) = 0xffffffff;
          }
        }
        this_00 = (IMEDispatcher *)IMEDispatcher::GetInstancePtr();
        IMEDispatcher::AttachIME(this_00,(IMEDelegate *)(this + 0xd8));
        ShowKeyboard(this);
        goto LAB_0514ac54;
      }
      if (param_2 != 0x2e) {
        if (param_2 == 0x24) {
          *(undefined4 *)(this + 0x134) = 0;
        }
        else if (param_2 == 0x23) {
          bVar10 = false;
          uVar13 = FUN_054765d0(pEVar1);
          *(undefined4 *)(this + 0x134) = uVar13;
        }
        else if ((param_2 == 10) || (bVar10 = false, param_2 == 0xd)) {
          DetachIME(this);
          pcVar21 = *(code **)**(undefined8 **)(this + 0x128);
          if (pcVar21 != EditListener::EditWidgetText) {
            (*pcVar21)(*(undefined8 **)(this + 0x128),*(undefined4 *)(this + 0xe0),pEVar1);
          }
          FUN_05476f98(this + 0x170);
          this[0x16d] = (EditWidget)0x0;
          FUN_05476c50(auStack_40);
          goto LAB_0514aadc;
        }
        goto LAB_0514ac54;
      }
      lVar18 = FUN_054765d0(pEVar1);
      if (lVar18 == 0) goto LAB_0514ac54;
      if ((iVar6 == -1) || (iVar5 == iVar6)) {
        iVar14 = iVar5;
        if (iVar5 < (int)lVar18) {
          FUN_05477da4(awStack_20,pEVar1,0,(long)iVar5);
          FUN_05477da4(awStack_18,pEVar1,(long)(*(int *)(this + 0x134) + 1),0xffffffffffffffff);
          std::operator+(awStack_20,awStack_18);
          FUN_054766c8(pEVar1,asStack_10);
          FUN_05476c50(asStack_10);
          FUN_05476c50(awStack_18);
          FUN_05476c50(awStack_20);
          iVar14 = *(int *)(this + 0x134);
        }
        iVar12 = *(int *)(this + 0x168);
        *(int *)(this + 0x168) = iVar14;
        bVar10 = iVar12 != iVar14;
        goto LAB_0514ac54;
      }
      piVar19 = eastl::min_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
      FUN_05477da4(awStack_20,pEVar1,0,(long)*piVar19);
      piVar19 = eastl::max_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
      FUN_05477da4(awStack_18,pEVar1,(long)*piVar19,0xffffffffffffffff);
      std::operator+(awStack_20,awStack_18);
      FUN_054766c8(pEVar1,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
LAB_0514ac40:
      bVar10 = true;
      piVar19 = eastl::min_alt<int>((int *)(this + 0x134),(int *)(this + 0x138));
      *(int *)(this + 0x134) = *piVar19;
      *(undefined4 *)(this + 0x138) = 0xffffffff;
    }
  }
  goto LAB_0514ac54;
  while( true ) {
    iVar14 = *(int *)(this + 0x134) + -1;
    *(int *)(this + 0x134) = iVar14;
    if (iVar14 < 1) break;
LAB_0514adf0:
    pcVar21 = *(code **)(*(long *)this + 0x348);
    puVar17 = (undefined4 *)FUN_05476f5c(pEVar1,(long)(iVar14 + -1));
    cVar11 = (*pcVar21)(this,*puVar17);
    if (cVar11 == '\0') break;
  }
LAB_0514ae30:
  bVar10 = false;
LAB_0514ac54:
  iVar14 = *(int *)(this + 0x148);
  if ((iVar14 != -1) && (iVar12 = FUN_054765d0(pEVar1), iVar14 < iVar12)) {
    FUN_05477da4(asStack_10,pEVar1,0,(long)iVar14);
    FUN_054766c8(pEVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  EnforceMaxPixels(this);
  iVar14 = *(int *)(this + 0x134);
  if (iVar14 < 0) {
    *(undefined4 *)(this + 0x134) = 0;
    iVar14 = 0;
  }
  else {
    iVar12 = FUN_054765d0(pEVar1);
    if (iVar12 < iVar14) {
      *(int *)(this + 0x134) = iVar12;
      iVar14 = iVar12;
    }
  }
  if (iVar5 != iVar14) {
    *(undefined4 *)(this + 0x13c) = 0;
    this[0x130] = (EditWidget)0x1;
  }
  (**(code **)(*(long *)this + 0x368))(this,1);
  if ((bVar23 != 0) || (*(int *)(this + 0x138) == *(int *)(this + 0x134))) {
    *(undefined4 *)(this + 0x138) = 0xffffffff;
  }
  plVar16 = *(long **)(this + 0x128);
  if (*(code **)(*plVar16 + 0x18) == EditListener::AllowText) {
    cVar11 = EditListener::AllowText((int)plVar16,(wstring *)(ulong)*(uint *)(this + 0xe0));
    if (cVar11 != '\0') goto LAB_0514ad34;
LAB_0514ad80:
    thunk_FUN_05477b9c(pEVar1,auStack_40);
    *(int *)(this + 0x134) = iVar5;
    *(int *)(this + 0x138) = iVar6;
    *(undefined4 *)(this + 0x144) = uVar4;
  }
  else {
    cVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,(wstring *)(ulong)*(uint *)(this + 0xe0),pEVar1)
    ;
    if (cVar11 == '\0') goto LAB_0514ad80;
LAB_0514ad34:
    if (bVar10) {
      thunk_FUN_05477b9c(this + 0x158,auStack_40);
      *(int *)(this + 0x160) = iVar5;
      *(int *)(this + 0x164) = iVar6;
    }
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  FUN_05476c50(auStack_40);
LAB_0514aadc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::ClearWidthCheckFonts() */

void __thiscall Sexy::EditWidget::ClearWidthCheckFonts(EditWidget *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0514a5e8(*(undefined8 *)(this + 0x118));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x118));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_List_iterator<Sexy::NetworkServiceRequest>::operator->
                      ((_List_iterator<Sexy::NetworkServiceRequest> *)&local_18);
    if (*(long **)(lVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 8) + 0x18))();
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  std::list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>>::clear
            ((list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>> *)
             (this + 0x118));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EditWidget::EditWidget(int, Sexy::EditListener*) */

void __thiscall Sexy::EditWidget::EditWidget(EditWidget *this,int param_1,EditListener *param_2)

{
  Widget::Widget((Widget *)this);
  IMEDelegate::IMEDelegate((IMEDelegate *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a2dff0;
  *(undefined ***)(this + 0xd8) = &PTR_getText_06a2e370;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x118));
  FUN_05476574(this + 0x158);
  FUN_05476574(this + 0x170);
  *(undefined4 *)(this + 0x178) = 0;
  *(int *)(this + 0xe0) = param_1;
  *(EditListener **)(this + 0x128) = param_2;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0xffffffff;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x16c] = (EditWidget)0x0;
  this[0x16d] = (EditWidget)0x0;
  this[0x132] = (EditWidget)0x0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x130] = (EditWidget)0x0;
  this[0x131] = (EditWidget)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x140) = 0x28;
  *(undefined4 *)(this + 0xf8) = 4;
  *(undefined4 *)(this + 0xfc) = 4;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  Widget::SetColors((Widget *)this,(int *)&DAT_06a89e70,5);
  return;
}


/* Sexy::EditWidget::~EditWidget() */

void __thiscall Sexy::EditWidget::~EditWidget(EditWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2dff0;
  *(undefined ***)(this + 0xd8) = &PTR_getText_06a2e370;
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
  }
  ClearWidthCheckFonts(this);
  FUN_05476c50(this + 0x170);
  FUN_05476c50(this + 0x158);
  std::list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>>::~list
            ((list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>> *)
             (this + 0x118));
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::EditWidget::~EditWidget() */

void __thiscall Sexy::EditWidget::~EditWidget(EditWidget *this)

{
  ~EditWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::AddWidthCheckFont(Sexy::PrimeTypeface*, int) */

void __thiscall
Sexy::EditWidget::AddWidthCheckFont(EditWidget *this,PrimeTypeface *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_10 = 0;
  std::list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>>::push_back
            ((list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>> *)
             (this + 0x118),(WidthCheck *)&local_20);
  puVar2 = (undefined8 *)
           std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                     ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                      (this + 0x118));
  lVar1 = ___stack_chk_guard;
  *(int *)(puVar2 + 2) = param_2;
  *puVar2 = param_1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EditWidget::SetFont(Sexy::PrimeTypeface*, Sexy::PrimeTypeface*) */

void __thiscall
Sexy::EditWidget::SetFont(EditWidget *this,PrimeTypeface *param_1,PrimeTypeface *param_2)

{
  *(PrimeTypeface **)(this + 0x108) = param_1;
  ClearWidthCheckFonts(this);
  if (param_2 != (PrimeTypeface *)0x0) {
    AddWidthCheckFont(this,param_2,-1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::EditWidget::AddWidthCheckFont(Sexy::Font*, int) */

void __thiscall Sexy::EditWidget::AddWidthCheckFont(EditWidget *this,Font *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_10 = 0;
  std::list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>>::push_back
            ((list<Sexy::EditWidget::WidthCheck,std::allocator<Sexy::EditWidget::WidthCheck>> *)
             (this + 0x118),(WidthCheck *)&local_20);
  lVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                    ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                     (this + 0x118));
  lVar3 = *(long *)param_1;
  *(int *)(lVar1 + 0x10) = param_2;
  uVar2 = (**(code **)(lVar3 + 0xa0))(param_1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::EditWidget::SetFont(Sexy::Font*, Sexy::Font*) */

void __thiscall Sexy::EditWidget::SetFont(EditWidget *this,Font *param_1,Font *param_2)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  *(undefined8 *)(this + 0x110) = uVar1;
  ClearWidthCheckFonts(this);
  if (param_2 != (Font *)0x0) {
    AddWidthCheckFont(this,param_2,-1);
    return;
  }
  return;
}


/* Sexy::EditWidget::Resize(int, int, int, int) */

void __thiscall
Sexy::EditWidget::Resize(EditWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  (**(code **)(*(long *)this + 0x368))(this,0);
  return;
}


/* Sexy::EditWidget::GotFocus() */

void __thiscall Sexy::EditWidget::GotFocus(EditWidget *this)

{
  Widget::GotFocus((Widget *)this);
  AttachIME(this);
  this[0x130] = (EditWidget)0x0;
  *(undefined4 *)(this + 0x13c) = 0;
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::EditWidget::LostFocus() */

void __thiscall Sexy::EditWidget::LostFocus(EditWidget *this)

{
  Widget::LostFocus((Widget *)this);
  DetachIME(this);
  this[0x16d] = (EditWidget)0x0;
  this[0x130] = (EditWidget)0x0;
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::EditWidget::Update() */

void __thiscall Sexy::EditWidget::Update(EditWidget *this)

{
  int iVar1;
  EditWidget EVar2;
  char cVar3;
  code *pcVar4;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x6f] == (EditWidget)0x0) {
    return;
  }
  if (*(char *)(*(long *)(*(long *)(this + 0x18) + 0x80) + 0x3c1) == '\0') {
    iVar1 = *(int *)(this + 0x13c);
    *(int *)(this + 0x13c) = iVar1 + 1;
    if (iVar1 + 1 <= *(int *)(this + 0x140)) {
LAB_0514bdb4:
      EVar2 = this[0x16d];
      goto joined_r0x0514bdb8;
    }
  }
  else {
    nop();
    iVar1 = *(int *)(this + 0x13c);
    *(int *)(this + 0x13c) = iVar1 + 1;
    if (iVar1 + 1 <= *(int *)(this + 0x140)) goto LAB_0514bdb4;
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  *(undefined4 *)(this + 0x13c) = 0;
  this[0x130] = (EditWidget)((byte)this[0x130] ^ 1);
  EVar2 = this[0x16d];
joined_r0x0514bdb8:
  if ((EVar2 != (EditWidget)0x0) &&
     (cVar3 = (**(code **)(**(long **)(*(long *)(this + 0x18) + 0x80) + 0x348))
                        (*(long **)(*(long *)(this + 0x18) + 0x80)), cVar3 == '\0')) {
    cVar3 = FUN_054765e8(this + 0xe8);
    if (cVar3 == '\0') {
      pcVar4 = *(code **)**(undefined8 **)(this + 0x128);
      if (pcVar4 != EditListener::EditWidgetText) {
        (*pcVar4)(*(undefined8 **)(this + 0x128),*(undefined4 *)(this + 0xe0),this + 0xe8);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x340))(this,this + 0x170,1);
    }
    FUN_05476f98(this + 0x170);
    this[0x16d] = (EditWidget)0x0;
    return;
  }
  return;
}


/* Sexy::EditWidget::KeyDown(Sexy::KeyCode) */

void __thiscall Sexy::EditWidget::KeyDown(EditWidget *this,int param_2)

{
  char cVar1;
  code *pcVar2;
  
  if (0x18 < param_2 - 0x41U) {
    pcVar2 = *(code **)(**(long **)(this + 0x128) + 8);
    if (pcVar2 == EditListener::AllowKey) {
      cVar1 = EditListener::AllowKey();
    }
    else {
      cVar1 = (*pcVar2)(*(long **)(this + 0x128),*(undefined4 *)(this + 0xe0),param_2);
    }
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 800))(this,param_2,0);
      Widget::KeyDown((Widget *)this,param_2);
      return;
    }
  }
  Widget::KeyDown((Widget *)this,param_2);
  return;
}


/* Sexy::EditWidget::KeyChar(wchar_t) */

void __thiscall Sexy::EditWidget::KeyChar(EditWidget *this,wchar_t param_1)

{
  (**(code **)(*(long *)this + 800))(this,0,param_1);
  nop();
  return;
}


/* Sexy::EditWidget::MouseDown(int, int, int, int) */

void __thiscall
Sexy::EditWidget::MouseDown(EditWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  nop();
  if (this[0x16d] == (EditWidget)0x0) {
    return;
  }
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  uVar1 = (**(code **)(*(long *)this + 0x350))(this,param_1,param_2);
  *(undefined4 *)(this + 0x134) = uVar1;
  if (1 < param_4) {
    this[0x132] = (EditWidget)0x1;
    (**(code **)(*(long *)this + 0x328))(this);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  (**(code **)(*(long *)this + 0x368))(this,0);
  return;
}


/* Sexy::EditWidget::MouseUp(int, int, int, int) */

void Sexy::EditWidget::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  EditWidget EVar1;
  undefined4 uVar2;
  EditWidget *this;
  
  this = (EditWidget *)(ulong)(uint)param_1;
  nop();
  if (this[0x71] == (EditWidget)0x0) {
    return;
  }
  if (this[0x16d] == (EditWidget)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x350))(this,param_2,param_3);
    *(undefined4 *)(this + 0x134) = uVar2;
    (**(code **)(*(long *)this + 0x368))(this,0);
    AttachIME(this);
    if (*(int *)(this + 0x138) != *(int *)(this + 0x134)) goto LAB_0514c084;
  }
  else if (*(int *)(this + 0x138) != *(int *)(this + 0x134)) {
LAB_0514c084:
    EVar1 = this[0x132];
    goto joined_r0x0514c088;
  }
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  EVar1 = this[0x132];
joined_r0x0514c088:
  if (EVar1 != (EditWidget)0x0) {
    *(undefined4 *)(this + 0x138) = 0xffffffff;
    uVar2 = (**(code **)(*(long *)this + 0x350))(this,param_2,param_3);
    this[0x132] = (EditWidget)0x0;
    *(undefined4 *)(this + 0x134) = uVar2;
    (**(code **)(*(long *)this + 0x328))(this);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::EditWidget::MouseDrag(int, int) */

void __thiscall Sexy::EditWidget::MouseDrag(EditWidget *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  nop();
  if (this[0x16d] != (EditWidget)0x0) {
    if (*(int *)(this + 0x138) == -1) {
      *(undefined4 *)(this + 0x138) = *(undefined4 *)(this + 0x134);
    }
    uVar1 = (**(code **)(*(long *)this + 0x350))(this,param_1,param_2);
    *(undefined4 *)(this + 0x134) = uVar1;
    (**(code **)(*(long *)this + 0xd8))(this);
    (**(code **)(*(long *)this + 0x368))(this,0);
  }
  return;
}


/* Sexy::EditWidget::MouseEnter() */

void Sexy::EditWidget::MouseEnter(void)

{
  long in_x0;
  
  nop();
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x80));
  return;
}


/* Sexy::EditWidget::MouseLeave() */

void Sexy::EditWidget::MouseLeave(void)

{
  long in_x0;
  
  nop();
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x80));
  return;
}


/* Sexy::EditWidget::MarkDirty() */

void __thiscall Sexy::EditWidget::MarkDirty(EditWidget *this)

{
  long lVar1;
  
  lVar1 = FUN_05149354(*(undefined8 *)(this + 0x78),0);
  if (*(int *)(lVar1 + 0xc) != 0xff) {
    WidgetContainer::MarkDirtyFull((WidgetContainer *)this);
    return;
  }
  WidgetContainer::MarkDirty((WidgetContainer *)this);
  return;
}

