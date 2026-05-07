// Class: SpringprincessProjectile


/* SpringprincessProjectile::DoBounce() */

void SpringprincessProjectile::DoBounce(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::StaticClassInit() */

void SpringprincessProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpringprincessProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040053a8,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringprincessProjectile::StaticGetClass() */

long * SpringprincessProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpringprincessProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringprincessProjectile::GetClass() const */

long * SpringprincessProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SpringprincessProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpringprincessProjectile::SetInitialLaunchValues(float, float, int) */

void __thiscall
SpringprincessProjectile::SetInitialLaunchValues
          (SpringprincessProjectile *this,float param_1,float param_2,int param_3)

{
  *(float *)(this + 0x214) = param_1;
  *(int *)(this + 0x1dc) = param_3;
  *(float *)(this + 0x218) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::HideAllLayer() */

void __thiscall SpringprincessProjectile::HideAllLayer(SpringprincessProjectile *this)

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
    puVar1 = (undefined8 *)((long)&PTR_s_custom_01_065fbaf0 + lVar2);
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


/* SpringprincessProjectile::onProjectileInitialized() */

void __thiscall SpringprincessProjectile::onProjectileInitialized(SpringprincessProjectile *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0x1e8);
  *(undefined4 *)(this + 0x210) = 0;
  uVar2 = *(undefined4 *)(extraout_x0 + 0x1ec);
  *(undefined4 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x21c) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::getSpringprincessProjectile(Sexy::Point&) */

void SpringprincessProjectile::getSpringprincessProjectile(Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar6;
  SpringprincessProjectile *this_00;
  int extraout_w1;
  undefined1 auVar7 [12];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2b);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      this_00 = (SpringprincessProjectile *)0x0;
LAB_04003700:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this_00);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar6[1]);
    Sexy::Point::Point((Point *)aRStack_30,iVar3,iVar4);
    this_00 = Sexy::RtObject::Cast<SpringprincessProjectile>((RtObject *)this);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aRStack_30,(TPoint *)param_1);
    iVar3 = extraout_w1;
    if ((this_00 != (SpringprincessProjectile *)0x0) && (cVar1 != '\0')) {
      auVar7 = Projectile::GetVelocity((Projectile *)this_00);
      iVar3 = auVar7._8_4_;
      if (*(float *)(auVar7._0_8_ + 8) == 0.0) {
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_04003700;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::FissionProjectile(int) */

void __thiscall
SpringprincessProjectile::FissionProjectile(SpringprincessProjectile *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  char *__s;
  undefined8 uVar4;
  float unaff_s8;
  Board *pBVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  if (this[0x1ae] == (SpringprincessProjectile)0x0) {
    uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "SpringprincessProjectileDefault";
  }
  else {
    uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "SpringprincessProjectile2Default";
  }
  std::string::string(asStack_30,__s);
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar1,0xc,aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_30);
  nop();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar5._0_4_ = *puVar3;
    unaff_s8 = *(float *)((long)puVar3 + 4);
  }
  else if (param_1 == 1) {
    pBVar5._0_4_ = (Board *)(*(float *)(this + 0x1e0) + 105.0);
    unaff_s8 = *(float *)(this + 0x1e4) + 102.0;
  }
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)a_Stack_38);
  uVar1 = Projectile::GetInstigator((Projectile *)this);
  lVar2 = Board::AddProjectile(pBVar5._0_4_,unaff_s8,0x42200000,uVar4,aRStack_18,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  FUN_04001e64(*(undefined4 *)(this + 0x170));
  FUN_04001e68(lVar2 + 0x170);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::OnEffectDone(StandaloneEffect*) */

void SpringprincessProjectile::OnEffectDone(StandaloneEffect *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Zombie *this_00;
  SexyVector3 *pSVar5;
  long extraout_x0;
  SpringprincessProjectile *this_01;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Point aPStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x1c0);
  local_8 = ___stack_chk_guard;
  Sexy::RtMixedPtrBase::IsValid(this);
  if (1 < *(int *)(param_1 + 0x1a8)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
    uVar4 = local_20;
    iVar2 = FUN_04001ed0(local_20,local_18);
    local_30 = *(undefined8 *)(param_1 + 0x1e0);
    local_28 = *(undefined4 *)(param_1 + 0x1e8);
    if (0 < iVar2) {
      fVar13 = 0.0;
      lVar6 = 0;
      do {
        FUN_04001edc(uVar4,lVar6);
        nop();
        if ((((this_00 == (Zombie *)0x0) ||
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) ||
            (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
           ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
            (cVar1 = Zombie::IsFlying(this_00), cVar1 != '\0')))) {
LAB_0400405c:
          if (iVar2 == 1) {
            *(Zombie **)(param_1 + 0x1b8) = this_00;
            pSVar5 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_30,pSVar5);
            break;
          }
        }
        else {
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_38)
          ;
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            goto LAB_0400405c;
          }
          cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this_00);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (cVar1 == '\0') goto LAB_0400405c;
          fVar10 = *(float *)(this_00 + 0x1c);
          FUN_04001f04(*(undefined4 *)(this_00 + 0x18),fVar10,*(undefined4 *)(this_00 + 0x20));
          fVar14 = *(float *)(param_1 + 0x1e4);
          fVar11 = *(float *)(this_00 + 0x1c);
          FUN_04001f04(*(undefined4 *)(this_00 + 0x18),fVar11,*(undefined4 *)(this_00 + 0x20));
          fVar12 = *(float *)(param_1 + 0x1e4);
          fVar8 = (float)FUN_04001f04(*(undefined4 *)(this_00 + 0x18),
                                      *(undefined4 *)(this_00 + 0x1c),
                                      *(undefined4 *)(this_00 + 0x20));
          fVar15 = *(float *)(param_1 + 0x1e0);
          fVar9 = (float)FUN_04001f04(*(undefined4 *)(this_00 + 0x18),
                                      *(undefined4 *)(this_00 + 0x1c),
                                      *(undefined4 *)(this_00 + 0x20));
          fVar8 = ABS((fVar9 - *(float *)(param_1 + 0x1e0)) * (fVar8 - fVar15) +
                      (fVar10 - fVar14) * (fVar11 - fVar12));
          if ((fVar13 == 0.0) || (fVar8 < fVar13)) {
            *(Zombie **)(param_1 + 0x1b8) = this_00;
            pSVar5 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_30,pSVar5);
            fVar13 = fVar8;
          }
        }
        lVar6 = lVar6 + 1;
        uVar4 = local_20;
      } while ((int)lVar6 < iVar2);
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded((float)local_30);
      iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(local_30._4_4_);
      Sexy::Point::Point(aPStack_40,iVar2,iVar3);
      Projectile::GetProps((Projectile *)param_1);
      nop();
      FissionProjectile((SpringprincessProjectile *)param_1,1);
      nop();
      Sexy::Rand(*(float *)(extraout_x0 + 0x1f8));
      FUN_04001ef8(this_01 + 0x24);
      Sexy::Rand(*(float *)(extraout_x0 + 500) * 0.15);
      iVar2 = *(int *)(param_1 + 0x1a8);
      uVar7 = *(undefined4 *)(param_1 + 0x170);
      this_01[0x1ac] = (SpringprincessProjectile)0x1;
      this_01[0x1ae] = (SpringprincessProjectile)0x1;
      *(int *)(this_01 + 0x1a8) = iVar2 + -1;
      FUN_04001e64(uVar7);
      FUN_04001e68(this_01 + 0x170);
      if ((*(long *)(param_1 + 0x1b8) != 0) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid(this), cVar1 != '\0')) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this_01 + 0x1c0),
                   (RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      }
      this_01[0x1af] = (SpringprincessProjectile)0x1;
      SetInitialLaunchValues(this_01,400.0,1.0,0);
      Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)&local_30,400.0,1.0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::DealSplashDamage(BoardEntity*, bool) */

void SpringprincessProjectile::DealSplashDamage(BoardEntity *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long extraout_x0;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Zombie *pZVar10;
  ulong *puVar11;
  long *plVar12;
  char in_w2;
  int in_w4;
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
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)param_1);
  nop();
  if ((0.0 < *(float *)(extraout_x0 + 0x1fc)) && (0.0 < *(float *)(extraout_x0 + 0x200))) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)param_1 + 0x178))(param_1,aDStack_68,0);
    local_60 = (float)FUN_04001e7c(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c)
                                   ,*(undefined4 *)(param_1 + 0x180),
                                   *(undefined4 *)(param_1 + 0x184));
    local_60 = local_60 * *(float *)(extraout_x0 + 0x1fc);
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)0x0,*(int *)(param_1 + 0x1dc),1,1,in_w4);
    iVar2 = *(int *)(param_1 + 0x1dc);
    iVar1 = (int)*(float *)(extraout_x0 + 0x200) / 2;
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar4 = operator|(2,4);
    local_9c = uVar4;
    iVar5 = FUN_04001e4c(*(undefined4 *)(param_1 + 0x24));
    if (iVar5 == 2) {
      operator|=(&local_9c,1);
      uVar4 = local_9c;
    }
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    uVar13 = 0;
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar5 * SQRT(*(float *)(extraout_x0 + 0x200)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
               aFStack_98,iVar2 - iVar1,iVar1 + iVar2);
    uVar14 = local_80;
    lVar7 = FUN_04001ed0(local_80,local_78);
    if (lVar7 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_04001edc(uVar14,uVar13);
        uVar6 = FUN_04001e4c(*(undefined4 *)(param_1 + 0x24));
        cVar3 = RealObject::IsOnOpposingTeam(*puVar8,uVar6);
        uVar14 = local_80;
        if (cVar3 != '\0') {
          puVar8 = (undefined8 *)FUN_04001edc(local_80,uVar13);
          pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          uVar14 = local_80;
          if (pZVar10 == (Zombie *)0x0) {
            puVar11 = (ulong *)FUN_04001edc(local_80,uVar13);
            plVar12 = (long *)*puVar11;
            if (plVar12 != (long *)(ulong)param_2) {
LAB_04004674:
              (**(code **)(*plVar12 + 0x110))(plVar12,aDStack_68);
              uVar14 = local_80;
              pcVar15 = *(code **)(*(long *)param_1 + 0x1c8);
              puVar8 = (undefined8 *)FUN_04001edc(local_80,uVar13);
              if (pcVar15 != Projectile::onSplashDamageHitEntity) {
                (*pcVar15)(param_1,*puVar8);
                uVar14 = local_80;
              }
            }
          }
          else {
            cVar3 = (**(code **)(*(long *)pZVar10 + 0xb8))(pZVar10,7);
            uVar14 = local_80;
            if (((cVar3 != '\0') &&
                (cVar3 = Zombie::HasCondition(pZVar10,0x27), uVar14 = local_80, cVar3 == '\0')) &&
               (cVar3 = Zombie::HasCondition(pZVar10,0x25), uVar14 = local_80, cVar3 == '\0')) {
              puVar11 = (ulong *)FUN_04001edc(local_80,uVar13);
              plVar12 = (long *)*puVar11;
              if (plVar12 != (long *)(ulong)param_2) {
                if (in_w2 == '\0') {
                  Zombie::EndCondition(pZVar10,0);
                  puVar11 = (ulong *)FUN_04001edc(local_80,uVar13);
                  plVar12 = (long *)*puVar11;
                }
                goto LAB_04004674;
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
        uVar9 = FUN_04001ed0(uVar14,local_78);
      } while (uVar13 < uVar9);
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
/* SpringprincessProjectile::AddAvatarSpecialCollide(BoardEntity*) */

void __thiscall
SpringprincessProjectile::AddAvatarSpecialCollide
          (SpringprincessProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  GridItem *pGVar6;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar7;
  PopAnimRig *this_01;
  Zombie *pZVar8;
  size_t sVar9;
  undefined8 uVar10;
  bool bVar11;
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
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      fVar12 = *(float *)(pZVar8 + 0x1c);
      local_30 = (float)FUN_04001f04(*(undefined4 *)(pZVar8 + 0x18),fVar12,
                                     *(undefined4 *)(pZVar8 + 0x20));
      local_2c = fVar12;
      iVar4 = (**(code **)(*(long *)pZVar8 + 0x170))(pZVar8);
      bVar3 = true;
      iVar5 = Zombie::GetFacing(pZVar8);
      bVar1 = iVar5 == 1;
      iVar5 = *(int *)(this + 0x210);
      bVar11 = bVar1;
      if (iVar5 != 2) goto LAB_040047a4;
LAB_04004844:
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      sVar9 = 0;
      DealSplashDamage((BoardEntity *)this,SUB81(param_1,0));
      std::string::append(asStack_28,"explode",sVar9);
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar1) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
        cVar2 = Zombie::HasCondition(pZVar8,0);
        if (cVar2 != '\0') {
          Zombie::EndCondition(pZVar8,0);
        }
      }
LAB_040048a4:
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_Springprincess_PROJECTILE_PLANTFOOD_HIT");
      GetPAMByName(asStack_20);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
      nop();
      if (bVar11 == false) {
        fVar12 = -78.0;
      }
      else {
        fVar12 = 78.0;
      }
      uVar10 = 1;
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar12 + local_30,local_2c - 125.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
      FUN_04001e50(this_00 + 0x1c,iVar4 + 1);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
      PopAnimRig::SetMirrorX(this_01,bVar11);
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_28,0);
      goto LAB_040047b0;
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      fVar12 = *(float *)(pGVar6 + 0x1c);
      local_30 = (float)FUN_04001f04(*(undefined4 *)(pGVar6 + 0x18),fVar12,
                                     *(undefined4 *)(pGVar6 + 0x20));
      local_2c = fVar12;
      iVar4 = (**(code **)(*(long *)pGVar6 + 0x170))();
      iVar5 = *(int *)(this + 0x210);
      bVar1 = false;
      bVar3 = false;
      bVar11 = false;
      if (iVar5 == 2) goto LAB_04004844;
LAB_040047a4:
      if (iVar5 == 3) {
        uVar10 = 0;
        if (!bVar3) goto LAB_040047b0;
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        sVar9 = 1;
        DealSplashDamage((BoardEntity *)this,SUB81(param_1,0));
        std::string::append(asStack_28,"ice",sVar9);
        bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        bVar11 = bVar1;
        if (bVar3) {
          pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
          Zombie::ApplyCondition((Zombie *)0x41200000,0,pZVar8,0,1);
        }
        goto LAB_040048a4;
      }
    }
  }
  uVar10 = 0;
LAB_040047b0:
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* SpringprincessProjectile::~SpringprincessProjectile() */

void __thiscall SpringprincessProjectile::~SpringprincessProjectile(SpringprincessProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b4130;
  *(undefined ***)(this + 0x10) = &PTR__SpringprincessProjectile_067b4320;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SpringprincessProjectile::~SpringprincessProjectile() */

void __thiscall SpringprincessProjectile::~SpringprincessProjectile(SpringprincessProjectile *this)

{
  ~SpringprincessProjectile(this + -0x10);
  return;
}


/* SpringprincessProjectile::~SpringprincessProjectile() */

void __thiscall SpringprincessProjectile::~SpringprincessProjectile(SpringprincessProjectile *this)

{
  ~SpringprincessProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SpringprincessProjectile::~SpringprincessProjectile() */

void __thiscall SpringprincessProjectile::~SpringprincessProjectile(SpringprincessProjectile *this)

{
  ~SpringprincessProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::DoFission(BoardEntity*) */

void __thiscall
SpringprincessProjectile::DoFission(SpringprincessProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  SpringprincessProjectile *this_00;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  Board *pBVar12;
  undefined4 uVar13;
  float fVar14;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  DVec3 aDStack_40 [16];
  int local_30;
  uint uStack_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  iVar11 = -1;
  iVar1 = *(int *)(this + 0x1dc) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FissionProjectile(this,0);
  nop();
  DVec3::DVec3(aDStack_40);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar5);
  iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar5[1]);
  Sexy::Point::Point((Point *)&local_50,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  do {
    uVar10 = iVar11 + local_50;
    if (uVar10 < 9) {
      if ((local_4c - 1 < 5) && (pBVar12 = *(Board **)(gLawnApp + 0x9f0), pBVar12 != (Board *)0x0))
      {
        Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_50);
        local_30 = local_30 + iVar11;
        uStack_2c = uStack_2c - 1;
        cVar2 = Board::IsPitOfDoom(pBVar12,(Point *)&local_30);
        if ((cVar2 == '\0') &&
           (((cVar2 = Board::IsSky(pBVar12,(Point *)&local_30), cVar2 == '\0' &&
             (cVar2 = Board::IsShallowWater(pBVar12,(Point *)&local_30), cVar2 == '\0')) &&
            (lVar6 = getSpringprincessProjectile((Point *)&local_30), lVar6 == 0)))) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_30
                    );
        }
        goto LAB_04004c10;
      }
      if (iVar11 == 0) {
        uVar10 = local_50;
        if (8 < local_50) goto LAB_04004d04;
      }
      else {
LAB_04004c24:
        if ((local_4c < 5) && (pBVar12 = *(Board **)(gLawnApp + 0x9f0), pBVar12 != (Board *)0x0)) {
          Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_50);
          local_30 = local_30 + iVar11;
          cVar2 = Board::IsPitOfDoom(pBVar12,(Point *)&local_30);
          if (((cVar2 == '\0') &&
              ((cVar2 = Board::IsSky(pBVar12,(Point *)&local_30), cVar2 == '\0' &&
               (cVar2 = Board::IsShallowWater(pBVar12,(Point *)&local_30), cVar2 == '\0')))) &&
             (lVar6 = getSpringprincessProjectile((Point *)&local_30), lVar6 == 0)) {
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,
                       (Point *)&local_30);
          }
          goto LAB_04004c84;
        }
      }
LAB_04004c94:
      if ((local_4c + 1 < 5) && (pBVar12 = *(Board **)(gLawnApp + 0x9f0), pBVar12 != (Board *)0x0))
      {
        Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_50);
        local_30 = local_30 + iVar11;
        uVar10 = uStack_2c + 1;
        uStack_2c = uVar10;
        cVar2 = Board::IsPitOfDoom(pBVar12,(Point *)&local_30);
        if ((cVar2 == '\0') &&
           (((cVar2 = Board::IsSky(pBVar12,(Point *)&local_30), cVar2 == '\0' &&
             (cVar2 = Board::IsShallowWater(pBVar12,(Point *)&local_30), cVar2 == '\0')) &&
            (lVar6 = getSpringprincessProjectile((Point *)&local_30), lVar6 == 0)))) {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_30
                    );
        }
      }
    }
    else {
LAB_04004c10:
      if (iVar11 == 0) {
LAB_04004c84:
        uVar10 = iVar11 + local_50;
        if (uVar10 < 9) goto LAB_04004c94;
      }
      else {
        uVar10 = iVar11 + local_50;
        if (uVar10 < 9) goto LAB_04004c24;
      }
    }
LAB_04004d04:
    iVar11 = iVar11 + 1;
    if (iVar11 == 2) {
      Sexy::Point::Point((Point *)&local_48);
      BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)(local_50 - 1),local_4c,uVar10)
      ;
      uVar7 = CONCAT44(uStack_2c,local_30);
      local_48 = uVar7;
      lVar6 = FUN_04001ee4(local_20,local_18);
      iVar11 = (int)uVar7;
      if (lVar6 == 0) {
        this_00[0x1c8] = (SpringprincessProjectile)0x1;
        BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_50,local_4c,iVar11);
        local_48 = CONCAT44(uStack_2c,local_30);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_30,(float)local_30,(float)(int)uStack_2c,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_40,(SexyVector3 *)&local_30);
        Sexy::Rand(*(float *)(extraout_x0 + 0x1f8));
        Sexy::Rand(*(float *)(extraout_x0 + 500) * 0.15);
        SetInitialLaunchValues(this_00,180.0,1.0,iVar1);
        Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)aDStack_40,300.0,1.0);
        this_00[0x1ac] = (SpringprincessProjectile)0x1;
        *(BoardEntity **)(this_00 + 0x1b0) = param_1;
        uVar13 = PVZ_T();
        *(undefined4 *)(this_00 + 0x1d8) = uVar13;
      }
      else {
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                  (uVar7,uVar8);
        puVar9 = (uint *)FUN_04001ef0(local_20);
        BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)*puVar9,puVar9[1],iVar11);
        local_48 = CONCAT44(uStack_2c,local_30);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_30,(float)local_30,(float)(int)uStack_2c,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_40,(SexyVector3 *)&local_30);
        Sexy::Rand(*(float *)(extraout_x0 + 0x1f8));
        Sexy::Rand(*(float *)(extraout_x0 + 500) * 0.15);
        SetInitialLaunchValues(this_00,400.0,1.0,iVar1);
        Projectile::LaunchAt((Projectile *)this_00,(SexyVector3 *)aDStack_40,400.0,1.0);
        this_00[0x1ac] = (SpringprincessProjectile)0x1;
        fVar14 = (float)PVZ_T();
        this_00[0x1ad] = (SpringprincessProjectile)(fVar14 != -2.0);
      }
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::findNearestTargetType(BoardEntityTypeFlag, int) */

void __thiscall
SpringprincessProjectile::findNearestTargetType
          (SpringprincessProjectile *this,undefined4 param_2,int param_3)

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
    param_3 = *(int *)(this + 0x1dc);
  }
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  pRVar13 = (RtObject *)0x0;
  fVar16 = *pfVar7;
  fVar17 = pfVar7[1];
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1f0);
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar16);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,iVar3,param_3,iVar4 - iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  fVar15 = *(float *)(this + 0x220) * *(float *)(this + 0x220);
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
       (fVar14 = (float)FUN_04001f04(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c)
                                     ,*(undefined4 *)(this_02 + 0x20)), (float)iVar3 <= fVar14)) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar14 = (float)FUN_04001f04(*(undefined4 *)(this_02 + 0x18),*(undefined4 *)(this_02 + 0x1c),
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
               (cVar2 = Zombie::HasCondition(pZVar11,0x25), cVar2 != '\0')) goto LAB_04005090;
          }
          this_01 = Sexy::RtObject::Cast<Plant>(this_02);
          if (((this_01 == (Plant *)0x0) ||
              ((cVar2 = Plant::IsInvincible(this_01,false), cVar2 == '\0' &&
               (cVar2 = FUN_04002e58(*(undefined4 *)(this_01 + 0x28)), cVar2 == '\0')))) &&
             ((pGVar12 = Sexy::RtObject::Cast<GridItem>(this_02), pGVar12 == (GridItem *)0x0 ||
              (((cVar2 = RealObject::IsOnTeam(pGVar12,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x208))(pGVar12), cVar2 != '\0')) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar12,2), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar12 + 0x200))(pGVar12), cVar2 != '\0')))))))) {
            uVar6 = *(undefined4 *)(this_02 + 0x1c);
            local_48 = FUN_04001f04(*(undefined4 *)(this_02 + 0x18),uVar6,
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
LAB_04005090:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* SpringprincessProjectile::findNextTarget(int) */

void __thiscall SpringprincessProjectile::findNextTarget(SpringprincessProjectile *this,int param_1)

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
/* SpringprincessProjectile::OnEffectDone2(StandaloneEffect*) */

void SpringprincessProjectile::OnEffectDone2(StandaloneEffect *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  string *psVar8;
  PlantType *pPVar9;
  long lVar10;
  RtObject *pRVar11;
  SpringprincessProps *pSVar12;
  long *plVar13;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar14;
  ZombieTosserSubSystem *pZVar15;
  char *__s;
  float fVar16;
  Point aPStack_d0 [4];
  undefined4 local_cc;
  RtMixedPtr aRStack_c8 [8];
  string asStack_c0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b8 [72];
  undefined8 local_70;
  float local_68;
  undefined1 auStack_60 [8];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(param_1 + 0x1e0));
  iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(param_1 + 0x1e4));
  Sexy::Point::Point(aPStack_d0,iVar3,iVar4);
  Board::MakeRenderOrder(0x65130,local_cc,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_1[0x1ae] == (StandaloneEffect)0x0) {
    __s = "POPANIM_EFFECTS_SPRINGPRINCESS_PROJECTILE";
  }
  else {
    __s = "POPANIM_EFFECTS_SPRINGPRINCESS_PROJECTILE2";
  }
  std::string::string(asStack_c0,__s);
  this = (RtMixedPtrBase *)(param_1 + 0x1c0);
  GetPAMByName(asStack_c0);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  std::string::~string(asStack_c0);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_70,*(float *)(param_1 + 0x1e0),*(float *)(param_1 + 0x1e4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_70,-1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string((string *)&local_70,"OnEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b8,asStack_c0,
             (RtWeakPtr *)&local_70);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_b8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_b8);
  std::string::~string((string *)&local_70);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  std::string::string((string *)&local_70,"ATTACK2");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_70,0);
  std::string::~string((string *)&local_70);
  nop();
  FUN_04001e50(this_00 + 0x1c,0x65130);
  std::string::string((string *)&local_70,"Play_SpringBean_Activate");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_70,0.0);
  std::string::~string((string *)&local_70);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') goto LAB_04005df4;
  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  iVar3 = Zombie::GetSizeType(pZVar6);
  if (iVar3 != 2) {
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    cVar1 = Zombie::HasCondition(uVar7,0x7a);
    if (cVar1 == '\0') {
      pZVar6 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar1 = Zombie::IsBoss(pZVar6);
      if (cVar1 == '\0') {
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = (**(code **)(*plVar13 + 0x4d8))();
        if (cVar1 == '\0') {
          plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this);
          cVar1 = (**(code **)(*plVar13 + 0x508))();
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
            Zombie::GetCurrentTitleStatus();
            TitleStatus::~TitleStatus((TitleStatus *)&local_70);
            if (local_58 == '\0') {
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
              this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar6);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
              bVar2 = std::operator!=((string *)(lVar10 + 8),"zombossmech_iceage");
              if (bVar2) {
                this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                puVar14 = (undefined8 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_02);
                local_70 = *puVar14;
                local_68 = *(float *)(puVar14 + 1);
                fVar16 = (float)FUN_04001e64(*(undefined4 *)(param_1 + 0x170));
                if (fVar16 == 1.0) {
LAB_040060f8:
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  local_70 = CONCAT44(local_70._4_4_,(float)iVar3 + (float)local_70);
                }
                else if (fVar16 == 1.5) {
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  local_70 = CONCAT44(local_70._4_4_,(float)local_70 + (float)iVar3 * 1.5);
                }
                else {
                  if (fVar16 < 2.0) goto LAB_040060f8;
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  local_70 = CONCAT44(local_70._4_4_,(float)(iVar3 << 1) + (float)local_70);
                }
                if ((param_1[0x1d5] != (StandaloneEffect)0x0) &&
                   (param_1[0x1d4] != (StandaloneEffect)0x0)) {
                  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                  local_70 = CONCAT44(local_70._4_4_,(float)iVar3 + (float)local_70);
                }
                pZVar15 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                    (*(Board **)(gLawnApp + 0x9f0));
                pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
                RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                          ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_b8);
                ZombieTosserSubSystem::LaunchZombie
                          ((ZombieTosserSubSystem *)0x43020000,0x3fc00000,pZVar15,pRVar5,
                           (RtWeakPtr *)&local_70,aRStack_b8,0);
                RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                ::~RtReflectionDelegate(aRStack_b8);
              }
            }
          }
        }
      }
    }
  }
  psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)&local_70,"springprincess");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
  std::string::~string((string *)&local_70);
  nop();
  if (param_1[0x1af] != (StandaloneEffect)0x0) {
    DamageInfo::DamageInfo((DamageInfo *)&local_70);
    (**(code **)(*(long *)param_1 + 0x178))(param_1,(RtWeakPtr *)&local_70,0);
    pPVar9 = (PlantType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
    lVar10 = PlantType::GetProps(pPVar9);
    lVar10 = FUN_04001ef4(*(undefined8 *)(lVar10 + 0x70));
    fVar16 = (float)*(int *)(lVar10 + 0x2c);
    local_68 = fVar16;
    if (param_1[0x1d5] != (StandaloneEffect)0x0) {
      if (param_1[0x1d4] == (StandaloneEffect)0x0) {
        pPVar9 = (PlantType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
        pRVar11 = (RtObject *)PlantType::GetProps(pPVar9);
        pSVar12 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar11);
        fVar16 = local_68 + *(float *)(pSVar12 + 0x2c8);
      }
      else {
        pPVar9 = (PlantType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
        pRVar11 = (RtObject *)PlantType::GetProps(pPVar9);
        pSVar12 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar11);
        fVar16 = local_68 + *(float *)(pSVar12 + 0x2cc);
      }
    }
    local_68 = (float)FUN_04001e7c(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c)
                                   ,*(undefined4 *)(param_1 + 0x180),
                                   *(undefined4 *)(param_1 + 0x184));
    local_68 = local_68 * fVar16;
    SetFlag<DamageTypeFlags>(auStack_60,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_60,0x800,0);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    (**(code **)(*plVar13 + 0x110))(plVar13,(RtWeakPtr *)&local_70);
    DamageInfo::~DamageInfo((DamageInfo *)&local_70);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
LAB_04005df4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::onUpdate(float) */

void SpringprincessProjectile::onUpdate(float param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  RealObject *in_x0;
  Zombie *pZVar4;
  undefined8 uVar5;
  string *psVar6;
  PlantType *pPVar7;
  long lVar8;
  RtObject *pRVar9;
  SpringprincessProps *pSVar10;
  long *plVar11;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar12;
  ZombieTosserSubSystem *pZVar13;
  ResourceInfo *pRVar14;
  float fVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  undefined8 local_70;
  float local_68;
  undefined1 auStack_60 [8];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((in_x0[0x1c8] != (RealObject)0x0) && (fVar16 = *(float *)(in_x0 + 0x1d0), fVar16 != 0.0)) &&
     (fVar15 = (float)PVZ_T(), fVar16 <= fVar15)) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  fVar16 = *(float *)(in_x0 + 0x208);
  if ((fVar16 == 0.0) || (fVar16 == -1.0)) {
LAB_040061b4:
    if (fVar16 != -1.0) goto LAB_040061c0;
  }
  else {
    fVar15 = (float)PVZ_T();
    if (fVar15 < fVar16 + 0.4) {
      fVar16 = *(float *)(in_x0 + 0x208);
      goto LAB_040061b4;
    }
    this = (RtMixedPtrBase *)(in_x0 + 0x1c0);
    std::string::string((string *)&local_70,"Play_SpringBean_Activate");
    RealObject::PlayPositionalSound(in_x0,(string *)&local_70,0.0);
    std::string::~string((string *)&local_70);
    nop();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar3 = Zombie::GetSizeType(pZVar4);
      if (iVar3 != 2) {
        uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = Zombie::HasCondition(uVar5,0x7a);
        if (cVar1 == '\0') {
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          cVar1 = Zombie::IsBoss(pZVar4);
          if (cVar1 == '\0') {
            plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this);
            cVar1 = (**(code **)(*plVar11 + 0x4d8))();
            if (cVar1 == '\0') {
              plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)this);
              cVar1 = (**(code **)(*plVar11 + 0x508))();
              if (cVar1 == '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
                Zombie::GetCurrentTitleStatus();
                TitleStatus::~TitleStatus((TitleStatus *)&local_70);
                if (local_58 == '\0') {
                  pZVar4 = (Zombie *)
                           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar4);
                  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
                  bVar2 = std::operator!=((string *)(lVar8 + 8),"zombossmech_iceage");
                  if (!bVar2) goto LAB_04006240;
                  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this);
                  puVar12 = (undefined8 *)
                            std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_01);
                  local_70 = *puVar12;
                  local_68 = *(float *)(puVar12 + 1);
                  fVar16 = (float)FUN_04001e64(*(undefined4 *)(in_x0 + 0x170));
                  if (fVar16 == 1.0) {
LAB_04006574:
                    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                    local_70 = CONCAT44(local_70._4_4_,(float)iVar3 + (float)local_70);
                  }
                  else if (fVar16 == 1.5) {
                    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                    local_70 = CONCAT44(local_70._4_4_,(float)local_70 + (float)iVar3 * 1.5);
                  }
                  else {
                    if (fVar16 < 2.0) goto LAB_04006574;
                    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                    local_70 = CONCAT44(local_70._4_4_,(float)(iVar3 << 1) + (float)local_70);
                  }
                  if ((in_x0[0x1d5] != (RealObject)0x0) && (in_x0[0x1d4] != (RealObject)0x0)) {
                    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
                    local_70 = CONCAT44(local_70._4_4_,(float)iVar3 + (float)local_70);
                  }
                  pZVar13 = Board::GetGameSubSystem<ZombieTosserSubSystem>
                                      (*(Board **)(gLawnApp + 0x9f0));
                  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
                  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
                  ZombieTosserSubSystem::LaunchZombie
                            ((ZombieTosserSubSystem *)0x43020000,0x3fc00000,pZVar13,pRVar14,
                             (string *)&local_70,aRStack_b8,0);
                  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  ::~RtReflectionDelegate
                            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                              *)aRStack_b8);
                  goto LAB_04006240;
                }
              }
            }
          }
        }
      }
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string((string *)&local_70,"springprincess");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      std::string::~string((string *)&local_70);
      nop();
      DamageInfo::DamageInfo((DamageInfo *)&local_70);
      (**(code **)(*(long *)in_x0 + 0x178))();
      pPVar7 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
      lVar8 = PlantType::GetProps(pPVar7);
      lVar8 = FUN_04001ef4(*(undefined8 *)(lVar8 + 0x70));
      fVar16 = (float)*(int *)(lVar8 + 0x2c);
      local_68 = fVar16;
      if (in_x0[0x1d5] != (RealObject)0x0) {
        if (in_x0[0x1d4] == (RealObject)0x0) {
          pPVar7 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
          pRVar9 = (RtObject *)PlantType::GetProps(pPVar7);
          pSVar10 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar9);
          fVar16 = local_68 + *(float *)(pSVar10 + 0x2c8);
        }
        else {
          pPVar7 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
          pRVar9 = (RtObject *)PlantType::GetProps(pPVar7);
          pSVar10 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar9);
          fVar16 = local_68 + *(float *)(pSVar10 + 0x2cc);
        }
      }
      local_68 = (float)FUN_04001e7c(*(undefined4 *)(in_x0 + 0x170),*(undefined4 *)(in_x0 + 0x17c),
                                     *(undefined4 *)(in_x0 + 0x180),*(undefined4 *)(in_x0 + 0x184));
      local_68 = local_68 * fVar16;
      SetFlag<DamageTypeFlags>(auStack_60,0x2000000000,0);
      SetFlag<DamageTypeFlags>(auStack_60,0x800,0);
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar11 + 0x110))(plVar11,(string *)&local_70);
      DamageInfo::~DamageInfo((DamageInfo *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
    }
LAB_04006240:
    *(undefined4 *)(in_x0 + 0x208) = 0xbf800000;
  }
  fVar16 = (float)PVZ_T();
  if (1.0 <= fVar16) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
LAB_040061c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::SpringprincessProjectile() */

void __thiscall SpringprincessProjectile::SpringprincessProjectile(SpringprincessProjectile *this)

{
  string *psVar1;
  PlantType *this_00;
  RtObject *this_01;
  SpringprincessProps *pSVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067b4130;
  *(undefined ***)(this + 0x10) = &PTR__SpringprincessProjectile_067b4320;
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1ac] = (SpringprincessProjectile)0x0;
  this[0x1ad] = (SpringprincessProjectile)0x0;
  this[0x1ae] = (SpringprincessProjectile)0x0;
  this[0x1af] = (SpringprincessProjectile)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  this[0x1c8] = (SpringprincessProjectile)0x0;
  this[0x1c9] = (SpringprincessProjectile)0x0;
  this[0x1d4] = (SpringprincessProjectile)0x0;
  this[0x1d5] = (SpringprincessProjectile)0x0;
  this[0x1d6] = (SpringprincessProjectile)0x0;
  this[0x1d7] = (SpringprincessProjectile)0x0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0x40e00000;
  DVec3::DVec3((DVec3 *)(this + 0x1e0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0x40a00000;
  *(undefined4 *)(this + 0x214) = 0;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"springprincess");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  this_01 = (RtObject *)PlantType::GetProps(this_00);
  pSVar2 = Sexy::RtObject::Cast<SpringprincessProps_const>(this_01);
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(pSVar2 + 0x2c4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringprincessProjectile::StaticNew() */

SpringprincessProjectile * SpringprincessProjectile::StaticNew(void)

{
  SpringprincessProjectile *this;
  
  this = ::operator_new(0x228);
  SpringprincessProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::RollProjectileStyle() */

void __thiscall SpringprincessProjectile::RollProjectileStyle(SpringprincessProjectile *this)

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
  *(undefined4 *)(this + 0x210) = uVar2;
  HideAllLayer(this);
  if (*(int *)(this + 0x210) == 2) {
    AkeeProjectile::ShowFireMegaAkee((AkeeProjectile *)this);
  }
  else if (*(int *)(this + 0x210) == 3) {
    AkeeProjectile::ShowIceMegaAkee((AkeeProjectile *)this);
  }
  else {
    AkeeProjectile::ShowNormalMegaAkee((AkeeProjectile *)this);
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
SpringprincessProjectile::OnCollideEntity(SpringprincessProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  PlantType *pPVar5;
  RtObject *pRVar6;
  SpringprincessProps *pSVar7;
  Zombie *pZVar8;
  float *pfVar9;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [4];
  undefined4 local_74;
  string asStack_70 [8];
  string asStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x1ad] == (SpringprincessProjectile)0x0) ||
      (fVar11 = (float)PVZ_T(), 1.0 <= fVar11 - *(float *)(this + 0x20c))) &&
     (this[0x1c9] == (SpringprincessProjectile)0x0)) {
    if (this[0x1ac] == (SpringprincessProjectile)0x0) {
      if (this[0x1ae] == (SpringprincessProjectile)0x0) {
        if (this[0x1c8] == (SpringprincessProjectile)0x0) {
          std::string::string(asStack_68,"Play_SpringBean_Activate");
          RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
          std::string::~string(asStack_68);
          nop();
          DoFission(this,param_1);
          (**(code **)(*(long *)this + 0x48))(this);
          uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
          goto LAB_04007204;
        }
        if (param_1 != (BoardEntity *)0x0) goto LAB_04007014;
      }
    }
    else if ((this[0x1c8] != (SpringprincessProjectile)0x0) &&
            (this[0x1ae] == (SpringprincessProjectile)0x0)) {
      if (param_1 != (BoardEntity *)0x0) {
LAB_04007014:
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
        if ((this[0x1ac] == (SpringprincessProjectile)0x0) ||
           (this[0x1c8] == (SpringprincessProjectile)0x0)) {
          if (pZVar8 != (Zombie *)0x0) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c0),
                       (RtWeakPtrBase *)asStack_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            this[0x1c9] = (SpringprincessProjectile)0x1;
            pfVar9 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar9);
            iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar9[1]);
            Sexy::Point::Point((Point *)aRStack_78,iVar2,iVar3);
            Board::MakeRenderOrder(0x65130,local_74,0);
            this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string(asStack_70,"POPANIM_EFFECTS_SPRINGPRINCESS_PROJECTILE");
            GetPAMByName(asStack_70);
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
            Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar10,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
            std::string::~string(asStack_70);
            nop();
            EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,*pfVar9 - 105.0,pfVar9[1] - 105.0,0.0);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_68,-1);
            std::string::string(asStack_68,"ATTACK3");
            Effect_PopAnim::PlaySingleAnimation
                      (this_00,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_68,0);
            std::string::~string(asStack_68);
            nop();
            FUN_04001e50(this_00 + 0x1c,0x65130);
            std::string::string(asStack_68,"Play_SpringBean_Select");
            RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
            std::string::~string(asStack_68);
            nop();
            uVar12 = PVZ_T();
            fVar11 = *pfVar9;
            fVar13 = pfVar9[1];
            *(undefined4 *)(this + 0x208) = uVar12;
            EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,fVar11 - 105.0,fVar13 - 85.0,0.0);
            Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e0),(SexyVector3 *)asStack_68);
            Projectile::SetPosition((Projectile *)this,0.0,0.0,999.0);
          }
          goto LAB_04007200;
        }
      }
      if ((*(float *)(this + 0x1d8) != 0.0) &&
         (fVar11 = (float)PVZ_T(), *(float *)(this + 0x1d8) + 0.5 < fVar11)) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_68,"springprincess");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        std::string::~string(asStack_68);
        nop();
        DamageInfo::DamageInfo((DamageInfo *)asStack_68);
        (**(code **)(*(long *)this + 0x178))(this,asStack_68,0);
        pPVar5 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        PlantType::GetProps(pPVar5);
        fVar11 = 60.0;
        local_60 = 60.0;
        if (this[0x1d5] != (SpringprincessProjectile)0x0) {
          if (this[0x1d4] == (SpringprincessProjectile)0x0) {
            pPVar5 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
            pRVar6 = (RtObject *)PlantType::GetProps(pPVar5);
            pSVar7 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar6);
            fVar11 = local_60 + *(float *)(pSVar7 + 0x2c8);
          }
          else {
            pPVar5 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
            pRVar6 = (RtObject *)PlantType::GetProps(pPVar5);
            pSVar7 = Sexy::RtObject::Cast<SpringprincessProps_const>(pRVar6);
            fVar11 = local_60 + *(float *)(pSVar7 + 0x2cc);
          }
        }
        local_60 = (float)FUN_04001e7c(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                       *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
        local_60 = local_60 * fVar11;
        (**(code **)(*(long *)param_1 + 0x110))(param_1,asStack_68);
        std::string::string(asStack_70,"Play_SpringBean_Activate");
        RealObject::PlayPositionalSound((RealObject *)this,asStack_70,0.0);
        std::string::~string(asStack_70);
        nop();
        (**(code **)(*(long *)this + 0x48))(this);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        uVar1 = 1;
        goto LAB_04007204;
      }
    }
  }
LAB_04007200:
  uVar1 = 1;
LAB_04007204:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringprincessProjectile::OnCollideGround() */

void __thiscall SpringprincessProjectile::OnCollideGround(SpringprincessProjectile *this)

{
  SpringprincessProjectile SVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  undefined8 uVar7;
  RtObject *this_01;
  SpringprincessProjectile *this_02;
  PopAnimRig *pPVar8;
  float fVar9;
  float fVar10;
  Point aPStack_88 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  Point aPStack_78 [4];
  undefined4 local_74;
  RtMixedPtr aRStack_70 [8];
  int local_68;
  int local_64;
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  SVar1 = this[0x1d7];
  local_8 = ___stack_chk_guard;
  if (SVar1 == (SpringprincessProjectile)0x0) {
    SVar1 = this[0x1af];
    if (SVar1 == (SpringprincessProjectile)0x0) {
      if (this[0x1c8] == (SpringprincessProjectile)0x0) {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
        iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
        Sexy::Point::Point(aPStack_88,iVar2,iVar3);
        lVar5 = getSpringprincessProjectile(aPStack_88);
        if (lVar5 == 0) {
          (**(code **)(*(long *)this + 0x48))(this);
          if (this[0x1ac] == (SpringprincessProjectile)0x0) {
            SVar1 = (SpringprincessProjectile)0x1;
          }
          else {
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node(a_Stack_80);
            uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
            std::string::string((string *)aPStack_78,"SpringprincessProjectileDefault");
            Sexy::ToWString((string *)aPStack_78);
            Sexy::RtName::RtName((RtName *)aRStack_60,(wstring *)aRStack_70);
            PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,uVar7,0xc,(RtName *)aRStack_60);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
            Sexy::RtName::~RtName((RtName *)aRStack_60);
            FUN_05476c50((wstring *)aRStack_70);
            std::string::~string((string *)aPStack_78);
            nop();
            iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
            iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
            Sexy::Point::Point((Point *)&local_68,iVar2,iVar3);
            iVar2 = BoardTransforms::GridToBoardSpaceX(local_68);
            iVar3 = BoardTransforms::GridToBoardSpaceY(local_64);
            uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)a_Stack_80);
            this_01 = (RtObject *)
                      Board::AddProjectile
                                ((Board *)(float)(iVar2 + 6),(float)(iVar3 + -10),0,uVar7,
                                 (RtName *)aRStack_60,0,0);
            this_02 = Sexy::RtObject::Cast<SpringprincessProjectile>(this_01);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
            FUN_04001ef8(this_02 + 0x24);
            Projectile::SetVelocity((Projectile *)this_02,0.0,0.0,0.0);
            Projectile::SetAcceleration((Projectile *)this_02,0.0,0.0,0.0);
            FUN_04001e64(*(undefined4 *)(this + 0x170));
            FUN_04001e68(this_02 + 0x170);
            pPVar8 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_02);
            std::string::string((string *)aRStack_60,"attack");
            Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
            PopAnimRig::PlayAndStop(pPVar8,(RtName *)aRStack_60,0,(DummyInit *)aRStack_50);
            std::string::~string((string *)aRStack_60);
            nop();
            fVar9 = (float)PVZ_T();
            SVar1 = this[0x1ae];
            *(float *)(this_02 + 0x1d0) = fVar9 + *(float *)(this_02 + 0x1cc);
            if (SVar1 != (SpringprincessProjectile)0x0) {
              this_02[0x1ae] = (SpringprincessProjectile)0x1;
            }
            this_02[0x1c8] = (SpringprincessProjectile)0x1;
            SVar1 = (SpringprincessProjectile)0x1;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
          }
        }
        else {
          SVar1 = (SpringprincessProjectile)0x1;
          (**(code **)(*(long *)this + 0x48))();
        }
      }
      else {
        (**(code **)(*(long *)this + 0x48))();
        SVar1 = (SpringprincessProjectile)Projectile::OnCollideGround((Projectile *)this);
      }
    }
    else {
      this[0x1c9] = (SpringprincessProjectile)0x1;
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar4);
      iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar4[1]);
      Sexy::Point::Point(aPStack_78,iVar2,iVar3);
      Board::MakeRenderOrder(0x65130,local_74,0);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      if (this[0x1ae] == (SpringprincessProjectile)0x0) {
        std::string::string((string *)&local_68,"POPANIM_EFFECTS_SPRINGPRINCESS_PROJECTILE");
        GetPAMByName((string *)&local_68);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
        Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
        std::string::~string((string *)&local_68);
        nop();
        fVar10 = 135.0;
        fVar9 = 95.0;
      }
      else {
        std::string::string((string *)&local_68,"POPANIM_EFFECTS_SPRINGPRINCESS_PROJECTILE2");
        GetPAMByName((string *)&local_68);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
        Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
        std::string::~string((string *)&local_68);
        nop();
        fVar10 = 105.0;
        fVar9 = 102.0;
      }
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,*pfVar4 - fVar10,pfVar4[1] - fVar9,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,*pfVar4 - fVar10,pfVar4[1] - fVar9,0.0);
      Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e0),(SexyVector3 *)aRStack_60);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_60,"OnEffectDone2");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (string *)&local_68,(Vec3 *)aRStack_60);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_60);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::string((string *)aRStack_60,"ATTACK");
      Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)aRStack_60,0);
      std::string::~string((string *)aRStack_60);
      nop();
      FUN_04001e50(this_00 + 0x1c,0x65130);
      this[0x1d7] = (SpringprincessProjectile)0x1;
      Projectile::SetPosition((Projectile *)this,0.0,0.0,999.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar1);
}


/* SpringprincessProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void SpringprincessProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  long extraout_x0;
  float fVar1;
  
  Projectile::fillDamageInfo(param_1,param_2);
  Projectile::GetProps((Projectile *)param_1);
  nop();
  fVar1 = (float)FUN_04001e70(*(undefined4 *)(param_1 + 0xd8));
  FUN_04001e74(fVar1 - *(float *)(extraout_x0 + 0x1f0),param_1 + 0xd8);
  return;
}

