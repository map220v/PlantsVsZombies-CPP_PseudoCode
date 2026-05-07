// Class: ArtifactGravitySubSystem


/* ArtifactGravitySubSystem::InitGravity(PlantRestrictionSet const&, float) */

void __thiscall
ArtifactGravitySubSystem::InitGravity
          (ArtifactGravitySubSystem *this,PlantRestrictionSet *param_1,float param_2)

{
  ZombieRestrictionSet::operator=
            ((ZombieRestrictionSet *)(this + 0xc0),(ZombieRestrictionSet *)param_1);
  *(float *)(this + 0xbc) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::StaticClassInit() */

void ArtifactGravitySubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GravityZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_037f37c0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactGravitySubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_037f3a28,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravitySubSystem::StaticGetClass() */

long * ArtifactGravitySubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGravitySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGravitySubSystem::GetClass() const */

long * ArtifactGravitySubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGravitySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::ClearBasePoint() */

void __thiscall ArtifactGravitySubSystem::ClearBasePoint(ArtifactGravitySubSystem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::ClearSkillPoint1() */

void __thiscall ArtifactGravitySubSystem::ClearSkillPoint1(ArtifactGravitySubSystem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x18) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::ClearSkillPoint2() */

void __thiscall ArtifactGravitySubSystem::ClearSkillPoint2(ArtifactGravitySubSystem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x20) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::ClearSkillPoint3() */

void __thiscall ArtifactGravitySubSystem::ClearSkillPoint3(ArtifactGravitySubSystem *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravitySubSystem::canNotBeTargeted(Zombie*) */

undefined1 __thiscall
ArtifactGravitySubSystem::canNotBeTargeted(ArtifactGravitySubSystem *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  
  if (((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')) ||
       (bVar3 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)param_1), bVar3)) ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))) ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
      ((cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 != '\0' ||
       (cVar1 = Zombie::HasCondition(param_1,0x27), uVar2 = 0, cVar1 != '\0')))))) {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::createSoilEffect(int, int, int) */

void __thiscall
ArtifactGravitySubSystem::createSoilEffect
          (ArtifactGravitySubSystem *this,int param_1,int param_2,int param_3)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)param_1,(float)(param_2 + -0x14),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)aRStack_18,"tudui_start");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_037f23d0(this_00 + 0x1c,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ArtifactGravitySubSystem::canChangeRoute(Projectile*) */

char __thiscall
ArtifactGravitySubSystem::canChangeRoute(ArtifactGravitySubSystem *this,Projectile *param_1)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  Plant *pPVar3;
  
  lVar2 = Projectile::GetInstigator(param_1);
  if (lVar2 == 0) {
    return '\0';
  }
  this_00 = (RtObject *)Projectile::GetInstigator(param_1);
  pPVar3 = Sexy::RtObject::Cast<Plant>(this_00);
  if (pPVar3 != (Plant *)0x0) {
    cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(this + 0xc0));
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* ArtifactGravitySubSystem::registerForEvents() */

void __thiscall ArtifactGravitySubSystem::registerForEvents(ArtifactGravitySubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ArtifactGravitySubSystem,void(ArtifactGravitySubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::processTargetZombies(CrushType, GravityZombieData&) */

void __thiscall
ArtifactGravitySubSystem::processTargetZombies
          (ArtifactGravitySubSystem *this,int param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> RVar3;
  int iVar4;
  Zombie *this_00;
  undefined8 *puVar5;
  StandaloneEffect *this_01;
  Point *this_02;
  code *pcVar6;
  float fVar7;
  Zombie *pZVar8;
  Point aPStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  if ((param_2 == 0) && (this[0xb8] != (ArtifactGravitySubSystem)0x0)) {
    *(undefined4 *)(param_3 + 0x20) = 0xc3480000;
  }
  if ((this_00 == (Zombie *)0x0) || (cVar1 = RealObject::IsOnTeam(this_00,2), cVar1 == '\0'))
  goto LAB_037f4ab4;
  cVar1 = Zombie::IsFlying(this_00);
  if ((cVar1 != '\0') ||
     ((bVar2 = Sexy::RtObject::IsA<ZombieChicken>((RtObject *)this_00), bVar2 ||
      (bVar2 = Sexy::RtObject::IsA<ZombieWeasel>((RtObject *)this_00), bVar2)))) {
    this_02 = (Point *)&local_80;
    pcVar6 = *(code **)(*(long *)this_00 + 0x120);
    Sexy::Point::Point(this_02,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
    local_80 = (float)local_78;
    local_7c = local_78._4_4_;
  }
  else {
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    local_78 = *puVar5;
    local_70 = *(float *)(param_3 + 0x20) + *(float *)(puVar5 + 1);
    if (local_70 < *(float *)(puVar5 + 1)) {
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_78);
    }
    iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 8));
    if ((bVar2) && (param_3[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
      this_01 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3 + 8);
      EATextSquish::Vec3::Vec3((Vec3 *)aDStack_68,(float)local_78,(float)(iVar4 + -0x14),0.0);
      StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aDStack_68,-1);
    }
    RVar3 = (RtWeakPtr<Sexy::ResourceInfo>)Sexy::RtObject::IsA<ZombieImp>((RtObject *)this_00);
    if ((bool)RVar3) {
      fVar7 = *(float *)(puVar5 + 1);
      if ((fVar7 <= -25.0) && (param_3[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
        pZVar8._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar8._0_4_,0,this_00,0x18,1);
        param_3[0x25] = (RtWeakPtr<Sexy::ResourceInfo>)0x0;
        fVar7 = *(float *)(puVar5 + 1);
      }
      if (-50.0 < fVar7) goto LAB_037f4ab4;
    }
    else {
      iVar4 = Zombie::GetSizeType(this_00);
      if (iVar4 == 1) {
        fVar7 = *(float *)(puVar5 + 1);
        if ((fVar7 <= -50.0) && (param_3[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
          pZVar8._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar8._0_4_,0,this_00,0x18,1);
          param_3[0x25] = RVar3;
          fVar7 = *(float *)(puVar5 + 1);
        }
        if (-100.0 < fVar7) goto LAB_037f4ab4;
      }
      else if (iVar4 == 0) {
        fVar7 = *(float *)(puVar5 + 1);
        if ((fVar7 <= -37.0) && (param_3[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
          pZVar8._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar8._0_4_,0,this_00,0x18,1);
          param_3[0x25] = (RtWeakPtr<Sexy::ResourceInfo>)0x0;
          fVar7 = *(float *)(puVar5 + 1);
        }
        if (-74.0 < fVar7) goto LAB_037f4ab4;
      }
      else {
        if (iVar4 != 2) goto LAB_037f4ab4;
        fVar7 = *(float *)(puVar5 + 1);
        if ((fVar7 <= -75.0) && (param_3[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
          pZVar8._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar8._0_4_,0,this_00,0x18,1);
          param_3[0x25] = RVar3;
          fVar7 = *(float *)(puVar5 + 1);
        }
        if (-150.0 < fVar7) goto LAB_037f4ab4;
      }
    }
    this_02 = aPStack_88;
    pcVar6 = *(code **)(*(long *)this_00 + 0x120);
    Sexy::Point::Point(this_02,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  }
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_80,local_7c,aDStack_68,4,this_02,0);
  (*pcVar6)(this_00,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
LAB_037f4ab4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravitySubSystem::SetBasePoint(Sexy::Point const&, float) */

void __thiscall
ArtifactGravitySubSystem::SetBasePoint(ArtifactGravitySubSystem *this,Point *param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x10) = uVar1;
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x40));
  return;
}


/* ArtifactGravitySubSystem::SetSkillPoint1(Sexy::Point const&, float) */

void __thiscall
ArtifactGravitySubSystem::SetSkillPoint1
          (ArtifactGravitySubSystem *this,Point *param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x34) = param_2;
  *(undefined8 *)(this + 0x18) = uVar1;
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x58));
  return;
}


/* ArtifactGravitySubSystem::SetSkillPoint2(Sexy::Point const&, float) */

void __thiscall
ArtifactGravitySubSystem::SetSkillPoint2
          (ArtifactGravitySubSystem *this,Point *param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x38) = param_2;
  *(undefined8 *)(this + 0x20) = uVar1;
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x70));
  return;
}


/* ArtifactGravitySubSystem::SetSkillPoint3(Sexy::Point const&, float) */

void __thiscall
ArtifactGravitySubSystem::SetSkillPoint3
          (ArtifactGravitySubSystem *this,Point *param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0x3c) = param_2;
  *(undefined8 *)(this + 0x28) = uVar1;
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x88));
  return;
}


/* ArtifactGravitySubSystem::ArtifactGravitySubSystem() */

void __thiscall ArtifactGravitySubSystem::ArtifactGravitySubSystem(ArtifactGravitySubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0669cb80;
  Sexy::Point::Point((Point *)(this + 0x10));
  Sexy::Point::Point((Point *)(this + 0x18));
  Sexy::Point::Point((Point *)(this + 0x20));
  Sexy::Point::Point((Point *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0xc0));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x40));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x58));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x70));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::clear
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x88));
  this[0xb8] = (ArtifactGravitySubSystem)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  ClearBasePoint(this);
  ClearSkillPoint1(this);
  ClearSkillPoint2(this);
  ClearSkillPoint3(this);
  return;
}


/* ArtifactGravitySubSystem::StaticNew() */

ArtifactGravitySubSystem * ArtifactGravitySubSystem::StaticNew(void)

{
  ArtifactGravitySubSystem *this;
  
  this = ::operator_new(0xe8);
  ArtifactGravitySubSystem(this);
  return this;
}


/* ArtifactGravitySubSystem::~ArtifactGravitySubSystem() */

void __thiscall ArtifactGravitySubSystem::~ArtifactGravitySubSystem(ArtifactGravitySubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669cb80;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0xc0));
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0xa0));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::~vector
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x88));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::~vector
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x70));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::~vector
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x58));
  std::vector<GravityZombieData,std::allocator<GravityZombieData>>::~vector
            ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)(this + 0x40));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactGravitySubSystem::~ArtifactGravitySubSystem() */

void __thiscall ArtifactGravitySubSystem::~ArtifactGravitySubSystem(ArtifactGravitySubSystem *this)

{
  ~ArtifactGravitySubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::internalRiseZombie(CrushType) */

void __thiscall
ArtifactGravitySubSystem::internalRiseZombie(ArtifactGravitySubSystem *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar4;
  Effect_PopAnim *pEVar5;
  UIWidget *this_03;
  PopAnimRig *this_04;
  long lVar6;
  ArtifactGravitySubSystem *unaff_x23;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    unaff_x23 = this + 0x40;
    break;
  case 1:
    unaff_x23 = this + 0x58;
    break;
  case 2:
    unaff_x23 = this + 0x70;
    break;
  case 3:
    unaff_x23 = this + 0x88;
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)unaff_x23);
LAB_037f538c:
  do {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)unaff_x23);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      if (this_02 ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_28 = std::vector<GravityZombieData,std::allocator<GravityZombieData>>::erase
                             ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)
                              unaff_x23,local_18);
        goto LAB_037f538c;
      }
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_02);
      fVar12 = -25.0;
      local_18 = *puVar4;
      fVar11 = *(float *)(puVar4 + 1);
      fVar10 = *(float *)(this_01 + 0x18);
      fVar13 = *(float *)(this_01 + 0x14);
      local_10[0] = fVar11;
      bVar1 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)this_02);
      if (!bVar1) {
        iVar3 = Zombie::GetSizeType((Zombie *)this_02);
        if (iVar3 == 1) {
          fVar12 = -50.0;
        }
        else if (iVar3 == 0) {
          fVar12 = -37.0;
        }
        else if (iVar3 == 2) {
          fVar12 = -75.0;
        }
        else {
          fVar12 = 0.0;
        }
      }
      if (this_01[0x24] == (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
        this_01[0x24] = (RtWeakPtr<Sexy::ResourceInfo>)0x1;
        fVar8 = (float)PVZ_T();
        fVar9 = 0.0;
        if (this_01[0x25] == (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
          fVar9 = *(float *)(this + 0xbc);
        }
        *(float *)(this_01 + 0x10) = fVar9 + fVar8;
        Zombie::RemoveAttachedEffect((Zombie *)this_02,"artifact_gravity_slowdown");
      }
      if (fVar11 < fVar12) {
        cVar2 = Zombie::HasCondition(this_02,0x18);
        if (cVar2 == '\0') {
          fVar11 = *(float *)(this_01 + 0x10);
          uVar7 = PVZ_T();
          local_20 = 0;
          local_10[0] = CurveLerp<float>(fVar11,(fVar11 + fVar10) - fVar13,uVar7,local_10,&local_20,
                                         1);
        }
        cVar2 = Zombie::HasCondition(this_02,0x18);
        if (cVar2 != '\0') {
          fVar11 = -1.0;
          if (this_01[0x26] == (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
            fVar11 = 1.0;
          }
          lVar6 = *(long *)this_02;
          this_01[0x26] = (RtWeakPtr<Sexy::ResourceInfo>)((byte)this_01[0x26] ^ 1);
          local_18 = CONCAT44(local_18._4_4_,fVar11 + (float)local_18);
          (**(code **)(lVar6 + 0x78))
                    (this_02,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_18);
        }
      }
      else {
        this_00 = (RtWeakPtr *)(this_01 + 8);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          this_03 = (UIWidget *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          this_04 = (PopAnimRig *)UIWidget::GetAtlasImage(this_03);
          std::string::string((string *)&local_20,"tudui_end");
          cVar2 = PopAnimRig::IsAnimStringActive(this_04,(string *)&local_20);
          std::string::~string((string *)&local_20);
          nop();
          if (cVar2 == '\0') {
            pEVar5 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            std::string::string((string *)&local_20,"tudui_end");
            Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_20,0);
            std::string::~string((string *)&local_20);
            nop();
          }
          fVar11 = *(float *)(this_01 + 0x10);
          uVar7 = PVZ_T();
          local_20 = 0;
          local_10[0] = CurveLerp<float>(fVar11,(fVar11 + fVar10) - fVar13,uVar7,local_10,
                                         (string *)&local_20,1);
        }
        else {
          fVar11 = *(float *)(this_01 + 0x10);
          uVar7 = PVZ_T();
          local_20 = 0;
          local_10[0] = CurveLerp<float>(fVar11,(fVar11 + fVar10) - fVar13,uVar7,local_10,&local_20,
                                         1);
        }
      }
      if (this_01[0x25] == (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
        this_01[0x25] = (RtWeakPtr<Sexy::ResourceInfo>)0x1;
        Zombie::EndCondition((Zombie *)this_02,0x18);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0xbc),0,this_02,0x18,1);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this_01 + 8));
        if (bVar1) {
          pEVar5 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01 + 8);
          std::string::string((string *)&local_20,"tudui_roop");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar5,(string *)&local_20,0);
          std::string::~string((string *)&local_20);
          nop();
        }
      }
      (**(code **)(*(long *)this_02 + 0x78))
                (this_02,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_18);
      if (local_10[0] < -0.01) break;
      Zombie::SetIsBeingPulledByOlivePit((Zombie *)this_02,false);
      RealObject::SetDisableSnapToGround((RealObject *)this_02,false);
      local_10[0] = 0.0;
      (**(code **)(*(long *)this_02 + 0x78))
                (this_02,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_18);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_20,(__normal_iterator *)&local_28);
      local_28 = std::vector<GravityZombieData,std::allocator<GravityZombieData>>::erase
                           ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)unaff_x23
                            ,CONCAT44(uStack_1c,local_20));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)unaff_x23);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::updateOutsideZombies(Sexy::Point const&, CrushType) */

void __thiscall
ArtifactGravitySubSystem::updateOutsideZombies
          (ArtifactGravitySubSystem *this,int *param_1,int param_3)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar4;
  StandaloneEffect *this_03;
  Effect_PopAnim *pEVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  TPoint aTStack_40 [8];
  undefined8 local_38;
  float local_30 [2];
  ulong local_28 [2];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    this = this + 0x40;
    Sexy::Insets::Insets(aIStack_18,*param_1 + -2,param_1[1] + -2,5,5);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,*param_1,param_1[1],1,1);
    if (param_3 == 2) {
      this = this + 0x70;
    }
    else if (param_3 == 3) {
      this = this + 0x88;
    }
    else {
      this = this + 0x58;
      if (param_3 != 1) {
        this = (ArtifactGravitySubSystem *)0x0;
      }
    }
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
LAB_037f58a4:
  local_28[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)local_28);
  do {
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    if (this_02 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      BoardEntity::CalcGridPosition();
      cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,aTStack_40);
      if (cVar2 != '\0') break;
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_02);
      local_38 = *puVar4;
      local_30[0] = *(float *)(puVar4 + 1);
      fVar7 = *(float *)(this_01 + 0x18);
      fVar9 = *(float *)(this_01 + 0x14);
      if (this_01[0x24] == (RtWeakPtr<Sexy::ResourceInfo>)0x0) {
        this_01[0x24] = (RtWeakPtr<Sexy::ResourceInfo>)0x1;
        uVar6 = PVZ_T();
        *(undefined4 *)(this_01 + 0x10) = uVar6;
        Zombie::RemoveAttachedEffect((Zombie *)this_02,"artifact_gravity_slowdown");
      }
      fVar8 = *(float *)(this_01 + 0x10);
      this_00 = (RtWeakPtr *)(this_01 + 8);
      uVar6 = PVZ_T();
      local_28[0] = local_28[0] & 0xffffffff00000000;
      local_30[0] = CurveLerp<float>(fVar8,(fVar8 + fVar7) - fVar9,uVar6,local_30,(Vec3 *)local_28,1
                                    );
      (**(code **)(*(long *)this_02 + 0x78))(this_02,&local_38);
      iVar3 = SharkMinion::getRow((SharkMinion *)this_02);
      iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if ((bVar1) && (this_01[0x25] != (RtWeakPtr<Sexy::ResourceInfo>)0x0)) {
        this_03 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        EATextSquish::Vec3::Vec3((Vec3 *)local_28,(float)local_38,(float)(iVar3 + -0x14),0.0);
        StandaloneEffect::SetBoardSpaceOrigin(this_03,(SexyVector3 *)local_28,-1);
      }
      if (local_30[0] < -0.01) break;
      Zombie::SetIsBeingPulledByOlivePit((Zombie *)this_02,false);
      RealObject::SetDisableSnapToGround((RealObject *)this_02,false);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        pEVar5 = (Effect_PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        std::string::string((string *)local_28,"tudui_end");
        Effect_PopAnim::PlaySingleAnimation(pEVar5,(Vec3 *)local_28,0);
        std::string::~string((string *)local_28);
        nop();
      }
      Zombie::RemoveAttachedEffect((Zombie *)this_02,"artifact_gravity_slowdown");
      local_30[0] = 0.0;
      (**(code **)(*(long *)this_02 + 0x78))(this_02,&local_38);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_28,(__normal_iterator *)&local_48);
    local_48 = std::vector<GravityZombieData,std::allocator<GravityZombieData>>::erase
                         ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)this,
                          local_28[0]);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)local_28);
  } while( true );
  __gnu_cxx::
  __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
  ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                *)&local_48);
  goto LAB_037f58a4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::removeDestroyZombie(std::vector<GravityZombieData,
   std::allocator<GravityZombieData> >&, Zombie*) */

void __thiscall
ArtifactGravitySubSystem::removeDestroyZombie
          (ArtifactGravitySubSystem *this,vector *param_1,Zombie *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  Effect_PopAnim *pEVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  local_18 = FUN_037f485c(uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar4 + 8));
    if (bVar1) {
      pEVar5 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 8));
      std::string::string((string *)&local_10,"tudui_end");
      Effect_PopAnim::PlaySingleAnimation
                (pEVar5,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_10,0);
      std::string::~string((string *)&local_10);
      nop();
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<GravityZombieData,std::allocator<GravityZombieData>>::erase
              ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)param_1,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravitySubSystem::onZombieDestroyed(Zombie*) */

void __thiscall
ArtifactGravitySubSystem::onZombieDestroyed(ArtifactGravitySubSystem *this,Zombie *param_1)

{
  removeDestroyZombie(this,(vector *)(this + 0x40),param_1);
  removeDestroyZombie(this,(vector *)(this + 0x58),param_1);
  removeDestroyZombie(this,(vector *)(this + 0x70),param_1);
  removeDestroyZombie(this,(vector *)(this + 0x88),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::internalSwallZombieAndProjectiles(CrushType) */

void ArtifactGravitySubSystem::internalSwallZombieAndProjectiles
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ArtifactGravitySubSystem *param_4,undefined4 param_5)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Projectile *this_00;
  undefined8 uVar6;
  long lVar7;
  SexyVector3 *this_01;
  RtWeakPtrBase *pRVar8;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_38);
  switch(param_5) {
  case 0:
    Sexy::Insets::Insets
              ((Insets *)&local_28,*(int *)(param_4 + 0x10) + -2,*(int *)(param_4 + 0x14) + -2,5,5);
    local_38 = local_28;
    uStack_30 = uStack_20;
    break;
  case 1:
    Sexy::Insets::Insets((Insets *)&local_28,*(int *)(param_4 + 0x18),*(int *)(param_4 + 0x1c),1,1);
    local_38 = local_28;
    uStack_30 = uStack_20;
    break;
  case 2:
    Sexy::Insets::Insets((Insets *)&local_28,*(int *)(param_4 + 0x20),*(int *)(param_4 + 0x24),1,1);
    local_38 = local_28;
    uStack_30 = uStack_20;
    break;
  case 3:
    Sexy::Insets::Insets((Insets *)&local_28,*(int *)(param_4 + 0x28),*(int *)(param_4 + 0x2c),1,1);
    local_38 = local_28;
    uStack_30 = uStack_20;
  }
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_4 + 0xa0);
  PVZDB::GetObjectIteratorForTable((Iterator *)&local_28,uVar5,0x2b);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)&local_48);
    Sexy::RtId::~RtId((RtId *)&local_48);
    this_00 = (Projectile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    if ((this_00 != (Projectile *)0x0) && (cVar2 = canChangeRoute(param_4,this_00), cVar2 != '\0'))
    {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this);
      local_58 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Projectile>*,std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>>,Sexy::RtWeakPtr<Projectile>>
                           (uVar5,uVar6,aRStack_60);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
      if (bVar1) {
        iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this_00 + 0x18));
        iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this_00 + 0x1c));
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  ((UnchartedModePlantNumData *)&local_48,iVar3,iVar4);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)&local_38,(TPoint *)&local_48);
        if (cVar2 != '\0') {
          lVar7 = Projectile::GetProps(this_00);
          iVar3 = operator|(*(undefined4 *)(lVar7 + 0x2c),0x100);
          DangerRoomManager::SetMaxLevel((DangerRoomManager *)this_00,iVar3);
          this_01 = (SexyVector3 *)
                    AssetsManagerManifest::getAssets((AssetsManagerManifest *)this_00);
          if (*(float *)(this_01 + 8) == 0.0) {
            param_2 = 0;
            param_3 = 0xc2c40000;
            EATextSquish::Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,-98.0);
            Projectile::SetAcceleration(this_00,(SexyVector3 *)&local_48);
          }
          else {
            local_48 = Sexy::SexyVector3::operator*(this_01,2.0);
            local_44 = param_2;
            local_40 = param_3;
            Projectile::SetAcceleration(this_00,(SexyVector3 *)&local_48);
          }
          std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::
          push_back((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>
                     *)this,(RtWeakPtr *)aRStack_60);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_28);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_28);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      pRVar8 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,pRVar8);
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_48);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_50);
      local_50 = std::
                 vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::
                 erase((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>
                        *)this,local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_28);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::updateDuration(float&, Sexy::Point&, CrushType) */

void __thiscall
ArtifactGravitySubSystem::updateDuration
          (ArtifactGravitySubSystem *this,float *param_1,TPoint<int> *param_2,undefined4 param_4)

{
  char cVar1;
  float fVar2;
  undefined8 local_10;
  long local_8;
  
  fVar2 = *param_1;
  local_8 = ___stack_chk_guard;
  if (0.0 < fVar2) {
    fVar2 = (float)PVZ_Dt();
    fVar2 = *param_1 - fVar2;
    *param_1 = fVar2;
  }
  if (fVar2 < 0.0) {
    Sexy::Point::Point((Point *)&local_10,-1,-1);
    cVar1 = Sexy::TPoint<int>::operator!=(param_2,(TPoint *)&local_10);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)&local_10,-1,-1);
      *(undefined8 *)param_2 = local_10;
    }
  }
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  cVar1 = Sexy::TPoint<int>::operator!=(param_2,(TPoint *)&local_10);
  if (cVar1 == '\0') {
    internalRiseZombie(this,param_4);
  }
  else {
    internalSwallZombieAndProjectiles(this,param_4);
    updateOutsideZombies(this,param_2,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravitySubSystem::Update() */

void __thiscall ArtifactGravitySubSystem::Update(ArtifactGravitySubSystem *this)

{
  updateDuration(this,this + 0x30,this + 0x10,0);
  updateDuration(this,this + 0x34,this + 0x18,1);
  updateDuration(this,this + 0x38,this + 0x20,2);
  updateDuration(this,this + 0x3c,this + 0x28,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::crushExistZombie(__gnu_cxx::__normal_iterator<GravityZombieData*,
   std::vector<GravityZombieData, std::allocator<GravityZombieData> > >&,
   std::vector<GravityZombieData, std::allocator<GravityZombieData> >&,
   std::vector<GravityZombieData, std::allocator<GravityZombieData> >*, CrushType) */

void __thiscall
ArtifactGravitySubSystem::crushExistZombie
          (ArtifactGravitySubSystem *this,__normal_iterator *param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,vector<GravityZombieData,std::allocator<GravityZombieData>> *param_3,
          undefined4 param_5)

{
  bool bVar1;
  GravityZombieData *pGVar2;
  Effect_PopAnim *pEVar3;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  bVar1 = __gnu_cxx::operator!=(param_1,(__normal_iterator *)&local_10);
  if (bVar1) {
    pGVar2 = (GravityZombieData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)param_1);
    pGVar2[0x24] = (GravityZombieData)0x0;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pGVar2 + 8));
    if (bVar1) {
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(pGVar2 + 8));
      std::string::string((string *)&local_10,"tudui_start");
      Effect_PopAnim::PlaySingleAnimation
                (pEVar3,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_10,0);
      std::string::~string((string *)&local_10);
      nop();
    }
    std::vector<GravityZombieData,std::allocator<GravityZombieData>>::push_back(param_3,pGVar2);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,param_1);
    std::vector<GravityZombieData,std::allocator<GravityZombieData>>::erase
              ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)param_2,local_10);
    processTargetZombies(this,param_5,pGVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravitySubSystem::CrushZombies(CrushType) */

void __thiscall ArtifactGravitySubSystem::CrushZombies(ArtifactGravitySubSystem *this,int param_2)

{
  ArtifactGravitySubSystem AVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Zombie *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  long *plVar10;
  ArtifactGravitySubSystem *unaff_x23;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  Zombie *pZVar12;
  float fVar11;
  __normal_iterator *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  undefined8 local_30;
  undefined8 uStack_28;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_58);
  switch(param_2) {
  case 0:
    unaff_x23 = this + 0x40;
    Sexy::Insets::Insets
              ((Insets *)&local_30,*(int *)(this + 0x10) + -2,*(int *)(this + 0x14) + -2,5,5);
                    /* WARNING: Load size is inaccurate */
    pZVar12._0_4_ = *(Zombie **)(this + 0x30);
    local_58 = local_30;
    uStack_50 = uStack_28;
    break;
  case 1:
    unaff_x23 = this + 0x58;
    Sexy::Insets::Insets((Insets *)&local_30,*(int *)(this + 0x18),*(int *)(this + 0x1c),1,1);
                    /* WARNING: Load size is inaccurate */
    pZVar12._0_4_ = *(Zombie **)(this + 0x34);
    local_58 = local_30;
    uStack_50 = uStack_28;
    break;
  case 2:
    unaff_x23 = this + 0x70;
    Sexy::Insets::Insets((Insets *)&local_30,*(int *)(this + 0x20),*(int *)(this + 0x24),1,1);
                    /* WARNING: Load size is inaccurate */
    pZVar12._0_4_ = *(Zombie **)(this + 0x38);
    local_58 = local_30;
    uStack_50 = uStack_28;
    break;
  case 3:
    unaff_x23 = this + 0x88;
    Sexy::Insets::Insets((Insets *)&local_30,*(int *)(this + 0x28),*(int *)(this + 0x2c),1,1);
                    /* WARNING: Load size is inaccurate */
    pZVar12._0_4_ = *(Zombie **)(this + 0x3c);
    local_58 = local_30;
    uStack_50 = uStack_28;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
  EntityFinder::GetEntitiesInGridSquares(avStack_48,2,(Insets *)&local_58);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_48);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_48);
  do {
    AVar1 = (ArtifactGravitySubSystem)
            __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!(bool)AVar1) {
      if ((param_2 == 0) && (this[0xb8] != (ArtifactGravitySubSystem)0x0)) {
        this[0xb8] = AVar1;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_48);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    nop();
    cVar2 = canNotBeTargeted(this,this_00);
    if (cVar2 == '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)unaff_x23);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)unaff_x23);
      local_98 = FUN_037f3fec(uVar7,uVar8,this_00);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)unaff_x23);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_98,(__normal_iterator *)&local_30);
      if (bVar3) {
        local_b8 = (__normal_iterator *)&local_90;
        this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x40);
        GravityZombieData::GravityZombieData((GravityZombieData *)&local_30);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_01);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_01);
        local_90 = FUN_037f419c(uVar7,uVar8,this_00);
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_01);
        bVar3 = __gnu_cxx::operator!=(local_b8,(__normal_iterator *)local_68);
        if (!bVar3) {
          this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x58);
          local_b8 = (__normal_iterator *)&local_88;
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_01);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_01);
          local_88 = FUN_037f434c(uVar7,uVar8,this_00);
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_01);
          bVar3 = __gnu_cxx::operator!=(local_b8,(__normal_iterator *)local_68);
          if (!bVar3) {
            this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x70);
            local_b8 = (__normal_iterator *)&local_80;
            uVar7 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(this_01);
            uVar8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_01);
            local_80 = FUN_037f44fc(uVar7,uVar8,this_00);
            local_68[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(this_01);
            bVar3 = __gnu_cxx::operator!=(local_b8,(__normal_iterator *)local_68);
            if (!bVar3) {
              this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x88);
              local_b8 = (__normal_iterator *)&local_78;
              uVar7 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin(this_01);
              uVar8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_01);
              local_78 = FUN_037f46ac(uVar7,uVar8,this_00);
              local_68[0] = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::end(this_01);
              bVar3 = __gnu_cxx::operator!=(local_b8,(__normal_iterator *)local_68);
              if (!bVar3) {
                EATextSquish::Vec3::Vec3((Vec3 *)local_68,-3.0,-35.0,0.0);
                Zombie::AddAttachedEffect
                          (this_00,"artifact_gravity_slowdown",
                           "POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT","suduxian",
                           (SexyVector3 *)local_68,(uint)bVar3,bVar3);
                Zombie::SetIsBeingPulledByOlivePit(this_00,true);
                RealObject::SetDisableSnapToGround((RealObject *)this_00,true);
                Zombie::ApplyCondition(pZVar12._0_4_,0,this_00,0x33,1);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)&local_30,
                           (RtWeakPtrBase *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
                local_1c = (float)PVZ_T();
                local_14 = 0;
                iVar4 = (**(code **)(*(long *)this_00 + 200))(this_00);
                pfVar9 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)this_00);
                fVar11 = *pfVar9;
                iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
                iVar5 = BoardTransforms::GridToBoardSpaceY(iVar5);
                createSoilEffect(this,(int)fVar11,iVar5,iVar4 + 1);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_70,(RtWeakPtrBase *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
                iVar4 = Zombie::GetSizeType(this_00);
                if (iVar4 == 2) {
                  plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
                  (**(code **)(*plVar10 + 0x80))(0x40000000);
                }
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)&uStack_28,(RtWeakPtr *)aRStack_70);
                bVar3 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)this_00);
                if (bVar3) {
                  local_18 = local_1c + 2.0;
                  local_10 = 0xc1c80000;
                }
                else {
                  uVar6 = Zombie::GetSizeType(this_00);
                  if (uVar6 < 3) {
                    local_18 = *(float *)(&DAT_05751a90 + (ulong)uVar6 * 4);
                    local_10 = *(undefined4 *)(&DAT_05751aa0 + (ulong)uVar6 * 4);
                  }
                  else {
                    local_10 = 0;
                    local_18 = 0.0;
                  }
                  local_18 = local_18 + local_1c;
                }
                std::vector<GravityZombieData,std::allocator<GravityZombieData>>::push_back
                          ((vector<GravityZombieData,std::allocator<GravityZombieData>> *)unaff_x23,
                           (GravityZombieData *)&local_30);
                processTargetZombies(this,param_2,(GravityZombieData *)&local_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
                DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                          ((DragonBruitLauncherEntry *)&local_30);
                goto LAB_037f6948;
              }
            }
          }
        }
        crushExistZombie(this,local_b8,this_01,unaff_x23,param_2);
        DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                  ((DragonBruitLauncherEntry *)&local_30);
      }
      else {
        uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        processTargetZombies(this,param_2,uVar7);
      }
    }
LAB_037f6948:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  } while( true );
}

