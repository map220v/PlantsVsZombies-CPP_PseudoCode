// Class: ZombiePVPSkill


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill::onUpdate() */

void __thiscall ZombiePVPSkill::onUpdate(ZombiePVPSkill *this)

{
  EntityConditionTracker<Zombie,ZombieConditions> *this_00;
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  SexyVector3 *this_01;
  ZombieSkill *this_02;
  float *pfVar8;
  undefined8 uVar9;
  RtObject *this_03;
  GridItemfire *this_04;
  PopAnimRig *this_05;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  AttachedEffect *this_06;
  StandaloneEffect *this_07;
  long extraout_x0;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  Board *this_08;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  DamageInfo *pDVar20;
  Point aPStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_8;
  
  this_00 = (EntityConditionTracker<Zombie,ZombieConditions> *)(this + 0x398);
  lStack_8 = ___stack_chk_guard;
  Zombie::updateTitles((Zombie *)this);
  Zombie::updateResilienceDamageThreshold((Zombie *)this);
  Zombie::updateResilienceBar((Zombie *)this);
  Zombie::updateRushCondition((Zombie *)this);
  Zombie::updateStateMachine((Zombie *)this);
  EntityConditionTracker<Zombie,ZombieConditions>::Update(this_00,(Zombie *)this);
  iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardTransforms::GridToBoardSpaceX(iVar6 + -1);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  fVar14 = *(float *)this_01;
  if ((fVar14 < (float)iVar6) && (this[0x690] == (ZombiePVPSkill)0x0)) {
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieEnterBoardX,(Zombie *)this);
    fVar14 = *(float *)this_01;
    this[0x690] = (ZombiePVPSkill)0x1;
  }
  if ((fVar14 <= 747.0) && (this[0x540] != (ZombiePVPSkill)0x0)) {
    uVar15 = SharkMinion::getRow((SharkMinion *)this);
    uVar18 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    puVar1 = gMessageRouter;
    FUN_05475d88((string *)&uStack_68,this + 0x548);
    MessageRouter::Post<int,int,std::string_const&,int,int,std::string>
              ((MessageRouter *)puVar1,Message::NoticeZombieWarning,uVar15,uVar18,
               (string *)&uStack_68);
    std::string::~string((string *)&uStack_68);
    this[0x540] = (ZombiePVPSkill)0x0;
    fVar14 = *(float *)this_01;
  }
  lVar12 = *(long *)(gLawnApp + 0x9f0);
  if ((((lVar12 != 0) && (*(char *)(lVar12 + 0xdd4) != '\0')) &&
      (this[0x684] == (ZombiePVPSkill)0x0)) && (fVar14 <= *(float *)(lVar12 + 0xdd0))) {
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieReachLine,(Zombie *)this);
    fVar14 = *(float *)this_01;
    this[0x684] = (ZombiePVPSkill)0x1;
  }
  if (fVar14 < 200.0) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) {
      MessageRouter::Post<Zombie*,Zombie*>
                ((MessageRouter *)gMessageRouter,Message::ZombieCloseToHouse,(Zombie *)this);
      fVar14 = *(float *)this_01;
      goto LAB_045e45f0;
    }
    if (*(float *)this_01 < 150.0) goto LAB_045e4b94;
LAB_045e45fc:
    fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
  }
  else {
LAB_045e45f0:
    if (150.0 <= fVar14) goto LAB_045e45fc;
LAB_045e4b94:
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 != '\0'))
    goto LAB_045e45fc;
    MessageRouter::Post<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::ZombieCloseToBottomLine,(Zombie *)this);
    fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
  }
  if (fVar14 != 0.0) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      DamageInfo::DamageInfo((DamageInfo *)&uStack_c8);
      cVar2 = Zombie::HasCondition(this,5);
      if (cVar2 != '\0') {
        fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
        fVar19 = (float)PVZ_Dt();
        fVar19 = fVar19 * fVar14;
        fVar14 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
        uVar11 = 8;
        uVar9 = 0x100;
LAB_045e4c50:
        pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14);
        uVar9 = operator|(uVar9,uVar11);
LAB_045e4c64:
        Sexy::Point::Point(aPStack_e0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
        goto LAB_045e4c98;
      }
      cVar2 = Zombie::HasCondition(this,0x30);
      if (cVar2 != '\0') {
LAB_045e50d0:
        fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
        fVar19 = (float)PVZ_Dt();
        fVar19 = fVar19 * fVar14;
        fVar14 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
LAB_045e50f0:
        pDVar20._0_4_ = (DamageInfo *)(fVar14 * fVar19);
        uVar9 = operator|(0x800000000000,0x100);
LAB_045e510c:
        Sexy::Point::Point(aPStack_e0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
        goto LAB_045e4c98;
      }
      cVar2 = Zombie::HasCondition(this,0x54);
      if (cVar2 != '\0') {
LAB_045e5154:
        fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
        fVar19 = (float)PVZ_Dt();
        fVar19 = fVar19 * fVar14;
        fVar14 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
        uVar11 = 0x100;
        uVar9 = 0x800000000000;
        goto LAB_045e4c50;
      }
      cVar2 = Zombie::HasCondition(this,0x87);
      if (cVar2 == '\0') {
        cVar2 = Zombie::HasCondition(this,0x32);
        if (cVar2 != '\0') {
          fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                    (this_00);
          fVar19 = (float)PVZ_Dt();
          fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
          pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * fVar17);
          Sexy::Point::Point(aPStack_e0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
          uVar9 = 0x100;
          goto LAB_045e4eec;
        }
        cVar2 = Zombie::HasCondition(this,0x76);
        if (cVar2 != '\0') {
          fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                    (this_00);
          fVar19 = (float)PVZ_Dt();
          fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
          fVar16 = (float)FUN_045b3434(*(undefined4 *)(this + 0x2ac));
          pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * (fVar16 + fVar17));
          uVar9 = operator|(0x400,0x100);
          goto LAB_045e510c;
        }
        cVar2 = Zombie::HasCondition(this,0x75);
        if (cVar2 != '\0') {
          fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                    (this_00);
          fVar19 = (float)PVZ_Dt();
          pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14);
          uVar9 = operator|(0x400,0x100);
          Sexy::Point::Point(aPStack_e0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
          goto LAB_045e4eec;
        }
        cVar2 = Zombie::HasCondition(this,0x8d);
        if ((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(this,0x8e), cVar2 != '\0')) {
          fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                    (this_00);
          fVar19 = (float)PVZ_Dt();
          fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
          pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * fVar17);
          uVar9 = operator|(0x800000000000,0x100);
          Sexy::Point::Point(aPStack_e0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
          goto LAB_045e4c98;
        }
        cVar2 = Zombie::HasCondition(this,0x4c);
        if (cVar2 != '\0') goto LAB_045e50d0;
        cVar2 = Zombie::HasCondition(this,0x4d);
        if (cVar2 == '\0') {
          cVar2 = Zombie::HasCondition(this,0x4f);
          if (cVar2 != '\0') {
            fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                      (this_00);
            fVar19 = (float)PVZ_Dt();
            fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
            pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * fVar17);
            Sexy::Point::Point(aPStack_e0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
            uVar9 = 0x100;
            goto LAB_045e4c98;
          }
          cVar2 = Zombie::HasCondition(this,0x5d);
          if (cVar2 != '\0') {
            fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                      (this_00);
            fVar19 = (float)PVZ_Dt();
            fVar19 = fVar19 * fVar14;
            fVar14 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
            fVar17 = (float)FUN_045b3434(*(undefined4 *)(this + 0x2ac));
            fVar17 = fVar17 + fVar14;
            uVar9 = 0x80;
LAB_045e5568:
            pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar17);
            uVar9 = operator|(uVar9,0x100);
            goto LAB_045e4c64;
          }
          cVar2 = Zombie::HasCondition(this,0x68);
          if (cVar2 != '\0') {
            fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                      (this_00);
            fVar19 = (float)PVZ_Dt();
            fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
            fVar16 = (float)FUN_045b3434(*(undefined4 *)(this + 0x2ac));
            Sexy::Point::Point(aPStack_e0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar19 * fVar14 * (fVar16 + fVar17)),uStack_d8,uStack_d4,
                       (DamageInfo *)&uStack_68,aPStack_e0,0);
            goto LAB_045e4c9c;
          }
          cVar2 = Zombie::HasCondition(this,0x65);
          if (cVar2 != '\0') {
            fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                      (this_00);
            fVar19 = (float)PVZ_Dt();
            fVar19 = fVar19 * fVar14;
            fVar14 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
            fVar17 = (float)FUN_045b3434(*(undefined4 *)(this + 0x2ac));
            uVar9 = 0x4000000000;
            fVar17 = fVar17 + fVar14;
            goto LAB_045e5568;
          }
          cVar2 = Zombie::HasCondition(this,0x7e);
          if (cVar2 != '\0') {
            fVar19 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                      (this_00);
            fVar14 = (float)PVZ_Dt();
            goto LAB_045e50f0;
          }
          cVar2 = Zombie::HasCondition(this,0x31);
          if (cVar2 != '\0') goto LAB_045e5154;
        }
        else {
          fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
                                    (this_00);
          fVar19 = (float)PVZ_Dt();
          fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
          pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * fVar17);
          Sexy::Point::Point(aPStack_e0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
          uVar9 = 0x100;
LAB_045e4c98:
          DamageInfo::DamageInfo
                    (pDVar20._0_4_,uStack_d8,uStack_d4,(DamageInfo *)&uStack_68,uVar9,aPStack_e0,0);
LAB_045e4c9c:
          DamageInfo::operator=((DamageInfo *)&uStack_c8,(DamageInfo *)&uStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)&uStack_68);
        }
      }
      else {
        fVar14 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime(this_00);
        fVar19 = (float)PVZ_Dt();
        fVar17 = (float)FUN_045b3330(*(undefined4 *)(this + 0x284));
        pDVar20._0_4_ = (DamageInfo *)(fVar19 * fVar14 * fVar17);
        Sexy::Point::Point(aPStack_e0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_d8,1.0,0.0);
        uVar9 = 0x100;
LAB_045e4eec:
        DamageInfo::DamageInfo
                  (pDVar20._0_4_,uStack_d8,uStack_d4,(DamageInfo *)&uStack_68,uVar9,aPStack_e0,0);
        DamageInfo::operator=((DamageInfo *)&uStack_c8,(DamageInfo *)&uStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)&uStack_68);
        uStack_b8 = operator|(0x400,0x1000);
      }
      (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)&uStack_c8);
      DamageInfo::~DamageInfo((DamageInfo *)&uStack_c8);
      cVar2 = Zombie::HasCondition(this,0x87);
      goto joined_r0x045e4cdc;
    }
  }
  cVar2 = Zombie::HasCondition(this,0x87);
joined_r0x045e4cdc:
  if (((cVar2 != '\0') && (cVar2 = Zombie::isInState((Zombie *)this,10), cVar2 == '\0')) &&
     (cVar2 = Zombie::isInState((Zombie *)this,0x14), cVar2 == '\0')) {
    fVar14 = (float)FUN_045b455c(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                 *(undefined4 *)(this + 0x20));
    iVar6 = BoardTransforms::BoardSpaceToGridX(fVar14);
    if (-1 < iVar6) {
      fVar14 = (float)FUN_045b455c(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                   *(undefined4 *)(this + 0x20));
      iVar6 = BoardTransforms::BoardSpaceToGridX(fVar14);
      iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
      if ((iVar6 <= iVar7) && (cVar2 = Zombie::IsFlying((Zombie *)this), cVar2 == '\0')) {
        fVar19 = *(float *)(this + 0x1c);
        fVar14 = (float)FUN_045b455c(*(undefined4 *)(this + 0x18),fVar19,
                                     *(undefined4 *)(this + 0x20));
        this_03 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        if (((this_03 != (RtObject *)0x0) &&
            (bVar3 = Sexy::RtObject::IsA<SkyCityStage>(this_03), !bVar3)) &&
           ((bVar3 = Sexy::RtObject::IsA<BeachStage>(this_03), !bVar3 ||
            (cVar2 = Zombie::IsInWater((Zombie *)this), cVar2 == '\0')))) {
          uVar15 = BoardTransforms::BoardSpaceToGridX(fVar14);
          uVar18 = BoardTransforms::BoardSpaceToGridY(fVar19);
          this_04 = (GridItemfire *)FUN_045c39f8(uVar15,uVar18);
          if (this_04 == (GridItemfire *)0x0) {
            this_08 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string((string *)&uStack_68,"rapeflower_fire");
            iVar6 = BoardTransforms::BoardSpaceToGridX(fVar14);
            iVar7 = BoardTransforms::BoardSpaceToGridY(fVar19);
            Board::AddGridItem(this_08,(string *)&uStack_68,iVar6,iVar7,1);
            std::string::~string((string *)&uStack_68);
            nop();
            nop();
            lVar12 = FUN_045b3ea8(*(undefined8 *)(this + 0x3b8),0x87);
            FUN_045b3450(*(undefined4 *)(lVar12 + 0xc),extraout_x0 + 0x1a8);
          }
          else {
            GridItemfire::ResetLifetime(this_04);
          }
        }
      }
    }
  }
  cVar2 = Zombie::HasCondition(this,0x94);
  if ((cVar2 != '\0') &&
     (fVar19 = *(float *)(this + 0x5c8), fVar14 = (float)PVZ_T(), fVar19 <= fVar14)) {
    std::string::string((string *)&uStack_68,"onfuluControl");
    cVar2 = GameObjectDictionary::Contains((string *)(this + 0x420));
    std::string::~string((string *)&uStack_68);
    nop();
    if (cVar2 != '\0') {
      Sexy::Insets::Insets((Insets *)&uStack_68);
      this_05 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      std::string::string((string *)&uStack_c8,"butter");
      PopAnimRig::CalcSymbolRect(this_05,(string *)&uStack_c8,(TRect *)&uStack_68);
      std::string::~string((string *)&uStack_c8);
      nop();
      fVar17 = *(float *)(this + 0x1c);
      fVar14 = (float)FUN_045b455c(*(undefined4 *)(this + 0x18),fVar17,*(undefined4 *)(this + 0x20))
      ;
      Sexy::TRect<int>::GetCenter();
      iVar6 = FUN_045b4a58(uStack_c8 & 0xffffffff);
      pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
      fVar19 = *(float *)(lVar12 + 0xc4);
      Sexy::TRect<int>::GetCenter();
      iVar7 = FUN_045b4a58(uStack_c8._4_4_);
      pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
      uVar18 = 0;
      fVar17 = (float)(int)((fVar17 - *(float *)(lVar12 + 200)) + (float)iVar7) + 5.0;
      EATextSquish::Vec3::Vec3
                ((Vec3 *)&uStack_d8,(float)(int)(fVar14 + fVar19 + (float)iVar6),fVar17,0.0);
      std::string::string((string *)&uStack_c8,"onfuluControl");
      this_06 = (AttachedEffect *)
                Zombie::GetAttachedEffect((Zombie *)this,(exception_ptr *)&uStack_c8);
      std::string::~string((string *)&uStack_c8);
      nop();
      this_07 = (StandaloneEffect *)AttachedEffect::GetEffect(this_06);
      uVar15 = Sexy::SexyVector3::operator-((SexyVector3 *)&uStack_d8,this_01);
      uStack_c8 = CONCAT44(fVar17,uVar15);
      uStack_c0 = uVar18;
      StandaloneEffect::SetAttachmentOffset(this_07,(SexyVector3 *)&uStack_c8);
    }
    *(float *)(this + 0x5c8) = *(float *)(this + 0x5c8) + 0.1;
  }
  Zombie::spreadPoison((Zombie *)this);
  Zombie::updateGhostLanternAttack((Zombie *)this);
  Zombie::spreadBadSmell((Zombie *)this);
  Zombie::spreadChemistPoison((Zombie *)this);
  bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xcc),1);
  if (((bVar3) && (cVar2 = Zombie::IsSuspended((Zombie *)this), cVar2 == '\0')) &&
     (cVar2 = Zombie::HasCondition(this,0x6f), cVar2 == '\0')) {
    bVar5 = Zombie::HasCondition(this,0x96);
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = false;
  }
  ZombieAnimRig::ZombieUpdateAnim(*(ZombieAnimRig **)(this + 0xc0),(bool)bVar5);
  cVar2 = Zombie::isInState((Zombie *)this,0x1b);
  if (((cVar2 != '\0') || (cVar2 = Zombie::isInState((Zombie *)this,0x1c), cVar2 != '\0')) ||
     ((cVar2 = Zombie::isInState((Zombie *)this,0x1d), cVar2 != '\0' ||
      ((cVar2 = Zombie::isInState((Zombie *)this,0x1e), cVar2 != '\0' || ((bool)bVar5 != false))))))
  {
    Zombie::UpdatePosition((Zombie *)this);
  }
  cVar2 = Zombie::IsFlying((Zombie *)this);
  if ((cVar2 == '\0') && (cVar2 = Zombie::isInState((Zombie *)this,9), cVar2 == '\0')) {
    uVar4 = Zombie::HasCondition(this,0xe);
  }
  else {
    uVar4 = 1;
  }
  (**(code **)(*(long *)this + 0xa8))(this,uVar4);
  Zombie::updateGroundEffect((Zombie *)this);
  Zombie::UpdateLevelEffect((Zombie *)this);
  Zombie::updateCheckForPitOfDoomDeath((Zombie *)this);
  Zombie::updateOverlayEffects((Zombie *)this);
  Zombie::UpdateLeaderCondition((Zombie *)this);
  uStack_c8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x528));
  uStack_68 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x528));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_c8,(__normal_iterator *)&uStack_68), bVar3)
  {
    this_02 = (ZombieSkill *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_c8);
    ZombieSkill::UpdateSkillTime(this_02);
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&uStack_c8);
  }
  cVar2 = FUN_045b32a4(*(undefined4 *)(this + 0x354),this + 0x358);
  if (cVar2 != '\0') {
    pfVar8 = (float *)Zombie::GetTargetPosition((Zombie *)this);
    uVar18 = 0;
    fVar19 = pfVar8[1] - *(float *)(this_01 + 4);
    EATextSquish::Vec3::Vec3((Vec3 *)&uStack_d8,*pfVar8 - *(float *)this_01,fVar19,0.0);
    pcVar13 = *(code **)(*(long *)this + 0x78);
    fVar14 = (float)FUN_045b32c4(*(undefined4 *)(this + 0x360));
    uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)&uStack_d8,fVar14);
    uStack_c8 = CONCAT44(fVar19,uVar15);
    uStack_c0 = uVar18;
    uVar15 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&uStack_c8);
    uStack_68 = CONCAT44(fVar19,uVar15);
    uStack_60 = uVar18;
    (*pcVar13)(this,(DamageInfo *)&uStack_68);
  }
  cVar2 = Zombie::canPerformSkill((Zombie *)this);
  if (cVar2 != '\0') {
    fVar14 = (float)PVZ_Dt();
    fVar19 = *(float *)(this + 0x520);
    *(float *)(this + 0x520) = fVar19 - fVar14;
    if (fVar19 - fVar14 <= 0.0) {
      Zombie::TakeIntervalSkill((Zombie *)this);
      *(undefined4 *)(this + 0x520) = *(undefined4 *)(this + 0x524);
    }
  }
  cVar2 = (**(code **)(*(long *)this + 0x418))(this);
  if ((cVar2 != '\0') || (-100.0 <= *(float *)this_01)) {
    iVar6 = Zombie::GetFacing((Zombie *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
    iVar6 = Zombie::GetFacing((Zombie *)this);
  }
  if (((iVar6 == 1) && (1000.0 < *(float *)this_01)) &&
     (cVar2 = LawnApp::IsInModule(gLawnApp,2), cVar2 == '\0')) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  }
  Zombie::UpdateInvisibleState((Zombie *)this);
  Zombie::UpdateCloneableState((Zombie *)this);
  Zombie::UpdateMinifyState((Zombie *)this);
  if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
      (lVar12 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar12 != 0)) &&
     (lVar12 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar12 + 0x114) != '\0')) {
    (**(code **)(*(long *)this + 0x9c8))(this);
  }
  Zombie::updateJunggle((Zombie *)this);
  if (this[0x4c4] != (ZombiePVPSkill)0x0) {
    DamageInfo::DamageInfo((DamageInfo *)&uStack_68);
    uStack_60 = *(undefined4 *)(this + 0x4c8);
    (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)&uStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)&uStack_68);
  }
  fVar14 = (float)PVZ_T();
  if (*(float *)(this + 0x4c0) < fVar14) {
    (**(code **)(*(long *)this + 0x460))(this);
    cVar2 = FUN_045b32c8(this[0x4cc]);
  }
  else {
    cVar2 = FUN_045b32c8(this[0x4cc]);
  }
  if ((cVar2 != '\0') &&
     (fVar19 = *(float *)(this + 0x4d0), fVar14 = (float)PVZ_T(), fVar19 < fVar14)) {
    (**(code **)(*(long *)this + 0x468))(0xbf800000,this,0);
  }
  cVar2 = CardGameUtils::IsPlayingCardGame();
  if (cVar2 != '\0') {
    (**(code **)(*(long *)this + 0x518))(this);
    (**(code **)(*(long *)this + 0x520))(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill::~ZombiePVPSkill() */

void __thiscall ZombiePVPSkill::~ZombiePVPSkill(ZombiePVPSkill *this)

{
  *(undefined ***)this = &PTR_GetClass_06941dd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_06942800;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill::~ZombiePVPSkill() */

void __thiscall ZombiePVPSkill::~ZombiePVPSkill(ZombiePVPSkill *this)

{
  ~ZombiePVPSkill(this + -0x10);
  return;
}


/* ZombiePVPSkill::~ZombiePVPSkill() */

void __thiscall ZombiePVPSkill::~ZombiePVPSkill(ZombiePVPSkill *this)

{
  ~ZombiePVPSkill(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill::~ZombiePVPSkill() */

void __thiscall ZombiePVPSkill::~ZombiePVPSkill(ZombiePVPSkill *this)

{
  ~ZombiePVPSkill(this + -0x10);
  return;
}


/* ZombiePVPSkill::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill::CalcRenderOrder(ZombiePVPSkill *this)

{
  undefined4 uVar1;
  float *pfVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Board::MakeRenderOrder(0x639c0,uVar1,(int)*pfVar2);
  return;
}


/* non-virtual thunk to ZombiePVPSkill::CalcRenderOrder() const */

void __thiscall ZombiePVPSkill::CalcRenderOrder(ZombiePVPSkill *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* ZombiePVPSkill::ZombiePVPSkill() */

void __thiscall ZombiePVPSkill::ZombiePVPSkill(ZombiePVPSkill *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06941dd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_06942800;
  return;
}


/* ZombiePVPSkill::StaticNew() */

ZombiePVPSkill * ZombiePVPSkill::StaticNew(void)

{
  ZombiePVPSkill *this;
  
  this = ::operator_new(0x800);
  ZombiePVPSkill(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill::StaticClassInit() */

void ZombiePVPSkill::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePVPSkill");
      (*pcVar4)(plVar1,asStack_150,FUN_04a92620,0x800,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPSkill,void(ZombiePVPSkill::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePVPSkill,void(ZombiePVPSkill::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPSkill,void(ZombiePVPSkill::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PVPSkill_Playing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a923c4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPSkill::StaticGetClass() */

long * ZombiePVPSkill::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill::GetClass() const */

long * ZombiePVPSkill::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPSkill",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill::onPlaceOnBoard() */

void __thiscall ZombiePVPSkill::onPlaceOnBoard(ZombiePVPSkill *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  Zombie::SetIsControlled((Zombie *)this,true);
  Zombie::SetIgnoresCollisions((Zombie *)this,true);
  Zombie::SetIsTargetable((Zombie *)this,false);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

