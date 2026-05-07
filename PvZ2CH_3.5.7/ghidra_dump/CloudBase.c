// Class: CloudBase


/* CloudBase::getDamageTypeFlags() */

undefined8 CloudBase::getDamageTypeFlags(void)

{
  return 1;
}


/* CloudBase::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall CloudBase::SetOwner(CloudBase *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb8),param_2);
  return;
}


/* CloudBase::onNoTargetRemaining() */

void CloudBase::onNoTargetRemaining(void)

{
  return;
}


/* CloudBase::pickPreferredTarget(std::vector<BoardEntity*, std::allocator<BoardEntity*> >,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

undefined8 __thiscall
CloudBase::pickPreferredTarget(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_03e7fde8(*param_2,param_2[1]);
  if (lVar2 == 0) {
    lVar2 = FUN_03e7fde8(*param_3,param_3[1]);
    uVar4 = 0;
    if (lVar2 != 0) {
      iVar1 = Sexy::Rand((int)lVar2);
      puVar3 = (undefined8 *)FUN_03e7fdf4(*param_3,(long)iVar1);
      uVar4 = *puVar3;
    }
    return uVar4;
  }
  iVar1 = Sexy::Rand((int)lVar2);
  puVar3 = (undefined8 *)FUN_03e7fdf4(*param_2,(long)iVar1);
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CloudBase::StaticClassInit() */

void CloudBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"CloudBase");
    (*pcVar2)(plVar1,asStack_10,FUN_03e80e88,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CloudBase::StaticGetClass() */

long * CloudBase::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CloudBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CloudBase::GetClass() const */

long * CloudBase::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CloudBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CloudBase::setState(unsigned int) */

void __thiscall CloudBase::setState(CloudBase *this,uint param_1)

{
  if (*(uint *)(this + 0xdc) != param_1) {
    *(uint *)(this + 0xdc) = param_1;
    (**(code **)(*(long *)this + 0x1f8))();
  }
  return;
}


/* CloudBase::~CloudBase() */

void __thiscall CloudBase::~CloudBase(CloudBase *this)

{
  *(undefined ***)this = &PTR_GetClass_0678df10;
  *(undefined ***)(this + 0x10) = &PTR__CloudBase_0678e138;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to CloudBase::~CloudBase() */

void __thiscall CloudBase::~CloudBase(CloudBase *this)

{
  ~CloudBase(this + -0x10);
  return;
}


/* CloudBase::~CloudBase() */

void __thiscall CloudBase::~CloudBase(CloudBase *this)

{
  ~CloudBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CloudBase::~CloudBase() */

void __thiscall CloudBase::~CloudBase(CloudBase *this)

{
  ~CloudBase(this + -0x10);
  return;
}


/* CloudBase::CloudBase() */

void __thiscall CloudBase::CloudBase(CloudBase *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678df10;
  *(undefined ***)(this + 0x10) = &PTR__CloudBase_0678e138;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  return;
}


/* CloudBase::StaticNew() */

CloudBase * CloudBase::StaticNew(void)

{
  CloudBase *this;
  
  this = ::operator_new(0xf8);
  CloudBase(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CloudBase::onDraw(Sexy::Graphics*) */

void __thiscall CloudBase::onDraw(CloudBase *this,Graphics *param_1)

{
  PopAnimRig *this_00;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  uVar1 = FUN_03e7fe78(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  fVar2 = (float)FUN_03e7ff60(uVar1);
  fVar3 = (float)FUN_03e7ff60(0x42be0000);
  uVar6 = (ulong)*(uint *)(this + 0x1c);
  FUN_03e7fe78(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
  fVar4 = (float)FUN_03e7ff60(uVar6 & 0xffffffff);
  fVar5 = (float)FUN_03e7ff60(0x43020000);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10) +
       (float)(int)(((fVar2 - fVar3) - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x18));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14) +
       (float)(int)(((fVar4 - fVar5) - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  PopAnimRig::Draw(this_00,param_1,aSStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CloudBase::onUpdate() */

void __thiscall CloudBase::onUpdate(CloudBase *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  (**(code **)(*(long *)this + 0x1f0))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CloudBase::createDamage() */

void CloudBase::createDamage(void)

{
  long *in_x0;
  DamageInfo *pDVar1;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pDVar1._0_4_ = *(DamageInfo **)((long)in_x0 + 0xd4);
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0x208))();
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo(pDVar1._0_4_,local_10,local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CloudBase::findNextTarget() */

void __thiscall CloudBase::findNextTarget(CloudBase *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Zombie *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  GridItem *pGVar7;
  long lVar8;
  RtObject *this_01;
  code *pcVar9;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [3];
  Zombie *local_20 [3];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar1 == -1) {
LAB_03e816bc:
    if (*(int *)(this + 0xe4) != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      if ((*(int *)(this + 0xf0) == 0) || (*(int *)(this + 0xf4) == 0)) {
        EntityFinder::GetEntitiesOnBoard(avStack_80,*(undefined4 *)(this + 0xb0));
      }
      else {
        EntityFinder::GetEntitiesTouchingRectangle
                  (avStack_80,*(undefined4 *)(this + 0xb0),this + 0xe8,0xffffffff,0xffffffff);
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_38[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_80);
      while( true ) {
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_38);
        if (!bVar2) break;
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        this_01 = (RtObject *)*puVar6;
        bVar2 = Sexy::RtObject::IsA<Zombie>(this_01);
        if (bVar2) {
          this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
          uVar5 = operator|(1,8);
          uVar5 = operator|(uVar5,0x200);
          uVar4 = operator|(uVar5,0x10000);
          cVar3 = Zombie::MatchesAny(this_00,uVar4);
          if (((((cVar3 == '\0') &&
                (cVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
                cVar3 != '\0')) && (cVar3 = Zombie::IsTargetable(this_00), cVar3 != '\0')) &&
              (cVar3 = Zombie::IsInvisible(this_00), cVar3 == '\0')) &&
             ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 ||
              ((cVar3 = Zombie::IsFlying(this_00), cVar3 == '\0' &&
               (cVar3 = Zombie::IsJumping(this_00), cVar3 == '\0')))))) {
            local_20[0] = this_00;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68,
                       (BoardEntity **)local_20);
            goto LAB_03e817a0;
          }
        }
        else {
LAB_03e817a0:
          bVar2 = Sexy::RtObject::IsA<GridItem>(this_01);
          if (bVar2) {
            pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
            cVar3 = (**(code **)(*(long *)pGVar7 + 0x200))();
            if (cVar3 != '\0') {
              local_20[0] = (Zombie *)pGVar7;
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50,
                         (BoardEntity **)local_20);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
      pcVar9 = *(code **)(*(long *)this + 0x1e0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,(vector *)avStack_68)
      ;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20,(vector *)avStack_50)
      ;
      lVar8 = (*pcVar9)(this,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38,
                        (vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
      if (lVar8 == 0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_20);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      else {
        bVar2 = true;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0),(RtWeakPtrBase *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      goto LAB_03e817e8;
    }
  }
  else if (iVar1 != 0) {
    *(int *)(this + 0xe0) = iVar1 + -1;
    goto LAB_03e816bc;
  }
  bVar2 = false;
LAB_03e817e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CloudBase::onUpdateCloud() */

void CloudBase::onUpdateCloud(void)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  CloudBase *in_x0;
  ResourceInfo *this_00;
  SexyVector3 *this_01;
  SexyVector3 *this_02;
  RtObject *this_03;
  Zombie *this_04;
  undefined8 uVar6;
  float *pfVar7;
  code *pcVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float in_s2;
  float local_a0;
  float local_9c;
  undefined4 local_98 [4];
  undefined4 local_88;
  float local_84;
  undefined4 local_78;
  float local_74;
  undefined4 local_68;
  float local_64;
  float local_60;
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0xc0);
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_03 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    this_04 = Sexy::RtObject::Cast<Zombie>(this_03);
    if (this_04 != (Zombie *)0x0) {
      uVar6 = operator|(1,8);
      uVar5 = operator|(uVar6,0x200);
      cVar2 = Zombie::MatchesAny(this_04,uVar5);
      if (((cVar2 != '\0') || (cVar2 = Zombie::IsTargetable(this_04), cVar2 == '\0')) ||
         (cVar2 = Zombie::IsInvisible(this_04), cVar2 != '\0')) {
        bVar1 = this_00 != (ResourceInfo *)0x0;
        if ((bVar1) && (bVar4 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), bVar4)) {
          cVar2 = Zombie::IsFlying(this_04);
          bVar1 = true;
          if (cVar2 != '\0') {
            bVar9 = 0;
            goto LAB_03e819b8;
          }
          cVar2 = Zombie::IsJumping(this_04);
          if (cVar2 != '\0') {
            bVar9 = 0;
            goto LAB_03e819b8;
          }
        }
        bVar9 = 1;
        goto LAB_03e819b8;
      }
    }
  }
  bVar1 = this_00 != (ResourceInfo *)0x0;
  bVar9 = 0;
LAB_03e819b8:
  if (((bVar1) && (*(int *)(in_x0 + 0xe4) == -1 || 0 < *(int *)(in_x0 + 0xe4))) &&
     ((bVar3 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)in_x0),
      bVar9 < bVar3 && (cVar2 = (**(code **)(*(long *)in_x0 + 0x1d8))(), cVar2 != '\0')))) {
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
    local_98[0] = Sexy::SexyVector3::operator-(this_01,this_02);
    fVar10 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_98);
    if (100.0 < fVar10) {
      fVar10 = (float)PVZ_T();
      fVar11 = *(float *)(in_x0 + 200);
      if (fVar11 <= fVar10) {
        fVar10 = *(float *)(in_x0 + 0xd0);
        pcVar8 = *(code **)(*(long *)in_x0 + 0x78);
        local_88 = Sexy::SexyVector3::Normalize((SexyVector3 *)local_98);
        local_84 = fVar11;
        local_a0 = (float)PVZ_Dt();
        local_a0 = local_a0 * fVar10;
        local_9c = (float)DVec3::getLength((DVec3 *)local_98);
        pfVar7 = eastl::min_alt<float>(&local_a0,&local_9c);
        local_78 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,*pfVar7);
        local_74 = fVar11;
        local_68 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_78);
        local_64 = fVar11;
        local_60 = in_s2;
        (*pcVar8)();
      }
    }
    else {
      setState(in_x0,3);
      fVar10 = (float)PVZ_T();
      if (*(float *)(in_x0 + 200) <= fVar10) {
        fVar10 = (float)PVZ_T();
        pcVar8 = *(code **)(*(long *)in_x0 + 0x1e8);
        *(float *)(in_x0 + 200) = fVar10 + *(float *)(in_x0 + 0xcc);
        (*pcVar8)((DamageInfo *)&local_68);
        bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
        if ((bVar1) || (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar1))
        {
          local_60 = *(float *)(in_x0 + 0xd8) * local_60;
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
        (**(code **)(*(long *)in_x0 + 0x200))();
        if (*(int *)(in_x0 + 0xe4) != -1) {
          *(int *)(in_x0 + 0xe4) = *(int *)(in_x0 + 0xe4) + -1;
        }
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
  }
  else {
    setState(in_x0,2);
    cVar2 = findNextTarget(in_x0);
    if ((cVar2 == '\0') && (*(code **)(*(long *)in_x0 + 0x210) != onNoTargetRemaining)) {
      (**(code **)(*(long *)in_x0 + 0x210))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CloudBase::SetAttackRect(Sexy::TRect<int> const&) */

void __thiscall CloudBase::SetAttackRect(CloudBase *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf0) = uVar1;
  return;
}

