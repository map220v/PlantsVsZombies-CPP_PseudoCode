// Class: PlantWitchHazel


/* PlantWitchHazel::OnRelocationBegun() */

void __thiscall PlantWitchHazel::OnRelocationBegun(PlantWitchHazel *this)

{
  (**(code **)(*(long *)this + 0x388))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::GetFireSoundEvent() const */

void PlantWitchHazel::GetFireSoundEvent(void)

{
  long lVar1;
  char cVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  if (cVar2 == '\0') {
    std::string::string(in_x8,"Play_WitchHazel_Fire");
    nop();
  }
  else {
    std::string::string(in_x8,"Play_WitchHazel_Fire_PF");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::GetTargetParamsForWeapon(PlantWeapon) */

void PlantWitchHazel::GetTargetParamsForWeapon(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_10,1,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantWitchHazel::PlantWitchHazel() */

void __thiscall PlantWitchHazel::PlantWitchHazel(PlantWitchHazel *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fe930;
  return;
}


/* PlantWitchHazel::StaticNew() */

PlantWitchHazel * PlantWitchHazel::StaticNew(void)

{
  PlantWitchHazel *this;
  
  this = ::operator_new(0x38);
  PlantWitchHazel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::StaticClassInit() */

void PlantWitchHazel::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWitchHazel");
    (*pcVar2)(plVar1,asStack_10,FUN_041ab27c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchHazel::StaticGetClass() */

long * PlantWitchHazel::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWitchHazel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWitchHazel::GetClass() const */

long * PlantWitchHazel::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWitchHazel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWitchHazel::~PlantWitchHazel() */

void __thiscall PlantWitchHazel::~PlantWitchHazel(PlantWitchHazel *this)

{
  *(undefined ***)this = &PTR_GetClass_067fe930;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWitchHazel::~PlantWitchHazel() */

void __thiscall PlantWitchHazel::~PlantWitchHazel(PlantWitchHazel *this)

{
  ~PlantWitchHazel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantWitchHazel::FindTargetZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1_00,undefined8 param_1,long param_3,
               undefined4 param_4,undefined8 param_5)

{
  RtWeakPtrBase *pRVar1;
  char cVar2;
  bool bVar3;
  RtObject *this;
  int iVar4;
  int iVar5;
  int local_24;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  iVar4 = *(int *)(param_3 + 4);
  local_24 = 0;
  if (iVar4 < iVar4 + *(int *)(param_3 + 0xc)) {
    iVar5 = 0;
    do {
      while( true ) {
        PlantFramework::FindTargetZombieInRow(aRStack_10,param_1,iVar4,param_4,&local_24,param_5);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar2 != '\0') break;
LAB_041ab7e0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_041ab7e8:
        iVar4 = iVar4 + 1;
        if (*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) <= iVar4) goto LAB_041ab800;
      }
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar3 = Sexy::RtObject::IsA<ZombieDarkWizard>(this);
      if (!bVar3) {
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_20);
        if ((cVar2 != '\0') && (local_24 <= iVar5)) goto LAB_041ab7e0;
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)aRStack_10);
        iVar5 = local_24;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        goto LAB_041ab7e8;
      }
      iVar4 = iVar4 + 1;
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    } while (iVar4 < *(int *)(param_3 + 4) + *(int *)(param_3 + 0xc));
  }
LAB_041ab800:
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_18);
  pRVar1 = (RtWeakPtrBase *)a_Stack_18;
  if (!bVar3) {
    pRVar1 = (RtWeakPtrBase *)a_Stack_20;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::FindAnotherZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantWitchHazel::FindAnotherZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1,long *param_2,RtWeakPtrBase *param_3,
               undefined4 param_4)

{
  RtWeakPtrBase *pRVar1;
  char cVar2;
  bool bVar3;
  RtObject *this;
  int iVar4;
  int iVar5;
  int local_3c;
  undefined8 local_38;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined1 auStack_18 [4];
  int local_14;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = (**(code **)(*param_2 + 0x3f8))(param_2,param_4);
  (**(code **)(*param_2 + 0x2b0))(auStack_18,param_2,param_4);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  local_3c = 0;
  if (local_14 < local_14 + local_c) {
    iVar5 = 0;
    iVar4 = local_14;
LAB_041ab98c:
    do {
      PlantFramework::FindTargetZombieInRow(aRStack_20,param_2,iVar4,param_4,&local_3c,&local_38);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if ((cVar2 != '\0') &&
         (cVar2 = Sexy::RtWeakPtrBase::operator==(param_3,(RtWeakPtrBase *)aRStack_20),
         cVar2 == '\0')) {
        this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        bVar3 = Sexy::RtObject::IsA<ZombieDarkWizard>(this);
        if (bVar3) {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)aRStack_20);
        }
        else {
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_30);
          if ((cVar2 == '\0') || (iVar5 < local_3c)) {
            iVar4 = iVar4 + 1;
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_30,(RtWeakPtr *)aRStack_20);
            iVar5 = local_3c;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            if (local_14 + local_c <= iVar4) break;
            goto LAB_041ab98c;
          }
        }
      }
      iVar4 = iVar4 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    } while (iVar4 < local_14 + local_c);
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_28);
  pRVar1 = (RtWeakPtrBase *)a_Stack_28;
  if (!bVar3) {
    pRVar1 = (RtWeakPtrBase *)a_Stack_30;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantWitchHazel::UpdateActions() */

void __thiscall PlantWitchHazel::UpdateActions(PlantWitchHazel *this)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (1 < *(int *)(*(long *)(this + 0x10) + 200) - 6U)) {
    fVar3 = (float)PVZ_T();
    fVar4 = *(float *)(*(long *)(this + 0x10) + 300);
    if (fVar4 < fVar3) {
      pcVar2 = *(code **)(*(long *)this + 0x150);
      *(float *)(*(long *)(this + 0x10) + 300) = fVar4 + 0.5;
      cVar1 = (*pcVar2)(this,0);
      if (cVar1 != '\0') {
        Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::RecoverMagicAnim() */

void __thiscall PlantWitchHazel::RecoverMagicAnim(PlantWitchHazel *this)

{
  long lVar1;
  GameObjectDictionary *pGVar2;
  AttachedEffect *this_00;
  AttachedEffect *this_01;
  UIWidget *pUVar3;
  PopAnimRig *pPVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_40,"magic_left");
  this_00 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pGVar2 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_40,"magic_right");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pUVar3 = (UIWidget *)AttachedEffect::GetEffect(this_00);
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar3);
  std::string::string(asStack_40,"witchhazel_start");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar4,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  pUVar3 = (UIWidget *)AttachedEffect::GetEffect(this_01);
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar3);
  std::string::string(asStack_40,"witchhazel_start");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar4,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x28) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWitchHazel::CancelPlantfood() */

void __thiscall PlantWitchHazel::CancelPlantfood(PlantWitchHazel *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 300) = 0;
  RecoverMagicAnim(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::updateMagicState() */

void __thiscall PlantWitchHazel::updateMagicState(PlantWitchHazel *this)

{
  int iVar1;
  char cVar2;
  GameObjectDictionary *pGVar3;
  AttachedEffect *pAVar4;
  AttachedEffect *pAVar5;
  UIWidget *pUVar6;
  PopAnimRig *pPVar7;
  long lVar8;
  float fVar9;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    fVar9 = (float)PVZ_T();
    if (*(float *)(this + 0x2c) < fVar9) {
      RecoverMagicAnim(this);
    }
  }
  else if (iVar1 == 0) {
    pGVar3 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_40,"magic_left");
    pAVar4 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pGVar3 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_40,"magic_right");
    pAVar5 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pUVar6 = (UIWidget *)AttachedEffect::GetEffect(pAVar4);
    pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar6);
    std::string::string(asStack_40,"witchhazel_off");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    pUVar6 = (UIWidget *)AttachedEffect::GetEffect(pAVar5);
    pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar6);
    std::string::string(asStack_40,"witchhazel_off");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0x28) = 1;
  }
  else if (iVar1 == 2) {
    pGVar3 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_40,"magic_left");
    pAVar4 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pGVar3 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_40,"magic_right");
    pAVar5 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
    pUVar6 = (UIWidget *)AttachedEffect::GetEffect(pAVar4);
    pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar6);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar7);
    if (cVar2 == '\0') {
      pUVar6 = (UIWidget *)AttachedEffect::GetEffect(pAVar4);
      pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar6);
      std::string::string(asStack_40,"witchhazel_full_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      pUVar6 = (UIWidget *)AttachedEffect::GetEffect(pAVar5);
      pPVar7 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar6);
      std::string::string(asStack_40,"witchhazel_full_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      lVar8 = *(long *)(this + 0x10);
      *(undefined1 *)(lVar8 + 0x119) = 0;
      *(undefined4 *)(lVar8 + 300) = 0;
      *(undefined4 *)(this + 0x28) = 3;
      *(undefined4 *)(lVar8 + 200) = 4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::updateMagicEffects(std::string const&, std::string const&, Sexy::SexyVector2
   const&) */

void __thiscall
PlantWitchHazel::updateMagicEffects
          (PlantWitchHazel *this,string *param_1,string *param_2,SexyVector2 *param_3)

{
  char cVar1;
  char cVar2;
  PlantWitchHazel PVar3;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  StandaloneEffect *this_02;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,param_1);
  this_02 = (StandaloneEffect *)AttachedEffect::GetEffect(this_01);
  pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  cVar1 = PopAnimRig::CalcLayerTransformScreenSpace(pPVar4,param_2,aSStack_30);
  cVar2 = Plant::HasCondition(*(undefined8 *)(this + 0x10),2);
  if ((((cVar2 == '\0') &&
       (cVar2 = Plant::HasCondition(*(undefined8 *)(this + 0x10),1), cVar2 == '\0')) &&
      (PVar3 = (PlantWitchHazel)Plant::HasCondition(*(undefined8 *)(this + 0x10),0x1d),
      cVar1 != '\0')) && ((byte)PVar3 < (byte)this[0x30])) {
    StandaloneEffect::SetVisibility(this_02,true);
    Sexy::Insets::Insets((Insets *)&local_40);
    pPVar4 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::CalcSymbolRect(pPVar4,param_2,(TRect *)&local_40);
    fVar5 = (float)FUN_041aaee8(*(undefined4 *)param_3);
    fVar6 = (float)FUN_041aaee8(*(undefined4 *)(param_3 + 4));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_48,fVar5 + (float)local_40,fVar6 + (float)local_3c);
    Effect_PopAnim::SetTranslation(local_48,local_44,this_02);
    (**(code **)(*(long *)this_02 + 0x80))(0x3f400000,this_02);
  }
  else {
    StandaloneEffect::SetVisibility(this_02,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::UpdateUnconditionally() */

void __thiscall PlantWitchHazel::UpdateUnconditionally(PlantWitchHazel *this)

{
  FastCurve aFStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateMagicState(this);
  Sexy::FastCurve::SetOutRange(aFStack_20,-85.0,-95.0);
  std::string::string(asStack_18,"magic_left");
  std::string::string(asStack_10,"witchhazel_effect_left");
  updateMagicEffects(this,asStack_18,asStack_10,(SexyVector2 *)aFStack_20);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"magic_right");
  std::string::string(asStack_10,"witchhazel_effect_right");
  updateMagicEffects(this,asStack_18,asStack_10,(SexyVector2 *)aFStack_20);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::DoIntervalFixing() */

void __thiscall PlantWitchHazel::DoIntervalFixing(PlantWitchHazel *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long extraout_x0;
  float *pfVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  WitchhazelBoostMagicCD *pWVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_041aae00(*(undefined8 *)(this + 0x10));
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  if (*(int *)(extraout_x0 + 0x2e8) <= iVar3) {
    lVar6 = *(long *)(this + 0x10);
    local_18[0] = 1.25;
    fVar7 = *(float *)(extraout_x0 + 0x2ec);
    fVar8 = *(float *)(lVar6 + 0xc0) - fVar7;
    local_10[0] = fVar8;
    pfVar4 = eastl::max_alt<float>(local_18,local_10);
    *(float *)(lVar6 + 0xb8) = *pfVar4;
    local_18[0] = 1.25;
    fVar7 = *(float *)(lVar6 + 0xbc) - fVar7;
    local_10[0] = fVar7;
    pfVar4 = eastl::max_alt<float>(local_18,local_10);
    *(float *)(lVar6 + 0xb4) = *pfVar4;
    local_18[0] = 1.25;
    local_10[0] = fVar8;
    pfVar4 = eastl::max_alt<float>(local_18,local_10);
    *(float *)(lVar6 + 0xc0) = *pfVar4;
    local_18[0] = 1.25;
    local_10[0] = fVar7;
    pfVar4 = eastl::max_alt<float>(local_18,local_10);
    *(float *)(lVar6 + 0xbc) = *pfVar4;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string((string *)local_10,"witchhazel_new_avatar_1");
  iVar3 = NameMapperBase::GetIdForName(this_02,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_18);
    if (!bVar2) {
      fVar7 = 0.0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      goto LAB_041acc00;
    }
    NewAvatar::GetAvatarInfoByAvatarId(iVar3);
    this_03 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    pWVar5 = Sexy::RtObject::Cast<WitchhazelBoostMagicCD>(this_03);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    if (pWVar5 != (WitchhazelBoostMagicCD *)0x0) {
      fVar7 = *(float *)(pWVar5 + 100);
      goto LAB_041acc00;
    }
  }
  fVar7 = 0.0;
LAB_041acc00:
  lVar6 = *(long *)(this + 0x10);
  local_18[0] = 1.25;
  fVar8 = *(float *)(lVar6 + 0xc0) - fVar7;
  local_10[0] = fVar8;
  pfVar4 = eastl::max_alt<float>(local_18,local_10);
  *(float *)(lVar6 + 0xb8) = *pfVar4;
  local_18[0] = 1.25;
  fVar7 = *(float *)(lVar6 + 0xbc) - fVar7;
  local_10[0] = fVar7;
  pfVar4 = eastl::max_alt<float>(local_18,local_10);
  *(float *)(lVar6 + 0xb4) = *pfVar4;
  local_18[0] = 1.25;
  local_10[0] = fVar8;
  pfVar4 = eastl::max_alt<float>(local_18,local_10);
  *(float *)(lVar6 + 0xc0) = *pfVar4;
  local_18[0] = 1.25;
  local_10[0] = fVar7;
  pfVar4 = eastl::max_alt<float>(local_18,local_10);
  *(float *)(lVar6 + 0xbc) = *pfVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::Initialize() */

void __thiscall PlantWitchHazel::Initialize(PlantWitchHazel *this)

{
  GameObjectDictionary *pGVar1;
  AttachedEffect *pAVar2;
  PopAnim *pPVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  if (*(Plant **)(this + 0x10) != (Plant *)0x0) {
    pGVar1 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_18,"magic_left");
    pAVar2 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_WITCHHAZEL_EFFECT");
    GetPAMByName(asStack_20);
    pPVar3 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    AttachedEffect::InitializeWithAnimation(pAVar2,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar5 = *(undefined8 *)(this + 0x10);
    pcVar6 = *(code **)(*(long *)pAVar2 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    (*pcVar6)(pAVar2,uVar5,asStack_18,1);
    pGVar1 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_18,"magic_right");
    pAVar2 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_20,"POPANIM_EFFECTS_WITCHHAZEL_EFFECT");
    GetPAMByName(asStack_20);
    pPVar3 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    AttachedEffect::InitializeWithAnimation(pAVar2,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar5 = *(undefined8 *)(this + 0x10);
    pcVar6 = *(code **)(*(long *)pAVar2 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    (*pcVar6)(pAVar2,uVar5,asStack_18,1);
    lVar4 = *(long *)(this + 0x10);
    *(undefined1 *)(lVar4 + 0x119) = 0;
    *(undefined4 *)(lVar4 + 300) = 0;
  }
  *(undefined4 *)(this + 0x28) = 2;
  this[0x30] = (PlantWitchHazel)0x1;
  *(undefined4 *)(this + 0x2c) = 0;
  DoIntervalFixing(this);
  updateMagicState(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::FindTargetZombieInRow(int, PlantWeapon, int*, PlantTargetParams&,
   Sexy::TRect<int>) */

void PlantWitchHazel::FindTargetZombieInRow
               (RtWeakPtr<Sexy::SoundResource> *param_1,long param_2,int param_3,undefined8 param_4,
               int *param_5,int *param_6,undefined8 param_7)

{
  RtWeakPtrBase *pRVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar6;
  float *pfVar7;
  ulong uVar8;
  Insets *pIVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  int iVar13;
  uint local_4c;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),param_3);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)a_Stack_48);
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    uVar11 = 0;
    iVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,param_7,
               param_3,param_3);
    uVar6 = local_20;
    lVar5 = FUN_041aae18(local_20,local_18);
    iVar13 = iVar10;
    if (lVar5 != 0) {
      do {
        FUN_041aae24(uVar6,uVar11);
        nop();
        uVar6 = operator|(1,4);
        uVar6 = operator|(uVar6,0x80);
        uVar6 = operator|(uVar6,0x200);
        uVar6 = operator|(uVar6,0x800);
        local_4c = operator|(uVar6,0x2000);
        if (param_6[1] == 0) {
          operator|=(&local_4c,8);
        }
        cVar2 = Zombie::MatchesAny((Zombie *)this,local_4c,*(undefined8 *)(param_2 + 0x10));
        if ((cVar2 == '\0') &&
           (((((uint)param_6[1] >> 2 & 1) == 0 ||
             (cVar2 = FUN_041ab698(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')) &&
            (cVar2 = Creature::IsOnBoard(), cVar2 != '\0')))) {
          if (((uint)param_6[1] >> 1 & 1) != 0) {
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this);
            fVar12 = *pfVar7;
            Plant::GetCenterPt();
            if (fVar12 <= (float)local_30[0]) goto LAB_041ad3bc;
          }
          cVar2 = Zombie::IsIgnoringAllDamage((Zombie *)this);
          if (cVar2 == '\0') {
            pIVar9 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
            Sexy::Insets::Insets((Insets *)local_30,pIVar9);
            iVar4 = local_30[0];
            if (*param_6 != 2) {
              iVar4 = -local_30[0];
            }
            cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_48);
            if ((iVar13 < iVar4) || (cVar2 != '\0')) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_48,
                         (RtWeakPtrBase *)aRStack_38);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              bVar3 = Sexy::RtObject::IsA<ZombieDarkWizard>((RtObject *)this);
              iVar13 = iVar4;
              if (bVar3) goto LAB_041ad4e4;
            }
            else {
              bVar3 = Sexy::RtObject::IsA<ZombieDarkWizard>((RtObject *)this);
              if (bVar3) {
LAB_041ad4e4:
                cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!
                                  ((RtMixedPtr<Sexy::Image> *)a_Stack_40);
                if ((cVar2 != '\0') || (iVar10 < iVar4)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_40,
                             (RtWeakPtrBase *)aRStack_38);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                  iVar10 = iVar4;
                }
              }
            }
          }
        }
LAB_041ad3bc:
        uVar6 = local_20;
        uVar11 = uVar11 + 1;
        uVar8 = FUN_041aae18(local_20,local_18);
      } while (uVar11 < uVar8);
    }
    if (param_5 != (int *)0x0) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
      if (!bVar3) {
        iVar10 = iVar13;
      }
      *param_5 = iVar10;
    }
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
    pRVar1 = (RtWeakPtrBase *)a_Stack_40;
    if (!bVar3) {
      pRVar1 = (RtWeakPtrBase *)a_Stack_48;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantWitchHazel::zombieIsBlacklisted(PlantWitchHazel *this,Zombie *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  ZombieGargantuar *pZVar6;
  ZombieZombossMech *pZVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_041ad064(*(undefined8 *)(this + 0x10));
  uVar3 = FUN_041acf50(*(undefined8 *)(lVar2 + 0x300));
  uVar4 = FUN_041acfa0(*(undefined8 *)(lVar2 + 0x308));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_041acfa0(*(undefined8 *)(lVar2 + 0x308));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) ||
     (pZVar6 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
     pZVar6 != (ZombieGargantuar *)0x0)) {
    bVar1 = true;
  }
  else {
    pZVar7 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    bVar1 = pZVar7 != (ZombieZombossMech *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::spawnAttack(Zombie*, int, std::string&, std::string&, Sexy::RtWeakPtr<PlantType
   const>, int) */

void PlantWitchHazel::spawnAttack
               (PlantWitchHazel *param_1,RtObject *param_2,int param_3,undefined8 param_4,
               undefined8 param_5,RtMixedPtrBase *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  long lVar5;
  Insets *pIVar6;
  RayEntity *pRVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  Zombie *pZVar8;
  int *piVar9;
  Plant *this_00;
  undefined8 uVar10;
  code *pcVar11;
  RealObject *this_01;
  Board *pBVar12;
  float fVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  int local_a0;
  int local_9c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  Vec3 aVStack_88 [16];
  int local_78;
  int local_74;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == (RtObject *)0x0) ||
     (cVar1 = Sexy::RtMixedPtrBase::IsValid(param_6), cVar1 == '\0')) goto LAB_041ad8ac;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  lVar5 = FUN_041aae2c(*(undefined8 *)(extraout_x0 + 0x70),0);
  pIVar6 = (Insets *)(**(code **)(**(long **)(param_1 + 0x10) + 0x178))(*(long **)(param_1 + 0x10));
  Sexy::Insets::Insets((Insets *)&local_78,pIVar6);
  EATextSquish::Vec3::Vec3
            (aVStack_88,(float)local_78 + *(float *)(lVar5 + 0x68),
             (float)local_74 + *(float *)(lVar5 + 0x6c),0.0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  pRVar7 = GameObject::Create<RayEntity>();
  BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar7);
  std::string::string((string *)&local_90,"POPANIM_EFFECTS_WITCHHAZEL_ATTACK");
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_98);
                    /* WARNING: Load size is inaccurate */
  RayEntity::Initialize
            (*(RayEntity **)(extraout_x0 + 0x2c0),pRVar7,param_4,(string *)&local_90,param_5,
             (RtWeakPtr<Sexy::ResourceInfo> *)local_68,0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  std::string::~string((string *)&local_90);
  nop();
  Sexy::Point::Point((Point *)local_68,0,-0x1e);
  RayEntity::SetHitOffset(pRVar7,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_a8);
  RayEntity::InitiateWithTarget(pRVar7,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  this_01 = *(RealObject **)(param_1 + 0x10);
  (**(code **)(*(long *)param_1 + 0x300))((RtWeakPtr<Sexy::ResourceInfo> *)local_68,param_1);
  RealObject::PlayPositionalSound(this_01,(string *)local_68,0.0);
  std::string::~string((string *)local_68);
  bVar2 = Sexy::RtObject::IsA<Zombie>(param_2);
  if (bVar2) {
    this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_2);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    if (*(int *)(lVar5 + 0x58) < 1) {
      iVar3 = FUN_041aae00(*(undefined8 *)(param_1 + 0x10));
      iVar4 = FUN_041aadf8(*(undefined4 *)(param_2 + 0x50));
      if (((((iVar4 <= iVar3 + 1) &&
            (cVar1 = Zombie::HasFogImmune((Zombie *)param_2), cVar1 == '\0')) &&
           (cVar1 = Zombie::IsBerserk((Zombie *)param_2), cVar1 == '\0')) &&
          ((cVar1 = (**(code **)(*(long *)param_2 + 0x4d8))(param_2), cVar1 == '\0' &&
           (cVar1 = (**(code **)(*(long *)param_2 + 0x508))(param_2), cVar1 == '\0')))) &&
         ((cVar1 = Zombie::CanTakeFatalDamage((Zombie *)param_2), cVar1 != '\0' &&
          (cVar1 = zombieIsBlacklisted(param_1,(Zombie *)param_2), cVar1 == '\0')))) {
        BoardEntity::CalcGridPosition();
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        pcVar11 = *(code **)(*(long *)param_2 + 0x120);
        Sexy::Point::Point((Point *)aRStack_98,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_90,local_8c,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,4,
                   uVar10,aRStack_98,0);
        (*pcVar11)(param_2,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        fVar13 = (float)FUN_041aae08(*(undefined4 *)(param_2 + 0x280));
        if (fVar13 <= 0.0) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)param_6);
          cVar1 = Board::CanPlantAt(pBVar12,&local_a0,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          if (cVar1 != '\0') {
            local_68[0] = 1;
            local_90 = FUN_041aae00(*(undefined8 *)(param_1 + 0x10));
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_6);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x28));
            piVar9 = eastl::min_alt<int>((int *)&local_90,(int *)(lVar5 + 0x2c));
            piVar9 = eastl::max_alt<int>((int *)local_68,piVar9);
            iVar3 = *piVar9;
            pBVar12 = *(Board **)(gLawnApp + 0x9f0);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_6);
            this_00 = (Plant *)Board::AddPlant(pBVar12,local_a0,local_9c,(string *)(lVar5 + 8),iVar3
                                               ,false,true,false,false);
            if (this_00 != (Plant *)0x0) {
              iVar3 = FUN_041aae00(*(undefined8 *)(param_1 + 0x10));
              if (*(int *)(extraout_x0 + 0x2e0) <= iVar3) {
                Plant::SetInvincible(this_00,true,true,*(float *)(extraout_x0 + 0x2e4));
              }
              cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
              if ((cVar1 != '\0') &&
                 (cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10)), cVar1 != '\0')) {
                (**(code **)(**(long **)(this_00 + 0xa8) + 0x220))(*(long **)(this_00 + 0xa8));
              }
            }
          }
        }
        goto LAB_041ad8a4;
      }
    }
    pZVar8 = Sexy::RtObject::Cast<Zombie>(param_2);
    if (pZVar8 == (Zombie *)0x0) {
      pcVar11 = *(code **)(*(long *)param_2 + 0x110);
      Sexy::Point::Point((Point *)aRStack_98,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(float)param_3,local_90,local_8c,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_68,aRStack_98,0);
      (*pcVar11)(param_2,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    else {
      pcVar11 = *(code **)(*(long *)pZVar8 + 0x110);
      Sexy::Point::Point((Point *)aRStack_98,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(float)param_3,local_90,local_8c,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_68,0x400000000000,aRStack_98,0);
      (*pcVar11)(pZVar8,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
  }
LAB_041ad8a4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
LAB_041ad8ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWitchHazel::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantWitchHazel::Fire(PlantWitchHazel *param_1,RtWeakPtr *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long extraout_x0;
  string *psVar5;
  long lVar6;
  Plant *this;
  wchar16 *pwVar7;
  undefined4 uVar8;
  size_t __n;
  RtWeakPtr *pRVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  }
  else {
    PlantFramework::FindTargetZombie(aRStack_10,param_1,1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)param_2,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  }
  if (pRVar4 == (ResourceInfo *)0x0) {
    RecoverMagicAnim(param_1);
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::string(asStack_30,"fumeshroom_appear");
    nop();
    std::string::string(asStack_28,"POPANIM_EFFECTS_WITCHHAZEL_BOLT");
    nop();
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    uVar13 = *(uint *)(extraout_x0 + 0x2d8);
    __n = (size_t)uVar13;
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar1 == '\0') {
      lVar6 = FUN_041aae2c(*(undefined8 *)(extraout_x0 + 0x70),0);
      iVar10 = *(int *)(lVar6 + 0x2c);
      *(undefined4 *)(param_1 + 0x28) = 0;
      fVar11 = (float)PVZ_T();
      this = *(Plant **)(param_1 + 0x10);
      *(float *)(param_1 + 0x2c) = *(float *)(this + 0xb8) + -1.25 + fVar11;
      uVar8 = 0;
    }
    else {
      std::string::append(asStack_30,"toadstool_appear",__n);
      std::string::append(asStack_28,"POPANIM_EFFECTS_WITCHHAZEL_PLANTFOOD_BOLT",__n);
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar13 = *(uint *)(extraout_x0 + 0x2dc);
      lVar6 = FUN_041aae2c(*(undefined8 *)(extraout_x0 + 0x70),1);
      iVar10 = *(int *)(lVar6 + 0x2c);
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if (cVar1 == '\0') {
        this = *(Plant **)(param_1 + 0x10);
        uVar8 = 1;
      }
      else {
        uVar8 = 1;
        iVar10 = iVar10 + *(int *)(extraout_x0 + 0x2f8);
        this = *(Plant **)(param_1 + 0x10);
      }
    }
    fVar11 = (float)Plant::GetTotalDamageRate(this);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
    psVar5 = asStack_30;
    spawnAttack(param_1,pRVar4,(int)((float)iVar10 * fVar11),asStack_28,asStack_30,aRStack_10,uVar13
               );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pRVar9 = aRStack_18;
    std::string::string((string *)aRStack_10,"DebugSpecial");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)aRStack_10,(LineBreakCategory *)pRVar9,
                       (LineBreakCategory *)pwVar7,(LineBreakCategory *)psVar5);
    if ((cVar1 != '\0') ||
       (fVar12 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0),
       fVar12 <= *(float *)(extraout_x0 + 0x2f4))) {
      std::string::~string((string *)aRStack_10);
      nop();
      iVar3 = FUN_041aae00(*(undefined8 *)(param_1 + 0x10));
      if (*(int *)(extraout_x0 + 0x2f0) <= iVar3) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_2);
        FindAnotherZombie(aRStack_18,param_1,aRStack_10,uVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
        if (bVar2) {
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
          spawnAttack(param_1,pRVar4,(int)((float)iVar10 * fVar11),asStack_28,asStack_30,aRStack_10,
                      uVar13);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
    else {
      std::string::~string((string *)aRStack_10);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}

