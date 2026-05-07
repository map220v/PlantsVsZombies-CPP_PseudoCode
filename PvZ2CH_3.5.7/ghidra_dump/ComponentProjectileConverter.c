// Class: ComponentProjectileConverter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter::SetPlantAttackRect(Plant*, PlantWeapon) */

void __thiscall
ComponentProjectileConverter::SetPlantAttackRect
          (ComponentProjectileConverter *this,long param_1,undefined4 param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined4 uStack_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetPlantAttackRect((Plant *)&local_18,param_1,param_3);
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar2 = (float)FUN_03b94808(*(undefined4 *)(param_1 + 0x18),fVar3,*(undefined4 *)(param_1 + 0x20))
  ;
  Sexy::TRect<int>::Offset((TRect<int> *)&local_18,(int)-fVar2,(int)(-fVar3 - (float)local_c * 0.5))
  ;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x8c) = local_18;
  *(ulong *)(this + 0x94) = CONCAT44(local_c,uStack_10);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentProjectileConverter::getPlantCollisionRect(Plant*) */

void ComponentProjectileConverter::getPlantCollisionRect(Plant *param_1)

{
  long in_x1;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x1 + 0x1c);
  fVar1 = (float)FUN_03b94808(*(undefined4 *)(in_x1 + 0x18),fVar2,*(undefined4 *)(in_x1 + 0x20));
  Sexy::Insets::Insets(in_x8,(Insets *)(param_1 + 0x8c));
  Sexy::TRect<int>::Offset((TRect<int> *)in_x8,(int)fVar1,(int)fVar2);
  return;
}


/* ComponentProjectileConverter::ComponentProjectileConverter() */

void __thiscall
ComponentProjectileConverter::ComponentProjectileConverter(ComponentProjectileConverter *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_067363a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  ComponentProjectileConverterProps::ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x60));
  Sexy::Insets::Insets((Insets *)(this + 0x8c));
  *(undefined4 *)(this + 0xa0) = 0;
  this[0xa8] = (ComponentProjectileConverter)0x0;
  return;
}


/* ComponentProjectileConverter::StaticNew() */

ComponentProjectileConverter * ComponentProjectileConverter::StaticNew(void)

{
  ComponentProjectileConverter *this;
  
  this = ::operator_new(0xb0);
  ComponentProjectileConverter(this);
  return this;
}


/* ComponentProjectileConverter::onBegin() */

void __thiscall ComponentProjectileConverter::onBegin(ComponentProjectileConverter *this)

{
  std::vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>>::clear
            ((vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>> *)(this + 0x48));
  this[0x88] = (ComponentProjectileConverter)0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  return;
}


/* ComponentProjectileConverter::~ComponentProjectileConverter() */

void __thiscall
ComponentProjectileConverter::~ComponentProjectileConverter(ComponentProjectileConverter *this)

{
  *(undefined ***)this = &PTR_GetClass_067363a0;
  ComponentProjectileConverterProps::~ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x60));
  std::vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>>::~vector
            ((vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>> *)(this + 0x48));
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentProjectileConverter::~ComponentProjectileConverter() */

void __thiscall
ComponentProjectileConverter::~ComponentProjectileConverter(ComponentProjectileConverter *this)

{
  ~ComponentProjectileConverter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter::buildProjectileConversionList() */

void __thiscall
ComponentProjectileConverter::buildProjectileConversionList(ComponentProjectileConverter *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  string *psVar5;
  long lVar6;
  long lVar7;
  RtObject *this_00;
  ulong uVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtName aRStack_40 [16];
  ResourceInfo *local_30;
  ResourceInfo *local_28;
  RtWeakPtr<PowerPropertySheet> aRStack_20 [8];
  ResourceInfo *local_18;
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>>::empty
                    ((vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>> *)
                     (this + 0x48));
  uVar8 = 0;
  if (cVar1 != '\0') {
    for (; uVar3 = FUN_03b94428(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x78)),
        uVar8 < uVar3; uVar8 = uVar8 + 1) {
      ConvertProjectileNode::ConvertProjectileNode((ConvertProjectileNode *)&local_30);
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      psVar5 = (string *)FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
      Sexy::ToWString(psVar5);
      Sexy::RtName::RtName(aRStack_40,(wstring *)aRStack_50);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar4,0xc,aRStack_40);
      local_30 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtName::~RtName(aRStack_40);
      FUN_05476c50(aRStack_50);
      lVar6 = FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
      lVar7 = FUN_05474178(lVar6 + 8);
      if (lVar7 == 0) {
        lVar6 = FUN_05474178(lVar6 + 0x10);
      }
      else {
        uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
        lVar6 = FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
        Sexy::ToWString((string *)(lVar6 + 8));
        Sexy::RtName::RtName(aRStack_40,(wstring *)aRStack_50);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar4,0xc,aRStack_40);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_20,aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        Sexy::RtName::~RtName(aRStack_40);
        FUN_05476c50(aRStack_50);
        local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
        lVar6 = FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
        lVar6 = FUN_05474178(lVar6 + 0x10);
      }
      if (lVar6 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
        if (bVar2) {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          this_00 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          Sexy::RtObject::Cast<Plant>(this_00);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
        }
        else {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        if (1 < *(int *)(this + 0x9c)) {
          lVar6 = FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
          uVar4 = FUN_0547429c(lVar6 + 0x10);
          Sexy::StrFormat("Avatar%s",asStack_58,uVar4);
          uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
          Sexy::ToWString(asStack_58);
          Sexy::RtName::RtName(aRStack_40,(wstring *)aRStack_50);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar4,0xc,aRStack_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          Sexy::RtName::~RtName(aRStack_40);
          FUN_05476c50(aRStack_50);
          std::string::~string(asStack_58);
        }
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar1 == '\0') {
          uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
          lVar6 = FUN_03b94450(*(undefined8 *)(this + 0x70),uVar8);
          Sexy::ToWString((string *)(lVar6 + 0x10));
          Sexy::RtName::RtName(aRStack_40,(wstring *)aRStack_50);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar4,0xc,aRStack_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,aRStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          Sexy::RtName::~RtName(aRStack_40);
          FUN_05476c50(aRStack_50);
        }
        local_18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
      std::vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>>::push_back
                ((vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>> *)
                 (this + 0x48),(ConvertProjectileNode *)&local_30);
      ConvertProjectileNode::~ConvertProjectileNode((ConvertProjectileNode *)&local_30);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter::convertProjectile(Projectile*,
   Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
ComponentProjectileConverter::convertProjectile
          (ComponentProjectileConverter *this,Projectile *param_1,RtWeakPtrBase *param_3)

{
  int iVar1;
  RealObject *this_00;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  Projectile::SetPropertySheet(param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x130) != Projectile::onProjectileConverted) {
    (**(code **)(*(long *)param_1 + 0x130))(param_1);
  }
  FUN_03b943ac(param_1 + 0x1a4,this[0xa8]);
  if (*(int *)(this + 0xa0) == 0) {
    FUN_03b943a0(*(undefined4 *)(param_1 + 0xd8));
    FUN_03b943a4(param_1 + 0xd8);
  }
  else if (*(int *)(this + 0xa0) == 1) {
    iVar1 = *(int *)(this + 0x9c);
    fVar3 = *(float *)(this + 0xa4);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        fVar3 = fVar3 + fVar3;
      }
      else if (iVar1 == 2) {
        fVar3 = fVar3 * 3.0;
      }
    }
    fVar2 = (float)FUN_03b943a0(*(undefined4 *)(param_1 + 0xd8));
    FUN_03b943a4(fVar3 * fVar2 + fVar2,param_1 + 0xd8);
  }
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string((string *)aRStack_10,"Play_FirePea");
  RealObject::PlayPositionalSound(this_00,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::push_back
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter::onUpdate() */

void __thiscall ComponentProjectileConverter::onUpdate(ComponentProjectileConverter *this)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  undefined8 uVar8;
  ResourceInfo *this_00;
  long lVar9;
  long lVar10;
  int *piVar11;
  RtWeakPtrBase *pRVar12;
  ResourceInfo *pRVar13;
  ulong uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  RtMixedPtrBase aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  TRect<int> aTStack_48 [16];
  undefined8 local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x88] == (ComponentProjectileConverter)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
    if (cVar2 != '\0') {
      pRVar6 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
      ;
      bVar3 = Sexy::RtObject::IsA<Plant>(pRVar6);
      if (bVar3) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        buildProjectileConversionList(this);
        getPlantCollisionRect((Plant *)this);
        uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable(aRStack_28,uVar8,0x2b);
LAB_03b95dd0:
        bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28);
        if (bVar3) {
          Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_50);
          this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38)
          ;
          Sexy::RtId::~RtId((RtId *)&local_50);
          uVar4 = FUN_03b94390(*(undefined4 *)(this_00 + 0xa8));
          uVar14 = (ulong)*(uint *)(pPVar7 + 0x110);
          if (uVar4 == *(uint *)(pPVar7 + 0x110)) {
            bVar3 = false;
            lVar9 = Projectile::GetProps((Projectile *)this_00);
            uVar8 = *(undefined8 *)(lVar9 + 0x198);
            lVar10 = FUN_03b943c4(uVar8,*(undefined8 *)(lVar9 + 0x1a0));
            lVar15 = 0;
            while (lVar15 != lVar10) {
              lVar1 = lVar15 + 1;
              piVar11 = (int *)FUN_03b943d0(uVar8,lVar15);
              lVar15 = lVar1;
              if (*piVar11 == 2) {
                bVar3 = true;
              }
            }
            uVar8 = *(undefined8 *)(this + 0x48);
            auVar16 = FUN_03b943d8(uVar8,*(undefined8 *)(this + 0x50));
            uVar14 = auVar16._8_8_;
            for (lVar15 = 0; lVar15 != auVar16._0_8_; lVar15 = lVar15 + 1) {
              auVar17 = FUN_03b94408(uVar8,lVar15);
              uVar14 = auVar17._8_8_;
              if (lVar9 == *auVar17._0_8_) {
                uVar8 = *(undefined8 *)(this + 0x30);
                iVar5 = FUN_03b94414(uVar8,*(undefined8 *)(this + 0x38));
                uVar4 = iVar5 - 1;
                if ((int)uVar4 < 0) goto LAB_03b95f98;
                lVar10 = (long)(int)uVar4;
                lVar9 = lVar10 + -1;
                goto LAB_03b95f4c;
              }
            }
          }
          goto LAB_03b95dc8;
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_03b95f4c:
  pRVar12 = (RtWeakPtrBase *)FUN_03b94420(uVar8,lVar10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,pRVar12);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_60);
  if (cVar2 == '\0') {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_50 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_58,lVar10);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_38,(__normal_iterator *)&local_50);
    std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::erase
              ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
               (this + 0x30),local_38[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  else {
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_60);
    if (this_00 == pRVar13) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      uVar14 = extraout_x1_01;
      goto LAB_03b95dc8;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  lVar10 = lVar10 + -1;
  if (lVar10 == lVar9 - (ulong)uVar4) goto LAB_03b95f98;
  uVar8 = *(undefined8 *)(this + 0x30);
  goto LAB_03b95f4c;
LAB_03b95f98:
  Projectile::CalcSweptCollisionRectBoardSpace();
  cVar2 = Sexy::TRect<int>::Intersects(aTStack_48,(TRect *)local_38);
  uVar14 = extraout_x1;
  if (cVar2 != '\0') {
    if ((bVar3) || (*(int *)(this + 0x9c) < 1)) {
      uVar14 = FUN_03b94408(*(undefined8 *)(this + 0x48),(long)(int)lVar15);
      if (*(long *)(uVar14 + 8) != 0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)(uVar14 + 0x10));
        convertProjectile(this,this_00,(RtId *)&local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        uVar14 = extraout_x1_02;
      }
    }
    else {
      uVar14 = FUN_03b94408(*(undefined8 *)(this + 0x48),(long)(int)lVar15);
      if (*(long *)(uVar14 + 0x18) != 0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_50,(RtWeakPtrBase *)(uVar14 + 0x20));
        convertProjectile(this,this_00,(RtId *)&local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        uVar8 = FUN_03b94394(*(undefined8 *)(this_00 + 0xe0));
        uVar8 = operator|(uVar8,0x2000);
        FUN_03b94398(this_00 + 0xe0,uVar8);
        uVar14 = extraout_x1_00;
      }
    }
  }
LAB_03b95dc8:
  Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,(int)uVar14);
  goto LAB_03b95dd0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverter::StaticClassInit() */

void ComponentProjectileConverter::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ConverterType_Normal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"ConverterType_Gene",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"ConverterType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"ComponentProjectileConverter");
    (*pcVar3)(plVar2,avStack_20,FUN_03b96268,0xb0,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentProjectileConverter::StaticGetClass() */

long * ComponentProjectileConverter::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentProjectileConverter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentProjectileConverter::GetClass() const */

long * ComponentProjectileConverter::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentProjectileConverter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentProjectileConverter::SetConverterProps(ComponentProjectileConverterProps const&) */

void __thiscall
ComponentProjectileConverter::SetConverterProps
          (ComponentProjectileConverter *this,ComponentProjectileConverterProps *param_1)

{
  ComponentProjectileConverterProps::operator=
            ((ComponentProjectileConverterProps *)(this + 0x60),param_1);
  return;
}


/* ComponentProjectileConverter::ClearProjectileConversionList() */

void __thiscall
ComponentProjectileConverter::ClearProjectileConversionList(ComponentProjectileConverter *this)

{
  std::vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>>::clear
            ((vector<ConvertProjectileNode,std::allocator<ConvertProjectileNode>> *)(this + 0x48));
  return;
}

