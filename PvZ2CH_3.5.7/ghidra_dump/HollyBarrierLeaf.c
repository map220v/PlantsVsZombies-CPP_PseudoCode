// Class: HollyBarrierLeaf


/* HollyBarrierLeaf::HasShadow() */

void __thiscall HollyBarrierLeaf::HasShadow(HollyBarrierLeaf *this)

{
  FUN_04289efc(*(undefined4 *)(*(long *)(this + 0x10) + 0x1d0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeaf::StaticClassInit() */

void HollyBarrierLeaf::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"HollyBarrierLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_0428a1c8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HollyBarrierLeaf::StaticGetClass() */

long * HollyBarrierLeaf::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"HollyBarrierLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyBarrierLeaf::GetClass() const */

long * HollyBarrierLeaf::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"HollyBarrierLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyBarrierLeaf::HollyBarrierLeaf() */

void __thiscall HollyBarrierLeaf::HollyBarrierLeaf(HollyBarrierLeaf *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (HollyBarrierLeaf)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_06825e30;
  return;
}


/* HollyBarrierLeaf::StaticNew() */

HollyBarrierLeaf * HollyBarrierLeaf::StaticNew(void)

{
  HollyBarrierLeaf *this;
  
  this = ::operator_new(0x38);
  HollyBarrierLeaf(this);
  return this;
}


/* HollyBarrierLeaf::~HollyBarrierLeaf() */

void __thiscall HollyBarrierLeaf::~HollyBarrierLeaf(HollyBarrierLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_06825e30;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* HollyBarrierLeaf::~HollyBarrierLeaf() */

void __thiscall HollyBarrierLeaf::~HollyBarrierLeaf(HollyBarrierLeaf *this)

{
  ~HollyBarrierLeaf(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeaf::initEffect() */

void __thiscall HollyBarrierLeaf::initEffect(HollyBarrierLeaf *this)

{
  int iVar1;
  PlantAnimRig_HollyBarrierLeaf *this_00;
  char *__s;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar2;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  if (this[0x28] == (HollyBarrierLeaf)0x0) {
    iVar1 = FUN_04289f38(*(undefined8 *)(this + 0x10));
    if (iVar1 == 5) {
      __s = "animation6";
    }
    else {
      __s = "animation2";
    }
  }
  else {
    iVar1 = FUN_04289f38(*(undefined8 *)(this + 0x10));
    if (iVar1 == 5) {
      __s = "animation8";
    }
    else {
      __s = "animation4";
    }
  }
  std::string::string(asStack_10,__s);
  PlantAnimRig_HollyBarrierLeaf::PlayIntro(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HollyBarrierLeaf::OnHealthChanged() */

void __thiscall HollyBarrierLeaf::OnHealthChanged(HollyBarrierLeaf *this)

{
  int iVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  DamageLifetime *this_00;
  Plant *this_01;
  float fVar4;
  
  lVar2 = FUN_0428a9fc(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  if (this[0x28] == (HollyBarrierLeaf)0x0) {
    iVar1 = FUN_04289f38(this_01);
    if (iVar1 == 5) {
      this_00 = (DamageLifetime *)(lVar2 + 0x2f8);
    }
    else {
      this_00 = (DamageLifetime *)(lVar2 + 0x2b8);
    }
  }
  else {
    iVar1 = FUN_04289f38(this_01);
    if (iVar1 == 5) {
      this_00 = (DamageLifetime *)(lVar2 + 0x318);
    }
    else {
      this_00 = (DamageLifetime *)(lVar2 + 0x2d8);
    }
  }
  fVar4 = *(float *)(this_01 + 0xd8);
  iVar1 = Plant::GetMaxHitpoints(this_01);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = DamageLifetime::OnHealthChanged(this_00,fVar4,(float)iVar1,pPVar3,*(int *)(this + 0x2c));
  if (*(int *)(this + 0x2c) != iVar1) {
    *(int *)(this + 0x2c) = iVar1;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    DamageLifetime::SetAnimRigToPhase(this_00,iVar1,pPVar3);
    return;
  }
  return;
}


/* HollyBarrierLeaf::onHealed() */

void __thiscall HollyBarrierLeaf::onHealed(HollyBarrierLeaf *this)

{
  int iVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  DamageLifetime *this_00;
  Plant *this_01;
  float fVar4;
  
  lVar2 = FUN_0428a9fc(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  if (this[0x28] == (HollyBarrierLeaf)0x0) {
    iVar1 = FUN_04289f38(this_01);
    if (iVar1 == 5) {
      this_00 = (DamageLifetime *)(lVar2 + 0x2f8);
    }
    else {
      this_00 = (DamageLifetime *)(lVar2 + 0x2b8);
    }
  }
  else {
    iVar1 = FUN_04289f38(this_01);
    if (iVar1 == 5) {
      this_00 = (DamageLifetime *)(lVar2 + 0x318);
    }
    else {
      this_00 = (DamageLifetime *)(lVar2 + 0x2d8);
    }
  }
  fVar4 = *(float *)(this_01 + 0xd8);
  iVar1 = Plant::GetMaxHitpoints(this_01);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = DamageLifetime::OnHealthChanged(this_00,fVar4,(float)iVar1,pPVar3,*(int *)(this + 0x2c));
  if (*(int *)(this + 0x2c) != iVar1) {
    *(int *)(this + 0x2c) = iVar1;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    DamageLifetime::SetAnimRigToPhase(this_00,iVar1,pPVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeaf::PlayAttackEffect() */

void __thiscall HollyBarrierLeaf::PlayAttackEffect(HollyBarrierLeaf *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  Point aPStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::Point::Point(aPStack_20,0,-0x1e);
  Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)aPStack_20);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_18);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aPStack_20,"POPANIM_EFFECTS_HOLLY_ATTACK_FX");
  GetPAMByName((string *)aPStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)aPStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,iVar1 + 2);
  FUN_0428a9fc(*(undefined8 *)(this + 0x10));
  if (this[0x28] == (HollyBarrierLeaf)0x0) {
    std::string::string((string *)aRStack_18,"animation");
  }
  else {
    std::string::string((string *)aRStack_18,"animation2");
  }
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeaf::UpdateActions() */

void __thiscall HollyBarrierLeaf::UpdateActions(HollyBarrierLeaf *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  Point aPStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  if (*(float *)(this + 0x30) < fVar10) {
    FUN_04289f14(aRStack_68,*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar4 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar4 = (**(code **)(*(long *)this + 0x198))(this,0);
    }
    uVar8 = 0;
    bVar1 = false;
    lVar5 = FUN_04289f5c(*(undefined8 *)(extraout_x0 + 0x70));
    iVar3 = *(int *)(lVar5 + 0x2c);
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    uVar9 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_90,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(fVar10 * (float)iVar3),local_80,uStack_7c,aRStack_68,uVar4,uVar9,
               aPStack_90,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    Sexy::Insets::Insets
              ((Insets *)aPStack_90,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
    EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,2,aPStack_90);
    uVar4 = CONCAT44(uStack_7c,local_80);
    lVar5 = FUN_04289f48(uVar4,local_78);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_04289f54(uVar4,uVar8);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((((this_00 != (Zombie *)0x0) &&
             (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
           (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
          if ((((this[0x28] == (HollyBarrierLeaf)0x0) ||
               (cVar2 = Zombie::IsBoss(this_00), cVar2 != '\0')) ||
              ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2 ||
               ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 1 ||
                (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')))))) ||
             (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = true;
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x18,1);
          }
        }
        uVar8 = uVar8 + 1;
        uVar4 = CONCAT44(uStack_7c,local_80);
        uVar7 = FUN_04289f48(uVar4,local_78);
      } while (uVar8 < uVar7);
    }
    if (bVar1) {
      PlayAttackEffect(this);
    }
    fVar10 = (float)PVZ_T();
    lVar5 = FUN_04289f5c(*(undefined8 *)(extraout_x0 + 0x70));
    *(float *)(this + 0x30) = fVar10 + *(float *)(lVar5 + 0x28);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeaf::TakeDamage(DamageInfo const&) */

void HollyBarrierLeaf::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantMagicbeans::TakeDamage(param_1);
  DamageInfo::~DamageInfo(aDStack_68);
  OnHealthChanged((HollyBarrierLeaf *)param_1);
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

