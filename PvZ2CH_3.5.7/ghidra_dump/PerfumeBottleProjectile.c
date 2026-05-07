// Class: PerfumeBottleProjectile


/* PerfumeBottleProjectile::~PerfumeBottleProjectile() */

void __thiscall PerfumeBottleProjectile::~PerfumeBottleProjectile(PerfumeBottleProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069fc4d0;
  *(undefined ***)(this + 0x10) = &PTR__PerfumeBottleProjectile_069fc6c0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PerfumeBottleProjectile::~PerfumeBottleProjectile() */

void __thiscall PerfumeBottleProjectile::~PerfumeBottleProjectile(PerfumeBottleProjectile *this)

{
  ~PerfumeBottleProjectile(this + -0x10);
  return;
}


/* PerfumeBottleProjectile::~PerfumeBottleProjectile() */

void __thiscall PerfumeBottleProjectile::~PerfumeBottleProjectile(PerfumeBottleProjectile *this)

{
  ~PerfumeBottleProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PerfumeBottleProjectile::~PerfumeBottleProjectile() */

void __thiscall PerfumeBottleProjectile::~PerfumeBottleProjectile(PerfumeBottleProjectile *this)

{
  ~PerfumeBottleProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerfumeBottleProjectile::StaticClassInit() */

void PerfumeBottleProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PerfumeBottleProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04edca28,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerfumeBottleProjectile::StaticGetClass() */

long * PerfumeBottleProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PerfumeBottleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerfumeBottleProjectile::GetClass() const */

long * PerfumeBottleProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PerfumeBottleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerfumeBottleProjectile::PerfumeBottleProjectile() */

void __thiscall PerfumeBottleProjectile::PerfumeBottleProjectile(PerfumeBottleProjectile *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069fc4d0;
  *(undefined ***)(this + 0x10) = &PTR__PerfumeBottleProjectile_069fc6c0;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  *(undefined4 *)(this + 0x1a8) = 0;
  Sexy::Point::Point((Point *)&local_10);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1ac) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerfumeBottleProjectile::StaticNew() */

PerfumeBottleProjectile * PerfumeBottleProjectile::StaticNew(void)

{
  PerfumeBottleProjectile *this;
  
  this = ::operator_new(0x1b8);
  PerfumeBottleProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerfumeBottleProjectile::CreateBrokenAnimation() */

void __thiscall PerfumeBottleProjectile::CreateBrokenAnimation(PerfumeBottleProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  float fVar4;
  float fVar5;
  string asStack_38 [8];
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"POPANIM_EFFECTS_ZOMBIE_RENAI_PERFUMER_BOTTLE_HIT");
  nop();
  std::string::string(asStack_30,"re1");
  nop();
  uVar2 = Board::MakeRenderOrder(0x64960,0,0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  FUN_05475d88(asStack_20,asStack_38);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(int)fVar4,(float)(int)fVar5,0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar2,0,1);
  std::string::~string(asStack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_30,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerfumeBottleProjectile::CheckExistPlantInPlantfoodStatus(Sexy::Point) */

void __thiscall
PerfumeBottleProjectile::CheckExistPlantInPlantfoodStatus(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  Plant *this;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,*param_2,
             param_2[1]);
  lVar2 = FUN_04eda78c(local_20,local_18);
  if (lVar2 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while( true ) {
      uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!(bool)uVar1) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      if (this != (Plant *)0x0) {
        if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
          uVar1 = Plant::IsInPlantFoodState(this);
        }
        else {
          uVar1 = (**(code **)(*(long *)this + 0x1f8))();
        }
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerfumeBottleProjectile::OnBrokenBottleComplete(StandaloneEffect*) */

void PerfumeBottleProjectile::OnBrokenBottleComplete(StandaloneEffect *param_1)

{
  bool bVar1;
  char cVar2;
  PoisonMistTileSubSystem *pPVar3;
  long lVar4;
  TPoint *pTVar5;
  undefined8 *puVar6;
  ToxicWaterGridItemPoisonMist *this;
  code *pcVar7;
  Board *this_00;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = Board::GetGameSubSystem<PoisonMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point(aPStack_20,(TPoint *)(param_1 + 0x1ac));
  ToxicWaterPerfumeBottleProjectile::CreatePoisonList
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,param_1,aPStack_20,
             *(undefined4 *)(param_1 + 0x1a8));
  lVar4 = FUN_04eda7a4(local_38,local_30);
  if (lVar4 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"OnBrokenBottleComplete no tile to create poison mist");
  }
  else {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      pcVar7 = *(code **)(*(long *)pPVar3 + 0xa8);
      Sexy::Point::Point(aPStack_20,pTVar5);
      cVar2 = (*pcVar7)(pPVar3,aPStack_20);
      if (cVar2 == '\0') {
        Sexy::Point::Point(aPStack_20,pTVar5);
        cVar2 = CheckExistPlantInPlantfoodStatus((PerfumeBottleProjectile *)param_1,aPStack_20);
        if (cVar2 != '\0') break;
        Sexy::OutputDebugStrF
                  ((wchar_t *)"OnBrokenBottleComplete AddGridItem x=%d y=%d",(ulong)*(uint *)pTVar5,
                   (ulong)*(uint *)(pTVar5 + 4));
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aPStack_20,"perfumer_poison_mist");
        Board::AddGridItem(this_00,(string *)aPStack_20,*(int *)pTVar5,*(int *)(pTVar5 + 4),1);
        std::string::~string((string *)aPStack_20);
        nop();
      }
      else {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
        EntityFinder::GetEntitiesAtGridSquare
                  (aPStack_20,4,*(undefined4 *)pTVar5,*(undefined4 *)(pTVar5 + 4));
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aPStack_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_20);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar1) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          bVar1 = Sexy::RtObject::IsA<GridItemPoisonMist>((RtObject *)*puVar6);
          if ((bVar1) && (nop(), this != (ToxicWaterGridItemPoisonMist *)0x0)) {
            Sexy::OutputDebugStrF
                      ((wchar_t *)"OnBrokenBottleComplete TurnToLoop x=%d y=%d",
                       (ulong)*(uint *)pTVar5,(ulong)*(uint *)(pTVar5 + 4));
            ToxicWaterGridItemPoisonMist::TurnToLoop(this);
            break;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerfumeBottleProjectile::OnCollideGround() */

void __thiscall PerfumeBottleProjectile::OnCollideGround(PerfumeBottleProjectile *this)

{
  CreateBrokenAnimation(this);
  OnBrokenBottleComplete((StandaloneEffect *)this);
  Projectile::OnCollideGround((Projectile *)this);
  return;
}

