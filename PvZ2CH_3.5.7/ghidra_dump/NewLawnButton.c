// Class: NewLawnButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLawnButton::Draw(Sexy::Graphics*) */

void __thiscall NewLawnButton::Draw(NewLawnButton *this,Graphics *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewLawnButton NVar3;
  char cVar4;
  int iVar5;
  Color *pCVar6;
  Insets *pIVar7;
  ulong *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  NewLawnButton NVar11;
  NewLawnButton *pNVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  double dVar18;
  int local_30 [2];
  ulong local_28;
  ulong uStack_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x161] != (NewLawnButton)0x0) goto LAB_03d380ec;
  NVar11 = (NewLawnButton)0x0;
  if ((this[0x70] != (NewLawnButton)0x0) && (this[0x71] != (NewLawnButton)0x0)) {
    NVar11 = (NewLawnButton)((byte)this[0x6e] ^ 1);
  }
  lVar15 = *(long *)(this + 0x150);
  iVar17 = *(int *)(this + 0x1a8) + *(int *)(this + 0x1a0);
  NVar3 = this[0x160];
  iVar13 = *(int *)(this + 0x1ac) + *(int *)(this + 0x1a4);
  if (lVar15 == 0) {
    if (*(long *)(this + 0x158) != 0) {
      iVar14 = 0;
      local_30[0] = iVar14;
      goto LAB_03d37fa0;
    }
  }
  else {
    local_30[0] = 0;
    local_28 = local_28 & 0xffffffff00000000;
    if (*(long *)(this + 0x158) == 0) {
      FUN_05477b24(aIStack_18,this + 0xd8);
      Sexy::PrimeTypeface::SizeString_Paragraph(0,lVar15,aIStack_18,local_30,&local_28);
      FUN_05476c50(aIStack_18);
      iVar14 = (int)local_28;
LAB_03d37fa0:
      iVar5 = *(int *)(this + 0xe0);
      if (iVar5 == 0) goto LAB_03d37fa8;
LAB_03d3813c:
      if (iVar5 == 1) {
        iVar17 = iVar17 + (*(int *)(this + 0x50) - local_30[0]);
      }
    }
    else {
      iVar5 = *(int *)(this + 0xe0);
      iVar14 = 0;
      if (iVar5 != 0) goto LAB_03d3813c;
LAB_03d37fa8:
      iVar17 = iVar17 + (*(int *)(this + 0x50) - local_30[0]) / 2;
    }
    iVar13 = iVar13 + (*(int *)(this + 0x54) - iVar14) / 2;
  }
  if (NVar11 != NVar3) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pCVar6 = (Color *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),3);
    Sexy::Graphics::SetColor(param_1,pCVar6);
    cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0x100),this + 0x130);
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),this + 0x120);
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xe8),this + 0x110)
        ;
        if (cVar4 != '\0') {
          (**(code **)(*(long *)this + 0x318))
                    (this,param_1,*(undefined8 *)(this + 0xe8),this + 0x110,
                     *(int *)(this + 0x1c8) + *(int *)(this + 0x1a0),
                     *(int *)(this + 0x1cc) + *(int *)(this + 0x1a4));
        }
      }
      else {
        (**(code **)(*(long *)this + 0x318))
                  (this,param_1,*(undefined8 *)(this + 0xf8),this + 0x120,
                   *(int *)(this + 0x1c8) + *(int *)(this + 0x1a0),
                   *(int *)(this + 0x1cc) + *(int *)(this + 0x1a4));
      }
    }
    else {
      (**(code **)(*(long *)this + 0x318))
                (this,param_1,*(undefined8 *)(this + 0x100),this + 0x130,
                 *(int *)(this + 0x1c8) + *(int *)(this + 0x1a0),
                 *(int *)(this + 0x1cc) + *(int *)(this + 0x1a4));
    }
    Sexy::Graphics::SetColorizeImages(param_1,false);
    if (*(long *)(this + 0x1b8) == 0) {
      lVar15 = *(long *)(this + 0x1b0);
      if (lVar15 == 0) {
        lVar15 = *(long *)(this + 0x150);
        if ((*(long *)(this + 0x158) != 0) || (lVar15 == 0)) goto LAB_03d380ec;
      }
      else if (*(long *)(this + 0x158) != 0) goto LAB_03d380ec;
      iVar14 = *(int *)(this + 0x1c4);
      iVar5 = *(int *)(this + 0x1c0);
      FUN_05477b24(&local_28,this + 0xd8);
      pIVar7 = (Insets *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),1);
      Sexy::Insets::Insets(aIStack_18,pIVar7);
      Sexy::PrimeTypeface::DrawString_Simple
                ((PrimeTypeface *)(float)(iVar17 + iVar5),(float)(iVar13 + iVar14),lVar15,param_1,
                 &local_28,aIStack_18,0);
      FUN_05476c50(&local_28);
    }
    goto LAB_03d380ec;
  }
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pCVar6 = (Color *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),3);
  Sexy::Graphics::SetColor(param_1,pCVar6);
  if (this[0x6e] == (NewLawnButton)0x0) {
LAB_03d381e8:
    if (0.0 < *(double *)(this + 0x178)) {
      cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),this + 0x120);
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xe8),this + 0x110)
        ;
        if (cVar4 == '\0') {
LAB_03d384d0:
          dVar18 = *(double *)(this + 0x178);
        }
        else {
          dVar18 = *(double *)(this + 0x178);
          if (dVar18 < 1.0) {
            (**(code **)(*(long *)this + 0x318))
                      (this,param_1,*(undefined8 *)(this + 0xe8),this + 0x110,
                       *(undefined4 *)(this + 0x1c8),*(undefined4 *)(this + 0x1cc));
            goto LAB_03d384d0;
          }
        }
        uVar9 = *(undefined8 *)(this + 0xf8);
        uVar1 = *(undefined4 *)(this + 0x1c8);
        pcVar10 = *(code **)(*(long *)this + 0x318);
        uVar2 = *(undefined4 *)(this + 0x1cc);
        *(int *)(param_1 + 0x6c) = (int)(dVar18 * 255.0);
        (*pcVar10)(this,param_1,uVar9,this + 0x120,uVar1,uVar2);
        goto LAB_03d38280;
      }
    }
    if ((this[0x71] == (NewLawnButton)0x0) && (this[0x70] == (NewLawnButton)0x0)) {
LAB_03d3835c:
      pNVar12 = this + 0x110;
      cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xe8),pNVar12);
      if (cVar4 == '\0') goto LAB_03d38280;
      if (this[0x6e] != (NewLawnButton)0x0) {
        pCVar6 = (Color *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),4);
        Sexy::Graphics::SetColor(param_1,pCVar6);
      }
      lVar15 = *(long *)this;
      uVar9 = *(undefined8 *)(this + 0xe8);
    }
    else {
      pNVar12 = this + 0x120;
      cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0xf8),pNVar12);
      if (cVar4 == '\0') goto LAB_03d3835c;
      lVar15 = *(long *)this;
      uVar9 = *(undefined8 *)(this + 0xf8);
    }
    (**(code **)(lVar15 + 0x318))
              (this,param_1,uVar9,pNVar12,*(undefined4 *)(this + 0x1c8),
               *(undefined4 *)(this + 0x1cc));
  }
  else {
    cVar4 = (**(code **)(*(long *)this + 0x310))(this,*(undefined8 *)(this + 0x108),this + 0x140);
    if (cVar4 == '\0') goto LAB_03d381e8;
    (**(code **)(*(long *)this + 0x318))
              (this,param_1,*(undefined8 *)(this + 0x108),this + 0x140,*(undefined4 *)(this + 0x1c8)
               ,*(undefined4 *)(this + 0x1cc));
  }
LAB_03d38280:
  Sexy::Graphics::SetColorizeImages(param_1,false);
  Sexy::Color::Color((Color *)&local_28);
  if (this[0x71] == (NewLawnButton)0x0) {
    lVar15 = *(long *)(this + 0x158);
    lVar16 = *(long *)(this + 0x150);
    if (this[0x6e] == (NewLawnButton)0x0) {
      puVar8 = (ulong *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),0);
      local_28 = *puVar8;
      uStack_20 = puVar8[1];
    }
    else {
      puVar8 = (ulong *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),2);
      local_28 = *puVar8;
      uStack_20 = puVar8[1];
    }
  }
  else {
    lVar15 = *(long *)(this + 0x1b8);
    if (lVar15 == 0) {
      lVar15 = *(long *)(this + 0x158);
      lVar16 = *(long *)(this + 0x150);
    }
    else {
      lVar16 = *(long *)(this + 0x1b0);
    }
    puVar8 = (ulong *)FUN_03d37ee4(*(undefined8 *)(this + 0x78),1);
    local_28 = *puVar8;
    uStack_20 = puVar8[1];
  }
  if ((lVar15 == 0) && (lVar16 != 0)) {
    FUN_05477b24(local_30,this + 0xd8);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
    Sexy::PrimeTypeface::DrawString_Simple
              ((PrimeTypeface *)(float)iVar17,(float)iVar13,lVar16,param_1,local_30,aIStack_18,0);
    FUN_05476c50(local_30);
  }
LAB_03d380ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLawnButton::IsPointVisible(int, int) */

void __thiscall NewLawnButton::IsPointVisible(NewLawnButton *this,int param_1,int param_2)

{
  undefined1 uVar1;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1d0] == (NewLawnButton)0x0) {
    uVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  }
  else {
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)param_1,(float)param_2);
    uVar1 = TodIsPointInPolygon((SexyVector2 *)(this + 0x1d4),4,(SexyVector2 *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* NewLawnButton::~NewLawnButton() */

void __thiscall NewLawnButton::~NewLawnButton(NewLawnButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06769e10;
  Sexy::DialogButton::~DialogButton((DialogButton *)this);
  return;
}


/* NewLawnButton::~NewLawnButton() */

void __thiscall NewLawnButton::~NewLawnButton(NewLawnButton *this)

{
  ~NewLawnButton(this);
  AK::FreeHook(this);
  return;
}


/* NewLawnButton::NewLawnButton(Sexy::Image*, int, Sexy::ButtonListener*) */

void __thiscall
NewLawnButton::NewLawnButton(NewLawnButton *this,Image *param_1,int param_2,ButtonListener *param_3)

{
  NewLawnButton *pNVar1;
  NewLawnButton *this_00;
  
  Sexy::DialogButton::DialogButton((DialogButton *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_GetClass_06769e10;
  this_00 = this + 0x1d4;
  do {
    pNVar1 = this_00 + 8;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this_00)
    ;
    this_00 = pNVar1;
  } while (pNVar1 != this + 500);
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  this[0x1d0] = (NewLawnButton)0x0;
  Sexy::Widget::SetColors((Widget *)this,(int *)&DAT_06a88580,5);
  return;
}

