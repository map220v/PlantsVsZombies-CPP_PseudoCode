// Class: GameButton


/* GameButton::Resize(int, int, int, int) */

void __thiscall GameButton::Resize(GameButton *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  *(int *)(this + 0x20) = param_3;
  *(int *)(this + 0x24) = param_4;
  return;
}


/* GameButton::~GameButton() */

void __thiscall GameButton::~GameButton(GameButton *this)

{
  *(undefined ***)this = &PTR__GameButton_06769dc0;
  FUN_05476c50(this + 0x80);
  return;
}


/* GameButton::~GameButton() */

void __thiscall GameButton::~GameButton(GameButton *this)

{
  ~GameButton(this);
  AK::FreeHook(this);
  return;
}


/* GameButton::SetFont(Sexy::PrimeTypeface*) */

void __thiscall GameButton::SetFont(GameButton *this,PrimeTypeface *param_1)

{
  PrimeTypeface *this_00;
  
  this_00 = *(PrimeTypeface **)(this + 0x90);
  if (this_00 != (PrimeTypeface *)0x0) {
    Sexy::PrimeTypeface::~PrimeTypeface(this_00);
    AK::FreeHook(this_00);
  }
  *(PrimeTypeface **)(this + 0x90) = param_1;
  return;
}


/* GameButton::DrawButtonImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int> const&, int, int) */

void __thiscall
GameButton::DrawButtonImage
          (GameButton *this,Graphics *param_1,Image *param_2,TRect *param_3,int param_4,int param_5)

{
  if (*(int *)(param_3 + 8) == 0) {
    Sexy::Graphics::DrawImage
              (param_1,param_2,param_4 + *(int *)(this + 0x130),param_5 + *(int *)(this + 0x134));
    return;
  }
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0x98),param_4 + *(int *)(this + 0x130),
             param_5 + *(int *)(this + 0x134),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameButton::SetLabel(std::wstring const&) */

void __thiscall GameButton::SetLabel(GameButton *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x80,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameButton::IsButtonDown() */

byte __thiscall GameButton::IsButtonDown(GameButton *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (((this[0x29] != (GameButton)0x0) && (bVar1 = 0, this[0x28] != (GameButton)0x0)) &&
     (bVar1 = 0, this[0x2a] == (GameButton)0x0)) {
    bVar1 = (byte)this[0x101] ^ 1;
  }
  return bVar1;
}


/* GameButton::HaveButtonImage(Sexy::Image*, Sexy::TRect<int> const&) */

bool __thiscall GameButton::HaveButtonImage(GameButton *this,Image *param_1,TRect *param_2)

{
  if (param_1 != (Image *)0x0) {
    return true;
  }
  return *(int *)(param_2 + 8) != 0;
}


/* GameButton::SetDisabled(bool) */

void __thiscall GameButton::SetDisabled(GameButton *this,bool param_1)

{
  this[0x2a] = (GameButton)param_1;
  return;
}


/* GameButton::IsMouseOver() const */

byte __thiscall GameButton::IsMouseOver(GameButton *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((this[0x28] != (GameButton)0x0) && (bVar1 = 0, this[0x2a] == (GameButton)0x0)) {
    bVar1 = (byte)this[0x101] ^ 1;
  }
  return bVar1;
}


/* GameButton::Update() */

void __thiscall GameButton::Update(GameButton *this)

{
  GameButton GVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  GameButton GVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  lVar3 = (*(long **)(this + 8))[0x6c];
  iVar2 = *(int *)(lVar3 + 0x13c);
  iVar7 = *(int *)(lVar3 + 0x140);
  if (lVar4 != 0) {
    iVar2 = iVar2 - *(int *)(lVar4 + 0x48);
    iVar7 = iVar7 - *(int *)(lVar4 + 0x4c);
  }
  GVar6 = (GameButton)0x0;
  if (((*(int *)(this + 0x18) <= iVar2) && (iVar2 < *(int *)(this + 0x18) + *(int *)(this + 0x20)))
     && (*(int *)(this + 0x1c) <= iVar7)) {
    GVar6 = (GameButton)(iVar7 < *(int *)(this + 0x1c) + *(int *)(this + 0x24));
  }
  lVar5 = *(long *)(lVar3 + 200);
  GVar1 = (GameButton)((*(uint *)(lVar3 + 0x144) & 5) != 0);
  this[0x28] = GVar6;
  this[0x29] = GVar1;
  if ((lVar5 == 0) || (lVar4 != lVar5)) {
    iVar2 = (**(code **)(**(long **)(this + 8) + 0x290))();
    if (iVar2 < 1) {
      GVar1 = this[0x29];
      GVar6 = this[0x28];
      goto LAB_03d38704;
    }
    this[0x29] = (GameButton)0x0;
    this[0x28] = (GameButton)0x0;
LAB_03d386c8:
    if ((0.0 < *(double *)(this + 0x108)) &&
       ((*(double *)(this + 0x110) <= 0.0 ||
        (dVar8 = *(double *)(this + 0x108) - *(double *)(this + 0x110),
        *(double *)(this + 0x108) = dVar8, dVar8 < 0.0)))) {
      *(undefined8 *)(this + 0x108) = 0;
    }
  }
  else {
LAB_03d38704:
    if (GVar1 == (GameButton)0x0) {
      if (GVar6 == (GameButton)0x0) goto LAB_03d386c8;
    }
    else if (GVar6 == (GameButton)0x0) {
      return;
    }
    if ((0.0 < *(double *)(this + 0x118)) && (*(double *)(this + 0x108) < 1.0)) {
      uVar9 = NEON_fminnm(*(double *)(this + 0x108) + *(double *)(this + 0x118),0x3ff0000000000000);
      *(undefined8 *)(this + 0x108) = uVar9;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameButton::GameButton(int) */

void __thiscall GameButton::GameButton(GameButton *this,int param_1)

{
  GameButton *pGVar1;
  GameButton *pGVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__GameButton_06769dc0;
  pGVar1 = this + 0x2c;
  do {
    pGVar2 = pGVar1 + 0x10;
    Sexy::Color::Color((Color *)pGVar1);
    pGVar1 = pGVar2;
  } while (pGVar2 != this + 0x7c);
  FUN_05476574(this + 0x80);
  Sexy::Insets::Insets((Insets *)(this + 0xc0));
  Sexy::Insets::Insets((Insets *)(this + 0xd0));
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  *(int *)(this + 0x7c) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 8) = Sexy::gSexyAppBase;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  this[0x100] = (GameButton)0x0;
  this[0x101] = (GameButton)0x0;
  this[0x102] = (GameButton)0x0;
  this[0x2a] = (GameButton)0x0;
  this[0x29] = (GameButton)0x0;
  this[0x28] = (GameButton)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x120] = (GameButton)0x0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  pGVar1 = this + 0x2c;
  piVar3 = (int *)&DAT_06a88580;
  do {
    Sexy::Color::Color((Color *)&local_18,piVar3);
    pGVar2 = pGVar1 + 0x10;
    *(undefined8 *)pGVar1 = local_18;
    *(undefined8 *)(pGVar1 + 8) = uStack_10;
    pGVar1 = pGVar2;
    piVar3 = piVar3 + 3;
  } while (pGVar2 != this + 0x7c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameButton::Draw(Sexy::Graphics*) */

void __thiscall GameButton::Draw(GameButton *this,Graphics *param_1)

{
  int iVar1;
  GameButton GVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  BaseBufferResource *this_00;
  Insets *pIVar6;
  GameButton *pGVar7;
  undefined8 uVar8;
  int iVar9;
  GameButton GVar10;
  TRect *pTVar11;
  int iVar12;
  long lVar13;
  GameButton *pGVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x101] != (GameButton)0x0) goto LAB_03d397c8;
  if (this[0x29] == (GameButton)0x0) {
    GVar10 = this[0x100];
    if (this[0x28] != (GameButton)0x0) {
      GVar2 = this[0x2a];
LAB_03d39814:
      if (GVar2 == (GameButton)0x0) {
        bVar3 = true;
        goto LAB_03d395fc;
      }
    }
LAB_03d395f8:
    bVar3 = false;
  }
  else {
    if (this[0x28] == (GameButton)0x0) {
      GVar10 = this[0x100];
      goto LAB_03d395f8;
    }
    GVar2 = this[0x2a];
    if (GVar2 != (GameButton)0x0) {
      GVar10 = this[0x100];
      goto LAB_03d39814;
    }
    bVar3 = true;
    GVar10 = (GameButton)((byte)this[0x100] ^ 1);
  }
LAB_03d395fc:
  if (this[0x120] != (GameButton)0x0) {
    DrawStoneButton(param_1,*(int *)(this + 0x18),*(int *)(this + 0x1c),*(int *)(this + 0x20),
                    *(int *)(this + 0x24),(bool)GVar10,bVar3,(wstring *)(this + 0x80),
                    *(int *)(this + 0x124));
    goto LAB_03d397c8;
  }
  iVar12 = *(int *)(this + 0x1c);
  lVar13 = *(long *)(this + 0x90);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (float)*(int *)(this + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)iVar12;
  if (lVar13 == 0) {
    lVar13 = FUN_054765d0(this + 0x80);
    if (lVar13 == 0) {
      iVar12 = *(int *)(this + 0x128);
      iVar9 = *(int *)(this + 300);
    }
    else {
      this_00 = (BaseBufferResource *)Sexy::PrimeText::Instance();
      lVar13 = Sexy::BaseBufferResource::GetPtr(this_00);
      *(long *)(this + 0x90) = lVar13;
      iVar12 = *(int *)(this + 0x128);
      iVar9 = *(int *)(this + 300);
      if (lVar13 != 0) goto LAB_03d39640;
    }
  }
  else {
    iVar12 = *(int *)(this + 0x128);
    iVar9 = *(int *)(this + 300);
LAB_03d39640:
    if (*(int *)(this + 0x88) == 0) {
      iVar1 = *(int *)(this + 0x20);
      FUN_05477b24(aIStack_18,this + 0x80);
      iVar5 = Sexy::PrimeTypeface::StringWidth(lVar13,aIStack_18);
      iVar12 = iVar12 + (iVar1 - iVar5) / 2;
      FUN_05476c50(aIStack_18);
    }
    else if (*(int *)(this + 0x88) == 1) {
      iVar1 = *(int *)(this + 0x20);
      FUN_05477b24(aIStack_18,this + 0x80);
      iVar5 = Sexy::PrimeTypeface::StringWidth(lVar13,aIStack_18);
      iVar12 = iVar12 + (iVar1 - iVar5);
      FUN_05476c50(aIStack_18);
    }
    iVar1 = *(int *)(this + 0x24);
    fVar16 = (float)Sexy::PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x90));
    fVar17 = (float)Sexy::PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x90));
    iVar9 = (int)((float)iVar9 + (((float)iVar1 + -1.0 + fVar16) - fVar17 * 0.16666667) * 0.5);
  }
  pGVar14 = this + 0x80;
  if (GVar10 == (GameButton)0x0) {
    if (this[0x2a] == (GameButton)0x0) {
LAB_03d396a0:
      if (0.0 < *(double *)(this + 0x108)) {
        cVar4 = HaveButtonImage(this,*(Image **)(this + 0xa0),(TRect *)(this + 0xd0));
        if (cVar4 != '\0') {
          cVar4 = HaveButtonImage(this,*(Image **)(this + 0x98),(TRect *)(this + 0xc0));
          if ((cVar4 != '\0') && (*(double *)(this + 0x108) < 1.0)) {
            (**(code **)(*(long *)this + 0x10))
                      (this,param_1,*(undefined8 *)(this + 0x98),(TRect *)(this + 0xc0),0,0);
          }
          Sexy::Graphics::SetColorizeImages(param_1,true);
          Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,(int)(*(double *)(this + 0x108) * 255.0));
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          (**(code **)(*(long *)this + 0x10))
                    (this,param_1,*(undefined8 *)(this + 0xa0),(TRect *)(this + 0xd0),0,0);
          Sexy::Graphics::SetColorizeImages(param_1,false);
          goto LAB_03d396f4;
        }
      }
      if (!bVar3) {
LAB_03d396b0:
        cVar4 = HaveButtonImage(this,*(Image **)(this + 0x98),(TRect *)(this + 0xc0));
        if (cVar4 == '\0') {
          pIVar6 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
          Sexy::Insets::Insets((Insets *)&local_28,pIVar6);
          Sexy::Color::Color((Color *)aIStack_18,0xaa,0xaa,0xaa);
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x20),*(int *)(this + 0x24));
          Sexy::Color::Color((Color *)aIStack_18,0);
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          Sexy::Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x20),*(int *)(this + 0x24));
          Sexy::Graphics::SetColor(param_1,(Color *)&local_28);
        }
        else {
          (**(code **)(*(long *)this + 0x10))
                    (this,param_1,*(undefined8 *)(this + 0x98),(TRect *)(this + 0xc0),0,0);
        }
        goto LAB_03d396f4;
      }
      cVar4 = HaveButtonImage(this,*(Image **)(this + 0xa0),(TRect *)(this + 0xd0));
      if (cVar4 == '\0') goto LAB_03d396b0;
      (**(code **)(*(long *)this + 0x10))
                (this,param_1,*(undefined8 *)(this + 0xa0),(TRect *)(this + 0xd0),0,0);
      Sexy::Color::Color((Color *)&local_28);
      pGVar7 = this + 0x4c;
      if (this[0x2a] == (GameButton)0x0) goto LAB_03d3995c;
LAB_03d39960:
      local_28 = *(undefined8 *)pGVar7;
      uStack_20 = *(undefined8 *)(pGVar7 + 8);
      uVar15 = *(undefined8 *)(this + 0x90);
      FUN_05477b24(auStack_30,pGVar14);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
      Sexy::PrimeTypeface::DrawString_Simple
                ((PrimeTypeface *)(float)iVar12,(float)iVar9,uVar15,param_1,auStack_30,aIStack_18,0)
      ;
      FUN_05476c50(auStack_30);
      goto LAB_03d3975c;
    }
    cVar4 = HaveButtonImage(this,*(Image **)(this + 0xb0),(TRect *)(this + 0xf0));
    if (cVar4 == '\0') goto LAB_03d396a0;
    (**(code **)(*(long *)this + 0x10))
              (this,param_1,*(undefined8 *)(this + 0xb0),(TRect *)(this + 0xf0),0,0);
LAB_03d396f4:
    Sexy::Color::Color((Color *)&local_28);
    if (this[0x2a] != (GameButton)0x0) {
      uVar15 = *(undefined8 *)(this + 0x90);
      local_28 = *(undefined8 *)(this + 0x4c);
      uStack_20 = *(undefined8 *)(this + 0x54);
      FUN_05477b24(auStack_30,pGVar14);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
      goto LAB_03d39744;
    }
    if (bVar3) {
LAB_03d3995c:
      pGVar7 = this + 0x3c;
      goto LAB_03d39960;
    }
    uVar15 = *(undefined8 *)(this + 0x90);
    local_28 = *(undefined8 *)(this + 0x2c);
    uStack_20 = *(undefined8 *)(this + 0x34);
    FUN_05477b24(auStack_30,pGVar14);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)iVar12,(float)iVar9,uVar15,param_1,auStack_30,aIStack_18,0);
    FUN_05476c50(auStack_30);
  }
  else {
    pTVar11 = (TRect *)(this + 0xe0);
    cVar4 = HaveButtonImage(this,*(Image **)(this + 0xa8),pTVar11);
    if (cVar4 == '\0') {
      pTVar11 = (TRect *)(this + 0xd0);
      cVar4 = HaveButtonImage(this,*(Image **)(this + 0xa0),pTVar11);
      if (cVar4 != '\0') {
        lVar13 = *(long *)this;
        uVar8 = 1;
        uVar15 = *(undefined8 *)(this + 0xa0);
        goto LAB_03d39a38;
      }
      pTVar11 = (TRect *)(this + 0xc0);
      cVar4 = HaveButtonImage(this,*(Image **)(this + 0x98),pTVar11);
      if (cVar4 != '\0') {
        lVar13 = *(long *)this;
        uVar8 = 1;
        uVar15 = *(undefined8 *)(this + 0x98);
        goto LAB_03d39a38;
      }
      pIVar6 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
      Sexy::Insets::Insets((Insets *)&local_28,pIVar6);
      Sexy::Color::Color((Color *)aIStack_18,0x78,0x78,0x78);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x20),*(int *)(this + 0x24));
      Sexy::Color::Color((Color *)aIStack_18,0);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      Sexy::Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x20),*(int *)(this + 0x24));
      Sexy::Graphics::SetColor(param_1,(Color *)&local_28);
    }
    else {
      lVar13 = *(long *)this;
      uVar8 = 0;
      uVar15 = *(undefined8 *)(this + 0xa8);
LAB_03d39a38:
      (**(code **)(lVar13 + 0x10))(this,param_1,uVar15,pTVar11,uVar8,uVar8);
    }
    iVar12 = iVar12 + 1;
    Sexy::Insets::Insets((Insets *)&local_28,(Insets *)(this + 0x3c));
    iVar9 = iVar9 + 1;
    uVar15 = *(undefined8 *)(this + 0x90);
    FUN_05477b24(auStack_30,pGVar14);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
LAB_03d39744:
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)iVar12,(float)iVar9,uVar15,param_1,auStack_30,aIStack_18,0);
    FUN_05476c50(auStack_30);
    if (bVar3) {
LAB_03d3975c:
      if (*(long *)(this + 0xb8) != 0) {
        Sexy::Graphics::SetDrawMode(param_1,1);
        (**(code **)(*(long *)this + 0x10))
                  (this,param_1,*(undefined8 *)(this + 0xb8),this + 0xc0,0,0);
        Sexy::Graphics::SetDrawMode(param_1,0);
      }
    }
  }
  iVar12 = *(int *)(this + 0x1c);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - (float)*(int *)(this + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - (float)iVar12;
LAB_03d397c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

