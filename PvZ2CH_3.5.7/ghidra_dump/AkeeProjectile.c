// Class: AkeeProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::ShowNormalMegaAkee() */

void __thiscall AkeeProjectile::ShowNormalMegaAkee(AkeeProjectile *this)

{
  PopAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_01");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::ShowFireMegaAkee() */

void __thiscall AkeeProjectile::ShowFireMegaAkee(AkeeProjectile *this)

{
  PopAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_02");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::ShowIceMegaAkee() */

void __thiscall AkeeProjectile::ShowIceMegaAkee(AkeeProjectile *this)

{
  PopAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_03");
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::StaticClassInit() */

void AkeeProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AkeeProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0411122c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AkeeProjectile::StaticGetClass() */

long * AkeeProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProjectile::GetClass() const */

long * AkeeProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AkeeProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AkeeProjectile::SetInitialLaunchValues(float, float, int) */

void __thiscall
AkeeProjectile::SetInitialLaunchValues(AkeeProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x1ac) = param_1;
  *(int *)(this + 0x1bc) = param_3;
  *(float *)(this + 0x1b0) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::HideAllLayer() */

void __thiscall AkeeProjectile::HideAllLayer(AkeeProjectile *this)

{
  undefined8 *puVar1;
  PopAnimRig *this_00;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  lVar2 = 0;
  local_8 = ___stack_chk_guard;
  do {
    this_00 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    puVar1 = (undefined8 *)((long)&PTR_s_custom_01_065fbb10 + lVar2);
    lVar2 = lVar2 + 8;
    std::string::string(asStack_10,(char *)*puVar1);
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  } while (lVar2 != 0x18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AkeeProjectile::onProjectileInitialized() */

void __thiscall AkeeProjectile::onProjectileInitialized(AkeeProjectile *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x1e8);
  *(undefined4 *)(this + 0x1a8) = 0;
  uVar2 = *(undefined4 *)(extraout_x0 + 0x1ec);
  *(undefined4 *)(this + 0x1b8) = uVar1;
  *(undefined4 *)(this + 0x1b4) = uVar2;
  return;
}


/* AkeeProjectile::AkeeProjectile() */

void __thiscall AkeeProjectile::AkeeProjectile(AkeeProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e5630;
  *(undefined ***)(this + 0x10) = &PTR__AkeeProjectile_067e5820;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* AkeeProjectile::StaticNew() */

AkeeProjectile * AkeeProjectile::StaticNew(void)

{
  AkeeProjectile *this;
  
  this = ::operator_new(0x1d8);
  AkeeProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::FissionProjectile() */

void __thiscall AkeeProjectile::FissionProjectile(AkeeProjectile *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  Board *pBVar6;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"AkeeDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar6._0_4_ = *puVar2;
  uVar5 = *(undefined4 *)((long)puVar2 + 4);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  uVar1 = Projectile::GetInstigator((Projectile *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  uVar1 = Board::AddProjectile
                    (pBVar6._0_4_,uVar5,0x42200000,uVar4,aRStack_18,uVar1,
                     *(undefined4 *)(lVar3 + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::damageEntitySpecial(BoardEntity*, bool) */

void __thiscall
AkeeProjectile::damageEntitySpecial(AkeeProjectile *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_70;
  DamageInfo aDStack_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (AkeeProjectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,param_1);
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = FUN_0410ec20(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar1,iVar2);
    local_58 = 0x400;
    if (!param_2) {
      local_58 = 0x1000000000000;
    }
    local_50 = local_70;
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::DealSplashDamage(BoardEntity*, bool) */

void __thiscall
AkeeProjectile::DealSplashDamage(AkeeProjectile *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long extraout_x0;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Zombie *pZVar9;
  long *plVar10;
  BoardEntity *pBVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  uint local_9c;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  if ((0.0 < *(float *)(extraout_x0 + 0x1fc)) && (0.0 < *(float *)(extraout_x0 + 0x200))) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
    local_60 = (float)FUN_0410ec3c(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                   *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    iVar12 = 0x400;
    local_60 = local_60 * *(float *)(extraout_x0 + 0x1fc);
    local_58[0] = 0x1000000000000;
    if (!param_2) {
      local_58[0] = 0x400;
    }
    SetFlag<DamageTypeFlags>(local_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(local_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,*(int *)(this + 0x1bc),1,1,iVar12);
    iVar1 = *(int *)(this + 0x1bc);
    iVar12 = (int)*(float *)(extraout_x0 + 0x200) / 2;
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = operator|(2,4);
    local_9c = uVar3;
    iVar4 = FUN_0410ec14(*(undefined4 *)(this + 0x24));
    if (iVar4 == 2) {
      operator|=(&local_9c,1);
      uVar3 = local_9c;
    }
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar13 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar4 * SQRT(*(float *)(extraout_x0 + 0x200)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
               aFStack_98,iVar1 - iVar12,iVar12 + iVar1);
    uVar14 = local_80;
    lVar6 = FUN_0410ec70(local_80,local_78);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_0410ec7c(uVar14,uVar13);
        uVar5 = FUN_0410ec14(*(undefined4 *)(this + 0x24));
        cVar2 = RealObject::IsOnOpposingTeam(*puVar7,uVar5);
        uVar14 = local_80;
        if (cVar2 != '\0') {
          puVar7 = (undefined8 *)FUN_0410ec7c(local_80,uVar13);
          pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          uVar14 = local_80;
          if (pZVar9 == (Zombie *)0x0) {
            plVar10 = (long *)FUN_0410ec7c(local_80,uVar13);
            pBVar11 = (BoardEntity *)*plVar10;
            if (pBVar11 != param_1) {
LAB_04110768:
              (**(code **)(*(long *)pBVar11 + 0x110))(pBVar11,aDStack_68);
              uVar14 = local_80;
              pcVar15 = *(code **)(*(long *)this + 0x1c8);
              puVar7 = (undefined8 *)FUN_0410ec7c(local_80,uVar13);
              if (pcVar15 != Projectile::onSplashDamageHitEntity) {
                (*pcVar15)(this,*puVar7);
                uVar14 = local_80;
              }
            }
          }
          else {
            cVar2 = (**(code **)(*(long *)pZVar9 + 0xb8))(pZVar9,7);
            uVar14 = local_80;
            if (((cVar2 != '\0') &&
                (cVar2 = Zombie::HasCondition(pZVar9,0x27), uVar14 = local_80, cVar2 == '\0')) &&
               (cVar2 = Zombie::HasCondition(pZVar9,0x25), uVar14 = local_80, cVar2 == '\0')) {
              plVar10 = (long *)FUN_0410ec7c(local_80,uVar13);
              pBVar11 = (BoardEntity *)*plVar10;
              if (pBVar11 != param_1) {
                if (!param_2) {
                  Zombie::EndCondition(pZVar9,param_2);
                  plVar10 = (long *)FUN_0410ec7c(local_80,uVar13);
                  pBVar11 = (BoardEntity *)*plVar10;
                }
                goto LAB_04110768;
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
        uVar8 = FUN_0410ec70(uVar14,local_78);
      } while (uVar13 < uVar8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::AddAvatarSpecialCollide(BoardEntity*) */

void __thiscall AkeeProjectile::AddAvatarSpecialCollide(AkeeProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  GridItem *pGVar7;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar8;
  PopAnimRig *this_01;
  Zombie *pZVar9;
  size_t sVar10;
  undefined8 uVar11;
  float fVar12;
  float local_30;
  float local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::getProps((Projectile *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  std::string::string(asStack_28,"");
  nop();
  if (param_1 != (BoardEntity *)0x0) {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar2) {
      pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      fVar12 = *(float *)(pZVar9 + 0x1c);
      local_30 = (float)FUN_0410ec90(*(undefined4 *)(pZVar9 + 0x18),fVar12,
                                     *(undefined4 *)(pZVar9 + 0x20));
      local_2c = fVar12;
      iVar5 = (**(code **)(*(long *)pZVar9 + 0x170))(pZVar9);
      bVar3 = true;
      iVar6 = Zombie::GetFacing(pZVar9);
      bVar2 = iVar6 == 1;
      iVar6 = *(int *)(this + 0x1a8);
      bVar1 = bVar2;
      if (iVar6 != 2) goto LAB_04110898;
LAB_04110a5c:
      damageEntitySpecial(this,param_1,true);
      sVar10 = 0;
      DealSplashDamage(this,param_1,false);
      std::string::append(asStack_28,"explode",sVar10);
      bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar3) {
        pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
        cVar4 = Zombie::HasCondition(pZVar9,0);
        if (cVar4 != '\0') {
          Zombie::EndCondition(pZVar9,0);
        }
      }
LAB_041108e8:
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_AKEE_PROJECTILE_PLANTFOOD_HIT");
      GetPAMByName(asStack_20);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar8,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
      nop();
      if (bVar2) {
        fVar12 = 78.0;
      }
      else {
        fVar12 = -78.0;
      }
      uVar11 = 1;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar12 + local_30,local_2c - 125.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
      FUN_0410ec18(this_00 + 0x1c,iVar5 + 1);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
      PopAnimRig::SetMirrorX(this_01,bVar2);
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_28,0);
      goto LAB_041109c8;
    }
    bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar2) {
      pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      fVar12 = *(float *)(pGVar7 + 0x1c);
      local_30 = (float)FUN_0410ec90(*(undefined4 *)(pGVar7 + 0x18),fVar12,
                                     *(undefined4 *)(pGVar7 + 0x20));
      local_2c = fVar12;
      iVar5 = (**(code **)(*(long *)pGVar7 + 0x170))();
      iVar6 = *(int *)(this + 0x1a8);
      bVar2 = false;
      bVar3 = false;
      bVar1 = false;
      if (iVar6 == 2) goto LAB_04110a5c;
LAB_04110898:
      bVar2 = bVar1;
      if (iVar6 == 3) {
        uVar11 = 0;
        if (!bVar3) goto LAB_041109c8;
        damageEntitySpecial(this,param_1,false);
        sVar10 = 1;
        DealSplashDamage(this,param_1,true);
        std::string::append(asStack_28,"ice",sVar10);
        bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar3) {
          pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
          Zombie::ApplyCondition((Zombie *)0x41200000,0,pZVar9,0,1);
        }
        goto LAB_041108e8;
      }
    }
  }
  uVar11 = 0;
LAB_041109c8:
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


/* AkeeProjectile::~AkeeProjectile() */

void __thiscall AkeeProjectile::~AkeeProjectile(AkeeProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e5630;
  *(undefined ***)(this + 0x10) = &PTR__AkeeProjectile_067e5820;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AkeeProjectile::~AkeeProjectile() */

void __thiscall AkeeProjectile::~AkeeProjectile(AkeeProjectile *this)

{
  ~AkeeProjectile(this + -0x10);
  return;
}


/* AkeeProjectile::~AkeeProjectile() */

void __thiscall AkeeProjectile::~AkeeProjectile(AkeeProjectile *this)

{
  ~AkeeProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AkeeProjectile::~AkeeProjectile() */

void __thiscall AkeeProjectile::~AkeeProjectile(AkeeProjectile *this)

{
  ~AkeeProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::findNearestTargetType(BoardEntityTypeFlag, int) */

void __thiscall
AkeeProjectile::findNearestTargetType(AkeeProjectile *this,undefined4 param_2,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Zombie *pZVar11;
  Plant *this_01;
  GridItem *pGVar12;
  RtObject *this_02;
  RtObject *pRVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == -1) {
    param_3 = *(int *)(this + 0x1bc);
  }
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  pRVar13 = (RtObject *)0x0;
  fVar16 = *pfVar7;
  fVar17 = pfVar7[1];
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar16);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar3,param_3,iVar4 - iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  fVar15 = *(float *)(this + 0x1b8) * *(float *)(this + 0x1b8);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar13);
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_02 = (RtObject *)*puVar8;
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_02);
    if ((cVar2 != '\0') &&
       (fVar14 = (float)FUN_0410ec90(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c)
                                     ,*(undefined4 *)(this_02 + 0x20)), (float)iVar3 <= fVar14)) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar14 = (float)FUN_0410ec90(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c),
                                   *(undefined4 *)(this_02 + 0x20));
      iVar5 = BoardTransforms::BoardSpaceToGridX(fVar14);
      if (iVar5 < iVar4) {
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
        ToolPacketData::GetProps();
        local_40 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar9,uVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        if (!bVar1) {
          pZVar11 = Sexy::RtObject::Cast<Zombie>(this_02);
          if (pZVar11 != (Zombie *)0x0) {
            uVar6 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(pZVar11,uVar6);
            if (((cVar2 != '\0') || (cVar2 = Zombie::HasCondition(pZVar11,0x27), cVar2 != '\0')) ||
               (cVar2 = Zombie::HasCondition(pZVar11,0x25), cVar2 != '\0')) goto LAB_04110ca0;
          }
          this_01 = Sexy::RtObject::Cast<Plant>(this_02);
          if (((this_01 == (Plant *)0x0) ||
              ((cVar2 = Plant::IsInvincible(this_01,false), cVar2 == '\0' &&
               (cVar2 = FUN_0410fa8c(*(undefined4 *)(this_01 + 0x28)), cVar2 == '\0')))) &&
             ((pGVar12 = Sexy::RtObject::Cast<GridItem>(this_02), pGVar12 == (GridItem *)0x0 ||
              (((cVar2 = RealObject::IsOnTeam(pGVar12,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x208))(pGVar12), cVar2 != '\0')) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar2 != '\0')))))))) {
            uVar6 = *(undefined4 *)(this_02 + 0x1c);
            local_48 = FUN_0410ec90(*(undefined4 *)(this_02 + 0x18),uVar6,
                                    *(undefined4 *)(this_02 + 0x20));
            fVar14 = fVar17;
            local_44 = uVar6;
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar16,fVar17);
            uVar6 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_40);
            local_38 = CONCAT44(fVar14,uVar6);
            fVar14 = (float)VectorNorm((FPoint *)&local_38);
            if (fVar14 < fVar15) {
              pRVar13 = this_02;
              fVar15 = fVar14;
            }
          }
        }
      }
    }
LAB_04110ca0:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* AkeeProjectile::findNextTarget(int) */

void __thiscall AkeeProjectile::findNextTarget(AkeeProjectile *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = operator|(1,2);
  lVar2 = findNearestTargetType(this,uVar1,param_1);
  if (lVar2 != 0) {
    return;
  }
  findNearestTargetType(this,4,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::DoFission() */

void AkeeProjectile::DoFission(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Projectile *in_x0;
  long extraout_x0;
  Zombie *pZVar4;
  RtObject *this;
  AkeeProjectile *this_00;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float in_s1;
  undefined4 in_s2;
  float fVar8;
  float fVar9;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps(in_x0);
  nop();
  iVar6 = *(int *)(in_x0 + 0x1bc) + -1;
  iVar1 = *(int *)(in_x0 + 0x1bc) + 1;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (4 < iVar1) {
    iVar1 = 4;
  }
  if (iVar6 <= iVar1) {
    do {
      this = (RtObject *)findNextTarget((AkeeProjectile *)in_x0,iVar6);
      if (this != (RtObject *)0x0) {
        FissionProjectile((AkeeProjectile *)in_x0);
        nop();
        DVec3::DVec3((DVec3 *)&local_28);
        bVar2 = Sexy::RtObject::IsA<Zombie>(this);
        if (bVar2) {
          pZVar4 = Sexy::RtObject::Cast<Zombie>(this);
          local_18 = (**(code **)(*(long *)pZVar4 + 0x3b0))(*(undefined4 *)(extraout_x0 + 500));
          local_14 = in_s1;
          local_10 = in_s2;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
          fVar7 = local_28;
          pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)in_x0);
          fVar8 = *pfVar5;
          if (fVar7 < fVar8) {
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            local_28 = fVar8 + (float)iVar3 * 0.5;
          }
        }
        else {
          bVar2 = Sexy::RtObject::IsA<GridItem>(this);
          if (bVar2) {
            Sexy::RtObject::Cast<GridItem>(this);
            GridItem::GetGridLocation();
            BoardTransforms::GridToBoardSpace((Point *)&local_18);
            in_s2 = 0x41c80000;
            local_28 = (float)local_30;
            local_20 = 0x41c80000;
            local_24 = (float)local_2c;
          }
          else {
            pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)in_x0);
            local_24 = pfVar5[1];
            local_28 = *pfVar5 + 600.0;
            local_20 = 0;
          }
        }
        fVar9 = *(float *)(extraout_x0 + 0x1f8);
        fVar7 = (float)Sexy::Rand(fVar9);
        fVar8 = *(float *)(extraout_x0 + 500);
        fVar7 = fVar7 + fVar9;
        in_s1 = (float)Sexy::Rand(fVar8 * 0.15);
        in_s1 = in_s1 + fVar8;
        SetInitialLaunchValues(this_00,fVar7,in_s1,iVar6);
        Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)&local_28,fVar7,in_s1);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_30);
        Projectile::SetTarget((Projectile *)this_00,(RtWeakPtr *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::RollProjectileStyle() */

void __thiscall AkeeProjectile::RollProjectileStyle(AkeeProjectile *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  iVar3 = 1;
  do {
    iVar1 = iVar3 + 1;
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,iVar3,1);
    iVar3 = iVar1;
  } while (iVar1 != 4);
  uVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
  *(undefined4 *)(this + 0x1a8) = uVar2;
  HideAllLayer(this);
  if (*(int *)(this + 0x1a8) == 2) {
    ShowFireMegaAkee(this);
  }
  else if (*(int *)(this + 0x1a8) == 3) {
    ShowIceMegaAkee(this);
  }
  else {
    ShowNormalMegaAkee(this);
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::DoBounce() */

void __thiscall AkeeProjectile::DoBounce(AkeeProjectile *this)

{
  long extraout_x0;
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != 0) {
    RollProjectileStyle(this);
  }
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar3 = *(float *)(extraout_x0 + 0x1ec);
  local_10[0] = *(float *)(this + 0x1ac) * fVar3;
  local_18[0] = 0x3f800000;
  pfVar1 = eastl::max_alt<float>((float *)local_18,local_10);
  fVar4 = *pfVar1;
  *(float *)(this + 0x1b8) = *(float *)(this + 0x1b8) * fVar3;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)findNextTarget(this,-1);
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
    Projectile::SetTarget((Projectile *)this,(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    Projectile::LaunchAt((Projectile *)this,pSVar2,fVar4,*(float *)(this + 0x1b0));
    SetInitialLaunchValues(this,fVar4,*(float *)(this + 0x1b0),*(int *)(this + 0x1bc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AkeeProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall AkeeProjectile::OnCollideEntity(AkeeProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long extraout_x0;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  cVar3 = '\0';
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1c0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (*(int *)(this + 0x1a8) - 2U < 2) {
    cVar3 = AddAvatarSpecialCollide(this,param_1);
  }
  Projectile::GetProps((Projectile *)this);
  nop();
  iVar4 = FUN_0410ec4c(*(undefined4 *)(this + 0x70));
  iVar1 = *(int *)(extraout_x0 + 0x1e4);
  if (1 < iVar4) {
    iVar1 = iVar1 + 1;
  }
  uVar5 = FUN_0410ec84(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1c8));
  if (((ulong)(long)iVar1 < uVar5) || (cVar2 = RealObject::IsOnOpposingTeam(this,2), cVar2 == '\0'))
  {
    if (cVar3 == '\0') {
      cVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    if (*(char *)(extraout_x0 + 0x1e0) == '\0') {
      DoBounce(this);
    }
    else {
      DoFission();
      (**(code **)(*(long *)this + 0x48))(this);
    }
    if (cVar3 == '\0') {
      cVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    }
    else {
      cVar3 = '\x01';
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* AkeeProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void AkeeProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  long extraout_x0;
  float fVar1;
  
  Projectile::fillDamageInfo(param_1,param_2);
  Projectile::GetProps((Projectile *)param_1);
  nop();
  fVar1 = (float)FUN_0410ec30(*(undefined4 *)(param_1 + 0xd8));
  FUN_0410ec34(fVar1 - *(float *)(extraout_x0 + 0x1f0),param_1 + 0xd8);
  return;
}

