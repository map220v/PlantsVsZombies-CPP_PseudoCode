// Class: PlantDefenceEntranceUI


/* PlantDefenceEntranceUI::Draw(Sexy::Graphics*) */

void __thiscall PlantDefenceEntranceUI::Draw(PlantDefenceEntranceUI *this,Graphics *param_1)

{
  UI::Dialog::Draw((Dialog *)this,param_1);
  if (this[0x1d0] == (PlantDefenceEntranceUI)0x0) {
    return;
  }
  Sexy::Widget::DeferOverlay((Widget *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::TransformPointFromCamera(float, float) */

void __thiscall
PlantDefenceEntranceUI::TransformPointFromCamera
          (PlantDefenceEntranceUI *this,float param_1,float param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  lVar2 = gLawnApp;
  iVar1 = *(int *)(gLawnApp + 0xd4);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                    ::_M_root(*(_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                                **)(this + 0x138));
  local_10 = (param_1 - (float)iVar1 * 0.5) * *pfVar3 + (float)iVar1 * 0.5;
  fStack_c = (param_2 - (float)*(int *)(lVar2 + 0xd8) * 0.5) * pfVar3[1] +
             (float)*(int *)(lVar2 + 0xd8) * 0.5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,fStack_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::SetMapPathAnimationState(MapPath*, bool) */

void __thiscall
PlantDefenceEntranceUI::SetMapPathAnimationState
          (PlantDefenceEntranceUI *this,MapPath *param_1,bool param_2)

{
  PopAnimRig *pPVar1;
  float fVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_40,"beam_path_open");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    fVar2 = (float)PopAnimRig::GetCurrentFrameInAnimation(*(PopAnimRig **)(this + 0x148));
    PopAnimRig::SetCurrentFrameInAnimation(pPVar1,fVar2);
  }
  else {
    pPVar1 = *(PopAnimRig **)(param_1 + 0x18);
    std::string::string(asStack_40,"beam_path_on");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    PopAnimRig::RandomizeCurrentAnimFrame(*(PopAnimRig **)(param_1 + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::GetLayoutName() */

void __thiscall PlantDefenceEntranceUI::GetLayoutName(PlantDefenceEntranceUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PlantDefenceEntranceUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantDefenceEntranceUI::ButtonDepress(int) */

void __thiscall PlantDefenceEntranceUI::ButtonDepress(PlantDefenceEntranceUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<PlantDefenceEntranceUI>::CloseDialog();
  return;
}


/* non-virtual thunk to PlantDefenceEntranceUI::ButtonDepress(int) */

void __thiscall PlantDefenceEntranceUI::ButtonDepress(PlantDefenceEntranceUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantDefenceEntranceUI::Update() */

void __thiscall PlantDefenceEntranceUI::Update(PlantDefenceEntranceUI *this)

{
  PopAnimRig *pPVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x1d0] != (PlantDefenceEntranceUI)0x0) {
    pPVar1 = *(PopAnimRig **)(this + 0x148);
    if (pPVar1 != (PopAnimRig *)0x0) {
      fVar7 = (float)PVZ_T();
      fVar8 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar1,fVar7,fVar8);
      pPVar1 = *(PopAnimRig **)(this + 0x150);
      fVar7 = (float)PVZ_T();
      fVar8 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(pPVar1,fVar7,fVar8);
    }
    uVar6 = *(undefined8 *)(this + 0x188);
    uVar5 = 0;
    uVar2 = FUN_03af24ac(uVar6,*(undefined8 *)(this + 400));
    while (uVar4 = uVar5, uVar5 < uVar2) {
      while( true ) {
        uVar5 = uVar4 + 1;
        puVar3 = (undefined8 *)FUN_03af24b8(uVar6,uVar4);
        pPVar1 = (PopAnimRig *)*puVar3;
        if (pPVar1 == (PopAnimRig *)0x0) break;
        fVar7 = (float)PVZ_T();
        fVar8 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(pPVar1,fVar7,fVar8);
        uVar6 = *(undefined8 *)(this + 0x188);
        uVar2 = FUN_03af24ac(uVar6,*(undefined8 *)(this + 400));
        uVar4 = uVar5;
        if (uVar2 <= uVar5) {
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::drawMapPaths(Sexy::Graphics*) */

void PlantDefenceEntranceUI::drawMapPaths(Graphics *param_1)

{
  Insets *pIVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  char *pcVar9;
  long in_x1;
  undefined1 uVar10;
  ulong in_x4;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar22;
  ulong in_d1;
  undefined4 uVar23;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  FastCurve aFStack_a0 [8];
  FastCurve aFStack_98 [8];
  undefined4 local_90;
  float local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  SexyTransform2D aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  lVar4 = FUN_03af24a8(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x20));
  iVar2 = *(int *)(lVar4 + 0x3c);
  uVar12 = *(undefined8 *)(param_1 + 0x158);
  lVar4 = FUN_03af2514(uVar12,*(undefined8 *)(param_1 + 0x160));
  if (lVar4 != 0) {
    do {
      uVar11 = 0;
      while( true ) {
        puVar6 = (undefined8 *)FUN_03af2520(uVar12,uVar13);
        uVar14 = *puVar6;
        uVar7 = FUN_03af2528(uVar14,puVar6[1]);
        fVar20 = (float)in_d1;
        if (uVar7 <= uVar11) break;
        puVar8 = (ulong *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)puVar6[3]);
        local_b8 = *puVar8;
        lVar4 = FUN_03af2534(uVar14,uVar11);
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(lVar4 + 0x10));
        local_b0 = *puVar6;
        fVar16 = (float)Sexy::SexyVector2::operator-
                                  ((SexyVector2 *)&local_b0,(SexyVector2 *)&local_b8);
        local_a8 = fVar16;
        local_a4 = fVar20;
        fVar17 = (float)DVec2::getLength((DVec2 *)&local_a8);
        dVar21 = atan2((double)-fVar20,(double)fVar16);
        fVar18 = (float)FUN_03af25cc(0x42820000);
        fVar19 = (float)FUN_03af25cc(0x42bc0000);
        Sexy::FastCurve::SetOutRange(aFStack_a0,fVar18,fVar19);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,0.0,0.0);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,fVar17 * (1.0 / (float)(iVar2 / 6)),1.0)
        ;
        Sexy::SexyTransform2D::CreateTransformWithPivot
                  ((SexyTransform2D *)&local_78,(SexyVector2 *)&local_68,(float)dVar21,
                   (SexyVector2 *)aFStack_a0,(SexyVector2 *)0x1,SUB81(in_x4,0));
        puVar6 = (undefined8 *)FUN_03af2520(*(undefined8 *)(param_1 + 0x158),uVar13);
        pcVar9 = (char *)FUN_03af2534(*puVar6,uVar11);
        uVar10 = (undefined1)in_x4;
        if (*pcVar9 == '\0') {
          PopAnimRig::SetRenderTransform(*(PopAnimRig **)(pcVar9 + 0x18),aSStack_58);
          puVar6 = (undefined8 *)FUN_03af2520(*(undefined8 *)(param_1 + 0x158),uVar13);
          lVar4 = FUN_03af2534(*puVar6,uVar11);
          fVar20 = (float)FUN_03af25cc(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_03af25cc(local_b8._4_4_);
          in_d1 = (ulong)(uint)fVar16;
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x138),*(PopAnimRig **)(lVar4 + 0x18),fVar20,
                     fVar16,1.0,1.0,0.0);
        }
        else {
          fVar17 = (float)FUN_03af25cc(0x42c20000);
          Sexy::FastCurve::SetOutRange(aFStack_98,fVar17,fVar17);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,0.0,0.0);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,1.0);
          Sexy::SexyTransform2D::CreateTransformWithPivot
                    ((SexyTransform2D *)&local_78,(SexyVector2 *)&local_68,(float)dVar21,
                     (SexyVector2 *)aFStack_98,(SexyVector2 *)0x1,(bool)uVar10);
          puVar6 = (undefined8 *)FUN_03af2520(*(undefined8 *)(param_1 + 0x158),uVar13);
          lVar4 = FUN_03af2534(*puVar6,uVar11);
          uVar23 = *(undefined4 *)(lVar4 + 4);
          uVar22 = *(undefined4 *)(lVar4 + 8);
          uVar15 = PVZ_T();
          local_78 = 0;
          local_68 = 0x3f800000;
          fVar17 = CurveLerp<float>(uVar23,uVar22,uVar15,(FastCurve *)&local_78,
                                    (FastCurve *)&local_68,1);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)&local_90,(float)local_b8 + fVar16 * fVar17,
                     local_b8._4_4_ + fVar20 * fVar17);
          in_x4 = (ulong)*(uint *)(gLawnApp + 0x728);
          Sexy::Insets::Insets
                    ((Insets *)&local_88,0,0,*(int *)(gLawnApp + 0x724),*(uint *)(gLawnApp + 0x728))
          ;
          Sexy::Insets::Insets((Insets *)&local_78,(Insets *)&local_88);
          if (fVar16 < fVar20) {
            if (fVar20 < 0.0) {
              iStack_74 = (int)local_8c;
              local_7c = (int)(local_8c - *(float *)(in_x1 + 0x14));
              local_6c = (int)(((float)local_6c - local_8c) + *(float *)(in_x1 + 0x14));
            }
            else {
              iStack_84 = (int)local_8c;
              local_6c = (int)(local_8c - *(float *)(in_x1 + 0x14));
              local_7c = (int)(((float)local_7c - local_8c) + *(float *)(in_x1 + 0x14));
            }
          }
          else {
            fVar20 = (float)FUN_03af25cc(local_90);
            iVar3 = (int)(fVar20 - *(float *)(param_1 + 0x140));
            if (fVar16 < 0.0) {
              local_88 = 0;
              local_70 = local_70 - iVar3;
              local_80 = iVar3;
              local_78 = iVar3;
            }
            else {
              local_78 = 0;
              local_88 = iVar3;
              local_80 = local_80 - iVar3;
              local_70 = iVar3;
            }
          }
          pIVar1 = (Insets *)(in_x1 + 0x28);
          Sexy::Insets::Insets((Insets *)&local_68,pIVar1);
          pPVar5 = *(PopAnimRig **)(param_1 + 0x148);
          *(ulong *)pIVar1 = CONCAT44(iStack_74,local_78);
          *(ulong *)(in_x1 + 0x30) = CONCAT44(local_6c,local_70);
          PopAnimRig::SetRenderTransform(pPVar5,aSStack_58);
          fVar20 = (float)FUN_03af25cc(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_03af25cc(local_b8._4_4_);
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x138),*(PopAnimRig **)(param_1 + 0x148),fVar20,
                     fVar16,1.0,1.0,0.0);
          uVar12 = *(undefined8 *)(param_1 + 0x158);
          *(ulong *)pIVar1 = CONCAT44(iStack_84,local_88);
          *(ulong *)(in_x1 + 0x30) = CONCAT44(local_7c,local_80);
          puVar6 = (undefined8 *)FUN_03af2520(uVar12,uVar13);
          lVar4 = FUN_03af2534(*puVar6,uVar11);
          PopAnimRig::SetRenderTransform(*(PopAnimRig **)(lVar4 + 0x18),aSStack_58);
          puVar6 = (undefined8 *)FUN_03af2520(*(undefined8 *)(param_1 + 0x158),uVar13);
          lVar4 = FUN_03af2534(*puVar6,uVar11);
          fVar20 = (float)FUN_03af25cc(local_b8 & 0xffffffff);
          fVar16 = (float)FUN_03af25cc(local_b8._4_4_);
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x138),*(PopAnimRig **)(lVar4 + 0x18),fVar20,
                     fVar16,1.0,1.0,0.0);
          pPVar5 = *(PopAnimRig **)(param_1 + 0x150);
          *(ulong *)pIVar1 = CONCAT44(uStack_64,local_68);
          *(undefined8 *)(in_x1 + 0x30) = uStack_60;
          PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
          fVar20 = (float)FUN_03af25cc(local_90);
          fVar16 = (float)FUN_03af25cc(local_8c);
          in_d1 = (ulong)(uint)fVar16;
          WorldMapCamera::DrawPopAnimRig
                    (*(WorldMapCamera **)(param_1 + 0x138),*(PopAnimRig **)(param_1 + 0x150),fVar20,
                     fVar16,1.0,1.0,0.0);
        }
        uVar12 = *(undefined8 *)(param_1 + 0x158);
        uVar11 = uVar11 + 1;
      }
      uVar13 = uVar13 + 1;
      uVar11 = FUN_03af2514(uVar12,*(undefined8 *)(param_1 + 0x160));
    } while (uVar13 < uVar11);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefenceEntranceUI::GetCurTimeTravelTDay() const */

undefined8 PlantDefenceEntranceUI::GetCurTimeTravelTDay(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 != (PlayerInfo *)0x0) &&
     (uVar1 = PlayerInfo::GetLevelOfTheDayInfo(this_00,0x2993), 0 < (int)uVar1)) {
    return uVar1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantDefenceEntranceUI::TouchEnded(PlantDefenceEntranceUI *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::TouchEnded((Widget *)this,param_1);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = FUN_03af25b8(0xffffffdc);
  iVar5 = FUN_03af25b8(0xffffffde);
  iVar6 = FUN_03af25b8(0x48);
  iVar7 = FUN_03af25b8(0x3a);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar5,iVar6,iVar7);
  iVar4 = GetCurTimeTravelTDay();
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    uVar11 = *(undefined8 *)(this + 0x170);
    uVar8 = FUN_03af2508(uVar11,*(undefined8 *)(this + 0x178));
    if ((ulong)(long)iVar4 < uVar8) {
      puVar9 = (undefined8 *)FUN_03af24f8(uVar11,(long)iVar4);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar9;
      cVar3 = FUN_03af248c(this_00[0xf1]);
      if (cVar3 != '\0') {
        puVar10 = (undefined4 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_end(this_00);
        fVar12 = (float)FUN_03af25cc(*puVar10);
        fVar13 = (float)FUN_03af25cc(puVar10[1]);
        fVar12 = (float)TransformPointFromCamera(this,fVar12,fVar13);
        if (((float)local_18 + fVar12 <= (float)iVar1) &&
           ((float)iVar1 <= (float)local_18 + fVar12 + (float)local_10)) {
          if (((float)local_14 + fVar13 <= (float)iVar2) &&
             ((float)iVar2 <= (float)local_14 + fVar13 + (float)local_c)) {
            this[0x1d0] = (PlantDefenceEntranceUI)0x0;
            LawnApp::ShowPlantDefenceEntrance(gLawnApp);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::PlantDefenceEntranceUI() */

void __thiscall PlantDefenceEntranceUI::PlantDefenceEntranceUI(PlantDefenceEntranceUI *this)

{
  long lVar1;
  WorldMapCamera *this_00;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PlantDefenceEntranceUI>::UISingletonDialog
            ((UISingletonDialog<PlantDefenceEntranceUI> *)this);
  *(undefined ***)this = &PTR_GetClass_06724cc0;
  *(undefined **)(this + 0xd8) = &DAT_06725010;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x140));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  FUN_05476574(this + 0x1b8);
  Sexy::Color::Color((Color *)(this + 0x1c0),1);
  this[0x1d0] = (PlantDefenceEntranceUI)0x1;
  this_00 = ::operator_new(0x48);
  WorldMapCamera::WorldMapCamera(this_00,(Graphics *)0x0);
  *(WorldMapCamera **)(this + 0x138) = this_00;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x140) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefenceEntranceUI::DrawOverlay(Sexy::Graphics*) */

void PlantDefenceEntranceUI::DrawOverlay(Graphics *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  LotteryResultProgressBar *pLVar6;
  long lVar7;
  SalesProgressBar *pSVar8;
  RtMixedPtr *this;
  Image *pIVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  wchar16 *pwVar13;
  Graphics *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar14;
  undefined8 uVar15;
  WorldMapCamera *this_01;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  WorldMapCamera::SetGraphics(*(WorldMapCamera **)(param_1 + 0x138),in_x1);
  pwVar13 = gLawnApp;
  if (*(uint *)(gLawnApp + 0x6a) == 0xaaa) {
    pwVar13 = (wchar16 *)(ulong)*(uint *)(gLawnApp + 0x6c);
    fVar19 = 0.25;
    if (*(uint *)(gLawnApp + 0x6c) == 0x600) goto LAB_03af3058;
  }
  fVar19 = 0.4;
LAB_03af3058:
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar13,(wchar16 *)(ulong)*(uint *)(gLawnApp + 0x6a),in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    fVar19 = 0.25;
  }
  uVar14 = 0;
  while( true ) {
    uVar15 = *(undefined8 *)(param_1 + 0x1a0);
    uVar10 = FUN_03af24ec(uVar15,*(undefined8 *)(param_1 + 0x1a8));
    if (uVar10 <= uVar14) break;
    puVar11 = (undefined8 *)FUN_03af24f8(*(undefined8 *)(param_1 + 0x170),uVar14);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)*puVar11);
    fVar18 = *pfVar4;
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03af2500(uVar15,uVar14);
    pLVar6 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    fVar18 = (float)FUN_03af25cc(fVar18 - fVar19 * 0.5 * (float)iVar3);
    puVar11 = (undefined8 *)FUN_03af24f8(*(undefined8 *)(param_1 + 0x170),uVar14);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)*puVar11);
    fVar20 = *(float *)(lVar7 + 4);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03af2500(*(undefined8 *)(param_1 + 0x1a0),uVar14);
    pSVar8 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    fVar20 = (float)FUN_03af25cc(fVar20 - fVar19 * 1.45 * (float)iVar3);
    this_01 = *(WorldMapCamera **)(param_1 + 0x138);
    this = (RtMixedPtr *)FUN_03af2500(*(undefined8 *)(param_1 + 0x1a0),uVar14);
    pIVar9 = Sexy::RtMixedPtr::operator_cast_to_Image_(this);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03af2500(*(undefined8 *)(param_1 + 0x1a0),uVar14);
    pLVar6 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    fVar16 = (float)FUN_03af25cc((float)iVar3 * fVar19);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03af2500(*(undefined8 *)(param_1 + 0x1a0),uVar14);
    pSVar8 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
    fVar17 = (float)FUN_03af25cc((float)iVar3 * fVar19);
    WorldMapCamera::DrawImage(this_01,pIVar9,fVar18,fVar20,false,fVar16,fVar17);
    uVar14 = uVar14 + 1;
  }
  drawMapPaths(param_1);
  uVar14 = 0;
  while( true ) {
    uVar15 = *(undefined8 *)(param_1 + 0x170);
    uVar10 = FUN_03af2508(uVar15,*(undefined8 *)(param_1 + 0x178));
    if (uVar10 <= uVar14) break;
    puVar11 = (undefined8 *)FUN_03af24f8(uVar15,uVar14);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)*puVar11;
    sVar2 = FUN_03af249c(*(undefined2 *)(this_00 + 0xe0));
    puVar11 = (undefined8 *)FUN_03af24b8(*(undefined8 *)(param_1 + 0x188),(long)sVar2);
    puVar12 = (undefined4 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(this_00);
    fVar19 = (float)FUN_03af25cc(*puVar12);
    fVar18 = (float)FUN_03af25cc(puVar12[1]);
    WorldMapCamera::DrawPopAnimRig
              (*(WorldMapCamera **)(param_1 + 0x138),(PopAnimRig *)*puVar11,fVar19,fVar18,1.0,1.0,
               0.0);
    uVar14 = uVar14 + 1;
  }
  return;
}


/* PlantDefenceEntranceUI::purgeMapPathGroups() */

void __thiscall PlantDefenceEntranceUI::purgeMapPathGroups(PlantDefenceEntranceUI *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar7 = *(undefined8 *)(this + 0x158);
  uVar8 = 0;
  lVar1 = FUN_03af2514(uVar7,*(undefined8 *)(this + 0x160));
  if (lVar1 != 0) {
    do {
      uVar5 = 0;
      puVar2 = (undefined8 *)FUN_03af2520(uVar7,uVar8);
      uVar6 = *puVar2;
      uVar3 = FUN_03af2528(uVar6,puVar2[1]);
      if (uVar3 != 0) {
        do {
          lVar1 = FUN_03af2534(uVar6,uVar5);
          plVar4 = *(long **)(lVar1 + 0x18);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            puVar2 = (undefined8 *)FUN_03af2520(*(undefined8 *)(this + 0x158),uVar8);
            lVar1 = FUN_03af2534(*puVar2,uVar5);
            *(undefined8 *)(lVar1 + 0x18) = 0;
            uVar7 = *(undefined8 *)(this + 0x158);
            puVar2 = (undefined8 *)FUN_03af2520(uVar7,uVar8);
            uVar6 = *puVar2;
            uVar3 = FUN_03af2528(uVar6,puVar2[1]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_03af2514(uVar7,*(undefined8 *)(this + 0x160));
    } while (uVar8 < uVar5);
  }
  std::vector<MapPathGroup,std::allocator<MapPathGroup>>::clear
            ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x158));
  return;
}


/* PlantDefenceEntranceUI::~PlantDefenceEntranceUI() */

void __thiscall PlantDefenceEntranceUI::~PlantDefenceEntranceUI(PlantDefenceEntranceUI *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR_GetClass_06724cc0;
  *(undefined **)(this + 0xd8) = &DAT_06725010;
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 0x18))();
  }
  if (*(long **)(this + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x150) + 0x18))();
  }
  uVar5 = *(undefined8 *)(this + 0x188);
  uVar4 = 0;
  uVar1 = FUN_03af24ac(uVar5,*(undefined8 *)(this + 400));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      plVar2 = (long *)FUN_03af24b8(uVar5,uVar3);
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar5 = *(undefined8 *)(this + 0x188);
      uVar1 = FUN_03af24ac(uVar5,*(undefined8 *)(this + 400));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_03af3450;
    }
  }
LAB_03af3450:
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::clear
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x188));
  FUN_05476c50(this + 0x1b8);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x1a0));
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x188));
  std::vector<MapRenderItem,std::allocator<MapRenderItem>>::~vector
            ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)(this + 0x170));
  std::vector<MapPathGroup,std::allocator<MapPathGroup>>::~vector
            ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x158));
  UISingletonDialog<PlantDefenceEntranceUI>::~UISingletonDialog
            ((UISingletonDialog<PlantDefenceEntranceUI> *)this);
  return;
}


/* PlantDefenceEntranceUI::~PlantDefenceEntranceUI() */

void __thiscall PlantDefenceEntranceUI::~PlantDefenceEntranceUI(PlantDefenceEntranceUI *this)

{
  ~PlantDefenceEntranceUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::rebuildMapPathGroups(WorldData*) */

void __thiscall
PlantDefenceEntranceUI::rebuildMapPathGroups(PlantDefenceEntranceUI *this,WorldData *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  allocator *paVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  GachaConfig *this_00;
  string *psVar10;
  MapEventItem *pMVar11;
  long *plVar12;
  long lVar13;
  PopAnim *pPVar14;
  RtClass *pRVar15;
  vector<MapPath,std::allocator<MapPath>> *this_01;
  ulong uVar16;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  BarGroup aBStack_28 [16];
  MapEventItem *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (WorldData *)0x0) {
    purgeMapPathGroups(this);
    iVar3 = GetCurTimeTravelTDay();
    paVar5 = (allocator *)
             FUN_03af24c0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::vector
              ((ulong)&local_40,paVar5);
    for (uVar16 = 0; uVar8 = local_40, uVar9 = FUN_03af253c(local_40,local_38), uVar16 < uVar9;
        uVar16 = uVar16 + 1) {
      this_00 = (GachaConfig *)FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      psVar10 = (string *)
                eastl::
                hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                 *)this_00);
      cVar1 = FUN_0547419c();
      if (cVar1 == '\0') {
        uVar8 = WorldData::FindEventByName(param_1,psVar10);
        FUN_03af2470((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                      *)(this_00 + 0xd8),uVar8);
        this_00 = (GachaConfig *)FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      }
      psVar10 = (string *)PlantWarsNetworkMgr::GetPrefixWorld((PlantWarsNetworkMgr *)this_00);
      cVar1 = FUN_0547419c();
      if (cVar1 == '\0') {
        pMVar11 = (MapEventItem *)WorldData::FindEventByName(param_1,psVar10);
        MapEventItem::SetParentEventPtr((MapEventItem *)this_00,pMVar11);
        this_00 = (GachaConfig *)FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      }
      psVar10 = (string *)GachaConfig::GetGachaPlantRewardList(this_00);
      cVar1 = FUN_0547419c();
      if (cVar1 == '\0') {
        uVar8 = WorldData::FindEventByName(param_1,psVar10);
        FUN_03af2478(this_00 + 0xd0,uVar8);
        this_00 = (GachaConfig *)FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      }
      if ((int)uVar16 < iVar3) {
        FUN_03af2484(this_00 + 0xf1,1);
        if ((int)uVar16 < iVar3 + -1) {
          lVar6 = FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
          FUN_03af2550(lVar6 + 0xf2);
        }
      }
      else {
        FUN_03af2484(this_00 + 0xf1,0);
      }
      lVar6 = FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      FUN_03af24a0(lVar6 + 0xe8,param_1);
      puVar7 = (undefined8 *)FUN_03af2548(local_40,uVar16);
      uVar8 = FUN_03af24e0(*(undefined8 *)(param_1 + 0x20),uVar16);
      *puVar7 = uVar8;
    }
    puVar7 = (undefined8 *)FUN_03af2548(uVar8,(long)(iVar3 + -1));
    iVar3 = WorldMapUtils::GetIndexOfEventOnPath((MapEventItem *)*puVar7,(vector *)&local_40);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_40);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_40);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      pMVar11 = (MapEventItem *)*plVar12;
      lVar6 = FUN_03af2480(*(undefined8 *)(pMVar11 + 0xb0));
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(this + 0x158);
        uVar9 = FUN_03af2514(uVar8,*(undefined8 *)(this + 0x160));
        for (uVar16 = 0; uVar16 != uVar9; uVar16 = uVar16 + 1) {
          lVar13 = FUN_03af2520(uVar8,uVar16);
          if (lVar6 == *(long *)(lVar13 + 0x18)) {
            if ((int)uVar16 != -1) goto LAB_03af37c4;
            break;
          }
        }
        uVar16 = uVar9 & 0xffffffff;
        TriRepGenerator::PointGroup::BarGroup::BarGroup(aBStack_28);
        local_10 = FUN_03af2480(*(undefined8 *)(pMVar11 + 0xb0));
        std::vector<MapPathGroup,std::allocator<MapPathGroup>>::push_back
                  ((vector<MapPathGroup,std::allocator<MapPathGroup>> *)(this + 0x158),
                   (MapPathGroup *)aBStack_28);
        MapPathGroup::~MapPathGroup((MapPathGroup *)aBStack_28);
LAB_03af37c4:
        MapPath::MapPath((MapPath *)aBStack_28);
        local_18 = pMVar11;
        pPVar14 = (PopAnim *)FUN_03af24a8(*(undefined8 *)(*(long *)(this + 0x148) + 0x20));
        pRVar15 = (RtClass *)PopAnimRig::StaticGetClass();
        local_10 = PopAnimRig::CreateRigOutsideTable(pPVar14,pRVar15);
        iVar4 = WorldMapUtils::GetIndexOfEventOnPath(local_18,(vector *)&local_40);
        SetMapPathAnimationState(this,(MapPath *)aBStack_28,iVar4 <= iVar3);
        this_01 = (vector<MapPath,std::allocator<MapPath>> *)
                  FUN_03af2520(*(undefined8 *)(this + 0x158),(long)(int)uVar16);
        std::vector<MapPath,std::allocator<MapPath>>::push_back(this_01,(MapPath *)aBStack_28);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::loadData() */

void __thiscall PlantDefenceEntranceUI::loadData(PlantDefenceEntranceUI *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  WorldData *pWVar5;
  ulong uVar6;
  AsyncTaskQueue *this_00;
  PopAnim *pPVar7;
  EffectAnimRig_LevelNode *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string *extraout_x1;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Sexy aSStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  string asStack_48 [8];
  EffectAnimRig_LevelNode *local_40;
  undefined8 uStack_38;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  std::string::string((string *)&local_40,"chrismas");
  pWVar5 = (WorldData *)WorldMapUtils::LoadSerializedMapData((string *)&local_40,0);
  std::string::~string((string *)&local_40);
  nop();
  rebuildMapPathGroups(this,pWVar5);
  while( true ) {
    uVar8 = *(undefined8 *)(pWVar5 + 0x20);
    uVar6 = FUN_03af24c0(uVar8,*(undefined8 *)(pWVar5 + 0x28));
    if (uVar6 <= uVar9) break;
    this_00 = (AsyncTaskQueue *)FUN_03af24e0(uVar8,uVar9);
    uVar2 = FUN_03af24ac(*(undefined8 *)(this + 0x188),*(undefined8 *)(this + 400));
    FUN_03af2494(this_00 + 0xe0,uVar2);
    CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ac9ad0);
    iVar3 = FUN_03af246c(*(undefined4 *)(this_00 + 0x78));
    if (iVar3 == 3) {
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ac9aa8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_60,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    pPVar7 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    this_01 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_LevelNode>(pPVar7);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,1.0,1.0);
    fVar10 = (float)FUN_03af25cc(0x42c40000);
    fVar11 = (float)FUN_03af25cc(0x42d00000);
    FUN_03af2450(-fVar10,-fVar11,auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform((PopAnimRig *)this_01,aSStack_30);
    cVar1 = FUN_03af2490(this_00[0xf2]);
    if (cVar1 == '\0') {
      cVar1 = FUN_03af248c(this_00[0xf1]);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this_01 + 0x118))(this_01);
      }
      else {
        (**(code **)(*(long *)this_01 + 0x128))(this_01);
      }
    }
    else {
      (**(code **)(*(long *)this_01 + 0x138))(this_01);
    }
    fVar10 = (float)PVZ_T();
    uVar9 = uVar9 + 1;
    fVar11 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this_01,fVar10,fVar11);
    local_40 = this_01;
    std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
              ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0x188),
               (PopAnimRig **)&local_40);
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                       *)&local_40,(rbtree_node *)this_00);
    std::vector<MapRenderItem,std::allocator<MapRenderItem>>::push_back
              ((vector<MapRenderItem,std::allocator<MapRenderItem>> *)(this + 0x170),
               (string *)&local_40);
    uVar8 = Sexy::AsyncTaskQueue::GetTasks(this_00);
    FUN_05475d88(aSStack_58,uVar8);
    Sexy::StringToUpper(aSStack_58,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_48);
    GetImageByName((string *)&local_40);
    std::string::~string((string *)&local_40);
    std::string::~string(asStack_48);
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x1a0),aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    std::string::~string((string *)aSStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if (this_03 != (PlayerInfo *)0x0) {
    uVar4 = PlayerInfo::GetLevelOfTheDayRemainDays(this_03,0x2993);
    if ((int)uVar4 < 1) {
      Sexy::StrFormat(L"0",(string *)&local_40,(ulong)uVar4);
      FUN_054766c8(this + 0x1b8,(string *)&local_40);
      FUN_05476c50((string *)&local_40);
      Sexy::Color::Color((Color *)&local_40,2);
      *(EffectAnimRig_LevelNode **)(this + 0x1c0) = local_40;
      *(undefined8 *)(this + 0x1c8) = uStack_38;
    }
    else {
      Sexy::StrFormat(L"%d",(string *)&local_40,(ulong)uVar4);
      FUN_054766c8(this + 0x1b8,(string *)&local_40);
      FUN_05476c50((string *)&local_40);
      Sexy::Color::Color((Color *)&local_40,1);
      *(EffectAnimRig_LevelNode **)(this + 0x1c0) = local_40;
      *(undefined8 *)(this + 0x1c8) = uStack_38;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceEntranceUI::OnCreate() */

void PlantDefenceEntranceUI::OnCreate(void)

{
  char cVar1;
  int iVar2;
  Dialog *in_x0;
  long *plVar3;
  PopAnim *pPVar4;
  RtClass *pRVar5;
  PopAnimRig *pPVar6;
  UIWidgetText *pUVar7;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string *psVar8;
  undefined1 auVar9 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar9 = UI::Dialog::OnCreate(in_x0);
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar9._0_8_,auVar9._8_8_,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_03af25dc(100);
    *(int *)(in_x0 + 0x48) = *(int *)(in_x0 + 0x48) + iVar2;
    iVar2 = FUN_03af25dc(100);
    *(int *)(in_x0 + 0x90) = *(int *)(in_x0 + 0x90) - iVar2;
    WorldMapCamera::SetCameraScale(*(WorldMapCamera **)(in_x0 + 0x138),1.0,1.0);
  }
  else {
    iVar2 = FUN_03af25dc(0x3c);
    *(int *)(in_x0 + 0x48) = *(int *)(in_x0 + 0x48) - iVar2;
    iVar2 = FUN_03af25dc(0x3c);
    *(int *)(in_x0 + 0x90) = *(int *)(in_x0 + 0x90) - iVar2;
    iVar2 = FUN_03af25dc(100);
    *(int *)(in_x0 + 0x50) = *(int *)(in_x0 + 0x50) + iVar2;
    WorldMapCamera::SetCameraScale(*(WorldMapCamera **)(in_x0 + 0x138),0.9,0.9);
  }
  std::string::string(asStack_40,"Background_0");
  plVar3 = (long *)UI::Dialog::GetWidget(in_x0,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x90))(plVar3,1);
  }
  std::string::string(asStack_40,"UIImage_1");
  plVar3 = (long *)UI::Dialog::GetWidget(in_x0,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x90))(plVar3,1);
  }
  WorldMapCamera::SetCameraCenter
            (*(WorldMapCamera **)(in_x0 + 0x138),(float)*(int *)(gLawnApp + 0xd4) * 0.5,
             (float)*(int *)(gLawnApp + 0xd8) * 0.5);
  psVar8 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_40,"POPANIM_WORLDMAP_MAP_PATH");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar8,SUB81(asStack_40,0));
  std::string::~string(asStack_40);
  nop();
  pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar6 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar4,pRVar5);
  *(PopAnimRig **)(in_x0 + 0x148) = pPVar6;
  std::string::string(asStack_40,"beam_path_open");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar6 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar4,pRVar5);
  *(PopAnimRig **)(in_x0 + 0x150) = pPVar6;
  std::string::string(asStack_40,"beam_roll");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  loadData((PlantDefenceEntranceUI *)in_x0);
  std::string::string(asStack_40,"UIText_1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_40);
  std::string::~string(asStack_40);
  nop();
  PuzzleTip::SetTip(pUVar7,in_x0 + 0x1b8);
  (**(code **)(*(long *)pUVar7 + 0x170))(pUVar7,0,in_x0 + 0x1c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

