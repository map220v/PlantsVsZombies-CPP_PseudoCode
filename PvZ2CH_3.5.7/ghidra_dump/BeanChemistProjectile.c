// Class: BeanChemistProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::StaticClassInit() */

void BeanChemistProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeanChemistProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04251938,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeanChemistProjectile::StaticGetClass() */

long * BeanChemistProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeanChemistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistProjectile::GetClass() const */

long * BeanChemistProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BeanChemistProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeanChemistProjectile::~BeanChemistProjectile() */

void __thiscall BeanChemistProjectile::~BeanChemistProjectile(BeanChemistProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06819050;
  *(undefined ***)(this + 0x10) = &PTR__BeanChemistProjectile_06819240;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BeanChemistProjectile::~BeanChemistProjectile() */

void __thiscall BeanChemistProjectile::~BeanChemistProjectile(BeanChemistProjectile *this)

{
  ~BeanChemistProjectile(this + -0x10);
  return;
}


/* BeanChemistProjectile::~BeanChemistProjectile() */

void __thiscall BeanChemistProjectile::~BeanChemistProjectile(BeanChemistProjectile *this)

{
  ~BeanChemistProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BeanChemistProjectile::~BeanChemistProjectile() */

void __thiscall BeanChemistProjectile::~BeanChemistProjectile(BeanChemistProjectile *this)

{
  ~BeanChemistProjectile(this + -0x10);
  return;
}


/* BeanChemistProjectile::BeanChemistProjectile() */

void __thiscall BeanChemistProjectile::BeanChemistProjectile(BeanChemistProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1ac] = (BeanChemistProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_06819050;
  *(undefined ***)(this + 0x10) = &PTR__BeanChemistProjectile_06819240;
  *(undefined4 *)(this + 0x1b4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  return;
}


/* BeanChemistProjectile::StaticNew() */

BeanChemistProjectile * BeanChemistProjectile::StaticNew(void)

{
  BeanChemistProjectile *this;
  
  this = ::operator_new(0x1c0);
  BeanChemistProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::SetBulletType(BeanChemistBulletType) */

void __thiscall BeanChemistProjectile::SetBulletType(BeanChemistProjectile *this,undefined4 param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  char *pcVar2;
  RtClass *pRVar3;
  ResourceInfo *pRVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  long *plVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = param_2;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_50);
  if (*(int *)(this + 0x1a8) == 1) {
    pcVar2 = "POPANIM_EFFECTS_BEANCHEMIST_BULLET_BLUE";
  }
  else if (*(int *)(this + 0x1a8) == 2) {
    pcVar2 = "POPANIM_EFFECTS_BEANCHEMIST_BULLET_PURPLE";
  }
  else {
    pcVar2 = "POPANIM_EFFECTS_BEANCHEMIST_BULLET_GREEN";
  }
  std::string::string(asStack_48,pcVar2);
  GetPAMByName(asStack_48);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_50,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  this_00 = (RtMixedPtrBase *)(this + 0x38);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar7 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  std::string::string(asStack_48,"PopAnimRig");
  nop();
  pcVar2 = (char *)FUN_0547429c(asStack_48);
  pRVar3 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar2);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_50);
  pPVar5 = (PopAnimRig *)PopAnimRig::CreateRig((PopAnim *)pRVar4,pRVar3);
  lVar6 = Projectile::getProps((Projectile *)this);
  lVar6 = FUN_05474178(lVar6 + 0x100);
  if (lVar6 != 0) {
    lVar6 = Projectile::getProps((Projectile *)this);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar5,lVar6 + 0x100,0,aDStack_38);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::CreateSmoke(Sexy::Point) */

void __thiscall BeanChemistProjectile::CreateSmoke(BeanChemistProjectile *this,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  BeanChemistSmoke *pBVar4;
  JackOLanternGhost *pJVar5;
  Board *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04250e78(*(long *)(gLawnApp + 0x9f0) + 0xf8,*(long *)(gLawnApp + 0x9f0) + 0xfc,param_2
                      );
  if ((cVar1 != '\0') && (lVar3 = FUN_042533d8(*param_2,param_2[1]), lVar3 == 0)) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_70,"beanchemist_smoke");
    Board::AddGridItem(this_00,asStack_70,*param_2,param_2[1],1);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string(asStack_70);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_78);
    if (bVar2) {
      pBVar4 = (BeanChemistSmoke *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
      ;
      BeanChemistSmoke::SetBulletType(pBVar4,*(undefined4 *)(this + 0x1a8));
      DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
      (**(code **)(*(long *)this + 0x178))(this,aRStack_68,0);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      FUN_04250e60(local_60,lVar3 + 0x1b0);
      pJVar5 = (JackOLanternGhost *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
      ;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_70,(RtWeakPtrBase *)(this + 0x1b8));
      JackOLanternGhost::SetPlant(pJVar5,asStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      FUN_04250e68(lVar3 + 0x1b4,*(undefined4 *)(this + 0x1b0));
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      FUN_04250e70(*(undefined4 *)(this + 0x1b4),lVar3 + 0x1b8);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BeanChemistProjectile::OnCollideEntity(BeanChemistProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  BeanChemistProjectile BVar2;
  char cVar3;
  undefined4 uVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  Plant *this_00;
  Board *pBVar9;
  code *pcVar10;
  float fVar11;
  int local_80;
  int local_7c;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::playSound((Projectile *)this,param_1);
  if (param_1 != (BoardEntity *)0x0) {
    BoardEntity::CalcGridPosition();
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (pZVar5 != (Zombie *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      uVar4 = FUN_04250de4(*(undefined4 *)(this + 0x70));
      cVar3 = FUN_04253148(pZVar5,uVar4);
      if (cVar3 == '\0') {
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        BVar2 = this[0x1ac];
      }
      else {
        pcVar10 = *(code **)(*(long *)pZVar5 + 0x120);
        uVar6 = Projectile::GetInstigator((Projectile *)this);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,4,
                   uVar6,aPStack_78,0);
        (*pcVar10)(pZVar5,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        FUN_042536c8((FastCurve *)&local_70,*(undefined4 *)(this + 0x1a8));
        pBVar9 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
        cVar3 = Board::CanPlantAt(pBVar9,(TPoint *)&local_80,
                                  (RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        if (cVar3 != '\0') {
          local_68[0] = 1;
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x28));
          piVar8 = eastl::min_alt<int>((int *)(this + 0x1b0),(int *)(lVar7 + 0x2c));
          piVar8 = eastl::max_alt<int>((int *)local_68,piVar8);
          iVar1 = *piVar8;
          pBVar9 = *(Board **)(gLawnApp + 0x9f0);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          this_00 = (Plant *)Board::AddPlant(pBVar9,local_80,local_7c,(string *)(lVar7 + 8),iVar1,
                                             false,true,false,false);
          if (this_00 != (Plant *)0x0) {
            Plant::SetIsDuplicatePlant(this_00,true);
            fVar11 = (float)Sexy::Rand(1.0);
            if (((*(int *)(this + 0x1a8) - 1U < 2) &&
                (cVar3 = Plant::CanApplyPlantfood(this_00), cVar3 != '\0')) &&
               (fVar11 < *(float *)(this + 0x1b4))) {
              (**(code **)(**(long **)(this_00 + 0xa8) + 0x220))(*(long **)(this_00 + 0xa8));
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        BVar2 = this[0x1ac];
      }
      if (BVar2 != (BeanChemistProjectile)0x0) {
        Sexy::Point::Point((Point *)local_68,(TPoint *)&local_80);
        CreateSmoke(this,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      }
    }
  }
  (**(code **)(*(long *)this + 0x168))(this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::OnCollideGround() */

void __thiscall BeanChemistProjectile::OnCollideGround(BeanChemistProjectile *this)

{
  BoardTransforms *this_00;
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] != (BeanChemistProjectile)0x0) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    Sexy::Point::Point(aPStack_10,aTStack_18);
    CreateSmoke(this,aPStack_10);
  }
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeanChemistProjectile::getImpactPam() */

void BeanChemistProjectile::getImpactPam(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x1a8) == 1) {
    std::string::string(in_x8,"POPANIM_EFFECTS_BEANCHEMIST_BULLET_BLUE");
    nop();
  }
  else if (*(int *)(in_x0 + 0x1a8) == 2) {
    std::string::string(in_x8,"POPANIM_EFFECTS_BEANCHEMIST_BULLET_PURPLE");
    nop();
  }
  else {
    Projectile::getImpactPam();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

