// Class: FishHookProjectile


/* FishHookProjectile::CastHook(float, RtReflectionDelegate<Sexy::Delegate0>) */

void FishHookProjectile::CastHook(long param_1,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(param_1 + 0x1d0),param_2);
  *(undefined4 *)(param_1 + 0x1a8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::getAttachmentPosition(Sexy::RtWeakPtr<Plant>) */

void FishHookProjectile::getAttachmentPosition
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtr<Sexy::ResourceInfo> *param_5)

{
  char cVar1;
  long *plVar2;
  Insets *pIVar3;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar5;
  Plant *pPVar6;
  undefined4 uVar7;
  float local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_58);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  pIVar3 = (Insets *)(**(code **)(*plVar2 + 0x178))();
  Sexy::Insets::Insets(aIStack_18,pIVar3);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  cVar1 = FUN_0495cdd0(*(undefined4 *)(lVar4 + 0x1d0));
  if (cVar1 == '\0') {
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    uStack_54 = *(undefined4 *)(param_4 + 0x1b8);
    local_58 = *pfVar5 + (float)local_10 * 0.5;
    local_50 = 0;
  }
  else {
    pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    local_48 = (float)Plant::GetRelocationPosition(pPVar6);
    uVar7 = 0x3f000000;
    uStack_54 = *(undefined4 *)(param_4 + 0x1b8);
    local_58 = local_48 + (float)local_10 * 0.5;
    local_44 = param_2;
    local_40 = param_3;
    pPVar6 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    local_38 = Plant::GetRelocationPosition(pPVar6);
    local_50 = param_3;
    local_34 = uVar7;
    local_30 = param_3;
  }
  local_28 = CONCAT44(uStack_54,local_58);
  local_20 = local_50;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_58,uStack_54,local_50);
}


/* FishHookProjectile::GetHookedPlant() */

void FishHookProjectile::GetHookedPlant(void)

{
  char cVar1;
  long in_x0;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  cVar1 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::empty
                    ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     (in_x0 + 0x218));
  if (cVar1 == '\0') {
    pRVar2 = (RtWeakPtrBase *)FUN_0495cddc(*(undefined8 *)(in_x0 + 0x218),0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,pRVar2);
    return;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::ReelHook(float, float, Sexy::SexyVector2,
   RtReflectionDelegate<Sexy::Delegate0>) */

void FishHookProjectile::ReelHook
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5,RtReflectionDelegate *param_6)

{
  char cVar1;
  SexyVector3 *pSVar2;
  float fVar3;
  float fVar4;
  RtMixedPtrBase aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(param_5 + 0x1d0),param_6);
  GetHookedPlant();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  *(undefined4 *)(param_5 + 0x1a8) = 2;
  fVar3 = (float)PVZ_T();
  if (cVar1 == '\0') {
    fVar4 = 2.0;
  }
  else {
    fVar4 = 1.0;
    fVar3 = fVar3 + 0.5;
  }
  *(float *)(param_5 + 0x1ac) = fVar3;
  *(float *)(param_5 + 0x1b0) = fVar3 + param_2 * fVar4;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_5);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x1b4),pSVar2);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,param_3,param_4,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x1c0),(SexyVector3 *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::GetHookedPlantGroup() */

void __thiscall FishHookProjectile::GetHookedPlantGroup(FishHookProjectile *this)

{
  char cVar1;
  long lVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  Plant *pPVar3;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetHookedPlant();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    pPVar3 = *(Plant **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar2 = Board::FindPlantGroup(pPVar3);
    if (lVar2 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_0495d480;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_0495d480:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishHookProjectile::FishHookProjectile() */

void __thiscall FishHookProjectile::FishHookProjectile(FishHookProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069154e0;
  *(undefined ***)(this + 0x10) = &PTR__FishHookProjectile_069156d0;
  DVec3::DVec3((DVec3 *)(this + 0x1b4));
  DVec3::DVec3((DVec3 *)(this + 0x1c0));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x1d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  return;
}


/* FishHookProjectile::StaticNew() */

FishHookProjectile * FishHookProjectile::StaticNew(void)

{
  FishHookProjectile *this;
  
  this = ::operator_new(0x230);
  FishHookProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::onDestroy() */

void __thiscall FishHookProjectile::onDestroy(FishHookProjectile *this)

{
  RtReflectionDelegate *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  RtMixedPtrBase *this_01;
  long lVar4;
  Delegate0 *pDVar5;
  undefined8 local_90;
  undefined8 local_88;
  Delegate0 aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  this_00 = (RtReflectionDelegate *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  iVar3 = ::RtReflectionDelegate::operator_cast_to_int(this_00);
  if (iVar3 != 0) {
    pDVar5 = (Delegate0 *)
             RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                       ((RtReflectionDelegate<Sexy::Delegate0> *)this_00);
    Sexy::Delegate0::Delegate0(aDStack_80,pDVar5);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)this_00,
               (RtReflectionDelegate *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)aDStack_80);
  }
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x218));
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x218));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    this_01 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
    if (cVar2 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      FUN_0495ce64(lVar4 + 0x189);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::onUpdate(float) */

void FishHookProjectile::onUpdate(float param_1)

{
  RtReflectionDelegate *pRVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  Delegate0 *pDVar5;
  SexyVector3 *pSVar6;
  code *pcVar7;
  float fVar8;
  undefined4 in_s1;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_s2;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  RtMixedPtrBase aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  Delegate0 aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  iVar4 = *(int *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 0) {
    GetHookedPlant();
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
    if (cVar3 != '\0') {
      pcVar7 = *(code **)(*(long *)in_x0 + 0x78);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
      local_90 = getAttachmentPosition();
      local_8c = in_s1;
      local_88 = in_s2;
      (*pcVar7)();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    iVar4 = *(int *)(in_x0 + 0x1a8);
  }
  if (iVar4 == 2) {
    GetHookedPlant();
    fVar11 = *(float *)(in_x0 + 0x1ac);
    fVar8 = (float)PVZ_T();
    if (fVar8 <= fVar11) {
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_a0);
      if (cVar3 != '\0') {
        pcVar7 = *(code **)(*(long *)in_x0 + 0x78);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
        local_90 = getAttachmentPosition();
        local_8c = in_s1;
        local_88 = in_s2;
        (*pcVar7)();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98)
        ;
        pSVar6 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(in_x0);
        Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x1b4),pSVar6);
      }
    }
    else {
      uVar12 = *(undefined4 *)(in_x0 + 0x1ac);
      uVar9 = *(undefined4 *)(in_x0 + 0x1b0);
      uVar13 = PVZ_T();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a0);
      uVar10 = 3;
      if (!bVar2) {
        uVar10 = 4;
      }
      local_8c = uVar9;
      local_88 = uVar13;
      local_90 = CurveLerp<Sexy::SexyVector3>(uVar12,in_x0 + 0x1b4,in_x0 + 0x1c0,uVar10);
      (**(code **)(*(long *)in_x0 + 0x78))();
    }
    fVar11 = *(float *)(in_x0 + 0x1b0);
    fVar8 = (float)PVZ_T();
    if (fVar11 < fVar8) {
      pRVar1 = (RtReflectionDelegate *)(in_x0 + 0x1d0);
      *(undefined4 *)(in_x0 + 0x1a8) = 0;
      iVar4 = ::RtReflectionDelegate::operator_cast_to_int(pRVar1);
      if (iVar4 != 0) {
        pDVar5 = (Delegate0 *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)pRVar1);
        Sexy::Delegate0::Delegate0(aDStack_80,pDVar5);
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)pRVar1,
                   (RtReflectionDelegate *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)aDStack_80);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  }
  else if (iVar4 == 3) {
    uVar13 = *(undefined4 *)(in_x0 + 0x1ac);
    uVar10 = *(undefined4 *)(in_x0 + 0x1b0);
    local_88 = PVZ_T();
    local_8c = uVar10;
    local_90 = CurveLerp<Sexy::SexyVector3>(uVar13,in_x0 + 0x1b4,in_x0 + 0x1c0,3);
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar8 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x1b0) < fVar8) {
      pRVar1 = (RtReflectionDelegate *)(in_x0 + 0x1d0);
      iVar4 = ::RtReflectionDelegate::operator_cast_to_int(pRVar1);
      if (iVar4 != 0) {
        pDVar5 = (Delegate0 *)
                 RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                           ((RtReflectionDelegate<Sexy::Delegate0> *)pRVar1);
        Sexy::Delegate0::Delegate0(aDStack_80,pDVar5);
        RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)pRVar1,
                   (RtReflectionDelegate *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)aDStack_80);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FishHookProjectile::~FishHookProjectile() */

void __thiscall FishHookProjectile::~FishHookProjectile(FishHookProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069154e0;
  *(undefined ***)(this + 0x10) = &PTR__FishHookProjectile_069156d0;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x218)
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x1d0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FishHookProjectile::~FishHookProjectile() */

void __thiscall FishHookProjectile::~FishHookProjectile(FishHookProjectile *this)

{
  ~FishHookProjectile(this + -0x10);
  return;
}


/* FishHookProjectile::~FishHookProjectile() */

void __thiscall FishHookProjectile::~FishHookProjectile(FishHookProjectile *this)

{
  ~FishHookProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FishHookProjectile::~FishHookProjectile() */

void __thiscall FishHookProjectile::~FishHookProjectile(FishHookProjectile *this)

{
  ~FishHookProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall FishHookProjectile::OnCollideEntity(FishHookProjectile *this,BoardEntity *param_1)

{
  RtReflectionDelegate *this_00;
  char cVar1;
  int iVar2;
  PlantGroup *this_01;
  char *pcVar3;
  SexyVector3 *this_02;
  Insets *pIVar4;
  vector *pvVar5;
  Delegate0 *pDVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  undefined4 uVar10;
  Vec3 aVStack_a0 [16];
  int local_90;
  undefined4 local_8c;
  int local_88;
  Delegate0 aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomManager::SetMaxLevel((DangerRoomManager *)this,0);
  if (param_1 == (BoardEntity *)0x0) {
    if (*(int *)(this + 0x1a8) != 1) goto LAB_0495dc80;
    *(undefined4 *)(this + 0x1a8) = 3;
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b4),this_02);
  }
  else {
    this_01 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if (this_01 != (PlantGroup *)0x0) {
      cVar1 = PlantGroup::HasInvinciblePlant();
      if (cVar1 == '\0') {
        if (*(int *)(this + 0x1a8) == 1) {
          lVar7 = *(long *)this_01;
          *(undefined4 *)(this + 0x1a8) = 0;
          this_00 = (RtReflectionDelegate *)(this + 0x1d0);
          pIVar4 = (Insets *)(**(code **)(lVar7 + 0x178))(this_01);
          Sexy::Insets::Insets((Insets *)&local_90,pIVar4);
          *(float *)(this + 0x1b4) = (float)local_90 + (float)local_88 * 0.5;
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this);
          *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(lVar7 + 4);
          pvVar5 = (vector *)PlantGroup::Plants();
          std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::operator=
                    ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     (this + 0x218),pvVar5);
          PlantGroup::SetProtectedFromShovel(this_01,true);
          iVar2 = ::RtReflectionDelegate::operator_cast_to_int(this_00);
          if (iVar2 != 0) {
            pDVar6 = (Delegate0 *)
                     RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                               ((RtReflectionDelegate<Sexy::Delegate0> *)this_00);
            Sexy::Delegate0::Delegate0(aDStack_80,pDVar6);
            RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
            RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                      ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)this_00,
                       (RtReflectionDelegate *)aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
            Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)aDStack_80)
            ;
          }
        }
        goto LAB_0495dc80;
      }
    }
    if (*(int *)(this + 0x1a8) != 1) goto LAB_0495dc80;
    lVar7 = *(long *)param_1;
    *(undefined4 *)(this + 0x1a8) = 3;
    pIVar4 = (Insets *)(**(code **)(lVar7 + 0x178))(param_1);
    Sexy::Insets::Insets((Insets *)&local_90,pIVar4);
    *(float *)(this + 0x1b4) = (float)local_90 + (float)local_88 * 0.5;
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    uVar10 = *(undefined4 *)(this_02 + 4);
    pcVar8 = *(code **)(*(long *)this + 0x78);
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1b8) = uVar10;
    (*pcVar8)(this,this + 0x1b4);
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  }
  fVar9 = (float)PVZ_T();
  iVar2 = 0;
  uVar10 = 0x41f00000;
  *(float *)(this + 0x1ac) = fVar9;
  *(float *)(this + 0x1b0) = fVar9 + 0.5;
  EATextSquish::Vec3::Vec3(aVStack_a0,10.0,30.0,0.0);
  local_90 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_a0);
  local_8c = uVar10;
  local_88 = iVar2;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1c0),(SexyVector3 *)&local_90);
LAB_0495dc80:
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Zomb_Beach_Fisher_Hook_Impact");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookProjectile::StaticClassInit() */

void FishHookProjectile::StaticClassInit(void)

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
            (apStack_30,"idle",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"casting",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reeling",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"bouncing",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"HookState");
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
    std::string::string((string *)avStack_20,"FishHookProjectile");
    (*pcVar3)(plVar2,avStack_20,FUN_0495e158,0x230,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishHookProjectile::StaticGetClass() */

long * FishHookProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FishHookProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishHookProjectile::GetClass() const */

long * FishHookProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"FishHookProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

