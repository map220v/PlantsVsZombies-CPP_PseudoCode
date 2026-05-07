// Class: HatMushroomProjectile


/* HatMushroomProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void HatMushroomProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  int iVar1;
  
  Projectile::fillDamageInfo(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x1e8);
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * *(float *)(param_1 + 500);
  if ((iVar1 == 4) && (*(int *)(param_1 + 0x1b4) == 1)) {
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  }
  return;
}


/* HatMushroomProjectile::onDraw(Sexy::Graphics*) */

void HatMushroomProjectile::onDraw(Graphics *param_1)

{
  Graphics *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = param_1 + 0xc4;
  uVar2 = FUN_03b1b154(*(undefined4 *)pGVar1);
  FUN_03b1b158(0,pGVar1);
  Projectile::onDraw(param_1);
  FUN_03b1b158(uVar2,pGVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::StaticClassInit() */

void HatMushroomProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HatMushroomProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b20218,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomProjectile::StaticGetClass() */

long * HatMushroomProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectile::GetClass() const */

long * HatMushroomProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProjectile::SetRotatedVelocity(float) */

void __thiscall HatMushroomProjectile::SetRotatedVelocity(HatMushroomProjectile *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_03b1b154(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* HatMushroomProjectile::setValues(HatMushroomProjectile::Type, int, float, float) */

void __thiscall
HatMushroomProjectile::setValues
          (undefined4 param_1,undefined4 param_2,HatMushroomProjectile *this,undefined4 param_4,
          undefined4 param_5)

{
  *(undefined4 *)(this + 500) = param_1;
  *(undefined4 *)(this + 0x1e8) = param_4;
  *(undefined4 *)(this + 0x1ec) = param_5;
  *(undefined4 *)(this + 0x1f0) = param_2;
  return;
}


/* HatMushroomProjectile::onDeflection(BoardEntity*) */

void HatMushroomProjectile::onDeflection(BoardEntity *param_1)

{
  FUN_03b1b158(0,param_1 + 0xc4);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b0] = (BoardEntity)0x1;
  return;
}


/* HatMushroomProjectile::damageEntity(BoardEntity*) */

void __thiscall
HatMushroomProjectile::damageEntity(HatMushroomProjectile *this,BoardEntity *param_1)

{
  if (param_1 != (BoardEntity *)0x0) {
    Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  }
  Projectile::damageEntity((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::GetTargetPos(BoardEntity*) const */

void __thiscall
HatMushroomProjectile::GetTargetPos(HatMushroomProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  SexyVector3 *this_00;
  RtObject *this_01;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
    if (bVar1) {
      local_38 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_03b1d0cc;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_03b1b53c();
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_03b1d0cc:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* HatMushroomProjectile::onTargetDestroyedBase(BoardEntity*) */

void __thiscall
HatMushroomProjectile::onTargetDestroyedBase(HatMushroomProjectile *this,BoardEntity *param_1)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8));
  if (param_1 != (BoardEntity *)pRVar1) {
    return;
  }
  this[0x1b1] = (HatMushroomProjectile)0x1;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::checkCollisionWithVariationGenerator() */

void __thiscall
HatMushroomProjectile::checkCollisionWithVariationGenerator(HatMushroomProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RtObject *this_01;
  HatMushroomProjectileProps *pHVar6;
  long *plVar7;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar8;
  long lVar9;
  long extraout_x0;
  Plant *pPVar10;
  Plant *this_03;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pHVar6 = Sexy::RtObject::Cast<HatMushroomProjectileProps>(this_01);
  if (*(int *)(this + 0x1e8) == 5) {
    this_00 = (RtWeakPtr *)(this + 0x1f8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar1) &&
       (cVar2 = Sexy::RtWeakPtrBase::operator==
                          ((RtWeakPtrBase *)(this + 0x1a8),(RtWeakPtrBase *)this_00), cVar2 != '\0')
       ) {
      Sexy::Point::Point((Point *)&local_30);
      fVar11 = (float)FUN_03b1b388(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                   *(undefined4 *)(this + 0x20));
      fVar13 = *(float *)(this + 0x1c);
      local_30 = (int)fVar11;
      FUN_03b1b388(*(undefined4 *)(this + 0x18),fVar13,*(undefined4 *)(this + 0x20));
      local_2c = (int)fVar13;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar7 + 0xb0))((TRect<int> *)&local_28);
        Projectile::CalcCollisionRectBoardSpace();
        cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)&local_28,(TRect *)aRStack_18);
        if (cVar2 != '\0') {
          this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)&local_28,"POPANIM_EFFECTS_HYDROCOTYLEDRUMMER_EFFECT");
          GetPAMByName((string *)&local_28);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
          Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::string::~string((string *)&local_28);
          nop();
          Sexy::Point::Point((Point *)&local_28);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar5 = *(int *)(lVar9 + 0x114);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_28 = iVar5 * iVar3 + 200 + iVar4 / 2;
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          iVar5 = *(int *)(lVar9 + 0x110);
          iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_24 = iVar5 * iVar3 + 0xa0 + iVar4 / 2;
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          iVar5 = (**(code **)(*plVar7 + 0x170))();
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,iVar5 + 1);
          Effect_PopAnim::SetCentered(this_02,true);
          std::string::string((string *)aRStack_18,"attack5");
          Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_18,0);
          std::string::~string((string *)aRStack_18);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          uVar12 = PVZ_T();
          *(undefined4 *)(extraout_x0 + 0x28) = uVar12;
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          fVar11 = (float)FUN_03b1b1b8(*(undefined4 *)(lVar9 + 0xd8));
          pPVar10 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          fVar13 = (float)Plant::GetMaxHealth(pPVar10);
          if (fVar11 / fVar13 <= 1.0 - *(float *)(pHVar6 + 0x1f0)) {
            pPVar10 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            fVar11 = (float)FUN_03b1b1b8(*(undefined4 *)(lVar9 + 0xd8));
            this_03 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            fVar13 = (float)Plant::GetMaxHealth(this_03);
            Plant::SetHealth(pPVar10,fVar11 + *(float *)(pHVar6 + 0x1f0) * fVar13);
          }
          else {
            pPVar10 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Plant::Heal(pPVar10);
          }
          (**(code **)(*(long *)this + 0x48))(this);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomProjectile::~HatMushroomProjectile() */

void __thiscall HatMushroomProjectile::~HatMushroomProjectile(HatMushroomProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0672d950;
  *(undefined ***)(this + 0x10) = &PTR__HatMushroomProjectile_0672db40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f8));
  std::
  map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>::
  ~map((map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
        *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HatMushroomProjectile::~HatMushroomProjectile() */

void __thiscall HatMushroomProjectile::~HatMushroomProjectile(HatMushroomProjectile *this)

{
  ~HatMushroomProjectile(this + -0x10);
  return;
}


/* HatMushroomProjectile::~HatMushroomProjectile() */

void __thiscall HatMushroomProjectile::~HatMushroomProjectile(HatMushroomProjectile *this)

{
  ~HatMushroomProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HatMushroomProjectile::~HatMushroomProjectile() */

void __thiscall HatMushroomProjectile::~HatMushroomProjectile(HatMushroomProjectile *this)

{
  ~HatMushroomProjectile(this + -0x10);
  return;
}


/* HatMushroomProjectile::onProjectileInitialized() */

void __thiscall HatMushroomProjectile::onProjectileInitialized(HatMushroomProjectile *this)

{
  RtObject *this_00;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  Sexy::RtObject::Cast<HatMushroomProjectileProps>(this_00);
  this[0x1b0] = (HatMushroomProjectile)0x0;
  this[0x1b1] = (HatMushroomProjectile)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  std::
  map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>::
  clear((map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
         *)(this + 0x1b8));
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 3;
  *(undefined4 *)(this + 500) = 0x3f800000;
  *(undefined4 *)(this + 0x1f0) = 0;
  return;
}


/* HatMushroomProjectile::registerForEvents() */

void __thiscall HatMushroomProjectile::registerForEvents(HatMushroomProjectile *this)

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
            ((ReceivedDataCallback *)this,onTargetDestroyedBase);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<HatMushroomProjectile,void(HatMushroomProjectile::*)(BoardEntity*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::moveThroughTime(float) */

void HatMushroomProjectile::moveThroughTime(float param_1)

{
  char cVar1;
  HatMushroomProjectile *in_x0;
  ResourceInfo *this;
  SexyVector3 *this_00;
  ResourceInfo *pRVar2;
  float *pfVar3;
  DVec3 *this_01;
  Zombie *pZVar4;
  RtObject *pRVar5;
  HatMushroomProjectileProps *pHVar6;
  long lVar7;
  Plant *pPVar8;
  undefined8 uVar9;
  Board *this_02;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar14;
  undefined1 auVar15 [16];
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1a8));
  if (this == (ResourceInfo *)0x0) {
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
  }
  else {
    checkCollisionWithVariationGenerator(in_x0);
    if (*(int *)(in_x0 + 0x1e8) == 0) {
      pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)in_x0);
      pHVar6 = Sexy::RtObject::Cast<HatMushroomProjectileProps>(pRVar5);
      auVar15 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x0);
      this_00 = auVar15._0_8_;
      BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)this_00,auVar15._8_8_);
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_18,"");
      lVar7 = Board::GetPlantAt(this_02,local_48,local_44,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (lVar7 != 0) {
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        cVar1 = std::operator==((string *)(lVar7 + 8),(string *)(pHVar6 + 0x1e8));
        if (cVar1 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        }
        else {
          lVar7 = Projectile::GetInstigator((Projectile *)in_x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          if ((lVar7 != 0) && (lVar7 = Projectile::GetInstigator((Projectile *)in_x0), lVar7 != 0))
          {
            pRVar5 = (RtObject *)Projectile::GetInstigator((Projectile *)in_x0);
            pPVar8 = Sexy::RtObject::Cast<Plant>(pRVar5);
            if ((pPVar8 != (Plant *)0x0) &&
               (((*(int *)(pPVar8 + 0x110) == local_44 &&
                 (*(int *)(pPVar8 + 0x114) == local_48 + -1)) && (*(int *)(in_x0 + 0x1b4) == 0)))) {
              uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
              std::string::string((string *)&local_38,"HatMushroomProjectileThrony");
              Sexy::ToWString((string *)&local_38);
              Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_28);
              PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                        (aRStack_40,uVar9,0xc,(string *)&local_18);
              Sexy::RtName::~RtName((RtName *)&local_18);
              FUN_05476c50((wstring *)&local_28);
              std::string::~string((string *)&local_38);
              nop();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_40);
              Projectile::SetPropertySheet();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              *(undefined4 *)(in_x0 + 0x1e8) = 5;
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x1f8),
                         (RtWeakPtrBase *)&local_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            }
          }
        }
      }
    }
    else {
      this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)in_x0);
    }
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1a8));
    local_28 = (float)GetTargetPos(in_x0,(BoardEntity *)pRVar2);
    local_24 = (undefined4)in_d1;
    local_20 = (undefined4)in_d2;
    local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,this_00);
    local_14 = (undefined4)in_d1;
    local_10 = (undefined4)in_d2;
    uVar10 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    local_34 = (undefined4)in_d1;
    local_30 = (undefined4)in_d2;
    local_38 = uVar10;
    fVar11 = (float)FUN_03b1b154(*(undefined4 *)(in_x0 + 0xc4));
    fVar12 = (float)ArmorflameMissile::calcDesiredRot(uVar10,in_d1,in_d2,fVar11);
    local_18 = param_1 * 25.132742;
    local_28 = ABS(fVar12 - fVar11);
    pfVar3 = eastl::min_alt<float>(&local_28,&local_18);
    if ((long)(double)(fVar12 - fVar11) < 0) {
      dVar14 = (double)fVar11 + -ABS((double)*pfVar3);
    }
    else {
      dVar14 = (double)fVar11 + ABS((double)*pfVar3);
    }
    if (3.1415927410125732 < ABS(dVar14)) {
      dVar13 = 6.2831854820251465;
      if ((long)dVar14 < 0) {
        dVar13 = -6.2831854820251465;
      }
      dVar14 = dVar14 - dVar13;
    }
    FUN_03b1b158((float)dVar14,in_x0 + 0xc4);
    this_01 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
    fVar11 = (float)DVec3::getLength(this_01);
    SetRotatedVelocity(in_x0,fVar11);
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
    if ((pZVar4 != (Zombie *)0x0) && (cVar1 = FUN_03b1cdf8(), cVar1 != '\0')) {
      PineconePlantfoodProjectile::SetOverrideTarget
                ((PineconePlantfoodProjectile *)in_x0,(BoardEntity *)0x0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::fireThrons(BoardEntity*) */

void __thiscall HatMushroomProjectile::fireThrons(HatMushroomProjectile *this,BoardEntity *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float *pfVar3;
  RtObject *pRVar4;
  HatMushroomProjectileThron *pHVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  Board *pBVar11;
  undefined4 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar11._0_4_ = *puVar1;
  uVar9 = *(undefined4 *)((long)puVar1 + 4);
  uVar10 = *(undefined4 *)(puVar1 + 1);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"HatMushroomProjectileThron");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,(wstring *)aRStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  pfVar3 = (float *)Projectile::GetVelocity((Projectile *)this);
  if (param_1 == (BoardEntity *)0x0) {
    iVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      uVar2 = Projectile::GetInstigator((Projectile *)this);
      pRVar4 = (RtObject *)Board::AddProjectile(pBVar11._0_4_,uVar9,uVar10,uVar7,aRStack_18,uVar2,0)
      ;
      pHVar5 = Sexy::RtObject::Cast<HatMushroomProjectileThron>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      fVar8 = (float)iVar6;
      iVar6 = iVar6 + 1;
      FUN_03b1b158(fVar8 * 0.7853982,pHVar5 + 0xc4);
      Projectile::SetRotatedVelocity((Projectile *)pHVar5,*pfVar3);
    } while (iVar6 != 8);
  }
  else {
    iVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_38);
      uVar2 = Projectile::GetInstigator((Projectile *)this);
      pRVar4 = (RtObject *)Board::AddProjectile(pBVar11._0_4_,uVar9,uVar10,uVar7,aRStack_18,uVar2,0)
      ;
      pHVar5 = Sexy::RtObject::Cast<HatMushroomProjectileThron>(pRVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      fVar8 = (float)iVar6;
      iVar6 = iVar6 + 1;
      FUN_03b1b158(fVar8 * 0.7853982,pHVar5 + 0xc4);
      Projectile::SetRotatedVelocity((Projectile *)pHVar5,*pfVar3);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      SpearProjectile::SetPlant((SpearProjectile *)pHVar5,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    } while (iVar6 != 8);
  }
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"HatMushroomProjectile");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,(wstring *)aRStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  Projectile::SetPropertySheet((Projectile *)this,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HatMushroomProjectile::HatMushroomProjectile() */

void __thiscall HatMushroomProjectile::HatMushroomProjectile(HatMushroomProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672d950;
  *(undefined ***)(this + 0x10) = &PTR__HatMushroomProjectile_0672db40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f8));
  return;
}


/* HatMushroomProjectile::StaticNew() */

HatMushroomProjectile * HatMushroomProjectile::StaticNew(void)

{
  HatMushroomProjectile *this;
  
  this = ::operator_new(0x200);
  HatMushroomProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::canZomibeBeTransport(Zombie*) */

void __thiscall
HatMushroomProjectile::canZomibeBeTransport(HatMushroomProjectile *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  RtObject *this_01;
  HatMushroomProjectileProps *pHVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pHVar5 = Sexy::RtObject::Cast<HatMushroomProjectileProps>(this_01);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(pHVar5 + 0x210);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar6,uVar7,lVar8 + 8);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) && (cVar2 = Zombie::IsTargetable(param_1), cVar2 != '\0')) {
      cVar2 = (**(code **)(*(long *)param_1 + 0xb8))(param_1,*(undefined4 *)(this + 0x30));
      if ((((cVar2 != '\0') &&
           ((((cVar3 = Zombie::IsControlled(param_1), cVar3 == '\0' &&
              (cVar3 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar3 == '\0')) &&
             (cVar3 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar3 == '\0')) &&
            ((cVar3 = Zombie::HasFogImmune(param_1), cVar3 == '\0' &&
             (cVar3 = Zombie::IsBerserk(param_1), cVar3 == '\0')))))) &&
          (cVar3 = Zombie::IsBoss(param_1), cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar3 == '\0' &&
          (cVar3 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar3 == '\0')))) {
        iVar4 = Zombie::GetSizeType(param_1);
        if (iVar4 != 0) {
          iVar4 = Zombie::GetSizeType(param_1);
          cVar2 = iVar4 == 1;
        }
        goto LAB_03b20b24;
      }
    }
  }
  cVar2 = '\0';
LAB_03b20b24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::doTransportZombei(Zombie*, float, float) */

void __thiscall
HatMushroomProjectile::doTransportZombei
          (HatMushroomProjectile *this,Zombie *param_1,float param_2,float param_3)

{
  char cVar1;
  HatMushroomTransportSubSystem *pHVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canZomibeBeTransport(this,param_1);
  if (cVar1 != '\0') {
    pHVar2 = Board::GetGameSubSystem<HatMushroomTransportSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    HatMushroomTransportSubSystem::transportZombieToRightmostGrid
              ((HatMushroomTransportSubSystem *)CONCAT44(in_register_00005004,param_2),
               CONCAT44(in_register_00005024,param_3),pHVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::FindNextTargetAndTrack() */

void __thiscall HatMushroomProjectile::FindNextTargetAndTrack(HatMushroomProjectile *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ResourceInfo *pRVar10;
  BoardEntity *this_00;
  undefined1 auVar11 [16];
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  auVar11 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGridUnbounded(auVar11._0_8_,auVar11._8_8_);
  Sexy::Insets::Insets((Insets *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_30,local_50 + -1,local_4c + -1,3,3);
  local_40 = local_30;
  uStack_38 = uStack_28;
  if (*(int *)(this + 0x1e8) - 3U < 2) {
    Sexy::Insets::Insets((Insets *)&local_30,local_50 + -2,local_4c + -2,5,5);
    local_40 = local_30;
    uStack_38 = uStack_28;
  }
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar4,(Insets *)&local_40);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_03b23c1c(uVar7,uVar8,this);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_30), bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_00 = (BoardEntity *)*puVar9;
    iVar5 = BoardEntity::CalcColumnPosition(this_00);
    iVar6 = SharkMinion::getRow((SharkMinion *)this_00);
    cVar2 = BoardTransforms::IsGridCoordinateOnBoard(iVar5,iVar6);
    if (((cVar2 != '\0') &&
        (pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8)),
        this_00 != (BoardEntity *)pRVar10)) &&
       ((bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)this_00), bVar1 &&
        (cVar3 = FUN_03b1cdf8(this_00), cVar2 = '\x01', cVar3 == '\0')))) goto LAB_03b23dc8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_30), bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    this_00 = (BoardEntity *)*puVar9;
    iVar5 = BoardEntity::CalcColumnPosition(this_00);
    iVar6 = SharkMinion::getRow((SharkMinion *)this_00);
    cVar2 = BoardTransforms::IsGridCoordinateOnBoard(iVar5,iVar6);
    if (((cVar2 != '\0') &&
        (pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8)),
        this_00 != (BoardEntity *)pRVar10)) && (cVar3 = FUN_03b1cdf8(this_00), cVar3 == '\0'))
    goto LAB_03b23dc8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)this,(BoardEntity *)0x0);
  cVar2 = '\0';
LAB_03b23e74:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
LAB_03b23dc8:
  PineconePlantfoodProjectile::SetOverrideTarget((PineconePlantfoodProjectile *)this,this_00);
  goto LAB_03b23e74;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::handleImpact(BoardEntity*) */

void HatMushroomProjectile::handleImpact(BoardEntity *param_1)

{
  map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
  *this;
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this_01;
  HatMushroomProjectileProps *pHVar4;
  undefined4 *puVar5;
  Zombie *this_02;
  SexyVector3 *pSVar6;
  DVec3 *this_03;
  int *piVar7;
  long extraout_x0;
  long extraout_x0_00;
  ResourceInfo *pRVar8;
  BoardEntity *in_x1;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  ulong in_d1;
  undefined8 in_d2;
  BoardEntity *local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
          *)(param_1 + 0x1b8);
  local_8 = ___stack_chk_guard;
  local_48[0] = in_x1;
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)param_1);
  pHVar4 = Sexy::RtObject::Cast<HatMushroomProjectileProps>(this_01);
  Projectile::handleImpact((Projectile *)param_1,local_48[0]);
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  local_28 = std::
             map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
             ::find(this,local_48);
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_28,(exception_ptr *)&local_18);
  if (cVar1 == '\0') {
    piVar7 = (int *)std::
                    map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
                    ::operator[](this,local_48);
    *piVar7 = *piVar7 + 1;
  }
  else {
    puVar5 = (undefined4 *)
             std::
             map<BoardEntity*,int,std::less<BoardEntity*>,std::allocator<std::pair<BoardEntity*const,int>>>
             ::operator[](this,local_48);
    *puVar5 = 1;
  }
  if (local_48[0] == (BoardEntity *)0x0) goto LAB_03b2426c;
  this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)local_48[0]);
  iVar3 = *(int *)(param_1 + 0x1b4);
  if ((this_02 == (Zombie *)0x0) || (iVar3 != 1)) goto LAB_03b24270;
  cVar1 = FUN_03b1cdf8();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x1e8);
    if (iVar3 == 1) {
LAB_03b24408:
      if (*(code **)(*(long *)this_02 + 0x1d8) == Zombie::GetWalkSpeed) {
        fVar10 = (float)Zombie::GetWalkSpeed(this_02);
      }
      else {
        fVar10 = (float)(**(code **)(*(long *)this_02 + 0x1d8))();
      }
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      in_d2 = 0x40a00000;
      fVar10 = fVar10 * 5.0 * (float)iVar3;
      in_d1 = (ulong)(uint)fVar10;
      doTransportZombei((HatMushroomProjectile *)param_1,this_02,5.0,fVar10);
      goto LAB_03b2426c;
    }
    if (iVar3 == 2) {
      in_d1 = 0;
      doTransportZombei((HatMushroomProjectile *)param_1,this_02,0.0,0.0);
      iVar3 = *(int *)(param_1 + 0x1b4);
      goto LAB_03b24270;
    }
    if (iVar3 == 5) {
      fireThrons((HatMushroomProjectile *)param_1,local_48[0]);
      iVar3 = *(int *)(param_1 + 0x1b4);
      goto LAB_03b24270;
    }
    if (iVar3 - 3U < 2) {
      cVar1 = Zombie::HasCondition(this_02,0x6a);
      if (cVar1 == '\0') {
        cVar1 = Zombie::HasCondition(this_02,0x6b);
        if (cVar1 == '\0') {
          cVar1 = Zombie::HasCondition(this_02,0x6c);
          if (cVar1 != '\0') {
            Zombie::EndCondition(this_02,0x6c);
          }
        }
        else {
          Zombie::EndCondition(this_02,0x6b);
        }
      }
      else {
        Zombie::EndCondition(this_02,0x6a);
      }
      if (*(int *)(param_1 + 0x1e8) != 4) goto LAB_03b2426c;
      goto LAB_03b24408;
    }
    if (*(int *)(param_1 + 0x1b4) < *(int *)(param_1 + 0x1ec)) goto LAB_03b24304;
  }
  else {
LAB_03b2426c:
    iVar3 = *(int *)(param_1 + 0x1b4);
LAB_03b24270:
    if (iVar3 < *(int *)(param_1 + 0x1ec)) {
LAB_03b24304:
      FindNextTargetAndTrack((HatMushroomProjectile *)param_1);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(param_1 + 0x1a8))
      ;
      if (cVar1 == '\0') {
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x1a8));
        uVar11 = GetTargetPos((HatMushroomProjectile *)param_1,(BoardEntity *)pRVar8);
        local_20 = (undefined4)in_d2;
        local_28 = CONCAT44((int)in_d1,uVar11);
        pSVar6 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        uVar11 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar6);
        local_10 = (undefined4)in_d2;
        local_18 = CONCAT44((int)in_d1,uVar11);
        uVar11 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
        local_34 = (undefined4)in_d1;
        local_30 = (undefined4)in_d2;
        local_38 = uVar11;
        uVar9 = FUN_03b1b154(*(undefined4 *)(param_1 + 0xc4));
        ArmorflameMissile::calcDesiredRot(uVar11,in_d1,in_d2,uVar9,param_1);
        FUN_03b1b158(param_1 + 0xc4);
        this_03 = (DVec3 *)Projectile::GetVelocity((Projectile *)param_1);
        fVar10 = (float)DVec3::getLength(this_03);
        SetRotatedVelocity((HatMushroomProjectile *)param_1,fVar10);
        goto LAB_03b24298;
      }
    }
    if (*(int *)(param_1 + 0x1e8) == 5) {
      this_00 = (RtWeakPtr *)(param_1 + 0x1f8);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        fVar10 = (float)PVZ_T();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        nop();
        if (*(float *)(pHVar4 + 500) < fVar10 - *(float *)(extraout_x0 + 0x28)) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          nop();
          uVar11 = PVZ_T();
          *(undefined4 *)(extraout_x0_00 + 0x28) = uVar11;
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
          PineconePlantfoodProjectile::SetOverrideTarget
                    ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)pRVar8);
          goto LAB_03b24298;
        }
      }
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
LAB_03b24298:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProjectile::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
HatMushroomProjectile::getCollisionEntities
          (HatMushroomProjectile *this,vector *param_1,TRect *param_2)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  GridItemProtectorShieldSegment *pGVar4;
  ResourceInfo *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8));
  if ((byte)this[0x1b0] < (pRVar2 != (ResourceInfo *)0x0)) {
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
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      do {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        local_38 = (ResourceInfo *)*puVar3;
        pGVar4 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>((RtObject *)local_38);
        if ((pGVar4 != (GridItemProtectorShieldSegment *)0x0) || (pRVar2 == local_38)) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                     (BoardEntity **)&local_38);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar1);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

