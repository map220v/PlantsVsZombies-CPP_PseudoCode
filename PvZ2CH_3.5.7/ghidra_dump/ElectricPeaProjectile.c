// Class: ElectricPeaProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaProjectile::StaticClassInit() */

void ElectricPeaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c15f70,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaProjectile::StaticGetClass() */

long * ElectricPeaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaProjectile::GetClass() const */

long * ElectricPeaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaProjectile::ElectricPeaProjectile() */

void __thiscall ElectricPeaProjectile::ElectricPeaProjectile(ElectricPeaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06747380;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaProjectile_06747570;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  return;
}


/* ElectricPeaProjectile::StaticNew() */

ElectricPeaProjectile * ElectricPeaProjectile::StaticNew(void)

{
  ElectricPeaProjectile *this;
  
  this = ::operator_new(0x1e8);
  ElectricPeaProjectile(this);
  return this;
}


/* ElectricPeaProjectile::~ElectricPeaProjectile() */

void __thiscall ElectricPeaProjectile::~ElectricPeaProjectile(ElectricPeaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06747380;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaProjectile_06747570;
  std::
  vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>::
  clear((vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>
         *)(this + 0x1a8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  std::
  vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>
           *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ElectricPeaProjectile::~ElectricPeaProjectile() */

void __thiscall ElectricPeaProjectile::~ElectricPeaProjectile(ElectricPeaProjectile *this)

{
  ~ElectricPeaProjectile(this + -0x10);
  return;
}


/* ElectricPeaProjectile::~ElectricPeaProjectile() */

void __thiscall ElectricPeaProjectile::~ElectricPeaProjectile(ElectricPeaProjectile *this)

{
  ~ElectricPeaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricPeaProjectile::~ElectricPeaProjectile() */

void __thiscall ElectricPeaProjectile::~ElectricPeaProjectile(ElectricPeaProjectile *this)

{
  ~ElectricPeaProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ElectricPeaProjectile::OnCollideEntity(ElectricPeaProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_10 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_18);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaProjectile::spawnBolts() */

void __thiscall ElectricPeaProjectile::spawnBolts(ElectricPeaProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  string *psVar7;
  ulong uVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  ElectricBoltEffect *pEVar11;
  RtWeakPtrBase *pRVar12;
  long *plVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined8 local_c8;
  undefined8 local_c0;
  string asStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar15 = PVZ_T();
  *(undefined4 *)(this + 0x1c8) = uVar15;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_a8 = *puVar4;
  local_a0 = *(undefined4 *)(puVar4 + 1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  EntityFinder::GetEntitiesWithinCircle
            ((float)iVar3 * *(float *)(this + 0x1c0),avStack_80,2,&local_a8);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_80);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_80);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar5,uVar6);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
    plVar13 = (long *)*puVar4;
    if (plVar13 != (long *)0x0) {
      pcVar14 = *(code **)(*plVar13 + 0x3d0);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_b8,"electricpeashooter");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_b0);
      cVar2 = (*pcVar14)(plVar13,(RtWeakPtr<Sexy::SoundResource> *)&local_68,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
      std::string::~string(asStack_b8);
      nop();
      if (cVar2 != '\0') {
        uVar8 = FUN_03c0fddc(local_98,local_90);
        uVar9 = FUN_03c0fde8(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
        if (uVar9 <= uVar8) goto LAB_03c169a0;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_b0);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)&local_98,(RtWeakPtr *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
  }
  uVar8 = FUN_03c0fddc(local_98,local_90);
  uVar9 = FUN_03c0fde8(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  if (uVar8 < uVar9) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle
              ((float)iVar3 * *(float *)(this + 0x1c0),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,4,
               &local_a8);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_68);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_68);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar5,uVar6);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8)
      ;
      uVar9 = FUN_03c0fddc(local_98,local_90);
      uVar8 = FUN_03c0fde8(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
      if (uVar8 <= uVar9) break;
      cVar2 = RealObject::IsOnTeam(*puVar4,2);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)asStack_b8);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)&local_98,(RtWeakPtr *)aRStack_b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_b8)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
    uVar8 = FUN_03c0fddc(local_98,local_90);
  }
LAB_03c169a0:
  uVar9 = 0;
  while (uVar9 < uVar8) {
    pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c0fe10(*(undefined8 *)(this + 0x1a8),uVar9);
    pEVar11 = (ElectricBoltEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
    pRVar12 = (RtWeakPtrBase *)FUN_03c0fe18(local_98,uVar9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_b8,pRVar12);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(RtWeakPtrBase *)&local_c0);
    std::string::string((string *)&local_68,"POPANIM_EFFECTS_ELECTRIC_LIGHTNINGREED_HIT");
    ElectricBoltEffect::SetActive
              (pEVar11,(RtWeakPtr<Sexy::SoundResource> *)asStack_b8,
               (RtWeakPtr<Sexy::SoundResource> *)aRStack_b0,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_b8);
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_60 = *(undefined4 *)(this + 0x1cc);
    local_68 = Projectile::GetInstigator((Projectile *)this);
    local_58 = 0x80;
    pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c0fe18(local_98,uVar9);
    plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
    (**(code **)(*plVar13 + 0x110))(plVar13,(string *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    uVar8 = FUN_03c0fddc(local_98,local_90);
    uVar9 = uVar9 + 1;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaProjectile::onUpdate(float) */

void ElectricPeaProjectile::onUpdate(float param_1)

{
  ElectricPeaProjectile *in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(in_x0 + 0x1c4);
  fVar3 = *(float *)(in_x0 + 0x1c8);
  fVar2 = (float)PVZ_T();
  if (fVar2 <= fVar1 + fVar3) {
    return;
  }
  spawnBolts(in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaProjectile::SetProjectileData(float, int, float, float) */

void __thiscall
ElectricPeaProjectile::SetProjectileData
          (ElectricPeaProjectile *this,float param_1,int param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x0;
  int iVar2;
  float fVar3;
  float fVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x1cc) = param_4;
  *(float *)(this + 0x1c0) = param_3;
  *(float *)(this + 0x1c4) = param_1;
  fVar3 = (float)PVZ_T();
  fVar4 = (float)RandRangeFloat(0.0,*(float *)(this + 0x1c4));
  *(float *)(this + 0x1c8) = fVar3 - fVar4;
  uVar1 = Sexy::RtClass::StaticGetClassNamed("ElectricBoltEffect");
  if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      GameObject::Create(uVar1,0x28);
      nop();
      std::string::string(asStack_18,"POPANIM_EFFECTS_ELECTRIC_PEASHOOTER_ELECTROBALL_EFFECTS");
      std::string::string(asStack_10,"animation");
      ElectricBoltEffect::SetupEffect
                ((ElectricBoltEffect *)0x3e19999a,extraout_x0,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)asStack_18);
      std::
      vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>
      ::push_back((vector<Sexy::RtWeakPtr<ElectricBoltEffect>,std::allocator<Sexy::RtWeakPtr<ElectricBoltEffect>>>
                   *)(this + 0x1a8),(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    } while (iVar2 != param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

