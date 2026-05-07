// Class: ComponentObjectImpactor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor::StaticClassInit() */

void ComponentObjectImpactor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentObjectImpactor");
    (*pcVar2)(plVar1,asStack_10,FUN_03b97d90,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentObjectImpactor::StaticGetClass() */

long * ComponentObjectImpactor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ComponentObjectImpactor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentObjectImpactor::GetClass() const */

long * ComponentObjectImpactor::GetClass(void)

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
  (*pcVar3)(plVar1,"ComponentObjectImpactor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentObjectImpactor::isEffectMoving(std::string const&) */

bool __thiscall
ComponentObjectImpactor::isEffectMoving(ComponentObjectImpactor *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
  return bVar1;
}


/* ComponentObjectImpactor::finalizeEffectCollisionRect(std::string const&, Sexy::TRect<int>) */

Insets * ComponentObjectImpactor::finalizeEffectCollisionRect
                   (Insets *param_1_00,ComponentObjectImpactor *param_1,string *param_3,
                   Insets *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  
  bVar4 = std::operator==(param_3,"POPANIM_EFFECTS_SNAPDRAGON_FIRE");
  if (bVar4) {
    iVar3 = *(int *)(param_4 + 8);
    iVar2 = iVar3 * 3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    Sexy::Insets::Insets
              (param_1_00,*(int *)param_4 + (iVar1 >> 2),
               *(int *)(param_4 + 0xc) / 3 + *(int *)(param_4 + 4),iVar2 >> 2,
               *(int *)(param_4 + 0xc) / 3);
    return param_1_00;
  }
  cVar5 = isEffectMoving(param_1,param_3);
  if (cVar5 == '\0') {
    Sexy::Insets::Insets
              (param_1_00,*(int *)param_4,*(int *)(param_4 + 0xc) / 3 + *(int *)(param_4 + 4),
               *(int *)(param_4 + 8),*(int *)(param_4 + 0xc) / 3);
    return param_1_00;
  }
  Sexy::Insets::Insets(param_1_00,param_4);
  return param_1_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor::calcEffectRectInBoardSpace(Effect_PopAnim const*, Sexy::TRect<int>&,
   std::string const&) */

void ComponentObjectImpactor::calcEffectRectInBoardSpace
               (Effect_PopAnim *param_1,TRect *param_2,string *param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  string *in_x3;
  float fVar4;
  undefined4 uVar5;
  float in_s1;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = UIWidget::GetAtlasImage((UIWidget *)param_2);
  lVar2 = FUN_03b97080(*(undefined8 *)(lVar2 + 0x20));
  local_10 = -1;
  local_c = -1;
  Sexy::PASpriteDef::GetLabelFrameRange
            (*(PASpriteDef **)(*(long *)(lVar2 + 0x50) + 0x18),(string *)(lVar2 + 0x48),&local_10,
             &local_c);
  if ((-1 < local_10) && (-1 < local_c)) {
    uVar5 = *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc);
    cVar1 = isEffectMoving((ComponentObjectImpactor *)param_1,in_x3);
    if (cVar1 == '\0') {
      *(float *)(*(long *)(lVar2 + 0x50) + 0xc) = (float)local_10;
    }
    plVar3 = (long *)UIWidget::GetAtlasImage((UIWidget *)param_2);
    (**(code **)(*plVar3 + 0x90))(plVar3,param_3);
    cVar1 = isEffectMoving((ComponentObjectImpactor *)param_1,in_x3);
    if (cVar1 == '\0') {
      *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc) = uVar5;
    }
    fVar4 = (float)StandaloneEffect::GetBoardSpaceOrigin((StandaloneEffect *)param_2);
    uVar5 = *(undefined4 *)(param_2 + 200);
    *(int *)param_3 = (int)fVar4;
    *(int *)(param_3 + 4) = (int)in_s1;
    cVar1 = FUN_03b97084(uVar5,param_2 + 0xcc);
    if (cVar1 != '\0') {
      *(int *)param_3 = (int)fVar4 - *(int *)(param_3 + 8) / 2;
      *(int *)(param_3 + 4) = (int)in_s1 - *(int *)(param_3 + 0xc) / 2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentObjectImpactor::ComponentObjectImpactor() */

void __thiscall ComponentObjectImpactor::ComponentObjectImpactor(ComponentObjectImpactor *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_06736540;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  ComponentObjectImpactorProps::ComponentObjectImpactorProps
            ((ComponentObjectImpactorProps *)(this + 0x78));
  return;
}


/* ComponentObjectImpactor::StaticNew() */

ComponentObjectImpactor * ComponentObjectImpactor::StaticNew(void)

{
  ComponentObjectImpactor *this;
  
  this = ::operator_new(0xd8);
  ComponentObjectImpactor(this);
  return this;
}


/* ComponentObjectImpactor::onBegin() */

void __thiscall ComponentObjectImpactor::onBegin(ComponentObjectImpactor *this)

{
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::clear
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x48));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::clear
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x60));
  this[0xd0] = (ComponentObjectImpactor)0x0;
  return;
}


/* ComponentObjectImpactor::~ComponentObjectImpactor() */

void __thiscall ComponentObjectImpactor::~ComponentObjectImpactor(ComponentObjectImpactor *this)

{
  *(undefined ***)this = &PTR_GetClass_06736540;
  ComponentObjectImpactorProps::~ComponentObjectImpactorProps
            ((ComponentObjectImpactorProps *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x60));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x48));
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentObjectImpactor::~ComponentObjectImpactor() */

void __thiscall ComponentObjectImpactor::~ComponentObjectImpactor(ComponentObjectImpactor *this)

{
  ~ComponentObjectImpactor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor::checkProjectileImpact() */

void __thiscall ComponentObjectImpactor::checkProjectileImpact(ComponentObjectImpactor *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  long *plVar8;
  Insets *pIVar9;
  undefined8 uVar10;
  ResourceInfo *this_01;
  ResourceInfo *pRVar11;
  string *psVar12;
  ResourceInfo *pRVar13;
  long lVar14;
  RtWeakPtrBase *pRVar15;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  long lVar16;
  RtMixedPtrBase aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  Insets aIStack_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  RtId aRStack_48 [16];
  undefined8 local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd0] == (ComponentObjectImpactor)0x0) {
    this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x88);
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
    if (cVar2 == '\0') {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
      if (cVar2 != '\0') {
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        bVar3 = Sexy::RtObject::IsA<Plant>(pRVar6);
        if (bVar3) {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pIVar9 = (Insets *)(**(code **)(*plVar8 + 0x178))();
          Sexy::Insets::Insets((Insets *)&local_78,pIVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::Insets::Insets
                    (aIStack_68,(local_70 << 1) / 5 + local_78,local_74,local_70 / 5,local_6c);
          uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
          PVZDB::GetObjectIteratorForTable(aRStack_28,uVar10,0x2b);
LAB_03b9848c:
          bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28);
          if (bVar3) {
            Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)aRStack_48);
            this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
            Sexy::RtId::~RtId(aRStack_48);
            iVar4 = FUN_03b970a8(*(undefined4 *)(this_01 + 0xa8));
            iVar5 = extraout_w1;
            if (iVar4 == *(int *)(pPVar7 + 0x110)) {
              pRVar11 = (ResourceInfo *)Projectile::GetProps((Projectile *)this_01);
              Projectile::CalcSweptCollisionRectBoardSpace();
              Sexy::Insets::Insets
                        ((Insets *)aRStack_48,local_50 / 3 + local_58,local_54,local_50 / 3,local_4c
                        );
              cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_68,(TRect *)aRStack_48);
              iVar5 = extraout_w1_00;
              if (cVar2 != '\0') {
                local_98 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)this_00);
                local_90 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)this_00);
                while (bVar3 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_98,
                                          (__normal_iterator *)&local_90), iVar5 = extraout_w1_01,
                      bVar3) {
                  psVar12 = (string *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
                  uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
                  Sexy::ToWString(psVar12);
                  Sexy::RtName::RtName((RtName *)local_38,(wstring *)&local_88);
                  PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                            ((RtWeakPtr *)&local_80,uVar10,0xc,
                             (RtWeakPtr<Sexy::SoundResource> *)local_38);
                  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_80);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
                  Sexy::RtName::~RtName((RtName *)local_38);
                  FUN_05476c50((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_88);
                  if (pRVar11 == pRVar13) {
                    uVar10 = *(undefined8 *)(this + 0x30);
                    iVar5 = FUN_03b970b0(uVar10,*(undefined8 *)(this + 0x38));
                    uVar1 = iVar5 - 1;
                    if ((int)uVar1 < 0) goto LAB_03b986f4;
                    lVar14 = (long)(int)uVar1;
                    lVar16 = lVar14 + -1;
                    goto LAB_03b986a8;
                  }
                  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
                }
              }
            }
            goto LAB_03b98484;
          }
          Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_03b986a8:
  pRVar15 = (RtWeakPtrBase *)FUN_03b970bc(uVar10,lVar14);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_90,pRVar15);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_90);
  if (cVar2 == '\0') {
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,lVar14);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_38,(__normal_iterator *)&local_80);
    std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::erase
              ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
               (this + 0x30),local_38[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
  }
  else {
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_90;
    if (this_01 == pRVar11) goto LAB_03b98744;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
  }
  lVar14 = lVar14 + -1;
  if (lVar14 == lVar16 - (ulong)uVar1) goto LAB_03b986f4;
  uVar10 = *(undefined8 *)(this + 0x30);
  goto LAB_03b986a8;
LAB_03b986f4:
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::push_back
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30),(RtWeakPtr *)&local_80);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_80);
  Plant::IsImpactedByObject(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_80;
LAB_03b98744:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(this_02);
  iVar5 = extraout_w1_02;
LAB_03b98484:
  Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,iVar5);
  goto LAB_03b9848c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor::checkEffectImpact() */

void __thiscall ComponentObjectImpactor::checkEffectImpact(ComponentObjectImpactor *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtObject *pRVar5;
  Plant *pPVar6;
  long *plVar7;
  Insets *pIVar8;
  undefined8 uVar9;
  PVZDB *pPVar10;
  RtDbTable *this_01;
  Effect_PopAnim *this_02;
  string *psVar11;
  RtWeakPtrBase *pRVar12;
  ResourceInfo *pRVar13;
  PopAnim *extraout_x1;
  PopAnim *extraout_x1_00;
  PopAnim *extraout_x1_01;
  PopAnim *pPVar14;
  PopAnim *extraout_x1_02;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  RtMixedPtrBase aRStack_a0 [8];
  string asStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  Insets aIStack_68 [16];
  Insets aIStack_58 [16];
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd0] == (ComponentObjectImpactor)0x0) {
    this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0xa0);
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
    if (cVar2 == '\0') {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
      if (cVar2 != '\0') {
        pRVar5 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
        bVar3 = Sexy::RtObject::IsA<Plant>(pRVar5);
        if (bVar3) {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pIVar8 = (Insets *)(**(code **)(*plVar7 + 0x178))();
          Sexy::Insets::Insets((Insets *)&local_78,pIVar8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          Sexy::Insets::Insets
                    (aIStack_68,(local_70 << 1) / 5 + local_78,local_6c / 3 + local_74,local_70 / 5,
                     local_6c / 3);
          uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
          PVZDB::GetObjectIteratorForTable(aRStack_28,uVar9,0x31);
LAB_03b98934:
          bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28);
          if (bVar3) {
            pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
            this_01 = (RtDbTable *)PVZDB::GetTable(pPVar10,0x31);
            Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
            pRVar5 = (RtObject *)Sexy::RtDbTable::GetObjectForId(this_01,(RtId *)local_38);
            this_02 = Sexy::RtObject::Cast<Effect_PopAnim>(pRVar5);
            Sexy::RtId::~RtId((RtId *)local_38);
            pPVar14 = extraout_x1;
            if ((((this_02 != (Effect_PopAnim *)0x0) &&
                 (cVar2 = FUN_03b9707c(this_02[0x88]), pPVar14 = extraout_x1_00, cVar2 != '\0')) &&
                (auVar17 = UIWidget::GetAtlasImage((UIWidget *)this_02), pPVar14 = auVar17._8_8_,
                auVar17._0_8_ != 0)) &&
               (auVar17 = FUN_03b97080(*(undefined8 *)(auVar17._0_8_ + 0x20)),
               pPVar14 = auVar17._8_8_, auVar17._0_8_ != (StringHelper *)0x0)) {
              StringHelper::ToString(auVar17._0_8_,pPVar14);
              local_48[0] = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     *)this_00);
              local_38[0] = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)this_00);
              while (bVar3 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)local_48,(__normal_iterator *)local_38)
                    , bVar3) {
                psVar11 = (string *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_48);
                cVar2 = std::operator==(asStack_98,psVar11);
                if (cVar2 != '\0') {
                  Sexy::Insets::Insets(aIStack_58);
                  calcEffectRectInBoardSpace
                            ((Effect_PopAnim *)this,(TRect *)this_02,(string *)aIStack_58);
                  Sexy::Insets::Insets((Insets *)local_38,aIStack_58);
                  finalizeEffectCollisionRect
                            ((exception_ptr *)local_48,this,asStack_98,(RtId *)local_38);
                  cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_68,(TRect *)local_48);
                  if (cVar2 != '\0') {
                    uVar9 = *(undefined8 *)(this + 0x48);
                    iVar4 = FUN_03b970c4(uVar9,*(undefined8 *)(this + 0x50));
                    uVar1 = iVar4 - 1;
                    if ((int)uVar1 < 0) goto LAB_03b98b44;
                    lVar16 = (long)(int)uVar1;
                    lVar15 = lVar16 + -1;
                    goto LAB_03b98b04;
                  }
                  break;
                }
                eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                          ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_48);
              }
LAB_03b98a04:
              std::string::~string(asStack_98);
              pPVar14 = extraout_x1_01;
            }
            goto LAB_03b98a0c;
          }
          Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_03b98b04:
  pRVar12 = (RtWeakPtrBase *)FUN_03b970d0(uVar9,lVar16);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,pRVar12);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_90);
  if (cVar2 == '\0') {
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,lVar16);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_38,(__normal_iterator *)&local_80);
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    erase((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x48),local_38[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  }
  else {
    pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_90);
    if (this_02 == (Effect_PopAnim *)pRVar13) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      goto LAB_03b98a04;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  }
  lVar16 = lVar16 + -1;
  if (lVar16 == lVar15 - (ulong)uVar1) goto LAB_03b98b44;
  uVar9 = *(undefined8 *)(this + 0x48);
  goto LAB_03b98b04;
LAB_03b98b44:
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_80);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::push_back
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x30),(RtWeakPtr *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_80);
  Plant::IsImpactedByObject(pPVar6,(RtId *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  std::string::~string(asStack_98);
  pPVar14 = extraout_x1_02;
LAB_03b98a0c:
  Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,(int)pPVar14);
  goto LAB_03b98934;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactor::checkGridItemImpact() */

void __thiscall ComponentObjectImpactor::checkGridItemImpact(ComponentObjectImpactor *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtObject *pRVar5;
  Plant *pPVar6;
  string *psVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  RtWeakPtrBase *pRVar12;
  long lVar13;
  RtMixedPtrBase aRStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtrBase aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd0] == (ComponentObjectImpactor)0x0) {
    this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0xb8);
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
    if (cVar2 == '\0') {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
      if (cVar2 != '\0') {
        pRVar5 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        bVar3 = Sexy::RtObject::IsA<Plant>(pRVar5);
        if (bVar3) {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          BoardEntity::CalcGridPosition();
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
          local_70 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
          local_68 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68),
                bVar3) {
            this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x60);
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
            psVar7 = (string *)
                     Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
            ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar7);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
            pcVar9 = (char *)FUN_0547429c(lVar8 + 0x10);
            uVar10 = Sexy::RtClass::StaticGetClassNamed(pcVar9);
            EntityFinder::GetEntitiesAtGridSquareMatchingClass
                      (aRStack_20,4,local_78,local_74,uVar10);
            local_58 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)aRStack_20);
            local_50 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)aRStack_20);
            bVar3 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
            if (bVar3) {
              do {
                puVar11 = (undefined8 *)
                          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
                Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar11);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_48,(RtWeakPtrBase *)&local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
                uVar10 = *(undefined8 *)(this + 0x60);
                iVar4 = FUN_03b970d8(uVar10,*(undefined8 *)(this + 0x68));
                uVar1 = iVar4 - 1;
                if (-1 < (int)uVar1) {
                  lVar8 = (long)(int)uVar1;
                  lVar13 = lVar8 + -1;
                  while( true ) {
                    pRVar12 = (RtWeakPtrBase *)FUN_03b970e4(uVar10,lVar8);
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,pRVar12);
                    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
                    if (cVar2 == '\0') {
                      local_38 = std::
                                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 ::begin(this_01);
                      local_30 = __gnu_cxx::
                                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                              *)&local_38,lVar8);
                      __gnu_cxx::
                      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_28,(__normal_iterator *)&local_30);
                      std::
                      vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::
                      erase((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>
                             *)this_01,local_28);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
                    }
                    else {
                      cVar2 = Sexy::RtWeakPtrBase::operator==
                                        (aRStack_40,(RtWeakPtrBase *)aRStack_48);
                      if (cVar2 != '\0') {
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
                        goto LAB_03b990e0;
                      }
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
                    }
                    if (lVar8 + -1 == lVar13 - (ulong)uVar1) break;
                    lVar8 = lVar8 + -1;
                    uVar10 = *(undefined8 *)(this + 0x60);
                  }
                }
                std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::
                push_back((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>
                           *)this_01,(RtWeakPtr *)aRStack_48);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_48);
                Plant::IsImpactedByObject(pPVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
LAB_03b990e0:
                eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                          ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
                bVar3 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
              } while (bVar3);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ComponentObjectImpactor::onUpdate() */

void __thiscall ComponentObjectImpactor::onUpdate(ComponentObjectImpactor *this)

{
  checkProjectileImpact(this);
  checkEffectImpact(this);
  checkGridItemImpact(this);
  return;
}


/* ComponentObjectImpactor::SetImpactorProps(ComponentObjectImpactorProps const&) */

void __thiscall
ComponentObjectImpactor::SetImpactorProps
          (ComponentObjectImpactor *this,ComponentObjectImpactorProps *param_1)

{
  ComponentObjectImpactorProps::operator=((ComponentObjectImpactorProps *)(this + 0x78),param_1);
  return;
}

