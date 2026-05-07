// Class: ZombiePumpkinKnightGhost


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::onDraw(Sexy::Graphics*) */

void ZombiePumpkinKnightGhost::onDraw(Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PopAnimRig *pPVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  SexyVector3 *pSVar10;
  ResourceInfo *pRVar11;
  wchar16 *pwVar12;
  ZombieGum *pZVar13;
  float *pfVar14;
  int *piVar15;
  ulong uVar16;
  Graphics *in_x1;
  LineBreakCategory *pLVar17;
  SexyMatrix3 *in_x3;
  LineBreakCategory *in_x4;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iStack_e4;
  int aiStack_e0 [3];
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulong auStack_c0 [2];
  uint uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  SexyTransform2D aSStack_a0 [8];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [20];
  SexyMatrix3 aSStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_64;
  Transform aTStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar4 = FUN_045b5db4(*(undefined4 *)(param_1 + 0x28));
  if ((uVar4 & 0xff) == 0) {
    lVar20 = *(long *)(param_1 + 0x550);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_a0,true);
    Sexy::SexyTransform2D::Scale(aSStack_a0,*(float *)(in_x1 + 0x18),*(float *)(in_x1 + 0x1c));
    cVar1 = Zombie::isInState((Zombie *)param_1,8);
    if (cVar1 == '\0') {
      if (*(float *)(param_1 + 0x36c) == 0.0) {
        if (param_1[0x7e8] == (Graphics)0x0) {
          fVar26 = *(float *)(in_x1 + 0x18);
          fVar21 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
          uVar22 = FUN_045b4a48(-(*(float *)(lVar20 + 0xc4) * fVar26) * fVar21);
          fVar21 = (float)FUN_045b4a48(*(float *)(lVar20 + 200) * *(float *)(in_x1 + 0x1c));
          FUN_045b30b8(uVar22,-fVar21,auStack_98,auStack_8c);
        }
        else {
          Sexy::SexyTransform2D::Scale
                    (aSStack_a0,*(float *)(in_x1 + 0x18),*(float *)(in_x1 + 0x1c) * 0.4);
          fVar26 = *(float *)(in_x1 + 0x18);
          fVar21 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
          uVar22 = FUN_045b4a48(-(*(float *)(lVar20 + 0xc4) * fVar26) * fVar21);
          fVar21 = (float)FUN_045b4a48(*(float *)(in_x1 + 0x1c) * *(float *)(lVar20 + 200) * 0.4);
          FUN_045b30b8(uVar22,-fVar21,auStack_98,auStack_8c);
        }
      }
      else {
        in_x3 = *(SexyMatrix3 **)(*(long *)param_1 + 0x860);
        (*(code *)in_x3)(param_1);
      }
    }
    else {
      fVar21 = *(float *)(param_1 + 0x330);
      iStack_e4 = 10;
      uVar22 = PVZ_T();
      uStack_b0 = uVar4 & 0xff;
      aiStack_e0[0] = CurveLerp<int>(fVar21,fVar21 + 0.33,uVar22,(string *)&uStack_b0,&iStack_e4,1);
      uStack_b0 = iStack_e4 + -1;
      piVar15 = eastl::min_alt<int>(aiStack_e0,(int *)&uStack_b0);
      iVar5 = *piVar15;
      Sexy::SexyMatrix3::LoadIdentity(aSStack_78);
      std::string::string((string *)&uStack_d0,"POPANIM_EFFECTS_MOWER_ZOMBIE_HIT");
      GetPAMByName((string *)&uStack_d0);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)auStack_c0);
      std::string::string((string *)&uStack_b0,"zombie_transform");
      in_x4 = (LineBreakCategory *)0x0;
      in_x3 = aSStack_78;
      PopAnimRig::GetTransformFromPAM(pRVar11,(string *)&uStack_b0,iVar5);
      std::string::~string((string *)&uStack_b0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_c0);
      std::string::~string((string *)&uStack_d0);
      nop();
      uStack_70 = 0;
      uStack_64 = 0;
      fVar21 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
      fVar21 = (float)FUN_045b4a48(fVar21 * (*(float *)(lVar20 + 0xc4) + 30.0));
      fVar26 = (float)FUN_045b4a48(*(undefined4 *)(lVar20 + 200));
      FUN_045b30b8(-fVar21,-fVar26,auStack_98,auStack_8c);
      Sexy::SexyMatrix3::operator*(aSStack_78,(SexyMatrix3 *)aSStack_a0);
      Sexy::SexyTransform2D::operator=(aSStack_a0,(SexyMatrix3 *)aTStack_50);
      fVar21 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
      uVar19 = FUN_045b4a48(fVar21 * 30.0);
      FUN_045b30b8(uVar19,0,auStack_98,auStack_8c);
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1d0);
    (**(code **)(*(long *)param_1 + 0xf8))(param_1);
    Sexy::Graphics::PushState(in_x1);
    uVar18 = (ulong)*(uint *)(param_1 + 0x1c);
    uVar22 = FUN_045b455c(*(undefined4 *)(param_1 + 0x18),uVar18,*(undefined4 *)(param_1 + 0x20));
    fVar21 = (float)FUN_045b4a48(uVar22);
    fVar27 = *(float *)(in_x1 + 0x20);
    fVar26 = (float)FUN_045b4a48(uVar18 & 0xffffffff);
    Sexy::Graphics::Translate
              (in_x1,(int)(fVar27 + *(float *)(in_x1 + 0x18) * (fVar21 - fVar27)),
               (int)(*(float *)(in_x1 + 0x24) +
                    *(float *)(in_x1 + 0x1c) * (fVar26 - *(float *)(in_x1 + 0x24))));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    PopAnimRig::GetPAMColor();
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(param_1 + 0xcc),0x40000);
    if (bVar2) {
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetPAMColor(pPVar9,(Color *)(param_1 + 0x50c));
    }
    cVar1 = Zombie::HasCondition(param_1,0x90);
    if (cVar1 != '\0') {
      in_x4 = (LineBreakCategory *)0xff;
      Sexy::Insets::Insets((Insets *)&uStack_d0,0x48,0xe6,0xea,0xff);
      Sexy::Insets::Insets((Insets *)auStack_c0,(Insets *)aiStack_e0);
      Sexy::Color::operator*((Color *)auStack_c0,(Color *)&uStack_d0);
      auStack_c0[0] = CONCAT44(fStack_ac,uStack_b0);
      in_x3 = (SexyMatrix3 *)CONCAT44(iStack_a4,uStack_a8);
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetPAMColor(pPVar9,(Color *)auStack_c0);
    }
    this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)(param_1 + 0x398);
    EntityConditionTracker<Creature,CreatureConditions>::SetDirty(this_00);
    bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(param_1 + 0xcc),0x2000000);
    bVar3 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(this_00,8);
    if (bVar2 < bVar3) {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor();
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetShaderOverrideColor(pPVar9,(Color *)&uStack_b0);
    }
    else {
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::ClearShaderOverrideColor(pPVar9);
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag(this_00,0x10);
    if ((((cVar1 == '\0') || (cVar1 = Zombie::IsInvisible((Zombie *)param_1), cVar1 != '\0')) ||
        (bVar2)) || (param_1[0x57c] != (Graphics)0x0)) {
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::ClearMultiplicativeOverlayColor(pPVar9);
    }
    else {
      EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor();
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetMultiplicativeOverlayColor(pPVar9,(Color *)&uStack_b0);
    }
    fVar21 = (float)CreatureConditionTracker::GetDrawScale((CreatureConditionTracker *)this_00);
    Sexy::SexyTransform2D::Scale
              (aSStack_a0,fVar21 * *(float *)(param_1 + 0x370),fVar21 * *(float *)(param_1 + 0x370))
    ;
    cVar1 = Zombie::isInState((Zombie *)param_1,5);
    if (((cVar1 == '\0') || (*(char *)(*(long *)(param_1 + 0x550) + 0x1c2) == '\0')) ||
       (*(double *)(param_1 + 400) < 10000.0)) {
      cVar1 = Zombie::isInState((Zombie *)param_1,0xf);
      if (cVar1 == '\0') {
        PopAnimRig::Draw(*(PopAnimRig **)(param_1 + 0xc0),in_x1,aSStack_a0);
        uVar18 = 0;
        while( true ) {
          uVar19 = *(undefined8 *)(param_1 + 0x6e8);
          uVar16 = FUN_045b3f50(uVar19,*(undefined8 *)(param_1 + 0x6f0));
          if (uVar16 <= uVar18) break;
          in_x3 = (SexyMatrix3 *)FUN_045b3f5c(uVar19,uVar18);
          in_x4 = *(LineBreakCategory **)(in_x3 + 8);
          PopAnimRig::DrawReplaceLayerWithImage
                    (*(PopAnimRig **)(param_1 + 0xc0),in_x1,aSStack_a0,(string *)in_x3,
                     (Image *)in_x4);
          uVar18 = uVar18 + 1;
        }
      }
      else {
        Sexy::Color::Color((Color *)&uStack_b0,7);
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
        lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        in_x3 = (SexyMatrix3 *)0xff;
        auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_,0xff);
        uStack_d0 = 0;
        iStack_a4 = CurveLerp<int>(0,*(undefined4 *)(lVar20 + 0x1cc),
                                   (float)*(double *)(param_1 + 400),&uStack_d0,auStack_c0,1);
        pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        PopAnimRig::SetShaderOverrideColor(pPVar9,(Color *)&uStack_b0);
      }
    }
    else {
      Sexy::Insets::Insets((Insets *)&uStack_b0,(Insets *)aiStack_e0);
      auStack_c0[0] = auStack_c0[0] & 0xffffffff00000000;
      iStack_a4 = CurveLerp<int>(0x461c4000,0x461c4200,(float)*(double *)(param_1 + 400),auStack_d4,
                                 auStack_c0,1);
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetPAMColor(pPVar9,(Color *)&uStack_b0);
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::Draw(pPVar9,in_x1,aSStack_a0);
    }
    Sexy::Graphics::PopState(in_x1);
    Sexy::Graphics::ClearClipRect(in_x1);
    cVar1 = Zombie::HasCondition(param_1,1);
    if ((cVar1 != '\0') &&
       (pSVar10 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_1), -5.0 < *(float *)(pSVar10 + 8))) {
      Sexy::Transform::Transform(aTStack_50);
      uStack_cc = *(undefined4 *)(param_1 + 0x1c);
      uStack_d0 = FUN_045b455c(*(undefined4 *)(param_1 + 0x18),uStack_cc,
                               *(undefined4 *)(param_1 + 0x20));
      fVar26 = (float)RealObject::CalcGroundZHeight((RealObject *)param_1,pSVar10);
      fVar26 = fVar26 - 6.0;
      Sexy::FastCurve::SetOutRange((FastCurve *)auStack_c0,10.0,fVar26);
      uStack_b0 = Sexy::SexyVector2::operator+((SexyVector2 *)&uStack_d0,(SexyVector2 *)auStack_c0);
      fStack_ac = fVar26;
      fVar21 = (float)FUN_045b4a48(0x3f800000);
      fVar21 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&uStack_b0,fVar21);
      if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
        fVar26 = *(float *)(param_1 + 0x1c);
        uStack_b0 = FUN_045b455c(*(undefined4 *)(param_1 + 0x18),fVar26,
                                 *(undefined4 *)(param_1 + 0x20));
        fStack_ac = fVar26;
        fVar21 = (float)FUN_045b4a48(0x3f800000);
        fVar21 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&uStack_b0,fVar21);
      }
      Sexy::Transform::Translate(aTStack_50,fVar21,fVar26);
      std::string::string((string *)auStack_c0,"IMAGE_COMMONICETRAP");
      GetImageByName((string *)auStack_c0);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&uStack_b0);
      Sexy::Graphics::DrawImageTransform(in_x1,(Image *)pRVar11,aTStack_50,0.0,0.0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_b0);
      std::string::~string((string *)auStack_c0);
      nop();
    }
    lVar20 = *(long *)(gLawnApp + 0x9f0);
    if (lVar20 != 0) {
      if (param_1[0x54] != (Graphics)0x0) {
        cVar1 = Zombie::HasCondition(param_1,0x61);
        if ((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,0x71), cVar1 == '\0')) {
          fVar21 = *(float *)(param_1 + 0x284);
          fVar25 = *(float *)(param_1 + 0x280);
          fVar24 = *(float *)(param_1 + 0x2a8);
          fVar23 = *(float *)(param_1 + 0x2ac);
          iVar5 = FUN_045b4a34(0x3c);
          iVar6 = FUN_045b4a34(10);
          Sexy::Graphics::PushState(in_x1);
          iVar7 = FUN_045b4a34(0xffffffe2);
          iVar8 = FUN_045b4a34(10);
          Sexy::Graphics::Translate(in_x1,iVar7,iVar8);
          Sexy::Color::Color((Color *)&uStack_b0,0);
          Sexy::Graphics::SetColor(in_x1,(Color *)&uStack_b0);
          pfVar14 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)param_1);
          fVar26 = (float)FUN_045b4a48(*pfVar14 + 3.0);
          fVar27 = (float)FUN_045b4a48(pfVar14[1]);
          Sexy::Graphics::FillRect(in_x1,(int)fVar26,(int)fVar27,iVar5,iVar6);
          cVar1 = CardGameUtils::IsPlayingCardGame();
          if (cVar1 == '\0') {
            Sexy::Color::Color((Color *)&uStack_b0,0xff0000);
            Sexy::Graphics::SetColor(in_x1,(Color *)&uStack_b0);
          }
          else {
            cVar1 = RealObject::IsOnTeam(param_1,2);
            iVar7 = 0xff0000;
            if (cVar1 == '\0') {
              iVar7 = 0xff00;
            }
            Sexy::Color::Color((Color *)&uStack_b0,iVar7);
            Sexy::Graphics::SetColor(in_x1,(Color *)&uStack_b0);
          }
          fVar26 = (float)FUN_045b4a48(*pfVar14 + 5.0);
          fVar27 = (float)FUN_045b4a48(pfVar14[1] + 2.0);
          iVar7 = FUN_045b4a34(4);
          in_x4 = (LineBreakCategory *)(ulong)(uint)(iVar6 - iVar7);
          uVar4 = (uint)((float)(iVar5 - iVar7) * ((fVar24 + fVar25) / (fVar23 + fVar21)));
          in_x3 = (SexyMatrix3 *)(ulong)uVar4;
          Sexy::Graphics::FillRect(in_x1,(int)fVar26,(int)fVar27,uVar4,iVar6 - iVar7);
          Sexy::Color::Color((Color *)&uStack_b0,-1);
          Sexy::Graphics::SetColor(in_x1,(Color *)&uStack_b0);
          Sexy::Graphics::PopState(in_x1);
          lVar20 = *(long *)(gLawnApp + 0x9f0);
        }
        else {
          lVar20 = *(long *)(gLawnApp + 0x9f0);
        }
      }
      if (lVar20 != 0) {
        pwVar12 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar17 = (LineBreakCategory *)auStack_c0;
        std::string::string((string *)&uStack_b0,"HealthBars");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar12,(wchar16 *)&uStack_b0,pLVar17,(LineBreakCategory *)in_x3,in_x4);
        std::string::~string((string *)&uStack_b0);
        nop();
        if (cVar1 != '\0') {
          Sexy::Graphics::PushState(in_x1);
          iVar5 = FUN_045b4a34(0xffffffe2);
          iVar6 = FUN_045b4a34(10);
          Sexy::Graphics::Translate(in_x1,iVar5,iVar6);
          pZVar13 = Sexy::RtObject::Cast<ZombieGum>((RtObject *)param_1);
          if (pZVar13 != (ZombieGum *)0x0) {
            iVar5 = FUN_045b4a34(0x3c);
            iVar6 = FUN_045b4a34(0);
            Sexy::Graphics::Translate(in_x1,iVar5,iVar6);
          }
          Sexy::StrFormat(L"%0.2f/%d",(LineBreakCategory *)auStack_c0,
                          (double)(*(float *)(param_1 + 0x2a8) + *(float *)(param_1 + 0x280)),
                          (ulong)(uint)(int)(*(float *)(param_1 + 0x2ac) +
                                            *(float *)(param_1 + 0x284)));
          pfVar14 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)param_1);
          FUN_045b4a48(*pfVar14 + 2.0);
          FUN_045b4a48(pfVar14[1] - 10.0);
          if (PrimeText_Game::Typeface_CafeteriaBlack_16 != (PrimeText_PotentialTypeface *)0x0) {
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_16);
          }
          Sexy::Color::Color((Color *)&uStack_b0,2);
          TodDrawString();
          FUN_05476c50((LineBreakCategory *)auStack_c0);
          Sexy::Graphics::PopState(in_x1);
        }
      }
    }
    fVar21 = (float)PVZ_EOT();
    if ((*(float *)(param_1 + 0x5c0) < fVar21) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
      iVar5 = Zombie::GetInvisibleState((Zombie *)param_1);
      if (iVar5 == 2) {
        Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)auStack_c0,in_x1);
        fVar21 = (float)PVZ_T();
        uStack_b0 = 0;
        uStack_d0 = 0x3f800000;
        fVar21 = CurveEvaluate<float>
                           ((fVar21 - *(float *)(param_1 + 0x5c0)) +
                            (fVar21 - *(float *)(param_1 + 0x5c0)),&uStack_d0,(Color *)&uStack_b0,4)
        ;
        Sexy::Color::Color((Color *)&uStack_b0,1);
        iStack_a4 = (int)(fVar21 * 255.0);
        pPVar9 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
        PopAnimRig::SetPAMColor(pPVar9,(Color *)&uStack_b0);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)auStack_c0);
      }
      else {
        iVar5 = Zombie::GetInvisibleState((Zombie *)param_1);
        if (iVar5 == 3) {
          Sexy::Color::Color((Color *)&uStack_b0,1);
          iStack_a4 = 0x7f;
          pPVar9 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
          PopAnimRig::SetPAMColor(pPVar9,(Color *)&uStack_b0);
        }
      }
      cVar1 = Zombie::HasCondition(param_1,0x71);
      if (cVar1 != '\0') {
        Sexy::Color::Color((Color *)&uStack_b0,1);
        iStack_a4 = 0x7f;
        pPVar9 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
        PopAnimRig::SetPAMColor(pPVar9,(Color *)&uStack_b0);
      }
    }
    cVar1 = Zombie::HasCondition(param_1,0x90);
    if (cVar1 != '\0') {
      pPVar9 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      PopAnimRig::SetPAMColor(pPVar9,(Color *)aiStack_e0);
    }
    if (((param_1[0x1c0] != (Graphics)0x0) &&
        (fVar21 = (float)PVZ_T(), fVar21 <= *(float *)(param_1 + 0x1bc))) &&
       (fVar21 = (float)Zombie::GetMaxResilienceValue((Zombie *)param_1), fVar21 <= 0.0)) {
      Zombie::DrawHealthBar((Zombie *)param_1,in_x1);
    }
    iVar5 = FUN_045b32a0(*(undefined4 *)(param_1 + 0x294));
    if ((0 < iVar5) || (cVar1 = Zombie::IsIZombie((Zombie *)param_1), cVar1 != '\0')) {
      Zombie::DrawHealthBar((Zombie *)param_1,in_x1);
    }
    iVar5 = Zombie::GetTitleIconTriggerNumber((Zombie *)param_1);
    if (0 < iVar5) {
      Zombie::DrawTitles((Zombie *)param_1,in_x1);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnightGhost::onPlaceOnBoard() */

void __thiscall ZombiePumpkinKnightGhost::onPlaceOnBoard(ZombiePumpkinKnightGhost *this)

{
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::getElectrocutePAMName() const */

void __thiscall ZombiePumpkinKnightGhost::getElectrocutePAMName(ZombiePumpkinKnightGhost *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_IMP_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::getAshPAMName() const */

void __thiscall ZombiePumpkinKnightGhost::getAshPAMName(ZombiePumpkinKnightGhost *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_IMP_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombiePumpkinKnightGhost::onExplodeAnimationDone(StandaloneEffect*) */

void ZombiePumpkinKnightGhost::onExplodeAnimationDone(StandaloneEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* ZombiePumpkinKnightGhost::onApplyCondition(ZombieConditions) */

void __thiscall
ZombiePumpkinKnightGhost::onApplyCondition(ZombiePumpkinKnightGhost *this,int param_2)

{
  if ((1 < param_2 - 3U) && (param_2 != 0x65)) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  Zombie::EndCondition((Zombie *)this,3);
  Zombie::EndCondition((Zombie *)this,4);
  Zombie::EndCondition((Zombie *)this,0x65);
  return;
}


/* ZombiePumpkinKnightGhost::updateGhostFacing() */

void __thiscall ZombiePumpkinKnightGhost::updateGhostFacing(ZombiePumpkinKnightGhost *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar1 <= *(float *)(this + 0x808)) {
    Zombie::SetFacing((Zombie *)this,1);
    return;
  }
  Zombie::SetFacing((Zombie *)this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::tryChangeState() */

void ZombiePumpkinKnightGhost::tryChangeState(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar1;
  float fVar2;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x808),pSVar1);
  fVar2 = (float)DVec3::getLength((DVec3 *)local_18);
  if (fVar2 < 5.0) {
    if (local_8 == ___stack_chk_guard) {
      Zombie::setZombieState();
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnightGhost::ZombiePumpkinKnightGhost() */

void __thiscall ZombiePumpkinKnightGhost::ZombiePumpkinKnightGhost(ZombiePumpkinKnightGhost *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a12130;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinKnightGhost_06a12b78;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  DVec3::DVec3((DVec3 *)(this + 0x808));
  *(undefined4 *)(this + 0x81c) = 0x42c80000;
  *(undefined4 *)(this + 0x814) = 0x3f800000;
  *(undefined4 *)(this + 0x818) = 0x3f800000;
  Sexy::Insets::Insets((Insets *)(this + 0x820),0,100,0x100,0x130);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x830) = uVar1;
  return;
}


/* ZombiePumpkinKnightGhost::StaticNew() */

ZombiePumpkinKnightGhost * ZombiePumpkinKnightGhost::StaticNew(void)

{
  ZombiePumpkinKnightGhost *this;
  
  this = ::operator_new(0x838);
  ZombiePumpkinKnightGhost(this);
  return this;
}


/* ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost() */

void __thiscall ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost(ZombiePumpkinKnightGhost *this)

{
  *(undefined ***)this = &PTR_GetClass_06a12130;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinKnightGhost_06a12b78;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost() */

void __thiscall ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost(ZombiePumpkinKnightGhost *this)

{
  ~ZombiePumpkinKnightGhost(this + -0x10);
  return;
}


/* ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost() */

void __thiscall ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost(ZombiePumpkinKnightGhost *this)

{
  ~ZombiePumpkinKnightGhost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost() */

void __thiscall ZombiePumpkinKnightGhost::~ZombiePumpkinKnightGhost(ZombiePumpkinKnightGhost *this)

{
  ~ZombiePumpkinKnightGhost(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::playFloatingAnimation() */

void __thiscall ZombiePumpkinKnightGhost::playFloatingAnimation(ZombiePumpkinKnightGhost *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f2a814(asStack_10);
  ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::onEnterState_Float(ZombieState) */

void ZombiePumpkinKnightGhost::onEnterState_Float(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_04f2a814(asStack_10);
  ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_10);
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::updateGhostPosition() */

void ZombiePumpkinKnightGhost::updateGhostPosition(void)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this;
  float fVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_88 = *puVar2;
  local_80 = *(undefined4 *)(puVar2 + 1);
  local_78[0] = Sexy::SexyVector3::operator-
                          ((SexyVector3 *)(in_x0 + 0x808),(SexyVector3 *)&local_88);
  local_68[0] = Sexy::SexyVector3::Normalize((SexyVector3 *)local_78);
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_68,*(float *)(in_x0 + 0x814));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_58[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_18,(float)iVar1);
  this = (EntityConditionTracker<Creature,CreatureConditions> *)
         Zombie::GetConditionTracker((Zombie *)in_x0);
  fVar3 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this);
  local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_58,fVar3);
  fVar3 = (float)Zombie::GetSpeedScale((Zombie *)in_x0);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,fVar3);
  fVar3 = (float)PVZ_Dt();
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,fVar3);
  local_48 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_88,(SexyVector3 *)local_18);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::updateGhostInvisibleState() */

void __thiscall ZombiePumpkinKnightGhost::updateGhostInvisibleState(ZombiePumpkinKnightGhost *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(this + 0x820));
  fVar2 = (float)FUN_04f2a87c(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar3 = (float)FUN_04f2a808(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xb58));
  fVar4 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  fVar5 = *(float *)(this + 0x1c);
  local_30 = (int)((fVar2 - (float)(local_28 / 2)) + (float)local_30 * fVar3 * fVar4);
  FUN_04f2a87c(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  fVar2 = (float)FUN_04f2a808(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xb58));
  local_2c = (int)((fVar5 - (float)local_24) + (float)local_2c * fVar2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,1,(Insets *)&local_30,0xffffffff,0xffffffff)
  ;
  bVar1 = (bool)std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  Zombie::InvokeInvisible((Zombie *)this,bVar1,false,false);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::blowUpNearby() */

void __thiscall ZombiePumpkinKnightGhost::blowUpNearby(ZombiePumpkinKnightGhost *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *this_00;
  GridItem *pGVar5;
  RtObject *this_01;
  float fVar6;
  float fVar7;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  ResourceInfo *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_90,local_a8 + -1,local_a4 + -1,3,3);
  uVar3 = operator|(1,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_01 = (RtObject *)*puVar4;
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    fVar6 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
    this_00 = (EntityConditionTracker<Zombie,ZombieConditions> *)
              Zombie::GetConditionTracker((Zombie *)this);
    fVar7 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_00);
    local_60 = (float)Zombie::GetDpsScale((Zombie *)this);
    local_58 = 0x400;
    local_60 = fVar6 * fVar7 * *(float *)(this + 0x81c) * local_60;
    local_68 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800));
    pGVar5 = (GridItem *)Sexy::RtObject::Cast<Plant>(this_01);
    if (pGVar5 == (GridItem *)0x0) {
      pGVar5 = Sexy::RtObject::Cast<GridItem>(this_01);
      if ((pGVar5 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar5 + 0x208))(), cVar2 != '\0')) goto LAB_04f2b8d4;
    }
    else {
      Plant::ApplyCondition(*(undefined4 *)(this + 0x818),0,pGVar5,0x12);
LAB_04f2b8d4:
      (**(code **)(*(long *)pGVar5 + 0x110))(pGVar5,(DamageInfo *)&local_68);
    }
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::playExplodeAnimation() */

void __thiscall ZombiePumpkinKnightGhost::playExplodeAnimation(ZombiePumpkinKnightGhost *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(this,1);
  blowUpNearby(this);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_60,"POPANIM_EFFECTS_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_GHOST_EXPLODE");
  GetPAMByName(asStack_60);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  std::string::~string(asStack_60);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,pSVar3,iVar1);
  std::string::string((string *)aRStack_58,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_58,0);
  std::string::~string((string *)aRStack_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onExplodeAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
             aRStack_58);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnightGhost::onEnterState_Explode(ZombieState) */

void ZombiePumpkinKnightGhost::onEnterState_Explode(ZombiePumpkinKnightGhost *param_1)

{
  *(undefined4 *)(param_1 + 0x814) = 0;
  playExplodeAnimation(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::updateTargetLoc() */

void __thiscall ZombiePumpkinKnightGhost::updateTargetLoc(ZombiePumpkinKnightGhost *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  SexyVector3 *pSVar7;
  float fVar8;
  float fVar9;
  Vec3 aVStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar9 = (float)puVar3[1];
  fVar8 = (float)puVar3[2];
  uVar1 = *puVar3;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_04f2c4cc(uVar1,fVar9,fVar8,uVar4,uVar5);
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar2 == '\0') {
    puVar6 = (undefined8 *)
             std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                       ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)avStack_20);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)*puVar6);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),pSVar7);
  }
  else {
    EATextSquish::Vec3::Vec3(aVStack_30,-30.0,fVar9,fVar8);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x808),(SexyVector3 *)aVStack_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnightGhost::updateState_Float() */

void __thiscall ZombiePumpkinKnightGhost::updateState_Float(ZombiePumpkinKnightGhost *this)

{
  tryChangeState();
  updateTargetLoc(this);
  updateGhostFacing(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnightGhost::StaticClassInit() */

void ZombiePumpkinKnightGhost::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombiePumpkinKnightGhost");
      (*pcVar4)(plVar1,asStack_150,FUN_04f2c940,0x838,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_GHOST_Float");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f2c63c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnightGhost,void(ZombiePumpkinKnightGhost::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_GHOST_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f2c63c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePumpkinKnightGhost::StaticGetClass() */

long * ZombiePumpkinKnightGhost::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinKnightGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinKnightGhost::GetClass() const */

long * ZombiePumpkinKnightGhost::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinKnightGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinKnightGhost::onUpdate() */

void __thiscall ZombiePumpkinKnightGhost::onUpdate(ZombiePumpkinKnightGhost *this)

{
  Zombie::onUpdate((Zombie *)this);
  updateGhostPosition();
  updateGhostInvisibleState(this);
  return;
}

