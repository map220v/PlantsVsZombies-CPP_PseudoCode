// Class: CurlingProjectile


/* CurlingProjectile::~CurlingProjectile() */

void __thiscall CurlingProjectile::~CurlingProjectile(CurlingProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06812990;
  *(undefined ***)(this + 0x10) = &PTR__CurlingProjectile_06812b80;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CurlingProjectile::~CurlingProjectile() */

void __thiscall CurlingProjectile::~CurlingProjectile(CurlingProjectile *this)

{
  ~CurlingProjectile(this + -0x10);
  return;
}


/* CurlingProjectile::~CurlingProjectile() */

void __thiscall CurlingProjectile::~CurlingProjectile(CurlingProjectile *this)

{
  ~CurlingProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CurlingProjectile::~CurlingProjectile() */

void __thiscall CurlingProjectile::~CurlingProjectile(CurlingProjectile *this)

{
  ~CurlingProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::StaticClassInit() */

void CurlingProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CurlingProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04238698,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurlingProjectile::StaticGetClass() */

long * CurlingProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CurlingProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingProjectile::GetClass() const */

long * CurlingProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CurlingProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CurlingProjectile::SetIsGenerateIceLane(bool) */

void __thiscall CurlingProjectile::SetIsGenerateIceLane(CurlingProjectile *this,bool param_1)

{
  this[0x1ae] = (CurlingProjectile)param_1;
  return;
}


/* CurlingProjectile::SetIsSpeedUp(bool) */

void __thiscall CurlingProjectile::SetIsSpeedUp(CurlingProjectile *this,bool param_1)

{
  this[0x1ad] = (CurlingProjectile)param_1;
  return;
}


/* CurlingProjectile::CurlingProjectile() */

void __thiscall CurlingProjectile::CurlingProjectile(CurlingProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1ac] = (CurlingProjectile)0x1;
  this[0x1ad] = (CurlingProjectile)0x1;
  *(undefined ***)this = &PTR_GetClass_06812990;
  *(undefined ***)(this + 0x10) = &PTR__CurlingProjectile_06812b80;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  this[0x1ae] = (CurlingProjectile)0x0;
  *(undefined4 *)(this + 0x1b0) = 0x3f800000;
  Sexy::Point::Point((Point *)(this + 0x1b4));
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
  *(undefined4 *)(this + 0x1b8) = 0xffffffff;
  return;
}


/* CurlingProjectile::StaticNew() */

CurlingProjectile * CurlingProjectile::StaticNew(void)

{
  CurlingProjectile *this;
  
  this = ::operator_new(0x1c0);
  CurlingProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::onProjectileInitialized() */

void __thiscall CurlingProjectile::onProjectileInitialized(CurlingProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_01_big");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_10,"custom_01_small");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::BeakBackZombie(BoardEntity*) */

void __thiscall CurlingProjectile::BeakBackZombie(CurlingProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  undefined8 *puVar2;
  ZombieTosserSubSystem *pZVar3;
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (cVar1 = Zombie::CanBeLaunchedByPlants(this_00), cVar1 != '\0')) {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    local_60 = (float)*puVar2;
    local_58 = *(undefined4 *)(puVar2 + 1);
    local_60 = local_60 + 80.0;
    uStack_5c = (undefined4)((ulong)*puVar2 >> 0x20);
    if (local_60 < 800.0) {
      pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x42200000,0x3f19999a,pZVar3,this_00,&local_60,aRStack_50,
                 0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::CreateCurlingAt(std::string const&, Sexy::Point const&, bool) */

void __thiscall
CurlingProjectile::CreateCurlingAt
          (CurlingProjectile *this,string *param_1,Point *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CurlingItem *pCVar4;
  RtObject *this_00;
  Plant *pPVar5;
  PlantEleocurling *pPVar6;
  long lVar7;
  GridItemPropertySheet *pGVar8;
  long *plVar9;
  float fVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04234d68(param_2);
  if (cVar1 != '\0') {
    Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),param_1,*(int *)param_2,*(int *)(param_2 + 4),1
                      );
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar2) {
      pCVar4 = (CurlingItem *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      fVar10 = (float)FUN_04234a78(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                   *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      CurlingItem::SetDamageRate(pCVar4,fVar10);
      pCVar4 = (CurlingItem *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      iVar3 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this);
      CurlingItem::SetAvatarIndex(pCVar4,iVar3);
      pCVar4 = (CurlingItem *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      CurlingItem::SetGenerateIceLane(pCVar4,(bool)this[0x1ae]);
      if (param_3) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pGVar8 = GridItem::GetProps<GridItemPropertySheet>();
        FUN_04234a94(*(float *)(pGVar8 + 0x10) * 5.0,lVar7 + 300);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        (**(code **)(*plVar9 + 0x2a8))();
      }
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)param_2);
      fVar10 = (float)FUN_04234c24(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                   *(undefined4 *)(this + 0x20));
      if (0.0 < (float)iVar3 - fVar10) {
        pCVar4 = (CurlingItem *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,(float)iVar3 - fVar10,0.0);
        CurlingItem::SetRenderAndCollisionOffset(pCVar4,(SexyVector2 *)aRStack_10);
      }
      this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      if ((this_00 != (RtObject *)0x0) &&
         (pPVar5 = Sexy::RtObject::Cast<Plant>(this_00), pPVar5 != (Plant *)0x0)) {
        pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
        pPVar6 = Sexy::RtObject::Cast<PlantEleocurling>(*(RtObject **)(pPVar5 + 0xa8));
        if (pPVar6 != (PlantEleocurling *)0x0) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
          PlantDracaena::SetTargetZombie((PlantDracaena *)pPVar6,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::ProcessCurlingCollision(BoardEntity*) */

void __thiscall
CurlingProjectile::ProcessCurlingCollision(CurlingProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CurlingItem *pCVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  RtObject *this_00;
  EleocurlingPenetrateProjectile *this_01;
  long *plVar8;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  Board *pBVar10;
  undefined4 uVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pCVar4 = Sexy::RtObject::Cast<CurlingItem>((RtObject *)param_1), pCVar4 == (CurlingItem *)0x0)
     ) {
    Projectile::GetInstigator((Projectile *)this);
    FUN_04237874((RtWeakPtr *)aRStack_18);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar2) goto LAB_04239b14;
  }
  else {
    Sexy::RtObject::Cast<CurlingItem>((RtObject *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Projectile::GetInstigator((Projectile *)this);
    FUN_04237874(aRStack_38);
    cVar1 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)aRStack_40,(RtWeakPtrBase *)aRStack_38)
    ;
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      uVar6 = 0;
      goto LAB_04239b5c;
    }
    __n = aRStack_18;
    std::string::string(asStack_30,"EleocurlingSmallPenetrateProjectile");
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    GridItem::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    bVar2 = std::operator==((string *)(lVar5 + 8),"curlingitem_big");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (bVar2) {
      std::string::append(asStack_30,"EleocurlingBigPenetrateProjectile",(size_t)__n);
    }
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName((RtName *)aRStack_18,awStack_20);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar6,0xc,aRStack_18);
    Sexy::RtName::~RtName((RtName *)aRStack_18);
    FUN_05476c50(awStack_20);
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    puVar7 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
                    /* WARNING: Load size is inaccurate */
    pBVar10._0_4_ = *puVar7;
    uVar9 = *(undefined4 *)((long)puVar7 + 4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
    this_00 = (RtObject *)Board::AddProjectile(pBVar10._0_4_,uVar9,0x41a00000,uVar6,aRStack_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (this_00 != (RtObject *)0x0) {
      this_01 = Sexy::RtObject::Cast<EleocurlingPenetrateProjectile>(this_00);
      if (this_01 == (EleocurlingPenetrateProjectile *)0x0) {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
        if (bVar2) goto LAB_04239a80;
      }
      else {
        iVar3 = Sexy::ScrollWidget::GetPageHorizontal((ScrollWidget *)this);
        EleocurlingPenetrateProjectile::SetAvatarIndex(this_01,iVar3);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
        if (bVar2) {
          pCVar4 = (CurlingItem *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          bVar2 = (bool)CurlingItem::GetGenerateIceLane(pCVar4);
          StrawburstProjectile::SetJamFlag((StrawburstProjectile *)this_01,bVar2);
LAB_04239a80:
          pCVar4 = (CurlingItem *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          CurlingItem::GetDamageRate(pCVar4);
          FUN_04234a70(this_00 + 0x184);
        }
      }
      RealObject::JoinTeam((RealObject *)this_00,1);
    }
    std::string::string((string *)aRStack_18,"Play_Plant_Eleocurling_Hit_Curling_Impact");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
    std::string::~string((string *)aRStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::string::~string(asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Projectile::GetInstigator((Projectile *)this);
    FUN_04237874(aRStack_18);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
    if (bVar2) {
LAB_04239b14:
      plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      (**(code **)(*plVar8 + 0x230))();
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar6 = 1;
LAB_04239b5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::onUpdate(float) */

void CurlingProjectile::onUpdate(float param_1)

{
  TPoint<int> *this;
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  undefined8 local_10;
  long local_8;
  
  this = (TPoint<int> *)(in_x0 + 0x1b4);
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar4);
  iVar3 = BoardTransforms::BoardSpaceToGridX(pfVar4[1]);
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar3);
  cVar1 = Sexy::TPoint<int>::operator!=(this,(TPoint *)&local_10);
  if (cVar1 != '\0') {
    *(undefined8 *)this = local_10;
    if (in_x0[0x1ae] !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      FUN_04239fa0(*(undefined4 *)(in_x0 + 0x1b0),this,in_x0[0x1ac]);
    }
    in_x0[0x1ac] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x0;
  }
  if (in_x0[0x1ad] !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    Projectile::SetVelocityScale((Projectile *)in_x0,1.5,1.5,1.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurlingProjectile::DamageGridZombies(BoardEntity*, bool) */

void __thiscall
CurlingProjectile::DamageGridZombies(CurlingProjectile *this,BoardEntity *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar9;
  ulong uVar10;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  Insets aIStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  uVar10 = 0;
  iVar2 = BoardEntity::CalcColumnPosition(param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::Insets::Insets(aIStack_78,iVar2,iVar3,1,1);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,uVar4,
             aIStack_78);
  uVar7 = local_68;
  lVar5 = FUN_04234b58(local_68,local_60);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_04234b64(uVar7,uVar10);
      if (param_1 != (BoardEntity *)*puVar6) {
        (**(code **)(*(long *)this + 0x1b0))(this);
        uVar7 = local_68;
      }
      if (param_2) {
        puVar6 = (undefined8 *)FUN_04234b64(uVar7,uVar10);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        uVar7 = local_68;
        if ((this_00 != (Zombie *)0x0) &&
           (cVar1 = Zombie::CanBeLaunchedByPlants(this_00), uVar7 = local_68, cVar1 != '\0')) {
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_88 = (float)*puVar6;
          local_80 = *(undefined4 *)(puVar6 + 1);
          local_88 = local_88 + 80.0;
          uStack_84 = (undefined4)((ulong)*puVar6 >> 0x20);
          uVar7 = local_68;
          if (local_88 < 800.0) {
            pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x42200000,0x3f19999a,pZVar9,this_00,&local_88,
                       aRStack_50,0);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
            uVar7 = local_68;
          }
        }
      }
      uVar10 = uVar10 + 1;
      uVar8 = FUN_04234b58(uVar7,local_60);
    } while (uVar10 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

