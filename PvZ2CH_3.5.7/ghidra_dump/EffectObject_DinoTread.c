// Class: EffectObject_DinoTread


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread::pickBrambleAnim(int const&) */

void EffectObject_DinoTread::pickBrambleAnim(int *param_1)

{
  long lVar1;
  int *in_x1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*in_x1 < param_1[0x48]) {
    __s = "attack_top";
  }
  else if (param_1[0x48] < *in_x1) {
    __s = "attack_bottom";
  }
  else {
    __s = "attack_middle";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread::StaticClassInit() */

void EffectObject_DinoTread::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_DinoTread");
    (*pcVar2)(plVar1,asStack_10,FUN_03cdcdcc,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DinoTread::StaticGetClass() */

long * EffectObject_DinoTread::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_DinoTread",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DinoTread::GetClass() const */

long * EffectObject_DinoTread::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_DinoTread",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DinoTread::~EffectObject_DinoTread() */

void __thiscall EffectObject_DinoTread::~EffectObject_DinoTread(EffectObject_DinoTread *this)

{
  *(undefined ***)this = &PTR_GetClass_06760540;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_DinoTread::~EffectObject_DinoTread() */

void __thiscall EffectObject_DinoTread::~EffectObject_DinoTread(EffectObject_DinoTread *this)

{
  ~EffectObject_DinoTread(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_DinoTread::EffectObject_DinoTread() */

void __thiscall EffectObject_DinoTread::EffectObject_DinoTread(EffectObject_DinoTread *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_06760540;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  return;
}


/* EffectObject_DinoTread::StaticNew() */

EffectObject_DinoTread * EffectObject_DinoTread::StaticNew(void)

{
  EffectObject_DinoTread *this;
  
  this = ::operator_new(0x130);
  EffectObject_DinoTread(this);
  return this;
}


/* EffectObject_DinoTread::registerForEvents() */

void __thiscall EffectObject_DinoTread::registerForEvents(EffectObject_DinoTread *this)

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
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<EffectObject_DinoTread,void(EffectObject_DinoTread::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread::applyDamage() */

void __thiscall EffectObject_DinoTread::applyDamage(EffectObject_DinoTread *this)

{
  bool bVar1;
  undefined4 uVar2;
  EffectObject_DinoTreadProps *pEVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  DamageInfo *pDVar8;
  undefined8 local_c8;
  undefined8 local_c0;
  Point aPStack_b8 [8];
  undefined8 local_b0;
  Insets aIStack_a8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_a8,*(int *)(this + 0x124) + -1,*(int *)(this + 0x120) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_98,uVar2,aIStack_a8);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_98);
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_98);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
    if (!bVar1) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    FUN_03cdcb80((exception_ptr *)&local_b0);
  }
  pEVar3 = EffectObject::GetProps<EffectObject_DinoTreadProps>();
  if (pEVar3 == (EffectObject_DinoTreadProps *)0x0) {
    pDVar8._0_4_ = (DamageInfo *)0x3f800000;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    pDVar8._0_4_ = *(DamageInfo **)(pEVar3 + 0x34);
  }
  lVar4 = FUN_03cdc554(local_80,local_78);
  if (lVar4 == 0) {
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_98);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8)
      ;
      plVar6 = (long *)*puVar5;
      pcVar7 = *(code **)(*plVar6 + 0x110);
      Sexy::Point::Point(aPStack_b8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar8._0_4_,(undefined4)local_b0,local_b0._4_4_,(DamageInfo *)local_68,0x100,0,
                 aPStack_b8,0);
      (*pcVar7)(plVar6,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
    }
  }
  else {
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8)
      ;
      plVar6 = (long *)*puVar5;
      pcVar7 = *(code **)(*plVar6 + 0x110);
      Sexy::Point::Point(aPStack_b8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_b0,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar8._0_4_,(undefined4)local_b0,local_b0._4_4_,(DamageInfo *)local_68,0x100,0,
                 aPStack_b8,0);
      (*pcVar7)(plVar6,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EffectObject_DinoTread::onUpdate() */

void __thiscall EffectObject_DinoTread::onUpdate(EffectObject_DinoTread *this)

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
/* EffectObject_DinoTread::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int,
   int) */

void __thiscall
EffectObject_DinoTread::onEffectObjectInitialize
          (EffectObject_DinoTread *this,undefined8 param_2,int param_3,int param_4)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  PlantBramble *this_01;
  char *pcVar6;
  EffectObject_DinoTreadProps *pEVar7;
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
LAB_03cdd654:
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar2 == '\0') {
        pEVar7 = EffectObject::GetProps<EffectObject_DinoTreadProps>();
        if (pEVar7 == (EffectObject_DinoTreadProps *)0x0) {
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
        cVar2 = PlantBramble::IsReadyToAttack(this_01);
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
          pickBrambleAnim((int *)this);
          Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,a_Stack_20,0);
          pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar6,"Play_Zomb_Dino_Extra_Brontosaurus_Attack_Failed");
          std::string::~string((string *)a_Stack_20);
          goto LAB_03cdd654;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTread::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
EffectObject_DinoTread::onGatherPlantingRestrictions
          (EffectObject_DinoTread *this,Point *param_1,PlantType *param_2,vector *param_3)

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

