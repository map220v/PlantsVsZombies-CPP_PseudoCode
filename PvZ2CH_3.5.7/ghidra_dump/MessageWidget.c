// Class: MessageWidget


/* MessageWidget::Clear() */

void __thiscall MessageWidget::Clear(MessageWidget *this)

{
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* MessageWidget::MessageWidget() */

void __thiscall MessageWidget::MessageWidget(MessageWidget *this)

{
  MessageWidget *pMVar1;
  Renderable *in_x1;
  _func_void *extraout_x1;
  _func_void *p_Var2;
  _func_void *extraout_x1_00;
  MessageWidget *this_00;
  
  Renderable::Renderable((Renderable *)this,in_x1);
  *(undefined ***)this = &PTR__MessageWidget_067923a0;
  p_Var2 = extraout_x1;
  this_00 = this + 0x218;
  do {
    pMVar1 = this_00 + 8;
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)this_00,p_Var2);
    p_Var2 = extraout_x1_00;
    this_00 = pMVar1;
  } while (pMVar1 != this + 0x618);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x618) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  return;
}


/* MessageWidget::clearPAMs() */

void __thiscall MessageWidget::clearPAMs(MessageWidget *this)

{
  long *plVar1;
  MessageWidget *pMVar2;
  MessageWidget *pMVar3;
  
  if (*(int *)(this + 0x210) == 0x19) {
    pMVar3 = this + 0x218;
    do {
      plVar1 = *(long **)pMVar3;
      if (plVar1 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1);
      pMVar2 = pMVar3 + 8;
      *(undefined8 *)pMVar3 = 0;
      pMVar3 = pMVar2;
    } while (pMVar2 != this + 0x618);
  }
  return;
}


/* MessageWidget::~MessageWidget() */

void __thiscall MessageWidget::~MessageWidget(MessageWidget *this)

{
  *(undefined ***)this = &PTR__MessageWidget_067923a0;
  clearPAMs(this);
  if (*(long **)(this + 0x618) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x618) + 0x18))();
  }
  return;
}


/* MessageWidget::~MessageWidget() */

void __thiscall MessageWidget::~MessageWidget(MessageWidget *this)

{
  ~MessageWidget(this);
  AK::FreeHook(this);
  return;
}


/* MessageWidget::clearLabel() */

void __thiscall MessageWidget::clearLabel(MessageWidget *this)

{
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* MessageWidget::getFont() */

undefined8 __thiscall MessageWidget::getFont(MessageWidget *this)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(this + 0x210)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x1d:
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    return uVar1;
  case 0x10:
  case 0x1a:
  case 0x1b:
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_42_HardShadow);
    return uVar1;
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1c:
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZKaTong_42_BlackOutline)
    ;
    return uVar1;
  case 0x12:
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    return uVar1;
  default:
    return 0;
  }
}


/* MessageWidget::GetRenderLayer() */

undefined8 MessageWidget::GetRenderLayer(void)

{
  return 800000;
}


/* MessageWidget::IsBeingDisplayed() */

bool __thiscall MessageWidget::IsBeingDisplayed(MessageWidget *this)

{
  return *(float *)(this + 0x20c) != 0.0;
}


/* MessageWidget::Update() */

void __thiscall MessageWidget::Update(MessageWidget *this)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  
  if (*(int *)(this + 0x210) == 0x19) {
    uVar3 = 0;
    sVar2 = wcslen((wchar_t *)(this + 8));
    do {
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      this_00 = *(PopAnimRig **)(this + lVar1 + 0x218);
      if (this_00 != (PopAnimRig *)0x0) {
        fVar4 = (float)PVZ_T();
        fVar5 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(this_00,fVar4,fVar5);
      }
    } while (uVar3 <= sVar2);
  }
  if ((0.0 < *(float *)(this + 0x20c)) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x208) < fVar4)
     ) {
    *(undefined4 *)(this + 0x210) = 0;
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    *(undefined4 *)(this + 0x20c) = 0;
    return;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03ea9a8c */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* MessageWidget::Draw(Sexy::Graphics*) */

void __thiscall MessageWidget::Draw(MessageWidget *this,Graphics *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PrimeTypeface *this_00;
  PrimeTextWidget *this_01;
  PrimeText_PotentialText *pPVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auStack_60 [4];
  int local_5c [3];
  undefined1 auStack_50 [8];
  Insets local_48 [8];
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x20c) <= 0.0) || (*(int *)(this + 0x210) == 0)) goto LAB_03ea9538;
  this_00 = (PrimeTypeface *)getFont(this);
  uVar3 = FUN_03ea9240(*(int *)(gLawnApp + 0xd4) / 2);
  local_5c[0] = 0xff;
  Sexy::Insets::Insets(local_48,0xfa,0xfa,0,0xff);
  local_5c[1] = 0x3f800000;
  local_5c[2] = 0x3f800000;
  fVar16 = *(float *)(this + 0x20c);
  switch(*(undefined4 *)(this + 0x210)) {
  case 1:
  case 2:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x15:
    uVar12 = 400;
    goto LAB_03ea977c;
  case 3:
  case 4:
  case 5:
    uVar12 = 0x1dc;
    goto LAB_03ea977c;
  case 6:
  case 7:
  case 8:
    uVar12 = 0x1ab;
    goto LAB_03ea977c;
  case 0xd:
  case 0xe:
  case 0xf:
    uVar12 = 300;
    goto LAB_03ea977c;
  case 0x10:
    bVar1 = true;
    bVar2 = false;
    uVar12 = 0x226;
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,0xff);
    uStack_40 = uStack_10;
    break;
  case 0x11:
  case 0x18:
    bVar2 = true;
    uVar12 = 300;
    local_5c[2] = 0x40600000;
    Sexy::Color::Color((Color *)&local_18,0xff,0,0);
    bVar1 = false;
    fVar16 = 0.5;
    uStack_40 = uStack_10;
    break;
  case 0x12:
    uVar13 = 0;
    local_5c[0] = 0x40;
    uVar12 = 0x5d;
    uVar3 = 0x154;
    goto LAB_03ea9790;
  case 0x13:
    uVar12 = 0x202;
    goto LAB_03ea977c;
  case 0x16:
    bVar1 = false;
    bVar2 = true;
    uVar12 = 300;
    local_5c[2] = 0x3f4ccccd;
    Sexy::Color::Color((Color *)&local_18,0xff,0,0);
    uStack_40 = uStack_10;
    break;
  case 0x17:
    bVar1 = false;
    bVar2 = true;
    uVar12 = 300;
    local_5c[2] = 0x3fa66666;
    local_5c[1] = 0x3fa66666;
    Sexy::Color::Color((Color *)&local_18,0xff,0,0);
    uStack_40 = uStack_10;
    break;
  default:
    bVar2 = false;
    uVar12 = 0x254;
    bVar1 = false;
    break;
  case 0x1a:
  case 0x1b:
    bVar1 = true;
    bVar2 = false;
    uVar12 = 0xdc;
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,0xff);
    uStack_40 = uStack_10;
    break;
  case 0x1c:
    bVar2 = true;
    uVar12 = 0x60;
    local_5c[2] = 0x40200000;
    Sexy::Color::Color((Color *)&local_18,0xff,0xef,0);
    uStack_40 = uStack_10;
    bVar1 = false;
    fVar16 = 0.5;
    break;
  case 0x1d:
    uVar12 = 0xe3;
LAB_03ea977c:
    uVar13 = 0x6e;
    Sexy::Color::Color((Color *)&local_18,0xfd,0xf5,0xad);
    local_5c[0] = 0xc0;
    uStack_40 = uStack_10;
LAB_03ea9790:
    bVar2 = false;
    bVar1 = false;
    iVar4 = FUN_03ea922c(uVar3);
    iVar5 = FUN_03ea922c(uVar12);
    iVar6 = FUN_03ea922c(uVar13);
    goto LAB_03ea97bc;
  }
  iVar4 = FUN_03ea922c(uVar3);
  iVar5 = FUN_03ea922c(uVar12);
  iVar6 = FUN_03ea922c(0);
  if (local_5c[0] != 0xff) {
LAB_03ea97bc:
    fVar14 = (float)PVZ_T();
    fVar14 = fmodf(fVar14,0.75);
    local_18 = 0xff;
    iVar7 = CurveLerp<int>(0,0x3f400000,fVar14,local_5c,&local_18,10);
    uStack_40 = CONCAT44(iVar7,(undefined4)uStack_40);
  }
  if (bVar1) {
    fVar14 = *(float *)(this + 0x208);
    uVar3 = PVZ_T();
    local_18 = 0;
    local_28[0] = 0xff;
    iVar7 = CurveLerp<int>(fVar14 - 0.5,fVar14,uVar3,local_28,(Insets *)&local_18,1);
    uStack_40 = CONCAT44(iVar7,(undefined4)uStack_40);
  }
  Sexy::Insets::Insets((Insets *)&local_38);
  if (iVar6 < 1) {
    if (bVar2) {
      iVar6 = *(int *)(gLawnApp + 0xd4);
      fVar14 = (float)Sexy::PrimeTypeface::GetAscent(this_00);
      Sexy::Insets::Insets((Insets *)&local_18,iVar6 / 2 - iVar4,iVar5,iVar6,(int)fVar14);
      local_38 = CONCAT44(uStack_14,local_18);
      uStack_30 = uStack_10;
      goto LAB_03ea9a5c;
    }
    fVar16 = 1.0;
    iVar6 = *(int *)(gLawnApp + 0xd4);
    fVar14 = (float)Sexy::PrimeTypeface::GetAscent(this_00);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar6 / 2 - iVar4,(int)((float)iVar5 - fVar14 * 0.5),
               *(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    local_38 = CONCAT44(uStack_14,local_18);
    uStack_30 = uStack_10;
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_03ea922c(0x1e);
    iVar7 = FUN_03ea922c(0x3c);
    Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar5,*(int *)(gLawnApp + 0xd4) - iVar7,iVar6);
    local_38 = CONCAT44(uStack_14,local_18);
    uStack_30 = uStack_10;
    Sexy::Insets::Insets((Insets *)local_28,0,iVar5,*(int *)(gLawnApp + 0xd4),iVar6);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::FillRect(param_1,(TRect *)local_28);
    if (bVar2) {
LAB_03ea9a5c:
      fVar14 = *(float *)(this + 0x208);
      uVar3 = 1;
      fVar17 = *(float *)(this + 0x20c);
      auVar15 = PVZ_T();
      fVar16 = CurveLerp<float>(auVar15,fVar16 + (fVar14 - fVar17),auVar15._0_4_,local_5c + 2,
                                local_5c + 1,1);
    }
    else {
      uVar3 = 1;
      fVar16 = 1.0;
    }
  }
  this_01 = *(PrimeTextWidget **)(this + 0x618);
  if (this_01 == (PrimeTextWidget *)0x0) {
    Sexy::Insets::Insets((Insets *)local_28,(Insets *)&local_38);
    FUN_05478178(auStack_50,this + 8,auStack_60);
    Sexy::Insets::Insets((Insets *)&local_18,local_48);
    pPVar8 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       (this_00,(Insets *)local_28,auStack_50,1,uVar3,(Insets *)&local_18);
    FUN_05476c50(auStack_50);
    nop();
    this_01 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_01,pPVar8);
    *(PrimeTextWidget **)(this + 0x618) = this_01;
  }
  Sexy::PrimeTextWidget::SetPosition(this_01,(int)local_38,local_38._4_4_);
  if (bVar2) {
    Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x618),fVar16,fVar16);
  }
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_18,param_1);
  plVar9 = *(long **)(this + 0x618);
  lVar10 = *plVar9;
  *(undefined4 *)(param_1 + 0x10) = 0;
  pcVar11 = *(code **)(lVar10 + 0x128);
  *(undefined4 *)(param_1 + 0x14) = 0;
  (*pcVar11)(plVar9,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_18);
LAB_03ea9538:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MessageWidget::layoutReanimText() */

void __thiscall MessageWidget::layoutReanimText(MessageWidget *this)

{
  int iVar1;
  int iVar2;
  PrimeTypeface *this_00;
  size_t sVar3;
  float *pfVar4;
  PopAnim *pPVar5;
  RtClass *pRVar6;
  undefined8 uVar7;
  MessageWidget *pMVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  PopAnimRig *pPVar13;
  size_t sVar14;
  MessageWidget *__s;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_ac;
  float local_9c;
  string asStack_98 [8];
  float local_90 [6];
  undefined1 auStack_78 [24];
  SexyTransform2D aSStack_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [20];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = this + 8;
  local_9c = 0.0;
  local_90[4] = 0.0;
  local_90[0] = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  local_90[3] = 0.0;
  this_00 = (PrimeTypeface *)getFont(this);
  uVar9 = 0;
  iVar11 = 0;
  sVar3 = wcslen((wchar_t *)__s);
  pMVar8 = __s;
  iVar2 = 0;
  iVar10 = 1;
  do {
    while ((iVar1 = (int)uVar9, sVar3 == uVar9 || (*(wchar_t *)pMVar8 == L'\n'))) {
      lVar12 = (long)iVar11;
      uVar9 = uVar9 + 1;
      pMVar8 = pMVar8 + 4;
      FUN_05477edc(asStack_98,this + (long)iVar2 * 4 + 8,(long)(iVar1 - iVar2),auStack_78);
      nop();
      FUN_05477b24(auStack_78,asStack_98);
      iVar2 = Sexy::PrimeTypeface::SizeString_Line(this_00,auStack_78);
      local_90[iVar11] = (float)iVar2;
      FUN_05476c50(auStack_78);
      iVar11 = iVar11 + 1;
      pfVar4 = eastl::max_alt<float>(&local_9c,local_90 + lVar12);
      local_9c = *pfVar4;
      FUN_05476c50(asStack_98);
      iVar2 = iVar10;
      iVar10 = iVar10 + 1;
      if (sVar3 < uVar9) goto LAB_03ea9e00;
    }
    uVar9 = uVar9 + 1;
    iVar10 = iVar10 + 1;
    pMVar8 = pMVar8 + 4;
  } while (uVar9 <= sVar3);
LAB_03ea9e00:
  fVar18 = -(local_90[0] * 0.5);
  if (sVar3 != 0) {
    sVar14 = 0;
    fVar19 = 0.0;
    local_ac = 0;
    pMVar8 = this + 0x218;
    do {
      while( true ) {
        pPVar5 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ae10e0);
        pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
        uVar7 = PopAnimRig::CreateRigOutsideTable(pPVar5,pRVar6);
        *(undefined8 *)pMVar8 = uVar7;
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_60);
        Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_60);
        uVar15 = FUN_03ea921c(fVar18);
        uVar16 = FUN_03ea921c(fVar19);
        FUN_03ea918c(uVar15,uVar16,auStack_58,auStack_4c);
        PopAnimRig::SetRenderTransform(*(PopAnimRig **)pMVar8,aSStack_60);
        pPVar13 = *(PopAnimRig **)pMVar8;
        std::string::string(asStack_98,"animation");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)pMVar8,LetterPopAnimTracker::onAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<LetterPopAnimTracker,void(LetterPopAnimTracker::*)(std::string_const&)>
                  (aDStack_38,auStack_78);
        PopAnimRig::PlayAndStop(pPVar13,asStack_98,0,aDStack_38);
        std::string::~string(asStack_98);
        nop();
        fVar17 = (float)Sexy::PrimeTypeface::GetCharWidthKern((wchar_t)this_00,*(wchar_t *)__s);
        fVar18 = fVar18 + fVar17;
        if (*(wchar_t *)__s != L'\n') break;
        sVar14 = sVar14 + 1;
        pMVar8 = pMVar8 + 8;
        local_ac = local_ac + 1;
        __s = __s + 4;
        fVar18 = -(local_90[local_ac] * 0.5);
        fVar17 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
        fVar19 = fVar19 + fVar17;
        if (sVar14 == sVar3) goto LAB_03ea9f90;
      }
      sVar14 = sVar14 + 1;
      pMVar8 = pMVar8 + 8;
      __s = __s + 4;
    } while (sVar14 != sVar3);
  }
LAB_03ea9f90:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MessageWidget::SetLabel(std::wstring const&, MessageStyle) */

void __thiscall MessageWidget::SetLabel(MessageWidget *this,wstring *param_1,uint param_3)

{
  long lVar1;
  wchar_t *__src;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)(this + 0x210) = param_3;
  if (param_3 == 0) goto LAB_03eaa014;
  clearPAMs(this);
  TodStringTranslate(param_1);
  __src = (wchar_t *)FUN_054766ec(auStack_30);
  wcscpy((wchar_t *)(this + 8),__src);
  if (((param_3 == 6) || (param_3 == 0x13)) || (param_3 - 0xc < 2)) {
    *(undefined4 *)(this + 0x20c) = 0x41700000;
  }
  else if ((((param_3 - 7 & 0xfffffffb) == 0) || (param_3 == 0xe)) ||
          (((param_3 & 0xfffffff7) == 1 || ((param_3 - 3 < 2 || (param_3 == 0x14)))))) {
LAB_03eaa1ac:
    *(undefined4 *)(this + 0x20c) = 0x40a00000;
  }
  else if ((param_3 == 8) ||
          ((((param_3 == 0x1d || (param_3 == 0xf)) || ((param_3 & 0xfffffff7) == 2)) ||
           ((param_3 & 0xffffffef) == 5)))) {
    fVar6 = (float)PVZ_EOT();
    fVar7 = (float)PVZ_T();
    *(float *)(this + 0x20c) = fVar6 - fVar7;
  }
  else {
    if (param_3 == 0x10) goto LAB_03eaa1ac;
    if (param_3 == 0x1a) {
LAB_03eaa1a0:
      *(undefined4 *)(this + 0x20c) = 0x3fc00000;
    }
    else {
      if (param_3 == 0x1b) goto LAB_03eaa1ac;
      if (param_3 == 0x11) {
LAB_03eaa29c:
        *(undefined4 *)(this + 0x20c) = 0x40f00000;
      }
      else if (param_3 == 0x16) {
        *(undefined4 *)(this + 0x20c) = 0x3f000000;
      }
      else if (param_3 == 0x17) {
        *(undefined4 *)(this + 0x20c) = 0x3f51eb85;
      }
      else if (param_3 == 0x18) {
        *(undefined4 *)(this + 0x20c) = 0x3fe66666;
      }
      else {
        if (param_3 == 0x12) goto LAB_03eaa29c;
        if (param_3 == 0x19) {
          *(undefined4 *)(this + 0x20c) = 0x40f00000;
          layoutReanimText(this);
        }
        else if (param_3 == 0x1c) goto LAB_03eaa1a0;
      }
    }
  }
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x208) = fVar6 + *(float *)(this + 0x20c);
  if ((*(int *)(this + 0x210) == 0x19) && (sVar2 = wcslen((wchar_t *)(this + 8)), sVar2 != 0)) {
    sVar3 = 0;
    do {
      lVar1 = sVar3 * 8;
      sVar3 = sVar3 + 1;
      plVar4 = *(long **)(this + lVar1 + 0x218);
      pcVar5 = *(code **)(*plVar4 + 0x78);
      std::string::string(asStack_28,"animation_off");
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      (*pcVar5)(plVar4,asStack_28,0,0,avStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      std::string::~string(asStack_28);
      nop();
    } while (sVar3 != sVar2);
  }
  if (*(long **)(this + 0x618) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x618) + 0x18))();
    *(undefined8 *)(this + 0x618) = 0;
  }
  FUN_05476c50(auStack_30);
LAB_03eaa014:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MessageWidget::SetLabel(std::wstring const&, MessageStyle, float) */

void __thiscall
MessageWidget::SetLabel(float param_1_00,MessageWidget *this,wstring *param_1,int param_4)

{
  long lVar1;
  wchar_t *__src;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x210) = param_4;
  if (param_4 != 0) {
    clearPAMs(this);
    TodStringTranslate(param_1);
    __src = (wchar_t *)FUN_054766ec(auStack_30);
    wcscpy((wchar_t *)(this + 8),__src);
    *(float *)(this + 0x20c) = param_1_00;
    if (param_4 == 0x19) {
      layoutReanimText(this);
      param_1_00 = *(float *)(this + 0x20c);
    }
    fVar6 = (float)PVZ_EOT();
    if (fVar6 != param_1_00) {
      fVar6 = (float)PVZ_T();
      fVar6 = fVar6 + *(float *)(this + 0x20c);
    }
    *(float *)(this + 0x208) = fVar6;
    if ((*(int *)(this + 0x210) == 0x19) && (sVar2 = wcslen((wchar_t *)(this + 8)), sVar2 != 0)) {
      sVar3 = 0;
      do {
        lVar1 = sVar3 * 8;
        sVar3 = sVar3 + 1;
        plVar4 = *(long **)(this + lVar1 + 0x218);
        pcVar5 = *(code **)(*plVar4 + 0x78);
        std::string::string(asStack_28,"animation_off");
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
        (*pcVar5)(plVar4,asStack_28,0,0,avStack_20);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20)
        ;
        std::string::~string(asStack_28);
        nop();
      } while (sVar3 != sVar2);
    }
    if (*(long **)(this + 0x618) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x618) + 0x18))();
      *(undefined8 *)(this + 0x618) = 0;
    }
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

