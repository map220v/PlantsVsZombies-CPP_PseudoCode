// Class: PassionFlowerProjectile


/* PassionFlowerProjectile::setShouldStun(bool) */

void __thiscall PassionFlowerProjectile::setShouldStun(PassionFlowerProjectile *this,bool param_1)

{
  this[0x1b8] = (PassionFlowerProjectile)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectile::StaticClassInit() */

void PassionFlowerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PassionFlowerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0396a92c,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassionFlowerProjectile::StaticGetClass() */

long * PassionFlowerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerProjectile::GetClass() const */

long * PassionFlowerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectile::SetLevelAttack(int) */

void __thiscall PassionFlowerProjectile::SetLevelAttack(PassionFlowerProjectile *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1b4) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_Kongfu_Monk_Torch_Attack");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassionFlowerProjectile::getShouldStun() const */

PassionFlowerProjectile __thiscall
PassionFlowerProjectile::getShouldStun(PassionFlowerProjectile *this)

{
  return this[0x1b8];
}


/* PassionFlowerProjectile::setIsFoodProj(bool) */

void __thiscall PassionFlowerProjectile::setIsFoodProj(PassionFlowerProjectile *this,bool param_1)

{
  this[0x1d8] = (PassionFlowerProjectile)param_1;
  return;
}


/* PassionFlowerProjectile::getIsFoodProj() const */

PassionFlowerProjectile __thiscall
PassionFlowerProjectile::getIsFoodProj(PassionFlowerProjectile *this)

{
  return this[0x1d8];
}


/* PassionFlowerProjectile::getFoodTargetPos() const */

undefined4 __thiscall PassionFlowerProjectile::getFoodTargetPos(PassionFlowerProjectile *this)

{
  undefined4 local_10;
  
  local_10 = (undefined4)*(undefined8 *)(this + 0x1cc);
  return local_10;
}


/* PassionFlowerProjectile::PassionFlowerProjectile() */

void __thiscall PassionFlowerProjectile::PassionFlowerProjectile(PassionFlowerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1b8] = (PassionFlowerProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_066d5eb0;
  *(undefined ***)(this + 0x10) = &PTR__PassionFlowerProjectile_066d60a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  this[0x1c8] = (PassionFlowerProjectile)0x0;
  DVec3::DVec3((DVec3 *)(this + 0x1cc));
  this[0x1d8] = (PassionFlowerProjectile)0x0;
  this[0x1d9] = (PassionFlowerProjectile)0x0;
  this[0x1da] = (PassionFlowerProjectile)0x0;
  return;
}


/* PassionFlowerProjectile::StaticNew() */

PassionFlowerProjectile * PassionFlowerProjectile::StaticNew(void)

{
  PassionFlowerProjectile *this;
  
  this = ::operator_new(0x1e0);
  PassionFlowerProjectile(this);
  return this;
}


/* PassionFlowerProjectile::~PassionFlowerProjectile() */

void __thiscall PassionFlowerProjectile::~PassionFlowerProjectile(PassionFlowerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5eb0;
  *(undefined ***)(this + 0x10) = &PTR__PassionFlowerProjectile_066d60a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PassionFlowerProjectile::~PassionFlowerProjectile() */

void __thiscall PassionFlowerProjectile::~PassionFlowerProjectile(PassionFlowerProjectile *this)

{
  ~PassionFlowerProjectile(this + -0x10);
  return;
}


/* PassionFlowerProjectile::~PassionFlowerProjectile() */

void __thiscall PassionFlowerProjectile::~PassionFlowerProjectile(PassionFlowerProjectile *this)

{
  ~PassionFlowerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PassionFlowerProjectile::~PassionFlowerProjectile() */

void __thiscall PassionFlowerProjectile::~PassionFlowerProjectile(PassionFlowerProjectile *this)

{
  ~PassionFlowerProjectile(this + -0x10);
  return;
}


/* PassionFlowerProjectile::onProjectileInitialized() */

void __thiscall PassionFlowerProjectile::onProjectileInitialized(PassionFlowerProjectile *this)

{
  RtObject *this_00;
  PassionFlowerProjectileProps *pPVar1;
  float fVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b4) = 1;
  fVar2 = (float)PVZ_T();
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pPVar1 = Sexy::RtObject::Cast<PassionFlowerProjectileProps>(this_00);
  *(float *)(this + 0x1b0) = fVar2 + *(float *)(pPVar1 + 0x1ec);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1ac) = uVar3;
  return;
}


/* PassionFlowerProjectile::setBoardTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PassionFlowerProjectile::setBoardTarget(PassionFlowerProjectile *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  RtObject *pRVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  pGVar6 = (GridItem *)0x0;
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar4);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
  if (cVar2 != '\0') {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar3);
    if (cVar2 != '\0') {
      if ((pGVar6 == (GridItem *)0x0) ||
         (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 == '\0')) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        if (pZVar5 == (Zombie *)0x0) {
          return;
        }
      }
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),param_2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PassionFlowerProjectile::OnCollideEntity(PassionFlowerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  undefined8 *puVar4;
  RtObject *pRVar5;
  PassionFlowerProjectileProps *pPVar6;
  PassionFlowerLV5SmallProjectile *pPVar7;
  PopAnimRig *pPVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  Board *pBVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1da] == (PassionFlowerProjectile)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x168))();
    this[0x1da] = (PassionFlowerProjectile)0x1;
  }
  else {
    uVar2 = 0;
  }
  Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
  if (((param_1 != (BoardEntity *)0x0) && (this[0x1b8] != (PassionFlowerProjectile)0x0)) &&
     (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) {
    Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar3,2,1);
  }
  if (*(int *)(this + 0x1a8) == 0) {
    *(undefined4 *)(this + 0x1a8) = 1;
    uVar11 = PVZ_T();
    *(undefined4 *)(this + 0x1ac) = uVar11;
    fVar10 = (float)PVZ_T();
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pPVar6 = Sexy::RtObject::Cast<PassionFlowerProjectileProps>(pRVar5);
    *(float *)(this + 0x1b0) = fVar10 + *(float *)(pPVar6 + 0x1ec);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
    setBoardTarget(this,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (this[0x1d9] == (PassionFlowerProjectile)0x0) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar12._0_4_ = *puVar4;
    uVar11 = *(undefined4 *)((long)puVar4 + 4);
    pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pPVar6 = Sexy::RtObject::Cast<PassionFlowerProjectileProps>(pRVar5);
    if (pPVar6 != (PassionFlowerProjectileProps *)0x0) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pPVar6 + 0x1e0));
      if (cVar1 != '\0') {
        uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_40,(RtWeakPtrBase *)(pPVar6 + 0x1e0));
        pRVar5 = (RtObject *)Board::AddProjectile(pBVar12._0_4_,uVar11,0,uVar9,aRStack_40,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        RealObject::JoinTeam((RealObject *)pRVar5,1);
        pPVar7 = Sexy::RtObject::Cast<PassionFlowerLV5SmallProjectile>(pRVar5);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        SpearProjectile::SetPlant((SpearProjectile *)pPVar7,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        this[0x1d9] = (PassionFlowerProjectile)0x1;
        pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string((string *)aRStack_40,"bullet3_big");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar8,aRStack_40,0,aDStack_38);
        std::string::~string((string *)aRStack_40);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectile::dealAreaDamage() */

void __thiscall PassionFlowerProjectile::dealAreaDamage(PassionFlowerProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  GridItem *pGVar5;
  Zombie *this_00;
  ResourceInfo *pRVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Bonk");
  uVar9 = 0;
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  DamageInfo::DamageInfo((DamageInfo *)asStack_68);
  (**(code **)(*(long *)this + 0x178))(this,asStack_68,0);
  lVar3 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_a0,(TRect *)(lVar3 + 0x120));
  Sexy::Insets::Insets
            (aIStack_90,(int)(local_a0 + *(float *)(this + 0x18)),
             (int)(local_9c + *(float *)(this + 0x1c)),(int)local_98,(int)local_94);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             aIStack_90,0xffffffff,0xffffffff);
  uVar10 = local_80;
  lVar3 = FUN_0396a6b0(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_0396a6bc(uVar10,uVar9);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b0,(RtWeakPtrBase *)aRStack_a8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      puVar4 = (undefined8 *)FUN_0396a6bc(local_80,uVar9);
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)FUN_0396a6bc(local_80,uVar9);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b0);
      if (cVar1 == '\0') {
LAB_0396ba74:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
      }
      else {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b0);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
        if ((cVar1 == '\0') ||
           ((pGVar5 != (GridItem *)0x0 &&
            (cVar1 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar1 == '\0'))))
        goto LAB_0396ba74;
        if (this_00 != (Zombie *)0x0) {
          cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
          if ((((cVar1 == '\0') &&
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
              (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')) {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
            (**(code **)(*plVar8 + 0x110))(plVar8,asStack_68);
            if (2 < *(int *)(this + 0x1b4)) {
              Zombie::ApplyCondition((Zombie *)0x3f19999a,0,this_00,0x33,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
              goto LAB_0396ba80;
            }
          }
          goto LAB_0396ba74;
        }
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
        (**(code **)(*plVar8 + 0x110))(plVar8,asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
      }
LAB_0396ba80:
      uVar10 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0396a6b0(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProjectile::onUpdate(float) */

void PassionFlowerProjectile::onUpdate(float param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  RtObject *pRVar5;
  PassionFlowerProjectileProps *pPVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int local_10;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x1a8) == 1) {
    fVar9 = *(float *)(in_x0 + 0x1b0);
    fVar8 = (float)PVZ_T();
    if (fVar9 < fVar8) {
      (**(code **)(*(long *)in_x0 + 0x48))();
      goto LAB_0396bc04;
    }
    fVar9 = *(float *)(in_x0 + 0x1ac);
    fVar8 = (float)PVZ_T();
    if (fVar9 < fVar8) {
      dealAreaDamage((PassionFlowerProjectile *)in_x0);
      fVar8 = (float)PVZ_T();
      pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)in_x0);
      pPVar6 = Sexy::RtObject::Cast<PassionFlowerProjectileProps>(pRVar5);
      *(float *)(in_x0 + 0x1ac) = fVar8 + *(float *)(pPVar6 + 0x1e8);
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1c0));
  if (cVar2 == '\0') {
    if ((in_x0[0x1d8] !=
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x0) &&
       (in_x0[0x1c8] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0)) {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      if (*(float *)(in_x0 + 0x1cc) < *pfVar4) {
        Projectile::SetPosition
                  ((Projectile *)in_x0,*(float *)(in_x0 + 0x1cc),*(float *)(in_x0 + 0x1d0),pfVar4[2]
                  );
        Projectile::SetVelocity((Projectile *)in_x0,0.0,0.0,0.0);
        in_x0[0x1c8] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        )0x1;
        *(undefined4 *)(in_x0 + 0x1a8) = 1;
        uVar7 = PVZ_T();
        *(undefined4 *)(in_x0 + 0x1ac) = uVar7;
        fVar8 = (float)PVZ_T();
        pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)in_x0);
        pPVar6 = Sexy::RtObject::Cast<PassionFlowerProjectileProps>(pRVar5);
        *(float *)(in_x0 + 0x1b0) = fVar8 + *(float *)(pPVar6 + 0x1ec);
      }
    }
  }
  else if (in_x0[0x1c8] ==
           (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            )0x0) {
    if (in_x0[0x1d8] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1c0));
      BoardEntity::CalcGridPosition();
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_10);
      BoardTransforms::GridToBoardSpaceXUnbounded(local_c);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      if (*pfVar4 <= (float)iVar3) goto LAB_0396bc04;
    }
    else {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      if (*pfVar4 <= *(float *)(in_x0 + 0x1cc)) goto LAB_0396bc04;
      Projectile::SetPosition
                ((Projectile *)in_x0,*(float *)(in_x0 + 0x1cc),*(float *)(in_x0 + 0x1d0),pfVar4[2]);
    }
    Projectile::SetVelocity((Projectile *)in_x0,0.0,0.0,0.0);
    in_x0[0x1c8] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
  }
LAB_0396bc04:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

