// Class: EffectObject_DinoTread_For_Artifact_Dinosaur_horn


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticClassInit() */

void EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_DinoTread_For_Artifact_Dinosaur_horn");
    (*pcVar2)(plVar1,asStack_10,FUN_037d7ca0,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticGetClass() */

long * EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DinoTread_For_Artifact_Dinosaur_horn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::GetClass() const */

long * EffectObject_DinoTread_For_Artifact_Dinosaur_horn::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DinoTread_For_Artifact_Dinosaur_horn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::~EffectObject_DinoTread_For_Artifact_Dinosaur_horn()
    */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::
~EffectObject_DinoTread_For_Artifact_Dinosaur_horn
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a620;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::~EffectObject_DinoTread_For_Artifact_Dinosaur_horn()
    */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::
~EffectObject_DinoTread_For_Artifact_Dinosaur_horn
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

{
  ~EffectObject_DinoTread_For_Artifact_Dinosaur_horn(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::EffectObject_DinoTread_For_Artifact_Dinosaur_horn()
    */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::EffectObject_DinoTread_For_Artifact_Dinosaur_horn
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_0669a620;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  return;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticNew() */

EffectObject_DinoTread_For_Artifact_Dinosaur_horn *
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::StaticNew(void)

{
  EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this;
  
  this = ::operator_new(0x130);
  EffectObject_DinoTread_For_Artifact_Dinosaur_horn(this);
  return this;
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::registerForEvents() */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::registerForEvents
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

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
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<EffectObject_DinoTread_For_Artifact_Dinosaur_horn,void(EffectObject_DinoTread_For_Artifact_Dinosaur_horn::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::applyDamage() */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::applyDamage
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  ArtifactDinosaurHorn *pAVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  undefined8 uVar9;
  code *pcVar10;
  DamageInfo *pDVar11;
  undefined8 local_c8;
  undefined8 local_c0;
  Point aPStack_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  Insets aIStack_a8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_a8,*(int *)(this + 0x124) + -1,*(int *)(this + 0x120) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_b0);
  if (bVar1) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    pAVar5 = Sexy::RtObject::Cast<ArtifactDinosaurHorn>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
    if (pAVar5 != (ArtifactDinosaurHorn *)0x0) {
      uVar3 = operator|(2,4);
      EntityFinder::GetEntitiesInGridSquares(avStack_98,uVar3,aIStack_a8);
      local_c8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_98);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        pRVar4 = (RtObject *)*puVar6;
        pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        if (pZVar7 == (Zombie *)0x0) {
          pGVar8 = Sexy::RtObject::Cast<GridItem>(pRVar4);
          if (((pGVar8 != (GridItem *)0x0) &&
              (cVar2 = (**(code **)(*(long *)pGVar8 + 0x1f8))(), cVar2 != '\0')) &&
             (cVar2 = RealObject::IsOnTeam(pGVar8,2), cVar2 != '\0')) {
            pcVar10 = *(code **)(*(long *)pGVar8 + 0x110);
            pDVar11._0_4_ = (DamageInfo *)FUN_037d5078(*(undefined4 *)(pAVar5 + 0x68));
            uVar9 = operator|(0x4000000000,0x100);
            Sexy::Point::Point(aPStack_b8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
            DamageInfo::DamageInfo(pDVar11._0_4_,local_b0,local_ac,aRStack_68,uVar9,0,aPStack_b8,0);
            (*pcVar10)(pGVar8,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
        }
        else {
          FUN_037d507c(*(undefined4 *)(pAVar5 + 0x6c));
          (**(code **)(*(long *)pZVar7 + 0x298))(pZVar7);
          pcVar10 = *(code **)(*(long *)pZVar7 + 0x110);
          pDVar11._0_4_ = (DamageInfo *)FUN_037d5078(*(undefined4 *)(pAVar5 + 0x68));
          uVar9 = operator|(0x4000000000,0x100);
          Sexy::Point::Point(aPStack_b8,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
          DamageInfo::DamageInfo(pDVar11._0_4_,local_b0,local_ac,aRStack_68,uVar9,0,aPStack_b8,0);
          (*pcVar10)(pZVar7,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
      }
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onUpdate() */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onUpdate
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this)

{
  char cVar1;
  char *pcVar2;
  PlantBramble *this_00;
  float fVar3;
  undefined4 uVar4;
  
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x118) <= fVar3) {
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x118) = uVar4;
    applyDamage(this);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Zomb_Zomboss_Dino_FS");
    fVar3 = (float)PVZ_T();
    if (fVar3 < *(float *)(this + 0x11c)) {
      return;
    }
  }
  else {
    fVar3 = (float)PVZ_T();
    if (fVar3 < *(float *)(this + 0x11c)) {
      return;
    }
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x128));
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x11c) = uVar4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  nop();
  PlantBramble::LeaveWithDinoTread(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType
   const>, int, int) */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onEffectObjectInitialize
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this,undefined8 param_2,int param_3,
          int param_4)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  PopAnimRig *this_01;
  undefined8 *puVar4;
  long lVar5;
  PlantBramble *this_02;
  char *pcVar6;
  EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn *pEVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  PopAnimRig::SetMirrorX(this_01,true);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  uVar8 = PVZ_EOT();
  *(undefined4 *)(this + 0x11c) = uVar8;
  fVar9 = (float)PVZ_T();
  *(int *)(this + 0x120) = param_4;
  *(int *)(this + 0x124) = param_3;
  *(float *)(this + 0x118) = fVar9 + 0.5;
  Sexy::Insets::Insets(aIStack_48,param_3 + -1,param_4 + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  uVar3 = operator|(2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,uVar3,aIStack_48);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) {
LAB_037d9088:
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar2 == '\0') {
        pEVar7 = EffectObject::GetProps<EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn>();
        if (pEVar7 == (EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn *)0x0) {
          uVar3 = 0x3f000000;
        }
        else {
          uVar3 = *(undefined4 *)(pEVar7 + 0x30);
        }
        Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)a_Stack_20);
        std::string::string((string *)&local_50,"attack01");
        AnimationSequence::AddSingleAnimation(a_Stack_20,(string *)&local_50,0);
        std::string::~string((string *)&local_50);
        nop();
        std::string::string((string *)&local_50,"foot");
        AnimationSequence::AddLoopingAnimation(uVar3,a_Stack_20,(string *)&local_50,0);
        std::string::~string((string *)&local_50);
        nop();
        Effect_PopAnim::PlayAnimationSequence
                  ((Effect_PopAnim *)this,(AnimationSequence *)a_Stack_20);
        AnimationSequence::~AnimationSequence((AnimationSequence *)a_Stack_20);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar4);
    if (bVar1) {
      nop();
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
      bVar1 = std::operator==((string *)(lVar5 + 8),"bramble");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
      if (bVar1) {
        nop();
        cVar2 = PlantBramble::IsReadyToAttack(this_02);
        if (cVar2 != '\0') {
          *(undefined4 *)(this + 0x118) = uVar8;
          fVar9 = (float)PVZ_T();
          *(float *)(this + 0x11c) = fVar9 + 0.9;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)a_Stack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
          BoardEntity::CalcGridPosition();
          EffectObject_DinoTread::pickBrambleAnim((int *)this);
          Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,a_Stack_20,0);
          pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar6,"Play_Zomb_Dino_Extra_Brontosaurus_Attack_Failed");
          std::string::~string((string *)a_Stack_20);
          goto LAB_037d9088;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onGatherPlantingRestrictions(Sexy::Point
   const&, PlantType const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
EffectObject_DinoTread_For_Artifact_Dinosaur_horn::onGatherPlantingRestrictions
          (EffectObject_DinoTread_For_Artifact_Dinosaur_horn *this,Point *param_1,PlantType *param_2
          ,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x128));
  if (cVar1 == '\0') {
    if ((*(int *)(this + 0x120) + -1 <= *(int *)(param_1 + 4)) &&
       (*(int *)(param_1 + 4) <= *(int *)(this + 0x120) + 1)) {
      if ((*(int *)(this + 0x124) + -1 <= *(int *)param_1) &&
         (*(int *)param_1 <= *(int *)(this + 0x124) + 1)) {
        local_c = 0x58;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_c);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

