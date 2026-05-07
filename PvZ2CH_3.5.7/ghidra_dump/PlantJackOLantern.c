// Class: PlantJackOLantern


/* PlantJackOLantern::OnRelocationComplete() */

void __thiscall PlantJackOLantern::OnRelocationComplete(PlantJackOLantern *this)

{
  (**(code **)(*(long *)this + 0x388))(this,1);
  return;
}


/* PlantJackOLantern::ShowPersistentEffects(bool) */

void __thiscall PlantJackOLantern::ShowPersistentEffects(PlantJackOLantern *this,bool param_1)

{
  this[0x58] = (PlantJackOLantern)param_1;
  return;
}


/* PlantJackOLantern::OnRelocationBegun() */

void __thiscall PlantJackOLantern::OnRelocationBegun(PlantJackOLantern *this)

{
  (**(code **)(*(long *)this + 0x380))();
  (**(code **)(*(long *)this + 0x388))(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::GetShadowOffset() */

void PlantJackOLantern::GetShadowOffset(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,0.0,7.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::StaticClassInit() */

void PlantJackOLantern::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantJackOLantern");
    (*pcVar2)(plVar1,asStack_10,FUN_04d0147c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::StaticGetClass() */

long * PlantJackOLantern::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantJackOLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJackOLantern::GetClass() const */

long * PlantJackOLantern::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantJackOLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::setFlameState(PlantJackOLantern::FlameState) */

void __thiscall PlantJackOLantern::setFlameState(PlantJackOLantern *this,undefined4 param_2)

{
  int iVar1;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x2c) = param_2;
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"jack_flame");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x2c);
  if (iVar1 == 1) {
    pEVar2 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_01);
    std::string::string(asStack_10,"flame_full_start");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    if (iVar1 == 0) {
      std::string::string(asStack_10,"flame_charge_loop");
    }
    else {
      if (iVar1 != 2) goto LAB_04cfb858;
      std::string::string(asStack_10,"flame_full_loop");
    }
    AttachedEffect::PlayAnimLooped(this_01,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
LAB_04cfb858:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::GetWispName() */

void PlantJackOLantern::GetWispName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
  if (cVar2 == '\0') {
    __s = "wisp";
  }
  else {
    __s = "wisp_avatar";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::createFireEffect() */

void __thiscall PlantJackOLantern::createFireEffect(PlantJackOLantern *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  long lVar1;
  PopAnim *pPVar2;
  undefined8 uVar3;
  code *pcVar4;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"jack_flame");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  lVar1 = AttachedEffect::GetEffect(this_01);
  if (lVar1 == 0) {
    std::string::string(asStack_20,"POPANIM_EFFECTS_JACKOLANTERN_FIRE");
    GetPAMByName(asStack_20);
    pPVar2 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_01,pPVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    std::string::~string(asStack_20);
    nop();
    uVar3 = *(undefined8 *)(this + 0x10);
    pcVar4 = *(code **)(*(long *)this_01 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
    (*pcVar4)(this_01,uVar3,asStack_18,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* PlantJackOLantern::ResetGhostLantern() */

void __thiscall PlantJackOLantern::ResetGhostLantern(PlantJackOLantern *this)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x60));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::ZombieIsBlacklisted(Zombie*) */

void __thiscall PlantJackOLantern::ZombieIsBlacklisted(PlantJackOLantern *this,Zombie *param_1)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(extraout_x0 + 0x440),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::CanBeTarget(BoardEntity*) */

void __thiscall PlantJackOLantern::CanBeTarget(PlantJackOLantern *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  Zombie *this_00;
  ZombieZombossMech *pZVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (((((((bVar1) && (nop(), this_00 != (Zombie *)0x0)) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
          ((cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) &&
         ((cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0' &&
          ((cVar2 = ZombieIsBlacklisted(this,this_00), cVar2 == '\0' &&
           (cVar2 = Zombie::IsTargetable(this_00), cVar2 != '\0')))))) &&
        (cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0')) &&
       (((((cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0' &&
           (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) &&
          (cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0')) &&
         (((cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0' &&
           (pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
           pZVar4 == (ZombieZombossMech *)0x0)) &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
           ((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
            (bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_00), !bVar1)))))))) &&
        ((bVar1 = Sexy::RtObject::IsA<ZombiePirateParrot>((RtObject *)this_00), !bVar1 &&
         (bVar1 = Sexy::RtObject::IsA<ZombieModernMiner>((RtObject *)this_00), !bVar1)))))) {
      bVar1 = Sexy::RtObject::IsA<ZombieProspector>((RtObject *)this_00);
      if (!bVar1) {
        pcVar5 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar3 = (*pcVar5)(this_00,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_04cfd07c;
      }
    }
  }
  uVar3 = 0;
LAB_04cfd07c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantJackOLantern::PlantJackOLantern() */

void __thiscall PlantJackOLantern::PlantJackOLantern(PlantJackOLantern *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a5510;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  this[0x59] = (PlantJackOLantern)0x0;
  this[0x5a] = (PlantJackOLantern)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  return;
}


/* PlantJackOLantern::StaticNew() */

PlantJackOLantern * PlantJackOLantern::StaticNew(void)

{
  PlantJackOLantern *this;
  
  this = ::operator_new(0x70);
  PlantJackOLantern(this);
  return this;
}


/* PlantJackOLantern::updateFlameState() */

void __thiscall PlantJackOLantern::updateFlameState(PlantJackOLantern *this)

{
  char cVar1;
  AttachedEffect *this_00;
  UIWidget *this_01;
  PopAnimRig *this_02;
  long lVar2;
  float fVar3;
  
  if (*(int *)(this + 0x2c) == 0) {
    fVar3 = *(float *)(this + 0x28);
    lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
    if (fVar3 == *(float *)(lVar2 + 1000)) {
      setFlameState(this,1);
      return;
    }
  }
  else if (*(int *)(this + 0x2c) == 1) {
    this_00 = (AttachedEffect *)createFireEffect(this);
    this_01 = (UIWidget *)AttachedEffect::GetEffect(this_00);
    this_02 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
    cVar1 = PopAnimRig::IsPlayingAnything(this_02);
    if (cVar1 == '\0') {
      setFlameState(this,2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::GetMaxLengthOfFlameThrower() */

void __thiscall PlantJackOLantern::GetMaxLengthOfFlameThrower(PlantJackOLantern *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_10;
  int local_c;
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04cfac54(uVar4);
  lVar2 = FUN_04cfdfa0(uVar4);
  local_c = *(int *)(lVar2 + 0x3d8);
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
      local_c = *(int *)(lVar2 + 0x3dc);
    }
  }
  else {
    lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
    local_c = *(int *)(lVar2 + 0x3e0);
  }
  local_10 = BoardConstants::NUMBER_OF_COLUMNS();
  local_10 = local_10 + -1;
  local_c = *(int *)(*(long *)(this + 0x10) + 0x114) + local_c;
  piVar3 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::getZombiesInRange() */

void PlantJackOLantern::getZombiesInRange(void)

{
  int iVar1;
  int iVar2;
  PlantJackOLantern *in_x0;
  TRect *extraout_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  Insets aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetMaxLengthOfFlameThrower(in_x0);
  iVar1 = *(int *)(*(long *)(in_x0 + 0x10) + 0x114);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,*(int *)(*(long *)(in_x0 + 0x10) + 0x110),(iVar2 - iVar1) + 1,1);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_28,extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::GetDamageIncrementPercent() */

undefined4 __thiscall PlantJackOLantern::GetDamageIncrementPercent(PlantJackOLantern *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_04cfac54(uVar3);
  lVar2 = FUN_04cfdfa0(uVar3);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return *(undefined4 *)(lVar2 + 0x3fc);
    }
    if (iVar1 == 3) {
      return *(undefined4 *)(lVar2 + 0x400);
    }
    if (iVar1 == 4) {
      return *(undefined4 *)(lVar2 + 0x404);
    }
    if (iVar1 == 5) {
      return *(undefined4 *)(lVar2 + 0x408);
    }
  }
  return *(undefined4 *)(lVar2 + 0x3f8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::updateFlameIndicator() */

void __thiscall PlantJackOLantern::updateFlameIndicator(PlantJackOLantern *this)

{
  char cVar1;
  long lVar2;
  AttachedEffect *this_00;
  StandaloneEffect *this_01;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  SexyMatrix3 aSStack_58 [8];
  float local_50;
  float local_44;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateFlameState(this);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  this_00 = (AttachedEffect *)createFireEffect(this);
  this_01 = (StandaloneEffect *)AttachedEffect::GetEffect(this_00);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string((string *)&local_68,"jack_flame_tag");
  cVar1 = PopAnimRig::CalcLayerTransformScreenSpace(pPVar3,(string *)&local_68,aSStack_58);
  std::string::~string((string *)&local_68);
  nop();
  if (((cVar1 == '\0') || (*(float *)(this + 0x28) < *(float *)(lVar2 + 0x3ec))) ||
     (this[0x58] == (PlantJackOLantern)0x0)) {
    StandaloneEffect::SetVisibility(this_01,false);
  }
  else {
    StandaloneEffect::SetVisibility(this_01,true);
    local_70 = 0x3ecccccd;
    local_68 = 0x3f800000;
    fVar4 = CurveLerp<float>(*(undefined4 *)(lVar2 + 0x3ec),*(undefined4 *)(lVar2 + 1000),
                             *(undefined4 *)(this + 0x28),(string *)&local_70,(string *)&local_68,1)
    ;
    (**(code **)(*(long *)this_01 + 0x80))(this_01);
    Sexy::OutputDebugStrF((wchar_t *)&DAT_0568a5c0,(double)fVar4);
    Effect_PopAnim::SetOrientation((Effect_PopAnim *)this_01,3.1415927);
    Sexy::Insets::Insets((Insets *)&local_68);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)&local_70,"jack_flame_tag");
    PopAnimRig::CalcSymbolRect(pPVar3,(string *)&local_70,(TRect *)&local_68);
    std::string::~string((string *)&local_70);
    nop();
    local_50 = local_50 - (float)local_68;
    local_44 = local_44 - (float)local_64;
    Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&local_30,aSStack_58);
    local_b0 = local_30;
    uStack_a8 = uStack_28;
    local_a0 = local_20;
    uStack_98 = uStack_18;
    local_90 = local_10;
    Effect_PopAnim::SetSkewTransform((Effect_PopAnim *)this_01,&local_b0);
    fVar4 = (float)FUN_04cfafe8(*(undefined4 *)(lVar2 + 0x3d0));
    fVar6 = (float)local_68;
    fVar5 = (float)FUN_04cfafe8(*(undefined4 *)(lVar2 + 0x3d4));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar4 + fVar6,fVar5 + (float)local_64);
    Effect_PopAnim::SetTranslation(local_70,local_6c,this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::UpdateUnconditionally() */

void __thiscall PlantJackOLantern::UpdateUnconditionally(PlantJackOLantern *this)

{
  char cVar1;
  long lVar2;
  AttachedEffect *this_00;
  StandaloneEffect *this_01;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  SexyMatrix3 aSStack_58 [8];
  float fStack_50;
  float fStack_44;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  updateFlameState(this);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  this_00 = (AttachedEffect *)createFireEffect(this);
  this_01 = (StandaloneEffect *)AttachedEffect::GetEffect(this_00);
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string((string *)&iStack_68,"jack_flame_tag");
  cVar1 = PopAnimRig::CalcLayerTransformScreenSpace(pPVar3,(string *)&iStack_68,aSStack_58);
  std::string::~string((string *)&iStack_68);
  nop();
  if (((cVar1 == '\0') || (*(float *)(this + 0x28) < *(float *)(lVar2 + 0x3ec))) ||
     (this[0x58] == (PlantJackOLantern)0x0)) {
    StandaloneEffect::SetVisibility(this_01,false);
  }
  else {
    StandaloneEffect::SetVisibility(this_01,true);
    uStack_70 = 0x3ecccccd;
    iStack_68 = 0x3f800000;
    fVar4 = CurveLerp<float>(*(undefined4 *)(lVar2 + 0x3ec),*(undefined4 *)(lVar2 + 1000),
                             *(undefined4 *)(this + 0x28),(string *)&uStack_70,(string *)&iStack_68,
                             1);
    (**(code **)(*(long *)this_01 + 0x80))(this_01);
    Sexy::OutputDebugStrF((wchar_t *)&DAT_0568a5c0,(double)fVar4);
    Effect_PopAnim::SetOrientation((Effect_PopAnim *)this_01,3.1415927);
    Sexy::Insets::Insets((Insets *)&iStack_68);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)&uStack_70,"jack_flame_tag");
    PopAnimRig::CalcSymbolRect(pPVar3,(string *)&uStack_70,(TRect *)&iStack_68);
    std::string::~string((string *)&uStack_70);
    nop();
    fStack_50 = fStack_50 - (float)iStack_68;
    fStack_44 = fStack_44 - (float)iStack_64;
    Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&uStack_30,aSStack_58);
    uStack_b0 = uStack_30;
    uStack_a8 = uStack_28;
    uStack_a0 = uStack_20;
    uStack_98 = uStack_18;
    uStack_90 = uStack_10;
    Effect_PopAnim::SetSkewTransform((Effect_PopAnim *)this_01,&uStack_b0);
    fVar4 = (float)FUN_04cfafe8(*(undefined4 *)(lVar2 + 0x3d0));
    fVar6 = (float)iStack_68;
    fVar5 = (float)FUN_04cfafe8(*(undefined4 *)(lVar2 + 0x3d4));
    Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_70,fVar4 + fVar6,fVar5 + (float)iStack_64);
    Effect_PopAnim::SetTranslation(uStack_70,uStack_6c,this_01);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::onKilled(bool) */

void PlantJackOLantern::onKilled(bool param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  UIWidget *this;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)param_1 + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((ulong)param_1 + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      UIWidget::GetAtlasImage(this);
      nop();
      EffectAnimRig_JackOLanternFireSquare::PlayFade(this_00);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::FindTarget() */

void __thiscall PlantJackOLantern::FindTarget(PlantJackOLantern *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  BoardEntity *pBVar6;
  BoardEntity *pBVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pBVar7 = (BoardEntity *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_30,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar9 = 1e+06;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pBVar6 = (BoardEntity *)*puVar5;
    cVar2 = CanBeTarget(this,pBVar6);
    if ((cVar2 != '\0') &&
       (fVar8 = (float)FUN_04cfadb0(*(undefined4 *)(pBVar6 + 0x18),*(undefined4 *)(pBVar6 + 0x1c),
                                    *(undefined4 *)(pBVar6 + 0x20)), fVar8 < fVar9)) {
      pBVar7 = pBVar6;
      fVar9 = fVar8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::applyFlameDamage() */

void __thiscall PlantJackOLantern::applyFlameDamage(PlantJackOLantern *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  fVar13 = *(float *)(lVar4 + 0x3f4);
  fVar12 = *(float *)(this + 0x30);
  fVar14 = *(float *)(lVar4 + 0x3e4);
  fVar9 = *(float *)(this + 0x68);
  fVar10 = (float)PVZ_Dt();
  fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar5 = operator|(0x400,0x1000);
  uVar5 = operator|(uVar5,0x10000);
  uVar8 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_88,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)
             ((fVar9 * (float)(int)(fVar12 / fVar13) + 1.0) * fVar14 * fVar10 * fVar11),local_80,
             local_7c,aDStack_68,uVar5,uVar8,(Point *)&local_88,0);
  getZombiesInRange();
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
  if (bVar1) {
    do {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      if ((RtObject *)*puVar6 != (RtObject *)0x0) {
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((RtObject *)*puVar6 == (RtObject *)0x0) {
          pGVar7 = (GridItem *)0x0;
        }
        else {
          pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
        }
        if ((this_00 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) {
          uVar3 = FUN_04cfac0c(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          cVar2 = RealObject::IsOnTeam(this_00,uVar3);
          if ((cVar2 == '\0') && (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) {
            (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
          }
        }
        if ((pGVar7 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,aDStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::addTargetToWispLocs(Sexy::Point, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) */

void __thiscall
PlantJackOLantern::addTargetToWispLocs
          (undefined8 param_1,Point *param_2,
          vector<Sexy::Point,std::allocator<Sexy::Point>> *param_3)

{
  int iVar1;
  int iVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,param_2);
  iVar2 = *(int *)param_2;
  if (0 < iVar2) {
    Sexy::Point::Point(aPStack_10,iVar2 + -1,*(int *)(param_2 + 4));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,aPStack_10);
    iVar2 = *(int *)param_2;
  }
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar2 < iVar1 + -1) {
    Sexy::Point::Point(aPStack_10,*(int *)param_2 + 1,*(int *)(param_2 + 4));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d0121c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantJackOLantern::Initialize() */

void __thiscall PlantJackOLantern::Initialize(PlantJackOLantern *this)

{
  long lVar1;
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x38));
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar1 + 1000);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar1 + 0x2b8));
  createFireEffect(this);
  this[0x58] = (PlantJackOLantern)0x1;
  setFlameState(this,2);
  uVar2 = *(undefined8 *)(this + 0x10);
  FUN_04cfac54(uVar2);
  if ((int)uVar2 == 5) {
    fVar4 = (float)PVZ_T();
    lVar1 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x5c) = fVar4 + *(float *)(lVar1 + 0x418);
  }
  else {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x5c) = uVar3;
  }
  uVar3 = GetDamageIncrementPercent(this);
  *(undefined4 *)(this + 0x68) = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::clearFireTiles() */

void __thiscall PlantJackOLantern::clearFireTiles(PlantJackOLantern *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::onDestroy() */

void __thiscall PlantJackOLantern::onDestroy(PlantJackOLantern *this)

{
  clearFireTiles(this);
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantJackOLantern::~PlantJackOLantern() */

void __thiscall PlantJackOLantern::~PlantJackOLantern(PlantJackOLantern *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5510;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantJackOLantern::~PlantJackOLantern() */

void __thiscall PlantJackOLantern::~PlantJackOLantern(PlantJackOLantern *this)

{
  ~PlantJackOLantern(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::specifyWispTargetLocs(std::multimap<int, Sexy::Point, std::less<int>,
   std::allocator<std::pair<int const, Sexy::Point> > >, int) */

void PlantJackOLantern::specifyWispTargetLocs
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               PlantFramework *param_2,
               map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  GridIcelotusDropwater *pGVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TPoint *pTVar9;
  int iVar10;
  reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  arStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  iVar10 = 0;
  std::
  map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::rbegin(param_3);
  do {
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    rend((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
          *)param_3);
    bVar1 = std::operator!=((reverse_iterator *)arStack_28,(reverse_iterator *)&local_10);
    if ((param_4 <= iVar10) || (!bVar1)) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      return;
    }
    lVar4 = std::
            reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::operator->(arStack_28);
    iVar2 = *(int *)(lVar4 + 4);
    lVar4 = std::
            reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::operator->(arStack_28);
    pGVar5 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar2,*(int *)(lVar4 + 8));
    if (pGVar5 == (GridIcelotusDropwater *)0x0) {
      piVar6 = (int *)std::
                      reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      ::operator->(arStack_28);
      if (*piVar6 < 1) {
        Sexy::Point::Point((Point *)&local_20);
        do {
          iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
          iVar2 = PlantFramework::Rand(param_2,iVar2);
          iVar3 = BoardConstants::NUMBER_OF_ROWS();
          iVar3 = PlantFramework::Rand(param_2,iVar3);
          Sexy::Point::Point((Point *)&local_10,iVar2,iVar3);
          local_20 = local_10;
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)param_1);
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)param_1);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)param_1);
          local_10 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                               (uVar7,uVar8,(Point *)&local_20);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          pTVar9 = (TPoint *)&local_20;
        } while (bVar1);
      }
      else {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_1);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)param_1);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)param_1);
        lVar4 = std::
                reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                ::operator->(arStack_28);
        local_10 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                             (uVar7,uVar8,lVar4 + 4);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar1) goto LAB_04d01a00;
        lVar4 = std::
                reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                ::operator->(arStack_28);
        pTVar9 = (TPoint *)(lVar4 + 4);
      }
      Sexy::Point::Point((Point *)&local_10,pTVar9);
      iVar10 = iVar10 + 1;
      addTargetToWispLocs((PlantJackOLantern *)param_2,(Point *)&local_10,param_1);
    }
LAB_04d01a00:
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::Point>>>::operator++
              ((reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::Point>>> *)
               arStack_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::calcWispTargetLocs() */

void PlantJackOLantern::calcWispTargetLocs(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long in_x0;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  Zombie *this;
  GridItem *pGVar14;
  TRect *extraout_x1;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *in_x8;
  int iVar15;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  Insets aIStack_40 [16];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar15 = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(in_x8);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar5) {
    do {
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if (-1 < iVar5 + -1) {
        uVar6 = operator|(2,4);
        iVar5 = iVar5 + -1;
LAB_04d01ee4:
        iVar2 = iVar5 + -1;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        local_50 = 0;
        local_30[0] = iVar2;
        piVar10 = eastl::max_alt<int>((int *)&local_50,local_30);
        iVar1 = *piVar10;
        iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar8 = 2;
        if (iVar7 + -1 != iVar5) {
          iVar8 = 3;
        }
        Sexy::Insets::Insets(aIStack_40,iVar1,iVar15,iVar8,1);
        BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_40,extraout_x1);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar6,
                   local_30,0xffffffff,0xffffffff);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        do {
          uVar11 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
          local_50 = (undefined4)uVar11;
          uStack_4c = (undefined4)((ulong)uVar11 >> 0x20);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
          while( true ) {
            if (!bVar3) {
              std::pair<int,Sexy::Point>::pair((pair<int,Sexy::Point> *)&local_50);
              local_50 = FUN_04cfac94(local_20,local_18);
              Sexy::Point::Point((Point *)&local_58,iVar5,iVar15);
              uStack_4c = (undefined4)local_58;
              uStack_48 = (undefined4)((ulong)local_58 >> 0x20);
              std::
              multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
              ::insert<std::pair<int,Sexy::Point>&,void>
                        ((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                          *)in_x8,(pair *)&local_50);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
              iVar5 = iVar2;
              if (iVar2 == -1) goto LAB_04d020dc;
              goto LAB_04d01ee4;
            }
            puVar12 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
            lVar13 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)*puVar12);
            iVar8 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar13 + 4));
            if (iVar15 != iVar8) break;
            puVar12 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
            this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
            puVar12 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
            pGVar14 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar12);
            if (this != (Zombie *)0x0) {
              uVar11 = operator|(1,8);
              uVar9 = operator|(uVar11,4);
              cVar4 = Zombie::MatchesAny(this,uVar9,*(undefined8 *)(in_x0 + 0x10));
              if ((cVar4 != '\0') || (cVar4 = Zombie::IsTargetable(this), cVar4 == '\0')) break;
            }
            if ((pGVar14 != (GridItem *)0x0) &&
               ((cVar4 = RealObject::IsOnTeam(pGVar14,1), cVar4 != '\0' ||
                (cVar4 = (**(code **)(*(long *)pGVar14 + 0x200))(pGVar14), cVar4 == '\0')))) break;
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
            uVar11 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
            local_50 = (undefined4)uVar11;
            uStack_4c = (undefined4)((ulong)uVar11 >> 0x20);
            bVar3 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
          }
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_50,(__normal_iterator *)&local_58);
          local_58 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                               ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                                CONCAT44(uStack_4c,local_50));
        } while( true );
      }
LAB_04d020dc:
      iVar15 = iVar15 + 1;
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar15 < iVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::createFireTiles(bool) */

void __thiscall PlantJackOLantern::createFireTiles(PlantJackOLantern *this,bool param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *this_00;
  PopAnim *pPVar4;
  RtClass *pRVar5;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  int local_38;
  int local_34;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  if (((DAT_06b96a20 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b96a20), iVar3 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b96870,-98.0,-120.0,0.0);
    __cxa_guard_release(&DAT_06b96a20);
  }
  FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  std::string::string(asStack_18,"POPANIM_EFFECTS_JACKOLANTERN_FIRE_TILE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar2 = GetMaxLengthOfFlameThrower(this);
  lVar6 = *(long *)(this + 0x10);
  iVar3 = *(int *)(lVar6 + 0x114) + 1;
  if (iVar3 <= iVar2) {
    fVar9 = 0.0;
    while( true ) {
      Sexy::Point::Point((Point *)asStack_18,iVar3,*(int *)(lVar6 + 0x110));
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      uVar8 = 0;
      fVar7 = (float)local_34;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_38,fVar7,0.0);
      local_28 = Sexy::SexyVector3::operator+
                           ((SexyVector3 *)&DAT_06b96870,(SexyVector3 *)asStack_18);
      local_24 = fVar7;
      local_20 = uVar8;
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      pRVar5 = (RtClass *)EffectAnimRig_JackOLanternFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar4,pRVar5);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_28,-1)
      ;
      FUN_04cfac18(this_00 + 0x1c,uVar1);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_01,fVar9);
      UIWidget::GetAtlasImage((UIWidget *)this_00);
      nop();
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_02,this_00);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_30);
      std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
      push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                 *)(this + 0x38),(RtWeakPtr *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      if (!param_1) {
        fVar9 = fVar9 + 0.075;
      }
      iVar3 = iVar3 + 1;
      if (iVar2 < iVar3) break;
      lVar6 = *(long *)(this + 0x10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::updateFireTiles() */

void __thiscall PlantJackOLantern::updateFireTiles(PlantJackOLantern *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = GetMaxLengthOfFlameThrower(this);
  lVar2 = FUN_04cfac88(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (lVar2 != iVar1 - *(int *)(*(long *)(this + 0x10) + 0x114)) {
    clearFireTiles(this);
    createFireTiles(this,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::setState(unsigned int) */

void __thiscall PlantJackOLantern::setState(PlantJackOLantern *this,uint param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  PlantAnimRig_PyreVine *pPVar5;
  RtWeakPtrBase *pRVar6;
  UIWidget *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  Effect_AngerFlame *this_03;
  PlantAnimRig_JackOLantern *pPVar7;
  long *plVar8;
  RtMixedPtr aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_04d024b8_caseD_3;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  switch(param_1) {
  case 0:
    *(undefined4 *)(this + 0x30) = 0;
    pPVar7 = (PlantAnimRig_JackOLantern *)FUN_04cfe590();
    PlantAnimRig_JackOLantern::PlayAttackLoop(pPVar7);
    createFireTiles(this,false);
    goto switchD_04d024b8_caseD_3;
  case 1:
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x38);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,pRVar6);
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      UIWidget::GetAtlasImage(this_01);
      nop();
      EffectAnimRig_JackOLanternFireSquare::PlayFade(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )this_00);
    pPVar7 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(exception_ptr *)&local_60,(string *)&local_58);
    PlantAnimRig_JackOLantern::PlayAttackEnd
              (pPVar7,(RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                       *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    goto switchD_04d024b8_caseD_3;
  case 2:
    pPVar5 = (PlantAnimRig_PyreVine *)FUN_04cfe590();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,&local_60,(string *)&local_58);
    PlantAnimRig_PyreVine::PlayLv5AttackStart(pPVar5,aRStack_50);
    break;
  default:
    goto switchD_04d024b8_caseD_3;
  case 4:
    lVar4 = FUN_04cfdfa0();
    cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
    if ((cVar1 == '\0') || (*(float *)(lVar4 + 0x3ec) <= *(float *)(this + 0x28))) {
      plVar8 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar8 + 0x118))();
      goto switchD_04d024b8_caseD_3;
    }
    this[0x5a] = (PlantJackOLantern)0x1;
    pPVar7 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,&local_60,(string *)&local_58);
    PlantAnimRig_JackOLantern::PlayEmptyStart(pPVar7,aRStack_50);
    break;
  case 8:
    setFlameState(this,0);
    this_03 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar3 = Effect_AngerFlame::GetFlameCol(this_03);
    if (iVar3 == 0xe) goto switchD_04d024b8_caseD_3;
    pPVar7 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,&local_60,(string *)&local_58);
    PlantAnimRig_JackOLantern::PlayAttackStart(pPVar7,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04d024b8_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::startShootingFlames() */

void __thiscall PlantJackOLantern::startShootingFlames(PlantJackOLantern *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')) &&
       (*(int *)(*(long *)(this + 0x10) + 200) == 4)) &&
      (cVar1 = Plant::HasCondition(*(long *)(this + 0x10),0x11), cVar1 == '\0')) &&
     (((lVar2 = *(long *)(gLawnApp + 0x9f0), lVar2 == 0 ||
       ((cVar1 = FUN_04cfac44(*(undefined1 *)(lVar2 + 0x887)), cVar1 != '\0' &&
        (cVar1 = FUN_04cfac48(*(undefined1 *)(lVar2 + 0x888)), cVar1 != '\0')))) &&
      (lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10)),
      *(float *)(lVar2 + 0x3ec) <= *(float *)(this + 0x28))))) {
    setState(this,8);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) - *(float *)(lVar2 + 0x3ec);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::UpdateActions() */

void __thiscall PlantJackOLantern::UpdateActions(PlantJackOLantern *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  GridItem *this_01;
  PlantAnimRig_JackOLantern *pPVar7;
  float *pfVar8;
  Plant *this_02;
  PlantJackOLantern PVar9;
  RtObject *this_03;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_88;
  undefined8 local_80;
  float local_78 [2];
  float local_70 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  getZombiesInRange();
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    this_03 = (RtObject *)*puVar6;
    if (this_03 != (RtObject *)0x0) {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_03);
      if ((((this_00 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
          (fVar11 = (float)FUN_04cfac4c(*(undefined4 *)(this_00 + 0x280)), 0.0 < fVar11)) &&
         (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')) {
        uVar3 = FUN_04cfac0c(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
        cVar2 = RealObject::IsOnTeam(this_00,uVar3);
        if (cVar2 != '\0') goto LAB_04d029b8;
        pcVar10 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)local_78);
        cVar2 = (*pcVar10)(this_00,(RtWeakPtr<Sexy::SoundResource> *)local_70,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
        if (cVar2 == '\0') goto LAB_04d029b8;
        this_02 = *(Plant **)(this + 0x10);
        iVar4 = *(int *)(this_02 + 200);
        if (iVar4 != 0) {
LAB_04d02a30:
          PVar9 = (PlantJackOLantern)0x1;
          if (iVar4 != 4) goto LAB_04d02a3c;
          goto LAB_04d02b68;
        }
LAB_04d02ae0:
        fVar11 = (float)PVZ_Dt();
        fVar13 = *(float *)(this + 0x28);
        fVar12 = *(float *)(lVar5 + 0x3f0);
        *(float *)(this + 0x30) = *(float *)(this + 0x30) + fVar11;
        fVar11 = (float)PVZ_Dt();
        if (fVar13 < fVar11 * fVar12) goto LAB_04d02c98;
        fVar13 = *(float *)(this + 0x28);
        local_78[0] = 0.0;
        fVar12 = *(float *)(lVar5 + 0x3f0);
        fVar11 = (float)PVZ_Dt();
        local_70[0] = fVar13 - fVar12 * fVar11;
        pfVar8 = eastl::max_alt<float>(local_78,local_70);
        *(float *)(this + 0x28) = *pfVar8;
        applyFlameDamage(this);
        updateFireTiles(this);
        goto LAB_04d02a3c;
      }
LAB_04d029b8:
      this_01 = Sexy::RtObject::Cast<GridItem>(this_03);
      if (this_01 != (GridItem *)0x0) {
        if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
          fVar11 = (float)GridItem::GetHitpoints(this_01);
        }
        else {
          fVar11 = (float)(**(code **)(*(long *)this_01 + 0x1d8))();
        }
        if (0.0 < fVar11) {
          uVar3 = FUN_04cfac0c(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          cVar2 = RealObject::IsOnTeam(this_01,uVar3);
          if ((cVar2 == '\0') &&
             (cVar2 = (**(code **)(*(long *)this_01 + 0x218))(this_01,*(undefined8 *)(this + 0x10)),
             cVar2 != '\0')) {
            this_02 = *(Plant **)(this + 0x10);
            iVar4 = *(int *)(this_02 + 200);
            if (iVar4 == 0) goto LAB_04d02ae0;
            goto LAB_04d02a30;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  this_02 = *(Plant **)(this + 0x10);
  if (*(int *)(this_02 + 200) == 0) {
    fVar11 = (float)PVZ_Dt();
    *(float *)(this + 0x30) = *(float *)(this + 0x30) + fVar11;
    PVZ_Dt();
LAB_04d02c98:
    setState(this,1);
    goto LAB_04d02a3c;
  }
  if (*(int *)(this_02 + 200) != 4) goto LAB_04d02a3c;
  PVar9 = (PlantJackOLantern)0x0;
LAB_04d02b68:
  this[0x59] = PVar9;
  fVar11 = *(float *)(this + 0x28);
  if (fVar11 < *(float *)(lVar5 + 1000)) {
    fVar13 = *(float *)(lVar5 + 0x40c);
    fVar12 = (float)PVZ_Dt();
    local_70[0] = fVar11 + fVar13 * fVar12;
    pfVar8 = eastl::min_alt<float>((float *)(lVar5 + 1000),local_70);
    this_02 = *(Plant **)(this + 0x10);
    *(float *)(this + 0x28) = *pfVar8;
  }
  cVar2 = Plant::IsOnBoard(this_02);
  if (cVar2 == '\0') {
LAB_04d02c3c:
    if ((PVar9 != (PlantJackOLantern)0x0) && (*(float *)(lVar5 + 0x410) <= *(float *)(this + 0x28)))
    {
LAB_04d02cac:
      startShootingFlames(this);
      goto LAB_04d02a3c;
    }
  }
  else if (*(float *)(lVar5 + 0x410) <= *(float *)(this + 0x28)) {
    if (this[0x5a] != (PlantJackOLantern)0x0) {
      this[0x5a] = (PlantJackOLantern)0x0;
      pPVar7 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_80);
      std::string::string((string *)local_70,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)local_78,(string *)local_70);
      PlantAnimRig_JackOLantern::PlayEmptyEnd(pPVar7,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)local_70);
      nop();
      Sexy::RtId::~RtId((RtId *)local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
      goto LAB_04d02c3c;
    }
    if (PVar9 == (PlantJackOLantern)0x0) goto LAB_04d02c54;
    goto LAB_04d02cac;
  }
LAB_04d02c54:
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x60));
  if ((cVar2 != '\0') && (fVar11 = (float)PVZ_T(), *(float *)(this + 0x5c) < fVar11)) {
    setState(this,2);
  }
LAB_04d02a3c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::ApplyPlantfood() */

void __thiscall PlantJackOLantern::ApplyPlantfood(PlantJackOLantern *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  UIWidget *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,5);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this_01 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::GetAtlasImage(this_01);
    nop();
    EffectAnimRig_JackOLanternFireSquare::PlayFade(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackOLantern::CancelPlantfood() */

void __thiscall PlantJackOLantern::CancelPlantfood(PlantJackOLantern *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::SpawnGhost() */

void __thiscall PlantJackOLantern::SpawnGhost(PlantJackOLantern *this)

{
  undefined4 uVar1;
  long lVar2;
  SexyVector3 *this_00;
  long lVar3;
  RtObject *pRVar4;
  JackOLanternGhost *pJVar5;
  undefined8 uVar6;
  float fVar7;
  Board *pBVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FindTarget(this);
  uVar9 = 0xc2340000;
  uVar10 = 0;
  EATextSquish::Vec3::Vec3(aVStack_40,30.0,-45.0,0.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  pBVar8 = (Board *)Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_40);
  local_30 = SUB84(pBVar8,0);
  local_2c = (undefined4)uVar9;
  local_28 = (undefined4)uVar10;
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  if (lVar2 == 0) {
    lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(lVar2 + 0x430));
    pRVar4 = (RtObject *)
             Board::AddProjectile
                       (pBVar8,uVar9,uVar10,uVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_20,0,0);
    pJVar5 = Sexy::RtObject::Cast<JackOLanternGhost>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  }
  else {
    lVar3 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(lVar3 + 0x430));
    pRVar4 = (RtObject *)
             Board::AddProjectile
                       (pBVar8,uVar9,uVar10,uVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_20,lVar2,
                        0);
    pJVar5 = Sexy::RtObject::Cast<JackOLanternGhost>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    JackOLanternGhost::SetOverrideTarget((BoardEntity *)pJVar5);
  }
  FUN_04cfac10(pJVar5 + 0x24,1);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  local_20 = *(undefined4 *)(lVar2 + 0x41c);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  uStack_1c = *(undefined4 *)(lVar2 + 0x420);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  local_18 = *(undefined4 *)(lVar2 + 0x424);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  local_14 = *(undefined4 *)(lVar2 + 0x428);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  local_60 = *(undefined4 *)(lVar2 + 0x42c);
  local_70 = CONCAT44(uStack_1c,local_20);
  uStack_68 = CONCAT44(local_14,local_18);
  local_10 = local_60;
  JackOLanternGhost::SetParam(pJVar5,&local_70);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
  JackOLanternGhost::SetPlant(pJVar5,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  uVar1 = FUN_04cfac38(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  FUN_04cfac5c(pJVar5 + 0x1e4,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  lVar2 = FUN_04cfdfa0(*(undefined8 *)(this + 0x10));
  fVar11 = *(float *)(lVar2 + 0x418);
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0x5c) = fVar7 + fVar11;
  setState(this,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantJackOLantern::onAnimStoppedCallback(PlantJackOLantern *this,string *param_1)

{
  long lVar1;
  PlantAnimRig_JackOLantern *pPVar2;
  long *plVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,"attack_start",0);
  if (lVar1 == -1) {
    lVar1 = FUN_05474374(param_1,"attack_end",0);
    if (lVar1 == -1) {
      lVar1 = FUN_05474374(param_1,"empty_state_start",0);
      if (lVar1 == -1) {
        lVar1 = FUN_05474374(param_1,"empty_state_end",0);
        if (lVar1 == -1) {
          lVar1 = FUN_05474374(param_1,"attack_lv5",0);
          if (lVar1 != -1) {
            SpawnGhost(this);
          }
        }
        else if (this[0x59] == (PlantJackOLantern)0x0) {
          plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          (**(code **)(*plVar3 + 0x118))();
        }
        else {
          this[0x59] = (PlantJackOLantern)0x0;
          pPVar2 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_JackOLantern::PlayAttackStart(pPVar2,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        }
      }
      else {
        pPVar2 = (PlantAnimRig_JackOLantern *)FUN_04cfe590(*(undefined8 *)(this + 0x10));
        PlantAnimRig_JackOLantern::PlayEmptyLoop(pPVar2);
      }
    }
    else {
      setState(this,4);
    }
  }
  else {
    setState(this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::CancelOngoingEffects() */

void __thiscall PlantJackOLantern::CancelOngoingEffects(PlantJackOLantern *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char *pcVar2;
  RtWeakPtrBase *pRVar3;
  UIWidget *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  GameObjectDictionary *this_03;
  AttachedEffect *this_04;
  StandaloneEffect *this_05;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  setState(this,4);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Plant_Jackolantern_Attack_End");
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
    this_01 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::GetAtlasImage(this_01);
    nop();
    EffectAnimRig_JackOLanternFireSquare::PlayFade(this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        this_00);
  this_03 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string((string *)&local_10,"jack_flame");
  this_04 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_03,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  this_05 = (StandaloneEffect *)AttachedEffect::GetEffect(this_04);
  StandaloneEffect::SetVisibility(this_05,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackOLantern::OnAnimCommand(std::string const&, std::string const&) */

void PlantJackOLantern::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  GridItemWisp *this;
  int *piVar5;
  long lVar6;
  long extraout_x0;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined8 local_80 [3];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04cfdfa0(*(undefined8 *)(param_1 + 0x10));
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar4 + 1000);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    calcWispTargetLocs();
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    operator=((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)amStack_68,amStack_38);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    ~multimap(amStack_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    multimap(amStack_38,amStack_68);
    specifyWispTargetLocs
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_80,param_1,amStack_38,
               *(undefined4 *)(lVar4 + 0x438));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_98,(vector *)local_80);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_80);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    ~multimap(amStack_38);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_98);
    local_80[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_98);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)local_80), bVar2)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      GetWispName();
      lVar6 = Board::GetGridItemAt(pBVar7,(string *)amStack_38,*piVar5,piVar5[1]);
      std::string::~string((string *)amStack_38);
      if (lVar6 == 0) {
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        GetWispName();
        lVar6 = Board::AddGridItem(pBVar7,(string *)amStack_38,*piVar5,piVar5[1],1);
        std::string::~string((string *)amStack_38);
        nop();
        fVar9 = *(float *)(lVar4 + 0x414);
        fVar8 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
        FUN_04cfac68(extraout_x0 + 0x1b0,(int)(fVar8 * fVar9));
        uVar3 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        FUN_04cfac70(extraout_x0 + 0x1b8,uVar3);
      }
      else {
        nop();
        GridItemWisp::ResetTimer(this);
      }
      uVar3 = FUN_04cfac0c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
      FUN_04cfac10(lVar6 + 0x24,uVar3);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_98);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    ~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)amStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

