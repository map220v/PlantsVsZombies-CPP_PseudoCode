// Class: InfernoPFProjectile


/* InfernoPFProjectile::SetTornadoGridNum(float) */

void __thiscall InfernoPFProjectile::SetTornadoGridNum(InfernoPFProjectile *this,float param_1)

{
  *(float *)(this + 0x1ac) = param_1 - 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::dissipateBackAnimation() */

void __thiscall InfernoPFProjectile::dissipateBackAnimation(InfernoPFProjectile *this)

{
  AttachedEffect *pAVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"linkedEffect");
  pAVar1 = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pAVar1 != (AttachedEffect *)0x0) {
    std::string::string(asStack_10,"animation4");
    AttachedEffect::PlayAnimAndDestroy(pAVar1,asStack_10,2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::setUpBackAnimation() */

void __thiscall InfernoPFProjectile::setUpBackAnimation(InfernoPFProjectile *this)

{
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_18);
  Projectile::AddAttachedEffect
            ((Projectile *)this,"linkedEffect","POPANIM_EFFECTS_INFERNO_PROJECTILE_BACK",
             "animation2",aDStack_18,0xffffffff,0,0,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectile::getRotateCenterPosition() */

undefined4 __thiscall InfernoPFProjectile::getRotateCenterPosition(InfernoPFProjectile *this)

{
  undefined4 local_10;
  
  local_10 = (undefined4)*(undefined8 *)(this + 0x23c);
  return local_10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::StaticClassInit() */

void InfernoPFProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoPFProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03b109bc,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectile::StaticGetClass() */

long * InfernoPFProjectile::StaticGetClass(void)

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
  uVar2 = InfernoProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoPFProjectile::GetClass() const */

long * InfernoPFProjectile::GetClass(void)

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
  uVar2 = InfernoProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"InfernoPFProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoPFProjectile::SetMaxCarriedZombies(int) */

void __thiscall InfernoPFProjectile::SetMaxCarriedZombies(InfernoPFProjectile *this,int param_1)

{
  *(int *)(this + 0x220) = param_1;
  return;
}


/* InfernoPFProjectile::setRotateCenterPosition() */

void __thiscall InfernoPFProjectile::setRotateCenterPosition(InfernoPFProjectile *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x23c),pSVar1);
  return;
}


/* InfernoPFProjectile::setTornadoValues(float, Sexy::RtWeakPtr<InfernoPFProjectile>) */

void __thiscall
InfernoPFProjectile::setTornadoValues
          (undefined4 param_1,InfernoPFProjectile *this,RtWeakPtr *param_3)

{
  *(undefined4 *)(this + 0x224) = param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x218),param_3);
  return;
}


/* InfernoPFProjectile::affectBrotherProj(bool) */

void InfernoPFProjectile::affectBrotherProj(bool param_1)

{
  char cVar1;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)((ulong)param_1 + 0x218));
  if (cVar1 == '\0') {
    return;
  }
  FUN_03b0bfec((ulong)param_1 + 0x238);
  return;
}


/* InfernoPFProjectile::shouldDissipate() */

bool __thiscall InfernoPFProjectile::shouldDissipate(InfernoPFProjectile *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  bVar1 = false;
  if (*(float *)(this + 0x1d4) != fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = *(float *)(this + 0x1d4) <= fVar2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::moveThroughTime(float) */

void InfernoPFProjectile::moveThroughTime(float param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  InfernoProjectile *in_x0;
  undefined8 *puVar4;
  SexyVector3 *pSVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  undefined4 local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)InfernoProjectile::calcLerpVelocity(in_x0);
  fVar12 = *(float *)(in_x0 + 0x22c);
  local_88[0] = InfernoProjectile::calcVelocity(in_x0);
  puVar4 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
  local_78 = *puVar4;
  local_70 = *(undefined4 *)(puVar4 + 1);
  if (in_x0[0x238] == (InfernoProjectile)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x218));
    if (!bVar1) goto LAB_03b0e918;
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x218));
    cVar2 = FUN_03b0bff8(*(undefined1 *)(lVar6 + 0x238));
    if (cVar2 == '\0') goto LAB_03b0e918;
  }
  EATextSquish::Vec3::operator/=((Vec3 *)local_88,2.0);
LAB_03b0e918:
  fVar9 = *(float *)(in_x0 + 0x23c);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  dVar11 = (double)iVar3 * 8.5 + 200.0;
  if ((double)fVar9 < dVar11) {
    fVar9 = *(float *)(in_x0 + 0x240);
    dVar11 = (double)(ulong)(uint)*(float *)(in_x0 + 0x244);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)&local_18,*(float *)(in_x0 + 0x23c) + param_1 * fVar8,fVar9,
               *(float *)(in_x0 + 0x244));
    Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x23c),(SexyVector3 *)&local_18);
    pSVar5 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)in_x0);
    local_68 = Sexy::SexyVector3::operator*((SexyVector3 *)local_88,pSVar5);
    local_60 = SUB84(dVar11,0);
    local_64 = fVar9;
    local_58 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_68,param_1);
    local_50 = SUB84(dVar11,0);
    local_54 = fVar9;
    local_48 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,param_1);
    local_40 = SUB84(dVar11,0);
    local_44 = fVar9;
    local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,param_1);
    local_30 = SUB84(dVar11,0);
    local_34 = fVar9;
    local_28 = (float)Sexy::SexyVector3::operator*((SexyVector3 *)&local_38,0.5);
    local_20 = SUB84(dVar11,0);
    local_24 = fVar9;
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)&local_28);
    local_10 = SUB84(dVar11,0);
    local_14 = fVar9;
    EATextSquish::Vec3::operator+=((Vec3 *)(in_x0 + 0x23c),(Vec3 *)&local_18);
  }
  uVar10 = SUB84(dVar11,0);
  *(float *)(in_x0 + 0x224) = *(float *)(in_x0 + 0x224) + fVar12 * param_1;
  DVec3::DVec3((DVec3 *)&local_28);
  local_28 = cosf(*(float *)(in_x0 + 0x224));
  fVar8 = *(float *)(in_x0 + 0x234);
  local_28 = local_28 * fVar8;
  pcVar7 = *(code **)(*(long *)in_x0 + 0x78);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)(in_x0 + 0x23c),(SexyVector3 *)&local_28);
  local_14 = fVar8;
  local_10 = uVar10;
  (*pcVar7)();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::playDeathAnim() */

void __thiscall InfernoPFProjectile::playDeathAnim(InfernoPFProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"animation4");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InfernoProjectile::onDeathAnimComplete);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<InfernoPFProjectile,void(InfernoProjectile::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::moveZombie() */

void __thiscall InfernoPFProjectile::moveZombie(InfernoPFProjectile *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1e8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1e8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 != '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_18 = CONCAT44(local_18._4_4_,*puVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      (**(code **)(*plVar6 + 0x78))(plVar6,&local_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectile::calcPullRect() */

Insets * InfernoPFProjectile::calcPullRect(void)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar2;
  RtObject *this;
  InfernoPFProjectileProps *pIVar3;
  Insets *in_x8;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  Sexy::Insets::Insets(in_x8);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar6 = *pfVar2;
  fVar5 = pfVar2[1];
  this = (RtObject *)Projectile::GetProps((Projectile *)in_x0);
  pIVar3 = Sexy::RtObject::Cast<InfernoPFProjectileProps>(this);
  fVar7 = *(float *)(pIVar3 + 0x24c);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = (int)((float)iVar1 * fVar7);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 8) = iVar4 << 1;
  iVar1 = (int)((float)iVar1 * fVar7);
  *(int *)(in_x8 + 0xc) = iVar1 << 1;
  *(int *)in_x8 = (int)(fVar6 - (float)iVar4);
  *(int *)(in_x8 + 4) = (int)(fVar5 - (float)iVar1);
  return in_x8;
}


/* InfernoPFProjectile::InfernoPFProjectile() */

void __thiscall InfernoPFProjectile::InfernoPFProjectile(InfernoPFProjectile *this)

{
  InfernoProjectile::InfernoProjectile((InfernoProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0672bf90;
  *(undefined ***)(this + 0x10) = &PTR__InfernoPFProjectile_0672c1d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  DVec3::DVec3((DVec3 *)(this + 0x23c));
  return;
}


/* InfernoPFProjectile::StaticNew() */

InfernoPFProjectile * InfernoPFProjectile::StaticNew(void)

{
  InfernoPFProjectile *this;
  
  this = ::operator_new(0x250);
  InfernoPFProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::doDamagePulse() */

void __thiscall InfernoPFProjectile::doDamagePulse(InfernoPFProjectile *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  BoardEntity *pBVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1e8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1e8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      InfernoProjectile::playImpactEffect((InfernoProjectile *)this,pBVar4);
      pBVar4 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      InfernoProjectile::pulseDamageEntity((InfernoProjectile *)this,pBVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  InfernoProjectile::setNextPulseTime((InfernoProjectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void InfernoPFProjectile::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"explode");
  if (bVar1) {
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x200));
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x200));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_80);
      if (bVar1) {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        cVar2 = (**(code **)(*plVar4 + 0x328))();
        if (cVar2 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
          cVar2 = (**(code **)(*plVar4 + 0x330))();
          if (cVar2 == '\0') {
            DamageInfo::DamageInfo(aDStack_68);
            Projectile::GetProps((Projectile *)param_1);
            nop();
            local_60 = (float)FUN_03b0bfac(*(undefined4 *)(param_1 + 0x170),
                                           *(undefined4 *)(param_1 + 0x17c),
                                           *(undefined4 *)(param_1 + 0x180),
                                           *(undefined4 *)(param_1 + 0x184));
            local_60 = local_60 * *(float *)(extraout_x0 + 0x250);
            operator|=(auStack_58,0x2000000000);
            operator|=(auStack_58,0x400);
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            (**(code **)(*plVar4 + 0x110))(plVar4,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectile::onDestroy() */

void __thiscall InfernoPFProjectile::onDestroy(InfernoPFProjectile *this)

{
  (**(code **)(*(long *)this + 0x1f8))();
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  return;
}


/* InfernoPFProjectile::~InfernoPFProjectile() */

void __thiscall InfernoPFProjectile::~InfernoPFProjectile(InfernoPFProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0672bf90;
  *(undefined ***)(this + 0x10) = &PTR__InfernoPFProjectile_0672c1d8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x200));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e8));
  InfernoProjectile::~InfernoProjectile((InfernoProjectile *)this);
  return;
}


/* non-virtual thunk to InfernoPFProjectile::~InfernoPFProjectile() */

void __thiscall InfernoPFProjectile::~InfernoPFProjectile(InfernoPFProjectile *this)

{
  ~InfernoPFProjectile(this + -0x10);
  return;
}


/* InfernoPFProjectile::~InfernoPFProjectile() */

void __thiscall InfernoPFProjectile::~InfernoPFProjectile(InfernoPFProjectile *this)

{
  ~InfernoPFProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InfernoPFProjectile::~InfernoPFProjectile() */

void __thiscall InfernoPFProjectile::~InfernoPFProjectile(InfernoPFProjectile *this)

{
  ~InfernoPFProjectile(this + -0x10);
  return;
}


/* InfernoPFProjectile::getCarriedZombies() */

vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *
InfernoPFProjectile::getCarriedZombies(void)

{
  long in_x0;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *in_x8;
  
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::vector
            (in_x8,(vector *)(in_x0 + 0x1e8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::pickUpZombie(Zombie*) */

void __thiscall InfernoPFProjectile::pickUpZombie(InfernoPFProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  AttachedEffect *this_00;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 0x1e8));
  if (cVar1 != '\0') {
    InfernoProjectile::setNextPulseTime((InfernoProjectile *)this);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e8),(RtWeakPtr *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  pcVar6 = *(code **)(*plVar3 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar6)(plVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Zombie::SetIsControlled(param_1,true);
  std::string::string((string *)aRStack_58,"linkedEffect");
  this_00 = (AttachedEffect *)Projectile::GetAttachedEffect((Projectile *)this,(string *)aRStack_58)
  ;
  std::string::~string((string *)aRStack_58);
  nop();
  if (this_00 != (AttachedEffect *)0x0) {
    lVar4 = AttachedEffect::GetEffect(this_00);
    iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    FUN_03b0bf30(lVar4 + 0x1c,iVar2 + -500);
  }
  uVar5 = FUN_03b0c028(*(undefined8 *)(this + 0x1e8),*(undefined8 *)(this + 0x1f0));
  if ((ulong)(long)*(int *)(this + 0x220) <= uVar5) {
    InfernoProjectile::setTornadoFull((InfernoProjectile *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::dropCarriedZombie() */

void __thiscall InfernoPFProjectile::dropCarriedZombie(InfernoPFProjectile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_01;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [3];
  undefined8 local_68 [3];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  local_80[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_80,(__normal_iterator *)local_68),
        bVar1) {
    pRVar3 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_80)
    ;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_88,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_88);
    if (cVar2 != '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      Zombie::SetIsControlled(pZVar4,false);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      cVar2 = (**(code **)(*plVar5 + 0x328))();
      if (cVar2 == '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        cVar2 = (**(code **)(*plVar5 + 0x330))();
        if (cVar2 == '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
          (**(code **)(*plVar5 + 0x260))();
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
          plVar5 = (long *)Zombie::GetAnimRig(pZVar4);
          pcVar7 = *(code **)(*plVar5 + 0x118);
          RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
          RtReflectionDelegate(aRStack_50);
          (*pcVar7)(plVar5,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_80);
  }
  this_01 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
            (this + 0x200);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_01);
  if (this[0x24c] == (InfernoPFProjectile)0x0) {
    BoardHeroPlantButton::GetHeroPlant();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    FUN_03b0c004(lVar6 + 0x24c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    BoardHeroPlantButton::GetHeroPlant();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    getCarriedZombies();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_80);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)local_68), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_90,pRVar3);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                (this_01,(RtWeakPtr *)&local_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_80);
    getCarriedZombies();
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_68);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_68);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,pRVar3);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                (this_01,(RtWeakPtr *)aRStack_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoPFProjectile::onProjectileInitialized() */

void __thiscall InfernoPFProjectile::onProjectileInitialized(InfernoPFProjectile *this)

{
  InfernoSubsystem *pIVar1;
  long lVar2;
  
  InfernoProjectile::onProjectileInitialized((InfernoProjectile *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1e8));
  *(undefined4 *)(this + 0x220) = 0;
  pIVar1 = Board::GetGameSubSystem<InfernoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  InfernoSubsystem::RegisterCyclone((InfernoPFProjectile *)pIVar1);
  this[0x238] = (InfernoPFProjectile)0x0;
  *(undefined4 *)(this + 0x228) = 0x4096cbe4;
  *(undefined4 *)(this + 0x22c) = 0x4096cbe4;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x230) = 0x42700000;
  *(undefined4 *)(this + 0x234) = 0x42700000;
  lVar2 = Projectile::GetVelocity((Projectile *)this);
  Projectile::SetVelocity((Projectile *)this,64.0,*(float *)(lVar2 + 4),*(float *)(lVar2 + 8));
  this[0x24c] = (InfernoPFProjectile)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoPFProjectile::onUpdate(float) */

void __thiscall InfernoPFProjectile::onUpdate(InfernoPFProjectile *this,float param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  InfernoSubsystem *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *this_02;
  float fVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  local_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InfernoProjectile::onUpdate(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  calcPullRect();
  EntityFinder::GetEntitiesInRectangle(avStack_50,2,auStack_60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    nop();
    cVar1 = (**(code **)(*(long *)this + 0x1f0))(this);
    if (cVar1 != '\0') {
      lVar4 = FUN_03b0c01c(local_38,local_30);
      lVar5 = FUN_03b0c028(*(undefined8 *)(this + 0x1e8),*(undefined8 *)(this + 0x1f0));
      if ((ulong)(lVar5 + lVar4) < (ulong)(long)*(int *)(this + 0x220)) {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38,(Zombie **)local_20);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  this_00 = Board::GetGameSubSystem<InfernoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  InfernoSubsystem::RegisterPull(this_00,this,(vector *)&local_38);
  this[0x238] = (InfernoPFProjectile)0x0;
  getCarriedZombies();
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(local_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(local_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if ((this_02 != (ResourceInfo *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)this_02), bVar2)) {
      this[0x238] = (InfernoPFProjectile)0x1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)local_20);
  fVar6 = (float)FUN_03b0e114(this + 0x1a8,this + 0x1dc);
  *(float *)(this + 0x234) = (1.0 - fVar6 * 0.25) * *(float *)(this + 0x230);
  fVar6 = (float)FUN_03b0e114(this + 0x1a8,this + 0x1dc);
  *(float *)(this + 0x22c) = *(float *)(this + 0x228) + fVar6 * 6.2831855;
  fVar6 = sinf(*(float *)(this + 0x224));
  if (fVar6 <= 0.0) {
    uVar3 = FUN_03b0bf38(*(undefined4 *)(this + 0xa8));
    uVar3 = Board::MakeRenderOrder(0x64960,uVar3,0xfffffff6);
    FUN_03b0bf48(this + 0x50,uVar3);
  }
  else {
    uVar3 = FUN_03b0bf38(*(undefined4 *)(this + 0xa8));
    uVar3 = Board::MakeRenderOrder(0x64960,uVar3,10);
    FUN_03b0bf48(this + 0x50,uVar3);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

