// Class: BoardRewardIcon


/* BoardRewardIcon::~BoardRewardIcon() */

void __thiscall BoardRewardIcon::~BoardRewardIcon(BoardRewardIcon *this)

{
  *(undefined ***)this = &PTR_GetClass_06935640;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BoardRewardIcon::~BoardRewardIcon() */

void __thiscall BoardRewardIcon::~BoardRewardIcon(BoardRewardIcon *this)

{
  ~BoardRewardIcon(this);
  AK::FreeHook(this);
  return;
}


/* BoardRewardIcon::BoardRewardIcon() */

void __thiscall BoardRewardIcon::BoardRewardIcon(BoardRewardIcon *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06935640;
  FUN_05476574(this + 0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRewardIcon::SetReward(Sexy::Image*, int) */

void __thiscall BoardRewardIcon::SetReward(BoardRewardIcon *this,Image *param_1,int param_2)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  *(Image **)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10,(ulong)(uint)param_2);
  FUN_054766c8(this + 0xe0,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRewardIcon::Draw(Sexy::Graphics*) */

void __thiscall BoardRewardIcon::Draw(BoardRewardIcon *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  float *pfVar7;
  PrimeTypeface *this_00;
  long lVar8;
  float fVar9;
  float fVar10;
  float local_2c;
  float local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c498);
  if (pIVar6 != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    lVar8 = *(long *)(this + 0xd8);
    if (lVar8 != 0) {
      iVar1 = *(int *)(this + 0x50);
      iVar4 = FUN_04a4f3a4(10);
      iVar2 = iVar1 - iVar4;
      iVar4 = *(int *)(this + 0x54) - iVar4;
      Sexy::Insets::Insets
                ((Insets *)&local_18,(iVar1 - *(int *)(lVar8 + 0x38)) / 2,
                 (*(int *)(this + 0x54) - *(int *)(lVar8 + 0x3c)) / 2,*(int *)(lVar8 + 0x38),
                 *(int *)(lVar8 + 0x3c));
      pIVar6 = *(Image **)(this + 0xd8);
      if ((iVar2 < *(int *)(pIVar6 + 0x38)) || (iVar4 < *(int *)(pIVar6 + 0x3c))) {
        fVar9 = (float)*(int *)(pIVar6 + 0x38);
        fVar10 = (float)*(int *)(pIVar6 + 0x3c);
        local_2c = (float)iVar2 / fVar9;
        local_28[0] = (float)iVar4 / fVar10;
        pfVar7 = eastl::min_alt<float>(&local_2c,local_28);
        local_10 = (int)(*pfVar7 * fVar9);
        local_c = (int)(*pfVar7 * fVar10);
        local_18 = (*(int *)(this + 0x50) - local_10) / 2;
        local_14 = (*(int *)(this + 0x54) - local_c) / 2;
      }
      Sexy::Graphics::DrawImage(param_1,pIVar6,local_18,local_14,local_10,local_c);
    }
    cVar3 = FUN_054765e8(this + 0xe0);
    if (cVar3 == '\0') {
      this_00 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      iVar1 = *(int *)(this + 0x54);
      fVar9 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
      iVar4 = FUN_04a4f3a4(10);
      iVar5 = FUN_04a4f3a4(0xf);
      iVar2 = *(int *)(this + 0x50);
      fVar10 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
      Sexy::Insets::Insets
                ((Insets *)local_28,0,(int)(((float)iVar1 - fVar9) - (float)iVar4),iVar2 - iVar5,
                 (int)fVar10);
      Sexy::Color::Color((Color *)&local_18,1);
      WriteWordInRect(param_1,this + 0xe0,(Insets *)local_28,this_00,(Color *)&local_18,1,1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

