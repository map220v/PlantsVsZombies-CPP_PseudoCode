// Class: RiflebambooProjectile_1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::handleImpact(BoardEntity*) */

void RiflebambooProjectile_1::handleImpact(BoardEntity *param_1)

{
  char cVar1;
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  ResistenceValueInfo aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x170))();
  Projectile::getProps((Projectile *)param_1);
  (**(code **)(*(long *)param_1 + 0x180))(asStack_20,param_1);
  cVar1 = FUN_0547419c(asStack_20);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_20);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_10);
      Projectile::calcRandomSplatOffset((Projectile *)param_1,(SexyVector2 *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* RiflebambooProjectile_1::applyConditions(BoardEntity*) */

RiflebambooProjectile_1 * __thiscall
RiflebambooProjectile_1::applyConditions(RiflebambooProjectile_1 *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    return (RiflebambooProjectile_1 *)(ulong)bVar1;
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::StaticClassInit() */

void RiflebambooProjectile_1::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiflebambooProjectile_1");
    (*pcVar2)(plVar1,asStack_10,FUN_04054154,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiflebambooProjectile_1::StaticGetClass() */

long * RiflebambooProjectile_1::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"RiflebambooProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiflebambooProjectile_1::GetClass() const */

long * RiflebambooProjectile_1::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"RiflebambooProjectile_1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiflebambooProjectile_1::~RiflebambooProjectile_1() */

void __thiscall RiflebambooProjectile_1::~RiflebambooProjectile_1(RiflebambooProjectile_1 *this)

{
  *(undefined ***)this = &PTR_GetClass_067c1380;
  *(undefined ***)(this + 0x10) = &PTR__RiflebambooProjectile_1_067c1578;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RiflebambooProjectile_1::~RiflebambooProjectile_1() */

void __thiscall RiflebambooProjectile_1::~RiflebambooProjectile_1(RiflebambooProjectile_1 *this)

{
  ~RiflebambooProjectile_1(this + -0x10);
  return;
}


/* RiflebambooProjectile_1::~RiflebambooProjectile_1() */

void __thiscall RiflebambooProjectile_1::~RiflebambooProjectile_1(RiflebambooProjectile_1 *this)

{
  ~RiflebambooProjectile_1(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiflebambooProjectile_1::~RiflebambooProjectile_1() */

void __thiscall RiflebambooProjectile_1::~RiflebambooProjectile_1(RiflebambooProjectile_1 *this)

{
  ~RiflebambooProjectile_1(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::RiflebambooProjectile_1() */

void __thiscall RiflebambooProjectile_1::RiflebambooProjectile_1(RiflebambooProjectile_1 *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (RiflebambooProjectile_1)0x1;
  this[0x1a6] = (RiflebambooProjectile_1)0x0;
  this[0x1a7] = (RiflebambooProjectile_1)0x0;
  *(undefined ***)this = &PTR_GetClass_067c1380;
  *(undefined ***)(this + 0x10) = &PTR__RiflebambooProjectile_1_067c1578;
  *(undefined4 *)(this + 0x1ac) = 0;
  this[0x1b4] = (RiflebambooProjectile_1)0x0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1c0) = 0x40400000;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"riflebamboo");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiflebambooProjectile_1::StaticNew() */

RiflebambooProjectile_1 * RiflebambooProjectile_1::StaticNew(void)

{
  RiflebambooProjectile_1 *this;
  
  this = ::operator_new(0x1c8);
  RiflebambooProjectile_1(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::OnCollideEntity(BoardEntity*) */

void __thiscall
RiflebambooProjectile_1::OnCollideEntity(RiflebambooProjectile_1 *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string *psVar4;
  Zombie *this_00;
  long *extraout_x0;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  DamageInfo *pDVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1e0))();
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"riflebamboo");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_68);
  nop();
  fVar7 = (float)PVZ_Dt();
  fVar8 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                              *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
  pDVar9._0_4_ = (DamageInfo *)(fVar7 * fVar8 * 100.0);
  iVar2 = FUN_040537d4(*(undefined4 *)(this + 0x70));
  if (iVar2 == 5) {
    pDVar9._0_4_ = (DamageInfo *)((float)pDVar9._0_4_ * 1.2);
  }
  if (this[0x1a6] != (RiflebambooProjectile_1)0x0) {
    if (this[0x1a7] == (RiflebambooProjectile_1)0x0) {
      fVar7 = (float)PVZ_Dt();
      fVar8 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      fVar7 = fVar7 * fVar8;
      fVar8 = 1000.0;
    }
    else {
      fVar7 = (float)PVZ_Dt();
      fVar8 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      fVar7 = fVar7 * fVar8;
      fVar8 = 1300.0;
    }
    pDVar9._0_4_ = (DamageInfo *)(fVar7 * fVar8 * 0.3);
  }
  if ((((param_1 != (BoardEntity *)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
      (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
     ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
      (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
    if (this[0x1a6] == (RiflebambooProjectile_1)0x0) {
      Zombie::ApplyCondition((Zombie *)0x3dcccccd,0,this_00,0x33,1);
    }
    else {
      Zombie::ApplyCondition((Zombie *)0x3dcccccd,0,this_00,0x34,1);
    }
  }
  nop();
  if (((extraout_x0 != (long *)0x0) && (cVar1 = (**(code **)(*extraout_x0 + 0xb8))(), cVar1 != '\0')
      ) && (cVar1 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar1 != '\0')) {
    pDVar9._0_4_ = (DamageInfo *)((float)pDVar9._0_4_ + (float)pDVar9._0_4_);
  }
  pcVar6 = *(code **)(*(long *)param_1 + 0x110);
  uVar5 = Projectile::GetInstigator((Projectile *)this);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(pDVar9._0_4_,local_70,local_6c,asStack_68,uVar5,aPStack_78,0);
  (*pcVar6)(param_1,asStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  uVar3 = (**(code **)(*(long *)this + 0x168))(this,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::explode() */

void __thiscall RiflebambooProjectile_1::explode(RiflebambooProjectile_1 *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  string *psVar9;
  undefined8 uVar10;
  Effect_PopAnim *pEVar11;
  ResourceInfo *pRVar12;
  float *pfVar13;
  long *plVar14;
  Insets *pIVar15;
  PlantType *this_00;
  RtObject *this_01;
  RiflebambooProps *pRVar16;
  int extraout_w1;
  int extraout_w1_00;
  ulong uVar17;
  code *pcVar18;
  float fVar19;
  float fVar20;
  DamageInfo *pDVar21;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  Insets aIStack_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Plant_MagGrass_Nitro_End");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  if (this[0x1a6] == (RiflebambooProjectile_1)0x0) {
    iVar2 = FUN_040537d4(*(undefined4 *)(this + 0x70));
    if (iVar2 < 5) {
      uVar17 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
      Projectile::CalcSweptCollisionRectBoardSpace();
      (**(code **)(*(long *)this + 0x188))
                (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88,
                 aIStack_98);
      uVar10 = local_88;
      uVar6 = FUN_040537f0(local_88,local_80);
      if (uVar6 != 0) {
        do {
          puVar7 = (undefined8 *)FUN_040537fc(uVar10,uVar17);
          if ((RtObject *)*puVar7 != (RtObject *)0x0) {
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
            if (pZVar8 != (Zombie *)0x0) {
              psVar9 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              std::string::string(asStack_68,"riflebamboo");
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
              std::string::~string(asStack_68);
              nop();
              fVar19 = (float)PVZ_Dt();
              fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),
                                           *(undefined4 *)(this + 0x17c),
                                           *(undefined4 *)(this + 0x180),
                                           *(undefined4 *)(this + 0x184));
              pDVar21._0_4_ = (DamageInfo *)(fVar19 * fVar20 * 100.0 * 0.3);
              iVar2 = FUN_040537d4(*(undefined4 *)(this + 0x70));
              if (iVar2 == 5) {
                pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 1.2);
              }
              if (this[0x1a6] != (RiflebambooProjectile_1)0x0) {
                if (this[0x1a7] == (RiflebambooProjectile_1)0x0) {
                  fVar19 = (float)PVZ_Dt();
                  fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),
                                               *(undefined4 *)(this + 0x17c),
                                               *(undefined4 *)(this + 0x180),
                                               *(undefined4 *)(this + 0x184));
                  pDVar21._0_4_ = (DamageInfo *)(fVar19 * fVar20 * 1000.0 * 0.15);
                }
                else {
                  fVar19 = (float)PVZ_Dt();
                  fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),
                                               *(undefined4 *)(this + 0x17c),
                                               *(undefined4 *)(this + 0x180),
                                               *(undefined4 *)(this + 0x184));
                  pDVar21._0_4_ = (DamageInfo *)(fVar19 * fVar20 * 1300.0 * 0.18);
                }
              }
              pcVar18 = *(code **)(*(long *)pZVar8 + 0x110);
              uVar10 = Projectile::GetInstigator((Projectile *)this);
              Sexy::Point::Point(aPStack_a8,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
              DamageInfo::DamageInfo(pDVar21._0_4_,local_a0,local_9c,asStack_68,uVar10,aPStack_a8,0)
              ;
              (*pcVar18)(pZVar8,asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
            }
            uVar10 = local_88;
            uVar6 = FUN_040537f0(local_88,local_80);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar6);
      }
      pEVar11 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_a0,"POPANIM_EFFECTS_RIFLEBAMBOO_HIT2");
      GetPAMByName((string *)&local_a0);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar12,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)&local_a0);
      nop();
      pfVar13 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,*pfVar13 - 90.0,pfVar13[1] - 120.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar11,(SexyVector3 *)asStack_68,-1);
      std::string::string(asStack_68,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar11,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      uVar3 = FUN_040537bc(*(undefined4 *)(this + 0xa8));
      uVar3 = Board::MakeRenderOrder(0x639c0,uVar3,0x1f5);
      FUN_040537b4(pEVar11 + 0x1c,uVar3);
      (**(code **)(*(long *)this + 0x48))(this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
    }
    else {
      pfVar13 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this);
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar13);
      iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar13[1]);
      Sexy::Point::Point((Point *)&local_b8,iVar2,iVar4);
      iVar2 = BoardTransforms::GridToBoardSpaceX(local_b8);
      iVar4 = BoardTransforms::GridToBoardSpaceY(local_b4);
      pEVar11 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_88,"POPANIM_EFFECTS_RIFLEBAMBOO_HIT1");
      GetPAMByName((string *)&local_88);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
      Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar12,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      std::string::~string((string *)&local_88);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)(iVar2 + -100),(float)(iVar4 + -0x78),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)pEVar11,(SexyVector3 *)asStack_68,-1);
      std::string::string(asStack_68,"animation");
      Effect_PopAnim::PlaySingleAnimation(pEVar11,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      uVar3 = FUN_040537bc(*(undefined4 *)(this + 0xa8));
      uVar3 = Board::MakeRenderOrder(0x639c0,uVar3,0x1f5);
      FUN_040537b4(pEVar11 + 0x1c,uVar3);
      fVar19 = (float)PVZ_Dt();
      fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                   *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      pDVar21._0_4_ = (DamageInfo *)(fVar19 * fVar20 * 100.0 * 0.3);
      iVar5 = FUN_040537d4(*(undefined4 *)(this + 0x70));
      if (iVar5 == 5) {
        pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 1.2);
      }
      if (this[0x1a6] != (RiflebambooProjectile_1)0x0) {
        if (this[0x1a7] == (RiflebambooProjectile_1)0x0) {
          fVar19 = (float)PVZ_Dt();
          fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                       *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
          fVar19 = fVar19 * fVar20;
          fVar20 = 1000.0;
        }
        else {
          fVar19 = (float)PVZ_Dt();
          fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                       *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
          fVar19 = fVar19 * fVar20;
          fVar20 = 1300.0;
        }
        pDVar21._0_4_ = (DamageInfo *)(fVar19 * fVar20 * 0.18);
      }
      uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88,uVar10,
                 0x29);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88), bVar1)
      {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)asStack_68);
        Sexy::RtId::~RtId((RtId *)asStack_68);
        plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
        pIVar15 = (Insets *)(**(code **)(*plVar14 + 0x178))();
        Sexy::Insets::Insets(aIStack_98,pIVar15);
        Sexy::FastCurve::SetOutRange((FastCurve *)asStack_68,(float)iVar2,(float)iVar4);
        bVar1 = RectCircleIntersection<int>((TRect *)aIStack_98,(SexyVector2 *)asStack_68,60.0);
        if (bVar1) {
          plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          pcVar18 = *(code **)(*plVar14 + 0x110);
          uVar10 = Projectile::GetInstigator((Projectile *)this);
          Sexy::Point::Point(aPStack_a8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar21._0_4_,local_a0,local_9c,asStack_68,uVar10,aPStack_a8,0);
          (*pcVar18)(plVar14,asStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else {
    pfVar13 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar13);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar13[1]);
    Sexy::Point::Point((Point *)&local_c0,iVar2,iVar4);
    iVar2 = BoardTransforms::GridToBoardSpaceX(local_c0);
    iVar4 = BoardTransforms::GridToBoardSpaceY(local_bc);
    pEVar11 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_88,"POPANIM_EFFECTS_RIFLEBAMBOO_HIT1");
    GetPAMByName((string *)&local_88);
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar11,(PopAnim *)pRVar12,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_88);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)(iVar2 + -100),(float)(iVar4 + -0x78),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar11,(SexyVector3 *)asStack_68,-1);
    std::string::string(asStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar11,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
    uVar3 = FUN_040537bc(*(undefined4 *)(this + 0xa8));
    uVar3 = Board::MakeRenderOrder(0x639c0,uVar3,0x1f5);
    FUN_040537b4(pEVar11 + 0x1c,uVar3);
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_68,"riflebamboo");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    std::string::~string(asStack_68);
    nop();
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
    this_01 = (RtObject *)PlantType::GetProps(this_00);
    pRVar16 = Sexy::RtObject::Cast<RiflebambooProps>(this_01);
    iVar5 = FUN_040537d4(*(undefined4 *)(this + 0x70));
    fVar19 = (float)(iVar5 + 1);
    pDVar21._0_4_ = (DamageInfo *)(fVar19 * *(float *)(pRVar16 + 0x2c0));
    if (iVar5 == 5) {
      pDVar21._0_4_ = (DamageInfo *)((float)pDVar21._0_4_ * 1.2);
    }
    if (this[0x1a6] != (RiflebambooProjectile_1)0x0) {
      if (this[0x1a7] == (RiflebambooProjectile_1)0x0) {
        fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                     *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
        pDVar21._0_4_ = (DamageInfo *)(fVar19 * 250.0 * fVar20);
      }
      else {
        fVar20 = (float)FUN_040537c4(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                     *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
        pDVar21._0_4_ = (DamageInfo *)(fVar19 * 650.0 * fVar20);
      }
    }
    uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88,uVar10,
               0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_88), bVar1) {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)asStack_68);
      Sexy::RtId::~RtId((RtId *)asStack_68);
      plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
      pIVar15 = (Insets *)(**(code **)(*plVar14 + 0x178))();
      Sexy::Insets::Insets(aIStack_98,pIVar15);
      Sexy::FastCurve::SetOutRange((FastCurve *)asStack_68,(float)iVar2,(float)iVar4);
      bVar1 = RectCircleIntersection<int>((TRect *)aIStack_98,(SexyVector2 *)asStack_68,60.0);
      if (bVar1) {
        if (this[0x1a7] == (RiflebambooProjectile_1)0x0) {
          plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          pcVar18 = *(code **)(*plVar14 + 0x110);
          uVar10 = Projectile::GetInstigator((Projectile *)this);
          Sexy::Point::Point(aPStack_a8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar21._0_4_,local_a0,local_9c,asStack_68,uVar10,aPStack_a8,0);
          (*pcVar18)(plVar14,asStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        }
        else {
          plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          pcVar18 = *(code **)(*plVar14 + 0x110);
          uVar10 = Projectile::GetInstigator((Projectile *)this);
          Sexy::Point::Point(aPStack_a8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar21._0_4_,local_a0,local_9c,asStack_68,uVar10,aPStack_a8,0);
          (*pcVar18)(plVar14,asStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
          uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
          Zombie::ApplyCondition((Zombie *)0x40000000,0,uVar10,2,1);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_88,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_88);
    (**(code **)(*(long *)this + 0x48))(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProjectile_1::onUpdate(float) */

void RiflebambooProjectile_1::onUpdate(float param_1)

{
  RiflebambooProjectile_1 RVar1;
  char cVar2;
  int iVar3;
  RiflebambooProjectile_1 *in_x0;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  GridItem *pGVar7;
  BoardEntity **ppBVar8;
  PopAnimRig *pPVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(in_x0 + 0x1c0) <= *(float *)(in_x0 + 0x1a8)) {
    explode(in_x0);
  }
  else {
    uVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    Projectile::CalcSweptCollisionRectBoardSpace();
    (**(code **)(*(long *)in_x0 + 0x188))();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    uVar11 = local_68;
    uVar4 = FUN_040537f0(local_68,local_60);
    if (uVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_040537fc(uVar11,uVar10);
        if ((RtObject *)*puVar5 != (RtObject *)0x0) {
          pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
          if ((((pZVar6 != (Zombie *)0x0) &&
               (cVar2 = RealObject::IsOnOpposingTeam(pZVar6,1), cVar2 != '\0')) &&
              (cVar2 = (**(code **)(*(long *)pZVar6 + 0x328))(pZVar6), cVar2 == '\0')) &&
             (cVar2 = (**(code **)(*(long *)pZVar6 + 0x330))(pZVar6), cVar2 == '\0')) {
            ppBVar8 = (BoardEntity **)FUN_040537fc(local_68,uVar10);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,ppBVar8);
          }
          uVar11 = local_68;
          puVar5 = (undefined8 *)FUN_040537fc(local_68,uVar10);
          if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
              (pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), uVar11 = local_68,
              pGVar7 != (GridItem *)0x0)) &&
             (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(), uVar11 = local_68, cVar2 != '\0')) {
            ppBVar8 = (BoardEntity **)FUN_040537fc(local_68,uVar10);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,ppBVar8);
            uVar11 = local_68;
          }
          uVar4 = FUN_040537f0(uVar11,local_60);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
    iVar3 = FUN_040537f0(local_50,local_48);
    RVar1 = in_x0[0x1b4];
    if ((byte)RVar1 < (0 < iVar3)) {
      uVar12 = PVZ_T();
      *(undefined4 *)(in_x0 + 0x1b0) = uVar12;
      std::string::string((string *)&local_88,"Play_Plant_MagGrass_Nitro_Start");
      RealObject::PlayPositionalSound((RealObject *)in_x0,(string *)&local_88,0.0);
      std::string::~string((string *)&local_88);
      nop();
      fVar13 = (float)FUN_040537c0(*(undefined4 *)(in_x0 + 0x170));
      if (fVar13 == 1.0) {
        *(undefined4 *)(in_x0 + 0x1c0) = 0x40400000;
      }
      else if (fVar13 == 1.5) {
        *(undefined4 *)(in_x0 + 0x1c0) = 0x40800000;
      }
      else {
        *(undefined4 *)(in_x0 + 0x1c0) = 0x40a00000;
      }
      if (in_x0[0x1a6] != (RiflebambooProjectile_1)0x0) {
        *(undefined4 *)(in_x0 + 0x1c0) = 0x40a00000;
      }
      puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
      local_80 = *(undefined4 *)(puVar5 + 1);
      uStack_84 = (undefined4)((ulong)*puVar5 >> 0x20);
      _local_88 = CONCAT44(uStack_84,0x42040000);
      Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_88);
      in_x0[0x1b4] = (RiflebambooProjectile_1)0x1;
    }
    else if (iVar3 == 0) {
      if (RVar1 != (RiflebambooProjectile_1)0x0) {
        fVar13 = (float)PVZ_T();
        *(float *)(in_x0 + 0x1a8) = (*(float *)(in_x0 + 0x1a8) - *(float *)(in_x0 + 0x1b0)) + fVar13
        ;
        std::string::string((string *)&local_88,"Play_Plant_MagGrass_Nitro_End");
        RealObject::PlayPositionalSound((RealObject *)in_x0,(string *)&local_88,0.0);
        std::string::~string((string *)&local_88);
        nop();
        puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
        local_80 = *(undefined4 *)(puVar5 + 1);
        uStack_84 = (undefined4)((ulong)*puVar5 >> 0x20);
        _local_88 = CONCAT44(uStack_84,0x43a68000);
        Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_88);
        in_x0[0x1b4] = (RiflebambooProjectile_1)0x0;
      }
    }
    else if (RVar1 != (RiflebambooProjectile_1)0x0) {
      fVar14 = *(float *)(in_x0 + 0x1a8);
      fVar13 = (float)PVZ_T();
      if (*(float *)(in_x0 + 0x1c0) <= (fVar14 - *(float *)(in_x0 + 0x1b0)) + fVar13) {
        explode(in_x0);
      }
      fVar14 = *(float *)(in_x0 + 0x1a8);
      fVar13 = (float)PVZ_T();
      if (((fVar14 - *(float *)(in_x0 + 0x1b0)) + fVar13 < 0.5) || (*(int *)(in_x0 + 0x1ac) != 0)) {
        fVar14 = *(float *)(in_x0 + 0x1a8);
        fVar13 = (float)PVZ_T();
        if ((2.0 <= (fVar14 - *(float *)(in_x0 + 0x1b0)) + fVar13) && (*(int *)(in_x0 + 0x1ac) == 1)
           ) {
          pPVar9 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
          std::string::string((string *)&local_88,"animation_03");
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
          PopAnimRig::PlayAndContinue(pPVar9,(string *)&local_88,0,aDStack_38);
          std::string::~string((string *)&local_88);
          nop();
          *(undefined4 *)(in_x0 + 0x1ac) = 2;
        }
      }
      else {
        pPVar9 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
        std::string::string((string *)&local_88,"animation_02");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar9,(string *)&local_88,0,aDStack_38);
        std::string::~string((string *)&local_88);
        nop();
        *(undefined4 *)(in_x0 + 0x1ac) = 1;
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

