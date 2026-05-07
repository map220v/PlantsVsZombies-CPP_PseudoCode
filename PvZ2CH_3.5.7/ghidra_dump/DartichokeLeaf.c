// Class: DartichokeLeaf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::CheckValidKillZombie(Zombie*) */

void __thiscall DartichokeLeaf::CheckValidKillZombie(DartichokeLeaf *this,Zombie *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    uVar2 = 0;
  }
  else {
    Zombie::GetClassType();
    bVar1 = std::operator==(asStack_10,"ZombieImp");
    if ((bVar1) || (iVar3 = Zombie::GetSizeType(param_1), iVar3 == 0)) {
      uVar2 = Zombie::CanTakeFatalDamage(param_1);
    }
    else {
      uVar2 = 0;
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::StaticClassInit() */

void DartichokeLeaf::StaticClassInit(void)

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
    std::string::string(asStack_10,"DartichokeLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_042e36f8,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DartichokeLeaf::StaticGetClass() */

long * DartichokeLeaf::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeLeaf::GetClass() const */

long * DartichokeLeaf::GetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeLeaf::~DartichokeLeaf() */

void __thiscall DartichokeLeaf::~DartichokeLeaf(DartichokeLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_06830d40;
  *(undefined ***)(this + 0x10) = &PTR__DartichokeLeaf_06830f30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DartichokeLeaf::~DartichokeLeaf() */

void __thiscall DartichokeLeaf::~DartichokeLeaf(DartichokeLeaf *this)

{
  ~DartichokeLeaf(this + -0x10);
  return;
}


/* DartichokeLeaf::~DartichokeLeaf() */

void __thiscall DartichokeLeaf::~DartichokeLeaf(DartichokeLeaf *this)

{
  ~DartichokeLeaf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DartichokeLeaf::~DartichokeLeaf() */

void __thiscall DartichokeLeaf::~DartichokeLeaf(DartichokeLeaf *this)

{
  ~DartichokeLeaf(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::SetOverrideTarget(BoardEntity*) */

void __thiscall DartichokeLeaf::SetOverrideTarget(DartichokeLeaf *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DartichokeLeaf::onDeflection(BoardEntity*) */

void DartichokeLeaf::onDeflection(BoardEntity *param_1)

{
  FUN_042e10f8(0,param_1 + 0xc4);
  SetOverrideTarget((DartichokeLeaf *)param_1,(BoardEntity *)0x0);
  param_1[0x1b1] = (BoardEntity)0x1;
  return;
}


/* DartichokeLeaf::DartichokeLeaf() */

void __thiscall DartichokeLeaf::DartichokeLeaf(DartichokeLeaf *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06830d40;
  *(undefined ***)(this + 0x10) = &PTR__DartichokeLeaf_06830f30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b1] = (DartichokeLeaf)0x0;
  this[0x1b0] = (DartichokeLeaf)0x1;
  uVar1 = PVZ_T();
  this[0x1b8] = (DartichokeLeaf)0x0;
  *(undefined4 *)(this + 0x1b4) = uVar1;
  return;
}


/* DartichokeLeaf::StaticNew() */

DartichokeLeaf * DartichokeLeaf::StaticNew(void)

{
  DartichokeLeaf *this;
  
  this = ::operator_new(0x1c0);
  DartichokeLeaf(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::KillSplashZombies() */

void __thiscall DartichokeLeaf::KillSplashZombies(DartichokeLeaf *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Zombie *this_00;
  int in_w4;
  ulong uVar9;
  undefined8 uVar10;
  FastCurve aFStack_38 [4];
  float local_34;
  int local_2c;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = Projectile::getProps((Projectile *)this);
  if (0.0 < *(float *)(lVar6 + 0x60)) {
    uVar9 = 0;
    Sexy::FastCurve::SetOutRange(aFStack_38,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    iVar2 = FUN_042e10f0(*(undefined4 *)(this + 0xa8));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar2,1,1,in_w4);
    local_34 = (float)(local_2c + local_24 / 2);
    iVar2 = (int)*(float *)(lVar6 + 0x60) / 2;
    iVar3 = FUN_042e10f0(*(undefined4 *)(this + 0xa8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar4 = operator|(2,4);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(lVar6 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
               aFStack_38,iVar3 - iVar2,iVar2 + iVar3);
    uVar10 = local_20;
    lVar6 = FUN_042e1170(local_20,local_18);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_042e117c(uVar10,uVar9);
        uVar4 = FUN_042e10e4(*(undefined4 *)(this + 0x24));
        cVar1 = RealObject::IsOnOpposingTeam(*puVar7,uVar4);
        if (cVar1 != '\0') {
          puVar7 = (undefined8 *)FUN_042e117c(local_20,uVar9);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          cVar1 = CheckValidKillZombie(this,this_00);
          if (cVar1 != '\0') {
            Sexy::OutputDebugStrF((wchar_t *)"kill mid and imp zombie");
            Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
          }
        }
        uVar10 = local_20;
        uVar9 = uVar9 + 1;
        uVar8 = FUN_042e1170(local_20,local_18);
      } while (uVar9 < uVar8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::TakeLevel5Damage(BoardEntity*) */

void __thiscall DartichokeLeaf::TakeLevel5Damage(DartichokeLeaf *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  long extraout_x0;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x1e8);
  if (param_1 != (BoardEntity *)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    local_58 = 0x80;
    local_60 = uVar1;
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
/* DartichokeLeaf::handleImpact(BoardEntity*) */

void __thiscall DartichokeLeaf::handleImpact(DartichokeLeaf *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  BoardEntity *pBVar4;
  GridItemProtectorShieldSegment *pGVar5;
  long lVar6;
  float *pfVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  char *pcVar10;
  Vec3 *__n;
  code *__n_00;
  DartichokeLeaf DVar11;
  float fVar12;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Projectile::getProps((Projectile *)this);
  pBVar4 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8))
  ;
  if (this[0x1b8] == (DartichokeLeaf)0x0) {
    (**(code **)(*(long *)this + 0x170))(this,param_1);
    cVar2 = FUN_0547419c(lVar3 + 0x140);
    if (cVar2 == '\0') {
      lVar6 = Projectile::getProps((Projectile *)this);
      GetPAMByName((string *)(lVar6 + 0x140));
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar2 != '\0') {
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_20);
        Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
        if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
          fVar12 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
          local_20 = local_20 + *(float *)(this + 0x18);
        }
        else {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_1);
          fVar12 = (local_1c + pfVar7[1]) - pfVar7[2];
          local_20 = local_20 + *pfVar7;
        }
        pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(pEVar8,true);
        EATextSquish::Vec3::Vec3(aVStack_18,local_20,fVar12,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar8,(SexyVector3 *)aVStack_18,-1);
        FUN_042e10e8(pEVar8 + 0x1c,*(int *)(this + 0x50) + 1);
        lVar6 = Projectile::getProps((Projectile *)this);
        pcVar10 = (char *)FUN_0547429c(lVar6 + 0x148);
        std::string::string((string *)aVStack_18,pcVar10);
        Effect_PopAnim::PlaySingleAnimation(pEVar8,aVStack_18,0);
        std::string::~string((string *)aVStack_18);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  else {
    __n = aVStack_18;
    std::string::string(asStack_30,"");
    nop();
    if (((pBVar4 == param_1) || (pBVar4 == (BoardEntity *)0x0)) ||
       ((param_1 != (BoardEntity *)0x0 &&
        (pGVar5 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>((RtObject *)param_1),
        pGVar5 != (GridItemProtectorShieldSegment *)0x0)))) {
      __n_00 = *(code **)(*(long *)this + 0x170);
      (*__n_00)(this,param_1);
      lVar6 = Projectile::getProps((Projectile *)this);
      pcVar10 = (char *)FUN_0547429c(lVar6 + 0x148);
      std::string::append(asStack_30,pcVar10,(size_t)__n_00);
    }
    else {
      std::string::append(asStack_30,"current",(size_t)__n);
    }
    cVar2 = FUN_0547419c(lVar3 + 0x140);
    if (cVar2 == '\0') {
      lVar6 = Projectile::getProps((Projectile *)this);
      GetPAMByName((string *)(lVar6 + 0x140));
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar2 != '\0') {
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_20);
        Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
        if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
          fVar12 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
          local_20 = local_20 + *(float *)(this + 0x18);
        }
        else {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_1);
          fVar12 = (local_1c + pfVar7[1]) - pfVar7[2];
          local_20 = local_20 + *pfVar7;
        }
        pEVar8 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
        Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(pEVar8,true);
        EATextSquish::Vec3::Vec3(aVStack_18,local_20,fVar12,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)pEVar8,(SexyVector3 *)aVStack_18,-1);
        FUN_042e10e8(pEVar8 + 0x1c,*(int *)(this + 0x50) + 1);
        Effect_PopAnim::PlaySingleAnimation(pEVar8,asStack_30,0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    std::string::~string(asStack_30);
  }
  DVar11 = this[0x1b8];
  iVar1 = *(int *)(this + 0x4c);
  if (DVar11 == (DartichokeLeaf)0x0) {
    if (((iVar1 < 1) || (*(int *)(this + 0x4c) = iVar1 + -1, iVar1 + -1 == 0)) &&
       (DVar11 = *(DartichokeLeaf *)(lVar3 + 0x65), DVar11 != (DartichokeLeaf)0x0)) {
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_042e3adc;
    }
  }
  else if (((iVar1 < 1) || (*(int *)(this + 0x4c) = iVar1 + -1, iVar1 + -1 == 0)) &&
          (((pBVar4 == param_1 || (pBVar4 == (BoardEntity *)0x0)) ||
           ((param_1 != (BoardEntity *)0x0 &&
            (pGVar5 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>((RtObject *)param_1),
            pGVar5 != (GridItemProtectorShieldSegment *)0x0)))))) {
    TakeLevel5Damage(this,param_1);
    KillSplashZombies(this);
    (**(code **)(*(long *)this + 0x48))(this);
    goto LAB_042e3adc;
  }
  DVar11 = (DartichokeLeaf)0x0;
LAB_042e3adc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(DVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeaf::moveThroughTime(float) */

void __thiscall DartichokeLeaf::moveThroughTime(DartichokeLeaf *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  long extraout_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar3;
  DVec3 *this_01;
  SexyVector3 *this_02;
  long extraout_x0_00;
  float *pfVar4;
  Zombie *pZVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  ulong uVar9;
  float fVar10;
  double dVar11;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  fVar10 = *(float *)(this + 0x1b4);
  Projectile::GetProps((Projectile *)this);
  nop();
  if (fVar10 + *(float *)(extraout_x0 + 0x1e4) < fVar6) {
    (**(code **)(*(long *)this + 0x48))(this);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  }
  else {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  }
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    Projectile::moveThroughTime((Projectile *)this,param_1);
  }
  else {
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    this_01 = (DVec3 *)Projectile::GetVelocity((Projectile *)this);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    fVar6 = (float)FUN_042e1268();
    uVar9 = (ulong)(uint)fVar6;
    uVar2 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar6,0.0);
    local_38 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_18);
    local_34 = (undefined4)uVar9;
    local_30 = uVar2;
    local_18 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,pSVar3);
    local_14 = (undefined4)uVar9;
    local_10 = uVar2;
    uVar7 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    local_24 = (undefined4)uVar9;
    local_28 = uVar7;
    local_20 = uVar2;
    fVar6 = (float)FUN_042e10f4(*(undefined4 *)(this + 0xc4));
    fVar10 = (float)FUN_042e1190(uVar7,uVar9,fVar6);
    Projectile::GetProps((Projectile *)this);
    nop();
    local_3c = *(float *)(extraout_x0_00 + 0x1e0) * 6.2831855 * param_1;
    if (this[0x1b0] != (DartichokeLeaf)0x0) {
      this[0x1b0] = (DartichokeLeaf)0x0;
      local_3c = 18.849556;
    }
    local_18 = Sexy::SexyMath::Fabs(fVar10 - fVar6);
    pfVar4 = eastl::min_alt<float>((float *)&local_18,&local_3c);
    if ((long)(double)(fVar10 - fVar6) < 0) {
      dVar11 = -ABS((double)*pfVar4) + (double)fVar6;
      dVar8 = (double)std::abs(dVar11);
    }
    else {
      dVar11 = ABS((double)*pfVar4) + (double)fVar6;
      dVar8 = (double)std::abs(dVar11);
    }
    if (3.1415927410125732 < dVar8) {
      dVar8 = 6.2831854820251465;
      if ((long)dVar11 < 0) {
        dVar8 = -6.2831854820251465;
      }
      dVar11 = dVar11 - dVar8;
    }
    FUN_042e10f8((float)dVar11,this + 0xc4);
    fVar6 = (float)DVec3::getLength(this_01);
    Projectile::SetRotatedVelocity((Projectile *)this,fVar6);
    Projectile::moveThroughTime((Projectile *)this,param_1);
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
    if (pZVar5 != (Zombie *)0x0) {
      uVar2 = FUN_042e10e4(*(undefined4 *)(this + 0x24));
      cVar1 = FUN_042e0fac(pZVar5,uVar2);
      if (cVar1 != '\0') {
        SetOverrideTarget(this,(BoardEntity *)0x0);
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
/* DartichokeLeaf::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   Sexy::TRect<int> const&) const */

void __thiscall
DartichokeLeaf::getCollisionEntities(DartichokeLeaf *this,vector *param_1,TRect *param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  GridItemProtectorShieldSegment *pGVar3;
  undefined8 *puVar4;
  RtObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8))
  ;
  if (((byte)this[0x1b1] < (pRVar2 != (RtObject *)0x0)) && (this[0x1b8] == (DartichokeLeaf)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Projectile::getCollisionEntities((Projectile *)this,(vector *)avStack_20,param_2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      local_38 = (RtObject *)*puVar4;
      if (local_38 == (RtObject *)0x0) {
        if (pRVar2 == (RtObject *)0x0) {
LAB_042e4f30:
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                     (BoardEntity **)&local_38);
        }
      }
      else {
        pGVar3 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>(local_38);
        if ((pGVar3 != (GridItemProtectorShieldSegment *)0x0) || (pRVar2 == local_38))
        goto LAB_042e4f30;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    Projectile::getCollisionEntities((Projectile *)this,param_1,param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

