// Class: ZombieExplosionProofPolice


/* ZombieExplosionProofPolice::onSetHelm() */

void __thiscall ZombieExplosionProofPolice::onSetHelm(ZombieExplosionProofPolice *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x208))();
  *(undefined4 *)(this + 0x844) = uVar1;
  (**(code **)(*(long *)this + 0xa60))(this);
  return;
}


/* ZombieExplosionProofPolice::onZombieInitialize() */

void __thiscall ZombieExplosionProofPolice::onZombieInitialize(ZombieExplosionProofPolice *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplosionProofPolice::StaticClassInit() */

void ZombieExplosionProofPolice::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieExplosionProofPolice");
    (*pcVar2)(plVar1,asStack_10,FUN_03af6f4c,0x848,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplosionProofPolice::StaticGetClass() */

long * ZombieExplosionProofPolice::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExplosionProofPolice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExplosionProofPolice::GetClass() const */

long * ZombieExplosionProofPolice::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExplosionProofPolice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplosionProofPolice::onTakeHelmDamage(DamageInfo const&) */

void __thiscall
ZombieExplosionProofPolice::onTakeHelmDamage(ZombieExplosionProofPolice *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x10000);
  if ((!bVar1) &&
     ((*(RtObject **)param_1 == (RtObject *)0x0 ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), !bVar1)))) {
    iVar2 = FUN_03af6d04(*(undefined4 *)(this + 0xb0));
    if ((iVar2 == 2) || (iVar2 == 3)) {
      std::string::string(asStack_10,"Play_impact_shieldhit");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_03af78a0);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
    else if (iVar2 == 1) {
      std::string::string(asStack_10,"Play_impact_plastic");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_03af78a0);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
  }
  (**(code **)(*(long *)this + 0xa68))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplosionProofPolice::refreshAnimRigForHelm() */

void __thiscall ZombieExplosionProofPolice::refreshAnimRigForHelm(ZombieExplosionProofPolice *this)

{
  undefined4 uVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  if (pZVar2 != (ZombieHydraHeadAnimRig *)0x0) {
    (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
    uVar1 = FUN_03af6d04(*(undefined4 *)(this + 0xb0));
    switch(uVar1) {
    case 1:
    case 2:
    case 3:
    case 10:
    case 0xd:
      (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,uVar1);
      (**(code **)(*(long *)pZVar2 + 0x270))(pZVar2,*(undefined4 *)(this + 0x844));
    }
    (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  }
  return;
}


/* ZombieExplosionProofPolice::refreshHelmDamageState() */

void __thiscall ZombieExplosionProofPolice::refreshHelmDamageState(ZombieExplosionProofPolice *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  iVar1 = *(int *)(this + 0x844);
  iVar2 = (**(code **)(*(long *)this + 0x208))(this);
  if (iVar2 != iVar1) {
    uVar3 = FUN_03af6d04(*(undefined4 *)(this + 0xb0));
    switch(uVar3) {
    case 1:
    case 2:
    case 3:
    case 10:
    case 0xd:
      (**(code **)(*(long *)pZVar4 + 0x270))(pZVar4,iVar2);
    }
    (**(code **)(*(long *)pZVar4 + 0x1f8))(pZVar4);
    *(int *)(this + 0x844) = iVar2;
  }
  return;
}


/* ZombieExplosionProofPolice::onHelmDropped(HelmType, int) */

undefined8 ZombieExplosionProofPolice::onHelmDropped(Zombie *param_1,undefined4 param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined8 uVar2;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
    (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,0);
    uVar2 = (**(code **)(*(long *)pZVar1 + 0x288))(pZVar1,param_2,param_1);
    break;
  default:
    uVar2 = 0;
  }
  (**(code **)(*(long *)pZVar1 + 0x1f8))(pZVar1);
  return uVar2;
}


/* ZombieExplosionProofPolice::ZombieExplosionProofPolice() */

void __thiscall
ZombieExplosionProofPolice::ZombieExplosionProofPolice(ZombieExplosionProofPolice *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_06725aa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplosionProofPolice_06726520;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar1;
  return;
}


/* ZombieExplosionProofPolice::StaticNew() */

ZombieExplosionProofPolice * ZombieExplosionProofPolice::StaticNew(void)

{
  ZombieExplosionProofPolice *this;
  
  this = ::operator_new(0x848);
  ZombieExplosionProofPolice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplosionProofPolice::doZap() */

void __thiscall ZombieExplosionProofPolice::doZap(ZombieExplosionProofPolice *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplosionProofPolice::updateState_Walk() */

void __thiscall ZombieExplosionProofPolice::updateState_Walk(ZombieExplosionProofPolice *this)

{
  bool bVar1;
  int iVar2;
  RtObject *pRVar3;
  ZombieProjectileActionDefinition *pZVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Walk((Zombie *)this);
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar2 == 1) {
    ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    if (bVar1) {
      fVar5 = (float)PVZ_EOT();
      if (*(float *)(this + 0x840) == fVar5) {
        fVar5 = (float)PVZ_T();
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pZVar4 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar3);
        fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x54));
        *(float *)(this + 0x840) = fVar6 + fVar5;
      }
      fVar5 = (float)PVZ_T();
      if (*(float *)(this + 0x840) < fVar5) {
        fVar5 = (float)PVZ_T();
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pZVar4 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar3);
        fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar4 + 0x5c));
        *(float *)(this + 0x840) = fVar6 + fVar5;
        doZap(this);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplosionProofPolice::~ZombieExplosionProofPolice() */

void __thiscall
ZombieExplosionProofPolice::~ZombieExplosionProofPolice(ZombieExplosionProofPolice *this)

{
  *(undefined ***)this = &PTR_GetClass_06725aa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplosionProofPolice_06726520;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieExplosionProofPolice::~ZombieExplosionProofPolice() */

void __thiscall
ZombieExplosionProofPolice::~ZombieExplosionProofPolice(ZombieExplosionProofPolice *this)

{
  ~ZombieExplosionProofPolice(this + -0x10);
  return;
}


/* ZombieExplosionProofPolice::~ZombieExplosionProofPolice() */

void __thiscall
ZombieExplosionProofPolice::~ZombieExplosionProofPolice(ZombieExplosionProofPolice *this)

{
  ~ZombieExplosionProofPolice(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieExplosionProofPolice::~ZombieExplosionProofPolice() */

void __thiscall
ZombieExplosionProofPolice::~ZombieExplosionProofPolice(ZombieExplosionProofPolice *this)

{
  ~ZombieExplosionProofPolice(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplosionProofPolice::FindRangedTarget(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
ZombieExplosionProofPolice::FindRangedTarget(ZombieExplosionProofPolice *this,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  PlantGroup *pPVar3;
  ResourceInfo *pRVar4;
  ResourceInfo *this_01;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  TRect<int> *this_02;
  undefined8 local_80;
  undefined8 local_78;
  PlantGroup *local_70;
  string asStack_68 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) ||
     (pPVar3 = Sexy::RtObject::Cast<PlantGroup>(this_00), pPVar3 == (PlantGroup *)0x0)) {
    pRVar4 = (ResourceInfo *)Zombie::GetForcedTarget((Zombie *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_60);
    EntityFinder::GetEntities(avStack_60,0x10);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_60);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_60);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2)
    {
      puVar10 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      local_70 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)*puVar10);
      if (local_70 != (PlantGroup *)0x0) {
        PlantGroup::GetTopPlant(local_70);
        this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (this_01 != (ResourceInfo *)0x0) {
          Plant::GetType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          FUN_05475d88(asStack_68,lVar5 + 8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          cVar1 = (**(code **)(*(long *)this + 0x200))(this,this_01);
          if (((cVar1 != '\0') &&
              (((pRVar4 == this_01 || (pRVar4 == (ResourceInfo *)0x0)) &&
               (cVar1 = Plant::HasCondition(this_01,0x17), cVar1 == '\0')))) &&
             (((bVar2 = std::operator!=(asStack_68,"shrinkingviolet"), bVar2 &&
               (bVar2 = std::operator!=(asStack_68,"torchwood"), bVar2)) &&
              (cVar1 = ExplosionProofProjectile::isCanTargetFireGourd
                                 ((ExplosionProofProjectile *)this,(Plant *)this_01), cVar1 != '\0')
              ))) {
            (**(code **)(*(long *)this + 0x3a0))(aRStack_30,this);
            pfVar6 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_01);
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this);
            if (*pfVar7 < *pfVar6) {
              this_02 = (TRect<int> *)(**(code **)(*(long *)this_01 + 0x178))(this_01);
              cVar1 = Sexy::TRect<int>::Intersects(this_02,(TRect *)aRStack_30);
              if (cVar1 == '\0') goto LAB_03afa048;
            }
            std::vector<PlantGroup*,std::allocator<PlantGroup*>>::push_back
                      ((vector<PlantGroup*,std::allocator<PlantGroup*>> *)&local_48,&local_70);
          }
LAB_03afa048:
          std::string::~string(asStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
    }
    this_00 = (RtObject *)0x0;
    lVar5 = FUN_03af6d10(local_48,local_40);
    if (lVar5 != 0) {
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_48);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_48);
      BoardEntity::CalcGridPosition();
      EntityFinder::BoardEntitySorter_Closest_WeightNewRows::BoardEntitySorter_Closest_WeightNewRows
                ((BoardEntitySorter_Closest_WeightNewRows *)aRStack_30,asStack_68,param_2);
      std::
      sort<__gnu_cxx::__normal_iterator<PlantGroup**,std::vector<PlantGroup*,std::allocator<PlantGroup*>>>,EntityFinder::BoardEntitySorter_Closest_WeightNewRows>
                (uVar8,uVar9,(BoardEntitySorter_Closest_WeightNewRows *)aRStack_30);
      EntityFinder::BoardEntitySorter_Closest_WeightNewRows::
      ~BoardEntitySorter_Closest_WeightNewRows
                ((BoardEntitySorter_Closest_WeightNewRows *)aRStack_30);
      puVar10 = (undefined8 *)FUN_03af6dec(local_48);
      this_00 = (RtObject *)*puVar10;
    }
    std::vector<PlantGroup*,std::allocator<PlantGroup*>>::~vector
              ((vector<PlantGroup*,std::allocator<PlantGroup*>> *)&local_48);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

