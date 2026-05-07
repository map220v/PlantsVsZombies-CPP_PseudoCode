// Class: ZombieMirrorQueenPoisonAppleProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenPoisonAppleProjectile::StaticClassInit() */

void ZombieMirrorQueenPoisonAppleProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenPoisonAppleProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0725c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenPoisonAppleProjectile::StaticGetClass() */

long * ZombieMirrorQueenPoisonAppleProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenPoisonAppleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenPoisonAppleProjectile::GetClass() const */

long * ZombieMirrorQueenPoisonAppleProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenPoisonAppleProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenPoisonAppleProjectile::ZombieMirrorQueenPoisonAppleProjectile() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::ZombieMirrorQueenPoisonAppleProjectile
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06a0e0d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMirrorQueenPoisonAppleProjectile_06a0e2c8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* ZombieMirrorQueenPoisonAppleProjectile::StaticNew() */

ZombieMirrorQueenPoisonAppleProjectile * ZombieMirrorQueenPoisonAppleProjectile::StaticNew(void)

{
  ZombieMirrorQueenPoisonAppleProjectile *this;
  
  this = ::operator_new(0x1b0);
  ZombieMirrorQueenPoisonAppleProjectile(this);
  return this;
}


/* ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0e0d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMirrorQueenPoisonAppleProjectile_06a0e2c8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~ZombieMirrorQueenPoisonAppleProjectile(this + -0x10);
  return;
}


/* ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~ZombieMirrorQueenPoisonAppleProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::~ZombieMirrorQueenPoisonAppleProjectile
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  ~ZombieMirrorQueenPoisonAppleProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenPoisonAppleProjectile::OnCollideGround() */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::OnCollideGround
          (ZombieMirrorQueenPoisonAppleProjectile *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  PlantGroup *pPVar2;
  ResourceInfo *pRVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_01);
    if (pPVar2 != (PlantGroup *)0x0) {
      pcVar4 = *(code **)(*(long *)this + 0x1e0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar4)(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      pcVar4 = *(code **)(*(long *)this + 0x168);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      (*pcVar4)(this,pRVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenPoisonAppleProjectile::createApplePuree(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
ZombieMirrorQueenPoisonAppleProjectile::createApplePuree
          (ZombieMirrorQueenPoisonAppleProjectile *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  PlantGroup *pPVar4;
  ZombieMirrorQueenPoisonAppleProjectileProps *pZVar5;
  vector *pvVar6;
  GridItemZombieMirrorQueenPoisonApplePuree *pGVar7;
  RtWeakPtrBase *pRVar8;
  Plant *this_00;
  GameObjectDictionary *this_01;
  CthulhuSubSystem *this_02;
  ResourceInfo *pRVar9;
  Board *this_03;
  code *pcVar10;
  int local_58;
  int local_54;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    pPVar4 = Sexy::RtObject::Cast<PlantGroup>(pRVar3);
    if (pPVar4 != (PlantGroup *)0x0) {
      pRVar3 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pZVar5 = Sexy::RtObject::Cast<ZombieMirrorQueenPoisonAppleProjectileProps>(pRVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      BoardEntity::CalcGridPosition();
      pvVar6 = (vector *)PlantGroup::Plants();
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                (avStack_20,pvVar6);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar1) {
        pRVar8 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar8);
        this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        this_01 = (GameObjectDictionary *)Plant::GetAttachedBoardEntityManager(this_00);
        std::string::string((string *)aRStack_30,"poison_apple_puree");
        this_02 = (CthulhuSubSystem *)
                  GameObjectDictionary::FindOrCreate(this_01,(string *)aRStack_30);
        std::string::~string((string *)aRStack_30);
        nop();
        cVar2 = CthulhuSubSystem::Update(this_02);
        if (cVar2 == '\0') {
          this_03 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_30,"poison_apple_puree");
          Board::AddGridItem(this_03,(string *)aRStack_30,local_58,local_54,1);
          std::string::~string((string *)aRStack_30);
          nop();
          ToolPacketData::GetProps();
          BasePowerup::SetPowerupType((BasePowerup *)this_02,aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          pcVar10 = *(code **)(*(long *)this_02 + 0x18);
          pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
          EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,0.0,0.0,0.0);
          (*pcVar10)(this_02,pRVar9,aRStack_30,1);
        }
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x10));
        pGVar7 = Sexy::RtObject::Cast<GridItemZombieMirrorQueenPoisonApplePuree>(pRVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
                    /* WARNING: Load size is inaccurate */
        GridItemZombieMirrorQueenPoisonApplePuree::setValues
                  (*(GridItemZombieMirrorQueenPoisonApplePuree **)(pZVar5 + 0x1e4),
                   *(undefined4 *)(pZVar5 + 0x1e0),pGVar7,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                (avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

